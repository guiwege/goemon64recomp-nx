#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8020F76C_5CAC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F76C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F774: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F778: jal         0x80013AC4
    // 0x8020F77C: addiu       $a0, $a0, -0x2CE0
    ctx->r4 = ADD32(ctx->r4, -0X2CE0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F77C: addiu       $a0, $a0, -0x2CE0
    ctx->r4 = ADD32(ctx->r4, -0X2CE0);
    after_0:
    // 0x8020F780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F788: jr          $ra
    // 0x8020F78C: nop

    TRACE_RETURN()
    return;
    // 0x8020F78C: nop

;}
RECOMP_FUNC void func_80210FE4_5CC4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210FEC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210FF0: jal         0x80013AC4
    // 0x80210FF4: addiu       $a0, $a0, -0x1784
    ctx->r4 = ADD32(ctx->r4, -0X1784);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210FF4: addiu       $a0, $a0, -0x1784
    ctx->r4 = ADD32(ctx->r4, -0X1784);
    after_0:
    // 0x80210FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211000: jr          $ra
    // 0x80211004: nop

    TRACE_RETURN()
    return;
    // 0x80211004: nop

;}
RECOMP_FUNC void func_802112B4_5CC784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802112B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802112BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802112C0: jal         0x80013AC4
    // 0x802112C4: addiu       $a0, $a0, -0x15FC
    ctx->r4 = ADD32(ctx->r4, -0X15FC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802112C4: addiu       $a0, $a0, -0x15FC
    ctx->r4 = ADD32(ctx->r4, -0X15FC);
    after_0:
    // 0x802112C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802112CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802112D0: jr          $ra
    // 0x802112D4: nop

    TRACE_RETURN()
    return;
    // 0x802112D4: nop

;}
RECOMP_FUNC void func_80215330_5D0800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80215334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215338: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x8021533C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80215340: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80215344: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80215348: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x8021534C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80215350: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x80215354: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80215358: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x8021535C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215360: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80215364: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80215368: sh          $t9, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r25;
    // 0x8021536C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80215370: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80215374: addiu       $at, $zero, 0x1C4
    ctx->r1 = ADD32(0, 0X1C4);
    // 0x80215378: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8021537C: lhu         $t1, -0x5020($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X5020);
    // 0x80215380: bnel        $t1, $at, L_80215438
    if (ctx->r9 != ctx->r1) {
        // 0x80215384: lh          $t7, 0x26($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X26);
            goto L_80215438;
    }
    goto skip_0;
    // 0x80215384: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    skip_0:
    // 0x80215388: jal         0x800240DC
    // 0x8021538C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_800240DC_24CDC(rdram, ctx);
        goto after_0;
    // 0x8021538C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x80215390: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80215394: beq         $v0, $zero, L_80215430
    if (ctx->r2 == 0) {
        // 0x80215398: addiu       $v1, $v1, -0x3A38
        ctx->r3 = ADD32(ctx->r3, -0X3A38);
            goto L_80215430;
    }
    // 0x80215398: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x8021539C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x802153A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802153A4: addiu       $t2, $zero, 0x1CF
    ctx->r10 = ADD32(0, 0X1CF);
    // 0x802153A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x802153AC: sh          $t2, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r10;
    // 0x802153B0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802153B4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802153B8: addiu       $t4, $zero, 0x52
    ctx->r12 = ADD32(0, 0X52);
    // 0x802153BC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802153C0: sh          $t4, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r12;
    // 0x802153C4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802153C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802153CC: addiu       $t6, $zero, -0x32
    ctx->r14 = ADD32(0, -0X32);
    // 0x802153D0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802153D4: sh          $t6, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r14;
    // 0x802153D8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802153DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802153E0: addiu       $t8, $zero, 0xA7
    ctx->r24 = ADD32(0, 0XA7);
    // 0x802153E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802153E8: sh          $t8, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r24;
    // 0x802153EC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802153F0: lh          $t0, 0x1C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1C);
    // 0x802153F4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802153F8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802153FC: sh          $t0, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r8;
    // 0x80215400: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80215404: lb          $t2, 0x1E($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1E);
    // 0x80215408: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021540C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80215410: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x80215414: sh          $t3, -0x5200($at)
    MEM_H(-0X5200, ctx->r1) = ctx->r11;
    // 0x80215418: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8021541C: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x80215420: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215424: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80215428: b           L_802154AC
    // 0x8021542C: sh          $t5, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r13;
        goto L_802154AC;
    // 0x8021542C: sh          $t5, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r13;
L_80215430:
    // 0x80215430: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80215434: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
L_80215438:
    // 0x80215438: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021543C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80215440: sh          $t7, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r15;
    // 0x80215444: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80215448: lh          $t8, 0x20($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X20);
    // 0x8021544C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215450: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80215454: sh          $t8, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r24;
    // 0x80215458: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8021545C: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x80215460: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215464: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80215468: sh          $t0, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r8;
    // 0x8021546C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80215470: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80215474: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80215478: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8021547C: sh          $t2, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r10;
    // 0x80215480: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80215484: lb          $t4, 0x1E($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1E);
    // 0x80215488: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8021548C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80215490: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80215494: sh          $t5, -0x5200($at)
    MEM_H(-0X5200, ctx->r1) = ctx->r13;
    // 0x80215498: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021549C: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x802154A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802154A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802154A8: sh          $t7, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r15;
L_802154AC:
    // 0x802154AC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802154B0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802154B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802154B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802154BC: sb          $t9, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r25;
    // 0x802154C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802154C4: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x802154C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802154CC: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x802154D0: lbu         $t1, -0x51D7($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X51D7);
    // 0x802154D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802154D8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802154DC: sb          $t2, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r10;
    // 0x802154E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802154E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802154E8: jr          $ra
    // 0x802154EC: nop

    TRACE_RETURN()
    return;
    // 0x802154EC: nop

;}
RECOMP_FUNC void func_802217BC_5DCC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802217BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802217C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802217C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802217C8: jal         0x8003F1D8
    // 0x802217CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x802217CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802217D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802217D4: bne         $v0, $zero, L_80221814
    if (ctx->r2 != 0) {
        // 0x802217D8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80221814;
    }
    // 0x802217D8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802217DC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802217E0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x802217E4: lw          $t6, 0x150($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X150);
    // 0x802217E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802217EC: sw          $t6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r14;
    // 0x802217F0: lhu         $t7, 0x154($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X154);
    // 0x802217F4: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    // 0x802217F8: lhu         $t8, 0x156($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X156);
    // 0x802217FC: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x80221800: sb          $t8, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r24;
    // 0x80221804: jal         0x8003521C
    // 0x80221808: lw          $a0, 0xB4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XB4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221808: lw          $a0, 0xB4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XB4);
    after_1:
    // 0x8022180C: b           L_80221820
    // 0x80221810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221820;
    // 0x80221810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221814:
    // 0x80221814: jal         0x80221CCC
    // 0x80221818: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80221CCC_5DD19C(rdram, ctx);
        goto after_2;
    // 0x80221818: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x8022181C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221820:
    // 0x80221820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221824: jr          $ra
    // 0x80221828: nop

    TRACE_RETURN()
    return;
    // 0x80221828: nop

;}
RECOMP_FUNC void func_802105A0_5CBA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802105A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802105A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802105A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802105AC: jal         0x80013AC4
    // 0x802105B0: addiu       $a0, $a0, -0x1E78
    ctx->r4 = ADD32(ctx->r4, -0X1E78);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802105B0: addiu       $a0, $a0, -0x1E78
    ctx->r4 = ADD32(ctx->r4, -0X1E78);
    after_0:
    // 0x802105B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802105B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802105BC: jr          $ra
    // 0x802105C0: nop

    TRACE_RETURN()
    return;
    // 0x802105C0: nop

;}
RECOMP_FUNC void func_8021EE50_5DA320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EE50: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021EE54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021EE58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021EE5C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021EE60: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x8021EE64: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8021EE68: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021EE6C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021EE70: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021EE74: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8021EE78: nop

    // 0x8021EE7C: bc1fl       L_8021EE9C
    if (!c1cs) {
        // 0x8021EE80: sub.s       $f8, $f12, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021EE9C;
    }
    goto skip_0;
    // 0x8021EE80: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    skip_0:
    // 0x8021EE84: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021EE88: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021EE8C: nop

    // 0x8021EE90: bc1tl       L_8021F0FC
    if (c1cs) {
        // 0x8021EE94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021F0FC;
    }
    goto skip_1;
    // 0x8021EE94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8021EE98: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
