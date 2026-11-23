#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802107BC_5CBC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802107BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802107C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802107C4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802107C8: jal         0x80013AC4
    // 0x802107CC: addiu       $a0, $a0, -0x1C9C
    ctx->r4 = ADD32(ctx->r4, -0X1C9C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802107CC: addiu       $a0, $a0, -0x1C9C
    ctx->r4 = ADD32(ctx->r4, -0X1C9C);
    after_0:
    // 0x802107D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802107D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802107D8: jr          $ra
    // 0x802107DC: nop

    TRACE_RETURN()
    return;
    // 0x802107DC: nop

;}
RECOMP_FUNC void func_8020FDE4_5CB2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FDE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FDE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FDEC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FDF0: jal         0x80013AC4
    // 0x8020FDF4: addiu       $a0, $a0, -0x26D0
    ctx->r4 = ADD32(ctx->r4, -0X26D0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FDF4: addiu       $a0, $a0, -0x26D0
    ctx->r4 = ADD32(ctx->r4, -0X26D0);
    after_0:
    // 0x8020FDF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FDFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE00: jr          $ra
    // 0x8020FE04: nop

    TRACE_RETURN()
    return;
    // 0x8020FE04: nop

;}
RECOMP_FUNC void func_80210798_5CBC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021079C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802107A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802107A4: jal         0x80013AC4
    // 0x802107A8: addiu       $a0, $a0, -0x1CD0
    ctx->r4 = ADD32(ctx->r4, -0X1CD0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802107A8: addiu       $a0, $a0, -0x1CD0
    ctx->r4 = ADD32(ctx->r4, -0X1CD0);
    after_0:
    // 0x802107AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802107B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802107B4: jr          $ra
    // 0x802107B8: nop

    TRACE_RETURN()
    return;
    // 0x802107B8: nop

;}
RECOMP_FUNC void func_8021135C_5CC82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021135C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211368: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x8021136C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211370: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80211374: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80211378: bne         $v0, $zero, L_80211450
    if (ctx->r2 != 0) {
        // 0x8021137C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80211450;
    }
    // 0x8021137C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80211380: lhu         $t7, 0xD4($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD4);
    // 0x80211384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211388: beql        $t7, $at, L_80211404
    if (ctx->r15 == ctx->r1) {
        // 0x8021138C: addiu       $t1, $zero, 0x7E
        ctx->r9 = ADD32(0, 0X7E);
            goto L_80211404;
    }
    goto skip_0;
    // 0x8021138C: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
    skip_0:
    // 0x80211390: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80211394: sll         $t8, $v0, 15
    ctx->r24 = S32(ctx->r2 << 15);
    // 0x80211398: bgez        $t8, L_802113CC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021139C: sll         $t0, $v0, 14
        ctx->r8 = S32(ctx->r2 << 14);
            goto L_802113CC;
    }
    // 0x8021139C: sll         $t0, $v0, 14
    ctx->r8 = S32(ctx->r2 << 14);
    // 0x802113A0: sll         $t9, $v0, 14
    ctx->r25 = S32(ctx->r2 << 14);
    // 0x802113A4: bgez        $t9, L_802113BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802113A8: nop
    
            goto L_802113BC;
    }
    // 0x802113A8: nop

    // 0x802113AC: jal         0x80038B98
    // 0x802113B0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x802113B0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x802113B4: b           L_80211404
    // 0x802113B8: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
        goto L_80211404;
    // 0x802113B8: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
L_802113BC:
    // 0x802113BC: jal         0x80038B98
    // 0x802113C0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x802113C0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_1:
    // 0x802113C4: b           L_80211404
    // 0x802113C8: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
        goto L_80211404;
    // 0x802113C8: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
L_802113CC:
    // 0x802113CC: bgez        $t0, L_802113F0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802113D0: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_802113F0;
    }
    // 0x802113D0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x802113D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802113D8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x802113DC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x802113E0: jal         0x8000F420
    // 0x802113E4: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_2;
    // 0x802113E4: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_2:
    // 0x802113E8: b           L_80211404
    // 0x802113EC: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
        goto L_80211404;
    // 0x802113EC: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
L_802113F0:
    // 0x802113F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802113F4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x802113F8: jal         0x8000F420
    // 0x802113FC: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_3;
    // 0x802113FC: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_3:
    // 0x80211400: addiu       $t1, $zero, 0x7E
    ctx->r9 = ADD32(0, 0X7E);
L_80211404:
    // 0x80211404: addiu       $t2, $zero, 0x222
    ctx->r10 = ADD32(0, 0X222);
    // 0x80211408: addiu       $t3, $zero, 0xF8
    ctx->r11 = ADD32(0, 0XF8);
    // 0x8021140C: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x80211410: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x80211414: sb          $t3, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r11;
    // 0x80211418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021141C: jal         0x80216DF8
    // 0x80211420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_4;
    // 0x80211420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80211424: jal         0x8021A310
    // 0x80211428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_5;
    // 0x80211428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8021142C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80211430: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80211434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021143C: jal         0x80224ABC
    // 0x80211440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_6;
    // 0x80211440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x80211444: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211448: jal         0x8003521C
    // 0x8021144C: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x8021144C: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    after_7:
L_80211450:
    // 0x80211450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80211458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021145C: jr          $ra
    // 0x80211460: nop

    TRACE_RETURN()
    return;
    // 0x80211460: nop

;}
RECOMP_FUNC void func_802213F4_5DC8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802213F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802213F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802213FC: jal         0x80221B7C
    // 0x80221400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x80221400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80221404: bne         $v0, $zero, L_80221414
    if (ctx->r2 != 0) {
        // 0x80221408: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_80221414;
    }
    // 0x80221408: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8022140C: b           L_80221450
    // 0x80221410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80221450;
    // 0x80221410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80221414:
    // 0x80221414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80221418: jal         0x80220FF0
    // 0x8022141C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_1;
    // 0x8022141C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x80221420: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80221424: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80221428: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x8022142C: addiu       $t6, $t6, 0x1460
    ctx->r14 = ADD32(ctx->r14, 0X1460);
    // 0x80221430: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221434: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80221438: sw          $t6, 0xBC($a1)
    MEM_W(0XBC, ctx->r5) = ctx->r14;
    // 0x8022143C: swc1        $f0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f0.u32l;
    // 0x80221440: swc1        $f0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f0.u32l;
    // 0x80221444: jal         0x8003521C
    // 0x80221448: swc1        $f0, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80221448: swc1        $f0, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f0.u32l;
    after_2:
    // 0x8022144C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80221450:
    // 0x80221450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221458: jr          $ra
    // 0x8022145C: nop

    TRACE_RETURN()
    return;
    // 0x8022145C: nop

;}
RECOMP_FUNC void func_80218804_5D3CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218804: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80218808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021880C: lbu         $v0, 0x8C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8C);
    // 0x80218810: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80218814: beql        $v0, $zero, L_80218930
    if (ctx->r2 == 0) {
        // 0x80218818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80218930;
    }
    goto skip_0;
    // 0x80218818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021881C: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80218820: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x80218824: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x80218828: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021882C: beq         $v0, $zero, L_8021891C
    if (ctx->r2 == 0) {
        // 0x80218830: sb          $t7, 0x8C($a0)
        MEM_B(0X8C, ctx->r4) = ctx->r15;
            goto L_8021891C;
    }
    // 0x80218830: sb          $t7, 0x8C($a0)
    MEM_B(0X8C, ctx->r4) = ctx->r15;
    // 0x80218834: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80218838: sll         $a0, $v0, 10
    ctx->r4 = S32(ctx->r2 << 10);
    // 0x8021883C: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x80218840: beql        $t8, $zero, L_802188FC
    if (ctx->r24 == 0) {
        // 0x80218844: andi        $t5, $v1, 0x8
        ctx->r13 = ctx->r3 & 0X8;
            goto L_802188FC;
    }
    goto skip_1;
    // 0x80218844: andi        $t5, $v1, 0x8
    ctx->r13 = ctx->r3 & 0X8;
    skip_1:
    // 0x80218848: bgez        $a0, L_80218858
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8021884C: sra         $t9, $a0, 4
        ctx->r25 = S32(SIGNED(ctx->r4) >> 4);
            goto L_80218858;
    }
    // 0x8021884C: sra         $t9, $a0, 4
    ctx->r25 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80218850: addiu       $at, $a0, 0xF
    ctx->r1 = ADD32(ctx->r4, 0XF);
    // 0x80218854: sra         $t9, $at, 4
    ctx->r25 = S32(SIGNED(ctx->r1) >> 4);
L_80218858:
    // 0x80218858: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    // 0x8021885C: sh          $a0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r4;
    // 0x80218860: jal         0x80003E10
    // 0x80218864: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x80218864: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x80218868: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021886C: ldc1        $f6, -0x5AB8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5AB8);
    // 0x80218870: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80218874: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80218878: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8021887C: ldc1        $f10, -0x5AB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5AB0);
    // 0x80218880: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80218884: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x80218888: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8021888C: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
    // 0x80218890: jal         0x80003EA0
    // 0x80218894: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x80218894: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_1:
    // 0x80218898: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021889C: ldc1        $f6, -0x5AA8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5AA8);
    // 0x802188A0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802188A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802188A8: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802188AC: ldc1        $f8, -0x5AA0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5AA0);
    // 0x802188B0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x802188B4: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x802188B8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802188BC: swc1        $f18, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f18.u32l;
    // 0x802188C0: jal         0x80003E10
    // 0x802188C4: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x802188C4: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_2:
    // 0x802188C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802188CC: ldc1        $f6, -0x5A98($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5A98);
    // 0x802188D0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802188D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802188D8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802188DC: ldc1        $f10, -0x5A90($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5A90);
    // 0x802188E0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x802188E4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802188E8: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x802188EC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802188F0: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x802188F4: lw          $v1, 0x64($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X64);
    // 0x802188F8: andi        $t5, $v1, 0x8
    ctx->r13 = ctx->r3 & 0X8;
L_802188FC:
    // 0x802188FC: beql        $t5, $zero, L_80218930
    if (ctx->r13 == 0) {
        // 0x80218900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80218930;
    }
    goto skip_2;
    // 0x80218900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80218904: lbu         $t6, 0x8C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8C);
    // 0x80218908: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8021890C: beql        $t7, $zero, L_80218930
    if (ctx->r15 == 0) {
        // 0x80218910: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80218930;
    }
    goto skip_3;
    // 0x80218910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80218914: b           L_80218930
    // 0x80218918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218930;
    // 0x80218918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021891C:
    // 0x8021891C: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x80218920: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80218924: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80218928: sw          $t9, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r25;
    // 0x8021892C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218930:
    // 0x80218930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80218934: jr          $ra
    // 0x80218938: nop

    TRACE_RETURN()
    return;
    // 0x80218938: nop

;}
RECOMP_FUNC void func_80214768_5CFC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021476C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214770: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214774: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80214778: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8021477C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x80214780: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80214784: beq         $t7, $zero, L_80214794
    if (ctx->r15 == 0) {
        // 0x80214788: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_80214794;
    }
    // 0x80214788: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021478C: jalr        $t9
    // 0x80214790: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80214790: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    after_0:
L_80214794:
    // 0x80214794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021479C: jr          $ra
    // 0x802147A0: nop

    TRACE_RETURN()
    return;
    // 0x802147A0: nop

;}
RECOMP_FUNC void func_8020F844_5CAD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F84C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F850: jal         0x80013AC4
    // 0x8020F854: addiu       $a0, $a0, -0x2C10
    ctx->r4 = ADD32(ctx->r4, -0X2C10);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F854: addiu       $a0, $a0, -0x2C10
    ctx->r4 = ADD32(ctx->r4, -0X2C10);
    after_0:
    // 0x8020F858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F85C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F860: jr          $ra
    // 0x8020F864: nop

    TRACE_RETURN()
    return;
    // 0x8020F864: nop

;}
RECOMP_FUNC void func_802110BC_5CC58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802110BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802110C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802110C4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802110C8: jal         0x80013AC4
    // 0x802110CC: addiu       $a0, $a0, -0x16BC
    ctx->r4 = ADD32(ctx->r4, -0X16BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802110CC: addiu       $a0, $a0, -0x16BC
    ctx->r4 = ADD32(ctx->r4, -0X16BC);
    after_0:
    // 0x802110D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802110D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802110D8: jr          $ra
    // 0x802110DC: nop

    TRACE_RETURN()
    return;
    // 0x802110DC: nop

;}
RECOMP_FUNC void func_8020EF44_5CA414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EF44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EF48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EF4C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EF50: jal         0x80013AC4
    // 0x8020EF54: addiu       $a0, $a0, -0x3244
    ctx->r4 = ADD32(ctx->r4, -0X3244);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EF54: addiu       $a0, $a0, -0x3244
    ctx->r4 = ADD32(ctx->r4, -0X3244);
    after_0:
    // 0x8020EF58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EF5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EF60: jr          $ra
    // 0x8020EF64: nop

    TRACE_RETURN()
    return;
    // 0x8020EF64: nop

;}
RECOMP_FUNC void func_8021045C_5CB92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021045C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210464: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210468: jal         0x80013AC4
    // 0x8021046C: addiu       $a0, $a0, -0x1FBC
    ctx->r4 = ADD32(ctx->r4, -0X1FBC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021046C: addiu       $a0, $a0, -0x1FBC
    ctx->r4 = ADD32(ctx->r4, -0X1FBC);
    after_0:
    // 0x80210470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210478: jr          $ra
    // 0x8021047C: nop

    TRACE_RETURN()
    return;
    // 0x8021047C: nop

;}
RECOMP_FUNC void func_8020FB38_5CB008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FB38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FB40: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FB44: jal         0x80013AC4
    // 0x8020FB48: addiu       $a0, $a0, -0x29A8
    ctx->r4 = ADD32(ctx->r4, -0X29A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FB48: addiu       $a0, $a0, -0x29A8
    ctx->r4 = ADD32(ctx->r4, -0X29A8);
    after_0:
    // 0x8020FB4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FB54: jr          $ra
    // 0x8020FB58: nop

    TRACE_RETURN()
    return;
    // 0x8020FB58: nop

;}
RECOMP_FUNC void func_802154F0_5D09C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802154F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802154F4: jr          $ra
    // 0x802154F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802154F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80219AA4_5D4F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219AA4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80219AA8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80219AAC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80219AB0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80219AB4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80219AB8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80219ABC: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x80219AC0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80219AC4: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x80219AC8: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80219ACC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80219AD0: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80219AD4: jal         0x80003E10
    // 0x80219AD8: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x80219AD8: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    after_0:
    // 0x80219ADC: lbu         $t1, 0x7B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7B);
    // 0x80219AE0: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80219AE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80219AE8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80219AEC: bgez        $t1, L_80219B00
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80219AF0: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80219B00;
    }
    // 0x80219AF0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80219AF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80219AF8: nop

    // 0x80219AFC: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_80219B00:
    // 0x80219B00: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80219B04: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80219B08: lbu         $t2, 0x77($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X77);
    // 0x80219B0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80219B10: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80219B14: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219B18: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80219B1C: bgez        $t2, L_80219B30
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80219B20: swc1        $f16, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
            goto L_80219B30;
    }
    // 0x80219B20: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x80219B24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80219B28: nop

    // 0x80219B2C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80219B30:
    // 0x80219B30: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80219B34: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80219B38: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x80219B3C: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x80219B40: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x80219B44: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x80219B48: jal         0x80003EA0
    // 0x80219B4C: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x80219B4C: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_1:
    // 0x80219B50: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80219B54: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80219B58: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80219B5C: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80219B60: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80219B64: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80219B68: jal         0x80219CA0
    // 0x80219B6C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    func_80219CA0_5D5170(rdram, ctx);
        goto after_2;
    // 0x80219B6C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80219B70: beq         $v0, $zero, L_80219C7C
    if (ctx->r2 == 0) {
        // 0x80219B74: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80219C7C;
    }
    // 0x80219B74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219B78: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80219B7C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80219B80: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80219B84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80219B88: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80219B8C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80219B90: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x80219B94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80219B98: lwc1        $f0, -0x5A80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A80);
    // 0x80219B9C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80219BA0: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x80219BA4: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80219BA8: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x80219BAC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80219BB0: lhu         $t9, 0x18($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X18);
    // 0x80219BB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80219BB8: or          $t6, $a3, $at
    ctx->r14 = ctx->r7 | ctx->r1;
    // 0x80219BBC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80219BC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80219BC4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80219BC8: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80219BCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80219BD0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80219BD4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80219BD8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80219BDC: jal         0x800358E8
    // 0x80219BE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_800358E8_364E8(rdram, ctx);
        goto after_3;
    // 0x80219BE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_3:
    // 0x80219BE4: beq         $v0, $zero, L_80219C7C
    if (ctx->r2 == 0) {
        // 0x80219BE8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80219C7C;
    }
    // 0x80219BE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80219BEC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80219BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80219BF4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80219BF8: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x80219BFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80219C00: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x80219C04: sb          $t2, 0x77($v0)
    MEM_B(0X77, ctx->r2) = ctx->r10;
    // 0x80219C08: sb          $t3, 0x6D($v0)
    MEM_B(0X6D, ctx->r2) = ctx->r11;
    // 0x80219C0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219C10: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80219C14: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80219C18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80219C1C: jalr        $t9
    // 0x80219C20: sw          $t1, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80219C20: sw          $t1, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r9;
    after_4:
    // 0x80219C24: lbu         $t4, 0x83($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X83);
    // 0x80219C28: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80219C2C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x80219C30: bgez        $t4, L_80219C40
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80219C34: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_80219C40;
    }
    // 0x80219C34: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80219C38: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x80219C3C: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_80219C40:
    // 0x80219C40: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x80219C44: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80219C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80219C4C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x80219C50: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80219C54: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x80219C58: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80219C5C: jal         0x80035214
    // 0x80219C60: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    func_80035214_35E14(rdram, ctx);
        goto after_5;
    // 0x80219C60: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x80219C64: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80219C68: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x80219C6C: jal         0x80035244
    // 0x80219C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_6;
    // 0x80219C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80219C74: b           L_80219C80
    // 0x80219C78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80219C80;
    // 0x80219C78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80219C7C:
    // 0x80219C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80219C80:
    // 0x80219C80: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80219C84: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80219C88: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80219C8C: jr          $ra
    // 0x80219C90: nop

    TRACE_RETURN()
    return;
    // 0x80219C90: nop

