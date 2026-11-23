#include "audio.hpp"

#include "goemon_sound.h"
#include "nx_log.hpp"
#include "nx_settings.h"

#include <SDL.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <vector>

namespace {

constexpr uint32_t kDefaultOutputRate = 48000;
constexpr uint32_t input_channels = 2;
uint32_t output_channels = 2;
constexpr uint32_t duplicated_input_frames = 4;
uint32_t discarded_output_frames = 0;
constexpr uint32_t bytes_per_frame = input_channels * sizeof(float);
constexpr uint64_t MAX_QUEUED_AUDIO_US = 250000;
constexpr Uint16 AUDIO_BUFFER_FRAMES = 1024;

SDL_AudioCVT audio_convert{};
SDL_AudioDeviceID audio_device = 0;
uint32_t sample_rate = kDefaultOutputRate;
uint32_t output_sample_rate = kDefaultOutputRate;

std::atomic<uint32_t> g_queue_count{0};
std::atomic<uint32_t> g_drop_count{0};

bool update_audio_converter() {
    if (sample_rate == 0) {
        nx_log("SDL_BuildAudioCVT skipped: sample_rate is 0");
        return false;
    }
    if (SDL_BuildAudioCVT(&audio_convert, AUDIO_F32, static_cast<Uint8>(input_channels),
                          static_cast<int>(sample_rate), AUDIO_F32,
                          static_cast<Uint8>(output_channels),
                          static_cast<int>(output_sample_rate)) < 0) {
        nx_log("SDL_BuildAudioCVT failed: %s", SDL_GetError());
        return false;
    }
    discarded_output_frames = duplicated_input_frames * output_sample_rate / sample_rate;
    return true;
}

} // namespace

bool reset_audio(uint32_t output_freq) {
    if (output_freq == 0) {
        output_freq = kDefaultOutputRate;
    }

    if (audio_device != 0) {
        SDL_CloseAudioDevice(audio_device);
        audio_device = 0;
    }

    SDL_AudioSpec spec{};
    spec.freq = static_cast<int>(output_freq);
    spec.format = AUDIO_F32;
    spec.channels = static_cast<Uint8>(output_channels);
    spec.silence = 0;
    spec.samples = AUDIO_BUFFER_FRAMES;
    spec.padding = 0;
    spec.size = 0;
    spec.callback = nullptr;
    spec.userdata = nullptr;

    audio_device = SDL_OpenAudioDevice(nullptr, 0, &spec, nullptr, 0);
    if (audio_device == 0) {
        nx_log("SDL_OpenAudioDevice failed: %s", SDL_GetError());
        return false;
    }

    SDL_PauseAudioDevice(audio_device, 0);
    output_sample_rate = output_freq;
    if (!update_audio_converter()) {
        SDL_CloseAudioDevice(audio_device);
        audio_device = 0;
        return false;
    }

    nx_log("audio init device=%u %u Hz %u frames",
           static_cast<unsigned>(audio_device), output_sample_rate,
           static_cast<unsigned>(AUDIO_BUFFER_FRAMES));
    return true;
}

