// RT64 extended GBI (opcode 0x64) for GLideN64, no-op subset.
//
// Goemon's recomp patches emit gEXEnable / gEXSetRefreshRate / gEXMatrixGroup* /
// gEXPopMatrixGroup on every frame (patches/main.c, patches/anime.c). Stock
// GLideN64 treats 0x64 as an unknown F3DEX command; MATRIXGROUP is two 8-byte
// Gfx words, so the extra word would be decoded as GBI and desync the list.
//
// This file:
//   - installs the 0x64 handler after F3DEX / F3DEX2 init
//   - ENABLE (hook opcode 0x00 F3DEX / 0xE0 F3DEX2 + magic 0x525464) accepts 0x64
//   - SETREFRESHRATE / MATRIXGROUP / POPMATRIXGROUP consume the right number of
//     words and do not interpolate (no second ProcessDList, no extra FBOs)
//   - translates KSEG0 / 512 MiB RDRAM without the stock 8 MiB mask
//
// Encodings: rt64/include/rt64_extended_gbi.h (G_EX_COMMANDn). Interpolation and
// widescreen origin/scissor hunks stay out — later phases.

#include "Combiner.h"
#include "GBI.h"
#include "N64.h"
#include "RSP.h"
#include "Textures.h"
#include "gDP.h"
#include "gSP.h"
#include "uCodes/F3D.h"
#include "uCodes/F3DEX2.h"

#include "nx_log.hpp"

extern "C" void nx_debug_checkpoint(const char *where);

extern "C" void goemon64nx_gliden64_save_shaders() {
	static bool logged = false;
	CombinerInfo::get().saveShadersStorageIfChanged();
	if (!logged) {
		logged = true;
		nx_log("GLideN64 shader cache flush -> " GOEMON64NX_APP_DIR_SDMC "/shaders");
		nx_debug_checkpoint("shader cache flush");
	}
}

extern "C" void goemon64nx_log_texcache() {
	const TextureCache &cache = textureCache();
	nx_log("texcache hits=%u misses=%u n=%u", cache.hits(), cache.misses(), cache.cachedCount());
}