;}
RECOMP_FUNC void func_80224D50_5E0220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224D50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224D54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224D58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80224D5C: lbu         $v0, 0x76($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X76);
    // 0x80224D60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224D64: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80224D68: beq         $v0, $zero, L_80224D98
    if (ctx->r2 == 0) {
        // 0x80224D6C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80224D98;
    }
    // 0x80224D6C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80224D70: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80224D74: bne         $t7, $zero, L_80224E04
    if (ctx->r15 != 0) {
        // 0x80224D78: sb          $t6, 0x76($a0)
        MEM_B(0X76, ctx->r4) = ctx->r14;
            goto L_80224E04;
    }
    // 0x80224D78: sb          $t6, 0x76($a0)
    MEM_B(0X76, ctx->r4) = ctx->r14;
    // 0x80224D7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80224D80: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x80224D84: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    // 0x80224D88: jalr        $t9
    // 0x80224D8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80224D8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80224D90: b           L_80224E08
    // 0x80224D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80224E08;
    // 0x80224D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80224D98:
    // 0x80224D98: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80224D9C: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x80224DA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80224DA4: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x80224DA8: jalr        $v0
    // 0x80224DAC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80224DAC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80224DB0: slti        $at, $v0, 0x119
    ctx->r1 = SIGNED(ctx->r2) < 0X119 ? 1 : 0;
    // 0x80224DB4: bne         $at, $zero, L_80224E04
    if (ctx->r1 != 0) {
        // 0x80224DB8: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_80224E04;
    }
    // 0x80224DB8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80224DBC: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x80224DC0: beq         $at, $zero, L_80224E04
    if (ctx->r1 == 0) {
        // 0x80224DC4: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_80224E04;
    }
    // 0x80224DC4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80224DC8: lhu         $t8, -0x33D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X33D0);
    // 0x80224DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80224DD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80224DD4: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x80224DD8: beq         $t0, $zero, L_80224E04
    if (ctx->r8 == 0) {
        // 0x80224DDC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_80224E04;
    }
    // 0x80224DDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80224DE0: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x80224DE4: jalr        $t9
    // 0x80224DE8: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80224DE8: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    after_2:
    // 0x80224DEC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80224DF0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80224DF4: jalr        $t9
    // 0x80224DF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80224DF8: nop

    after_3:
    // 0x80224DFC: addiu       $t1, $v0, 0x5
    ctx->r9 = ADD32(ctx->r2, 0X5);
    // 0x80224E00: sb          $t1, 0x76($s0)
    MEM_B(0X76, ctx->r16) = ctx->r9;
L_80224E04:
    // 0x80224E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80224E08:
    // 0x80224E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224E0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224E10: jr          $ra
    // 0x80224E14: nop

    TRACE_RETURN()
    return;
    // 0x80224E14: nop

;}
RECOMP_FUNC void func_80218DCC_5D429C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218DCC: lhu         $t6, 0x5E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X5E);
    // 0x80218DD0: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80218DD4: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x80218DD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80218DDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80218DE0: lw          $t8, 0x6984($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6984);
    // 0x80218DE4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80218DE8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80218DEC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80218DF0: jr          $ra
    // 0x80218DF4: sw          $t2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x80218DF4: sw          $t2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_802103CC_5CB89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802103CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802103D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802103D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802103D8: jal         0x80013AC4
    // 0x802103DC: addiu       $a0, $a0, -0x2050
    ctx->r4 = ADD32(ctx->r4, -0X2050);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802103DC: addiu       $a0, $a0, -0x2050
    ctx->r4 = ADD32(ctx->r4, -0X2050);
    after_0:
    // 0x802103E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802103E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802103E8: jr          $ra
    // 0x802103EC: nop

    TRACE_RETURN()
    return;
    // 0x802103EC: nop

;}
RECOMP_FUNC void func_8021D9A8_5D8E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D9A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021D9AC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021D9B0: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x8021D9B4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8021D9B8: lhu         $v0, 0x16($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X16);
    // 0x8021D9BC: subu        $t0, $v0, $a3
    ctx->r8 = SUB32(ctx->r2, ctx->r7);
    // 0x8021D9C0: bgez        $t0, L_8021D9D0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8021D9C4: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8021D9D0;
    }
    // 0x8021D9C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8021D9C8: b           L_8021D9D0
    // 0x8021D9CC: negu        $a0, $t0
    ctx->r4 = SUB32(0, ctx->r8);
        goto L_8021D9D0;
    // 0x8021D9CC: negu        $a0, $t0
    ctx->r4 = SUB32(0, ctx->r8);
L_8021D9D0:
    // 0x8021D9D0: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021D9D4: bne         $at, $zero, L_8021D9E8
    if (ctx->r1 != 0) {
        // 0x8021D9D8: subu        $t7, $a3, $v0
        ctx->r15 = SUB32(ctx->r7, ctx->r2);
            goto L_8021D9E8;
    }
    // 0x8021D9D8: subu        $t7, $a3, $v0
    ctx->r15 = SUB32(ctx->r7, ctx->r2);
    // 0x8021D9DC: sh          $a1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r5;
    // 0x8021D9E0: jr          $ra
    // 0x8021D9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8021D9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021D9E8:
    // 0x8021D9E8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021D9EC: slti        $at, $t8, 0x200
    ctx->r1 = SIGNED(ctx->r24) < 0X200 ? 1 : 0;
    // 0x8021D9F0: bne         $at, $zero, L_8021DA08
    if (ctx->r1 != 0) {
        // 0x8021D9F4: addu        $t2, $v0, $a2
        ctx->r10 = ADD32(ctx->r2, ctx->r6);
            goto L_8021DA08;
    }
    // 0x8021D9F4: addu        $t2, $v0, $a2
    ctx->r10 = ADD32(ctx->r2, ctx->r6);
    // 0x8021D9F8: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x8021D9FC: andi        $t1, $t9, 0x3FF
    ctx->r9 = ctx->r25 & 0X3FF;
    // 0x8021DA00: b           L_8021DA10
    // 0x8021DA04: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
        goto L_8021DA10;
    // 0x8021DA04: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
L_8021DA08:
    // 0x8021DA08: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x8021DA0C: sh          $t3, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r11;
L_8021DA10:
    // 0x8021DA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021DA14: jr          $ra
    // 0x8021DA18: nop

    TRACE_RETURN()
    return;
    // 0x8021DA18: nop

;}
RECOMP_FUNC void func_8020DE40_5C9310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DE48: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DE4C: jal         0x80013AC4
    // 0x8020DE50: addiu       $a0, $a0, -0x3DC0
    ctx->r4 = ADD32(ctx->r4, -0X3DC0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DE50: addiu       $a0, $a0, -0x3DC0
    ctx->r4 = ADD32(ctx->r4, -0X3DC0);
    after_0:
    // 0x8020DE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DE5C: jr          $ra
    // 0x8020DE60: nop

    TRACE_RETURN()
    return;
    // 0x8020DE60: nop

;}
RECOMP_FUNC void func_8020F1CC_5CA69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F1CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F1D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F1D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F1D8: jal         0x80013AC4
    // 0x8020F1DC: addiu       $a0, $a0, -0x30BC
    ctx->r4 = ADD32(ctx->r4, -0X30BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F1DC: addiu       $a0, $a0, -0x30BC
    ctx->r4 = ADD32(ctx->r4, -0X30BC);
    after_0:
    // 0x8020F1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F1E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F1E8: jr          $ra
    // 0x8020F1EC: nop

    TRACE_RETURN()
    return;
    // 0x8020F1EC: nop

;}
RECOMP_FUNC void func_8020EF8C_5CA45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EF8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EF94: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EF98: jal         0x80013AC4
    // 0x8020EF9C: addiu       $a0, $a0, -0x3234
    ctx->r4 = ADD32(ctx->r4, -0X3234);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EF9C: addiu       $a0, $a0, -0x3234
    ctx->r4 = ADD32(ctx->r4, -0X3234);
    after_0:
    // 0x8020EFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EFA8: jr          $ra
    // 0x8020EFAC: nop

    TRACE_RETURN()
    return;
    // 0x8020EFAC: nop

;}
RECOMP_FUNC void func_8020ECBC_5CA18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ECBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ECC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ECC4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ECC8: jal         0x80013AC4
    // 0x8020ECCC: addiu       $a0, $a0, -0x3430
    ctx->r4 = ADD32(ctx->r4, -0X3430);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ECCC: addiu       $a0, $a0, -0x3430
    ctx->r4 = ADD32(ctx->r4, -0X3430);
    after_0:
    // 0x8020ECD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ECD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ECD8: jr          $ra
    // 0x8020ECDC: nop

    TRACE_RETURN()
    return;
    // 0x8020ECDC: nop

;}
RECOMP_FUNC void func_802268A8_5E1D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268A8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802268AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802268B0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802268B4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802268B8: lhu         $v0, 0xC4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC4);
    // 0x802268BC: lbu         $t6, 0xCF($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCF);
    // 0x802268C0: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x802268C4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802268C8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x802268CC: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x802268D0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802268D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802268D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802268DC: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x802268E0: lw          $t9, -0x7680($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7680);
    // 0x802268E4: lhu         $a0, -0x73F4($a1)
    ctx->r4 = MEM_HU(ctx->r5, -0X73F4);
    // 0x802268E8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802268EC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x802268F0: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
    // 0x802268F4: jal         0x800141C4
    // 0x802268F8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x802268F8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_0:
    // 0x802268FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226900: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226904: bne         $v0, $at, L_80226924
    if (ctx->r2 != ctx->r1) {
        // 0x80226908: lw          $a1, 0x44($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X44);
            goto L_80226924;
    }
    // 0x80226908: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8022690C: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80226910: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80226914: jal         0x80013B14
    // 0x80226918: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x80226918: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_1:
    // 0x8022691C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226920: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
L_80226924:
    // 0x80226924: beq         $a1, $zero, L_8022693C
    if (ctx->r5 == 0) {
        // 0x80226928: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8022693C;
    }
    // 0x80226928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022692C: jal         0x80014840
    // 0x80226930: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x80226930: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_2:
    // 0x80226934: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226938: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8022693C:
    // 0x8022693C: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x80226940: sltiu       $at, $t2, 0x2C
    ctx->r1 = ctx->r10 < 0X2C ? 1 : 0;
    // 0x80226944: beq         $at, $zero, L_802287A4
    if (ctx->r1 == 0) {
        // 0x80226948: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_802287A4;
    }
    // 0x80226948: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8022694C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226950: addu        $at, $at, $t2
    gpr jr_addend_80226958 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80226954: lw          $t2, -0x4D6C($at)
    ctx->r10 = ADD32(ctx->r1, -0X4D6C);
    // 0x80226958: jr          $t2
    // 0x8022695C: nop

    switch (jr_addend_80226958 >> 2) {
        case 0: goto L_802269A4; break;
        case 1: goto L_80226A50; break;
        case 2: goto L_802287A4; break;
        case 3: goto L_80226ACC; break;
        case 4: goto L_80226F20; break;
        case 5: goto L_80226FA8; break;
        case 6: goto L_8022711C; break;
        case 7: goto L_8022755C; break;
        case 8: goto L_80226A00; break;
        case 9: goto L_80227690; break;
        case 10: goto L_80227EA8; break;
        case 11: goto L_802287A4; break;
        case 12: goto L_80227390; break;
        case 13: goto L_80227568; break;
        case 14: goto L_80226D74; break;
        case 15: goto L_80227450; break;
        case 16: goto L_80226E18; break;
        case 17: goto L_80227980; break;
        case 18: goto L_80227578; break;
        case 19: goto L_802275CC; break;
        case 20: goto L_8022841C; break;
        case 21: goto L_802275A4; break;
        case 22: goto L_80227C4C; break;
        case 23: goto L_802275C4; break;
        case 24: goto L_80227F90; break;
        case 25: goto L_80228058; break;
        case 26: goto L_802281EC; break;
        case 27: goto L_802287A4; break;
        case 28: goto L_8022837C; break;
        case 29: goto L_802283C0; break;
        case 30: goto L_802283F4; break;
        case 31: goto L_80226960; break;
        case 32: goto L_80226984; break;
        case 33: goto L_802284BC; break;
        case 34: goto L_802274AC; break;
        case 35: goto L_8022776C; break;
        case 36: goto L_802273EC; break;
        case 37: goto L_8022852C; break;
        case 38: goto L_80228588; break;
        case 39: goto L_802275E4; break;
        case 40: goto L_80226C28; break;
        case 41: goto L_8022860C; break;
        case 42: goto L_802286FC; break;
        case 43: goto L_80228718; break;
        default: switch_error(__func__, 0x80226958, 0x8023B294);
    }
    // 0x8022695C: nop

L_80226960:
    // 0x80226960: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x80226964: lbu         $t5, 0xCF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226968: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8022696C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80226970: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80226974: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x80226978: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
    // 0x8022697C: b           L_802287A4
    // 0x80226980: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
        goto L_802287A4;
    // 0x80226980: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
L_80226984:
    // 0x80226984: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x80226988: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022698C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226990: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x80226994: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80226998: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x8022699C: b           L_802287A4
    // 0x802269A0: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x802269A0: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_802269A4:
    // 0x802269A4: lbu         $v0, 0xCE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCE);
    // 0x802269A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802269AC: beq         $v0, $zero, L_802269C4
    if (ctx->r2 == 0) {
        // 0x802269B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802269C4;
    }
    // 0x802269B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802269B4: beql        $a0, $at, L_802269DC
    if (ctx->r4 == ctx->r1) {
        // 0x802269B8: lhu         $v0, 0xC6($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XC6);
            goto L_802269DC;
    }
    goto skip_0;
    // 0x802269B8: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    skip_0:
    // 0x802269BC: b           L_802287A8
    // 0x802269C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802269C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802269C4:
    // 0x802269C4: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x802269C8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802269CC: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
    // 0x802269D0: b           L_802287A4
    // 0x802269D4: sh          $t2, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x802269D4: sh          $t2, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r10;
    // 0x802269D8: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
L_802269DC:
    // 0x802269DC: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802269E0: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x802269E4: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x802269E8: sh          $t4, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r12;
            goto L_802287A4;
    }
    // 0x802269E8: sh          $t4, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r12;
    // 0x802269EC: lbu         $t5, 0xCF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCF);
    // 0x802269F0: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802269F4: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x802269F8: b           L_802287A4
    // 0x802269FC: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x802269FC: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
L_80226A00:
    // 0x80226A00: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x80226A04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80226A08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80226A0C: ori         $t7, $t8, 0x400
    ctx->r15 = ctx->r24 | 0X400;
    // 0x80226A10: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x80226A14: lh          $t9, 0x4($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X4);
    // 0x80226A18: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80226A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226A20: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80226A24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80226A28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226A2C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80226A30: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80226A34: jal         0x8021664C
    // 0x80226A38: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_3;
    // 0x80226A38: nop

    after_3:
    // 0x80226A3C: lbu         $t1, 0xCF($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226A40: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226A44: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x80226A48: b           L_802287A4
    // 0x80226A4C: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x80226A4C: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
L_80226A50:
    // 0x80226A50: lh          $t9, 0x8($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X8);
    // 0x80226A54: lh          $t3, 0x2($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X2);
    // 0x80226A58: lh          $t4, 0xC8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC8);
    // 0x80226A5C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80226A60: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80226A64: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80226A68: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80226A6C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80226A70: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80226A74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80226A78: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226A7C: lh          $t6, 0x6($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X6);
    // 0x80226A80: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x80226A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226A88: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80226A8C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80226A90: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80226A94: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80226A98: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80226A9C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80226AA0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80226AA4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80226AA8: jal         0x8021BB04
    // 0x80226AAC: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_4;
    // 0x80226AAC: nop

    after_4:
    // 0x80226AB0: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80226AB4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_1;
    // 0x80226AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80226AB8: lbu         $t1, 0xCF($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226ABC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226AC0: addiu       $t2, $t1, 0x5
    ctx->r10 = ADD32(ctx->r9, 0X5);
    // 0x80226AC4: b           L_802287A4
    // 0x80226AC8: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x80226AC8: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
L_80226ACC:
    // 0x80226ACC: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x80226AD0: lh          $t3, 0x2($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X2);
    // 0x80226AD4: lh          $t4, 0xC8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC8);
    // 0x80226AD8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80226ADC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80226AE0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80226AE4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80226AE8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80226AEC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80226AF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80226AF4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226AF8: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
    // 0x80226AFC: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x80226B00: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x80226B04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80226B08: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x80226B0C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80226B10: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80226B14: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80226B18: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80226B1C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80226B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226B24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226B28: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80226B2C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80226B30: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80226B34: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80226B38: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80226B3C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80226B40: nop

    // 0x80226B44: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80226B48: beql        $a2, $zero, L_80226B98
    if (ctx->r6 == 0) {
        // 0x80226B4C: mfc1        $a2, $f18
        ctx->r6 = (int32_t)ctx->f18.u32l;
            goto L_80226B98;
    }
    goto skip_2;
    // 0x80226B4C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x80226B50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80226B54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80226B58: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80226B5C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80226B60: nop

    // 0x80226B64: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80226B68: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80226B6C: nop

    // 0x80226B70: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80226B74: bne         $a2, $zero, L_80226B8C
    if (ctx->r6 != 0) {
        // 0x80226B78: nop
    
            goto L_80226B8C;
    }
    // 0x80226B78: nop

    // 0x80226B7C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80226B80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226B84: b           L_80226BA4
    // 0x80226B88: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80226BA4;
    // 0x80226B88: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80226B8C:
    // 0x80226B8C: b           L_80226BA4
    // 0x80226B90: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80226BA4;
    // 0x80226B90: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80226B94: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
L_80226B98:
    // 0x80226B98: nop

    // 0x80226B9C: bltz        $a2, L_80226B8C
    if (SIGNED(ctx->r6) < 0) {
        // 0x80226BA0: nop
    
            goto L_80226B8C;
    }
    // 0x80226BA0: nop

L_80226BA4:
    // 0x80226BA4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80226BA8: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80226BAC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80226BB0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80226BB4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80226BB8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80226BBC: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80226BC0: jal         0x8021F26C
    // 0x80226BC4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_8021F26C_5DA73C(rdram, ctx);
        goto after_5;
    // 0x80226BC4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x80226BC8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226BCC: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80226BD0: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80226BD4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80226BD8: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80226BDC: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    // 0x80226BE0: sub.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80226BE4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80226BE8: sub.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80226BEC: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80226BF0: nop

    // 0x80226BF4: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80226BF8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80226BFC: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80226C00: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80226C04: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80226C08: nop

    // 0x80226C0C: bc1f        L_802287A4
    if (!c1cs) {
        // 0x80226C10: nop
    
            goto L_802287A4;
    }
    // 0x80226C10: nop

    // 0x80226C14: lbu         $t5, 0xCF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226C18: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226C1C: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x80226C20: b           L_802287A4
    // 0x80226C24: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x80226C24: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