L_8021EE9C:
    // 0x8021EE9C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021EEA0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8021EEA4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021EEA8: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x8021EEAC: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x8021EEB0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021EEB4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021EEB8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8021EEBC: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8021EEC0: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x8021EEC4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021EEC8: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x8021EECC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8021EED0: addiu       $t9, $a0, -0x100
    ctx->r25 = ADD32(ctx->r4, -0X100);
    // 0x8021EED4: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    // 0x8021EED8: jal         0x80003E10
    // 0x8021EEDC: sh          $a0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r4;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x8021EEDC: sh          $a0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021EEE0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021EEE4: jal         0x80003EA0
    // 0x8021EEE8: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x8021EEE8: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    after_1:
    // 0x8021EEEC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021EEF0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021EEF4: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021EEF8: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    // 0x8021EEFC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021EF00: nop

    // 0x8021EF04: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021EF08: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8021EF0C: jal         0x80003E10
    // 0x8021EF10: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x8021EF10: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8021EF14: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF18: jal         0x80003EA0
    // 0x8021EF1C: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8021EF1C: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    after_3:
    // 0x8021EF20: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF24: jal         0x80003EA0
    // 0x8021EF28: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x8021EF28: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    after_4:
    // 0x8021EF2C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF30: jal         0x80003EA0
    // 0x8021EF34: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_5;
    // 0x8021EF34: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    after_5:
    // 0x8021EF38: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF3C: jal         0x80003E10
    // 0x8021EF40: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x8021EF40: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    after_6:
    // 0x8021EF44: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021EF48: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021EF4C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021EF50: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021EF54: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021EF58: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021EF5C: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    // 0x8021EF60: mul.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021EF64: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021EF68: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021EF6C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021EF70: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021EF74: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8021EF78: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021EF7C: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8021EF80: jal         0x80003EA0
    // 0x8021EF84: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_7;
    // 0x8021EF84: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x8021EF88: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF8C: jal         0x80003E10
    // 0x8021EF90: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    func_80003E10_4A10(rdram, ctx);
        goto after_8;
    // 0x8021EF90: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    after_8:
    // 0x8021EF94: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021EF98: jal         0x80003EA0
    // 0x8021EF9C: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_9;
    // 0x8021EF9C: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    after_9:
    // 0x8021EFA0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021EFA4: jal         0x80003E10
    // 0x8021EFA8: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    func_80003E10_4A10(rdram, ctx);
        goto after_10;
    // 0x8021EFA8: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    after_10:
    // 0x8021EFAC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021EFB0: jal         0x80003E10
    // 0x8021EFB4: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    func_80003E10_4A10(rdram, ctx);
        goto after_11;
    // 0x8021EFB4: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    after_11:
    // 0x8021EFB8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021EFBC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021EFC0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021EFC4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8021EFC8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021EFCC: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021EFD0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021EFD4: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8021EFD8: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021EFDC: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8021EFE0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021EFE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021EFE8: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021EFEC: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021EFF0: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021EFF4: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021EFF8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021EFFC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021F000: beq         $t1, $zero, L_8021F064
    if (ctx->r9 == 0) {
        // 0x8021F004: swc1        $f8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
            goto L_8021F064;
    }
    // 0x8021F004: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x8021F008: mul.s       $f16, $f8, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8021F00C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021F010: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021F014: add.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8021F018: jal         0x8021ADD0
    // 0x8021F01C: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_12;
    // 0x8021F01C: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_12:
    // 0x8021F020: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x8021F024: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x8021F028: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x8021F02C: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x8021F030: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8021F034: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x8021F038: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021F03C: jal         0x8021ADD0
    // 0x8021F040: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_13;
    // 0x8021F040: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x8021F044: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x8021F048: addiu       $t1, $v0, 0x200
    ctx->r9 = ADD32(ctx->r2, 0X200);
    // 0x8021F04C: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x8021F050: addu        $t5, $t8, $t2
    ctx->r13 = ADD32(ctx->r24, ctx->r10);
    // 0x8021F054: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x8021F058: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x8021F05C: b           L_8021F0F8
    // 0x8021F060: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
        goto L_8021F0F8;
    // 0x8021F060: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
L_8021F064:
    // 0x8021F064: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8021F068: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021F06C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8021F070: lhu         $v1, 0x5E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X5E);
    // 0x8021F074: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x8021F078: nop

    // 0x8021F07C: bc1fl       L_8021F09C
    if (!c1cs) {
        // 0x8021F080: lhu         $t0, 0x14($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X14);
            goto L_8021F09C;
    }
    goto skip_2;
    // 0x8021F080: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    skip_2:
    // 0x8021F084: lhu         $v1, 0x5E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X5E);
    // 0x8021F088: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x8021F08C: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x8021F090: b           L_8021F0A4
    // 0x8021F094: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
        goto L_8021F0A4;
    // 0x8021F094: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x8021F098: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
L_8021F09C:
    // 0x8021F09C: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x8021F0A0: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_8021F0A4:
    // 0x8021F0A4: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x8021F0A8: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x8021F0AC: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x8021F0B0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8021F0B4: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021F0B8: jal         0x8021ADD0
    // 0x8021F0BC: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_14;
    // 0x8021F0BC: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    after_14:
    // 0x8021F0C0: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x8021F0C4: slti        $at, $t4, 0x200
    ctx->r1 = SIGNED(ctx->r12) < 0X200 ? 1 : 0;
    // 0x8021F0C8: bne         $at, $zero, L_8021F0E0
    if (ctx->r1 != 0) {
        // 0x8021F0CC: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_8021F0E0;
    }
    // 0x8021F0CC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8021F0D0: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x8021F0D4: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x8021F0D8: b           L_8021F0EC
    // 0x8021F0DC: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
        goto L_8021F0EC;
    // 0x8021F0DC: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
L_8021F0E0:
    // 0x8021F0E0: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x8021F0E4: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x8021F0E8: sh          $t9, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r25;
L_8021F0EC:
    // 0x8021F0EC: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x8021F0F0: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x8021F0F4: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
L_8021F0F8:
    // 0x8021F0F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021F0FC:
    // 0x8021F0FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021F100: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021F104: jr          $ra
    // 0x8021F108: nop

    TRACE_RETURN()
    return;
    // 0x8021F108: nop

;}
RECOMP_FUNC void func_802202F8_5DB7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802202F8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802202FC: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80220300: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80220304: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x80220308: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x8022030C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80220310: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80220314: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80220318: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8022031C: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80220320: lw          $t1, 0x3018($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3018);
    // 0x80220324: sb          $a1, 0xD($t1)
    MEM_B(0XD, ctx->r9) = ctx->r5;
    // 0x80220328: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8022032C: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x80220330: lw          $t4, 0x3018($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3018);
    // 0x80220334: sb          $a2, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r6;
    // 0x80220338: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8022033C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x80220340: lw          $t7, 0x3018($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3018);
    // 0x80220344: sb          $a3, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r7;
    // 0x80220348: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8022034C: lbu         $t8, 0x13($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X13);
    // 0x80220350: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80220354: lw          $t1, 0x3018($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3018);
    // 0x80220358: jr          $ra
    // 0x8022035C: sb          $t8, 0x10($t1)
    MEM_B(0X10, ctx->r9) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8022035C: sb          $t8, 0x10($t1)
    MEM_B(0X10, ctx->r9) = ctx->r24;
;}
RECOMP_FUNC void func_80225954_5E0E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022595C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80225960: jal         0x80225158
    // 0x80225964: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80225158_5E0628(rdram, ctx);
        goto after_0;
    // 0x80225964: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80225968: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8022596C: bne         $t6, $zero, L_802259C8
    if (ctx->r14 != 0) {
        // 0x80225970: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_802259C8;
    }
    // 0x80225970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80225974: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x80225978: bne         $t7, $zero, L_802259C8
    if (ctx->r15 != 0) {
        // 0x8022597C: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_802259C8;
    }
    // 0x8022597C: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x80225980: bne         $t8, $zero, L_802259AC
    if (ctx->r24 != 0) {
        // 0x80225984: nop
    
            goto L_802259AC;
    }
    // 0x80225984: nop

    // 0x80225988: jal         0x802261A4
    // 0x8022598C: nop

    func_802261A4_5E1674(rdram, ctx);
        goto after_1;
    // 0x8022598C: nop

    after_1:
    // 0x80225990: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80225994: beql        $at, $zero, L_802259CC
    if (ctx->r1 == 0) {
        // 0x80225998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802259CC;
    }
    goto skip_0;
    // 0x80225998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022599C: jal         0x80035020
    // 0x802259A0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x802259A0: nop

    after_2:
    // 0x802259A4: b           L_802259CC
    // 0x802259A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802259CC;
    // 0x802259A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802259AC:
    // 0x802259AC: jal         0x80225E60
    // 0x802259B0: nop

    func_80225E60_5E1330(rdram, ctx);
        goto after_3;
    // 0x802259B0: nop

    after_3:
    // 0x802259B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802259B8: beql        $at, $zero, L_802259CC
    if (ctx->r1 == 0) {
        // 0x802259BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802259CC;
    }
    goto skip_1;
    // 0x802259BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802259C0: jal         0x80035020
    // 0x802259C4: nop

    func_80035020_35C20(rdram, ctx);
        goto after_4;
    // 0x802259C4: nop

    after_4:
L_802259C8:
    // 0x802259C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802259CC:
    // 0x802259CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802259D0: jr          $ra
    // 0x802259D4: nop

    TRACE_RETURN()
    return;
    // 0x802259D4: nop