namespace {

constexpr u32 RT64_EXTENDED_OPCODE = 0x64;
constexpr u32 RT64_HOOK_MAGIC = 0x525464; // ASCII "RT" + 0x64
constexpr u32 RT64_HOOK_OP_ENABLE = 0x1;
constexpr u32 RT64_HOOK_OP_DISABLE = 0x2;
constexpr u32 KSEG0 = 0x80000000U;

// rt64_extended_gbi.h G_EX_MAX (0x35). Lengths match G_EX_COMMANDn of each macro.
constexpr u32 G_EX_MAX = 0x35;
constexpr u32 G_EX_SETRDRAMEXTENDED_V1 = 0x2C;

constexpr u8 COMMAND_LENGTH[G_EX_MAX] = {
	1, 1, 3, 2, 2, 2, 2, 2, 3, 1, 1, 1, 2, 1, 1, 1, // 0x00-0x0F (0x0C MATRIXGROUP = 2)
	1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 0x10-0x1F
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 0x20-0x2F (0x09 SETREFRESHRATE = 1, 0x0D POP = 1)
	2, 2, 1, 1, 1,                                 // 0x30-0x34
};

// Goemon never emits gEXSetRDRAMExtended, but patches/DLs use 0x80800000 /
// 0x81000000. Treat KSEG0 as physical so a 0x00FFFFFF mask cannot clip them.
bool g_rt64ExtendedRDRAM = true;
GBIFunc g_prevSpNoOp = nullptr;

void log_once_enable(u32 w0, u32 w1) {
	static bool logged = false;
	if (logged) {
		return;
	}
	logged = true;
	nx_log("RT64EX ENABLE hook w0=0x%08X w1=0x%08X opcode=0x%02X", w0, w1,
		   _SHIFTR(w1, 0, 8));
	nx_debug_checkpoint("RT64EX ENABLE");
}

void log_once_ex(u32 w0, u32 w1) {
	static bool logged = false;
	if (logged) {
		return;
	}
	logged = true;
	nx_log("RT64EX opcode 0x64 sub=0x%06X w1=0x%08X (no-op, skip extra words)",
		   _SHIFTR(w0, 0, 24), w1);
	nx_debug_checkpoint("RT64EX 0x64");
}

bool is_rt64_hook(u32 w0) {
	const u32 cmd = _SHIFTR(w0, 24, 8);
	return _SHIFTR(w0, 0, 24) == RT64_HOOK_MAGIC &&
		   (cmd == F3D_SPNOOP || cmd == F3DEX2_SPNOOP);
}

void rt64_extended(u32 w0, u32 w1) {
	const u32 op = _SHIFTR(w0, 0, 24);
	log_once_ex(w0, w1);
	if (op >= G_EX_MAX) {
		return;
	}
	if (op == G_EX_SETRDRAMEXTENDED_V1) {
		g_rt64ExtendedRDRAM = _SHIFTR(w1, 0, 1) != 0;
	}
	// Extra Gfx words after the first (already consumed by the RSP loop).
	RSP.PC[RSP.PCi] += 8u * (COMMAND_LENGTH[op] - 1u);
}

void accept_extended_opcode() {
	GBI.cmd[RT64_EXTENDED_OPCODE] = rt64_extended;
}

void rt64_hook_spnoop(u32 w0, u32 w1) {
	if (is_rt64_hook(w0)) {
		const u32 hookOp = _SHIFTR(w1, 28, 4);
		if (hookOp == RT64_HOOK_OP_ENABLE) {
			accept_extended_opcode();
			log_once_enable(w0, w1);
			return;
		}
		if (hookOp == RT64_HOOK_OP_DISABLE) {
			return;
		}
		// GETVERSION / DL / BRANCH: one Gfx, ignore.
		return;
	}
	if (g_prevSpNoOp != nullptr) {
		g_prevSpNoOp(w0, w1);
	}
}

} // namespace

namespace {
u32 g_dlCommandCount = 0;
}

// TextureCache::_updateBackground hashes the whole sheet. Adjacent RDRAM
// changes while walking and would keep missing; key the GL texture on the
// overlay address instead (pixels of a given file_id do not change).
bool g_goemonBgAddressCrc = false;

void RT64EX_Init() {
	g_prevSpNoOp = GBI.cmd[G_SPNOOP];
	GBI.cmd[G_SPNOOP] = rt64_hook_spnoop;
	// Install 0x64 immediately so a missed ENABLE still skips extra words.
	accept_extended_opcode();
	nx_log("RT64EX_Init: handler 0x64 installed, G_SPNOOP=0x%02X RDRAMSize=0x%08X", G_SPNOOP,
		   RDRAMSize);
}