L_80226C28:
    // 0x80226C28: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x80226C2C: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
    // 0x80226C30: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80226C34: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80226C38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80226C3C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80226C40: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x80226C44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80226C48: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x80226C4C: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x80226C50: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80226C54: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80226C58: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80226C5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80226C60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80226C64: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80226C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226C6C: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226C70: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226C74: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80226C78: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80226C7C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80226C80: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80226C84: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80226C88: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80226C8C: nop

    // 0x80226C90: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80226C94: beql        $a2, $zero, L_80226CE4
    if (ctx->r6 == 0) {
        // 0x80226C98: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_80226CE4;
    }
    goto skip_3;
    // 0x80226C98: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_3:
    // 0x80226C9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80226CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80226CA4: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80226CA8: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80226CAC: nop

    // 0x80226CB0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80226CB4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80226CB8: nop

    // 0x80226CBC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80226CC0: bne         $a2, $zero, L_80226CD8
    if (ctx->r6 != 0) {
        // 0x80226CC4: nop
    
            goto L_80226CD8;
    }
    // 0x80226CC4: nop

    // 0x80226CC8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80226CCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226CD0: b           L_80226CF0
    // 0x80226CD4: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80226CF0;
    // 0x80226CD4: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80226CD8:
    // 0x80226CD8: b           L_80226CF0
    // 0x80226CDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80226CF0;
    // 0x80226CDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80226CE0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_80226CE4:
    // 0x80226CE4: nop

    // 0x80226CE8: bltz        $a2, L_80226CD8
    if (SIGNED(ctx->r6) < 0) {
        // 0x80226CEC: nop
    
            goto L_80226CD8;
    }
    // 0x80226CEC: nop

L_80226CF0:
    // 0x80226CF0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80226CF4: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80226CF8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80226CFC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80226D00: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80226D04: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80226D08: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80226D0C: jal         0x8021F26C
    // 0x80226D10: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_8021F26C_5DA73C(rdram, ctx);
        goto after_6;
    // 0x80226D10: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x80226D14: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226D18: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80226D1C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80226D20: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80226D24: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80226D28: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    // 0x80226D2C: sub.s       $f14, $f6, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x80226D30: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80226D34: sub.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80226D38: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80226D3C: nop

    // 0x80226D40: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80226D44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226D48: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80226D4C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80226D50: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80226D54: nop

    // 0x80226D58: bc1f        L_802287A4
    if (!c1cs) {
        // 0x80226D5C: nop
    
            goto L_802287A4;
    }
    // 0x80226D5C: nop

    // 0x80226D60: lbu         $t5, 0xCF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226D64: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226D68: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x80226D6C: b           L_802287A4
    // 0x80226D70: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x80226D70: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
L_80226D74:
    // 0x80226D74: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80226D78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80226D7C: beql        $a0, $zero, L_80226D98
    if (ctx->r4 == 0) {
        // 0x80226D80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80226D98;
    }
    goto skip_4;
    // 0x80226D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80226D84: beq         $a0, $at, L_80226DE0
    if (ctx->r4 == ctx->r1) {
        // 0x80226D88: nop
    
            goto L_80226DE0;
    }
    // 0x80226D88: nop

    // 0x80226D8C: b           L_802287A8
    // 0x80226D90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80226D90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80226D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80226D98:
    // 0x80226D98: jal         0x802196E4
    // 0x80226D9C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_7;
    // 0x80226D9C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_7:
    // 0x80226DA0: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x80226DA4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80226DA8: lhu         $a1, 0x0($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X0);
    // 0x80226DAC: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x80226DB0: lbu         $a3, 0x5($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X5);
    // 0x80226DB4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80226DB8: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80226DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226DC0: jal         0x80219330
    // 0x80226DC4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80219330_5D4800(rdram, ctx);
        goto after_8;
    // 0x80226DC4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_8:
    // 0x80226DC8: lbu         $t1, 0xCE($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCE);
    // 0x80226DCC: lh          $t9, 0x8($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X8);
    // 0x80226DD0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80226DD4: sb          $t2, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r10;
    // 0x80226DD8: b           L_802287A4
    // 0x80226DDC: sh          $t9, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x80226DDC: sh          $t9, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r25;
L_80226DE0:
    // 0x80226DE0: jal         0x80219448
    // 0x80226DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80219448_5D4918(rdram, ctx);
        goto after_9;
    // 0x80226DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80226DE8: jal         0x8021B480
    // 0x80226DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B480_5D6950(rdram, ctx);
        goto after_10;
    // 0x80226DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80226DF0: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x80226DF4: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226DF8: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80226DFC: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80226E00: sh          $t3, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r11;
            goto L_802287A4;
    }
    // 0x80226E00: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x80226E04: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226E08: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226E0C: addiu       $t5, $t4, 0x6
    ctx->r13 = ADD32(ctx->r12, 0X6);
    // 0x80226E10: b           L_802287A4
    // 0x80226E14: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x80226E14: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_80226E18:
    // 0x80226E18: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x80226E1C: lbu         $a0, 0xAA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAA);
    // 0x80226E20: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80226E24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80226E28: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x80226E2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226E30: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x80226E34: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x80226E38: sh          $a0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r4;
    // 0x80226E3C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80226E40: nop

    // 0x80226E44: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80226E48: jal         0x80003E10
    // 0x80226E4C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_11;
    // 0x80226E4C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80226E50: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80226E54: jal         0x80003EA0
    // 0x80226E58: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_12;
    // 0x80226E58: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_12:
    // 0x80226E5C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80226E60: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80226E64: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80226E68: lh          $t1, 0xC8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XC8);
    // 0x80226E6C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80226E70: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x80226E74: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80226E78: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80226E7C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226E80: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80226E84: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80226E88: jal         0x80003EA0
    // 0x80226E8C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_13;
    // 0x80226E8C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x80226E90: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80226E94: jal         0x80003E10
    // 0x80226E98: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003E10_4A10(rdram, ctx);
        goto after_14;
    // 0x80226E98: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_14:
    // 0x80226E9C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80226EA0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80226EA4: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80226EA8: lh          $t2, 0xCC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCC);
    // 0x80226EAC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80226EB0: lh          $t3, 0x8($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X8);
    // 0x80226EB4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80226EB8: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80226EBC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80226EC0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80226EC4: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80226EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226ECC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226ED0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80226ED4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80226ED8: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80226EDC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80226EE0: nop

    // 0x80226EE4: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80226EE8: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80226EEC: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80226EF0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80226EF4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80226EF8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80226EFC: jal         0x8021BB04
    // 0x80226F00: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_15;
    // 0x80226F00: nop

    after_15:
    // 0x80226F04: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80226F08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_5;
    // 0x80226F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x80226F0C: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226F10: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226F14: addiu       $t5, $t4, 0x6
    ctx->r13 = ADD32(ctx->r12, 0X6);
    // 0x80226F18: b           L_802287A4
    // 0x80226F1C: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x80226F1C: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_80226F20:
    // 0x80226F20: jal         0x802196E4
    // 0x80226F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_16;
    // 0x80226F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80226F28: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    // 0x80226F2C: lh          $t8, 0xC8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC8);
    // 0x80226F30: lh          $t9, 0x4($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X4);
    // 0x80226F34: lh          $t1, 0xCA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCA);
    // 0x80226F38: lh          $t3, 0x6($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X6);
    // 0x80226F3C: lh          $t4, 0xCC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XCC);
    // 0x80226F40: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80226F44: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80226F48: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80226F4C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80226F50: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80226F54: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80226F58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80226F5C: lh          $t6, 0x8($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X8);
    // 0x80226F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226F64: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80226F68: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80226F6C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80226F70: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80226F74: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80226F78: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80226F7C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80226F80: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80226F84: jal         0x802196FC
    // 0x80226F88: nop

    func_802196FC_5D4BCC(rdram, ctx);
        goto after_17;
    // 0x80226F88: nop

    after_17:
    // 0x80226F8C: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80226F90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_6;
    // 0x80226F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x80226F94: lbu         $t7, 0xCF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCF);
    // 0x80226F98: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80226F9C: addiu       $t9, $t7, 0x5
    ctx->r25 = ADD32(ctx->r15, 0X5);
    // 0x80226FA0: b           L_802287A4
    // 0x80226FA4: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x80226FA4: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
L_80226FA8:
    // 0x80226FA8: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80226FAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80226FB0: beql        $a0, $zero, L_80226FCC
    if (ctx->r4 == 0) {
        // 0x80226FB4: lh          $t1, 0x4($s1)
        ctx->r9 = MEM_H(ctx->r17, 0X4);
            goto L_80226FCC;
    }
    goto skip_7;
    // 0x80226FB4: lh          $t1, 0x4($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X4);
    skip_7:
    // 0x80226FB8: beql        $a0, $at, L_802270F4
    if (ctx->r4 == ctx->r1) {
        // 0x80226FBC: lw          $t1, 0x68($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X68);
            goto L_802270F4;
    }
    goto skip_8;
    // 0x80226FBC: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    skip_8:
    // 0x80226FC0: b           L_802287A8
    // 0x80226FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80226FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80226FC8: lh          $t1, 0x4($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X4);
L_80226FCC:
    // 0x80226FCC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80226FD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80226FD4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80226FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226FDC: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80226FE0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80226FE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80226FE8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80226FEC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80226FF0: jal         0x8021664C
    // 0x80226FF4: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_18;
    // 0x80226FF4: nop

    after_18:
    // 0x80226FF8: lh          $t2, 0x6($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X6);
    // 0x80226FFC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227000: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227004: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80227008: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8022700C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80227010: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227014: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80227018: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x8022701C: lh          $t3, 0x8($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X8);
    // 0x80227020: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80227024: nop

    // 0x80227028: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022702C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80227030: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x80227034: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    // 0x80227038: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8022703C: nop

    // 0x80227040: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227044: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80227048: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    // 0x8022704C: lh          $t5, 0xC($s1)
    ctx->r13 = MEM_H(ctx->r17, 0XC);
    // 0x80227050: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80227054: nop

    // 0x80227058: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8022705C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80227060: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80227064: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80227068: nop

    // 0x8022706C: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80227070: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80227074: nop

    // 0x80227078: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8022707C: beql        $t8, $zero, L_802270CC
    if (ctx->r24 == 0) {
        // 0x80227080: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_802270CC;
    }
    goto skip_9;
    // 0x80227080: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_9:
    // 0x80227084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80227088: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8022708C: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80227090: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80227094: nop

    // 0x80227098: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8022709C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802270A0: nop

    // 0x802270A4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802270A8: bne         $t8, $zero, L_802270C0
    if (ctx->r24 != 0) {
        // 0x802270AC: nop
    
            goto L_802270C0;
    }
    // 0x802270AC: nop

    // 0x802270B0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x802270B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802270B8: b           L_802270D8
    // 0x802270BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802270D8;
    // 0x802270BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802270C0:
    // 0x802270C0: b           L_802270D8
    // 0x802270C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802270D8;
    // 0x802270C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802270C8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_802270CC:
    // 0x802270CC: nop

    // 0x802270D0: bltz        $t8, L_802270C0
    if (SIGNED(ctx->r24) < 0) {
        // 0x802270D4: nop
    
            goto L_802270C0;
    }
    // 0x802270D4: nop

L_802270D8:
    // 0x802270D8: lbu         $t7, 0xCE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCE);
    // 0x802270DC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802270E0: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
    // 0x802270E4: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x802270E8: b           L_802287A4
    // 0x802270EC: sb          $t9, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x802270EC: sb          $t9, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r25;
    // 0x802270F0: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
L_802270F4:
    // 0x802270F4: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x802270F8: bnel        $t2, $zero, L_802287A8
    if (ctx->r10 != 0) {
        // 0x802270FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_10;
    // 0x802270FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_10:
    // 0x80227100: jal         0x8021B04C
    // 0x80227104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B04C_5D651C(rdram, ctx);
        goto after_19;
    // 0x80227104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80227108: lbu         $t3, 0xCF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022710C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227110: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x80227114: b           L_802287A4
    // 0x80227118: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x80227118: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
L_8022711C:
    // 0x8022711C: lbu         $t5, 0xCE($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227120: sltiu       $at, $t5, 0x8
    ctx->r1 = ctx->r13 < 0X8 ? 1 : 0;
    // 0x80227124: beq         $at, $zero, L_802287A4
    if (ctx->r1 == 0) {
        // 0x80227128: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_802287A4;
    }
    // 0x80227128: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8022712C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227130: addu        $at, $at, $t5
    gpr jr_addend_80227138 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80227134: lw          $t5, -0x4CBC($at)
    ctx->r13 = ADD32(ctx->r1, -0X4CBC);
    // 0x80227138: jr          $t5
    // 0x8022713C: nop

    switch (jr_addend_80227138 >> 2) {
        case 0: goto L_80227140; break;
        case 1: goto L_80227184; break;
        case 2: goto L_802271E0; break;
        case 3: goto L_80227230; break;
        case 4: goto L_8022728C; break;
        case 5: goto L_802272C4; break;
        case 6: goto L_8022731C; break;
        case 7: goto L_80227368; break;
        default: switch_error(__func__, 0x80227138, 0x8023B344);
    }
    // 0x8022713C: nop

L_80227140:
    // 0x80227140: jal         0x802196E4
    // 0x80227144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_20;
    // 0x80227144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80227148: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x8022714C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227150: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227154: ori         $t8, $t6, 0x400
    ctx->r24 = ctx->r14 | 0X400;
    // 0x80227158: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x8022715C: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x80227160: jal         0x8021664C
    // 0x80227164: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_21;
    // 0x80227164: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x80227168: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x8022716C: lbu         $t1, 0xCE($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227170: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80227174: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80227178: sh          $t9, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r25;
    // 0x8022717C: b           L_802287A4
    // 0x80227180: sb          $t2, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x80227180: sb          $t2, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r10;
L_80227184:
    // 0x80227184: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x80227188: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022718C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80227190: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80227194: sh          $t3, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r11;
            goto L_802287A4;
    }
    // 0x80227194: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x80227198: lh          $t4, 0x6($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X6);
    // 0x8022719C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802271A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802271A4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802271A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802271AC: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x802271B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802271B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802271B8: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802271BC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802271C0: jal         0x8021664C
    // 0x802271C4: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_22;
    // 0x802271C4: nop

    after_22:
    // 0x802271C8: lbu         $t6, 0xCE($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCE);
    // 0x802271CC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x802271D0: sh          $t5, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r13;
    // 0x802271D4: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x802271D8: b           L_802287A4
    // 0x802271DC: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
        goto L_802287A4;
    // 0x802271DC: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
L_802271E0:
    // 0x802271E0: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x802271E4: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x802271E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802271EC: addiu       $t9, $t7, -0x50
    ctx->r25 = ADD32(ctx->r15, -0X50);
    // 0x802271F0: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x802271F4: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x802271F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802271FC: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227200: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80227204: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80227208: sh          $t1, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r9;
            goto L_802287A4;
    }
    // 0x80227208: sh          $t1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r9;
    // 0x8022720C: lbu         $t3, 0xCE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227210: sh          $t2, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r10;
    // 0x80227214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227218: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8022721C: sb          $t4, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r12;
    // 0x80227220: jal         0x8021664C
    // 0x80227224: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_23;
    // 0x80227224: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    after_23:
    // 0x80227228: b           L_802287A8
    // 0x8022722C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x8022722C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80227230:
    // 0x80227230: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x80227234: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227238: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x8022723C: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80227240: sh          $t5, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r13;
            goto L_802287A4;
    }
    // 0x80227240: sh          $t5, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r13;
    // 0x80227244: lh          $t6, 0x6($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X6);
    // 0x80227248: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8022724C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227250: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80227254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227258: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x8022725C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227260: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80227264: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80227268: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8022726C: jal         0x8021664C
    // 0x80227270: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_24;
    // 0x80227270: nop

    after_24:
    // 0x80227274: lbu         $t7, 0xCE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227278: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8022727C: sh          $t8, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r24;
    // 0x80227280: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80227284: b           L_802287A4
    // 0x80227288: sb          $t9, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x80227288: sb          $t9, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r25;
L_8022728C:
    // 0x8022728C: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
    // 0x80227290: addiu       $t2, $t1, -0x28
    ctx->r10 = ADD32(ctx->r9, -0X28);
    // 0x80227294: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x80227298: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x8022729C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802272A0: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x802272A4: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x802272A8: sh          $t3, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r11;
            goto L_802287A4;
    }
    // 0x802272A8: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x802272AC: lbu         $t4, 0xCE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCE);
    // 0x802272B0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802272B4: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
    // 0x802272B8: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    // 0x802272BC: b           L_802287A4
    // 0x802272C0: sh          $t6, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x802272C0: sh          $t6, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r14;
L_802272C4:
    // 0x802272C4: lhu         $t8, 0xC6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC6);
    // 0x802272C8: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x802272CC: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x802272D0: beq         $v0, $zero, L_80227304
    if (ctx->r2 == 0) {
        // 0x802272D4: sh          $t7, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r15;
            goto L_80227304;
    }
    // 0x802272D4: sh          $t7, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r15;
    // 0x802272D8: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x802272DC: beql        $t9, $zero, L_802272F8
    if (ctx->r25 == 0) {
        // 0x802272E0: lhu         $t3, 0x16($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X16);
            goto L_802272F8;
    }
    goto skip_11;
    // 0x802272E0: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
    skip_11:
    // 0x802272E4: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
    // 0x802272E8: addiu       $t2, $t1, 0x28
    ctx->r10 = ADD32(ctx->r9, 0X28);
    // 0x802272EC: b           L_802287A4
    // 0x802272F0: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
        goto L_802287A4;
    // 0x802272F0: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x802272F4: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
L_802272F8:
    // 0x802272F8: addiu       $t4, $t3, -0x28
    ctx->r12 = ADD32(ctx->r11, -0X28);
    // 0x802272FC: b           L_802287A4
    // 0x80227300: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
        goto L_802287A4;
    // 0x80227300: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