;}
RECOMP_FUNC void func_8021664C_5D1B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021664C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80216650: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80216654: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80216658: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021665C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80216660: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80216664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80216668: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021666C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80216670: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80216674: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x80216678: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8021667C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80216680: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80216684: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80216688: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021668C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80216690: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80216694: nop

    // 0x80216698: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021669C: beql        $t7, $zero, L_802166EC
    if (ctx->r15 == 0) {
        // 0x802166A0: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_802166EC;
    }
    goto skip_0;
    // 0x802166A0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x802166A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802166A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802166AC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802166B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802166B4: nop

    // 0x802166B8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802166BC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802166C0: nop

    // 0x802166C4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802166C8: bne         $t7, $zero, L_802166E0
    if (ctx->r15 != 0) {
        // 0x802166CC: nop
    
            goto L_802166E0;
    }
    // 0x802166CC: nop

    // 0x802166D0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802166D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802166D8: b           L_802166F8
    // 0x802166DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_802166F8;
    // 0x802166DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_802166E0:
    // 0x802166E0: b           L_802166F8
    // 0x802166E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_802166F8;
    // 0x802166E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802166E8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_802166EC:
    // 0x802166EC: nop

    // 0x802166F0: bltz        $t7, L_802166E0
    if (SIGNED(ctx->r15) < 0) {
        // 0x802166F4: nop
    
            goto L_802166E0;
    }
    // 0x802166F4: nop

L_802166F8:
    // 0x802166F8: sh          $t7, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r15;
    // 0x802166FC: sb          $a3, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r7;
    // 0x80216700: lhu         $t8, 0x5E($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X5E);
    // 0x80216704: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x80216708: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021670C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80216710: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80216714: lw          $t1, -0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X4);
    // 0x80216718: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021671C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x80216720: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80216724: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80216728: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8021672C: sw          $t6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r14;
    // 0x80216730: lhu         $t7, 0x5E($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X5E);
    // 0x80216734: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80216738: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8021673C: lw          $t0, -0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, -0X4);
    // 0x80216740: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80216744: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80216748: sh          $t2, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r10;
    // 0x8021674C: jal         0x800141C4
    // 0x80216750: andi        $a0, $t2, 0xFFFF
    ctx->r4 = ctx->r10 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80216750: andi        $a0, $t2, 0xFFFF
    ctx->r4 = ctx->r10 & 0XFFFF;
    after_0:
    // 0x80216754: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216758: bnel        $v0, $at, L_80216778
    if (ctx->r2 != ctx->r1) {
        // 0x8021675C: lhu         $t3, 0x5E($s1)
        ctx->r11 = MEM_HU(ctx->r17, 0X5E);
            goto L_80216778;
    }
    goto skip_1;
    // 0x8021675C: lhu         $t3, 0x5E($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X5E);
    skip_1:
    // 0x80216760: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x80216764: jal         0x80216640
    // 0x80216768: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_1;
    // 0x80216768: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x8021676C: jal         0x80013B14
    // 0x80216770: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80216770: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_2:
    // 0x80216774: lhu         $t3, 0x5E($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X5E);
L_80216778:
    // 0x80216778: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x8021677C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80216780: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80216784: lw          $t5, 0x6984($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6984);
    // 0x80216788: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8021678C: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x80216790: sh          $t7, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r15;
    // 0x80216794: jal         0x800141C4
    // 0x80216798: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x80216798: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    after_3:
    // 0x8021679C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802167A0: bnel        $v0, $at, L_802167C0
    if (ctx->r2 != ctx->r1) {
        // 0x802167A4: lhu         $v0, 0x34($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X34);
            goto L_802167C0;
    }
    goto skip_2;
    // 0x802167A4: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    skip_2:
    // 0x802167A8: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x802167AC: jal         0x80216640
    // 0x802167B0: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_4;
    // 0x802167B0: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_4:
    // 0x802167B4: jal         0x80013B14
    // 0x802167B8: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_5;
    // 0x802167B8: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_5:
    // 0x802167BC: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
L_802167C0:
    // 0x802167C0: lhu         $t9, 0x3C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X3C);
    // 0x802167C4: addiu       $t8, $zero, 0x152
    ctx->r24 = ADD32(0, 0X152);
    // 0x802167C8: sh          $t8, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r24;
    // 0x802167CC: beq         $v0, $t9, L_802167DC
    if (ctx->r2 == ctx->r25) {
        // 0x802167D0: andi        $t0, $t8, 0xFFFF
        ctx->r8 = ctx->r24 & 0XFFFF;
            goto L_802167DC;
    }
    // 0x802167D0: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x802167D4: bne         $v0, $t0, L_802167E0
    if (ctx->r2 != ctx->r8) {
        // 0x802167D8: nop
    
            goto L_802167E0;
    }
    // 0x802167D8: nop

L_802167DC:
    // 0x802167DC: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
L_802167E0:
    // 0x802167E0: jal         0x80014218
    // 0x802167E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x802167E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802167E8: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x802167EC: sll         $t2, $t1, 7
    ctx->r10 = S32(ctx->r9 << 7);
    // 0x802167F0: bgezl       $t2, L_8021681C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802167F4: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_8021681C;
    }
    goto skip_3;
    // 0x802167F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_3:
    // 0x802167F8: jal         0x8001B5AC
    // 0x802167FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_7;
    // 0x802167FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80216800: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80216808: nop

    // 0x8021680C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80216810: b           L_80216824
    // 0x80216814: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
        goto L_80216824;
    // 0x80216814: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x80216818: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_8021681C:
    // 0x8021681C: nop

    // 0x80216820: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_80216824:
    // 0x80216824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80216828: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021682C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80216830: jr          $ra
    // 0x80216834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80216834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802257B0_5E0C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802257B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802257B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802257BC: lw          $v1, 0xC0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC0);
    // 0x802257C0: lh          $t6, 0xC8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC8);
    // 0x802257C4: lh          $t9, 0xCA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XCA);
    // 0x802257C8: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x802257CC: lhu         $t5, 0x6($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X6);
    // 0x802257D0: lh          $t0, 0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2);
    // 0x802257D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802257D8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802257DC: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x802257E0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802257E4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802257E8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802257EC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802257F0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802257F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802257F8: lh          $t2, 0xCC($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XCC);
    // 0x802257FC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225800: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80225804: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80225808: lh          $t3, 0x4($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X4);
    // 0x8022580C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80225810: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80225814: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80225818: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8022581C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80225820: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80225824: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80225828: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8022582C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80225830: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80225834: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80225838: jal         0x8021B988
    // 0x8022583C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8021B988_5D6E58(rdram, ctx);
        goto after_0;
    // 0x8022583C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80225840: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80225844: bne         $v0, $zero, L_80225874
    if (ctx->r2 != 0) {
        // 0x80225848: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80225874;
    }
    // 0x80225848: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8022584C: lhu         $t7, 0x6($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X6);
    // 0x80225850: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80225854: andi        $t8, $t7, 0xC000
    ctx->r24 = ctx->r15 & 0XC000;
    // 0x80225858: beql        $t8, $zero, L_80225874
    if (ctx->r24 == 0) {
        // 0x8022585C: sw          $v1, 0xC0($a0)
        MEM_W(0XC0, ctx->r4) = ctx->r3;
            goto L_80225874;
    }
    goto skip_0;
    // 0x8022585C: sw          $v1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r3;
    skip_0:
    // 0x80225860: jal         0x80035020
    // 0x80225864: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x80225864: nop

    after_1:
    // 0x80225868: b           L_80225880
    // 0x8022586C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225880;
    // 0x8022586C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225870: sw          $v1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r3;
L_80225874:
    // 0x80225874: jal         0x80225060
    // 0x80225878: nop

    func_80225060_5E0530(rdram, ctx);
        goto after_2;
    // 0x80225878: nop

    after_2:
    // 0x8022587C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225880:
    // 0x80225880: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225884: jr          $ra
    // 0x80225888: nop

    TRACE_RETURN()
    return;
    // 0x80225888: nop

;}
RECOMP_FUNC void func_80225B3C_5E100C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B3C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80225B40: addiu       $a2, $a2, -0x33D0
    ctx->r6 = ADD32(ctx->r6, -0X33D0);
    // 0x80225B44: lw          $v1, 0x158($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X158);
    // 0x80225B48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80225B4C: beq         $v1, $zero, L_80225BB0
    if (ctx->r3 == 0) {
        // 0x80225B50: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80225BB0;
    }
    // 0x80225B50: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80225B54: lw          $a1, 0x15C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X15C);
L_80225B58:
    // 0x80225B58: bnel        $v0, $zero, L_80225B74
    if (ctx->r2 != 0) {
        // 0x80225B5C: lhu         $t8, 0x6($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X6);
            goto L_80225B74;
    }
    goto skip_0;
    // 0x80225B5C: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    skip_0:
    // 0x80225B60: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x80225B64: andi        $t7, $t6, 0xC000
    ctx->r15 = ctx->r14 & 0XC000;
    // 0x80225B68: bne         $t7, $zero, L_80225B8C
    if (ctx->r15 != 0) {
        // 0x80225B6C: nop
    
            goto L_80225B8C;
    }
    // 0x80225B6C: nop

    // 0x80225B70: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
