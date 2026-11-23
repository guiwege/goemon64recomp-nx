#ifndef __GOEMON_RENDER_H__
#define __GOEMON_RENDER_H__

// Overlay of include/goemon_render.h. The PC header pulls RT64::Application;
// the Switch renderer is a RendererContext (stub in Phase 1, GLideN64 later).

#include <memory>

#include "ultramodern/renderer_context.hpp"

namespace goemon64 {
    namespace renderer {
        std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(
            uint8_t *rdram,
            ultramodern::renderer::WindowHandle window_handle,
            bool developer_mode);

        inline bool RT64HighPrecisionFBEnabled() {
            return false;
        }
    }
}

#endif
