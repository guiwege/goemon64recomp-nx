#include "gliden64_context.hpp"

#include "core_switch.hpp"
#include "goemon_render.h"
#include "nx_debug.hpp"
#include "nx_log.hpp"
#include "nx_settings.h"

#include "librecomp/addresses.hpp"

#include <atomic>
#include <cinttypes>
#include <cstring>

#include <SDL.h>

extern "C" uint32_t goemon64nx_take_dl_command_count();
extern "C" void goemon64nx_log_texcache();

#define M64P_PLUGIN_PROTOTYPES 1
#include "m64p_common.h"
#include "m64p_plugin.h"
#include "m64p_types.h"

namespace {

// osSpTaskLoad leaves OSTask at the end of DMEM (16 words).
constexpr uint32_t kTaskDmemOffset = 0xFC0;
constexpr uint32_t kKsegMask = 0x1FFFFFFFu;
// GLideN64 reads HEADER[(0x20 + i) ^ 3] for per-game hacks.
// 20-byte cart internal name (space-padded); GLideN64 strips trailing spaces.
constexpr char kRomName[] = "MYSTICAL NINJA      ";
static_assert(sizeof(kRomName) == 21, "N64 internal name is 20 bytes plus NUL");

uint8_t dmem[0x1000];
uint8_t imem[0x1000];
uint8_t rom_header[0x40];
unsigned int mi_intr_reg;
unsigned int sp_status_reg;
unsigned int dpc_start_reg, dpc_end_reg, dpc_current_reg, dpc_status_reg;
unsigned int dpc_clock_reg, dpc_bufbusy_reg, dpc_pipebusy_reg, dpc_tmem_reg;
const unsigned int rdram_size = static_cast<unsigned int>(recomp::mem_size);

std::atomic<uint32_t> g_send_dl_count{0};
std::atomic<uint32_t> g_update_screen_count{0};

bool should_log_count(uint32_t n) {
    return n <= 8 || (n % 60) == 0;
}

void check_interrupts() {}

void debug_callback(void *, int level, const char *message) {
    if (level > M64MSG_WARNING || message == nullptr) {
        return;
    }
    // A missed G_ENDDL on 512 MiB RDRAM can emit millions of these; logging
    // each one stalls the gfx thread (looks like a freeze after file-select).
    if (std::strstr(message, "UNKNOWN GBI") != nullptr ||
        std::strstr(message, "unknown ucode") != nullptr) {
        static uint32_t spam = 0;
        const uint32_t n = ++spam;
        if (n > 8 && (n % 1000) != 0) {
            return;
        }
    }
    nx_log("[GLideN64] %s", message);
}

void build_rom_header() {
    std::memset(rom_header, 0, sizeof(rom_header));
    for (size_t i = 0; i < sizeof(kRomName) - 1; i++) {
        rom_header[(0x20 + i) ^ 3] = static_cast<uint8_t>(kRomName[i]);
    }
}

uint32_t to_physical(int32_t address) {
    return static_cast<uint32_t>(address) & kKsegMask;
}

void log_gl_strings() {
    using GlGetStringFn = const unsigned char *(*)(unsigned int);
    auto glGetString = reinterpret_cast<GlGetStringFn>(SDL_GL_GetProcAddress("glGetString"));
    if (glGetString == nullptr) {
        nx_log("GLideN64Context: glGetString missing after RomOpen");
        return;
    }
    constexpr unsigned kGlVendor = 0x1F00;
    constexpr unsigned kGlRenderer = 0x1F01;
    constexpr unsigned kGlVersion = 0x1F02;
    const char *vendor = reinterpret_cast<const char *>(glGetString(kGlVendor));
    const char *renderer = reinterpret_cast<const char *>(glGetString(kGlRenderer));
    const char *version = reinterpret_cast<const char *>(glGetString(kGlVersion));
    nx_log("GLideN64 GL_VENDOR=%s GL_RENDERER=%s GL_VERSION=%s", vendor != nullptr ? vendor : "?",
           renderer != nullptr ? renderer : "?", version != nullptr ? version : "?");
}

void fail_setup(ultramodern::renderer::SetupResult *setup_result, const char *what) {
    nx_log("GLideN64Context: %s failed", what);
    nx_debug_checkpoint(what);
    *setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
}

} // namespace