L_80225B74:
    // 0x80225B74: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80225B78: andi        $t9, $t8, 0xC000
    ctx->r25 = ctx->r24 & 0XC000;
    // 0x80225B7C: bne         $t9, $zero, L_80225B8C
    if (ctx->r25 != 0) {
        // 0x80225B80: nop
    
            goto L_80225B8C;
    }
    // 0x80225B80: nop

    // 0x80225B84: b           L_80225B58
    // 0x80225B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225B58;
    // 0x80225B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225B8C:
    // 0x80225B8C: beq         $a1, $zero, L_80225BB0
    if (ctx->r5 == 0) {
        // 0x80225B90: ori         $v1, $zero, 0xFFFF
        ctx->r3 = 0 | 0XFFFF;
            goto L_80225BB0;
    }
    // 0x80225B90: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
L_80225B94:
    // 0x80225B94: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80225B98: beq         $v0, $zero, L_80225BB0
    if (ctx->r2 == 0) {
        // 0x80225B9C: nop
    
            goto L_80225BB0;
    }
    // 0x80225B9C: nop

    // 0x80225BA0: beq         $v1, $v0, L_80225BB0
    if (ctx->r3 == ctx->r2) {
        // 0x80225BA4: nop
    
            goto L_80225BB0;
    }
    // 0x80225BA4: nop

    // 0x80225BA8: b           L_80225B94
    // 0x80225BAC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
        goto L_80225B94;
    // 0x80225BAC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80225BB0:
    // 0x80225BB0: jr          $ra
    // 0x80225BB4: nop

    TRACE_RETURN()
    return;
    // 0x80225BB4: nop

;}
RECOMP_FUNC void func_8020DF60_5C9430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DF60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DF64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DF68: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DF6C: jal         0x80013AC4
    // 0x8020DF70: addiu       $a0, $a0, -0x3CD4
    ctx->r4 = ADD32(ctx->r4, -0X3CD4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DF70: addiu       $a0, $a0, -0x3CD4
    ctx->r4 = ADD32(ctx->r4, -0X3CD4);
    after_0:
    // 0x8020DF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DF78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DF7C: jr          $ra
    // 0x8020DF80: nop

    TRACE_RETURN()
    return;
    // 0x8020DF80: nop

;}
RECOMP_FUNC void func_80213ED0_5CF3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213ED0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213ED4: jr          $ra
    // 0x80213ED8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213ED8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020E470_5C9940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E478: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E47C: jal         0x80013AC4
    // 0x8020E480: addiu       $a0, $a0, -0x3A00
    ctx->r4 = ADD32(ctx->r4, -0X3A00);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E480: addiu       $a0, $a0, -0x3A00
    ctx->r4 = ADD32(ctx->r4, -0X3A00);
    after_0:
    // 0x8020E484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E48C: jr          $ra
    // 0x8020E490: nop

    TRACE_RETURN()
    return;
    // 0x8020E490: nop

;}
RECOMP_FUNC void func_8020E500_5C99D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E508: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E50C: jal         0x80013AC4
    // 0x8020E510: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E510: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    after_0:
    // 0x8020E514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E51C: jr          $ra
    // 0x8020E520: nop

    TRACE_RETURN()
    return;
    // 0x8020E520: nop

;}
RECOMP_FUNC void func_80214F98_5D0468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214F9C: jr          $ra
    // 0x80214FA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021B034_5D6504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B034: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021B038: sh          $a1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r5;
    // 0x8021B03C: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    // 0x8021B040: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x8021B044: jr          $ra
    // 0x8021B048: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B048: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802234CC_5DE99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802234CC: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x802234D0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802234D4: bgez        $v0, L_802234E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802234D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802234E4;
    }
    // 0x802234D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802234DC: b           L_802234E4
    // 0x802234E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_802234E4;
    // 0x802234E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_802234E4:
    // 0x802234E4: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x802234E8: andi        $t6, $v1, 0x3FF
    ctx->r14 = ctx->r3 & 0X3FF;
    // 0x802234EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802234F0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802234F4: beq         $at, $zero, L_80223504
    if (ctx->r1 == 0) {
        // 0x802234F8: nop
    
            goto L_80223504;
    }
    // 0x802234F8: nop

    // 0x802234FC: jr          $ra
    // 0x80223500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80223500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223504:
    // 0x80223504: jr          $ra
    // 0x80223508: nop

    TRACE_RETURN()
    return;
    // 0x80223508: nop

;}
RECOMP_FUNC void func_802241AC_5DF67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802241AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802241B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802241B4: lhu         $t6, 0xA6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XA6);
    // 0x802241B8: lw          $v0, 0xC4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC4);
    // 0x802241BC: beql        $t6, $zero, L_80224210
    if (ctx->r14 == 0) {
        // 0x802241C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80224210;
    }
    goto skip_0;
    // 0x802241C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802241C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802241C8: jal         0x802244A0
    // 0x802241CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_802244A0_5DF970(rdram, ctx);
        goto after_0;
    // 0x802241CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802241D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802241D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802241D8: lhu         $a1, 0xA6($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XA6);
    // 0x802241DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802241E0: andi        $v1, $a1, 0x1FFF
    ctx->r3 = ctx->r5 & 0X1FFF;
    // 0x802241E4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802241E8: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x802241EC: bne         $a2, $zero, L_80224204
    if (ctx->r6 != 0) {
        // 0x802241F0: andi        $t9, $a1, 0xE000
        ctx->r25 = ctx->r5 & 0XE000;
            goto L_80224204;
    }
    // 0x802241F0: andi        $t9, $a1, 0xE000
    ctx->r25 = ctx->r5 & 0XE000;
    // 0x802241F4: sw          $v0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r2;
    // 0x802241F8: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x802241FC: b           L_8022420C
    // 0x80224200: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
        goto L_8022420C;
    // 0x80224200: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
L_80224204:
    // 0x80224204: or          $t0, $t9, $a2
    ctx->r8 = ctx->r25 | ctx->r6;
    // 0x80224208: sh          $t0, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r8;
L_8022420C:
    // 0x8022420C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80224210:
    // 0x80224210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80224214: jr          $ra
    // 0x80224218: nop

    TRACE_RETURN()
    return;
    // 0x80224218: nop

;}
RECOMP_FUNC void func_8020EFF8_5CA4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EFFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F000: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F004: jal         0x80013AC4
    // 0x8020F008: addiu       $a0, $a0, -0x321C
    ctx->r4 = ADD32(ctx->r4, -0X321C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F008: addiu       $a0, $a0, -0x321C
    ctx->r4 = ADD32(ctx->r4, -0X321C);
    after_0:
    // 0x8020F00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F014: jr          $ra
    // 0x8020F018: nop

    TRACE_RETURN()
    return;
    // 0x8020F018: nop

;}
RECOMP_FUNC void func_80221894_5DCD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022189C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802218A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802218A4: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x802218A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802218AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802218B0: beq         $v1, $zero, L_802218D4
    if (ctx->r3 == 0) {
        // 0x802218B4: addiu       $v0, $a1, 0xDC
        ctx->r2 = ADD32(ctx->r5, 0XDC);
            goto L_802218D4;
    }
    // 0x802218B4: addiu       $v0, $a1, 0xDC
    ctx->r2 = ADD32(ctx->r5, 0XDC);
    // 0x802218B8: beq         $v1, $a2, L_802218EC
    if (ctx->r3 == ctx->r6) {
        // 0x802218BC: addiu       $v0, $a1, 0xDC
        ctx->r2 = ADD32(ctx->r5, 0XDC);
            goto L_802218EC;
    }
    // 0x802218BC: addiu       $v0, $a1, 0xDC
    ctx->r2 = ADD32(ctx->r5, 0XDC);
    // 0x802218C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802218C4: beq         $v1, $at, L_8022190C
    if (ctx->r3 == ctx->r1) {
        // 0x802218C8: nop
    
            goto L_8022190C;
    }
    // 0x802218C8: nop

    // 0x802218CC: b           L_80221958
    // 0x802218D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221958;
    // 0x802218D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802218D4:
    // 0x802218D4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802218D8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x802218DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802218E0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802218E4: b           L_80221954
    // 0x802218E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80221954;
    // 0x802218E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_802218EC:
    // 0x802218EC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x802218F0: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x802218F4: bne         $a0, $zero, L_80221954
    if (ctx->r4 != 0) {
        // 0x802218F8: sw          $t9, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r25;
            goto L_80221954;
    }
    // 0x802218F8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802218FC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80221900: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80221904: b           L_80221954
    // 0x80221908: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
        goto L_80221954;
    // 0x80221908: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_8022190C:
    // 0x8022190C: jal         0x8003D310
    // 0x80221910: lw          $a0, 0xD4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XD4);
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x80221910: lw          $a0, 0xD4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XD4);
    after_0:
    // 0x80221914: bne         $v0, $zero, L_8022192C
    if (ctx->r2 != 0) {
        // 0x80221918: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8022192C;
    }
    // 0x80221918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022191C: jal         0x80034ED4
    // 0x80221920: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80221920: nop

    after_1:
    // 0x80221924: b           L_80221958
    // 0x80221928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221958;
    // 0x80221928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022192C:
    // 0x8022192C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80221930: sw          $a2, 0x7770($at)
    MEM_W(0X7770, ctx->r1) = ctx->r6;
    // 0x80221934: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80221938: sw          $a2, 0x7798($at)
    MEM_W(0X7798, ctx->r1) = ctx->r6;
    // 0x8022193C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80221940: sw          $zero, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = 0;
    // 0x80221944: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80221948: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8022194C: jal         0x80035020
    // 0x80221950: sw          $t2, 0x77D8($at)
    MEM_W(0X77D8, ctx->r1) = ctx->r10;
    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x80221950: sw          $t2, 0x77D8($at)
    MEM_W(0X77D8, ctx->r1) = ctx->r10;
    after_2:
