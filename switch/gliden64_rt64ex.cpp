// RT64 extended GBI (opcode 0x64) for GLideN64, plus 30→60 frame interpolation.
//
// Goemon's recomp patches emit gEXEnable / gEXSetRefreshRate / gEXMatrixGroup* /
// gEXPopMatrixGroup on every frame (patches/main.c, patches/anime.c). Stock
// GLideN64 treats 0x64 as an unknown F3DEX command; MATRIXGROUP is two 8-byte
// Gfx words, so the extra word would be decoded as GBI and desync the list.
//
// This file:
//   - installs the 0x64 handler after F3DEX / F3DEX2 init
//   - ENABLE (hook opcode 0x00 F3DEX / 0xE0 F3DEX2 + magic 0x525464) accepts 0x64
//   - parses MATRIXGROUP / POPMATRIXGROUP into a group stack and lerps matrices
//     on a second ProcessDList (halfway between the previous and current tick)
//   - translates KSEG0 / 512 MiB RDRAM without the stock 8 MiB mask
//
// Encodings: rt64/include/rt64_extended_gbi.h (G_EX_COMMANDn). Widescreen
// origin/scissor hunks stay out — Goemon already uses Expand + AspectRatio=2.

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <map>
#include <utility>
#include <vector>

#include "CRC.h"
#include "Combiner.h"
#include "Config.h"
#include "FrameBuffer.h"
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

extern std::atomic<uint32_t> goemon64nx_interp_waits;
extern std::atomic<uint32_t> goemon64nx_interp_dropped;

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

static void interp_note_matrix_group(u32 flags);
static void interp_push_matrix_group(u32 id, u32 flags);
static void interp_pop_matrix_group(u32 count, bool projection);

