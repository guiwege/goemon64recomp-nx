#ifndef GOEMON64NX_AUDIO_HPP
#define GOEMON64NX_AUDIO_HPP

#include <cstddef>
#include <cstdint>

// SDL push device: 48000 Hz F32 stereo, 1024-frame buffers, allowed_changes=0.
void queue_samples(int16_t *audio_data, size_t sample_count);
size_t get_frames_remaining();
void set_frequency(uint32_t freq);
bool reset_audio(uint32_t output_freq);

#endif
