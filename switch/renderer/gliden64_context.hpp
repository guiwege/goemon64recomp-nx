#ifndef GOEMON64NX_GLIDEN64_CONTEXT_HPP
#define GOEMON64NX_GLIDEN64_CONTEXT_HPP

// RendererContext over statically linked GLideN64 (Mesa/EGL, GL 3.3 core on
// the gfx thread). PluginStartup / InitiateGFX / RomOpen run in the ctor.

#include <cstdint>

#include "ultramodern/renderer_context.hpp"

namespace goemon64nx {

class GLideN64Context final : public ultramodern::renderer::RendererContext {
public:
    GLideN64Context(uint8_t *rdram, ultramodern::renderer::WindowHandle window, bool developer_mode);
    ~GLideN64Context() override;

    bool valid() override;
    bool update_config(const ultramodern::renderer::GraphicsConfig &old_config,
                       const ultramodern::renderer::GraphicsConfig &new_config) override;
    void enable_instant_present() override;
    void send_dl(const OSTask *task) override;
    void update_screen() override;
    void shutdown() override;
    uint32_t get_display_framerate() const override;
    float get_resolution_scale() const override;

private:
    uint8_t *rdram_ = nullptr;
    ultramodern::renderer::WindowHandle window_ = nullptr;
    bool developer_mode_ = false;
    bool valid_ = false;
    bool plugin_started_ = false;
};

} // namespace goemon64nx

#endif