namespace {

constexpr u32 RT64_EXTENDED_OPCODE = 0x64;
constexpr u32 RT64_HOOK_MAGIC = 0x525464; // ASCII "RT" + 0x64
constexpr u32 RT64_HOOK_OP_ENABLE = 0x1;
constexpr u32 RT64_HOOK_OP_DISABLE = 0x2;
constexpr u32 KSEG0 = 0x80000000U;
constexpr u32 G_EX_COMPONENT_SKIP = 0x0;

enum ExOpcode : u32 {
	G_EX_MATRIXGROUP_V1 = 0x0C,
	G_EX_POPMATRIXGROUP_V1 = 0x0D,
	G_EX_SETRDRAMEXTENDED_V1 = 0x2C,
	G_EX_MAX = 0x35,
};

// Lengths match G_EX_COMMANDn of each macro (0x0C MATRIXGROUP = 2, 0x0D POP = 1).
constexpr u8 COMMAND_LENGTH[G_EX_MAX] = {
	1, 1, 3, 2, 2, 2, 2, 2, 3, 1, 1, 1, 2, 1, 1, 1, // 0x00-0x0F
	1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 0x10-0x1F
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 0x20-0x2F
	2, 2, 1, 1, 1,                                 // 0x30-0x34
};

// Goemon never emits gEXSetRDRAMExtended, but patches/DLs use 0x80800000 /
// 0x81000000. Treat KSEG0 as physical so a 0x00FFFFFF mask cannot clip them.
bool g_rt64ExtendedRDRAM = true;
GBIFunc g_prevSpNoOp = nullptr;

// Word `index` (0 = w0) of the extra command `extra` (1-based) following the current one.
u32 extra_word(u32 extra, u32 index) {
	return *(u32 *)&RDRAM[RSP.PC[RSP.PCi] + 8 * (extra - 1) + 4 * index];
}

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
	nx_log("RT64EX opcode 0x64 sub=0x%06X w1=0x%08X", _SHIFTR(w0, 0, 24), w1);
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
	switch (op) {
	case G_EX_MATRIXGROUP_V1: {
		const u32 flags = extra_word(1, 0);
		interp_note_matrix_group(flags);
		interp_push_matrix_group(w1, flags);
		break;
	}
	case G_EX_POPMATRIXGROUP_V1:
		interp_pop_matrix_group(_SHIFTR(w1, 0, 8), _SHIFTR(w1, 8, 1) != 0);
		break;
	case G_EX_SETRDRAMEXTENDED_V1:
		g_rt64ExtendedRDRAM = _SHIFTR(w1, 0, 1) != 0;
		break;
	default:
		break;
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

u32 g_dlCommandCount = 0;

} // namespace

// TextureCache::_updateBackground hashes the whole sheet. Adjacent RDRAM
// changes while walking and would keep missing; key the GL texture on the
// overlay address instead (pixels of a given file_id do not change).
bool g_goemonBgAddressCrc = false;
bool g_goemon64nxSkipKnownMaxY = true;

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

// Frame interpolation: the game still ticks at 30 fps. Each display list is
// processed twice. Pass 1 is the real frame and records every matrix gSPMatrix
// loads. Pass 2 substitutes a halfway twin (by group id, else rank + likeness)
// unless the group says SKIP: decomposed groups nlerp rotation and lerp
// translation; simple groups stay element-wise. The in-between image is shown
// one VI before the real one. A camera cut, a second pass that diverges from
// the first, or a frame over the 33 ms budget drops the in-between so the game
// itself does not stall.
namespace {

enum class Pairing : u8 { Heuristic, ById, Ignored };

struct LoadedMatrix {
	u32 address;
	u8 param;
	f32 m[4][4];
	Pairing pairing = Pairing::Heuristic;
	u32 group = 0;
	u32 group_index = 0;
	u32 group_flags = 0;
};

std::vector<LoadedMatrix> matrices_current;
std::vector<LoadedMatrix> matrices_previous;

constexpr u32 G_EX_ID_IGNORE = 0x0;
constexpr u32 G_EX_ID_AUTO = 0xFFFFFFFF;
constexpr u32 G_EX_ORDER_LINEAR = 0x0;
constexpr u32 G_EX_INTERPOLATE_DECOMPOSE = 0x1;
constexpr size_t GROUP_STACK_LIMIT = 64;

struct MatrixGroup {
	bool set;
	u32 id;
	u32 flags;
};

std::vector<MatrixGroup> model_groups{{false, 0, 0}};
std::vector<MatrixGroup> projection_groups{{false, 0, 0}};
std::map<u32, u32> group_counts;
std::map<u64, size_t> previous_by_group;

void reset_matrix_groups() {
	model_groups.assign(1, {false, 0, 0});
	projection_groups.assign(1, {false, 0, 0});
}

u64 group_key(u32 id, u32 index) {
	return (static_cast<u64>(id) << 32) | index;
}

constexpr f32 CLOSE_TRANSLATION = 30.0f;
constexpr f32 CLOSE_ROTATION = 0.3f;
constexpr size_t MATCH_WINDOW = 8;

// Unmarked camera cuts: rotation past 0.25, translation past 5000 (DK64 console
// measurements; Goemon skip tags already cover character swap / snow / arrows).
f32 cut_rotation = 0.25f;
f32 cut_translation = 5000.0f;

// Both passes + presents must fit in the game's 33.3 ms frame. Pass 2 is
// predicted from recent second passes (textures already warm) rather than taken
// equal to pass 1. DK64: 15 ms cap, 15-frame hold after two overs in 8 frames.
u32 pass2_max_us = 15000;
bool predict_pass2 = true;
u32 pass2_last_us = 0;
u32 pass2_average_us = 0;
u32 pass2_frame = 0;
u32 hysteresis_frames = 15;
u32 hysteresis_window = 8;

bool replay_decisions = true;

bool substituting = false;
bool pass2_diverged = false;
bool vertices_diverged_frame = false;

constexpr u64 FNV_OFFSET = 0xcbf29ce484222325ULL;
constexpr u64 FNV_PRIME = 0x100000001b3ULL;
u64 command_hash = FNV_OFFSET;
u64 command_count = 0;
u64 first_pass_command_hash = 0;
u64 first_pass_command_count = 0;

std::vector<bool> first_pass_decisions;
size_t decision_rank = 0;

struct VertexLoad {
	u32 address;
	u64 hash;
};
std::vector<VertexLoad> vertices_current;
size_t vertex_rank = 0;

size_t substitute_rank = 0;
ptrdiff_t rank_shift = 0;
bool camera_cut = false;
u32 saved_address = 0;
FrameBuffer *saved_buffer = nullptr;

// In-between images waiting for the VI, one per color buffer. A frame drawn into
// the buffer still on screen (no RDP freeze) waits for the VI to leave that buffer
// and come back: shown at once, it came before the previous frame's real image.
struct InBetween {
	FrameBuffer *buffer;
	bool wait_for_other_buffer;
	u32 frame;
};
std::map<u32, InBetween> in_between;
FrameBuffer *in_between_shown = nullptr;
u32 frames_begun = 0;
u32 hold_until = 0;
u32 last_over = 0;

gSPInfo first_pass_gsp;
gDPInfo first_pass_gdp;
u64 first_pass_tmem[512];
bool first_pass_extended_rdram = true;

bool same_object(const LoadedMatrix &a, const LoadedMatrix &b) {
	if (a.param != b.param)
		return false;
	f32 translation = 0.0f;
	f32 rotation = 0.0f;
	for (int r = 0; r < 3; r++) {
		translation = std::max(translation, std::fabs(a.m[3][r] - b.m[3][r]));
		for (int c = 0; c < 3; c++)
			rotation = std::max(rotation, std::fabs(a.m[r][c] - b.m[r][c]));
	}
	return translation < CLOSE_TRANSLATION && rotation < CLOSE_ROTATION;
}

bool perspective(const LoadedMatrix &m) {
	return std::fabs(m.m[2][3]) > 0.5f && std::fabs(m.m[3][3]) < 0.5f;
}

struct MatrixDelta {
	f32 linear = 0.0f;
	f32 translation = 0.0f;
	f32 projective = 0.0f;
};

MatrixDelta matrix_delta(const LoadedMatrix &a, const LoadedMatrix &b) {
	MatrixDelta d;
	for (int r = 0; r < 3; r++) {
		d.translation = std::max(d.translation, std::fabs(a.m[3][r] - b.m[3][r]));
		for (int c = 0; c < 3; c++)
			d.linear = std::max(d.linear, std::fabs(a.m[r][c] - b.m[r][c]));
	}
	for (int r = 0; r < 4; r++)
		d.projective = std::max(d.projective, std::fabs(a.m[r][3] - b.m[r][3]));
	return d;
}

bool same_camera(const LoadedMatrix &a, const LoadedMatrix &b, const MatrixDelta &d) {
	if (a.param != b.param || perspective(a) != perspective(b) || d.linear >= cut_rotation ||
		d.translation >= cut_translation || d.projective >= 0.05f) {
		return false;
	}
	if (a.param & G_MTX_LOAD) {
		for (int i = 0; i < 3; i++) {
			const f32 x = a.m[i][i];
			const f32 y = b.m[i][i];
			if (std::fabs(x - y) > 0.02f * std::max(std::fabs(x), std::fabs(y)) + 1e-7f)
				return false;
		}
	}
	return true;
}

// Pair the Nth projection of a given kind (LOAD vs MUL, perspective vs affine)
// with the Nth of the same kind last frame. A global "most like" search mixed
// Goemon's look-at MUL with the camera object's world MUL and produced one-frame
// garbage views during pans.
ptrdiff_t projection_twin(size_t rank) {
	const LoadedMatrix &now = matrices_current[rank];
	size_t ordinal = 0;
	for (size_t i = 0; i < rank; i++) {
		const LoadedMatrix &m = matrices_current[i];
		if ((m.param & G_MTX_PROJECTION) && m.param == now.param &&
			perspective(m) == perspective(now))
			ordinal++;
	}
	size_t seen = 0;
	for (size_t j = 0; j < matrices_previous.size(); j++) {
		const LoadedMatrix &before = matrices_previous[j];
		if (!(before.param & G_MTX_PROJECTION) || before.param != now.param)
			continue;
		if (perspective(before) != perspective(now))
			continue;
		if (seen++ != ordinal)
			continue;
		if (!same_camera(before, now, matrix_delta(before, now)))
			return -1;
		return static_cast<ptrdiff_t>(j);
	}
	return -1;
}

ptrdiff_t find_twin(size_t rank) {
	const LoadedMatrix &now = matrices_current[rank];
	if (now.param & G_MTX_PROJECTION)
		return projection_twin(rank);
	const ptrdiff_t expected = static_cast<ptrdiff_t>(rank) + rank_shift;
	const ptrdiff_t count = static_cast<ptrdiff_t>(matrices_previous.size());
	ptrdiff_t nearest = -1;
	for (ptrdiff_t offset = 0; offset <= static_cast<ptrdiff_t>(MATCH_WINDOW); offset++) {
		for (const ptrdiff_t j : {expected - offset, expected + offset}) {
			if (j < 0 || j >= count)
				continue;
			const LoadedMatrix &before = matrices_previous[j];
			if (before.param == now.param && memcmp(before.m, now.m, sizeof(now.m)) == 0)
				return j;
			if (nearest < 0 && same_object(before, now))
				nearest = j;
			if (offset == 0)
				break;
		}
	}
	return nearest;
}

struct MainCamera {
	ptrdiff_t projection = -1;
	ptrdiff_t look_at = -1;
};

MainCamera main_camera(const std::vector<LoadedMatrix> &list) {
	MainCamera camera;
	for (size_t i = 0; i < list.size(); i++) {
		const LoadedMatrix &m = list[i];
		if (!(m.param & G_MTX_PROJECTION))
			continue;
		if (camera.projection < 0) {
			if ((m.param & G_MTX_LOAD) && perspective(m))
				camera.projection = static_cast<ptrdiff_t>(i);
			continue;
		}
		if (!(m.param & G_MTX_LOAD))
			camera.look_at = static_cast<ptrdiff_t>(i);
		break;
	}
	return camera;
}

bool camera_jumped() {
	const MainCamera before = main_camera(matrices_previous);
	const MainCamera now = main_camera(matrices_current);
	f32 translation = 0.0f;
	f32 rotation = 0.0f;
	bool appeared = (before.projection < 0) != (now.projection < 0);
	for (const auto &pair :
		 {std::pair{before.projection, now.projection}, std::pair{before.look_at, now.look_at}}) {
		const ptrdiff_t a = pair.first;
		const ptrdiff_t b = pair.second;
		if (a < 0 || b < 0) {
			appeared = appeared || (a < 0) != (b < 0);
			continue;
		}
		const MatrixDelta d = matrix_delta(matrices_previous[a], matrices_current[b]);
		translation = std::max(translation, d.translation);
		rotation = std::max(rotation, std::max(d.linear, d.projective));
	}
	return appeared || rotation > cut_rotation || translation > cut_translation;
}

FrameBuffer *saved_frame() {
	FrameBuffer *buffer = frameBufferList().findBuffer(saved_address);
	return buffer == saved_buffer ? buffer : nullptr;
}

void tag_matrix_group(LoadedMatrix &loaded) {
	const MatrixGroup &group =
		(loaded.param & G_MTX_PROJECTION) ? projection_groups.back() : model_groups.back();
	if (!group.set || group.id == G_EX_ID_AUTO)
		return;
	if (group.id == G_EX_ID_IGNORE) {
		loaded.pairing = Pairing::Ignored;
		return;
	}
	if (_SHIFTR(group.flags, 17, 2) != G_EX_ORDER_LINEAR)
		return;
	loaded.pairing = Pairing::ById;
	loaded.group = group.id;
	loaded.group_index = group_counts[group.id]++;
	loaded.group_flags = group.flags;
}

ptrdiff_t id_twin(const LoadedMatrix &now) {
	const auto found = previous_by_group.find(group_key(now.group, now.group_index));
	if (found == previous_by_group.end())
		return -1;
	const LoadedMatrix &before = matrices_previous[found->second];
	if (before.param != now.param)
		return -1;
	if ((now.param & G_MTX_PROJECTION) && !same_camera(before, now, matrix_delta(before, now)))
		return -1;
	return static_cast<ptrdiff_t>(found->second);
}

struct Quat {
	f32 w, x, y, z;
};

f32 vec3_length(f32 x, f32 y, f32 z) {
	return std::sqrt(x * x + y * y + z * z);
}

// Rows of the GLideN64 matrix are the basis axes (p' = p * M).
Quat quat_from_rows(const f32 r[3][3]) {
	const f32 m00 = r[0][0], m10 = r[0][1], m20 = r[0][2];
	const f32 m01 = r[1][0], m11 = r[1][1], m21 = r[1][2];
	const f32 m02 = r[2][0], m12 = r[2][1], m22 = r[2][2];
	const f32 trace = m00 + m11 + m22;
	Quat q;
	if (trace > 0.0f) {
		const f32 s = 0.5f / std::sqrt(trace + 1.0f);
		q.w = 0.25f / s;
		q.x = (m21 - m12) * s;
		q.y = (m02 - m20) * s;
		q.z = (m10 - m01) * s;
	} else if (m00 > m11 && m00 > m22) {
		const f32 s = 2.0f * std::sqrt(1.0f + m00 - m11 - m22);
		q.w = (m21 - m12) / s;
		q.x = 0.25f * s;
		q.y = (m01 + m10) / s;
		q.z = (m02 + m20) / s;
	} else if (m11 > m22) {
		const f32 s = 2.0f * std::sqrt(1.0f + m11 - m00 - m22);
		q.w = (m02 - m20) / s;
		q.x = (m01 + m10) / s;
		q.y = 0.25f * s;
		q.z = (m12 + m21) / s;
	} else {
		const f32 s = 2.0f * std::sqrt(1.0f + m22 - m00 - m11);
		q.w = (m10 - m01) / s;
		q.x = (m02 + m20) / s;
		q.y = (m12 + m21) / s;
		q.z = 0.25f * s;
	}
	return q;
}

void quat_to_rows(const Quat &q, f32 r[3][3]) {
	const f32 xx = q.x * q.x, yy = q.y * q.y, zz = q.z * q.z;
	const f32 xy = q.x * q.y, xz = q.x * q.z, yz = q.y * q.z;
	const f32 wx = q.w * q.x, wy = q.w * q.y, wz = q.w * q.z;
	r[0][0] = 1.0f - 2.0f * (yy + zz);
	r[0][1] = 2.0f * (xy + wz);
	r[0][2] = 2.0f * (xz - wy);
	r[1][0] = 2.0f * (xy - wz);
	r[1][1] = 1.0f - 2.0f * (xx + zz);
	r[1][2] = 2.0f * (yz + wx);
	r[2][0] = 2.0f * (xz + wy);
	r[2][1] = 2.0f * (yz - wx);
	r[2][2] = 1.0f - 2.0f * (xx + yy);
}

Quat quat_nlerp(Quat a, Quat b) {
	if (a.w * b.w + a.x * b.x + a.y * b.y + a.z * b.z < 0.0f) {
		b.w = -b.w;
		b.x = -b.x;
		b.y = -b.y;
		b.z = -b.z;
	}
	Quat q{a.w + b.w, a.x + b.x, a.y + b.y, a.z + b.z};
	const f32 len = std::sqrt(q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z);
	if (len < 1e-8f)
		return {1.0f, 0.0f, 0.0f, 0.0f};
	const f32 n = 1.0f / len;
	q.w *= n;
	q.x *= n;
	q.y *= n;
	q.z *= n;
	return q;
}

// TRS lerp for modelview / affine look-at. Perspective projections stay
// element-wise: they are not rigid transforms.
bool lerp_decomposed(f32 out[4][4], const f32 before[4][4], const f32 now[4][4], bool position,
					 bool linear, bool projective) {
	if (!linear)
		return false;
	f32 sa[3], sb[3];
	f32 ra[3][3], rb[3][3];
	for (int row = 0; row < 3; row++) {
		sa[row] = vec3_length(before[row][0], before[row][1], before[row][2]);
		sb[row] = vec3_length(now[row][0], now[row][1], now[row][2]);
		if (sa[row] < 1e-4f || sb[row] < 1e-4f)
			return false;
		const f32 ia = 1.0f / sa[row];
		const f32 ib = 1.0f / sb[row];
		for (int col = 0; col < 3; col++) {
			ra[row][col] = before[row][col] * ia;
			rb[row][col] = now[row][col] * ib;
		}
	}
	f32 rot[3][3];
	quat_to_rows(quat_nlerp(quat_from_rows(ra), quat_from_rows(rb)), rot);
	for (int row = 0; row < 3; row++) {
		const f32 scale = 0.5f * (sa[row] + sb[row]);
		for (int col = 0; col < 3; col++)
			out[row][col] = rot[row][col] * scale;
	}
	for (int col = 0; col < 3; col++)
		out[3][col] = position ? 0.5f * (before[3][col] + now[3][col]) : now[3][col];
	for (int row = 0; row < 4; row++)
		out[row][3] = projective ? 0.5f * (before[row][3] + now[row][3]) : now[row][3];
	return true;
}

} // namespace

static void interp_push_matrix_group(u32 id, u32 flags) {
	std::vector<MatrixGroup> &stack = _SHIFTR(flags, 1, 1) != 0 ? projection_groups : model_groups;
	const MatrixGroup group{true, id, flags};
	if (_SHIFTR(flags, 0, 1) != 0 && stack.size() < GROUP_STACK_LIMIT)
		stack.push_back(group);
	else
		stack.back() = group;
}

static void interp_pop_matrix_group(u32 count, bool projection) {
	std::vector<MatrixGroup> &stack = projection ? projection_groups : model_groups;
	while (count-- > 0 && stack.size() > 1)
		stack.pop_back();
}

static void interp_note_matrix_group(u32 flags) {
	const bool projection = _SHIFTR(flags, 1, 1) != 0;
	if (projection && _SHIFTR(flags, 3, 2) == G_EX_COMPONENT_SKIP)
		camera_cut = true;
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
	command_hash = (command_hash ^ ((static_cast<u64>(w0) << 32) | w1)) * FNV_PRIME;
	command_count++;
}

bool RT64EX_OnDecision(bool taken) {
	if (!substituting) {
		first_pass_decisions.push_back(taken);
		return taken;
	}
	const size_t rank = decision_rank++;
	if (rank >= first_pass_decisions.size())
		return taken;
	const bool first = first_pass_decisions[rank];
	return replay_decisions ? first : taken;
}

void RT64EX_OnVertices(u32 address, u32 size) {
	u64 hash = 0;
	if (isRDRAMRangeValid(address, size))
		hash = CRC_Calculate(0xFFFFFFFF, RDRAM + address, size);
	if (!substituting) {
		vertices_current.push_back({address, hash});
		return;
	}
	const size_t rank = vertex_rank++;
	if (rank >= vertices_current.size() || vertices_current[rank].address != address ||
		vertices_current[rank].hash != hash) {
		pass2_diverged = true;
		vertices_diverged_frame = true;
	}
}

void RT64EX_OnMatrix(u32 address, u8 param, f32 mtx[4][4]) {
	if (!substituting) {
		LoadedMatrix loaded{address, param, {}};
		memcpy(loaded.m, mtx, sizeof(loaded.m));
		tag_matrix_group(loaded);
		matrices_current.push_back(loaded);
		return;
	}
	const size_t rank = substitute_rank++;
	if (pass2_diverged)
		return;
	if (rank >= matrices_current.size()) {
		pass2_diverged = true;
		return;
	}
	const LoadedMatrix &now = matrices_current[rank];
	if (now.address != address || now.param != param || memcmp(now.m, mtx, sizeof(now.m)) != 0) {
		pass2_diverged = true;
		return;
	}
	if (now.pairing == Pairing::Ignored)
		return;
	// Goemon's scenery is 2D parallax texrects (the one-piece BG path). Those
	// UVs tick at 30 fps. Interpolating the look-at / camera projection moves
	// 3D actors on the in-between frame while the BG stays put — character-only
	// jitter on lateral pans, plus the one-frame "wrong scene" flash from a
	// mismatched view. Leave the view at the game tick; interpolate modelview
	// (bones) only.
	if (now.param & G_MTX_PROJECTION)
		return;
	const ptrdiff_t twin = now.pairing == Pairing::ById ? id_twin(now) : find_twin(rank);
	if (twin < 0)
		return;
	rank_shift = twin - static_cast<ptrdiff_t>(rank);
	const LoadedMatrix &before = matrices_previous[twin];
	const u32 flags = now.pairing == Pairing::ById ? now.group_flags : 0xFFFFFFFF;
	const bool position = _SHIFTR(flags, 3, 2) != G_EX_COMPONENT_SKIP;
	const bool linear = _SHIFTR(flags, 5, 2) != G_EX_COMPONENT_SKIP;
	const bool projective = _SHIFTR(flags, 11, 2) != G_EX_COMPONENT_SKIP;
	const bool decompose = _SHIFTR(flags, 2, 1) == G_EX_INTERPOLATE_DECOMPOSE && !perspective(now);
	if (decompose && lerp_decomposed(mtx, before.m, now.m, position, linear, projective))
		return;
	for (int r = 0; r < 4; r++) {
		for (int c = 0; c < 4; c++) {
			const bool interpolate = c == 3 ? projective : (r == 3 ? position : linear);
			mtx[r][c] = interpolate ? 0.5f * (before.m[r][c] + now.m[r][c]) : now.m[r][c];
		}
	}
}

extern "C" u32 goemon64nx_take_dl_command_count() {
	const u32 n = g_dlCommandCount;
	g_dlCommandCount = 0;
	return n;
}

extern "C" void goemon64nx_interp_frame_begin() {
	if (!matrices_current.empty())
		std::swap(matrices_previous, matrices_current);
	matrices_current.clear();
	vertices_current.clear();
	first_pass_decisions.clear();
	command_hash = FNV_OFFSET;
	command_count = 0;
	camera_cut = false;
	frames_begun++;
	previous_by_group.clear();
	for (size_t i = 0; i < matrices_previous.size(); i++) {
		const LoadedMatrix &m = matrices_previous[i];
		if (m.pairing == Pairing::ById)
			previous_by_group.emplace(group_key(m.group, m.group_index), i);
	}
	group_counts.clear();
	reset_matrix_groups();
}

extern "C" void goemon64nx_interp_pass2_done(u32 us) {
	pass2_frame = frames_begun;
	pass2_last_us = us;
	pass2_average_us = pass2_average_us == 0 ? us : pass2_average_us + (static_cast<s32>(us - pass2_average_us) / 8);
}

extern "C" bool goemon64nx_interp_begin_second_pass(u32 first_pass_us, bool wanted) {
	FrameBuffer *buffer = frameBufferList().getCurrent();
	if (buffer != nullptr)
		in_between.erase(buffer->m_startAddress);
	const bool jumped = camera_jumped();
	const bool cut = camera_cut || jumped;
	const bool measured = predict_pass2 && pass2_last_us != 0 && frames_begun - pass2_frame <= 2;
	const u32 predicted_pass2_us = measured ? std::max(pass2_last_us, pass2_average_us) : first_pass_us;
	const bool over = !cut && first_pass_us + predicted_pass2_us > 2 * pass2_max_us;
	if (over) {
		if (last_over != 0 && frames_begun - last_over <= hysteresis_window)
			hold_until = frames_begun + hysteresis_frames;
		last_over = frames_begun;
	}
	if (!wanted || cut || over)
		return false;
	if (static_cast<s32>(hold_until - frames_begun) > 0)
		return false;
	if (matrices_previous.empty() || buffer == nullptr || config.video.multisampling != 0)
		return false;
	buffer->interpCopy(0, true);
	saved_buffer = buffer;
	saved_address = buffer->m_startAddress;
	substituting = true;
	reset_matrix_groups();
	pass2_diverged = false;
	first_pass_command_hash = command_hash;
	first_pass_command_count = command_count;
	command_hash = FNV_OFFSET;
	command_count = 0;
	decision_rank = 0;
	vertex_rank = 0;
	vertices_diverged_frame = false;
	substitute_rank = 0;
	rank_shift = 0;
	return true;
}

extern "C" void goemon64nx_interp_end_second_pass() {
	substituting = false;
	if (FrameBuffer *buffer = saved_frame()) {
		buffer->interpCopy(1, true);
		buffer->interpCopy(0, false);
		const bool vertices_differ =
			vertices_diverged_frame || vertex_rank != vertices_current.size();
		const bool commands_differ =
			command_hash != first_pass_command_hash || command_count != first_pass_command_count;
		if (pass2_diverged || vertices_differ || commands_differ ||
			substitute_rank != matrices_current.size()) {
			return;
		}
		in_between[buffer->m_startAddress] = {
			buffer, frameBufferList().findBuffer(*REG.VI_ORIGIN) == buffer, frames_begun};
	}
}

// Goemon starts frame N+2 in the buffer still on screen and relies on the RDP freeze
// (not emulated) to hold that draw back. GLideN64 clears m_changed on the buffer it
// presents, so a set flag on the VI origin means the front buffer was already redrawn.
extern "C" bool goemon64nx_front_buffer_redrawn(u32 origin) {
	const FrameBuffer *buffer = frameBufferList().findBuffer(origin & 0xFFFFFF);
	return buffer != nullptr && buffer->m_changed;
}

extern "C" bool goemon64nx_interp_present_in_between(u32 origin) {
	FrameBuffer *shown = frameBufferList().findBuffer(origin);
	for (auto &pending : in_between) {
		if (pending.second.buffer != shown)
			pending.second.wait_for_other_buffer = false;
	}
	if (shown == nullptr)
		return false;
	const auto pending = in_between.find(shown->m_startAddress);
	if (pending == in_between.end())
		return false;
	if (pending->second.wait_for_other_buffer) {
		// Still waiting for VI to leave this buffer. Frame N's own draw sets
		// m_changed; drop only once a later display list has run (already N+2).
		// Otherwise keep waiting: shown at once, it came before the previous
		// frame's real image.
		if (shown->m_changed && frames_begun != pending->second.frame) {
			in_between.erase(pending);
			goemon64nx_interp_dropped.fetch_add(1, std::memory_order_relaxed);
		} else {
			goemon64nx_interp_waits.fetch_add(1, std::memory_order_relaxed);
		}
		return false;
	}
	const bool same_buffer = pending->second.buffer == shown;
	in_between.erase(pending);
	if (!same_buffer)
		return false;
	shown->interpCopy(1, false);
	in_between_shown = shown;
	return true;
}

extern "C" void goemon64nx_interp_present_done() {
	if (in_between_shown != nullptr)
		in_between_shown->interpCopy(0, false);
	in_between_shown = nullptr;
}

extern "C" void goemon64nx_rt64ex_save_state() {
	first_pass_gsp = gSP;
	first_pass_gdp = gDP;
	memcpy(first_pass_tmem, TMEM, sizeof(first_pass_tmem));
	first_pass_extended_rdram = g_rt64ExtendedRDRAM;
}

extern "C" void goemon64nx_rt64ex_restore_state() {
	const auto color_image = gDP.colorImage;
	const u32 depth_image = gDP.depthImageAddress;
	const u32 gdp_changed = gDP.changed;
	const u32 gsp_changed = gSP.changed;
	gSP = first_pass_gsp;
	gDP = first_pass_gdp;
	gDP.colorImage = color_image;
	gDP.depthImageAddress = depth_image;
	memcpy(TMEM, first_pass_tmem, sizeof(first_pass_tmem));
	gSP.changed = gsp_changed | CHANGED_VIEWPORT | CHANGED_MATRIX | CHANGED_TEXTURE | CHANGED_GEOMETRYMODE |
				  CHANGED_FOGPOSITION | CHANGED_LIGHT | CHANGED_LOOKAT | CHANGED_TEXTURESCALE;
	gDP.changed = gdp_changed | CHANGED_RENDERMODE | CHANGED_CYCLETYPE | CHANGED_SCISSOR | CHANGED_TMEM |
				  CHANGED_TILE | CHANGED_COMBINE | CHANGED_ALPHACOMPARE | CHANGED_FOGCOLOR | CHANGED_BLENDCOLOR;
	g_rt64ExtendedRDRAM = first_pass_extended_rdram;
}