L_80221954:
    // 0x80221954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221958:
    // 0x80221958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022195C: jr          $ra
    // 0x80221960: nop

    TRACE_RETURN()
    return;
    // 0x80221960: nop

;}
RECOMP_FUNC void func_80213F20_5CF3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213F20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80213F24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80213F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213F30: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x80213F34: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80213F38: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x80213F3C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x80213F40: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80213F44: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x80213F48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80213F4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80213F50: lw          $t8, 0x1FC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1FC4);
    // 0x80213F54: addiu       $t2, $zero, 0x181
    ctx->r10 = ADD32(0, 0X181);
    // 0x80213F58: addiu       $t3, $zero, 0x152
    ctx->r11 = ADD32(0, 0X152);
    // 0x80213F5C: sw          $t8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r24;
    // 0x80213F60: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x80213F64: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80213F68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213F6C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80213F70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80213F74: lhu         $t1, 0x1F80($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X1F80);
    // 0x80213F78: sh          $t2, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r10;
    // 0x80213F7C: sh          $t3, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r11;
    // 0x80213F80: sh          $t1, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r9;
    // 0x80213F84: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80213F88: jal         0x80014218
    // 0x80213F8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x80213F8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80213F90: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80213F94: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213F98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80213F9C: lw          $t4, 0xD4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XD4);
    // 0x80213FA0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80213FA4: addiu       $t9, $zero, 0x21
    ctx->r25 = ADD32(0, 0X21);
    // 0x80213FA8: bne         $t4, $zero, L_80213FC8
    if (ctx->r12 != 0) {
        // 0x80213FAC: addiu       $a0, $a0, 0x3F14
        ctx->r4 = ADD32(ctx->r4, 0X3F14);
            goto L_80213FC8;
    }
    // 0x80213FAC: addiu       $a0, $a0, 0x3F14
    ctx->r4 = ADD32(ctx->r4, 0X3F14);
    // 0x80213FB0: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x80213FB4: addiu       $t5, $t5, 0x7B58
    ctx->r13 = ADD32(ctx->r13, 0X7B58);
    // 0x80213FB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213FBC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80213FC0: b           L_80213FD8
    // 0x80213FC4: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
        goto L_80213FD8;
    // 0x80213FC4: sw          $t6, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r14;
L_80213FC8:
    // 0x80213FC8: addiu       $t7, $t7, -0x26E0
    ctx->r15 = ADD32(ctx->r15, -0X26E0);
    // 0x80213FCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213FD0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80213FD4: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_80213FD8:
    // 0x80213FD8: jal         0x8003521C
    // 0x80213FDC: sw          $t9, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80213FDC: sw          $t9, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r25;
    after_1:
    // 0x80213FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213FE8: jr          $ra
    // 0x80213FEC: nop

    TRACE_RETURN()
    return;
    // 0x80213FEC: nop

;}
RECOMP_FUNC void func_8020EEB4_5CA384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EEB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EEB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EEBC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EEC0: jal         0x80013AC4
    // 0x8020EEC4: addiu       $a0, $a0, -0x3264
    ctx->r4 = ADD32(ctx->r4, -0X3264);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EEC4: addiu       $a0, $a0, -0x3264
    ctx->r4 = ADD32(ctx->r4, -0X3264);
    after_0:
    // 0x8020EEC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EED0: jr          $ra
    // 0x8020EED4: nop

    TRACE_RETURN()
    return;
    // 0x8020EED4: nop

;}
RECOMP_FUNC void func_80210900_5CBDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210908: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021090C: jal         0x80013AC4
    // 0x80210910: addiu       $a0, $a0, -0x1BC8
    ctx->r4 = ADD32(ctx->r4, -0X1BC8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210910: addiu       $a0, $a0, -0x1BC8
    ctx->r4 = ADD32(ctx->r4, -0X1BC8);
    after_0:
    // 0x80210914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021091C: jr          $ra
    // 0x80210920: nop

    TRACE_RETURN()
    return;
    // 0x80210920: nop

;}
RECOMP_FUNC void func_8021A310_5D57E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A310: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A314: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8021A318: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x8021A31C: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8021A320: jr          $ra
    // 0x8021A324: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8021A324: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_802182BC_5D378C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802182BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802182C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802182C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802182C8: addiu       $a1, $a1, 0x12E0
    ctx->r5 = ADD32(ctx->r5, 0X12E0);
    // 0x802182CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802182D0: jal         0x802171A8
    // 0x802182D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x802182D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802182D8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802182DC: beq         $v0, $zero, L_8021833C
    if (ctx->r2 == 0) {
        // 0x802182E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8021833C;
    }
    // 0x802182E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802182E4: lw          $t6, 0x60($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X60);
    // 0x802182E8: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x802182EC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802182F0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802182F4: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x802182F8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802182FC: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x80218300: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80218304: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    // 0x80218308: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8021830C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80218310: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80218314: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x80218318: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x8021831C: sb          $t0, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r8;
    // 0x80218320: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x80218324: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80218328: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8021832C: jal         0x80217558
    // 0x80218330: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    func_80217558_5D2A28(rdram, ctx);
        goto after_1;
    // 0x80218330: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    after_1:
    // 0x80218334: b           L_80218340
    // 0x80218338: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_80218340;
    // 0x80218338: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8021833C:
    // 0x8021833C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218340:
    // 0x80218340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80218344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80218348: jr          $ra
    // 0x8021834C: nop

    TRACE_RETURN()
    return;
    // 0x8021834C: nop

;}
RECOMP_FUNC void func_8020F334_5CA804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F33C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F340: jal         0x80013AC4
    // 0x8020F344: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F344: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    after_0:
    // 0x8020F348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F34C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F350: jr          $ra
    // 0x8020F354: nop

    TRACE_RETURN()
    return;
    // 0x8020F354: nop

;}
RECOMP_FUNC void func_8020E6D4_5C9BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E6D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E6DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E6E0: jal         0x80013AC4
    // 0x8020E6E4: addiu       $a0, $a0, -0x383C
    ctx->r4 = ADD32(ctx->r4, -0X383C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E6E4: addiu       $a0, $a0, -0x383C
    ctx->r4 = ADD32(ctx->r4, -0X383C);
    after_0:
    // 0x8020E6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E6F0: jr          $ra
    // 0x8020E6F4: nop

    TRACE_RETURN()
    return;
    // 0x8020E6F4: nop

;}
RECOMP_FUNC void func_80217F1C_5D33EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217F24: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80217F28: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80217F2C: sll         $t6, $v0, 11
    ctx->r14 = S32(ctx->r2 << 11);
    // 0x80217F30: bgez        $t6, L_80217F48
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80217F34: sll         $t7, $v0, 14
        ctx->r15 = S32(ctx->r2 << 14);
            goto L_80217F48;
    }
    // 0x80217F34: sll         $t7, $v0, 14
    ctx->r15 = S32(ctx->r2 << 14);
    // 0x80217F38: jal         0x802176C4
    // 0x80217F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802176C4_5D2B94(rdram, ctx);
        goto after_0;
    // 0x80217F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80217F40: b           L_80218040
    // 0x80217F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80217F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217F48:
    // 0x80217F48: bgez        $t7, L_80217F78
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80217F4C: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_80217F78;
    }
    // 0x80217F4C: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x80217F50: beq         $v1, $zero, L_80217F78
    if (ctx->r3 == 0) {
        // 0x80217F54: nop
    
            goto L_80217F78;
    }
    // 0x80217F54: nop

    // 0x80217F58: lbu         $t8, 0x4C($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4C);
    // 0x80217F5C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80217F60: bne         $t8, $at, L_80217F78
    if (ctx->r24 != ctx->r1) {
        // 0x80217F64: nop
    
            goto L_80217F78;
    }
    // 0x80217F64: nop

    // 0x80217F68: jal         0x802176C4
    // 0x80217F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802176C4_5D2B94(rdram, ctx);
        goto after_1;
    // 0x80217F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80217F70: b           L_80218040
    // 0x80217F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80217F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217F78:
    // 0x80217F78: bne         $t9, $zero, L_80217F98
    if (ctx->r25 != 0) {
        // 0x80217F7C: andi        $v1, $v0, 0x8000
        ctx->r3 = ctx->r2 & 0X8000;
            goto L_80217F98;
    }
    // 0x80217F7C: andi        $v1, $v0, 0x8000
    ctx->r3 = ctx->r2 & 0X8000;
    // 0x80217F80: beq         $v1, $zero, L_80217FA8
    if (ctx->r3 == 0) {
        // 0x80217F84: andi        $t2, $v0, 0x1000
        ctx->r10 = ctx->r2 & 0X1000;
            goto L_80217FA8;
    }
    // 0x80217F84: andi        $t2, $v0, 0x1000
    ctx->r10 = ctx->r2 & 0X1000;
    // 0x80217F88: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x80217F8C: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x80217F90: bne         $t1, $zero, L_80217FA8
    if (ctx->r9 != 0) {
        // 0x80217F94: nop
    
            goto L_80217FA8;
    }
    // 0x80217F94: nop

