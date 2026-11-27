// "NX Options": the in-game settings menu, opened and closed with - and + together.
// Drawn with Dear ImGui over the frame about to be presented, from
// nx_VidExt_GL_SwapBuffers on the graphics thread. While it is open it owns the
// pad: the game sees a neutral pad (input.cpp) until every button is released
// after closing. Nothing touches GL before the menu or the FPS counter is first
// shown.
// Layout after the HarbourMasters ports' menus: the Settings tab and the Help,
// Quit, Restart and Close buttons on top, the sections on the left, the rows of
// the chosen section on the right (widgets: nx_menu_widgets.cpp).
#include "nx_menu.h"

#include "input.hpp"
#include "nx_log.hpp"
#include "nx_menu_widgets.h"
#include "nx_pad.hpp"
#include "nx_settings.h"

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <map>
#include <string>
#include <vector>

#include <SDL.h>
#include <glad/glad.h>
#include <switch.h>

#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_internal.h" // RenderTextEllipsis

const char *goemon64nx_program_path = nullptr;

// Last display list's pass times in microseconds (defined in gliden64_context.cpp).
// Pass 2 is 0 when the in-between was dropped. Hold / wait / drop are lifetime
// totals; count_frame turns them into last-second rates for the overlay.
extern std::atomic<uint32_t> goemon64nx_pass1_us;
extern std::atomic<uint32_t> goemon64nx_pass2_us;
extern std::atomic<uint32_t> goemon64nx_interp_holds;
extern std::atomic<uint32_t> goemon64nx_interp_waits;
extern std::atomic<uint32_t> goemon64nx_interp_dropped;