void queue_samples(int16_t *audio_data, size_t sample_count) {
    if (audio_device == 0 || audio_data == nullptr || sample_count == 0) {
        return;
    }

    static std::vector<float> swap_buffer;
    static std::array<float, duplicated_input_frames * input_channels> duplicated_sample_buffer{};

    const size_t resampled_sample_count = sample_count + duplicated_input_frames * input_channels;
    const size_t max_sample_count = std::max(
        resampled_sample_count, resampled_sample_count * static_cast<size_t>(audio_convert.len_mult));
    if (max_sample_count > swap_buffer.size()) {
        swap_buffer.resize(max_sample_count);
    }

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        swap_buffer[i] = duplicated_sample_buffer[i];
    }

    const float gain = (0.5f / 32768.0f) * static_cast<float>(goemon64::get_main_volume()) / 100.0f;
    for (size_t i = 0; i < sample_count; i += input_channels) {
        swap_buffer[i + 0 + duplicated_input_frames * input_channels] =
            static_cast<float>(audio_data[i + 1]) * gain;
        swap_buffer[i + 1 + duplicated_input_frames * input_channels] =
            static_cast<float>(audio_data[i + 0]) * gain;
    }

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        duplicated_sample_buffer[i] = swap_buffer[i + sample_count];
    }

    audio_convert.buf = reinterpret_cast<Uint8 *>(swap_buffer.data());
    audio_convert.len = static_cast<int>(resampled_sample_count * sizeof(swap_buffer[0]));
    if (SDL_ConvertAudio(&audio_convert) < 0) {
        nx_log("SDL_ConvertAudio failed: %s", SDL_GetError());
        return;
    }

    const uint64_t queued_us = static_cast<uint64_t>(SDL_GetQueuedAudioSize(audio_device)) /
                               bytes_per_frame * 1000000 / output_sample_rate;

    const uint32_t n = ++g_queue_count;
    if (n <= 4 || (n % 120) == 0) {
        nx_log("audio queue_samples #%u count=%zu queued_us=%llu", n, sample_count,
               static_cast<unsigned long long>(queued_us));
    }

    if (queued_us > MAX_QUEUED_AUDIO_US) {
        const uint32_t d = ++g_drop_count;
        if (d <= 4 || (d % 120) == 0) {
            nx_log("audio drop queued_us=%llu", static_cast<unsigned long long>(queued_us));
        }
        return;
    }

    const uint32_t discarded_bytes =
        output_channels * discarded_output_frames * static_cast<uint32_t>(sizeof(swap_buffer[0]));
    if (static_cast<uint32_t>(audio_convert.len_cvt) <= discarded_bytes) {
        return;
    }
    const uint32_t num_bytes_to_queue = static_cast<uint32_t>(audio_convert.len_cvt) - discarded_bytes;
    float *samples_to_queue = swap_buffer.data() + output_channels * discarded_output_frames / 2;
    SDL_QueueAudio(audio_device, samples_to_queue, num_bytes_to_queue);
}

size_t get_frames_remaining() {
    if (audio_device == 0 || output_sample_rate == 0 || output_channels == 0) {
        return 0;
    }

    constexpr float buffer_offset_frames = 1.0f;
    uint64_t buffered_byte_count = SDL_GetQueuedAudioSize(audio_device);
    buffered_byte_count = buffered_byte_count * 2 * sample_rate / output_sample_rate / output_channels;
    const uint32_t frames_per_vi = sample_rate / 60;
    if (buffered_byte_count > (buffer_offset_frames * bytes_per_frame * frames_per_vi)) {
        buffered_byte_count -= (buffer_offset_frames * bytes_per_frame * frames_per_vi);
    } else {
        buffered_byte_count = 0;
    }
    return static_cast<size_t>(buffered_byte_count / bytes_per_frame);
}

void set_frequency(uint32_t freq) {
    if (freq == 0) {
        freq = kDefaultOutputRate;
    }
    sample_rate = freq;
    update_audio_converter();
    nx_log("audio set_frequency %u", freq);
}

void goemon64::reset_sound_settings() {
    nx::set(nx::Setting::MasterVolume, 100);
    nx::set(nx::Setting::MusicVolume, 100);
    nx::set(nx::Setting::SoundVolume, 100);
}

void goemon64::set_main_volume(int volume) {
    nx::set(nx::Setting::MasterVolume, volume);
}

int goemon64::get_main_volume() {
    return nx::get(nx::Setting::MasterVolume);
}

void goemon64::set_bgm_volume(int volume) {
    nx::set(nx::Setting::MusicVolume, volume);
}

int goemon64::get_bgm_volume() {
    return nx::get(nx::Setting::MusicVolume);
}

void goemon64::set_se_volume(int volume) {
    nx::set(nx::Setting::SoundVolume, volume);
}

int goemon64::get_se_volume() {
    return nx::get(nx::Setting::SoundVolume);
}