L_80217F98:
    // 0x80217F98: jal         0x802176C4
    // 0x80217F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802176C4_5D2B94(rdram, ctx);
        goto after_2;
    // 0x80217F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80217FA0: b           L_80218040
    // 0x80217FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80217FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217FA8:
    // 0x80217FA8: bne         $t2, $zero, L_80217FC8
    if (ctx->r10 != 0) {
        // 0x80217FAC: nop
    
            goto L_80217FC8;
    }
    // 0x80217FAC: nop

    // 0x80217FB0: beq         $v1, $zero, L_80217FD8
    if (ctx->r3 == 0) {
        // 0x80217FB4: andi        $t5, $v0, 0x2000
        ctx->r13 = ctx->r2 & 0X2000;
            goto L_80217FD8;
    }
    // 0x80217FB4: andi        $t5, $v0, 0x2000
    ctx->r13 = ctx->r2 & 0X2000;
    // 0x80217FB8: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    // 0x80217FBC: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x80217FC0: beq         $t4, $zero, L_80217FD8
    if (ctx->r12 == 0) {
        // 0x80217FC4: nop
    
            goto L_80217FD8;
    }
    // 0x80217FC4: nop

L_80217FC8:
    // 0x80217FC8: jal         0x802176C4
    // 0x80217FCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802176C4_5D2B94(rdram, ctx);
        goto after_3;
    // 0x80217FCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80217FD0: b           L_80218040
    // 0x80217FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80217FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217FD8:
    // 0x80217FD8: bne         $t5, $zero, L_80217FFC
    if (ctx->r13 != 0) {
        // 0x80217FDC: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80217FFC;
    }
    // 0x80217FDC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80217FE0: and         $v1, $v0, $at
    ctx->r3 = ctx->r2 & ctx->r1;
    // 0x80217FE4: beq         $v1, $zero, L_8021800C
    if (ctx->r3 == 0) {
        // 0x80217FE8: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_8021800C;
    }
    // 0x80217FE8: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80217FEC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80217FF0: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x80217FF4: bne         $t7, $zero, L_8021800C
    if (ctx->r15 != 0) {
        // 0x80217FF8: nop
    
            goto L_8021800C;
    }
    // 0x80217FF8: nop

L_80217FFC:
    // 0x80217FFC: jal         0x802176C4
    // 0x80218000: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_802176C4_5D2B94(rdram, ctx);
        goto after_4;
    // 0x80218000: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80218004: b           L_80218040
    // 0x80218008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80218008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021800C:
    // 0x8021800C: bne         $t8, $zero, L_8021802C
    if (ctx->r24 != 0) {
        // 0x80218010: nop
    
            goto L_8021802C;
    }
    // 0x80218010: nop

    // 0x80218014: beq         $v1, $zero, L_8021803C
    if (ctx->r3 == 0) {
        // 0x80218018: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8021803C;
    }
    // 0x80218018: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8021801C: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x80218020: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x80218024: beq         $t0, $zero, L_8021803C
    if (ctx->r8 == 0) {
        // 0x80218028: nop
    
            goto L_8021803C;
    }
    // 0x80218028: nop

L_8021802C:
    // 0x8021802C: jal         0x802176C4
    // 0x80218030: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802176C4_5D2B94(rdram, ctx);
        goto after_5;
    // 0x80218030: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x80218034: b           L_80218040
    // 0x80218038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218040;
    // 0x80218038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021803C:
    // 0x8021803C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218040:
    // 0x80218040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80218044: jr          $ra
    // 0x80218048: nop

    TRACE_RETURN()
    return;
    // 0x80218048: nop

;}
RECOMP_FUNC void func_8020F6B8_5CAB88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F6B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F6C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F6C4: jal         0x80013AC4
    // 0x8020F6C8: addiu       $a0, $a0, -0x2D9C
    ctx->r4 = ADD32(ctx->r4, -0X2D9C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F6C8: addiu       $a0, $a0, -0x2D9C
    ctx->r4 = ADD32(ctx->r4, -0X2D9C);
    after_0:
    // 0x8020F6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F6D4: jr          $ra
    // 0x8020F6D8: nop

    TRACE_RETURN()
    return;
    // 0x8020F6D8: nop

;}
RECOMP_FUNC void func_8020FEBC_5CB38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FEC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FEC4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FEC8: jal         0x80013AC4
    // 0x8020FECC: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FECC: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    after_0:
    // 0x8020FED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FED8: jr          $ra
    // 0x8020FEDC: nop

    TRACE_RETURN()
    return;
    // 0x8020FEDC: nop

;}
RECOMP_FUNC void func_80218E04_5D42D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218E04: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80218E08: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80218E0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80218E10: sw          $zero, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = 0;
    // 0x80218E14: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x80218E18: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x80218E1C: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x80218E20: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
    // 0x80218E24: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x80218E28: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x80218E2C: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    // 0x80218E30: sw          $zero, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = 0;
    // 0x80218E34: sb          $zero, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = 0;
    // 0x80218E38: sb          $zero, 0x108($v0)
    MEM_B(0X108, ctx->r2) = 0;
    // 0x80218E3C: sh          $zero, 0x10A($v0)
    MEM_H(0X10A, ctx->r2) = 0;
    // 0x80218E40: sb          $zero, 0x138($v0)
    MEM_B(0X138, ctx->r2) = 0;
    // 0x80218E44: sw          $zero, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = 0;
    // 0x80218E48: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    // 0x80218E4C: sb          $zero, 0x100($v0)
    MEM_B(0X100, ctx->r2) = 0;
    // 0x80218E50: sb          $zero, 0xD1($v0)
    MEM_B(0XD1, ctx->r2) = 0;
    // 0x80218E54: sw          $zero, 0x130($v0)
    MEM_W(0X130, ctx->r2) = 0;
    // 0x80218E58: swc1        $f0, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->f0.u32l;
    // 0x80218E5C: swc1        $f0, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f0.u32l;
    // 0x80218E60: swc1        $f0, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->f0.u32l;
    // 0x80218E64: swc1        $f0, 0x190($v0)
    MEM_W(0X190, ctx->r2) = ctx->f0.u32l;
    // 0x80218E68: swc1        $f0, 0x194($v0)
    MEM_W(0X194, ctx->r2) = ctx->f0.u32l;
    // 0x80218E6C: swc1        $f0, 0x198($v0)
    MEM_W(0X198, ctx->r2) = ctx->f0.u32l;
    // 0x80218E70: swc1        $f0, 0x19C($v0)
    MEM_W(0X19C, ctx->r2) = ctx->f0.u32l;
    // 0x80218E74: jr          $ra
    // 0x80218E78: swc1        $f0, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80218E78: swc1        $f0, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80219578_5D4A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219578: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021957C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80219580: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80219584: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80219588: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x8021958C: lb          $t7, 0xD6($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XD6);
    // 0x80219590: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80219594: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80219598: sh          $t9, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r25;
    // 0x8021959C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x802195A0: sh          $t0, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r8;
    // 0x802195A4: jal         0x80003EA0
    // 0x802195A8: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x802195A8: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x802195AC: lbu         $t1, 0xD4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD4);
    // 0x802195B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802195B4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x802195B8: bgez        $t1, L_802195CC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802195BC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802195CC;
    }
    // 0x802195BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802195C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802195C4: nop

    // 0x802195C8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802195CC:
    // 0x802195CC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802195D0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802195D4: jal         0x80003E10
    // 0x802195D8: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x802195D8: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_1:
    // 0x802195DC: lbu         $t2, 0xD5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD5);
    // 0x802195E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802195E4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802195E8: bgez        $t2, L_802195FC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802195EC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802195FC;
    }
    // 0x802195EC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802195F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802195F4: nop

    // 0x802195F8: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802195FC:
    // 0x802195FC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80219600: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80219604: jal         0x80003EA0
    // 0x80219608: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x80219608: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_2:
    // 0x8021960C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80219610: jal         0x80003E10
    // 0x80219614: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x80219614: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_3:
    // 0x80219618: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021961C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80219620: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80219624: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80219628: nop

    // 0x8021962C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80219630: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80219634: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80219638: jal         0x80003E10
    // 0x8021963C: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003E10_4A10(rdram, ctx);
        goto after_4;
    // 0x8021963C: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_4:
    // 0x80219640: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80219644: jal         0x80003EA0
    // 0x80219648: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_5;
    // 0x80219648: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_5:
    // 0x8021964C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80219650: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80219654: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80219658: lwc1        $f14, 0xDC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x8021965C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80219660: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219664: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80219668: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021966C: lwc1        $f6, 0xD8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x80219670: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80219674: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80219678: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021967C: sub.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80219680: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80219684: nop

    // 0x80219688: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021968C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80219690: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80219694: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80219698: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021969C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802196A0: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x802196A4: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802196A8: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802196AC: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802196B0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802196B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802196B8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802196BC: div.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802196C0: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802196C4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802196C8: swc1        $f18, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f18.u32l;
    // 0x802196CC: swc1        $f4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f4.u32l;
    // 0x802196D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802196D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802196D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802196DC: jr          $ra
    // 0x802196E0: nop

    TRACE_RETURN()
    return;
    // 0x802196E0: nop