L_80227304:
    // 0x80227304: lbu         $t5, 0xCE($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227308: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8022730C: sh          $t8, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r24;
    // 0x80227310: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80227314: b           L_802287A4
    // 0x80227318: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x80227318: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
L_8022731C:
    // 0x8022731C: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80227320: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227324: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80227328: addiu       $t9, $t7, 0x28
    ctx->r25 = ADD32(ctx->r15, 0X28);
    // 0x8022732C: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x80227330: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x80227334: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227338: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x8022733C: beq         $a0, $zero, L_80227368
    if (ctx->r4 == 0) {
        // 0x80227340: sh          $t1, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r9;
            goto L_80227368;
    }
    // 0x80227340: sh          $t1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r9;
    // 0x80227344: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x80227348: lbu         $t4, 0xCE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCE);
    // 0x8022734C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227350: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80227354: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80227358: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x8022735C: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
    // 0x80227360: jal         0x8021664C
    // 0x80227364: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_25;
    // 0x80227364: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    after_25:
L_80227368:
    // 0x80227368: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x8022736C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227370: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80227374: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80227378: sh          $t6, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r14;
            goto L_802287A4;
    }
    // 0x80227378: sh          $t6, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r14;
    // 0x8022737C: lbu         $t8, 0xCF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227380: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227384: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x80227388: b           L_802287A4
    // 0x8022738C: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
        goto L_802287A4;
    // 0x8022738C: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
L_80227390:
    // 0x80227390: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    // 0x80227394: lh          $t1, 0xC8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XC8);
    // 0x80227398: lh          $t3, 0x4($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X4);
    // 0x8022739C: lh          $t4, 0xCA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XCA);
    // 0x802273A0: lh          $t6, 0x6($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X6);
    // 0x802273A4: lh          $t8, 0xCC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCC);
    // 0x802273A8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x802273AC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802273B0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x802273B4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x802273B8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802273BC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x802273C0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802273C4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802273C8: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x802273CC: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802273D0: swc1        $f14, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f14.u32l;
    // 0x802273D4: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x802273D8: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x802273DC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802273E0: addiu       $t1, $t9, 0x4
    ctx->r9 = ADD32(ctx->r25, 0X4);
    // 0x802273E4: b           L_802287A4
    // 0x802273E8: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x802273E8: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_802273EC:
    // 0x802273EC: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x802273F0: lh          $t3, 0xC8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC8);
    // 0x802273F4: lh          $t5, 0x4($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X4);
    // 0x802273F8: lh          $t6, 0xCA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XCA);
    // 0x802273FC: lh          $t7, 0x6($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X6);
    // 0x80227400: lh          $t9, 0xCC($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XCC);
    // 0x80227404: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80227408: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x8022740C: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80227410: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80227414: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80227418: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8022741C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227420: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227424: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x80227428: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8022742C: swc1        $f14, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f14.u32l;
    // 0x80227430: swc1        $f2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f2.u32l;
    // 0x80227434: lh          $t2, 0x8($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X8);
    // 0x80227438: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x8022743C: lbu         $t3, 0xCF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227440: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227444: addiu       $t4, $t3, 0x5
    ctx->r12 = ADD32(ctx->r11, 0X5);
    // 0x80227448: b           L_802287A4
    // 0x8022744C: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x8022744C: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
L_80227450:
    // 0x80227450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227454: jal         0x802196E4
    // 0x80227458: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_26;
    // 0x80227458: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_26:
    // 0x8022745C: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    // 0x80227460: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227464: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227468: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8022746C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227470: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80227474: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227478: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022747C: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80227480: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80227484: jal         0x8021664C
    // 0x80227488: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_27;
    // 0x80227488: nop

    after_27:
    // 0x8022748C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80227490: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
    // 0x80227494: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80227498: lbu         $t8, 0xCF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022749C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802274A0: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x802274A4: b           L_802287A4
    // 0x802274A8: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
        goto L_802287A4;
    // 0x802274A8: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
L_802274AC:
    // 0x802274AC: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x802274B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802274B4: beq         $a0, $zero, L_802274CC
    if (ctx->r4 == 0) {
        // 0x802274B8: nop
    
            goto L_802274CC;
    }
    // 0x802274B8: nop

    // 0x802274BC: beql        $a0, $at, L_8022752C
    if (ctx->r4 == ctx->r1) {
        // 0x802274C0: lhu         $v0, 0xC6($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XC6);
            goto L_8022752C;
    }
    goto skip_12;
    // 0x802274C0: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    skip_12:
    // 0x802274C4: b           L_802287A8
    // 0x802274C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802274C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802274CC:
    // 0x802274CC: jal         0x802196E4
    // 0x802274D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_28;
    // 0x802274D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x802274D4: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x802274D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802274DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802274E0: ori         $t1, $t9, 0x400
    ctx->r9 = ctx->r25 | 0X400;
    // 0x802274E4: sw          $t1, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r9;
    // 0x802274E8: lh          $t2, 0x6($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X6);
    // 0x802274EC: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x802274F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802274F4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802274F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802274FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227500: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80227504: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80227508: jal         0x8021664C
    // 0x8022750C: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_29;
    // 0x8022750C: nop

    after_29:
    // 0x80227510: lbu         $t4, 0xCE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227514: lh          $t3, 0x2($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X2);
    // 0x80227518: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8022751C: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
    // 0x80227520: b           L_802287A4
    // 0x80227524: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80227524: sh          $t3, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r11;
    // 0x80227528: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
L_8022752C:
    // 0x8022752C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227530: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80227534: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80227538: sh          $t6, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r14;
            goto L_802287A4;
    }
    // 0x80227538: sh          $t6, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r14;
    // 0x8022753C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x80227540: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227544: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227548: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x8022754C: addiu       $t1, $t9, 0x4
    ctx->r9 = ADD32(ctx->r25, 0X4);
    // 0x80227550: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x80227554: b           L_802287A4
    // 0x80227558: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x80227558: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_8022755C:
    // 0x8022755C: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x80227560: b           L_802287A4
    // 0x80227564: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x80227564: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
L_80227568:
    // 0x80227568: jal         0x802196E4
    // 0x8022756C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_30;
    // 0x8022756C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80227570: b           L_802287A8
    // 0x80227574: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
        goto L_802287A8;
    // 0x80227574: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
L_80227578:
    // 0x80227578: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x8022757C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227580: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227584: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x80227588: jal         0x802197D8
    // 0x8022758C: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    func_802197D8_5D4CA8(rdram, ctx);
        goto after_31;
    // 0x8022758C: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    after_31:
    // 0x80227590: lbu         $t5, 0xCF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227594: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227598: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x8022759C: b           L_802287A4
    // 0x802275A0: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x802275A0: sb          $t6, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r14;
L_802275A4:
    // 0x802275A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802275A8: jal         0x80216E1C
    // 0x802275AC: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_32;
    // 0x802275AC: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    after_32:
    // 0x802275B0: lbu         $t8, 0xCF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XCF);
    // 0x802275B4: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802275B8: addiu       $t7, $t8, 0x2
    ctx->r15 = ADD32(ctx->r24, 0X2);
    // 0x802275BC: b           L_802287A4
    // 0x802275C0: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
        goto L_802287A4;
    // 0x802275C0: sb          $t7, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r15;
L_802275C4:
    // 0x802275C4: b           L_802287A8
    // 0x802275C8: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
        goto L_802287A8;
    // 0x802275C8: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
L_802275CC:
    // 0x802275CC: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x802275D0: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802275D4: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x802275D8: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
    // 0x802275DC: b           L_802287A8
    // 0x802275E0: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
        goto L_802287A8;
    // 0x802275E0: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
L_802275E4:
    // 0x802275E4: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x802275E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802275EC: beq         $a0, $zero, L_80227604
    if (ctx->r4 == 0) {
        // 0x802275F0: nop
    
            goto L_80227604;
    }
    // 0x802275F0: nop

    // 0x802275F4: beql        $a0, $at, L_80227650
    if (ctx->r4 == ctx->r1) {
        // 0x802275F8: lh          $a2, 0x8($s1)
        ctx->r6 = MEM_H(ctx->r17, 0X8);
            goto L_80227650;
    }
    goto skip_13;
    // 0x802275F8: lh          $a2, 0x8($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X8);
    skip_13:
    // 0x802275FC: b           L_802287A8
    // 0x80227600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80227600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80227604:
    // 0x80227604: jal         0x802196E4
    // 0x80227608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_33;
    // 0x80227608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x8022760C: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x80227610: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227614: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227618: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8022761C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227620: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80227624: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227628: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022762C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80227630: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80227634: jal         0x8021664C
    // 0x80227638: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_34;
    // 0x80227638: nop

    after_34:
    // 0x8022763C: lbu         $t3, 0xCE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227640: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80227644: b           L_802287A4
    // 0x80227648: sb          $t4, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x80227648: sb          $t4, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r12;
    // 0x8022764C: lh          $a2, 0x8($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X8);
L_80227650:
    // 0x80227650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227654: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x80227658: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8022765C: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x80227660: jal         0x8021D9A8
    // 0x80227664: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8021D9A8_5D8E78(rdram, ctx);
        goto after_35;
    // 0x80227664: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_35:
    // 0x80227668: beq         $v0, $zero, L_802287A4
    if (ctx->r2 == 0) {
        // 0x8022766C: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_802287A4;
    }
    // 0x8022766C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80227670: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80227674: lbu         $t7, 0xCF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227678: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022767C: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80227680: addiu       $t9, $t7, 0x5
    ctx->r25 = ADD32(ctx->r15, 0X5);
    // 0x80227684: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x80227688: b           L_802287A4
    // 0x8022768C: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x8022768C: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
L_80227690:
    // 0x80227690: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227694: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227698: beql        $a0, $zero, L_802276B4
    if (ctx->r4 == 0) {
        // 0x8022769C: lh          $t1, 0xA($s1)
        ctx->r9 = MEM_H(ctx->r17, 0XA);
            goto L_802276B4;
    }
    goto skip_14;
    // 0x8022769C: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
    skip_14:
    // 0x802276A0: beql        $a0, $at, L_802276F4
    if (ctx->r4 == ctx->r1) {
        // 0x802276A4: lh          $t1, 0xA($s1)
        ctx->r9 = MEM_H(ctx->r17, 0XA);
            goto L_802276F4;
    }
    goto skip_15;
    // 0x802276A4: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
    skip_15:
    // 0x802276A8: b           L_802287A8
    // 0x802276AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802276AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802276B0: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
L_802276B4:
    // 0x802276B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802276B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802276BC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802276C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802276C4: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x802276C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802276CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802276D0: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802276D4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802276D8: jal         0x8021664C
    // 0x802276DC: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_36;
    // 0x802276DC: nop

    after_36:
    // 0x802276E0: lbu         $t2, 0xCE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCE);
    // 0x802276E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802276E8: b           L_802287A4
    // 0x802276EC: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x802276EC: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
    // 0x802276F0: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
L_802276F4:
    // 0x802276F4: lh          $t4, 0x4($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X4);
    // 0x802276F8: lh          $t5, 0xC8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC8);
    // 0x802276FC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80227700: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80227704: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80227708: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8022770C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80227710: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80227714: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80227718: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8022771C: lh          $t8, 0x8($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X8);
    // 0x80227720: lh          $t7, 0xCC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XCC);
    // 0x80227724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227728: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8022772C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80227730: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80227734: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227738: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022773C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80227740: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80227744: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80227748: jal         0x8021BB04
    // 0x8022774C: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_37;
    // 0x8022774C: nop

    after_37:
    // 0x80227750: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80227754: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_16;
    // 0x80227754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_16:
    // 0x80227758: lbu         $t2, 0xCF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022775C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227760: addiu       $t3, $t2, 0x6
    ctx->r11 = ADD32(ctx->r10, 0X6);
    // 0x80227764: b           L_802287A4
    // 0x80227768: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80227768: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
L_8022776C:
    // 0x8022776C: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227774: beq         $a0, $zero, L_8022779C
    if (ctx->r4 == 0) {
        // 0x80227778: nop
    
            goto L_8022779C;
    }
    // 0x80227778: nop

    // 0x8022777C: beq         $a0, $at, L_802277E4
    if (ctx->r4 == ctx->r1) {
        // 0x80227780: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802277E4;
    }
    // 0x80227780: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80227784: beq         $a0, $at, L_80227878
    if (ctx->r4 == ctx->r1) {
        // 0x80227788: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80227878;
    }
    // 0x80227788: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8022778C: beql        $a0, $at, L_802278BC
    if (ctx->r4 == ctx->r1) {
        // 0x80227790: lh          $t5, 0x6($s1)
        ctx->r13 = MEM_H(ctx->r17, 0X6);
            goto L_802278BC;
    }
    goto skip_17;
    // 0x80227790: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    skip_17:
    // 0x80227794: b           L_802287A8
    // 0x80227798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80227798: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022779C:
    // 0x8022779C: jal         0x802196E4
    // 0x802277A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_38;
    // 0x802277A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x802277A4: lh          $t4, 0xE($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XE);
    // 0x802277A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802277AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802277B0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x802277B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802277B8: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x802277BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802277C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802277C4: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802277C8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802277CC: jal         0x8021664C
    // 0x802277D0: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_39;
    // 0x802277D0: nop

    after_39:
    // 0x802277D4: lbu         $t5, 0xCE($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCE);
    // 0x802277D8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x802277DC: b           L_802287A4
    // 0x802277E0: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x802277E0: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
L_802277E4:
    // 0x802277E4: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x802277E8: lh          $t7, 0xC8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC8);
    // 0x802277EC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802277F0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x802277F4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x802277F8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x802277FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227800: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227804: swc1        $f12, 0x178($v0)
    MEM_W(0X178, ctx->r2) = ctx->f12.u32l;
    // 0x80227808: lh          $t2, 0xCA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCA);
    // 0x8022780C: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x80227810: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227814: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80227818: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8022781C: nop

    // 0x80227820: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227824: swc1        $f14, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->f14.u32l;
    // 0x80227828: lh          $t5, 0xCC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XCC);
    // 0x8022782C: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    // 0x80227830: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227834: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80227838: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8022783C: nop

    // 0x80227840: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227844: swc1        $f2, 0x180($v0)
    MEM_W(0X180, ctx->r2) = ctx->f2.u32l;
    // 0x80227848: lh          $t8, 0xC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XC);
    // 0x8022784C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227850: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80227854: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80227858: jal         0x802196FC
    // 0x8022785C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_802196FC_5D4BCC(rdram, ctx);
        goto after_40;
    // 0x8022785C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_40:
    // 0x80227860: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80227864: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_18;
    // 0x80227864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_18:
    // 0x80227868: lbu         $t9, 0xCE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCE);
    // 0x8022786C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80227870: b           L_802287A4
    // 0x80227874: sb          $t1, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x80227874: sb          $t1, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r9;
L_80227878:
    // 0x80227878: lh          $t2, 0xE($s1)
    ctx->r10 = MEM_H(ctx->r17, 0XE);
    // 0x8022787C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227880: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227884: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80227888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022788C: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x80227890: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227894: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80227898: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8022789C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802278A0: jal         0x8021664C
    // 0x802278A4: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_41;
    // 0x802278A4: nop

    after_41:
    // 0x802278A8: lbu         $t3, 0xCE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCE);
    // 0x802278AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802278B0: b           L_802287A4
    // 0x802278B4: sb          $t4, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x802278B4: sb          $t4, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r12;
    // 0x802278B8: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
L_802278BC:
    // 0x802278BC: lh          $t6, 0xC8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XC8);
    // 0x802278C0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802278C4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x802278C8: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x802278CC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802278D0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802278D4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802278D8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802278DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802278E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802278E4: swc1        $f12, 0x178($v0)
    MEM_W(0X178, ctx->r2) = ctx->f12.u32l;
    // 0x802278E8: lh          $t9, 0xCA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XCA);
    // 0x802278EC: lh          $t7, 0x8($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X8);
    // 0x802278F0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802278F4: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x802278F8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802278FC: nop

    // 0x80227900: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227904: swc1        $f14, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->f14.u32l;
    // 0x80227908: lh          $t3, 0xCC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XCC);
    // 0x8022790C: lh          $t2, 0xA($s1)
    ctx->r10 = MEM_H(ctx->r17, 0XA);
    // 0x80227910: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80227914: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80227918: nop

    // 0x8022791C: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227920: swc1        $f2, 0x180($v0)
    MEM_W(0X180, ctx->r2) = ctx->f2.u32l;
    // 0x80227924: lw          $t5, 0x68($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X68);
    // 0x80227928: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8022792C: ori         $t6, $t5, 0x400
    ctx->r14 = ctx->r13 | 0X400;
    // 0x80227930: sw          $t6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r14;
    // 0x80227934: lh          $t8, 0xC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XC);
    // 0x80227938: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8022793C: nop

    // 0x80227940: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x80227944: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80227948: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8022794C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80227950: jal         0x8021BB04
    // 0x80227954: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_42;
    // 0x80227954: nop

    after_42:
    // 0x80227958: bne         $v0, $zero, L_802287A4
    if (ctx->r2 != 0) {
        // 0x8022795C: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_802287A4;
    }
    // 0x8022795C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80227960: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x80227964: lbu         $t1, 0xCF($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227968: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022796C: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80227970: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80227974: sw          $t9, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r25;
    // 0x80227978: b           L_802287A4
    // 0x8022797C: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x8022797C: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
L_80227980:
    // 0x80227980: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227984: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227988: beq         $a0, $zero, L_802279B0
    if (ctx->r4 == 0) {
        // 0x8022798C: nop
    
            goto L_802279B0;
    }
    // 0x8022798C: nop

    // 0x80227990: beq         $a0, $at, L_80227A04
    if (ctx->r4 == ctx->r1) {
        // 0x80227994: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80227A04;
    }
    // 0x80227994: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80227998: beq         $a0, $at, L_80227AF0
    if (ctx->r4 == ctx->r1) {
        // 0x8022799C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80227AF0;
    }
    // 0x8022799C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802279A0: beql        $a0, $at, L_80227B34
    if (ctx->r4 == ctx->r1) {
        // 0x802279A4: lh          $t2, 0x6($s1)
        ctx->r10 = MEM_H(ctx->r17, 0X6);
            goto L_80227B34;
    }
    goto skip_19;
    // 0x802279A4: lh          $t2, 0x6($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X6);
    skip_19:
    // 0x802279A8: b           L_802287A8
    // 0x802279AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802279AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802279B0:
    // 0x802279B0: jal         0x802196E4
    // 0x802279B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_43;
    // 0x802279B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x802279B8: lh          $t3, 0xE($s1)
    ctx->r11 = MEM_H(ctx->r17, 0XE);
    // 0x802279BC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802279C0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802279C4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802279C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802279CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802279D0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802279D4: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x802279D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802279DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802279E0: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x802279E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802279E8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802279EC: jal         0x8021664C
    // 0x802279F0: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_44;
    // 0x802279F0: nop

    after_44:
    // 0x802279F4: lbu         $t4, 0xCE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCE);
    // 0x802279F8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802279FC: b           L_802287A4
    // 0x80227A00: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x80227A00: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
