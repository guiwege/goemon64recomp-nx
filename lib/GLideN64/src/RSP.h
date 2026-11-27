#ifndef RSP_H
#define RSP_H

#include "Types.h"
#include "N64.h"

typedef struct
{
	u32 PC[18], PCi;
	u32 F5DL[10];
	u32 uc_start, uc_dstart, cmd, nextCmd;
	u32 w0, w1;
	s32 count;
	bool busy, halt, infloop;
	bool LLE;
	char romname[21];
	wchar_t pluginpath[PLUGIN_PATH_SIZE];
} RSPInfo;

extern RSPInfo RSP;

extern u32 DepthClearColor;
extern u32 rectDepthBufferCopyFrame;

// Goemon64-NX: RT64 segment rules + 512 MiB RDRAM live in switch/gliden64_rt64ex.cpp.
u32 RSP_SegmentToPhysicalEx(u32 segaddr);
#define RSP_SegmentToPhysical( segaddr ) RSP_SegmentToPhysicalEx(segaddr)

void RT64EX_OnMatrix(u32 address, u8 param, f32 mtx[4][4]);
void RT64EX_OnVertices(u32 address, u32 size);
void RT64EX_OnCommand(u32 w0, u32 w1);
// A culling or branch decision taken on transformed vertices (G_CULLDL, G_BRANCH_Z/W).
bool RT64EX_OnDecision(bool taken);
// Skip the CPU triangle walk that only measures buffer height once the main FB is full (GraphicsDrawer.cpp).
extern bool g_goemon64nxSkipKnownMaxY;

void RSP_Init();
void RSP_ProcessDList();
// Loads a 64 byte N64 matrix from RDRAM. Returns false and leaves mtx
// untouched if address does not hold a whole matrix within RDRAM.
bool RSP_LoadMatrix( f32 mtx[4][4], u32 address );
void RSP_CheckDLCounter();

#endif