;}
RECOMP_FUNC void func_8020FF28_5CB3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FF30: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FF34: jal         0x80013AC4
    // 0x8020FF38: addiu       $a0, $a0, -0x255C
    ctx->r4 = ADD32(ctx->r4, -0X255C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FF38: addiu       $a0, $a0, -0x255C
    ctx->r4 = ADD32(ctx->r4, -0X255C);
    after_0:
    // 0x8020FF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FF44: jr          $ra
    // 0x8020FF48: nop

    TRACE_RETURN()
    return;
    // 0x8020FF48: nop

;}
RECOMP_FUNC void func_8020E17C_5C964C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E17C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E184: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E188: jal         0x80013AC4
    // 0x8020E18C: addiu       $a0, $a0, -0x3B04
    ctx->r4 = ADD32(ctx->r4, -0X3B04);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E18C: addiu       $a0, $a0, -0x3B04
    ctx->r4 = ADD32(ctx->r4, -0X3B04);
    after_0:
    // 0x8020E190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E198: jr          $ra
    // 0x8020E19C: nop

    TRACE_RETURN()
    return;
    // 0x8020E19C: nop

;}
RECOMP_FUNC void func_8021EC1C_5DA0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EC1C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8021EC20: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021EC24: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021EC28: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021EC2C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021EC30: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021EC34: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021EC38: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021EC3C: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8021EC40: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021EC44: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021EC48: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021EC4C: sub.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x8021EC50: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021EC54: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x8021EC58: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021EC5C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021EC60: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021EC64: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021EC68: jr          $ra
    // 0x8021EC6C: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x8021EC6C: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_80211D3C_5CD20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211D40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211D44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211D48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211D4C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80211D50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211D58: jal         0x8021A26C
    // 0x80211D5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211D5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80211D60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211D64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80211D68: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80211D6C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80211D70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211D74: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80211D78: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x80211D7C: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x80211D80: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x80211D84: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211D88: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80211D8C: addiu       $a0, $a0, 0x1DAC
    ctx->r4 = ADD32(ctx->r4, 0X1DAC);
    // 0x80211D90: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80211D94: jal         0x8003521C
    // 0x80211D98: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211D98: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x80211D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211DA4: jr          $ra
    // 0x80211DA8: nop

    TRACE_RETURN()
    return;
    // 0x80211DA8: nop

;}
RECOMP_FUNC void func_80223348_5DE818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223348: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8022334C: lh          $t2, 0x0($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X0);
    // 0x80223350: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80223354: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80223358: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8022335C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80223360: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80223364: negu        $t4, $t2
    ctx->r12 = SUB32(0, ctx->r10);
    // 0x80223368: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8022336C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80223370: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80223374: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80223378: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8022337C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80223380: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80223384: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80223388: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x8022338C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80223390: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80223394: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x80223398: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x8022339C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x802233A0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802233A4: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802233A8: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x802233AC: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x802233B0: bgez        $t4, L_802233C0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802233B4: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_802233C0;
    }
    // 0x802233B4: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x802233B8: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x802233BC: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_802233C0:
    // 0x802233C0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x802233C4: slt         $at, $t1, $t6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802233C8: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x802233CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_0;
    // 0x802233CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802233D0: bgez        $t2, L_802233E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802233D4: sra         $t7, $t2, 1
        ctx->r15 = S32(SIGNED(ctx->r10) >> 1);
            goto L_802233E0;
    }
    // 0x802233D4: sra         $t7, $t2, 1
    ctx->r15 = S32(SIGNED(ctx->r10) >> 1);
    // 0x802233D8: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x802233DC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_802233E0:
    // 0x802233E0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x802233E4: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802233E8: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x802233EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_1;
    // 0x802233EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x802233F0: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802233F4: lh          $v1, 0x2($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2);
    // 0x802233F8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802233FC: negu        $t5, $v1
    ctx->r13 = SUB32(0, ctx->r3);
    // 0x80223400: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80223404: nop

    // 0x80223408: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8022340C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80223410: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80223414: bgez        $t5, L_80223424
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80223418: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_80223424;
    }
    // 0x80223418: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8022341C: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x80223420: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_80223424:
    // 0x80223424: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80223428: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8022342C: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x80223430: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_2;
    // 0x80223430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x80223434: bgez        $v1, L_80223444
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80223438: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_80223444;
    }
    // 0x80223438: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8022343C: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80223440: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_80223444:
    // 0x80223444: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80223448: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022344C: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x80223450: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_3;
    // 0x80223450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x80223454: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80223458: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8022345C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80223460: negu        $t6, $v1
    ctx->r14 = SUB32(0, ctx->r3);
    // 0x80223464: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80223468: nop

    // 0x8022346C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80223470: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80223474: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80223478: bgez        $t6, L_80223488
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8022347C: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_80223488;
    }
    // 0x8022347C: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80223480: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x80223484: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80223488:
    // 0x80223488: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8022348C: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80223490: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x80223494: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_4;
    // 0x80223494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x80223498: bgez        $v1, L_802234A8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022349C: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_802234A8;
    }
    // 0x8022349C: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802234A0: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x802234A4: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_802234A8:
    // 0x802234A8: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x802234AC: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802234B0: bnel        $at, $zero, L_802234C4
    if (ctx->r1 != 0) {
        // 0x802234B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802234C4;
    }
    goto skip_5;
    // 0x802234B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x802234B8: jr          $ra
    // 0x802234BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x802234BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802234C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802234C4:
    // 0x802234C4: jr          $ra
    // 0x802234C8: nop

    TRACE_RETURN()
    return;
    // 0x802234C8: nop

;}
RECOMP_FUNC void func_80222800_5DDCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222800: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80222804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80222808: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8022280C: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x80222810: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_80222814:
    // 0x80222814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80222818: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8022281C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_80222820:
    // 0x80222820: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80222824: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80222828: lwc1        $f14, 0x10($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8022282C: lwc1        $f12, 0x4($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80222830: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80222834: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80222838: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8022283C: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80222840: lwc1        $f14, 0xC($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80222844: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80222848: mul.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8022284C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80222850: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80222854: mul.s       $f8, $f14, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80222858: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8022285C: add.s       $f12, $f16, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x80222860: add.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x80222864: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80222868: swc1        $f10, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f10.u32l;
    // 0x8022286C: lwc1        $f10, -0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, -0X4);
    // 0x80222870: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80222874: lwc1        $f12, 0xC($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80222878: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8022287C: mul.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80222880: lwc1        $f10, 0x1C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x80222884: lwc1        $f14, 0x8($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80222888: mul.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x8022288C: lwc1        $f12, 0xC($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80222890: lwc1        $f18, 0x2C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x80222894: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80222898: nop

    // 0x8022289C: mul.s       $f18, $f12, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x802228A0: add.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x802228A4: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x802228A8: add.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x802228AC: bne         $v0, $t1, L_80222820
    if (ctx->r2 != ctx->r9) {
        // 0x802228B0: swc1        $f14, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->f14.u32l;
            goto L_80222820;
    }
    // 0x802228B0: swc1        $f14, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f14.u32l;
    // 0x802228B4: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x802228B8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802228BC: bne         $a3, $t2, L_80222814
    if (ctx->r7 != ctx->r10) {
        // 0x802228C0: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_80222814;
    }
    // 0x802228C0: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x802228C4: jr          $ra
    // 0x802228C8: nop

    TRACE_RETURN()
    return;
    // 0x802228C8: nop

;}
RECOMP_FUNC void func_8021B950_5D6E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B950: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B954: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021B958: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021B95C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B960: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x8021B964: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x8021B968: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x8021B96C: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x8021B970: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x8021B974: addu        $t4, $t3, $a3
    ctx->r12 = ADD32(ctx->r11, ctx->r7);
    // 0x8021B978: sh          $t0, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r8;
    // 0x8021B97C: sh          $t2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r10;
    // 0x8021B980: jr          $ra
    // 0x8021B984: sh          $t4, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x8021B984: sh          $t4, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_80215068_5D0538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021506C: jr          $ra
    // 0x80215070: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215070: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021927C_5D474C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021927C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80219280: lw          $t6, -0x32A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X32A0);
    // 0x80219284: jr          $ra
    // 0x80219288: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80219288: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80214FF8_5D04C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FF8: jr          $ra
    // 0x80214FFC: nop

    TRACE_RETURN()
    return;
    // 0x80214FFC: nop

;}
RECOMP_FUNC void func_802127EC_5CDCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802127EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802127F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802127F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802127F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802127FC: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80212800: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80212804: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80212808: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021280C: jal         0x8003521C
    // 0x80212810: addiu       $a0, $a0, 0x2824
    ctx->r4 = ADD32(ctx->r4, 0X2824);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80212810: addiu       $a0, $a0, 0x2824
    ctx->r4 = ADD32(ctx->r4, 0X2824);
    after_0:
    // 0x80212814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021281C: jr          $ra
    // 0x80212820: nop

    TRACE_RETURN()
    return;
    // 0x80212820: nop