L_80227A04:
    // 0x80227A04: lh          $t7, 0x6($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X6);
    // 0x80227A08: lbu         $a0, 0xAA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAA);
    // 0x80227A0C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80227A10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80227A14: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x80227A18: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227A1C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80227A20: lh          $t9, 0xA($s1)
    ctx->r25 = MEM_H(ctx->r17, 0XA);
    // 0x80227A24: sh          $a0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r4;
    // 0x80227A28: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80227A2C: nop

    // 0x80227A30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227A34: jal         0x80003E10
    // 0x80227A38: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_45;
    // 0x80227A38: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_45:
    // 0x80227A3C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227A40: jal         0x80003EA0
    // 0x80227A44: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_46;
    // 0x80227A44: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_46:
    // 0x80227A48: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227A4C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227A50: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227A54: lh          $t1, 0xC8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XC8);
    // 0x80227A58: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80227A5C: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x80227A60: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80227A64: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80227A68: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227A6C: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80227A70: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80227A74: jal         0x80003EA0
    // 0x80227A78: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_47;
    // 0x80227A78: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_47:
    // 0x80227A7C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227A80: jal         0x80003E10
    // 0x80227A84: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003E10_4A10(rdram, ctx);
        goto after_48;
    // 0x80227A84: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_48:
    // 0x80227A88: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227A8C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227A90: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227A94: lh          $t2, 0xCC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCC);
    // 0x80227A98: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80227A9C: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80227AA0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80227AA4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80227AA8: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80227AAC: lh          $t3, 0xC($s1)
    ctx->r11 = MEM_H(ctx->r17, 0XC);
    // 0x80227AB0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227AB4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227ABC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227AC0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80227AC4: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80227AC8: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80227ACC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227AD0: jal         0x802196FC
    // 0x80227AD4: nop

    func_802196FC_5D4BCC(rdram, ctx);
        goto after_49;
    // 0x80227AD4: nop

    after_49:
    // 0x80227AD8: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80227ADC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_20;
    // 0x80227ADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_20:
    // 0x80227AE0: lbu         $t4, 0xCE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227AE4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80227AE8: b           L_802287A4
    // 0x80227AEC: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x80227AEC: sb          $t5, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r13;
L_80227AF0:
    // 0x80227AF0: lh          $t6, 0xE($s1)
    ctx->r14 = MEM_H(ctx->r17, 0XE);
    // 0x80227AF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227AF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227AFC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80227B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227B04: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    // 0x80227B08: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80227B10: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80227B14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80227B18: jal         0x8021664C
    // 0x80227B1C: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_50;
    // 0x80227B1C: nop

    after_50:
    // 0x80227B20: lbu         $t8, 0xCE($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227B24: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80227B28: b           L_802287A4
    // 0x80227B2C: sb          $t7, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r15;
        goto L_802287A4;
    // 0x80227B2C: sb          $t7, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r15;
    // 0x80227B30: lh          $t2, 0x6($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X6);
L_80227B34:
    // 0x80227B34: lbu         $a0, 0xAA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAA);
    // 0x80227B38: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80227B3C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80227B40: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    // 0x80227B44: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227B48: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x80227B4C: lh          $t3, 0xA($s1)
    ctx->r11 = MEM_H(ctx->r17, 0XA);
    // 0x80227B50: sh          $a0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r4;
    // 0x80227B54: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80227B58: nop

    // 0x80227B5C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227B60: jal         0x80003E10
    // 0x80227B64: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_51;
    // 0x80227B64: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_51:
    // 0x80227B68: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227B6C: jal         0x80003EA0
    // 0x80227B70: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_52;
    // 0x80227B70: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_52:
    // 0x80227B74: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227B78: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227B7C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227B80: lh          $t4, 0xC8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC8);
    // 0x80227B84: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80227B88: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x80227B8C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80227B90: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80227B94: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227B98: sub.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80227B9C: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80227BA0: jal         0x80003EA0
    // 0x80227BA4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_53;
    // 0x80227BA4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_53:
    // 0x80227BA8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227BAC: jal         0x80003E10
    // 0x80227BB0: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003E10_4A10(rdram, ctx);
        goto after_54;
    // 0x80227BB0: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_54:
    // 0x80227BB4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227BB8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227BBC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227BC0: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80227BC4: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80227BC8: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80227BCC: lh          $t5, 0xCC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XCC);
    // 0x80227BD0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80227BD4: ori         $t8, $t6, 0x400
    ctx->r24 = ctx->r14 | 0X400;
    // 0x80227BD8: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x80227BDC: lh          $t7, 0xC($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XC);
    // 0x80227BE0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80227BE4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80227BE8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80227BEC: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80227BF0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80227BF4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227BF8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227BFC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80227C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227C04: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80227C08: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80227C0C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80227C10: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80227C14: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80227C18: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80227C1C: jal         0x8021BB04
    // 0x80227C20: nop

    func_8021BB04_5D6FD4(rdram, ctx);
        goto after_55;
    // 0x80227C20: nop

    after_55:
    // 0x80227C24: bne         $v0, $zero, L_802287A4
    if (ctx->r2 != 0) {
        // 0x80227C28: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_802287A4;
    }
    // 0x80227C28: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80227C2C: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x80227C30: lbu         $t2, 0xCF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227C34: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227C38: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x80227C3C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80227C40: sw          $t1, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r9;
    // 0x80227C44: b           L_802287A4
    // 0x80227C48: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80227C48: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
L_80227C4C:
    // 0x80227C4C: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227C54: beql        $a0, $zero, L_80227C70
    if (ctx->r4 == 0) {
        // 0x80227C58: lh          $t6, 0x2($s1)
        ctx->r14 = MEM_H(ctx->r17, 0X2);
            goto L_80227C70;
    }
    goto skip_21;
    // 0x80227C58: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    skip_21:
    // 0x80227C5C: beql        $a0, $at, L_80227D5C
    if (ctx->r4 == ctx->r1) {
        // 0x80227C60: lh          $t6, 0x2($s1)
        ctx->r14 = MEM_H(ctx->r17, 0X2);
            goto L_80227D5C;
    }
    goto skip_22;
    // 0x80227C60: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
    skip_22:
    // 0x80227C64: b           L_802287A8
    // 0x80227C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80227C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80227C6C: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
L_80227C70:
    // 0x80227C70: lbu         $a0, 0xAA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAA);
    // 0x80227C74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80227C78: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80227C7C: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
    // 0x80227C80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227C84: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80227C88: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x80227C8C: sh          $a0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r4;
    // 0x80227C90: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80227C94: nop

    // 0x80227C98: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227C9C: jal         0x80003E10
    // 0x80227CA0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_56;
    // 0x80227CA0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    after_56:
    // 0x80227CA4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227CA8: jal         0x80003EA0
    // 0x80227CAC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_57;
    // 0x80227CAC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_57:
    // 0x80227CB0: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227CB4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227CB8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227CBC: lh          $t7, 0xC8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC8);
    // 0x80227CC0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80227CC4: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x80227CC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80227CCC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80227CD0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227CD4: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80227CD8: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80227CDC: jal         0x80003EA0
    // 0x80227CE0: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_58;
    // 0x80227CE0: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_58:
    // 0x80227CE4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227CE8: jal         0x80003E10
    // 0x80227CEC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003E10_4A10(rdram, ctx);
        goto after_59;
    // 0x80227CEC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_59:
    // 0x80227CF0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227CF4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227CF8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227CFC: lh          $t9, 0xCC($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XCC);
    // 0x80227D00: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80227D04: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80227D08: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80227D0C: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80227D10: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80227D14: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
    // 0x80227D18: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227D1C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227D24: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227D28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80227D2C: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80227D30: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80227D34: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227D38: jal         0x802196FC
    // 0x80227D3C: nop

    func_802196FC_5D4BCC(rdram, ctx);
        goto after_60;
    // 0x80227D3C: nop

    after_60:
    // 0x80227D40: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80227D44: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_23;
    // 0x80227D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_23:
    // 0x80227D48: lbu         $t2, 0xCE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227D4C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80227D50: b           L_802287A4
    // 0x80227D54: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80227D54: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
    // 0x80227D58: lh          $t6, 0x2($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X2);
L_80227D5C:
    // 0x80227D5C: lbu         $a0, 0xAA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAA);
    // 0x80227D60: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80227D64: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x80227D68: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
    // 0x80227D6C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227D70: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80227D74: lh          $t8, 0x4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X4);
    // 0x80227D78: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80227D7C: nop

    // 0x80227D80: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227D84: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80227D88: lh          $t7, 0x6($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X6);
    // 0x80227D8C: sh          $a0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r4;
    // 0x80227D90: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80227D94: nop

    // 0x80227D98: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227D9C: jal         0x80003E10
    // 0x80227DA0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_61;
    // 0x80227DA0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_61:
    // 0x80227DA4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227DA8: jal         0x80003EA0
    // 0x80227DAC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_62;
    // 0x80227DAC: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_62:
    // 0x80227DB0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227DB4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227DB8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227DBC: lh          $t9, 0xC8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XC8);
    // 0x80227DC0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80227DC4: lh          $t1, 0xCA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCA);
    // 0x80227DC8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80227DCC: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80227DD0: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    // 0x80227DD4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227DD8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80227DDC: sub.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80227DE0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80227DE4: nop

    // 0x80227DE8: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227DEC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80227DF0: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80227DF4: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x80227DF8: jal         0x80003EA0
    // 0x80227DFC: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_63;
    // 0x80227DFC: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    after_63:
    // 0x80227E00: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227E04: jal         0x80003E10
    // 0x80227E08: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    func_80003E10_4A10(rdram, ctx);
        goto after_64;
    // 0x80227E08: lhu         $a0, 0x4C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4C);
    after_64:
    // 0x80227E0C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80227E10: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80227E14: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227E18: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x80227E1C: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80227E20: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80227E24: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80227E28: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80227E2C: lh          $t2, 0xCC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCC);
    // 0x80227E30: ori         $t4, $t3, 0x400
    ctx->r12 = ctx->r11 | 0X400;
    // 0x80227E34: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
    // 0x80227E38: lh          $t5, 0x8($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X8);
    // 0x80227E3C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80227E40: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80227E44: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80227E48: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80227E4C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80227E50: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227E54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227E58: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227E5C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227E64: cvt.d.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.d = CVT_D_W(ctx->f6.u32l);
    // 0x80227E68: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80227E6C: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x80227E70: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227E74: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80227E78: jal         0x8021B988
    // 0x80227E7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8021B988_5D6E58(rdram, ctx);
        goto after_65;
    // 0x80227E7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_65:
    // 0x80227E80: bne         $v0, $zero, L_802287A4
    if (ctx->r2 != 0) {
        // 0x80227E84: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_802287A4;
    }
    // 0x80227E84: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x80227E88: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80227E8C: lbu         $t7, 0xCF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227E90: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227E94: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80227E98: addiu       $t9, $t7, 0x6
    ctx->r25 = ADD32(ctx->r15, 0X6);
    // 0x80227E9C: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x80227EA0: b           L_802287A4
    // 0x80227EA4: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x80227EA4: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
L_80227EA8:
    // 0x80227EA8: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227EAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80227EB0: beq         $a0, $zero, L_80227EC8
    if (ctx->r4 == 0) {
        // 0x80227EB4: nop
    
            goto L_80227EC8;
    }
    // 0x80227EB4: nop

    // 0x80227EB8: beql        $a0, $at, L_80227F14
    if (ctx->r4 == ctx->r1) {
        // 0x80227EBC: lh          $t4, 0x4($s1)
        ctx->r12 = MEM_H(ctx->r17, 0X4);
            goto L_80227F14;
    }
    goto skip_24;
    // 0x80227EBC: lh          $t4, 0x4($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X4);
    skip_24:
    // 0x80227EC0: b           L_802287A8
    // 0x80227EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80227EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80227EC8:
    // 0x80227EC8: jal         0x802196E4
    // 0x80227ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_66;
    // 0x80227ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x80227ED0: lh          $t1, 0xA($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA);
    // 0x80227ED4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80227ED8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80227EDC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80227EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227EE4: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80227EE8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227EEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80227EF0: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80227EF4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80227EF8: jal         0x8021664C
    // 0x80227EFC: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_67;
    // 0x80227EFC: nop

    after_67:
    // 0x80227F00: lbu         $t2, 0xCE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCE);
    // 0x80227F04: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80227F08: b           L_802287A4
    // 0x80227F0C: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80227F0C: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
    // 0x80227F10: lh          $t4, 0x4($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X4);
L_80227F14:
    // 0x80227F14: lh          $t5, 0xC8($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC8);
    // 0x80227F18: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x80227F1C: lh          $t7, 0xCA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XCA);
    // 0x80227F20: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x80227F24: lh          $t2, 0xCC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCC);
    // 0x80227F28: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80227F2C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80227F30: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80227F34: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80227F38: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80227F3C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80227F40: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227F44: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    // 0x80227F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227F4C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80227F50: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227F54: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227F58: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80227F5C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80227F60: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80227F64: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227F68: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227F6C: jal         0x802196FC
    // 0x80227F70: nop

    func_802196FC_5D4BCC(rdram, ctx);
        goto after_68;
    // 0x80227F70: nop

    after_68:
    // 0x80227F74: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80227F78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_25;
    // 0x80227F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_25:
    // 0x80227F7C: lbu         $t6, 0xCF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCF);
    // 0x80227F80: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80227F84: addiu       $t8, $t6, 0x6
    ctx->r24 = ADD32(ctx->r14, 0X6);
    // 0x80227F88: b           L_802287A4
    // 0x80227F8C: sb          $t8, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r24;
        goto L_802287A4;
    // 0x80227F8C: sb          $t8, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r24;