// Goemon draws parallax backgrounds as many gDPLoadTile + gSPTextureRectangle
// windows into a wide CI image (patches/background.c, 640px sheets). GLideN64
// keys the GL texture on the TMEM tile CRC, so walking (start_x changes) is a
// miss + glTexImage2D for every strip — the same <10 fps camera-move stall
// reported for this game on mupen64plus-libretro-nx (#285) and for stripped
// S2DEX backgrounds on Switch (Yoshi Story). Promote those texrect loads to
// GLideN64's one-piece background path (full image, one GL texture).
bool RT64EX_PromoteGoemonBackground(u32 t)
{
	if (t != 0 || gSP.textureTile[t] == nullptr)
		return false;
	if (!CombinerInfo::get().isRectMode())
		return false;
	gDPTile *tile = gSP.textureTile[t];
	if (tile->textureMode == TEXTUREMODE_FRAMEBUFFER ||
		tile->textureMode == TEXTUREMODE_FRAMEBUFFER_BG)
		return false;
	if (gDP.loadTile == nullptr || gDP.loadTile->loadType != LOADTYPE_TILE)
		return false;
	const u32 width = gDP.textureImage.width;
	if (width < 256u)
		return false;

	const u32 address = gDP.textureImage.address;
	if (address >= RDRAMSize)
		return false;
	const u32 size = gDP.textureImage.size;
	const u32 bpl = width << size >> 1;
	if (bpl == 0)
		return false;
	u32 height = (RDRAMSize - address) / bpl;
	if (height < 8u)
		return false;
	if (height > 256u)
		height = 256u;

	gSP.bgImage.address = address;
	gSP.bgImage.width = width;
	gSP.bgImage.height = height;
	gSP.bgImage.format = gDP.textureImage.format;
	gSP.bgImage.size = size;
	gSP.bgImage.palette = tile->palette;
	gSP.bgImage.clampS = 1;
	gSP.bgImage.clampT = 1;
	gSP.bgImage.imageX = 0.0f;
	gSP.bgImage.imageY = 0.0f;
	gSP.bgImage.scaleW = 1.0f;
	gSP.bgImage.scaleH = 1.0f;
	// Inaccurate texcoords subtract fuls; texrect S/T are already source pixels.
	tile->fuls = 0.0f;
	tile->fult = 0.0f;
	g_goemonBgAddressCrc = true;

	static bool logged = false;
	if (!logged) {
		logged = true;
		nx_log("Goemon BG one-piece: addr=0x%08X %ux%u fmt=%u siz=%u", address, width, height,
			   gDP.textureImage.format, size);
	}
	return true;
}

void RT64EX_OnCommand(u32 w0, u32 w1) {
	++g_dlCommandCount;
	// 512 MiB RDRAM makes a missed G_ENDDL scan the whole mapping. Stop it.
	if (g_dlCommandCount >= 250000u) {
		static bool logged_runaway = false;
		if (!logged_runaway) {
			logged_runaway = true;
			nx_log("RT64EX abort runaway DL at cmd #%u PC=0x%08X w0=0x%08X", g_dlCommandCount,
				   RSP.PC[RSP.PCi] - 8, w0);
			nx_debug_checkpoint("RT64EX runaway DL");
		}
		RSP.halt = true;
		return;
	}
	if (is_rt64_hook(w0) && _SHIFTR(w1, 28, 4) == RT64_HOOK_OP_ENABLE) {
		log_once_enable(w0, w1);
	}
	if (_SHIFTR(w0, 24, 8) == RT64_EXTENDED_OPCODE) {
		log_once_ex(w0, w1);
	}
}

extern "C" u32 goemon64nx_take_dl_command_count() {
	const u32 n = g_dlCommandCount;
	g_dlCommandCount = 0;
	return n;
}

u32 RSP_SegmentToPhysicalEx(u32 segaddr) {
	// Stock GLideN64 used (segaddr & RDRAMSize) as the segment offset. That only
	// strips the segment nibble when RDRAMSize is 8 MiB-1 (0x7FFFFF). With
	// 512 MiB, 0x06xxxxxx keeps bit 24 and vertices/textures are read from ~96 MiB
	// instead of segment[6] + 24-bit offset — black screen.
	//
	// The *offset* is 24-bit. The *resolved* address must not be: osVirtualToPhysical
	// of overlay/heap (0x81000000) stores physical 0x01000000 as the segment base,
	// and (0x01xxxxxx & 0x00FFFFFF) throws the DL back into the first 16 MiB —
	// garbage GBI and a freeze after file-select loads the level.
	u32 address;
	if (g_rt64ExtendedRDRAM && (segaddr & KSEG0) != 0) {
		address = segaddr;
	} else {
		address = gSP.segment[(segaddr >> 24) & 0x0F] + (segaddr & 0x00FFFFFF);
	}
	if (g_rt64ExtendedRDRAM && (address & KSEG0) != 0) {
		address -= KSEG0;
	} else if (!g_rt64ExtendedRDRAM) {
		address &= 0x00FFFFFF;
	}
	return address & RDRAMSize;
}
