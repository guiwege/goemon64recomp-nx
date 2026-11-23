#include "nx_settings.h"

#include "nx_log.hpp"

#include <algorithm>
#include <atomic>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

#ifndef NX_SETTINGS_PATH
#define NX_SETTINGS_PATH GOEMON64NX_APP_DIR_SDMC "/nx_options.txt"
#endif

constexpr const char *SETTINGS_PATH = NX_SETTINGS_PATH;
constexpr int COUNT = static_cast<int>(nx::Setting::Count);
constexpr std::initializer_list<const char *> INVERT = {"None", "Invert X", "Invert Y", "Invert Both"};
constexpr std::initializer_list<const char *> OFF_ON = {"Off", "On"};

// Order follows nx::Setting. Choice indices match goemon64 enums except AnalogCamera
// (0 = Off, 1 = On; AnalogCamMode is On=0 / Off=1).
const nx::SettingInfo SETTINGS[COUNT] = {
    {"Display", "aspect_ratio", "Aspect Ratio",
     "16:9 fills the screen. 4:3 shows the original framing with black bars on the sides.", 0,
     {"16:9", "4:3"}, 0, 0, 0, true},
    {"Display", "resolution", "Resolution",
     "Internal resolution. 2x is lighter on the console, 3x fills the height of the 720p screen.", 0,
     {"2x (640x480)", "3x (960x720)"}, 0, 0, 0, true},
    {"Overlays", "show_fps", "Show FPS", "Frames shown per second, in the top left corner.", 0, OFF_ON},
    {"Audio", "master_volume", "Master Volume", "Volume of everything the game plays, music and sound effects.",
     100, {}, 0, 100, 5, false, "%"},
    {"Audio", "music_volume", "Music Volume", "Background music volume.", 100, {}, 0, 100, 5, false, "%"},
    {"Audio", "sound_volume", "Sound Effects Volume", "Sound effects volume.", 100, {}, 0, 100, 5, false, "%"},
    {"Performance", "clock_profile", "Clock Profile",
     "Clocks while in the game. Docked GPU (handheld only): the official 768 MHz GPU profile. Horizon OC "
     "(handheld only): the docked clocks set in Horizon OC. CPU Boost (needs Horizon OC): the CPU at 1785 MHz, "
     "the official boost clock, docked and handheld.",
     1, {"Console Default", "Docked GPU in Handheld", "Horizon OC Docked Clocks", "CPU Boost (Horizon OC)"}},
    {"Controls", "targeting_mode", "Targeting Mode",
     "Switch: tap Z to lock on, tap again to release. Hold: hold Z to keep the lock.", 0, {"Switch", "Hold"}},
    {"Controls", "invert_camera", "Invert Camera", "Inverts the third person camera controls.", 2, INVERT},
    {"Controls", "analog_camera", "Analog Camera", "Right stick moves the camera.", 0, OFF_ON},
    {"Controls", "invert_analog_camera", "Invert Analog Camera", "Inverts the right stick camera.", 0, INVERT},
    {"Controls", "rumble", "Rumble", "Rumble strength.", 25, {}, 0, 100, 5, false, "%"},
    {"Controls", "face_buttons", "Face Buttons",
     "Flipped swaps the A and B buttons in the game (not in this menu).", 0, {"Normal", "Flipped"}},
    {"Menu", "menu_theme", "Menu Theme", "Colors of this menu: orange or gray.", 0, {"Orange", "Gray"}},
    {"Menu", "menu_opacity", "Menu Opacity", "How much of the game shows through this menu: less is more.", 95,
     {}, 50, 100, 5, false, "%"},
    {"Menu", "menu_size", "Menu Size", "Size of the text and the boxes of this menu.", 1,
     {"Small", "Medium", "Large"}},
};

std::atomic<int> values[COUNT];
int startup_values[COUNT];

int index(nx::Setting setting) {
    return static_cast<int>(setting);
}

int clamp_value(const nx::SettingInfo &info, int value) {
    if (info.choices.size() > 0) {
        return std::clamp(value, 0, static_cast<int>(info.choices.size()) - 1);
    }
    return std::clamp(value, info.min, info.max);
}

void apply_defaults() {
    for (int i = 0; i < COUNT; i++) {
        values[i].store(SETTINGS[i].default_value, std::memory_order_relaxed);
        startup_values[i] = SETTINGS[i].default_value;
    }
}

// perf_update can run before load_config; ClockProfile default is Docked GPU (1).
[[maybe_unused]] const bool kDefaultsApplied = [] {
    apply_defaults();
    return true;
}();

} // namespace

const nx::SettingInfo &nx::info(Setting setting) {
    return SETTINGS[index(setting)];
}

int nx::get(Setting setting) {
    return values[index(setting)].load(std::memory_order_relaxed);
}

void nx::set(Setting setting, int value) {
    values[index(setting)].store(clamp_value(info(setting), value), std::memory_order_relaxed);
}

int nx::at_startup(Setting setting) {
    return startup_values[index(setting)];
}

// "key = value" lines; unknown keys and malformed lines are skipped, out-of-range values clamped.
void nx::load() {
    apply_defaults();
    bool found = false;
    if (FILE *file = std::fopen(SETTINGS_PATH, "r")) {
        found = true;
        char line[128];
        while (std::fgets(line, sizeof(line), file) != nullptr) {
            char key[64];
            char text[16];
            if (std::sscanf(line, " %63[a-z_] = %15s", key, text) != 2) {
                continue;
            }
            char *end = nullptr;
            const long value = std::strtol(text, &end, 10);
            if (end == text) {
                continue;
            }
            for (int i = 0; i < COUNT; i++) {
                if (std::strcmp(key, SETTINGS[i].key) == 0) {
                    set(static_cast<Setting>(i), static_cast<int>(std::clamp(value, -1000L, 1000L)));
                }
            }
        }
        std::fclose(file);
    }
    for (int i = 0; i < COUNT; i++) {
        startup_values[i] = values[i].load(std::memory_order_relaxed);
    }
    nx_log("nx_settings: %s %s", SETTINGS_PATH, found ? "loaded" : "missing, using defaults");
}

// Written next to the file, then renamed over it, so a full card or a power cut never leaves it truncated.
// The SD card's FAT rename does not replace an existing file.
void nx::save() {
    const std::string temporary = std::string(SETTINGS_PATH) + ".tmp";
    FILE *file = std::fopen(temporary.c_str(), "w");
    bool written = file != nullptr;
    for (int i = 0; written && i < COUNT; i++) {
        written = std::fprintf(file, "%s = %d\n", SETTINGS[i].key,
                               values[i].load(std::memory_order_relaxed)) > 0;
    }
    if (file != nullptr && std::fclose(file) != 0) {
        written = false;
    }
    if (!written || (std::remove(SETTINGS_PATH) != 0 && errno != ENOENT) ||
        std::rename(temporary.c_str(), SETTINGS_PATH) != 0) {
        nx_log("nx_settings: cannot write %s", SETTINGS_PATH);
        std::remove(temporary.c_str());
        return;
    }
    nx_log("nx_settings: saved %s", SETTINGS_PATH);
}