L_80227F90:
    // 0x80227F90: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x80227F94: lh          $t9, 0xC8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XC8);
    // 0x80227F98: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x80227F9C: lh          $t3, 0xCA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XCA);
    // 0x80227FA0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80227FA4: lh          $t7, 0x8($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X8);
    // 0x80227FA8: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80227FAC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80227FB0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80227FB4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80227FB8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80227FBC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80227FC0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80227FC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80227FC8: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    // 0x80227FCC: lh          $t6, 0xCC($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XCC);
    // 0x80227FD0: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80227FD4: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80227FD8: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80227FDC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80227FE0: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x80227FE4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80227FE8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80227FEC: div.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f16.d);
    // 0x80227FF0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80227FF4: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80227FF8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80227FFC: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80228000: jal         0x801CF848
    // 0x80228004: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801CF848_58B758(rdram, ctx);
        goto after_69;
    // 0x80228004: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_69:
    // 0x80228008: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8022800C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80228010: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80228014: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80228018: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022801C: bc1fl       L_80228030
    if (!c1cs) {
        // 0x80228020: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80228030;
    }
    goto skip_26;
    // 0x80228020: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_26:
    // 0x80228024: b           L_80228030
    // 0x80228028: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80228030;
    // 0x80228028: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8022802C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80228030:
    // 0x80228030: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80228034: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x80228038: nop

    // 0x8022803C: bc1fl       L_802287A8
    if (!c1cs) {
        // 0x80228040: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_27;
    // 0x80228040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_27:
    // 0x80228044: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x80228048: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022804C: addiu       $t1, $t9, 0x5
    ctx->r9 = ADD32(ctx->r25, 0X5);
    // 0x80228050: b           L_802287A4
    // 0x80228054: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x80228054: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_80228058:
    // 0x80228058: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8022805C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80228060: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80228064: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80228068: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8022806C: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80228070: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80228074: nop

    // 0x80228078: sh          $t3, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r11;
    // 0x8022807C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80228080: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80228084: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80228088: nop

    // 0x8022808C: sh          $t5, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r13;
    // 0x80228090: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80228094: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80228098: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8022809C: nop

    // 0x802280A0: sh          $t8, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r24;
    // 0x802280A4: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x802280A8: lh          $t2, 0x8($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X8);
    // 0x802280AC: lh          $t9, 0x4($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X4);
    // 0x802280B0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802280B4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802280B8: lh          $t1, 0x6($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X6);
    // 0x802280BC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802280C0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802280C4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802280C8: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x802280CC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802280D0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802280D4: div.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x802280D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802280DC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802280E0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802280E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802280E8: jal         0x801CF848
    // 0x802280EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801CF848_58B758(rdram, ctx);
        goto after_70;
    // 0x802280EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_70:
    // 0x802280F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802280F4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x802280F8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802280FC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80228100: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80228104: bc1fl       L_80228168
    if (!c1cs) {
        // 0x80228108: lh          $t8, 0x2($s1)
        ctx->r24 = MEM_H(ctx->r17, 0X2);
            goto L_80228168;
    }
    goto skip_28;
    // 0x80228108: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
    skip_28:
    // 0x8022810C: lh          $t3, 0x2($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X2);
    // 0x80228110: lh          $t6, 0x8($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X8);
    // 0x80228114: lh          $t4, 0x4($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X4);
    // 0x80228118: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8022811C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80228120: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    // 0x80228124: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80228128: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8022812C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80228130: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80228134: cvt.d.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.d = CVT_D_W(ctx->f10.u32l);
    // 0x80228138: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8022813C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228140: div.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f6.d, ctx->f16.d);
    // 0x80228144: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80228148: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8022814C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80228150: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80228154: jal         0x801CF848
    // 0x80228158: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801CF848_58B758(rdram, ctx);
        goto after_71;
    // 0x80228158: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_71:
    // 0x8022815C: b           L_802281B8
    // 0x80228160: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_802281B8;
    // 0x80228160: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80228164: lh          $t8, 0x2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X2);
L_80228168:
    // 0x80228168: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x8022816C: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x80228170: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80228174: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80228178: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x8022817C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80228180: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80228184: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80228188: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x8022818C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80228190: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80228194: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80228198: div.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x8022819C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802281A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802281A4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802281A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802281AC: jal         0x801CF848
    // 0x802281B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801CF848_58B758(rdram, ctx);
        goto after_72;
    // 0x802281B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_72:
    // 0x802281B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802281B8:
    // 0x802281B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802281BC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802281C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802281C4: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802281C8: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x802281CC: nop

    // 0x802281D0: bc1fl       L_802287A8
    if (!c1cs) {
        // 0x802281D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_29;
    // 0x802281D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_29:
    // 0x802281D8: lbu         $t2, 0xCF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCF);
    // 0x802281DC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802281E0: addiu       $t3, $t2, 0x5
    ctx->r11 = ADD32(ctx->r10, 0X5);
    // 0x802281E4: b           L_802287A4
    // 0x802281E8: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x802281E8: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
L_802281EC:
    // 0x802281EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802281F0: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x802281F4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802281F8: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x802281FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80228200: bnel        $t4, $v0, L_80228214
    if (ctx->r12 != ctx->r2) {
        // 0x80228204: lw          $t5, 0x4($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X4);
            goto L_80228214;
    }
    goto skip_30;
    // 0x80228204: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    skip_30:
    // 0x80228208: b           L_80228238
    // 0x8022820C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_80228238;
    // 0x8022820C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80228210: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
L_80228214:
    // 0x80228214: bnel        $t5, $v0, L_80228228
    if (ctx->r13 != ctx->r2) {
        // 0x80228218: lbu         $t6, 0xCF($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0XCF);
            goto L_80228228;
    }
    goto skip_31;
    // 0x80228218: lbu         $t6, 0xCF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCF);
    skip_31:
    // 0x8022821C: b           L_80228238
    // 0x80228220: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_80228238;
    // 0x80228220: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80228224: lbu         $t6, 0xCF($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCF);
L_80228228:
    // 0x80228228: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022822C: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x80228230: sb          $t8, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r24;
    // 0x80228234: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_80228238:
    // 0x80228238: lbu         $v0, 0xCE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCE);
    // 0x8022823C: beq         $v0, $zero, L_80228260
    if (ctx->r2 == 0) {
        // 0x80228240: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80228260;
    }
    // 0x80228240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80228244: beq         $a0, $at, L_802282CC
    if (ctx->r4 == ctx->r1) {
        // 0x80228248: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_802282CC;
    }
    // 0x80228248: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8022824C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80228250: beq         $a0, $at, L_80228338
    if (ctx->r4 == ctx->r1) {
        // 0x80228254: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_80228338;
    }
    // 0x80228254: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80228258: b           L_802287A8
    // 0x8022825C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x8022825C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80228260:
    // 0x80228260: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x80228264: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80228268: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x8022826C: lhu         $t9, 0x98($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X98);
    // 0x80228270: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80228274: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x80228278: beq         $t9, $zero, L_802287A4
    if (ctx->r25 == 0) {
        // 0x8022827C: addiu       $t2, $v0, 0x1
        ctx->r10 = ADD32(ctx->r2, 0X1);
            goto L_802287A4;
    }
    // 0x8022827C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x80228280: lh          $t1, 0x2($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X2);
    // 0x80228284: sb          $t2, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r10;
    // 0x80228288: sll         $a1, $t0, 2
    ctx->r5 = S32(ctx->r8 << 2);
    // 0x8022828C: sh          $t1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r9;
    // 0x80228290: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x80228294: subu        $a1, $a1, $t0
    ctx->r5 = SUB32(ctx->r5, ctx->r8);
    // 0x80228298: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022829C: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x802282A0: addu        $v1, $t4, $a3
    ctx->r3 = ADD32(ctx->r12, ctx->r7);
    // 0x802282A4: lhu         $t5, 0x30F4($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X30F4);
    // 0x802282A8: ori         $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 | 0X8000;
    // 0x802282AC: sh          $t6, 0x30F4($v1)
    MEM_H(0X30F4, ctx->r3) = ctx->r14;
    // 0x802282B0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x802282B4: addu        $t7, $t8, $a1
    ctx->r15 = ADD32(ctx->r24, ctx->r5);
    // 0x802282B8: addu        $v1, $t7, $a3
    ctx->r3 = ADD32(ctx->r15, ctx->r7);
    // 0x802282BC: lhu         $t9, 0x30F2($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X30F2);
    // 0x802282C0: ori         $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 | 0X8000;
    // 0x802282C4: b           L_802287A4
    // 0x802282C8: sh          $t1, 0x30F2($v1)
    MEM_H(0X30F2, ctx->r3) = ctx->r9;
        goto L_802287A4;
    // 0x802282C8: sh          $t1, 0x30F2($v1)
    MEM_H(0X30F2, ctx->r3) = ctx->r9;
L_802282CC:
    // 0x802282CC: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x802282D0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x802282D4: sll         $a1, $t0, 2
    ctx->r5 = S32(ctx->r8 << 2);
    // 0x802282D8: subu        $a1, $a1, $t0
    ctx->r5 = SUB32(ctx->r5, ctx->r8);
    // 0x802282DC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x802282E0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802282E4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802282E8: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x802282EC: addu        $v1, $t3, $a3
    ctx->r3 = ADD32(ctx->r11, ctx->r7);
    // 0x802282F0: lhu         $t4, 0x30F4($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X30F4);
    // 0x802282F4: andi        $t5, $t4, 0x7FFF
    ctx->r13 = ctx->r12 & 0X7FFF;
    // 0x802282F8: sh          $t5, 0x30F4($v1)
    MEM_H(0X30F4, ctx->r3) = ctx->r13;
    // 0x802282FC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80228300: addu        $t8, $t6, $a1
    ctx->r24 = ADD32(ctx->r14, ctx->r5);
    // 0x80228304: addu        $v1, $t8, $a3
    ctx->r3 = ADD32(ctx->r24, ctx->r7);
    // 0x80228308: lhu         $t7, 0x30F2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X30F2);
    // 0x8022830C: ori         $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 | 0X8000;
    // 0x80228310: sh          $t9, 0x30F2($v1)
    MEM_H(0X30F2, ctx->r3) = ctx->r25;
    // 0x80228314: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x80228318: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022831C: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80228320: beq         $a0, $zero, L_802287A4
    if (ctx->r4 == 0) {
        // 0x80228324: sh          $t1, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r9;
            goto L_802287A4;
    }
    // 0x80228324: sh          $t1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r9;
    // 0x80228328: lbu         $t2, 0xCE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCE);
    // 0x8022832C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80228330: b           L_802287A4
    // 0x80228334: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80228334: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
L_80228338:
    // 0x80228338: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x8022833C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x80228340: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80228344: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80228348: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x8022834C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80228350: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80228354: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80228358: addu        $v1, $t6, $a3
    ctx->r3 = ADD32(ctx->r14, ctx->r7);
    // 0x8022835C: lhu         $t8, 0x30F2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X30F2);
    // 0x80228360: andi        $t7, $t8, 0x7FFF
    ctx->r15 = ctx->r24 & 0X7FFF;
    // 0x80228364: sh          $t7, 0x30F2($v1)
    MEM_H(0X30F2, ctx->r3) = ctx->r15;
    // 0x80228368: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022836C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80228370: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x80228374: b           L_802287A4
    // 0x80228378: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x80228378: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_8022837C:
    // 0x8022837C: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x80228380: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228384: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x80228388: bne         $t2, $zero, L_802283A0
    if (ctx->r10 != 0) {
        // 0x8022838C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802283A0;
    }
    // 0x8022838C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80228390: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228394: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x80228398: b           L_802283A4
    // 0x8022839C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
        goto L_802283A4;
    // 0x8022839C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_802283A0:
    // 0x802283A0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
L_802283A4:
    // 0x802283A4: jal         0x80223D40
    // 0x802283A8: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    func_80223D40_5DF210(rdram, ctx);
        goto after_73;
    // 0x802283A8: lh          $a1, 0x4($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X4);
    after_73:
    // 0x802283AC: lbu         $t3, 0xCF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCF);
    // 0x802283B0: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802283B4: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x802283B8: b           L_802287A4
    // 0x802283BC: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x802283BC: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
L_802283C0:
    // 0x802283C0: lh          $t5, 0x2($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X2);
    // 0x802283C4: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x802283C8: addiu       $t6, $t6, -0x4BC0
    ctx->r14 = ADD32(ctx->r14, -0X4BC0);
    // 0x802283CC: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x802283D0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x802283D4: beql        $t8, $zero, L_802287A8
    if (ctx->r24 == 0) {
        // 0x802283D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_32;
    // 0x802283D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_32:
    // 0x802283DC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x802283E0: lbu         $t7, 0xCF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCF);
    // 0x802283E4: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802283E8: addiu       $t9, $t7, 0x2
    ctx->r25 = ADD32(ctx->r15, 0X2);
    // 0x802283EC: b           L_802287A4
    // 0x802283F0: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x802283F0: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
L_802283F4:
    // 0x802283F4: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x802283F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802283FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80228400: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80228404: sb          $t1, -0x4BC0($at)
    MEM_B(-0X4BC0, ctx->r1) = ctx->r9;
    // 0x80228408: lbu         $t3, 0xCF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022840C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80228410: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x80228414: b           L_802287A4
    // 0x80228418: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
        goto L_802287A4;
    // 0x80228418: sb          $t4, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r12;
L_8022841C:
    // 0x8022841C: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228420: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80228424: beql        $a0, $zero, L_80228440
    if (ctx->r4 == 0) {
        // 0x80228428: lh          $t5, 0x8($s1)
        ctx->r13 = MEM_H(ctx->r17, 0X8);
            goto L_80228440;
    }
    goto skip_33;
    // 0x80228428: lh          $t5, 0x8($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X8);
    skip_33:
    // 0x8022842C: beq         $a0, $at, L_80228478
    if (ctx->r4 == ctx->r1) {
        // 0x80228430: nop
    
            goto L_80228478;
    }
    // 0x80228430: nop

    // 0x80228434: b           L_802287A8
    // 0x80228438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80228438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022843C: lh          $t5, 0x8($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X8);
L_80228440:
    // 0x80228440: lhu         $a1, 0x2($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X2);
    // 0x80228444: lbu         $a2, 0x5($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X5);
    // 0x80228448: lbu         $a3, 0x7($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X7);
    // 0x8022844C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80228450: lh          $t6, 0xA($s1)
    ctx->r14 = MEM_H(ctx->r17, 0XA);
    // 0x80228454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80228458: jal         0x80219330
    // 0x8022845C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_80219330_5D4800(rdram, ctx);
        goto after_74;
    // 0x8022845C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_74:
    // 0x80228460: lbu         $t7, 0xCE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228464: lh          $t8, 0xC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XC);
    // 0x80228468: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8022846C: sb          $t9, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r25;
    // 0x80228470: b           L_802287A4
    // 0x80228474: sh          $t8, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r24;
        goto L_802287A4;
    // 0x80228474: sh          $t8, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r24;
L_80228478:
    // 0x80228478: jal         0x80219448
    // 0x8022847C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80219448_5D4918(rdram, ctx);
        goto after_75;
    // 0x8022847C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_75:
    // 0x80228480: jal         0x8021B480
    // 0x80228484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B480_5D6950(rdram, ctx);
        goto after_76;
    // 0x80228484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_76:
    // 0x80228488: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x8022848C: sltiu       $a0, $v0, 0x1
    ctx->r4 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228490: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80228494: beq         $a0, $zero, L_802284A8
    if (ctx->r4 == 0) {
        // 0x80228498: sh          $t1, 0xC6($s0)
        MEM_H(0XC6, ctx->r16) = ctx->r9;
            goto L_802284A8;
    }
    // 0x80228498: sh          $t1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r9;
    // 0x8022849C: lbu         $t2, 0xCF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCF);
    // 0x802284A0: addiu       $t3, $t2, 0x6
    ctx->r11 = ADD32(ctx->r10, 0X6);
    // 0x802284A4: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
L_802284A8:
    // 0x802284A8: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x802284AC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802284B0: addiu       $t5, $t4, 0x6
    ctx->r13 = ADD32(ctx->r12, 0X6);
    // 0x802284B4: b           L_802287A4
    // 0x802284B8: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x802284B8: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_802284BC:
    // 0x802284BC: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x802284C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802284C4: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x802284C8: beq         $a0, $zero, L_802284E4
    if (ctx->r4 == 0) {
        // 0x802284CC: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_802284E4;
    }
    // 0x802284CC: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x802284D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802284D4: beq         $a0, $at, L_80228508
    if (ctx->r4 == ctx->r1) {
        // 0x802284D8: lui         $a2, 0x8016
        ctx->r6 = S32(0X8016 << 16);
            goto L_80228508;
    }
    // 0x802284D8: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x802284DC: b           L_802287A8
    // 0x802284E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802284E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802284E4:
    // 0x802284E4: addiu       $a2, $a2, -0x3218
    ctx->r6 = ADD32(ctx->r6, -0X3218);
    // 0x802284E8: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x802284EC: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x802284F0: jal         0x80223E9C
    // 0x802284F4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_80223E9C_5DF36C(rdram, ctx);
        goto after_77;
    // 0x802284F4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_77:
    // 0x802284F8: lbu         $t6, 0xCE($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XCE);
    // 0x802284FC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80228500: b           L_802287A4
    // 0x80228504: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
        goto L_802287A4;
    // 0x80228504: sb          $t8, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r24;
L_80228508:
    // 0x80228508: addiu       $a2, $a2, -0x3218
    ctx->r6 = ADD32(ctx->r6, -0X3218);
    // 0x8022850C: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x80228510: beql        $t7, $zero, L_802287A8
    if (ctx->r15 == 0) {
        // 0x80228514: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_34;
    // 0x80228514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_34:
    // 0x80228518: lbu         $t9, 0xCF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XCF);
    // 0x8022851C: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80228520: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x80228524: b           L_802287A4
    // 0x80228528: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
        goto L_802287A4;
    // 0x80228528: sb          $t1, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r9;
L_8022852C:
    // 0x8022852C: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228530: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80228534: beq         $a0, $zero, L_8022854C
    if (ctx->r4 == 0) {
        // 0x80228538: nop
    
            goto L_8022854C;
    }
    // 0x80228538: nop

    // 0x8022853C: beq         $a0, $at, L_80228564
    if (ctx->r4 == ctx->r1) {
        // 0x80228540: nop
    
            goto L_80228564;
    }
    // 0x80228540: nop

    // 0x80228544: b           L_802287A8
    // 0x80228548: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80228548: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022854C:
    // 0x8022854C: jal         0x8003D310
    // 0x80228550: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    func_8003D310_3DF10(rdram, ctx);
        goto after_78;
    // 0x80228550: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    after_78:
    // 0x80228554: lbu         $t2, 0xCE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228558: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8022855C: b           L_802287A4
    // 0x80228560: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80228560: sb          $t3, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r11;
L_80228564:
    // 0x80228564: jal         0x8003F1D8
    // 0x80228568: nop

    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_79;
    // 0x80228568: nop

    after_79:
    // 0x8022856C: beql        $v0, $zero, L_802287A8
    if (ctx->r2 == 0) {
        // 0x80228570: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_35;
    // 0x80228570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_35:
    // 0x80228574: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x80228578: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022857C: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x80228580: b           L_802287A4
    // 0x80228584: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
        goto L_802287A4;
    // 0x80228584: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_80228588:
    // 0x80228588: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x8022858C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80228590: beql        $a0, $zero, L_802285AC
    if (ctx->r4 == 0) {
        // 0x80228594: lh          $t6, 0x4($s1)
        ctx->r14 = MEM_H(ctx->r17, 0X4);
            goto L_802285AC;
    }
    goto skip_36;
    // 0x80228594: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
    skip_36:
    // 0x80228598: beql        $a0, $at, L_802285EC
    if (ctx->r4 == ctx->r1) {
        // 0x8022859C: lbu         $t9, 0x7C($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X7C);
            goto L_802285EC;
    }
    goto skip_37;
    // 0x8022859C: lbu         $t9, 0x7C($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X7C);
    skip_37:
    // 0x802285A0: b           L_802287A8
    // 0x802285A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x802285A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802285A8: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
L_802285AC:
    // 0x802285AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802285B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802285B4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802285B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802285BC: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x802285C0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802285C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802285C8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802285CC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802285D0: jal         0x8021664C
    // 0x802285D4: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_80;
    // 0x802285D4: nop

    after_80:
    // 0x802285D8: lbu         $t8, 0xCE($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XCE);
    // 0x802285DC: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802285E0: b           L_802287A4
    // 0x802285E4: sb          $t7, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r15;
        goto L_802287A4;
    // 0x802285E4: sb          $t7, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r15;
    // 0x802285E8: lbu         $t9, 0x7C($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X7C);
L_802285EC:
    // 0x802285EC: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x802285F0: beql        $t1, $zero, L_802287A8
    if (ctx->r9 == 0) {
        // 0x802285F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_38;
    // 0x802285F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_38:
    // 0x802285F8: lbu         $t2, 0xCF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XCF);
    // 0x802285FC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x80228600: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x80228604: b           L_802287A4
    // 0x80228608: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
        goto L_802287A4;
    // 0x80228608: sb          $t3, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r11;
L_8022860C:
    // 0x8022860C: lbu         $a0, 0xCE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228610: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80228614: beql        $a0, $zero, L_80228630
    if (ctx->r4 == 0) {
        // 0x80228618: lh          $t4, 0xA($s1)
        ctx->r12 = MEM_H(ctx->r17, 0XA);
            goto L_80228630;
    }
    goto skip_39;
    // 0x80228618: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
    skip_39:
    // 0x8022861C: beql        $a0, $at, L_80228670
    if (ctx->r4 == ctx->r1) {
        // 0x80228620: lh          $t8, 0x4($s1)
        ctx->r24 = MEM_H(ctx->r17, 0X4);
            goto L_80228670;
    }
    goto skip_40;
    // 0x80228620: lh          $t8, 0x4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X4);
    skip_40:
    // 0x80228624: b           L_802287A8
    // 0x80228628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802287A8;
    // 0x80228628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022862C: lh          $t4, 0xA($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XA);
L_80228630:
    // 0x80228630: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80228634: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228638: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8022863C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80228640: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x80228644: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80228648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022864C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80228650: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80228654: jal         0x8021664C
    // 0x80228658: nop

    func_8021664C_5D1B1C(rdram, ctx);
        goto after_81;
    // 0x80228658: nop

    after_81:
    // 0x8022865C: lbu         $t5, 0xCE($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XCE);
    // 0x80228660: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80228664: b           L_802287A4
    // 0x80228668: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
        goto L_802287A4;
    // 0x80228668: sb          $t6, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r14;
    // 0x8022866C: lh          $t8, 0x4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X4);
L_80228670:
    // 0x80228670: lh          $t7, 0xC8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC8);
    // 0x80228674: lh          $t1, 0x6($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X6);
    // 0x80228678: lh          $t2, 0xCA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XCA);
    // 0x8022867C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80228680: lh          $t8, 0xA($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XA);
    // 0x80228684: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80228688: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8022868C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80228690: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80228694: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80228698: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8022869C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802286A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802286A4: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x802286A8: lh          $t4, 0x8($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X8);
    // 0x802286AC: lh          $t5, 0xCC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XCC);
    // 0x802286B0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802286B4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802286B8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802286BC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x802286C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802286C4: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x802286C8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802286CC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802286D0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802286D4: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x802286D8: jal         0x8021B988
    // 0x802286DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8021B988_5D6E58(rdram, ctx);
        goto after_82;
    // 0x802286DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_82:
    // 0x802286E0: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x802286E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_41;
    // 0x802286E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_41:
    // 0x802286E8: lbu         $t7, 0xCF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCF);
    // 0x802286EC: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x802286F0: addiu       $t9, $t7, 0x6
    ctx->r25 = ADD32(ctx->r15, 0X6);
    // 0x802286F4: b           L_802287A4
    // 0x802286F8: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
        goto L_802287A4;
    // 0x802286F8: sb          $t9, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r25;
L_802286FC:
    // 0x802286FC: jal         0x80038BC8
    // 0x80228700: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    func_80038BC8_397C8(rdram, ctx);
        goto after_83;
    // 0x80228700: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    after_83:
    // 0x80228704: lbu         $t1, 0xCF($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XCF);
    // 0x80228708: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022870C: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x80228710: b           L_802287A4
    // 0x80228714: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
        goto L_802287A4;
    // 0x80228714: sb          $t2, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r10;
L_80228718:
    // 0x80228718: lh          $t3, 0x2($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X2);
    // 0x8022871C: lh          $t4, 0xC8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC8);
    // 0x80228720: lh          $t6, 0x4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X4);
    // 0x80228724: lh          $t8, 0xCA($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XCA);
    // 0x80228728: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8022872C: lh          $t3, 0x8($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X8);
    // 0x80228730: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80228734: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80228738: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8022873C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80228740: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80228744: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80228748: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8022874C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228750: cvt.d.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.d = CVT_D_W(ctx->f10.u32l);
    // 0x80228754: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x80228758: lh          $t1, 0xCC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XCC);
    // 0x8022875C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80228760: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80228764: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80228768: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8022876C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80228770: div.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f18.d);
    // 0x80228774: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80228778: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8022877C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80228780: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80228784: jal         0x8021B988
    // 0x80228788: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8021B988_5D6E58(rdram, ctx);
        goto after_84;
    // 0x80228788: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_84:
    // 0x8022878C: bnel        $v0, $zero, L_802287A8
    if (ctx->r2 != 0) {
        // 0x80228790: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802287A8;
    }
    goto skip_42;
    // 0x80228790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_42:
    // 0x80228794: lbu         $t4, 0xCF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XCF);
    // 0x80228798: sb          $zero, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = 0;
    // 0x8022879C: addiu       $t5, $t4, 0x5
    ctx->r13 = ADD32(ctx->r12, 0X5);
    // 0x802287A0: sb          $t5, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = ctx->r13;
L_802287A4:
    // 0x802287A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802287A8:
    // 0x802287A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802287AC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802287B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802287B4: jr          $ra
    // 0x802287B8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x802287B8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80221F34_5DD404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221F3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221F40: lhu         $a1, 0xC2($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XC2);
    // 0x80221F44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221F48: jal         0x8021D9A8
    // 0x80221F4C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8021D9A8_5D8E78(rdram, ctx);
        goto after_0;
    // 0x80221F4C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x80221F50: beq         $v0, $zero, L_80221F60
    if (ctx->r2 == 0) {
        // 0x80221F54: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_80221F60;
    }
    // 0x80221F54: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80221F58: jal         0x8003521C
    // 0x80221F5C: lw          $a0, 0xBC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221F5C: lw          $a0, 0xBC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XBC);
    after_1:
L_80221F60:
    // 0x80221F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221F68: jr          $ra
    // 0x80221F6C: nop

    TRACE_RETURN()
    return;
    // 0x80221F6C: nop

;}
RECOMP_FUNC void func_80222094_5DD564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222094: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80222098: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022209C: lbu         $v1, 0x7743($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7743);
    // 0x802220A0: lw          $v0, -0x3A10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A10);
    // 0x802220A4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802220A8: beq         $at, $zero, L_802220B8
    if (ctx->r1 == 0) {
        // 0x802220AC: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_802220B8;
    }
    // 0x802220AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802220B0: jr          $ra
    // 0x802220B4: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x802220B4: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
L_802220B8:
    // 0x802220B8: bne         $v0, $v1, L_802220D0
    if (ctx->r2 != ctx->r3) {
        // 0x802220BC: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_802220D0;
    }
    // 0x802220BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802220C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802220C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802220C8: jr          $ra
    // 0x802220CC: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802220CC: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
L_802220D0:
    // 0x802220D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802220D4: sw          $t7, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r15;
    // 0x802220D8: jr          $ra
    // 0x802220DC: nop

    TRACE_RETURN()
    return;
    // 0x802220DC: nop

;}
RECOMP_FUNC void func_8020F2A4_5CA774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F2AC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F2B0: jal         0x80013AC4
    // 0x8020F2B4: addiu       $a0, $a0, -0x300C
    ctx->r4 = ADD32(ctx->r4, -0X300C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F2B4: addiu       $a0, $a0, -0x300C
    ctx->r4 = ADD32(ctx->r4, -0X300C);
    after_0:
    // 0x8020F2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F2C0: jr          $ra
    // 0x8020F2C4: nop

    TRACE_RETURN()
    return;
    // 0x8020F2C4: nop

;}
RECOMP_FUNC void func_8021B808_5D6CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B808: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8021B80C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021B810: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x8021B814: beq         $t7, $zero, L_8021B860
    if (ctx->r15 == 0) {
        // 0x8021B818: nop
    
            goto L_8021B860;
    }
    // 0x8021B818: nop

    // 0x8021B81C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021B820: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021B824: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B828: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021B82C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B830: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021B834: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021B838: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B83C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8021B840: lwc1        $f18, 0x7C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021B844: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021B848: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8021B84C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8021B850: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021B854: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021B858: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8021B85C: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
L_8021B860:
    // 0x8021B860: jr          $ra
    // 0x8021B864: nop

    TRACE_RETURN()
    return;
    // 0x8021B864: nop

;}
RECOMP_FUNC void func_8020E374_5C9844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E37C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E380: jal         0x80013AC4
    // 0x8020E384: addiu       $a0, $a0, -0x3A54
    ctx->r4 = ADD32(ctx->r4, -0X3A54);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E384: addiu       $a0, $a0, -0x3A54
    ctx->r4 = ADD32(ctx->r4, -0X3A54);
    after_0:
    // 0x8020E388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E390: jr          $ra
    // 0x8020E394: nop

    TRACE_RETURN()
    return;
    // 0x8020E394: nop

;}
RECOMP_FUNC void func_80220FF0_5DC4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220FF0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80220FF4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80220FF8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80220FFC: sw          $t6, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r14;
    // 0x80221000: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x80221004: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80221008: sh          $t7, 0x14E($v1)
    MEM_H(0X14E, ctx->r3) = ctx->r15;
    // 0x8022100C: lw          $t8, 0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C);
    // 0x80221010: sw          $t8, 0x150($v1)
    MEM_W(0X150, ctx->r3) = ctx->r24;
    // 0x80221014: lhu         $t9, 0x7E($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X7E);
    // 0x80221018: sh          $t9, 0x154($v1)
    MEM_H(0X154, ctx->r3) = ctx->r25;
    // 0x8022101C: lbu         $t0, 0x7C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7C);
    // 0x80221020: jr          $ra
    // 0x80221024: sh          $t0, 0x156($v1)
    MEM_H(0X156, ctx->r3) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x80221024: sh          $t0, 0x156($v1)
    MEM_H(0X156, ctx->r3) = ctx->r8;
;}
RECOMP_FUNC void func_8021267C_5CDB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021267C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212680: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212684: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212688: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x8021268C: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x80212690: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x80212694: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x80212698: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021269C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x802126A0: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x802126A4: lhu         $t0, 0xD2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD2);
    // 0x802126A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802126AC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802126B0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802126B4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x802126B8: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x802126BC: lhu         $t4, 0xD4($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD4);
    // 0x802126C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802126C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802126C8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802126CC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x802126D0: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x802126D4: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x802126D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802126DC: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802126E0: nop

    // 0x802126E4: bc1fl       L_80212718
    if (!c1cs) {
        // 0x802126E8: lbu         $t0, 0xDC($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0XDC);
            goto L_80212718;
    }
    goto skip_0;
    // 0x802126E8: lbu         $t0, 0xDC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XDC);
    skip_0:
    // 0x802126EC: lbu         $t8, 0xDC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XDC);
    // 0x802126F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802126F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802126F8: addiu       $t9, $t8, -0x1E
    ctx->r25 = ADD32(ctx->r24, -0X1E);
    // 0x802126FC: sb          $t9, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r25;
    // 0x80212700: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80212704: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80212708: jal         0x8021A26C
    // 0x8021270C: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x8021270C: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    after_0:
    // 0x80212710: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80212714: lbu         $t0, 0xDC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XDC);