namespace goemon64nx {

GLideN64Context::GLideN64Context(uint8_t *rdram, ultramodern::renderer::WindowHandle window,
                                 bool developer_mode)
    : rdram_(rdram), window_(window), developer_mode_(developer_mode), valid_(false) {
    chosen_api = ultramodern::renderer::GraphicsApi::Auto;
    setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;

    nx_log("GLideN64Context: rdram=%p window=%p developer=%d RDRAM_SIZE=%u MiB",
           static_cast<void *>(rdram_), static_cast<void *>(window_), developer_mode_ ? 1 : 0,
           rdram_size / (1024u * 1024u));

    if (rdram_ == nullptr) {
        fail_setup(&setup_result, "GLideN64Context rdram null");
        return;
    }

    build_rom_header();

    if (PluginStartup(nullptr, nullptr, debug_callback) != M64ERR_SUCCESS) {
        fail_setup(&setup_result, "PluginStartup");
        return;
    }
    plugin_started_ = true;
    // create_window already seeded before PluginStartup (ConfigSetDefault is
    // only-if-absent). Seed again after: a version mismatch can
    // ConfigDeleteSection, and RomOpen's Config_LoadConfig must see Expand's
    // AspectRatio 2 / 4:3's 1 and nativeRes 2|3.
    goemon64nx_seed_gliden64_config();

    ultramodern::renderer::ViRegs *vi = ultramodern::renderer::get_vi_regs();
    if (vi == nullptr) {
        fail_setup(&setup_result, "get_vi_regs");
        return;
    }

    GFX_INFO info{};
    info.HEADER = rom_header;
    info.RDRAM = rdram_;
    info.DMEM = dmem;
    info.IMEM = imem;
    info.MI_INTR_REG = &mi_intr_reg;
    info.DPC_START_REG = &dpc_start_reg;
    info.DPC_END_REG = &dpc_end_reg;
    info.DPC_CURRENT_REG = &dpc_current_reg;
    info.DPC_STATUS_REG = &dpc_status_reg;
    info.DPC_CLOCK_REG = &dpc_clock_reg;
    info.DPC_BUFBUSY_REG = &dpc_bufbusy_reg;
    info.DPC_PIPEBUSY_REG = &dpc_pipebusy_reg;
    info.DPC_TMEM_REG = &dpc_tmem_reg;
    info.VI_STATUS_REG = &vi->VI_STATUS_REG;
    info.VI_ORIGIN_REG = &vi->VI_ORIGIN_REG;
    info.VI_WIDTH_REG = &vi->VI_WIDTH_REG;
    info.VI_INTR_REG = &vi->VI_INTR_REG;
    info.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
    info.VI_TIMING_REG = &vi->VI_TIMING_REG;
    info.VI_V_SYNC_REG = &vi->VI_V_SYNC_REG;
    info.VI_H_SYNC_REG = &vi->VI_H_SYNC_REG;
    info.VI_LEAP_REG = &vi->VI_LEAP_REG;
    info.VI_H_START_REG = &vi->VI_H_START_REG;
    info.VI_V_START_REG = &vi->VI_V_START_REG;
    info.VI_V_BURST_REG = &vi->VI_V_BURST_REG;
    info.VI_X_SCALE_REG = &vi->VI_X_SCALE_REG;
    info.VI_Y_SCALE_REG = &vi->VI_Y_SCALE_REG;
    info.CheckInterrupts = check_interrupts;
    info.version = 2;
    info.SP_STATUS_REG = &sp_status_reg;
    info.RDRAM_SIZE = &rdram_size;

    if (!InitiateGFX(info)) {
        fail_setup(&setup_result, "InitiateGFX");
        return;
    }
    nx_debug_checkpoint("InitiateGFX");

    if (!RomOpen()) {
        fail_setup(&setup_result, "RomOpen");
        return;
    }
    nx_debug_checkpoint("RomOpen");
    log_gl_strings();

    setup_result = ultramodern::renderer::SetupResult::Success;
    valid_ = true;
    nx_debug_checkpoint("GLideN64Context ctor");
}

GLideN64Context::~GLideN64Context() {
    shutdown();
}

bool GLideN64Context::valid() {
    return valid_;
}

bool GLideN64Context::update_config(const ultramodern::renderer::GraphicsConfig &,
                                    const ultramodern::renderer::GraphicsConfig &) {
    return true;
}

void GLideN64Context::enable_instant_present() {}

void GLideN64Context::send_dl(const OSTask *task) {
    if (!valid_ || task == nullptr) {
        return;
    }

    const OSTask_s &t = task->t;
    const uint32_t words[16] = {
        t.type,
        t.flags,
        to_physical(t.ucode_boot),
        t.ucode_boot_size,
        to_physical(t.ucode),
        t.ucode_size,
        to_physical(t.ucode_data),
        t.ucode_data_size,
        to_physical(t.dram_stack),
        t.dram_stack_size,
        to_physical(t.output_buff),
        to_physical(t.output_buff_size),
        to_physical(t.data_ptr),
        t.data_size,
        to_physical(t.yield_data_ptr),
        t.yield_data_size,
    };
    std::memcpy(&dmem[kTaskDmemOffset], words, sizeof(words));
    // HALT | BROKE | TASKDONE, required by GFX_INFO v2 before ProcessDList.
    sp_status_reg = 0x0203;

    const uint32_t n = ++g_send_dl_count;
    const uint32_t phys = to_physical(t.data_ptr);
    if (phys >= 0x800000u) {
        static bool logged_ext = false;
        if (!logged_ext) {
            logged_ext = true;
            nx_log("send_dl #%u first extended DL phys=0x%08" PRIx32 " ucode=0x%08" PRIx32,
                   n, phys, static_cast<uint32_t>(t.ucode));
        }
    }
    if (n == 1) {
        nx_log("send_dl #%u type=%" PRIu32 " ucode=0x%08" PRIx32 " data_ptr=0x%08" PRIx32
               " phys=0x%08" PRIx32 " data_size=%" PRIu32,
               n, t.type, static_cast<uint32_t>(t.ucode), static_cast<uint32_t>(t.data_ptr), phys,
               t.data_size);
        nx_debug_checkpoint("ProcessDList #1");
        for (uint32_t i = 0; i < 6 && (phys + i * 8 + 8) <= rdram_size; i++) {
            uint32_t w0 = 0;
            uint32_t w1 = 0;
            std::memcpy(&w0, rdram_ + phys + i * 8, 4);
            std::memcpy(&w1, rdram_ + phys + i * 8 + 4, 4);
            nx_log("  Gfx[%u] w0=0x%08X w1=0x%08X op=0x%02X", i, w0, w1, w0 >> 24);
        }
    }

    ProcessDList();
    const uint32_t cmds = goemon64nx_take_dl_command_count();
    if (n == 1) {
        nx_log("ProcessDList #1 cmds=%u", cmds);
    }
}

void GLideN64Context::update_screen() {
    if (!valid_) {
        return;
    }

    const uint32_t n = ++g_update_screen_count;
    if (should_log_count(n)) {
        const ultramodern::renderer::ViRegs *regs = ultramodern::renderer::get_vi_regs();
        const unsigned origin = regs != nullptr ? regs->VI_ORIGIN_REG : 0;
        const unsigned width = regs != nullptr ? regs->VI_WIDTH_REG : 0;
        const unsigned status = regs != nullptr ? regs->VI_STATUS_REG : 0;
        const unsigned hstart = regs != nullptr ? regs->VI_H_START_REG : 0;
        const unsigned vstart = regs != nullptr ? regs->VI_V_START_REG : 0;
        const unsigned xscale = regs != nullptr ? regs->VI_X_SCALE_REG : 0;
        const unsigned yscale = regs != nullptr ? regs->VI_Y_SCALE_REG : 0;
        nx_log("update_screen #%u VI_ORIGIN=0x%08x VI_WIDTH=%u STATUS=0x%08x H_START=0x%08x "
               "V_START=0x%08x X_SCALE=0x%08x Y_SCALE=0x%08x",
               n, origin, width, status, hstart, vstart, xscale, yscale);
        if (n == 1) {
            nx_debug_checkpoint("UpdateScreen #1");
        }
    }

    UpdateScreen();
    if (should_log_count(n)) {
        goemon64nx_log_texcache();
    }
}

void GLideN64Context::shutdown() {
    if (valid_) {
        RomClosed();
        valid_ = false;
    }
    if (plugin_started_) {
        PluginShutdown();
        plugin_started_ = false;
        nx_log("GLideN64Context shutdown (send_dl=%u update_screen=%u)", g_send_dl_count.load(),
               g_update_screen_count.load());
    }
}

uint32_t GLideN64Context::get_display_framerate() const {
    return 60;
}

float GLideN64Context::get_resolution_scale() const {
    return static_cast<float>(nx::resolution_factor());
}

} // namespace goemon64nx

namespace goemon64 {
namespace renderer {

std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(
    uint8_t *rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
    nx_log("create_render_context rdram=%p window=%p", static_cast<void *>(rdram),
           static_cast<void *>(window_handle));
    nx_debug_checkpoint("create_render_context");
    return std::make_unique<goemon64nx::GLideN64Context>(rdram, window_handle, developer_mode);
}

} // namespace renderer
} // namespace goemon64