;}
RECOMP_FUNC void func_802198D4_5D4DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802198D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802198D8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x802198DC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802198E0: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x802198E4: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x802198E8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802198EC: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802198F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802198F4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802198F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802198FC: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80219900: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80219904: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80219908: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021990C: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80219910: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x80219914: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80219918: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021991C: sub.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x80219920: sub.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80219924: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80219928: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x8021992C: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80219930: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80219934: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80219938: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021993C: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80219940: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80219944: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80219948: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    // 0x8021994C: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80219950: nop

    // 0x80219954: bc1fl       L_80219968
    if (!c1cs) {
        // 0x80219958: div.s       $f10, $f16, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
            goto L_80219968;
    }
    goto skip_0;
    // 0x80219958: div.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    skip_0:
    // 0x8021995C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80219960: nop

    // 0x80219964: div.s       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
L_80219968:
    // 0x80219968: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021996C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80219970: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x80219974: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219978: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021997C: sub.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80219980: div.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80219984: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80219988: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x8021998C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80219990: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80219994: sub.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80219998: div.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8021999C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802199A0: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
    // 0x802199A4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802199A8: jr          $ra
    // 0x802199AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802199AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8020F6DC_5CABAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F6DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F6E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F6E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F6E8: jal         0x80013AC4
    // 0x8020F6EC: addiu       $a0, $a0, -0x2D6C
    ctx->r4 = ADD32(ctx->r4, -0X2D6C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F6EC: addiu       $a0, $a0, -0x2D6C
    ctx->r4 = ADD32(ctx->r4, -0X2D6C);
    after_0:
    // 0x8020F6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F6F8: jr          $ra
    // 0x8020F6FC: nop

    TRACE_RETURN()
    return;
    // 0x8020F6FC: nop

;}
RECOMP_FUNC void func_802131C0_5CE690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802131C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802131C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802131C8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x802131CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802131D0: addiu       $t7, $t6, 0x60
    ctx->r15 = ADD32(ctx->r14, 0X60);
    // 0x802131D4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x802131D8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x802131DC: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802131E0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802131E4: nop

    // 0x802131E8: bc1fl       L_80213268
    if (!c1cs) {
        // 0x802131EC: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_80213268;
    }
    goto skip_0;
    // 0x802131EC: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_0:
    // 0x802131F0: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x802131F4: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802131F8: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x802131FC: beql        $t0, $zero, L_80213268
    if (ctx->r8 == 0) {
        // 0x80213200: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_80213268;
    }
    goto skip_1;
    // 0x80213200: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_1:
    // 0x80213204: lwc1        $f8, 0xD8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x80213208: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8021320C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80213210: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80213214: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80213218: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8021321C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213220: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x80213224: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80213228: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021322C: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80213230: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x80213234: ldc1        $f8, -0x60C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X60C8);
    // 0x80213238: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021323C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80213240: nop

    // 0x80213244: bc1fl       L_80213268
    if (!c1cs) {
        // 0x80213248: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_80213268;
    }
    goto skip_2;
    // 0x80213248: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_2:
    // 0x8021324C: jal         0x802171A8
    // 0x80213250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x80213250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80213254: jal         0x80034ED4
    // 0x80213258: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80213258: nop

    after_1:
    // 0x8021325C: b           L_80213320
    // 0x80213260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80213320;
    // 0x80213260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213264: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
L_80213268:
    // 0x80213268: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021326C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80213270: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80213274: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x80213278: bne         $v0, $zero, L_8021329C
    if (ctx->r2 != 0) {
        // 0x8021327C: sh          $t2, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r10;
            goto L_8021329C;
    }
    // 0x8021327C: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x80213280: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x80213284: jal         0x802171A8
    // 0x80213288: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_2;
    // 0x80213288: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8021328C: jal         0x80034ED4
    // 0x80213290: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80213290: nop

    after_3:
    // 0x80213294: b           L_80213320
    // 0x80213298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80213320;
    // 0x80213298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021329C:
    // 0x8021329C: andi        $t3, $v0, 0xA
    ctx->r11 = ctx->r2 & 0XA;
    // 0x802132A0: bne         $t3, $at, L_8021331C
    if (ctx->r11 != ctx->r1) {
        // 0x802132A4: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_8021331C;
    }
    // 0x802132A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802132A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802132AC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x802132B0: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x802132B4: jalr        $t9
    // 0x802132B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802132B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802132BC: beq         $v0, $zero, L_8021331C
    if (ctx->r2 == 0) {
        // 0x802132C0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8021331C;
    }
    // 0x802132C0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802132C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802132C8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x802132CC: jalr        $t9
    // 0x802132D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802132D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_5:
    // 0x802132D4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802132D8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802132DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802132E0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802132E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802132E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802132EC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802132F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802132F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802132F8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802132FC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x80213300: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80213304: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80213308: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8021330C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80213310: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80213314: jalr        $t9
    // 0x80213318: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80213318: nop

    after_6:
L_8021331C:
    // 0x8021331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80213320:
    // 0x80213320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213324: jr          $ra
    // 0x80213328: nop

    TRACE_RETURN()
    return;
    // 0x80213328: nop

;}
RECOMP_FUNC void func_8020EEFC_5CA3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EEFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EF00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EF04: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EF08: jal         0x80013AC4
    // 0x8020EF0C: addiu       $a0, $a0, -0x3254
    ctx->r4 = ADD32(ctx->r4, -0X3254);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EF0C: addiu       $a0, $a0, -0x3254
    ctx->r4 = ADD32(ctx->r4, -0X3254);
    after_0:
    // 0x8020EF10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EF14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EF18: jr          $ra
    // 0x8020EF1C: nop

    TRACE_RETURN()
    return;
    // 0x8020EF1C: nop

;}
RECOMP_FUNC void func_8021FF9C_5DB46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FF9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021FFA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021FFA4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8021FFA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8021FFAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021FFB0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8021FFB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021FFB8: lwc1        $f20, 0x0($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8021FFBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021FFC0: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x8021FFC4: nop

    // 0x8021FFC8: bc1fl       L_8021FFF0
    if (!c1cs) {
        // 0x8021FFCC: lwc1        $f14, 0x8($a1)
        ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
            goto L_8021FFF0;
    }
    goto skip_0;
    // 0x8021FFCC: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x8021FFD0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021FFD4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8021FFD8: nop

    // 0x8021FFDC: bc1fl       L_8021FFF0
    if (!c1cs) {
        // 0x8021FFE0: lwc1        $f14, 0x8($a1)
        ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
            goto L_8021FFF0;
    }
    goto skip_1;
    // 0x8021FFE0: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    skip_1:
    // 0x8021FFE4: b           L_8022001C
    // 0x8021FFE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8022001C;
    // 0x8021FFE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FFEC: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
L_8021FFF0:
    // 0x8021FFF0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021FFF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021FFF8: jal         0x8021ADD0
    // 0x8021FFFC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021FFFC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x80220000: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80220004: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80220008: andi        $t6, $v1, 0x3FF
    ctx->r14 = ctx->r3 & 0X3FF;
    // 0x8022000C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80220010: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80220014: lwc1        $f20, 0x0($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80220018: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
L_8022001C:
    // 0x8022001C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80220020: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80220024: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80220028: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022002C: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x80220030: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80220034: jal         0x8021ADD0
    // 0x80220038: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_1;
    // 0x80220038: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_1:
    // 0x8022003C: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x80220040: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x80220044: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80220048: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022004C: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x80220050: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80220054: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80220058: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8022005C: bgez        $v1, L_80220074
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80220060: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80220074;
    }
    // 0x80220060: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80220064: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80220068: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022006C: nop

    // 0x80220070: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80220074:
    // 0x80220074: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80220078: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022007C: andi        $t7, $a0, 0x3FF
    ctx->r15 = ctx->r4 & 0X3FF;
    // 0x80220080: slti        $at, $t7, 0x101
    ctx->r1 = SIGNED(ctx->r15) < 0X101 ? 1 : 0;
    // 0x80220084: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80220088: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8022008C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80220090: beq         $at, $zero, L_802200EC
    if (ctx->r1 == 0) {
        // 0x80220094: swc1        $f18, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
            goto L_802200EC;
    }
    // 0x80220094: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x80220098: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8022009C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802200A0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802200A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802200A8: div.s       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802200AC: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x802200B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802200B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802200B8: bgez        $t7, L_802200CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802200BC: div.s       $f4, $f0, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
            goto L_802200CC;
    }
    // 0x802200BC: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802200C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802200C4: nop

    // 0x802200C8: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_802200CC:
    // 0x802200CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802200D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802200D4: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802200D8: div.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802200DC: sub.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802200E0: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802200E4: b           L_80220134
    // 0x802200E8: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
        goto L_80220134;
    // 0x802200E8: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
L_802200EC:
    // 0x802200EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802200F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802200F4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x802200F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802200FC: div.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80220100: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x80220104: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x80220108: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8022010C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80220110: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80220114: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80220118: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022011C: nop

    // 0x80220120: div.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80220124: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80220128: add.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8022012C: sub.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80220130: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
L_80220134:
    // 0x80220134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80220138: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8022013C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80220140: jr          $ra
    // 0x80220144: nop

    TRACE_RETURN()
    return;
    // 0x80220144: nop

;}