L_80212718:
    // 0x80212718: bnel        $t0, $zero, L_80212734
    if (ctx->r8 != 0) {
        // 0x8021271C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_80212734;
    }
    goto skip_1;
    // 0x8021271C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_1:
    // 0x80212720: jal         0x80034ED4
    // 0x80212724: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80212724: nop

    after_1:
    // 0x80212728: b           L_802127DC
    // 0x8021272C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802127DC;
    // 0x8021272C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80212730: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_80212734:
    // 0x80212734: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80212738: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8021273C: nop

    // 0x80212740: bc1fl       L_802127C0
    if (!c1cs) {
        // 0x80212744: lhu         $v0, 0x8A($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X8A);
            goto L_802127C0;
    }
    goto skip_2;
    // 0x80212744: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    skip_2:
    // 0x80212748: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021274C: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80212750: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x80212754: jal         0x80029E08
    // 0x80212758: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80029E08_2AA08(rdram, ctx);
        goto after_2;
    // 0x80212758: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x8021275C: beq         $v0, $zero, L_802127BC
    if (ctx->r2 == 0) {
        // 0x80212760: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802127BC;
    }
    // 0x80212760: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80212764: lwc1        $f18, 0xD8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x80212768: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8021276C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80212770: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80212774: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80212778: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021277C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80212780: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212784: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212788: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8021278C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x80212790: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80212794: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x80212798: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8021279C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x802127A0: nop

    // 0x802127A4: bc1fl       L_802127C0
    if (!c1cs) {
        // 0x802127A8: lhu         $v0, 0x8A($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X8A);
            goto L_802127C0;
    }
    goto skip_3;
    // 0x802127A8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    skip_3:
    // 0x802127AC: jal         0x80034ED4
    // 0x802127B0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x802127B0: nop

    after_3:
    // 0x802127B4: b           L_802127DC
    // 0x802127B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802127DC;
    // 0x802127B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802127BC:
    // 0x802127BC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
L_802127C0:
    // 0x802127C0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802127C4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x802127C8: beq         $v1, $zero, L_802127D8
    if (ctx->r3 == 0) {
        // 0x802127CC: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_802127D8;
    }
    // 0x802127CC: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x802127D0: jal         0x80034ED4
    // 0x802127D4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x802127D4: nop

    after_4:
L_802127D8:
    // 0x802127D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802127DC:
    // 0x802127DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802127E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802127E4: jr          $ra
    // 0x802127E8: nop

    TRACE_RETURN()
    return;
    // 0x802127E8: nop

;}
RECOMP_FUNC void func_80221338_5DC808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022133C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221340: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221344: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x80221348: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8022134C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80221350: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x80221354: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80221358: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8022135C: bnel        $t6, $at, L_80221398
    if (ctx->r14 != ctx->r1) {
        // 0x80221360: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80221398;
    }
    goto skip_0;
    // 0x80221360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80221364: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x80221368: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x8022136C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80221370: bne         $v0, $t8, L_80221380
    if (ctx->r2 != ctx->r24) {
        // 0x80221374: nop
    
            goto L_80221380;
    }
    // 0x80221374: nop

    // 0x80221378: b           L_80221380
    // 0x8022137C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80221380;
    // 0x8022137C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80221380:
    // 0x80221380: jal         0x8003D388
    // 0x80221384: lhu         $a0, 0xA4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XA4);
    func_8003D388_3DF88(rdram, ctx);
        goto after_0;
    // 0x80221384: lhu         $a0, 0xA4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XA4);
    after_0:
    // 0x80221388: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022138C: jal         0x8003521C
    // 0x80221390: addiu       $a0, $a0, 0x13A4
    ctx->r4 = ADD32(ctx->r4, 0X13A4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221390: addiu       $a0, $a0, 0x13A4
    ctx->r4 = ADD32(ctx->r4, 0X13A4);
    after_1:
    // 0x80221394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221398:
    // 0x80221398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022139C: jr          $ra
    // 0x802213A0: nop

    TRACE_RETURN()
    return;
    // 0x802213A0: nop

;}
RECOMP_FUNC void func_80218E7C_5D434C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218E7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80218E80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80218E84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80218E88: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80218E8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80218E90: beq         $t6, $zero, L_80218F14
    if (ctx->r14 == 0) {
        // 0x80218E94: nop
    
            goto L_80218F14;
    }
    // 0x80218E94: nop

    // 0x80218E98: jal         0x80217114
    // 0x80218E9C: nop

    func_80217114_5D25E4(rdram, ctx);
        goto after_0;
    // 0x80218E9C: nop

    after_0:
    // 0x80218EA0: jal         0x80216AB8
    // 0x80218EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80216AB8_5D1F88(rdram, ctx);
        goto after_1;
    // 0x80218EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80218EA8: jal         0x80224B88
    // 0x80218EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80224B88_5E0058(rdram, ctx);
        goto after_2;
    // 0x80218EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80218EB0: jal         0x8021893C
    // 0x80218EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021893C_5D3E0C(rdram, ctx);
        goto after_3;
    // 0x80218EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80218EB8: jal         0x8021C444
    // 0x80218EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021C444_5D7914(rdram, ctx);
        goto after_4;
    // 0x80218EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80218EC0: jal         0x8021B808
    // 0x80218EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B808_5D6CD8(rdram, ctx);
        goto after_5;
    // 0x80218EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80218EC8: jal         0x8021C518
    // 0x80218ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021C518_5D79E8(rdram, ctx);
        goto after_6;
    // 0x80218ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80218ED0: jal         0x8021A978
    // 0x80218ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A978_5D5E48(rdram, ctx);
        goto after_7;
    // 0x80218ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80218ED8: jal         0x80218990
    // 0x80218EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80218990_5D3E60(rdram, ctx);
        goto after_8;
    // 0x80218EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80218EE0: jal         0x8021B610
    // 0x80218EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B610_5D6AE0(rdram, ctx);
        goto after_9;
    // 0x80218EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80218EE8: jal         0x80219F20
    // 0x80218EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80219F20_5D53F0(rdram, ctx);
        goto after_10;
    // 0x80218EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80218EF0: jal         0x80218350
    // 0x80218EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80218350_5D3820(rdram, ctx);
        goto after_11;
    // 0x80218EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80218EF8: jal         0x80218804
    // 0x80218EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80218804_5D3CD4(rdram, ctx);
        goto after_12;
    // 0x80218EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80218F00: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x80218F04: lui         $at, 0xFFFB
    ctx->r1 = S32(0XFFFB << 16);
    // 0x80218F08: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80218F0C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80218F10: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
L_80218F14:
    // 0x80218F14: jal         0x8021A328
    // 0x80218F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A328_5D57F8(rdram, ctx);
        goto after_13;
    // 0x80218F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80218F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80218F20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80218F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80218F28: jr          $ra
    // 0x80218F2C: nop

    TRACE_RETURN()
    return;
    // 0x80218F2C: nop

;}
RECOMP_FUNC void func_80224440_5DF910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224440: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80224444: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80224448: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8022444C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80224450: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80224454: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80224458: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022445C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80224460: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80224464: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80224468: sh          $zero, 0x30F2($t8)
    MEM_H(0X30F2, ctx->r24) = 0;
    // 0x8022446C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80224470: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80224474: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x80224478: sh          $zero, 0x30F4($t1)
    MEM_H(0X30F4, ctx->r9) = 0;
    // 0x8022447C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80224480: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80224484: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x80224488: sh          $zero, 0x30F6($t4)
    MEM_H(0X30F6, ctx->r12) = 0;
    // 0x8022448C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80224490: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80224494: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80224498: jr          $ra
    // 0x8022449C: sh          $zero, 0x30F8($t7)
    MEM_H(0X30F8, ctx->r15) = 0;
    TRACE_RETURN()
    return;
    // 0x8022449C: sh          $zero, 0x30F8($t7)
    MEM_H(0X30F8, ctx->r15) = 0;