namespace {

using nx::Setting;
using nx::menu::Icon;
using nx::menu::Theme;

constexpr int SETTING_COUNT = static_cast<int>(Setting::Count);
enum Tab { TAB_SETTINGS, TAB_COUNT };
constexpr const char *TAB_NAMES[TAB_COUNT] = {"Settings"};
constexpr Icon ICONS[] = {Icon::Help, Icon::Quit, Icon::Restart, Icon::Close};
constexpr int ICON_COUNT = static_cast<int>(std::size(ICONS));

constexpr uint32_t TOGGLE = NX_MINUS | NX_PLUS;
constexpr uint32_t DIRECTIONS = NX_UP | NX_DOWN | NX_LEFT | NX_RIGHT;
constexpr uint64_t REPEAT_DELAY_MS = 400;
constexpr uint64_t REPEAT_INTERVAL_MS = 100;
constexpr float STICK_PRESS = 0.6f;
constexpr float STICK_RELEASE = 0.4f;
// Menu Size: the font in pixels for Small, Medium and Large; the layout's sizes below are for Medium and scale.
constexpr float FONT_SIZES[] = {23.0f, 27.0f, 32.0f};
// Share of the 1280x720 frame the panel covers (the console scales the frame to the TV).
constexpr ImVec2 PANEL_SHARE{0.92f, 0.90f};
constexpr float BAR_HEIGHT = 44.0f;
constexpr float SIDEBAR_WIDTH = 210.0f;
constexpr float SECTION_HEIGHT = 44.0f;
constexpr float ROW_PADDING = 7.0f;
constexpr float CHOICE_MIN_WIDTH = 240.0f;
constexpr float SLIDER_WIDTH = 300.0f;
constexpr int FOOTER_LINES = 5;
constexpr ImU32 OVERLAY_TEXT = IM_COL32(235, 235, 235, 255);

// Where the pad acts: the sections, the rows of the chosen section, or the buttons of the top bar;
// a modal box (an open choice list, a confirmation, the help) takes the pad until it closes.
enum class Zone { Sidebar, Content, Toolbar };
enum class Modal { None, Choices, Confirm, Help };
enum class Widget { Text, Checkbox, Choice, Slider };

std::atomic<bool> owns_pad{false};
bool is_open = false;
// Closed, but the pad stays away from the game until every button is up, so B, - or + do not leak into it.
bool release_pending = false;
bool changed = false;
bool scroll_to_selection = false;
bool scroll_to_top = false;
int selected = -1;
int tab = TAB_SETTINGS;
std::vector<int> tab_rows[TAB_COUNT];
std::vector<const char *> tab_sections[TAB_COUNT];
int tab_section[TAB_COUNT] = {};
std::map<std::string, int> section_row;
Zone zone = Zone::Sidebar;
int icon = 0;
Modal modal = Modal::None;
bool confirm_restart = false;
std::vector<const char *> choice_items;
int choice_index = 0;
ImVec2 choice_box_min{};
ImVec2 choice_box_max{};
uint32_t previous_buttons = 0;
uint32_t stick_direction = 0;
uint64_t repeat_at = 0;

enum class ImGuiState { NotStarted, Ready, Failed };
ImGuiState imgui_state = ImGuiState::NotStarted;
uint64_t last_frame_ms = 0;

int fps = 0;
int frames_counted = 0;
uint64_t fps_window_start_ms = 0;
int holds_per_second = 0;
int waits_per_second = 0;
int dropped_per_second = 0;
uint32_t holds_window_start = 0;
uint32_t waits_window_start = 0;
uint32_t dropped_window_start = 0;

const Theme &look() {
    return nx::menu::theme(nx::get(Setting::MenuTheme));
}

float font_size() {
    return FONT_SIZES[std::clamp(nx::get(Setting::MenuSize), 0, 2)];
}

float px(float medium) {
    return medium * font_size() / FONT_SIZES[1];
}

PlFontData shared_font{};
bool have_shared_font = false;
float loaded_font_size = 0.0f;

// The homebrew loader starts the .nro again on exit when told so (envSetNextLoad); not every loader can.
bool can_restart() {
    return goemon64nx_program_path != nullptr && goemon64nx_program_path[0] != '\0' && envHasNextLoad();
}

const char *row_section(int row) {
    return nx::info(static_cast<Setting>(row)).section;
}

const char *current_section() {
    return tab_sections[tab].empty() ? "" : tab_sections[tab][static_cast<size_t>(tab_section[tab])];
}

std::string section_key() {
    return std::string(TAB_NAMES[tab]) + "/" + current_section();
}

std::vector<int> section_rows() {
    std::vector<int> rows;
    for (int row : tab_rows[tab]) {
        if (std::strcmp(row_section(row), current_section()) == 0) {
            rows.push_back(row);
        }
    }
    return rows;
}

void build_tabs() {
    for (std::vector<int> &rows : tab_rows) {
        rows.clear();
    }
    for (int i = 0; i < SETTING_COUNT; i++) {
        tab_rows[TAB_SETTINGS].push_back(i);
    }
    for (int i = 0; i < TAB_COUNT; i++) {
        tab_sections[i].clear();
        for (int row : tab_rows[i]) {
            const char *section = row_section(row);
            const auto same = [&](const char *other) { return std::strcmp(other, section) == 0; };
            if (std::none_of(tab_sections[i].begin(), tab_sections[i].end(), same)) {
                tab_sections[i].push_back(section);
            }
        }
        tab_section[i] =
            std::clamp(tab_section[i], 0, std::max(0, static_cast<int>(tab_sections[i].size()) - 1));
    }
    const std::vector<int> rows = section_rows();
    if (zone == Zone::Content && std::find(rows.begin(), rows.end(), selected) == rows.end()) {
        zone = Zone::Sidebar;
    }
}

void save_changes() {
    if (changed) {
        nx::save();
        changed = false;
    }
}

// Quit Game, or Restart Game: the homebrew loader then starts the .nro again.
void leave_game(bool restart) {
    save_changes();
    if (restart) {
        const Result rc = envSetNextLoad(goemon64nx_program_path, goemon64nx_program_path);
        nx_log("restart: next load %s (rc 0x%x)", goemon64nx_program_path, rc);
    }
    SDL_Event quit{};
    quit.type = SDL_QUIT;
    SDL_PushEvent(&quit);
}

// The left stick acts as the D-pad along its dominant axis only (a diagonal would move and change a
// value at once), pressed past STICK_PRESS and released below STICK_RELEASE.
uint32_t menu_buttons(const NxPad &pad) {
    const float x = std::fabs(pad.lx);
    const float y = std::fabs(pad.ly);
    const float magnitude = std::max(x, y);
    if (magnitude < STICK_RELEASE) {
        stick_direction = 0;
    } else if (magnitude > STICK_PRESS || stick_direction != 0) {
        stick_direction = y >= x ? (pad.ly > 0 ? NX_UP : NX_DOWN) : (pad.lx > 0 ? NX_RIGHT : NX_LEFT);
    }
    return pad.buttons | stick_direction;
}

void open_menu() {
    build_tabs();
    is_open = true;
    owns_pad.store(true, std::memory_order_relaxed);
    release_pending = false;
    changed = false;
    modal = Modal::None;
    if (zone == Zone::Toolbar) {
        zone = Zone::Sidebar;
    }
    scroll_to_selection = true;
}

void close_menu() {
    is_open = false;
    release_pending = true;
    modal = Modal::None;
    save_changes();
}

bool is_switch(const nx::SettingInfo &info) {
    if (info.choices.size() != 2) {
        return false;
    }
    const char *first = info.choices.begin()[0];
    const char *second = info.choices.begin()[1];
    return (std::strcmp(first, "Off") == 0 && std::strcmp(second, "On") == 0) ||
           (std::strcmp(first, "On") == 0 && std::strcmp(second, "Off") == 0);
}

Widget row_widget(int row) {
    const nx::SettingInfo &info = nx::info(static_cast<Setting>(row));
    if (info.choices.size() == 0) {
        return Widget::Slider;
    }
    return is_switch(info) ? Widget::Checkbox : Widget::Choice;
}

std::string value_text(int row) {
    const Setting setting = static_cast<Setting>(row);
    const nx::SettingInfo &info = nx::info(setting);
    const int value = nx::get(setting);
    return info.choices.size() > 0 ? info.choices.begin()[value] : std::to_string(value) + info.suffix;
}

bool row_checked(int row) {
    return value_text(row) == "On";
}

float row_fraction(int row) {
    const nx::SettingInfo &info = nx::info(static_cast<Setting>(row));
    if (info.max <= info.min) {
        return 0.0f;
    }
    return static_cast<float>(nx::get(static_cast<Setting>(row)) - info.min) /
           static_cast<float>(info.max - info.min);
}

std::vector<const char *> row_choices(int row, int *current) {
    std::vector<const char *> items;
    for (const char *choice : nx::info(static_cast<Setting>(row)).choices) {
        items.push_back(choice);
    }
    *current = nx::get(static_cast<Setting>(row));
    return items;
}

bool restart_pending(int row) {
    const Setting setting = static_cast<Setting>(row);
    return nx::info(setting).needs_restart && nx::get(setting) != nx::at_startup(setting);
}

bool applies_at_restart(int row) {
    return nx::info(static_cast<Setting>(row)).needs_restart;
}

const char *row_label(int row) {
    return nx::info(static_cast<Setting>(row)).label;
}

const char *row_description(int row) {
    return nx::info(static_cast<Setting>(row)).description;
}

const char *icon_description(Icon which) {
    switch (which) {
        case Icon::Help:
            return "The buttons of this menu.";
        case Icon::Quit:
            return "Quit Game: closes the game and returns to the homebrew menu. Progress since your "
                   "last save is lost.";
        case Icon::Restart:
            return can_restart()
                       ? "Restart Game: closes the game and starts it again, to apply the aspect ratio "
                         "and the resolution. Progress since your last save is lost."
                       : "Restart Game: the homebrew loader that started the game cannot start it "
                         "again; use Quit Game.";
        case Icon::Close:
            return "Closes this menu, as - and + together.";
    }
    return "";
}

// A cycles through the values and toggles; left/right stop at the ends of a number range.
void change_selected(int direction, bool wrap) {
    if (selected < 0) {
        return;
    }
    const Setting setting = static_cast<Setting>(selected);
    const nx::SettingInfo &info = nx::info(setting);
    const int value = nx::get(setting);
    if (info.choices.size() > 0) {
        const int count = static_cast<int>(info.choices.size());
        nx::set(setting, (value + direction + count) % count);
    } else {
        int next = value + direction * info.step;
        if (wrap && next > info.max) {
            next = info.min;
        }
        nx::set(setting, next);
    }
    changed = true;
}

void enter_content() {
    const std::vector<int> rows = section_rows();
    if (rows.empty()) {
        return;
    }
    const auto saved = section_row.find(section_key());
    const bool still_there =
        saved != section_row.end() && std::find(rows.begin(), rows.end(), saved->second) != rows.end();
    selected = still_there ? saved->second : rows.front();
    zone = Zone::Content;
    scroll_to_selection = true;
}

void move_section(int direction) {
    if (direction < 0 && tab_section[tab] == 0) {
        zone = Zone::Toolbar;
        return;
    }
    const int last = static_cast<int>(tab_sections[tab].size()) - 1;
    const int next = std::clamp(tab_section[tab] + direction, 0, std::max(0, last));
    if (next != tab_section[tab]) {
        scroll_to_top = true;
    }
    tab_section[tab] = next;
}

void move_selection(int direction) {
    const std::vector<int> rows = section_rows();
    const auto found = std::find(rows.begin(), rows.end(), selected);
    if (found == rows.end()) {
        return;
    }
    const int index = std::clamp(static_cast<int>(found - rows.begin()) + direction, 0,
                                 static_cast<int>(rows.size()) - 1);
    selected = rows[static_cast<size_t>(index)];
    section_row[section_key()] = selected;
    scroll_to_selection = true;
}

void switch_tab(int direction) {
    for (int step = 0; step < TAB_COUNT; step++) {
        tab = (tab + direction + TAB_COUNT) % TAB_COUNT;
        if (!tab_rows[tab].empty()) {
            break;
        }
    }
    scroll_to_top = true;
    if (zone == Zone::Content) {
        enter_content();
    } else {
        zone = Zone::Sidebar;
    }
}

// Left on a row that has no value to move (a checkbox) goes back to the sections, as in the
// HarbourMasters menus; otherwise left and right change the value.
void adjust_row(int direction) {
    const Widget widget = row_widget(selected);
    if (widget == Widget::Choice || widget == Widget::Slider) {
        change_selected(direction, false);
    } else if (direction < 0) {
        zone = Zone::Sidebar;
    }
}

void activate_row() {
    switch (row_widget(selected)) {
        case Widget::Choice:
            choice_items = row_choices(selected, &choice_index);
            if (!choice_items.empty()) {
                modal = Modal::Choices;
            }
            break;
        case Widget::Checkbox:
        case Widget::Slider:
            change_selected(1, true);
            break;
        case Widget::Text:
            break;
    }
}

void apply_choice() {
    nx::set(static_cast<Setting>(selected), choice_index);
    changed = true;
}

void press_icon() {
    switch (ICONS[icon]) {
        case Icon::Help:
            modal = Modal::Help;
            break;
        case Icon::Quit:
            confirm_restart = false;
            modal = Modal::Confirm;
            break;
        case Icon::Restart:
            confirm_restart = true;
            modal = Modal::Confirm;
            break;
        case Icon::Close:
            close_menu();
            break;
    }
}

void handle_modal(uint32_t actions) {
    switch (modal) {
        case Modal::Help:
            if (actions & (NX_A | NX_B)) {
                modal = Modal::None;
            }
            break;
        case Modal::Confirm:
            if (actions & NX_B) {
                modal = Modal::None;
            } else if ((actions & NX_A) && (!confirm_restart || can_restart())) {
                leave_game(confirm_restart);
            }
            break;
        case Modal::Choices: {
            const int last = static_cast<int>(choice_items.size()) - 1;
            if (actions & NX_UP) {
                choice_index = std::max(0, choice_index - 1);
            }
            if (actions & NX_DOWN) {
                choice_index = std::min(last, choice_index + 1);
            }
            if (actions & NX_A) {
                apply_choice();
                modal = Modal::None;
            }
            if (actions & NX_B) {
                modal = Modal::None;
            }
            break;
        }
        case Modal::None:
            break;
    }
}

void handle_zone_input(uint32_t pressed, uint32_t actions) {
    if (pressed & (NX_L | NX_R)) {
        switch_tab((pressed & NX_L) != 0 ? -1 : 1);
        return;
    }
    switch (zone) {
        case Zone::Sidebar:
            if (actions & NX_B) {
                close_menu();
            } else if (actions & NX_UP) {
                move_section(-1);
            } else if (actions & NX_DOWN) {
                move_section(1);
            } else if (actions & (NX_RIGHT | NX_A)) {
                enter_content();
            }
            break;
        case Zone::Content:
            if (actions & NX_B) {
                zone = Zone::Sidebar;
            } else if (actions & NX_UP) {
                move_selection(-1);
            } else if (actions & NX_DOWN) {
                move_selection(1);
            } else if (actions & NX_LEFT) {
                adjust_row(-1);
            } else if (actions & NX_RIGHT) {
                adjust_row(1);
            } else if (actions & NX_A) {
                activate_row();
            }
            break;
        case Zone::Toolbar:
            if (actions & (NX_B | NX_DOWN)) {
                zone = Zone::Sidebar;
            } else if (actions & NX_LEFT) {
                icon = std::max(0, icon - 1);
            } else if (actions & NX_RIGHT) {
                icon = std::min(ICON_COUNT - 1, icon + 1);
            } else if (actions & NX_A) {
                press_icon();
            }
            break;
    }
}

void handle_zone(uint32_t pressed, uint32_t actions) {
    const Zone before = zone;
    handle_zone_input(pressed, actions);
    // A direction still held after moving to another zone must not repeat there (Right into a
    // section would otherwise go on changing its first row): it repeats again once pressed anew.
    if (zone != before) {
        repeat_at = UINT64_MAX;
    }
}

void update_input(uint64_t now) {
    NxPad pad;
    goemon64::input_read_pad(&pad);
    const uint32_t held = menu_buttons(pad);
    const uint32_t pressed = held & ~previous_buttons;
    previous_buttons = held;

    if ((held & TOGGLE) == TOGGLE && (pressed & TOGGLE) != 0 && imgui_state != ImGuiState::Failed) {
        is_open ? close_menu() : open_menu();
        repeat_at = now + REPEAT_DELAY_MS;
        return;
    }
    if (!is_open) {
        if (release_pending && held == 0) {
            release_pending = false;
            owns_pad.store(false, std::memory_order_relaxed);
        }
        return;
    }

    uint32_t actions = pressed;
    if ((pressed & DIRECTIONS) != 0) {
        repeat_at = now + REPEAT_DELAY_MS;
    } else if ((held & DIRECTIONS) != 0 && now >= repeat_at) {
        actions |= held & DIRECTIONS;
        repeat_at = now + REPEAT_INTERVAL_MS;
    }
    if (modal != Modal::None) {
        handle_modal(actions);
        return;
    }
    handle_zone(pressed, actions);
}

void count_frame(uint64_t now) {
    frames_counted++;
    if (now - fps_window_start_ms >= 1000) {
        fps = static_cast<int>(frames_counted * 1000 / (now - fps_window_start_ms));
        frames_counted = 0;
        fps_window_start_ms = now;
        const uint32_t holds = goemon64nx_interp_holds.load(std::memory_order_relaxed);
        const uint32_t waits = goemon64nx_interp_waits.load(std::memory_order_relaxed);
        const uint32_t dropped = goemon64nx_interp_dropped.load(std::memory_order_relaxed);
        holds_per_second = static_cast<int>(holds - holds_window_start);
        waits_per_second = static_cast<int>(waits - waits_window_start);
        dropped_per_second = static_cast<int>(dropped - dropped_window_start);
        holds_window_start = holds;
        waits_window_start = waits;
        dropped_window_start = dropped;
    }
}

void apply_style() {
    ImGuiStyle &style = ImGui::GetStyle();
    style.WindowRounding = 12.0f;
    style.WindowPadding = {22.0f, 18.0f};
    style.WindowBorderSize = 0.0f;
    style.ItemSpacing = {8.0f, 4.0f};
    style.ScrollbarSize = 6.0f;
    style.Colors[ImGuiCol_ChildBg] = {0.0f, 0.0f, 0.0f, 0.0f};
    style.Colors[ImGuiCol_ScrollbarBg] = {0.0f, 0.0f, 0.0f, 0.0f};
    style.Colors[ImGuiCol_ScrollbarGrab] = {1.0f, 1.0f, 1.0f, 0.18f};
}

// The atlas is built at the font's pixel size (sharper than scaling one size up or down).
void load_font(float size) {
    ImGuiIO &io = ImGui::GetIO();
    io.Fonts->Clear();
    ImFontConfig config;
    if (have_shared_font) {
        config.FontDataOwnedByAtlas = false;
        io.Fonts->AddFontFromMemoryTTF(shared_font.address, static_cast<int>(shared_font.size), size,
                                       &config);
    } else {
        config.SizePixels = size;
        io.Fonts->AddFontDefault(&config);
    }
    loaded_font_size = size;
}

bool start_imgui() {
    if (gladLoadGLLoader(reinterpret_cast<GLADloadproc>(SDL_GL_GetProcAddress)) == 0) {
        nx_log("menu: GL functions not found");
        return false;
    }
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    // The console's own font (covers Japanese); pl stays initialized because the font lives in its
    // shared memory.
    have_shared_font = R_SUCCEEDED(plInitialize(PlServiceType_User)) &&
                       R_SUCCEEDED(plGetSharedFontByType(&shared_font, PlSharedFontType_Standard));
    load_font(font_size());
    apply_style();
    // GLideN64 creates a 3.3 core profile context.
    return ImGui_ImplOpenGL3_Init("#version 330 core");
}

void draw_bar(const Theme &theme) {
    ImDrawList *draw = ImGui::GetWindowDrawList();
    const ImVec2 origin = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    const float height = px(BAR_HEIGHT) - 4.0f;
    float x = origin.x;
    for (int i = 0; i < TAB_COUNT; i++) {
        if (tab_rows[i].empty()) {
            continue;
        }
        const float tab_width = ImGui::CalcTextSize(TAB_NAMES[i]).x + 32.0f;
        nx::menu::button(draw, {x, origin.y}, {x + tab_width, origin.y + height}, TAB_NAMES[i], i == tab,
                         false, theme);
        x += tab_width + 8.0f;
    }
    const float GAP = px(12.0f);
    float icon_x = origin.x + width - ICON_COUNT * height - (ICON_COUNT - 1) * GAP;
    for (int i = 0; i < ICON_COUNT; i++) {
        const bool enabled = ICONS[i] != Icon::Restart || can_restart();
        nx::menu::icon_button(draw, {icon_x, origin.y}, height, ICONS[i],
                              zone == Zone::Toolbar && icon == i, enabled, theme);
        icon_x += height + GAP;
    }
    const float line_y = origin.y + px(BAR_HEIGHT) + 6.0f;
    draw->AddLine({origin.x, line_y}, {origin.x + width, line_y}, theme.line, 2.0f);
    ImGui::Dummy({width, px(BAR_HEIGHT) + 16.0f});
}

void draw_sidebar(const Theme &theme, float height) {
    ImGui::BeginChild("sections", {px(SIDEBAR_WIDTH), height});
    ImDrawList *draw = ImGui::GetWindowDrawList();
    for (size_t i = 0; i < tab_sections[tab].size(); i++) {
        const ImVec2 at = ImGui::GetCursorScreenPos();
        const ImVec2 size{px(SIDEBAR_WIDTH) - 12.0f, px(SECTION_HEIGHT)};
        ImGui::Dummy(size);
        const bool chosen = static_cast<int>(i) == tab_section[tab];
        nx::menu::button(draw, {at.x + 3.0f, at.y + 3.0f}, {at.x + size.x, at.y + size.y - 3.0f},
                         tab_sections[tab][i], chosen, chosen && zone == Zone::Sidebar, theme);
    }
    ImGui::EndChild();
}

float row_height() {
    return ImGui::GetTextLineHeight() + 2 * px(ROW_PADDING);
}

float needed_width(int row) {
    const float box = row_height() - 8.0f;
    const float text_width = ImGui::CalcTextSize(value_text(row).c_str()).x;
    switch (row_widget(row)) {
        case Widget::Choice:
            return std::max(px(CHOICE_MIN_WIDTH), text_width + box + 30.0f);
        case Widget::Slider:
            return px(SLIDER_WIDTH);
        default:
            return 0.0f;
    }
}

float draw_widget(ImDrawList *draw, int row, ImVec2 start, float right, float column, bool focused,
                  const Theme &theme) {
    const float box = row_height() - 8.0f;
    const float top = start.y + 4.0f;
    const float left = right - column;
    const std::string value = value_text(row);
    const float text_width = ImGui::CalcTextSize(value.c_str()).x;
    switch (row_widget(row)) {
        case Widget::Checkbox:
            nx::menu::checkbox(draw, {right - box, top}, box, row_checked(row), focused, theme);
            return right - box;
        case Widget::Choice:
            nx::menu::choice_box(draw, {left, top}, {right, top + box}, value.c_str(), focused, theme);
            if (focused) {
                choice_box_min = {left, top};
                choice_box_max = {right, top + box};
            }
            return left;
        case Widget::Slider:
            nx::menu::slider(draw, {left, top}, {right, top + box}, row_fraction(row), value.c_str(),
                             focused, theme);
            return left;
        case Widget::Text:
            draw->AddText({right - text_width, start.y + px(ROW_PADDING)}, theme.text_dim, value.c_str());
            return right - text_width;
    }
    return right;
}

void draw_row(int row, float column, const Theme &theme) {
    ImDrawList *draw = ImGui::GetWindowDrawList();
    const ImVec2 start = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    const float height = row_height();
    ImGui::Dummy({width, height});
    const bool focused = zone == Zone::Content && row == selected;
    const ImVec2 end{start.x + width, start.y + height};
    if (focused) {
        if (scroll_to_selection) {
            ImGui::SetScrollHereY(0.5f);
            scroll_to_selection = false;
        }
        draw->AddRectFilled(start, end, IM_COL32(255, 255, 255, 18), 6.0f);
        if (row_widget(row) == Widget::Text) {
            draw->AddRect(start, end, theme.focus, 6.0f, 0, 2.0f);
        }
    }
    float left = draw_widget(draw, row, start, end.x - 12.0f, column, focused, theme);
    if (restart_pending(row)) {
        left -= ImGui::CalcTextSize("*").x + 12.0f;
        draw->AddText({left, start.y + px(ROW_PADDING)}, nx::menu::RESTART_MARK, "*");
    }
    const ImVec2 label_min{start.x + 14.0f, start.y + px(ROW_PADDING)};
    const ImVec2 label_max{left - 16.0f, end.y};
    ImGui::PushStyleColor(ImGuiCol_Text, theme.text);
    ImGui::RenderTextEllipsis(draw, label_min, label_max, label_max.x, label_max.x, row_label(row),
                              nullptr, nullptr);
    ImGui::PopStyleColor();
}

void draw_content(const Theme &theme, float height) {
    ImGui::BeginChild("rows", {0.0f, height});
    if (scroll_to_top) {
        ImGui::SetScrollY(0.0f);
        scroll_to_top = false;
    }
    const std::vector<int> rows = section_rows();
    float column = 0.0f;
    for (int row : rows) {
        column = std::max(column, needed_width(row));
    }
    for (int row : rows) {
        draw_row(row, column, theme);
    }
    ImGui::EndChild();
}

void draw_footer(const Theme &theme) {
    ImDrawList *draw = ImGui::GetWindowDrawList();
    const ImVec2 at = ImGui::GetCursorScreenPos();
    draw->AddLine({at.x, at.y + 4.0f}, {at.x + ImGui::GetContentRegionAvail().x, at.y + 4.0f},
                  theme.line, 1.0f);
    ImGui::Dummy({0.0f, 10.0f});
    const char *description = zone == Zone::Content && selected >= 0 ? row_description(selected)
                            : zone == Zone::Toolbar                  ? icon_description(ICONS[icon])
                                                                     : nullptr;
    const bool note = zone == Zone::Content && selected >= 0 && applies_at_restart(selected);
    if (description != nullptr) {
        const ImVec2 top = ImGui::GetCursorScreenPos();
        const float bottom = top.y + 3 * ImGui::GetTextLineHeightWithSpacing();
        ImGui::PushClipRect(top, {top.x + ImGui::GetContentRegionAvail().x, bottom}, true);
        ImGui::PushTextWrapPos(0.0f);
        ImGui::TextUnformatted(description);
        ImGui::PopTextWrapPos();
        ImGui::PopClipRect();
        ImGui::SetCursorScreenPos({top.x, std::min(ImGui::GetCursorScreenPos().y, bottom)});
    }
    if (note) {
        ImGui::PushStyleColor(ImGuiCol_Text, nx::menu::RESTART_MARK);
        ImGui::TextUnformatted("* Applies the next time the game starts.");
        ImGui::PopStyleColor();
    }
    const char *hint = zone == Zone::Sidebar ? "Up/Down Section A Open L/R Tab B Close"
                       : zone == Zone::Content
                           ? "Up/Down Select Left/Right Change A Toggle or choose B Back"
                           : "Left/Right Choose A Select B Back";
    ImGui::SetCursorPosY(ImGui::GetWindowHeight() - ImGui::GetStyle().WindowPadding.y -
                         ImGui::GetTextLineHeight());
    ImGui::PushStyleColor(ImGuiCol_Text, theme.text_dim);
    ImGui::TextUnformatted(hint);
    ImGui::PopStyleColor();
}

void draw_modal(ImVec2 screen, const Theme &theme) {
    ImDrawList *draw = ImGui::GetForegroundDrawList();
    switch (modal) {
        case Modal::Choices:
            nx::menu::choice_list(draw, choice_box_min, choice_box_max, screen.y, choice_items,
                                  choice_index, theme);
            break;
        case Modal::Confirm:
            if (confirm_restart && !can_restart()) {
                nx::menu::dialog(draw, screen, "Restart Game",
                                 {"The homebrew loader that started the game",
                                  "cannot start it again: use Quit Game."},
                                 "B Back", theme);
            } else {
                nx::menu::dialog(
                    draw, screen, confirm_restart ? "Restart the game?" : "Quit the game?",
                    {confirm_restart ? "It closes and starts again, applying display settings."
                                     : "It closes and returns to the homebrew menu.",
                     "Progress since your last save is lost."},
                    "A Yes B No", theme);
            }
            break;
        case Modal::Help:
            nx::menu::dialog(draw, screen, "Buttons",
                             {"- and + Open or close this menu", "L / R Previous or next tab",
                              "Up / Down Section, then setting", "A Open, toggle, choose",
                              "Left / Right Change a value", "B Back, then close",
                              "Up on the first section reaches these buttons."},
                             "A or B Close", theme);
            break;
        case Modal::None:
            break;
    }
}

void draw_menu(float screen_width, float screen_height) {
    const Theme &theme = look();
    ImGuiStyle &style = ImGui::GetStyle();
    ImVec4 background = theme.panel;
    background.w = nx::get(Setting::MenuOpacity) / 100.0f;
    style.Colors[ImGuiCol_WindowBg] = background;
    style.Colors[ImGuiCol_Text] = ImGui::ColorConvertU32ToFloat4(theme.text);
    ImGui::GetBackgroundDrawList()->AddRectFilled({0.0f, 0.0f}, {screen_width, screen_height},
                                                  IM_COL32(0, 0, 0, 150));
    const ImVec2 panel{screen_width * PANEL_SHARE.x, screen_height * PANEL_SHARE.y};
    ImGui::SetNextWindowPos({(screen_width - panel.x) / 2, (screen_height - panel.y) / 2});
    ImGui::SetNextWindowSize(panel);
    ImGui::Begin("NX Options", nullptr,
                 ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoSavedSettings);
    draw_bar(theme);
    const float footer_height = FOOTER_LINES * ImGui::GetTextLineHeightWithSpacing() + 20.0f;
    const float body_height = ImGui::GetContentRegionAvail().y - footer_height;
    draw_sidebar(theme, body_height);
    ImGui::SameLine(0.0f, 0.0f);
    const ImVec2 at = ImGui::GetCursorScreenPos();
    ImGui::GetWindowDrawList()->AddLine({at.x + 6.0f, at.y}, {at.x + 6.0f, at.y + body_height},
                                        theme.line, 2.0f);
    ImGui::SetCursorScreenPos({at.x + 22.0f, at.y});
    draw_content(theme, body_height);
    draw_footer(theme);
    ImGui::End();
    draw_modal({screen_width, screen_height}, theme);
}

void draw_fps() {
    char line1[32];
    char line2[48];
    char line3[48];
    std::snprintf(line1, sizeof(line1), "%d FPS", fps);
    const bool interpolating = nx::interpolating();
    if (interpolating) {
        std::snprintf(line2, sizeof(line2), "p1 %uus  p2 %uus",
                      goemon64nx_pass1_us.load(std::memory_order_relaxed),
                      goemon64nx_pass2_us.load(std::memory_order_relaxed));
        std::snprintf(line3, sizeof(line3), "hold %d  wait %d  drop %d", holds_per_second,
                      waits_per_second, dropped_per_second);
    }
    ImDrawList *draw = ImGui::GetForegroundDrawList();
    const ImVec2 size1 = ImGui::CalcTextSize(line1);
    const ImVec2 size2 = interpolating ? ImGui::CalcTextSize(line2) : ImVec2{0.0f, 0.0f};
    const ImVec2 size3 = interpolating ? ImGui::CalcTextSize(line3) : ImVec2{0.0f, 0.0f};
    const float width = interpolating ? std::max(size1.x, std::max(size2.x, size3.x)) : size1.x;
    const float height = interpolating ? size1.y + size2.y + size3.y + 4.0f : size1.y;
    draw->AddRectFilled({12.0f, 12.0f}, {28.0f + width, 20.0f + height}, IM_COL32(0, 0, 0, 160), 6.0f);
    draw->AddText({20.0f, 16.0f}, OVERLAY_TEXT, line1);
    if (interpolating) {
        draw->AddText({20.0f, 16.0f + size1.y + 2.0f}, OVERLAY_TEXT, line2);
        draw->AddText({20.0f, 16.0f + size1.y + size2.y + 4.0f}, OVERLAY_TEXT, line3);
    }
}

// GLideN64 keeps its own GL state cache: everything the ImGui backend does not restore itself is
// put back here, so the next emulated frame finds GL exactly as it left it.
void render(int width, int height, uint64_t now) {
    GLint draw_framebuffer = 0;
    glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING, &draw_framebuffer);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);

    ImGuiIO &io = ImGui::GetIO();
    if (font_size() != loaded_font_size) {
        load_font(font_size());
        ImGui_ImplOpenGL3_DestroyFontsTexture();
        ImGui_ImplOpenGL3_CreateFontsTexture();
    }
    // The layout is in 1280x720 units; a larger window scales it up.
    io.DisplaySize = {1280.0f, 720.0f};
    io.DisplayFramebufferScale = {width / 1280.0f, height / 720.0f};
    io.DeltaTime = std::max(0.001f, (now - last_frame_ms) / 1000.0f);
    last_frame_ms = now;
    ImGui_ImplOpenGL3_NewFrame();
    ImGui::NewFrame();
    if (is_open) {
        draw_menu(io.DisplaySize.x, io.DisplaySize.y);
    }
    if (nx::get(Setting::ShowFps) != 0) {
        draw_fps();
    }
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, static_cast<GLuint>(draw_framebuffer));
}

} // namespace

bool goemon64nx_menu_owns_pad() {
    return owns_pad.load(std::memory_order_relaxed);
}

void goemon64nx_menu_on_swap(int width, int height) {
    const uint64_t now = SDL_GetTicks64();
    count_frame(now);
    update_input(now);
    if (!is_open && nx::get(Setting::ShowFps) == 0) {
        return;
    }
    if (imgui_state == ImGuiState::NotStarted) {
        imgui_state = start_imgui() ? ImGuiState::Ready : ImGuiState::Failed;
    }
    if (imgui_state == ImGuiState::Failed) {
        // A menu nobody can see must not keep the pad from the game.
        is_open = false;
        release_pending = false;
        owns_pad.store(false, std::memory_order_relaxed);
        return;
    }
    render(width, height, now);
}