;}
RECOMP_FUNC void func_80210438_5CB908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021043C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210440: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210444: jal         0x80013AC4
    // 0x80210448: addiu       $a0, $a0, -0x1FE4
    ctx->r4 = ADD32(ctx->r4, -0X1FE4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210448: addiu       $a0, $a0, -0x1FE4
    ctx->r4 = ADD32(ctx->r4, -0X1FE4);
    after_0:
    // 0x8021044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210454: jr          $ra
    // 0x80210458: nop

    TRACE_RETURN()
    return;
    // 0x80210458: nop

;}
RECOMP_FUNC void func_8022309C_5DE56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022309C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802230A0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802230A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802230A8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802230AC: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x802230B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802230B4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x802230B8: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x802230BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802230C0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x802230C4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802230C8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802230CC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802230D0: addiu       $t6, $t6, -0x7700
    ctx->r14 = ADD32(ctx->r14, -0X7700);
    // 0x802230D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802230D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802230DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802230E0: sw          $t6, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r14;
    // 0x802230E4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802230E8: addiu       $t7, $zero, 0x12F
    ctx->r15 = ADD32(0, 0X12F);
    // 0x802230EC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802230F0: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x802230F4: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x802230F8: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x802230FC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80223100: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x80223104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80223108: jal         0x8021664C
    // 0x8022310C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_0;
    // 0x8022310C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80223110: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223114: lwc1        $f20, -0x554C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X554C);
    // 0x80223118: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8022311C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80223120: swc1        $f20, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f20.u32l;
    // 0x80223124: swc1        $f20, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f20.u32l;
    // 0x80223128: swc1        $f20, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f20.u32l;
    // 0x8022312C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_80223130:
    // 0x80223130: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80223134: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80223138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022313C: jal         0x802237A0
    // 0x80223140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_802237A0_5DEC70(rdram, ctx);
        goto after_1;
    // 0x80223140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80223144: beql        $v0, $zero, L_80223168
    if (ctx->r2 == 0) {
        // 0x80223148: lui         $t8, 0x2A0
        ctx->r24 = S32(0X2A0 << 16);
            goto L_80223168;
    }
    goto skip_0;
    // 0x80223148: lui         $t8, 0x2A0
    ctx->r24 = S32(0X2A0 << 16);
    skip_0:
    // 0x8022314C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80223150: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80223154: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x80223158: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x8022315C: bne         $s1, $s2, L_80223130
    if (ctx->r17 != ctx->r18) {
        // 0x80223160: swc1        $f20, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
            goto L_80223130;
    }
    // 0x80223160: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x80223164: lui         $t8, 0x2A0
    ctx->r24 = S32(0X2A0 << 16);
L_80223168:
    // 0x80223168: ori         $t8, $t8, 0x7E1
    ctx->r24 = ctx->r24 | 0X7E1;
    // 0x8022316C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80223170: sw          $t8, 0x60($s3)
    MEM_W(0X60, ctx->r19) = ctx->r24;
    // 0x80223174: jal         0x8003521C
    // 0x80223178: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80223178: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    after_2:
    // 0x8022317C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80223180: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80223184: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80223188: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8022318C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80223190: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80223194: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80223198: jr          $ra
    // 0x8022319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021C444_5D7914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C444: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8021C448: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8021C44C: bgez        $t7, L_8021C510
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021C450: nop
    
            goto L_8021C510;
    }
    // 0x8021C450: nop

    // 0x8021C454: lbu         $t8, 0x75($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X75);
    // 0x8021C458: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021C45C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021C460: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8021C464: bgez        $t8, L_8021C478
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021C468: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021C478;
    }
    // 0x8021C468: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021C46C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021C470: nop

    // 0x8021C474: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021C478:
    // 0x8021C478: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x8021C47C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8021C480: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8021C484: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021C488: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8021C48C: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x8021C490: lui         $at, 0xC008
    ctx->r1 = S32(0XC008 << 16);
    // 0x8021C494: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8021C498: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x8021C49C: sub.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f8.d - ctx->f18.d;
    // 0x8021C4A0: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8021C4A4: beq         $t0, $zero, L_8021C4E0
    if (ctx->r8 == 0) {
        // 0x8021C4A8: swc1        $f10, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
            goto L_8021C4E0;
    }
    // 0x8021C4A8: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x8021C4AC: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021C4B0: lui         $at, 0xC018
    ctx->r1 = S32(0XC018 << 16);
    // 0x8021C4B4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021C4B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021C4BC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8021C4C0: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x8021C4C4: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021C4C8: nop

    // 0x8021C4CC: bc1f        L_8021C510
    if (!c1cs) {
        // 0x8021C4D0: nop
    
            goto L_8021C510;
    }
    // 0x8021C4D0: nop

    // 0x8021C4D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021C4D8: jr          $ra
    // 0x8021C4DC: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C4DC: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
L_8021C4E0:
    // 0x8021C4E0: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021C4E4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8021C4E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021C4EC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8021C4F0: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8021C4F4: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8021C4F8: nop

    // 0x8021C4FC: bc1f        L_8021C510
    if (!c1cs) {
        // 0x8021C500: nop
    
            goto L_8021C510;
    }
    // 0x8021C500: nop

    // 0x8021C504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021C508: nop

    // 0x8021C50C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
L_8021C510:
    // 0x8021C510: jr          $ra
    // 0x8021C514: nop

    TRACE_RETURN()
    return;
    // 0x8021C514: nop

;}
RECOMP_FUNC void func_80215080_5D0550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215080: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215084: jr          $ra
    // 0x80215088: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215088: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021E6AC_5D9B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E6AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E6B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E6B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021E6B8: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x8021E6BC: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x8021E6C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E6C4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8021E6C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021E6CC: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x8021E6D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021E6D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021E6D8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8021E6DC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E6E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8021E6E4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021E6E8: jalr        $t9
    // 0x8021E6EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021E6EC: nop

    after_0:
    // 0x8021E6F0: bne         $v0, $zero, L_8021E70C
    if (ctx->r2 != 0) {
        // 0x8021E6F4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8021E70C;
    }
    // 0x8021E6F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021E6F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021E6FC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x8021E700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021E704: jalr        $t9
    // 0x8021E708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021E708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_8021E70C:
    // 0x8021E70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E714: jr          $ra
    // 0x8021E718: nop

    TRACE_RETURN()
    return;
    // 0x8021E718: nop

;}
RECOMP_FUNC void func_8020F0F4_5CA5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F0F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F0FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F100: jal         0x80013AC4
    // 0x8020F104: addiu       $a0, $a0, -0x318C
    ctx->r4 = ADD32(ctx->r4, -0X318C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F104: addiu       $a0, $a0, -0x318C
    ctx->r4 = ADD32(ctx->r4, -0X318C);
    after_0:
    // 0x8020F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F10C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F110: jr          $ra
    // 0x8020F114: nop

    TRACE_RETURN()
    return;
    // 0x8020F114: nop

;}
RECOMP_FUNC void func_80210144_5CB614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021014C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210150: jal         0x80013AC4
    // 0x80210154: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210154: addiu       $a0, $a0, -0x2300
    ctx->r4 = ADD32(ctx->r4, -0X2300);
    after_0:
    // 0x80210158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210160: jr          $ra
    // 0x80210164: nop

    TRACE_RETURN()
    return;
    // 0x80210164: nop

;}
RECOMP_FUNC void func_80225624_5E0AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225624: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x80225628: lw          $t6, -0x4BEC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4BEC);
    // 0x8022562C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80225638: beq         $t6, $zero, L_80225684
    if (ctx->r14 == 0) {
        // 0x8022563C: lw          $v0, 0xC0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XC0);
            goto L_80225684;
    }
    // 0x8022563C: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x80225640: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80225644: lw          $t7, -0x4BE8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4BE8);
    // 0x80225648: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022564C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80225650: bnel        $t7, $at, L_8022566C
    if (ctx->r15 != ctx->r1) {
        // 0x80225654: lhu         $t0, 0x6($v0)
        ctx->r8 = MEM_HU(ctx->r2, 0X6);
            goto L_8022566C;
    }
    goto skip_0;
    // 0x80225654: lhu         $t0, 0x6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6);
    skip_0:
    // 0x80225658: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8022565C: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x80225660: b           L_80225674
    // 0x80225664: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
        goto L_80225674;
    // 0x80225664: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x80225668: lhu         $t0, 0x6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6);
L_8022566C:
    // 0x8022566C: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x80225670: sh          $t1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r9;
L_80225674:
    // 0x80225674: jal         0x80035020
    // 0x80225678: nop

    func_80035020_35C20(rdram, ctx);
        goto after_0;
    // 0x80225678: nop

    after_0:
    // 0x8022567C: b           L_802257A4
    // 0x80225680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802257A4;
    // 0x80225680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80225684:
    // 0x80225684: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80225688: addiu       $v1, $v1, 0x4CC0
    ctx->r3 = ADD32(ctx->r3, 0X4CC0);
    // 0x8022568C: lhu         $a2, 0x307A($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X307A);
    // 0x80225690: addiu       $at, $zero, 0x2008
    ctx->r1 = ADD32(0, 0X2008);
    // 0x80225694: andi        $t2, $a2, 0x2008
    ctx->r10 = ctx->r6 & 0X2008;
    // 0x80225698: bnel        $t2, $at, L_802257A4
    if (ctx->r10 != ctx->r1) {
        // 0x8022569C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802257A4;
    }
    goto skip_1;
    // 0x8022569C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802256A0: lhu         $t3, 0x307C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X307C);
    // 0x802256A4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802256A8: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x802256AC: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x802256B0: beql        $t4, $zero, L_80225730
    if (ctx->r12 == 0) {
        // 0x802256B4: andi        $t7, $a2, 0x400
        ctx->r15 = ctx->r6 & 0X400;
            goto L_80225730;
    }
    goto skip_2;
    // 0x802256B4: andi        $t7, $a2, 0x400
    ctx->r15 = ctx->r6 & 0X400;
    skip_2:
    // 0x802256B8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802256BC: lh          $t0, 0xC8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XC8);
    // 0x802256C0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x802256C4: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x802256C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802256CC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802256D0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802256D4: nop

    // 0x802256D8: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x802256DC: sh          $t1, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r9;
    // 0x802256E0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802256E4: lh          $t7, 0xCA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XCA);
    // 0x802256E8: lwc1        $f8, 0xC($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XC);
    // 0x802256EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802256F0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x802256F4: nop

    // 0x802256F8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x802256FC: sh          $t8, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r24;
    // 0x80225700: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80225704: lh          $t4, 0xCC($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XCC);
    // 0x80225708: lwc1        $f16, 0x10($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8022570C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80225710: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80225714: nop

    // 0x80225718: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8022571C: sh          $t5, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r13;
    // 0x80225720: lhu         $t6, 0xE8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE8);
    // 0x80225724: sh          $t6, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r14;
    // 0x80225728: lhu         $a2, 0x7D3A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X7D3A);
    // 0x8022572C: andi        $t7, $a2, 0x400
    ctx->r15 = ctx->r6 & 0X400;
L_80225730:
    // 0x80225730: beql        $t7, $zero, L_8022576C
    if (ctx->r15 == 0) {
        // 0x80225734: andi        $t3, $a2, 0x800
        ctx->r11 = ctx->r6 & 0X800;
            goto L_8022576C;
    }
    goto skip_3;
    // 0x80225734: andi        $t3, $a2, 0x800
    ctx->r11 = ctx->r6 & 0X800;
    skip_3:
    // 0x80225738: lhu         $a1, 0xE8($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XE8);
    // 0x8022573C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225740: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x80225744: andi        $t0, $a1, 0xFFF
    ctx->r8 = ctx->r5 & 0XFFF;
    // 0x80225748: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8022574C: andi        $t9, $a1, 0xF000
    ctx->r25 = ctx->r5 & 0XF000;
    // 0x80225750: or          $t2, $t1, $t9
    ctx->r10 = ctx->r9 | ctx->r25;
    // 0x80225754: sh          $a1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r5;
    // 0x80225758: sh          $t2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r10;
    // 0x8022575C: sh          $t2, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r10;
    // 0x80225760: sh          $t2, -0x7690($at)
    MEM_H(-0X7690, ctx->r1) = ctx->r10;
    // 0x80225764: lhu         $a2, 0x7D3A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X7D3A);
    // 0x80225768: andi        $t3, $a2, 0x800
    ctx->r11 = ctx->r6 & 0X800;
L_8022576C:
    // 0x8022576C: beql        $t3, $zero, L_802257A0
    if (ctx->r11 == 0) {
        // 0x80225770: sw          $v0, 0xC0($a0)
        MEM_W(0XC0, ctx->r4) = ctx->r2;
            goto L_802257A0;
    }
    goto skip_4;
    // 0x80225770: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
    skip_4:
    // 0x80225774: lhu         $a1, 0xE8($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XE8);
    // 0x80225778: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022577C: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x80225780: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80225784: andi        $t5, $a1, 0xF000
    ctx->r13 = ctx->r5 & 0XF000;
    // 0x80225788: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x8022578C: sh          $a1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r5;
    // 0x80225790: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x80225794: sh          $t8, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r24;
    // 0x80225798: sh          $t8, -0x7690($at)
    MEM_H(-0X7690, ctx->r1) = ctx->r24;
    // 0x8022579C: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
L_802257A0:
    // 0x802257A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802257A4:
    // 0x802257A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802257A8: jr          $ra
    // 0x802257AC: nop

    TRACE_RETURN()
    return;
    // 0x802257AC: nop

;}
RECOMP_FUNC void func_80214FD8_5D04A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214FDC: jr          $ra
    // 0x80214FE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020ED04_5CA1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ED04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ED08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ED0C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ED10: jal         0x80013AC4
    // 0x8020ED14: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ED14: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    after_0:
    // 0x8020ED18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ED1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ED20: jr          $ra
    // 0x8020ED24: nop

    TRACE_RETURN()
    return;
    // 0x8020ED24: nop

;}
RECOMP_FUNC void func_80215000_5D04D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215000: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215004: jr          $ra
    // 0x80215008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020FE08_5CB2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE10: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FE14: jal         0x80013AC4
    // 0x8020FE18: addiu       $a0, $a0, -0x269C
    ctx->r4 = ADD32(ctx->r4, -0X269C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FE18: addiu       $a0, $a0, -0x269C
    ctx->r4 = ADD32(ctx->r4, -0X269C);
    after_0:
    // 0x8020FE1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE24: jr          $ra
    // 0x8020FE28: nop

    TRACE_RETURN()
    return;
    // 0x8020FE28: nop

;}
RECOMP_FUNC void func_8020F238_5CA708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F240: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F244: jal         0x80013AC4
    // 0x8020F248: addiu       $a0, $a0, -0x3058
    ctx->r4 = ADD32(ctx->r4, -0X3058);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F248: addiu       $a0, $a0, -0x3058
    ctx->r4 = ADD32(ctx->r4, -0X3058);
    after_0:
    // 0x8020F24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F254: jr          $ra
    // 0x8020F258: nop

    TRACE_RETURN()
    return;
    // 0x8020F258: nop

;}
RECOMP_FUNC void func_802215B8_5DCA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802215B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802215BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802215C0: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x802215C4: jal         0x80220FF0
    // 0x802215C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_0;
    // 0x802215C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802215CC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802215D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802215D4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802215D8: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x802215DC: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x802215E0: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x802215E4: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    // 0x802215E8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802215EC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x802215F0: lui         $t8, 0xD
    ctx->r24 = S32(0XD << 16);
    // 0x802215F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802215F8: sw          $a2, -0x764($at)
    MEM_W(-0X764, ctx->r1) = ctx->r6;
    // 0x802215FC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80221600: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80221604: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, 0X1460);
    // 0x80221608: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8022160C: lw          $t8, -0x764($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X764);
    // 0x80221610: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221614: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80221618: sw          $t9, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r25;
    // 0x8022161C: jal         0x8003521C
    // 0x80221620: sw          $t8, 0xEC($a2)
    MEM_W(0XEC, ctx->r6) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221620: sw          $t8, 0xEC($a2)
    MEM_W(0XEC, ctx->r6) = ctx->r24;
    after_1:
    // 0x80221624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022162C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80221630: jr          $ra
    // 0x80221634: nop

    TRACE_RETURN()
    return;
    // 0x80221634: nop

;}
RECOMP_FUNC void func_80222B30_5DE000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222B38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80222B3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80222B40: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x80222B44: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80222B48: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80222B4C: bne         $t8, $zero, L_80222B5C
    if (ctx->r24 != 0) {
        // 0x80222B50: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_80222B5C;
    }
    // 0x80222B50: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x80222B54: jal         0x8003521C
    // 0x80222B58: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80222B58: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    after_0:
L_80222B5C:
    // 0x80222B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222B64: jr          $ra
    // 0x80222B68: nop

    TRACE_RETURN()
    return;
    // 0x80222B68: nop

;}
RECOMP_FUNC void func_8020F280_5CA750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F288: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F28C: jal         0x80013AC4
    // 0x8020F290: addiu       $a0, $a0, -0x3038
    ctx->r4 = ADD32(ctx->r4, -0X3038);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F290: addiu       $a0, $a0, -0x3038
    ctx->r4 = ADD32(ctx->r4, -0X3038);
    after_0:
    // 0x8020F294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F29C: jr          $ra
    // 0x8020F2A0: nop

    TRACE_RETURN()
    return;
    // 0x8020F2A0: nop

;}
RECOMP_FUNC void func_8021BC04_5D70D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BC04: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021BC08: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021BC0C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021BC10: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8021BC14: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8021BC18: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8021BC1C: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8021BC20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021BC24: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8021BC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BC2C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021BC30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021BC34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021BC38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8021BC3C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021BC40: beq         $t9, $zero, L_8021BC90
    if (ctx->r25 == 0) {
        // 0x8021BC44: lhu         $t7, -0x5232($t7)
        ctx->r15 = MEM_HU(ctx->r15, -0X5232);
            goto L_8021BC90;
    }
    // 0x8021BC44: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x8021BC48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BC4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021BC50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021BC54: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021BC58: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021BC5C: nop

    // 0x8021BC60: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021BC64: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021BC68: nop

    // 0x8021BC6C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021BC70: bne         $t9, $zero, L_8021BC88
    if (ctx->r25 != 0) {
        // 0x8021BC74: nop
    
            goto L_8021BC88;
    }
    // 0x8021BC74: nop

    // 0x8021BC78: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8021BC7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BC80: b           L_8021BCA0
    // 0x8021BC84: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021BCA0;
    // 0x8021BC84: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021BC88:
    // 0x8021BC88: b           L_8021BCA0
    // 0x8021BC8C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021BCA0;
    // 0x8021BC8C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_8021BC90:
    // 0x8021BC90: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8021BC94: nop

    // 0x8021BC98: bltz        $t9, L_8021BC88
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021BC9C: nop
    
            goto L_8021BC88;
    }
    // 0x8021BC9C: nop

L_8021BCA0:
    // 0x8021BCA0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x8021BCA4: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021BCA8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8021BCAC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021BCB0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8021BCB4: mflo        $t1
    ctx->r9 = lo;
    // 0x8021BCB8: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8021BCBC: jal         0x80003EA0
    // 0x8021BCC0: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8021BCC0: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_0:
    // 0x8021BCC4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BCC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8021BCCC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021BCD0: swc1        $f8, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f8.u32l;
    // 0x8021BCD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021BCD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BCDC: jr          $ra
    // 0x8021BCE0: nop

    TRACE_RETURN()
    return;
    // 0x8021BCE0: nop

;}
