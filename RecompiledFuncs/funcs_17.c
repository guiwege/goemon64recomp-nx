#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800370E8_37CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800370E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800370EC: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x800370F0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800370F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800370F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800370FC: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80037100: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80037104: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80037108: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8003710C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80037110: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037114: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80037118: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8003711C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80037120: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x80037124: sh          $t8, -0x5012($at)
    MEM_H(-0X5012, ctx->r1) = ctx->r24;
    // 0x80037128: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8003712C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80037130: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037134: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80037138: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8003713C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80037140: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80037144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037148: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8003714C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80037150: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80037154: nop

    // 0x80037158: sh          $t2, -0x5010($at)
    MEM_H(-0X5010, ctx->r1) = ctx->r10;
    // 0x8003715C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80037160: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80037164: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037168: lwc1        $f16, 0x10($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X10);
    // 0x8003716C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80037170: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80037174: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80037178: nop

    // 0x8003717C: sh          $t6, -0x500E($at)
    MEM_H(-0X500E, ctx->r1) = ctx->r14;
    // 0x80037180: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x80037184: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80037188: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003718C: lhu         $t9, 0x94($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X94);
    // 0x80037190: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80037194: sh          $t9, -0x500C($at)
    MEM_H(-0X500C, ctx->r1) = ctx->r25;
    // 0x80037198: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8003719C: jal         0x801FA4FC
    // 0x800371A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801FA4FC_5B640C(rdram, ctx);
        goto after_0;
    // 0x800371A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800371A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800371A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800371AC: jr          $ra
    // 0x800371B0: nop

    TRACE_RETURN()
    return;
    // 0x800371B0: nop

;}
RECOMP_FUNC void func_8000C3EC_CFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C3EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C3F0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C3F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C3F8: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C3FC: beq         $v0, $zero, L_8000C428
    if (ctx->r2 == 0) {
        // 0x8000C400: nop
    
            goto L_8000C428;
    }
    // 0x8000C400: nop

    // 0x8000C404: lh          $t7, 0x74($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X74);
    // 0x8000C408: lh          $t8, 0x76($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X76);
    // 0x8000C40C: lh          $t0, 0x72($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X72);
    // 0x8000C410: sh          $zero, 0x6E($v0)
    MEM_H(0X6E, ctx->r2) = 0;
    // 0x8000C414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C418: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000C41C: sh          $t9, 0x74($v0)
    MEM_H(0X74, ctx->r2) = ctx->r25;
    // 0x8000C420: sh          $zero, 0x6C($v0)
    MEM_H(0X6C, ctx->r2) = 0;
    // 0x8000C424: sh          $t1, 0x72($v0)
    MEM_H(0X72, ctx->r2) = ctx->r9;
L_8000C428:
    // 0x8000C428: jr          $ra
    // 0x8000C42C: nop

    TRACE_RETURN()
    return;
    // 0x8000C42C: nop

;}
RECOMP_FUNC void func_800144E8_150E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800144E8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800144EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800144F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800144F4: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800144F8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x800144FC: jal         0x800145B4
    // 0x80014500: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_800145B4_151B4(rdram, ctx);
        goto after_0;
    // 0x80014500: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80014504: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80014508: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8001450C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80014510: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x80014514: bne         $t6, $at, L_80014568
    if (ctx->r14 != ctx->r1) {
        // 0x80014518: nop
    
            goto L_80014568;
    }
    // 0x80014518: nop

    // 0x8001451C: lbu         $t7, 0x1($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X1);
    // 0x80014520: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x80014524: bne         $t7, $at, L_80014568
    if (ctx->r15 != ctx->r1) {
        // 0x80014528: nop
    
            goto L_80014568;
    }
    // 0x80014528: nop

    // 0x8001452C: lbu         $t8, 0x2($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X2);
    // 0x80014530: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80014534: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80014538: bne         $t8, $at, L_80014568
    if (ctx->r24 != ctx->r1) {
        // 0x8001453C: nop
    
            goto L_80014568;
    }
    // 0x8001453C: nop

    // 0x80014540: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80014544: jal         0x80014D70
    // 0x80014548: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_80014D70_15970(rdram, ctx);
        goto after_1;
    // 0x80014548: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8001454C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80014550: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014554: jal         0x80014DD8
    // 0x80014558: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_80014DD8_159D8(rdram, ctx);
        goto after_2;
    // 0x80014558: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8001455C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80014560: b           L_80014594
    // 0x80014564: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
        goto L_80014594;
    // 0x80014564: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
L_80014568:
    // 0x80014568: beq         $v0, $a3, L_80014594
    if (ctx->r2 == ctx->r7) {
        // 0x8001456C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80014594;
    }
    // 0x8001456C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80014570: subu        $a0, $a1, $a3
    ctx->r4 = SUB32(ctx->r5, ctx->r7);
    // 0x80014574: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80014578:
    // 0x80014578: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8001457C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80014580: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80014584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80014588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001458C: bne         $at, $zero, L_80014578
    if (ctx->r1 != 0) {
        // 0x80014590: sb          $t1, -0x1($s0)
        MEM_B(-0X1, ctx->r16) = ctx->r9;
            goto L_80014578;
    }
    // 0x80014590: sb          $t1, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r9;
L_80014594:
    // 0x80014594: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80014598: jal         0x80040620
    // 0x8001459C: subu        $a1, $s0, $a0
    ctx->r5 = SUB32(ctx->r16, ctx->r4);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x8001459C: subu        $a1, $s0, $a0
    ctx->r5 = SUB32(ctx->r16, ctx->r4);
    after_3:
    // 0x800145A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800145A4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800145A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800145AC: jr          $ra
    // 0x800145B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800145B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80006DF0_79F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006DF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006DF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80006DF8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80006DFC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80006E00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80006E04: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80006E08: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80006E0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80006E10: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80006E14: sw          $zero, 0x2AC($a0)
    MEM_W(0X2AC, ctx->r4) = 0;
    // 0x80006E18: sw          $zero, 0x2B0($a0)
    MEM_W(0X2B0, ctx->r4) = 0;
    // 0x80006E1C: sw          $zero, 0x298($a0)
    MEM_W(0X298, ctx->r4) = 0;
    // 0x80006E20: sw          $zero, 0x2B4($a0)
    MEM_W(0X2B4, ctx->r4) = 0;
    // 0x80006E24: sw          $zero, 0x29C($a0)
    MEM_W(0X29C, ctx->r4) = 0;
    // 0x80006E28: sw          $zero, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = 0;
    // 0x80006E2C: sw          $zero, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = 0;
    // 0x80006E30: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
    // 0x80006E34: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80006E38: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x80006E3C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006E40: sw          $zero, 0x7854($at)
    MEM_W(0X7854, ctx->r1) = 0;
    // 0x80006E44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80006E48: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006E4C: addiu       $s1, $a0, 0x40
    ctx->r17 = ADD32(ctx->r4, 0X40);
    // 0x80006E50: sb          $zero, 0x7858($at)
    MEM_B(0X7858, ctx->r1) = 0;
    // 0x80006E54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80006E58: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x80006E5C: jal         0x8003FEC0
    // 0x80006E60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80006E60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80006E64: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x80006E68: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x80006E6C: jal         0x8003FEC0
    // 0x80006E70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80006E70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80006E74: addiu       $a0, $s0, 0xB0
    ctx->r4 = ADD32(ctx->r16, 0XB0);
    // 0x80006E78: addiu       $a1, $s0, 0xC8
    ctx->r5 = ADD32(ctx->r16, 0XC8);
    // 0x80006E7C: jal         0x8003FEC0
    // 0x80006E80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80006E80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80006E84: jal         0x80042180
    // 0x80006E88: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_3;
    // 0x80006E88: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_3:
    // 0x80006E8C: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x80006E90: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80006E94: addiu       $t0, $t0, -0x6B00
    ctx->r8 = ADD32(ctx->r8, -0X6B00);
    // 0x80006E98: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80006E9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80006EA0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80006EA4: jal         0x800424E0
    // 0x80006EA8: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    osViSetMode_recomp(rdram, ctx);
        goto after_4;
    // 0x80006EA8: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_4:
    // 0x80006EAC: jal         0x80041770
    // 0x80006EB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_5;
    // 0x80006EB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80006EB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80006EB8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80006EBC: jal         0x80041B20
    // 0x80006EC0: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80006EC0: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_6:
    // 0x80006EC4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80006EC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80006ECC: jal         0x80041B20
    // 0x80006ED0: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x80006ED0: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_7:
    // 0x80006ED4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80006ED8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80006EDC: jal         0x80041B20
    // 0x80006EE0: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x80006EE0: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_8:
    // 0x80006EE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80006EE8: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x80006EEC: jal         0x80042550
    // 0x80006EF0: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    osViSetEvent_recomp(rdram, ctx);
        goto after_9;
    // 0x80006EF0: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    after_9:
    // 0x80006EF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80006EF8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80006EFC: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x80006F00: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80006F04: addiu       $a2, $a2, 0x702C
    ctx->r6 = ADD32(ctx->r6, 0X702C);
    // 0x80006F08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80006F0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80006F10: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80006F14: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80006F18: jal         0x8003F9B0
    // 0x80006F1C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osCreateThread_recomp(rdram, ctx);
        goto after_10;
    // 0x80006F1C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_10:
    // 0x80006F20: jal         0x8003FB00
    // 0x80006F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_11;
    // 0x80006F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80006F28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80006F2C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80006F30: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80006F34: jr          $ra
    // 0x80006F38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80006F38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80010C6C_1186C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010C70: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80010C74: or          $t6, $a3, $zero
    ctx->r14 = ctx->r7 | 0;
    // 0x80010C78: addiu       $a3, $t6, -0x20
    ctx->r7 = ADD32(ctx->r14, -0X20);
    // 0x80010C7C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80010C80: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80010C84: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80010C88: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x80010C8C: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80010C90: lw          $t0, 0x3920($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3920);
    // 0x80010C94: lw          $v1, 0x391C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X391C);
    // 0x80010C98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80010C9C: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80010CA0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010CA4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80010CA8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80010CAC: lui         $t8, 0xFD48
    ctx->r24 = S32(0XFD48 << 16);
    // 0x80010CB0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80010CB4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80010CB8: ori         $t8, $t8, 0x3
    ctx->r24 = ctx->r24 | 0X3;
    // 0x80010CBC: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80010CC0: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80010CC4: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x80010CC8: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80010CCC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80010CD0: addiu       $t7, $t7, 0x29A0
    ctx->r15 = ADD32(ctx->r15, 0X29A0);
    // 0x80010CD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80010CD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010CDC: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x80010CE0: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80010CE4: lui         $t6, 0x705
    ctx->r14 = S32(0X705 << 16);
    // 0x80010CE8: lui         $t9, 0xF548
    ctx->r25 = S32(0XF548 << 16);
    // 0x80010CEC: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80010CF0: ori         $t6, $t6, 0x140
    ctx->r14 = ctx->r14 | 0X140;
    // 0x80010CF4: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80010CF8: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80010CFC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010D00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80010D04: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x80010D08: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80010D0C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010D10: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80010D14: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80010D18: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80010D1C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80010D20: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80010D24: ori         $t6, $t6, 0xE02C
    ctx->r14 = ctx->r14 | 0XE02C;
    // 0x80010D28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010D2C: lui         $t9, 0xF400
    ctx->r25 = S32(0XF400 << 16);
    // 0x80010D30: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80010D34: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x80010D38: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x80010D3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010D40: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x80010D44: lui         $t7, 0xF540
    ctx->r15 = S32(0XF540 << 16);
    // 0x80010D48: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80010D4C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80010D50: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x80010D54: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80010D58: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80010D5C: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80010D60: sll         $t6, $t9, 20
    ctx->r14 = S32(ctx->r25 << 20);
    // 0x80010D64: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80010D68: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80010D6C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80010D70: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80010D74: ori         $t6, $t9, 0x140
    ctx->r14 = ctx->r25 | 0X140;
    // 0x80010D78: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x80010D7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010D80: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x80010D84: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x80010D88: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80010D8C: addu        $t9, $a3, $v1
    ctx->r25 = ADD32(ctx->r7, ctx->r3);
    // 0x80010D90: ori         $t8, $t8, 0xC02C
    ctx->r24 = ctx->r24 | 0XC02C;
    // 0x80010D94: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80010D98: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80010D9C: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x80010DA0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80010DA4: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80010DA8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80010DAC: addu        $t6, $a2, $t0
    ctx->r14 = ADD32(ctx->r6, ctx->r8);
    // 0x80010DB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80010DB4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80010DB8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80010DBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010DC0: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x80010DC4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80010DC8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80010DCC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80010DD0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80010DD4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80010DD8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80010DDC: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80010DE0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80010DE4: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x80010DE8: div         $zero, $t7, $v1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r3)));
    // 0x80010DEC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80010DF0: mflo        $t9
    ctx->r25 = lo;
    // 0x80010DF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010DF8: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80010DFC: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x80010E00: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80010E04: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010E08: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80010E0C: or          $t6, $t9, $zero
    ctx->r14 = ctx->r25 | 0;
    // 0x80010E10: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80010E14: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x80010E18: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80010E1C: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80010E20: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010E24: bne         $v1, $zero, L_80010E30
    if (ctx->r3 != 0) {
        // 0x80010E28: nop
    
            goto L_80010E30;
    }
    // 0x80010E28: nop

    // 0x80010E2C: break       7
    do_break(2147552812);
L_80010E30:
    // 0x80010E30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010E34: bne         $v1, $at, L_80010E48
    if (ctx->r3 != ctx->r1) {
        // 0x80010E38: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010E48;
    }
    // 0x80010E38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010E3C: bne         $t7, $at, L_80010E48
    if (ctx->r15 != ctx->r1) {
        // 0x80010E40: nop
    
            goto L_80010E48;
    }
    // 0x80010E40: nop

    // 0x80010E44: break       6
    do_break(2147552836);
L_80010E48:
    // 0x80010E48: addiu       $t7, $zero, 0x3000
    ctx->r15 = ADD32(0, 0X3000);
    // 0x80010E4C: div         $zero, $t7, $t0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r8)));
    // 0x80010E50: mflo        $t9
    ctx->r25 = lo;
    // 0x80010E54: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80010E58: bne         $t0, $zero, L_80010E64
    if (ctx->r8 != 0) {
        // 0x80010E5C: nop
    
            goto L_80010E64;
    }
    // 0x80010E5C: nop

    // 0x80010E60: break       7
    do_break(2147552864);
L_80010E64:
    // 0x80010E64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010E68: bne         $t0, $at, L_80010E7C
    if (ctx->r8 != ctx->r1) {
        // 0x80010E6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010E7C;
    }
    // 0x80010E6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010E70: bne         $t7, $at, L_80010E7C
    if (ctx->r15 != ctx->r1) {
        // 0x80010E74: nop
    
            goto L_80010E7C;
    }
    // 0x80010E74: nop

    // 0x80010E78: break       6
    do_break(2147552888);
L_80010E7C:
    // 0x80010E7C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80010E80: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x80010E84: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80010E88: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80010E8C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80010E90: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80010E94: jr          $ra
    // 0x80010E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80010E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800079C0_85C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800079C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800079C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800079C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800079CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800079D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800079D4: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x800079D8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800079DC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800079E0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x800079E4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800079E8: addiu       $s0, $s0, 0x29D8
    ctx->r16 = ADD32(ctx->r16, 0X29D8);
    // 0x800079EC: beq         $t7, $zero, L_80007A00
    if (ctx->r15 == 0) {
        // 0x800079F0: lw          $v1, 0x14($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X14);
            goto L_80007A00;
    }
    // 0x800079F0: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800079F4: jal         0x80007C90
    // 0x800079F8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_80007C90_8890(rdram, ctx);
        goto after_0;
    // 0x800079F8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800079FC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_80007A00:
    // 0x80007A00: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x80007A04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80007A08: lui         $a0, 0xC
    ctx->r4 = S32(0XC << 16);
    // 0x80007A0C: andi        $t8, $v0, 0x18
    ctx->r24 = ctx->r2 & 0X18;
    // 0x80007A10: beq         $t8, $zero, L_80007A2C
    if (ctx->r24 == 0) {
        // 0x80007A14: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80007A2C;
    }
    // 0x80007A14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80007A18: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80007A1C: beq         $t8, $at, L_80007B08
    if (ctx->r24 == ctx->r1) {
        // 0x80007A20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80007B08;
    }
    // 0x80007A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80007A24: b           L_80007B24
    // 0x80007A28: nop

        goto L_80007B24;
    // 0x80007A28: nop

L_80007A2C:
    // 0x80007A2C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
L_80007A30:
    // 0x80007A30: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80007A34: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x80007A38: addu        $a3, $t1, $a0
    ctx->r7 = ADD32(ctx->r9, ctx->r4);
    // 0x80007A3C: lhu         $a1, 0x5F18($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X5F18);
    // 0x80007A40: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80007A44: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x80007A48: beq         $a1, $zero, L_80007A58
    if (ctx->r5 == 0) {
        // 0x80007A4C: addu        $t4, $t3, $a0
        ctx->r12 = ADD32(ctx->r11, ctx->r4);
            goto L_80007A58;
    }
    // 0x80007A4C: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x80007A50: lw          $t5, 0x5F38($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X5F38);
    // 0x80007A54: bne         $s1, $t5, L_80007AC4
    if (ctx->r17 != ctx->r13) {
        // 0x80007A58: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80007AC4;
    }
L_80007A58:
    // 0x80007A58: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80007A5C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80007A60: addu        $t0, $t7, $a0
    ctx->r8 = ADD32(ctx->r15, ctx->r4);
    // 0x80007A64: lw          $t8, 0x5F38($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X5F38);
    // 0x80007A68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80007A6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80007A70: beql        $s1, $t8, L_80007AA0
    if (ctx->r17 == ctx->r24) {
        // 0x80007A74: addiu       $t9, $a1, 0x1
        ctx->r25 = ADD32(ctx->r5, 0X1);
            goto L_80007AA0;
    }
    goto skip_0;
    // 0x80007A74: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x80007A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80007A7C: sh          $v1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r3;
    // 0x80007A80: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80007A84: jal         0x80007970
    // 0x80007A88: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80007970_8570(rdram, ctx);
        goto after_1;
    // 0x80007A88: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x80007A8C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80007A90: lh          $v1, 0x46($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X46);
    // 0x80007A94: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80007A98: lhu         $a1, 0x5F18($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X5F18);
    // 0x80007A9C: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
L_80007AA0:
    // 0x80007AA0: sh          $t9, 0x5F18($a3)
    MEM_H(0X5F18, ctx->r7) = ctx->r25;
    // 0x80007AA4: sw          $s1, 0x5F38($t0)
    MEM_W(0X5F38, ctx->r8) = ctx->r17;
    // 0x80007AA8: lhu         $t1, 0x18($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X18);
    // 0x80007AAC: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
    // 0x80007AB0: sw          $s1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r17;
    // 0x80007AB4: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x80007AB8: sh          $t2, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r10;
    // 0x80007ABC: b           L_80007B24
    // 0x80007AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80007B24;
    // 0x80007AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80007AC4:
    // 0x80007AC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80007AC8: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x80007ACC: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80007AD0: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80007AD4: bne         $at, $zero, L_80007A30
    if (ctx->r1 != 0) {
        // 0x80007AD8: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_80007A30;
    }
    // 0x80007AD8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80007ADC: lui         $v1, 0x8015
    ctx->r3 = S32(0X8015 << 16);
    // 0x80007AE0: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80007AE4: lhu         $t5, 0x5F36($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X5F36);
    // 0x80007AE8: sw          $s1, 0x5F74($v1)
    MEM_W(0X5F74, ctx->r3) = ctx->r17;
    // 0x80007AEC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80007AF0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80007AF4: sh          $t6, 0x5F36($v1)
    MEM_H(0X5F36, ctx->r3) = ctx->r14;
    // 0x80007AF8: sb          $t7, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r15;
    // 0x80007AFC: sw          $s1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r17;
    // 0x80007B00: b           L_80007B24
    // 0x80007B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80007B24;
    // 0x80007B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80007B08:
    // 0x80007B08: lhu         $t8, 0x18($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X18);
    // 0x80007B0C: sb          $zero, 0xC($s2)
    MEM_B(0XC, ctx->r18) = 0;
    // 0x80007B10: sw          $s1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r17;
    // 0x80007B14: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x80007B18: sh          $t9, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r25;
    // 0x80007B1C: b           L_80007B24
    // 0x80007B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80007B24;
    // 0x80007B20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80007B24:
    // 0x80007B24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80007B28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007B2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007B30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007B34: jr          $ra
    // 0x80007B38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80007B38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80039E9C_3AA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039EA0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039EA4: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x80039EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039EAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80039EB0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80039EB4: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x80039EB8: addiu       $t8, $t8, 0xC28
    ctx->r24 = ADD32(ctx->r24, 0XC28);
    // 0x80039EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80039EC0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80039EC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80039EC8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80039ECC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80039ED0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80039ED4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80039ED8: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80039EDC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80039EE0: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80039EE4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80039EE8: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    // 0x80039EEC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80039EF0: addiu       $t6, $t6, 0xA68
    ctx->r14 = ADD32(ctx->r14, 0XA68);
    // 0x80039EF4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80039EF8: lbu         $t2, 0xE($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XE);
    // 0x80039EFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80039F00: beql        $t2, $zero, L_80039F30
    if (ctx->r10 == 0) {
        // 0x80039F04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80039F30;
    }
    goto skip_0;
    // 0x80039F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80039F08: sb          $t3, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r11;
    // 0x80039F0C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80039F10: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x80039F14: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    // 0x80039F18: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80039F1C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80039F20: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80039F24: jal         0x800486E0
    // 0x80039F28: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    alSynSetVol(rdram, ctx);
        goto after_0;
    // 0x80039F28: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_0:
    // 0x80039F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039F30:
    // 0x80039F30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039F34: jr          $ra
    // 0x80039F38: nop

    TRACE_RETURN()
    return;
    // 0x80039F38: nop

;}
RECOMP_FUNC void func_80026040_26C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026040: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x80026044: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80026048: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8002604C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80026050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80026054: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80026058: beq         $t7, $zero, L_80026074
    if (ctx->r15 == 0) {
        // 0x8002605C: nop
    
            goto L_80026074;
    }
    // 0x8002605C: nop

    // 0x80026060: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80026064: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x80026068: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8002606C: b           L_80026074
    // 0x80026070: lh          $v1, -0x524E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X524E);
        goto L_80026074;
    // 0x80026070: lh          $v1, -0x524E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X524E);
L_80026074:
    // 0x80026074: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80026078: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8002607C: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x80026080: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80026084: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x80026088: bne         $at, $zero, L_8002610C
    if (ctx->r1 != 0) {
        // 0x8002608C: lw          $a0, 0x40($t1)
        ctx->r4 = MEM_W(ctx->r9, 0X40);
            goto L_8002610C;
    }
    // 0x8002608C: lw          $a0, 0x40($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X40);
    // 0x80026090: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80026094: addiu       $t0, $a3, 0x1
    ctx->r8 = ADD32(ctx->r7, 0X1);
    // 0x80026098: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
L_8002609C:
    // 0x8002609C: bne         $at, $zero, L_800260FC
    if (ctx->r1 != 0) {
        // 0x800260A0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_800260FC;
    }
    // 0x800260A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800260A4: addiu       $t5, $a3, 0x2
    ctx->r13 = ADD32(ctx->r7, 0X2);
L_800260A8:
    // 0x800260A8: multu       $a1, $t5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800260AC: lw          $t2, 0x58($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X58);
    // 0x800260B0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x800260B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800260B8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800260BC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800260C0: mflo        $t6
    ctx->r14 = lo;
    // 0x800260C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800260C8: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x800260CC: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800260D0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800260D4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800260D8: nop

    // 0x800260DC: sh          $t1, -0xE($a0)
    MEM_H(-0XE, ctx->r4) = ctx->r9;
    // 0x800260E0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x800260E4: addiu       $t0, $a3, 0x1
    ctx->r8 = ADD32(ctx->r7, 0X1);
    // 0x800260E8: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800260EC: bnel        $at, $zero, L_800260A8
    if (ctx->r1 != 0) {
        // 0x800260F0: addiu       $t5, $a3, 0x2
        ctx->r13 = ADD32(ctx->r7, 0X2);
            goto L_800260A8;
    }
    goto skip_0;
    // 0x800260F0: addiu       $t5, $a3, 0x2
    ctx->r13 = ADD32(ctx->r7, 0X2);
    skip_0:
    // 0x800260F4: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x800260F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800260FC:
    // 0x800260FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80026100: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80026104: bnel        $at, $zero, L_8002609C
    if (ctx->r1 != 0) {
        // 0x80026108: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_8002609C;
    }
    goto skip_1;
    // 0x80026108: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    skip_1:
L_8002610C:
    // 0x8002610C: jr          $ra
    // 0x80026110: nop

    TRACE_RETURN()
    return;
    // 0x80026110: nop

;}
RECOMP_FUNC void func_800148F0_154F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800148F0: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x800148F4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800148F8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x800148FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80014900: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80014904: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80014908: beq         $t1, $zero, L_80014948
    if (ctx->r9 == 0) {
        // 0x8001490C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80014948;
    }
    // 0x8001490C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80014910: addiu       $t3, $a1, 0x4F
    ctx->r11 = ADD32(ctx->r5, 0X4F);
    // 0x80014914: srl         $t6, $t3, 6
    ctx->r14 = S32(U32(ctx->r11) >> 6);
    // 0x80014918: sll         $t3, $t6, 6
    ctx->r11 = S32(ctx->r14 << 6);
    // 0x8001491C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
L_80014920:
    // 0x80014920: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x80014924: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x80014928: sltu        $at, $t9, $t3
    ctx->r1 = ctx->r25 < ctx->r11 ? 1 : 0;
    // 0x8001492C: beql        $at, $zero, L_8001494C
    if (ctx->r1 == 0) {
        // 0x80014930: addiu       $t3, $a1, 0x4F
        ctx->r11 = ADD32(ctx->r5, 0X4F);
            goto L_8001494C;
    }
    goto skip_0;
    // 0x80014930: addiu       $t3, $a1, 0x4F
    ctx->r11 = ADD32(ctx->r5, 0X4F);
    skip_0:
    // 0x80014934: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80014938: addiu       $a2, $t0, 0x10
    ctx->r6 = ADD32(ctx->r8, 0X10);
    // 0x8001493C: lw          $t0, 0x8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X8);
    // 0x80014940: bnel        $t0, $zero, L_80014920
    if (ctx->r8 != 0) {
        // 0x80014944: lw          $t8, 0x0($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X0);
            goto L_80014920;
    }
    goto skip_1;
    // 0x80014944: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    skip_1:
L_80014948:
    // 0x80014948: addiu       $t3, $a1, 0x4F
    ctx->r11 = ADD32(ctx->r5, 0X4F);
L_8001494C:
    // 0x8001494C: srl         $t4, $t3, 6
    ctx->r12 = S32(U32(ctx->r11) >> 6);
    // 0x80014950: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x80014954: bne         $t0, $zero, L_8001499C
    if (ctx->r8 != 0) {
        // 0x80014958: or          $t3, $t5, $zero
        ctx->r11 = ctx->r13 | 0;
            goto L_8001499C;
    }
    // 0x80014958: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x8001495C: addu        $t0, $a2, $t5
    ctx->r8 = ADD32(ctx->r6, ctx->r13);
    // 0x80014960: beq         $t1, $zero, L_80014970
    if (ctx->r9 == 0) {
        // 0x80014964: addiu       $t0, $t0, -0x10
        ctx->r8 = ADD32(ctx->r8, -0X10);
            goto L_80014970;
    }
    // 0x80014964: addiu       $t0, $t0, -0x10
    ctx->r8 = ADD32(ctx->r8, -0X10);
    // 0x80014968: b           L_80014974
    // 0x8001496C: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
        goto L_80014974;
    // 0x8001496C: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
L_80014970:
    // 0x80014970: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80014974:
    // 0x80014974: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x80014978: subu        $t7, $t6, $a2
    ctx->r15 = SUB32(ctx->r14, ctx->r6);
    // 0x8001497C: sltu        $at, $t7, $t3
    ctx->r1 = ctx->r15 < ctx->r11 ? 1 : 0;
    // 0x80014980: beql        $at, $zero, L_80014994
    if (ctx->r1 == 0) {
        // 0x80014984: sw          $a2, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r6;
            goto L_80014994;
    }
    goto skip_2;
    // 0x80014984: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
    skip_2:
    // 0x80014988: jr          $ra
    // 0x8001498C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8001498C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80014990: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
L_80014994:
    // 0x80014994: b           L_800149B0
    // 0x80014998: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
        goto L_800149B0;
    // 0x80014998: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
L_8001499C:
    // 0x8001499C: addu        $v0, $a2, $t3
    ctx->r2 = ADD32(ctx->r6, ctx->r11);
    // 0x800149A0: addiu       $t0, $v0, -0x10
    ctx->r8 = ADD32(ctx->r2, -0X10);
    // 0x800149A4: sw          $a2, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r6;
    // 0x800149A8: sw          $t3, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r11;
    // 0x800149AC: sw          $t0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r8;
L_800149B0:
    // 0x800149B0: bne         $a3, $zero, L_800149CC
    if (ctx->r7 != 0) {
        // 0x800149B4: sltu        $at, $a2, $t0
        ctx->r1 = ctx->r6 < ctx->r8 ? 1 : 0;
            goto L_800149CC;
    }
    // 0x800149B4: sltu        $at, $a2, $t0
    ctx->r1 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x800149B8: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800149BC: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x800149C0: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
    // 0x800149C4: b           L_800149DC
    // 0x800149C8: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
        goto L_800149DC;
    // 0x800149C8: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
L_800149CC:
    // 0x800149CC: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x800149D0: sw          $a3, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r7;
    // 0x800149D4: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x800149D8: sw          $t0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r8;
L_800149DC:
    // 0x800149DC: beq         $at, $zero, L_80014A1C
    if (ctx->r1 == 0) {
        // 0x800149E0: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80014A1C;
    }
    // 0x800149E0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800149E4: subu        $a0, $t0, $a2
    ctx->r4 = SUB32(ctx->r8, ctx->r6);
    // 0x800149E8: andi        $t4, $a0, 0x3
    ctx->r12 = ctx->r4 & 0X3;
    // 0x800149EC: beq         $t4, $zero, L_80014A04
    if (ctx->r12 == 0) {
        // 0x800149F0: addu        $v1, $t4, $a2
        ctx->r3 = ADD32(ctx->r12, ctx->r6);
            goto L_80014A04;
    }
    // 0x800149F0: addu        $v1, $t4, $a2
    ctx->r3 = ADD32(ctx->r12, ctx->r6);
L_800149F4:
    // 0x800149F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800149F8: bne         $v1, $v0, L_800149F4
    if (ctx->r3 != ctx->r2) {
        // 0x800149FC: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_800149F4;
    }
    // 0x800149FC: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x80014A00: beq         $v0, $t0, L_80014A1C
    if (ctx->r2 == ctx->r8) {
        // 0x80014A04: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80014A1C;
    }
L_80014A04:
    // 0x80014A04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80014A08: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x80014A0C: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x80014A10: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x80014A14: bne         $v0, $t0, L_80014A04
    if (ctx->r2 != ctx->r8) {
        // 0x80014A18: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_80014A04;
    }
    // 0x80014A18: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
L_80014A1C:
    // 0x80014A1C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80014A20: jr          $ra
    // 0x80014A24: nop

    TRACE_RETURN()
    return;
    // 0x80014A24: nop

;}
RECOMP_FUNC void func_800086F0_92F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800086F0: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x800086F4: addiu       $t6, $t6, -0x7910
    ctx->r14 = ADD32(ctx->r14, -0X7910);
    // 0x800086F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800086FC: sw          $t6, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r14;
    // 0x80008700: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80008704: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80008708: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8000870C: addiu       $t2, $t2, 0x7A70
    ctx->r10 = ADD32(ctx->r10, 0X7A70);
    // 0x80008710: addiu       $t1, $t1, 0x7A72
    ctx->r9 = ADD32(ctx->r9, 0X7A72);
    // 0x80008714: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80008718: sh          $t9, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r25;
    // 0x8000871C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80008720: sh          $t9, 0x7A68($at)
    MEM_H(0X7A68, ctx->r1) = ctx->r25;
    // 0x80008724: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80008728: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000872C: addiu       $t3, $t3, -0x3A34
    ctx->r11 = ADD32(ctx->r11, -0X3A34);
    // 0x80008730: sh          $zero, 0x7A74($at)
    MEM_H(0X7A74, ctx->r1) = 0;
    // 0x80008734: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x80008738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000873C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80008740: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x80008744: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x80008748: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8000874C: addiu       $t6, $t6, -0x2A00
    ctx->r14 = ADD32(ctx->r14, -0X2A00);
    // 0x80008750: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80008754: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80008758: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8000875C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80008760: addiu       $t0, $t0, -0x3340
    ctx->r8 = ADD32(ctx->r8, -0X3340);
    // 0x80008764: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80008768: lw          $a0, 0x29D0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X29D0);
    // 0x8000876C: lh          $t8, 0x5D0C($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X5D0C);
    // 0x80008770: lbu         $a1, 0x5D07($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X5D07);
    // 0x80008774: lbu         $a2, 0x5D09($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X5D09);
    // 0x80008778: lbu         $a3, 0x5D0B($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X5D0B);
    // 0x8000877C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80008780: jal         0x80009408
    // 0x80008784: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80009408_A008(rdram, ctx);
        goto after_0;
    // 0x80008784: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80008788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000878C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80008790: jr          $ra
    // 0x80008794: nop

    TRACE_RETURN()
    return;
    // 0x80008794: nop

;}
RECOMP_FUNC void func_80013A24_14624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013A24: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80013A28: lhu         $t7, 0x7FC0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7FC0);
    // 0x80013A2C: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x80013A30: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80013A34: beq         $v1, $t7, L_80013A64
    if (ctx->r3 == ctx->r15) {
        // 0x80013A38: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80013A64;
    }
    // 0x80013A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80013A3C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80013A40: addiu       $a0, $a0, 0x7FC0
    ctx->r4 = ADD32(ctx->r4, 0X7FC0);
    // 0x80013A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80013A48:
    // 0x80013A48: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x80013A4C: beq         $at, $zero, L_80013A64
    if (ctx->r1 == 0) {
        // 0x80013A50: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80013A64;
    }
    // 0x80013A50: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80013A54: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80013A58: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80013A5C: bnel        $v1, $t0, L_80013A48
    if (ctx->r3 != ctx->r8) {
        // 0x80013A60: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80013A48;
    }
    goto skip_0;
    // 0x80013A60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_80013A64:
    // 0x80013A64: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80013A68: slti        $v1, $v0, 0x30
    ctx->r3 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x80013A6C: beq         $v1, $zero, L_80013A80
    if (ctx->r3 == 0) {
        // 0x80013A70: addiu       $a0, $a0, 0x7FC0
        ctx->r4 = ADD32(ctx->r4, 0X7FC0);
            goto L_80013A80;
    }
    // 0x80013A70: addiu       $a0, $a0, 0x7FC0
    ctx->r4 = ADD32(ctx->r4, 0X7FC0);
    // 0x80013A74: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x80013A78: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80013A7C: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
L_80013A80:
    // 0x80013A80: beq         $v1, $zero, L_80013ABC
    if (ctx->r3 == 0) {
        // 0x80013A84: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80013ABC;
    }
    // 0x80013A84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80013A88: sll         $t3, $v0, 3
    ctx->r11 = S32(ctx->r2 << 3);
    // 0x80013A8C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80013A90: addiu       $t4, $t4, 0x7FC0
    ctx->r12 = ADD32(ctx->r12, 0X7FC0);
    // 0x80013A94: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80013A98: addiu       $v0, $v0, -0x7EC0
    ctx->r2 = ADD32(ctx->r2, -0X7EC0);
    // 0x80013A9C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
L_80013AA0:
    // 0x80013AA0: andi        $t5, $zero, 0xFFFF
    ctx->r13 = 0 & 0XFFFF;
    // 0x80013AA4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80013AA8: sltu        $a0, $v1, $v0
    ctx->r4 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80013AAC: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x80013AB0: sh          $zero, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = 0;
    // 0x80013AB4: bne         $a0, $zero, L_80013AA0
    if (ctx->r4 != 0) {
        // 0x80013AB8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80013AA0;
    }
    // 0x80013AB8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_80013ABC:
    // 0x80013ABC: jr          $ra
    // 0x80013AC0: nop

    TRACE_RETURN()
    return;
    // 0x80013AC0: nop

;}
RECOMP_FUNC void func_800136F8_142F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800136F8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800136FC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80013700: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80013704: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80013708: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001370C: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80013710: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80013714: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80013718: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001371C: bgez        $t6, L_80013734
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80013720: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80013734;
    }
    // 0x80013720: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80013724: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013728: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001372C: nop

    // 0x80013730: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80013734:
    // 0x80013734: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80013738: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x8001373C: bgez        $a2, L_80013754
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80013740: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80013754;
    }
    // 0x80013740: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80013744: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013748: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001374C: nop

    // 0x80013750: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80013754:
    // 0x80013754: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x80013758: swc1        $f10, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f10.u32l;
    // 0x8001375C: bgez        $a3, L_80013774
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80013760: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80013774;
    }
    // 0x80013760: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80013764: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001376C: nop

    // 0x80013770: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80013774:
    // 0x80013774: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80013778: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    // 0x8001377C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80013780: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80013784: nop

    // 0x80013788: bc1fl       L_800137AC
    if (!c1cs) {
        // 0x8001378C: lwc1        $f18, 0x50($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X50);
            goto L_800137AC;
    }
    goto skip_0;
    // 0x8001378C: lwc1        $f18, 0x50($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X50);
    skip_0:
    // 0x80013790: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80013794: lwc1        $f16, 0x50($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80013798: lwc1        $f10, 0x4C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8001379C: sub.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x800137A0: b           L_800137B4
    // 0x800137A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800137B4;
    // 0x800137A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x800137A8: lwc1        $f18, 0x50($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X50);
L_800137AC:
    // 0x800137AC: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x800137B0: sub.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f6.fl;
L_800137B4:
    // 0x800137B4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800137B8: lwc1        $f2, 0x5C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x800137BC: lwc1        $f12, 0x58($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X58);
    // 0x800137C0: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800137C4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800137C8: nop

    // 0x800137CC: bc1f        L_800137E0
    if (!c1cs) {
        // 0x800137D0: swc1        $f4, 0x54($v0)
        MEM_W(0X54, ctx->r2) = ctx->f4.u32l;
            goto L_800137E0;
    }
    // 0x800137D0: swc1        $f4, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f4.u32l;
    // 0x800137D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800137D8: b           L_800137E4
    // 0x800137DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800137E4;
    // 0x800137DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800137E0:
    // 0x800137E0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800137E4:
    // 0x800137E4: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800137E8: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x800137EC: lwc1        $f12, 0x64($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X64);
    // 0x800137F0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800137F4: nop

    // 0x800137F8: bc1f        L_8001380C
    if (!c1cs) {
        // 0x800137FC: swc1        $f8, 0x60($v0)
        MEM_W(0X60, ctx->r2) = ctx->f8.u32l;
            goto L_8001380C;
    }
    // 0x800137FC: swc1        $f8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f8.u32l;
    // 0x80013800: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80013804: b           L_80013810
    // 0x80013808: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80013810;
    // 0x80013808: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8001380C:
    // 0x8001380C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80013810:
    // 0x80013810: div.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80013814: jr          $ra
    // 0x80013818: swc1        $f16, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x80013818: swc1        $f16, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_800374EC_380EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800374EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800374F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800374F4: jal         0x8000B578
    // 0x800374F8: nop

    func_8000B578_C178(rdram, ctx);
        goto after_0;
    // 0x800374F8: nop

    after_0:
    // 0x800374FC: bne         $v0, $zero, L_80037514
    if (ctx->r2 != 0) {
        // 0x80037500: lui         $t6, 0x4
        ctx->r14 = S32(0X4 << 16);
            goto L_80037514;
    }
    // 0x80037500: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80037504: jal         0x80003728
    // 0x80037508: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80003728_4328(rdram, ctx);
        goto after_1;
    // 0x80037508: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x8003750C: b           L_8003753C
    // 0x80037510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003753C;
    // 0x80037510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037514:
    // 0x80037514: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80037518: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8003751C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037520: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80037524: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80037528: lhu         $t6, -0x520E($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X520E);
    // 0x8003752C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80037530: jal         0x80003728
    // 0x80037534: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80037534: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    after_2:
    // 0x80037538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003753C:
    // 0x8003753C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037540: jr          $ra
    // 0x80037544: nop

    TRACE_RETURN()
    return;
    // 0x80037544: nop

;}
RECOMP_FUNC void func_8003BF3C_3CB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BF3C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003BF40: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003BF44: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003BF48: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003BF4C: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003BF50: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003BF54: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8003BF58: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8003BF5C: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x8003BF60: beq         $at, $zero, L_8003BF7C
    if (ctx->r1 == 0) {
        // 0x8003BF64: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8003BF7C;
    }
    // 0x8003BF64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003BF68: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003BF6C: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003BF70: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8003BF74: b           L_8003BF90
    // 0x8003BF78: sb          $v0, 0x93($t7)
    MEM_B(0X93, ctx->r15) = ctx->r2;
        goto L_8003BF90;
    // 0x8003BF78: sb          $v0, 0x93($t7)
    MEM_B(0X93, ctx->r15) = ctx->r2;
L_8003BF7C:
    // 0x8003BF7C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8003BF80: addiu       $t9, $a0, -0x64
    ctx->r25 = ADD32(ctx->r4, -0X64);
    // 0x8003BF84: sb          $zero, 0x93($t8)
    MEM_B(0X93, ctx->r24) = 0;
    // 0x8003BF88: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x8003BF8C: sb          $t9, 0x9E($t0)
    MEM_B(0X9E, ctx->r8) = ctx->r25;
L_8003BF90:
    // 0x8003BF90: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003BF94: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003BF98: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x8003BF9C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x8003BFA0: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8003BFA4: beq         $at, $zero, L_8003BFEC
    if (ctx->r1 == 0) {
        // 0x8003BFA8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8003BFEC;
    }
    // 0x8003BFA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003BFAC: slti        $at, $a0, 0x20
    ctx->r1 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x8003BFB0: beq         $at, $zero, L_8003BFD4
    if (ctx->r1 == 0) {
        // 0x8003BFB4: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_8003BFD4;
    }
    // 0x8003BFB4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8003BFB8: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8003BFBC: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8003BFC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003BFC4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8003BFC8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8003BFCC: b           L_8003C038
    // 0x8003BFD0: sb          $t2, 0x99($t3)
    MEM_B(0X99, ctx->r11) = ctx->r10;
        goto L_8003C038;
    // 0x8003BFD0: sb          $t2, 0x99($t3)
    MEM_B(0X99, ctx->r11) = ctx->r10;
L_8003BFD4:
    // 0x8003BFD4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003BFD8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8003BFDC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8003BFE0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8003BFE4: b           L_8003C038
    // 0x8003BFE8: sb          $t5, 0x99($t6)
    MEM_B(0X99, ctx->r14) = ctx->r13;
        goto L_8003C038;
    // 0x8003BFE8: sb          $t5, 0x99($t6)
    MEM_B(0X99, ctx->r14) = ctx->r13;
L_8003BFEC:
    // 0x8003BFEC: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8003BFF0: beq         $at, $zero, L_8003C010
    if (ctx->r1 == 0) {
        // 0x8003BFF4: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_8003C010;
    }
    // 0x8003BFF4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8003BFF8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8003BFFC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003C000: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8003C004: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8003C008: b           L_8003C038
    // 0x8003C00C: sb          $t8, 0x99($t9)
    MEM_B(0X99, ctx->r25) = ctx->r24;
        goto L_8003C038;
    // 0x8003C00C: sb          $t8, 0x99($t9)
    MEM_B(0X99, ctx->r25) = ctx->r24;
L_8003C010:
    // 0x8003C010: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8003C014: bnel        $a0, $at, L_8003C030
    if (ctx->r4 != ctx->r1) {
        // 0x8003C018: lw          $t4, 0x0($a2)
        ctx->r12 = MEM_W(ctx->r6, 0X0);
            goto L_8003C030;
    }
    goto skip_0;
    // 0x8003C018: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x8003C01C: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x8003C020: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8003C024: b           L_8003C038
    // 0x8003C028: sb          $t1, 0x99($t2)
    MEM_B(0X99, ctx->r10) = ctx->r9;
        goto L_8003C038;
    // 0x8003C028: sb          $t1, 0x99($t2)
    MEM_B(0X99, ctx->r10) = ctx->r9;
    // 0x8003C02C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
L_8003C030:
    // 0x8003C030: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8003C034: sb          $t3, 0x99($t4)
    MEM_B(0X99, ctx->r12) = ctx->r11;
L_8003C038:
    // 0x8003C038: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8003C03C: sb          $v0, 0x95($t5)
    MEM_B(0X95, ctx->r13) = ctx->r2;
    // 0x8003C040: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8003C044: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8003C048: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C04C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8003C050: sh          $t8, 0x9A($t9)
    MEM_H(0X9A, ctx->r25) = ctx->r24;
    // 0x8003C054: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003C058: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003C05C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003C060: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x8003C064: lbu         $a0, 0x9E($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X9E);
    // 0x8003C068: beq         $a0, $zero, L_8003C0A4
    if (ctx->r4 == 0) {
        // 0x8003C06C: nop
    
            goto L_8003C0A4;
    }
    // 0x8003C06C: nop

    // 0x8003C070: lhu         $t2, 0x9A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X9A);
    // 0x8003C074: div         $zero, $t2, $a0
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r4)));
    // 0x8003C078: mflo        $t3
    ctx->r11 = lo;
    // 0x8003C07C: sh          $t3, 0xA0($v1)
    MEM_H(0XA0, ctx->r3) = ctx->r11;
    // 0x8003C080: bne         $a0, $zero, L_8003C08C
    if (ctx->r4 != 0) {
        // 0x8003C084: nop
    
            goto L_8003C08C;
    }
    // 0x8003C084: nop

    // 0x8003C088: break       7
    do_break(2147729544);
L_8003C08C:
    // 0x8003C08C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C090: bne         $a0, $at, L_8003C0A4
    if (ctx->r4 != ctx->r1) {
        // 0x8003C094: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C0A4;
    }
    // 0x8003C094: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C098: bne         $t2, $at, L_8003C0A4
    if (ctx->r10 != ctx->r1) {
        // 0x8003C09C: nop
    
            goto L_8003C0A4;
    }
    // 0x8003C09C: nop

    // 0x8003C0A0: break       6
    do_break(2147729568);
L_8003C0A4:
    // 0x8003C0A4: jr          $ra
    // 0x8003C0A8: nop

    TRACE_RETURN()
    return;
    // 0x8003C0A8: nop

;}
RECOMP_FUNC void func_80016480_17080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016480: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80016484: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x80016488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001648C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80016490: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80016494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016498: bltz        $a0, L_8001653C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8001649C: and         $t6, $v1, $at
        ctx->r14 = ctx->r3 & ctx->r1;
            goto L_8001653C;
    }
    // 0x8001649C: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x800164A0: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800164A4: beql        $at, $zero, L_80016540
    if (ctx->r1 == 0) {
        // 0x800164A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80016540;
    }
    goto skip_0;
    // 0x800164A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800164AC: bltz        $a1, L_8001653C
    if (SIGNED(ctx->r5) < 0) {
        // 0x800164B0: lui         $t7, 0x8017
        ctx->r15 = S32(0X8017 << 16);
            goto L_8001653C;
    }
    // 0x800164B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800164B4: lw          $t7, -0x7E88($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7E88);
    // 0x800164B8: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800164BC: bnel        $at, $zero, L_80016540
    if (ctx->r1 != 0) {
        // 0x800164C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80016540;
    }
    goto skip_1;
    // 0x800164C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800164C4: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800164C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800164CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800164D0: mflo        $t8
    ctx->r24 = lo;
    // 0x800164D4: addu        $a1, $t8, $a0
    ctx->r5 = ADD32(ctx->r24, ctx->r4);
    // 0x800164D8: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    // 0x800164DC: beq         $t9, $zero, L_8001650C
    if (ctx->r25 == 0) {
        // 0x800164E0: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001650C;
    }
    // 0x800164E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800164E4: lw          $t1, -0x7B70($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7B70);
    // 0x800164E8: bgez        $a1, L_800164F8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800164EC: sra         $t0, $a1, 1
        ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
            goto L_800164F8;
    }
    // 0x800164EC: sra         $t0, $a1, 1
    ctx->r8 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800164F0: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x800164F4: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_800164F8:
    // 0x800164F8: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x800164FC: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80016500: or          $t4, $t2, $a2
    ctx->r12 = ctx->r10 | ctx->r6;
    // 0x80016504: b           L_80016534
    // 0x80016508: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
        goto L_80016534;
    // 0x80016508: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_8001650C:
    // 0x8001650C: lw          $t6, -0x7B70($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B70);
    // 0x80016510: bgez        $a1, L_80016520
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80016514: sra         $t5, $a1, 1
        ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
            goto L_80016520;
    }
    // 0x80016514: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80016518: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x8001651C: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_80016520:
    // 0x80016520: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x80016524: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80016528: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x8001652C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80016530: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80016534:
    // 0x80016534: jal         0x80016660
    // 0x80016538: lw          $a0, -0x7B6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B6C);
    func_80016660_17260(rdram, ctx);
        goto after_0;
    // 0x80016538: lw          $a0, -0x7B6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B6C);
    after_0:
L_8001653C:
    // 0x8001653C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80016540:
    // 0x80016540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016544: jr          $ra
    // 0x80016548: nop

    TRACE_RETURN()
    return;
    // 0x80016548: nop

;}
RECOMP_FUNC void func_80023880_24480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80023884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002388C: jal         0x80045920
    // 0x80023890: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    osPfsRepairId_recomp(rdram, ctx);
        goto after_0;
    // 0x80023890: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    after_0:
    // 0x80023894: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023898: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8002389C: lw          $a1, -0x717C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X717C);
    // 0x800238A0: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x800238A4: jal         0x80043F20
    // 0x800238A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osPfsInitPak_recomp(rdram, ctx);
        goto after_1;
    // 0x800238A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800238AC: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800238B0: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x800238B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800238B8: sw          $v0, 0x3FC($t6)
    MEM_W(0X3FC, ctx->r14) = ctx->r2;
    // 0x800238BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800238C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800238C4: lw          $v0, 0x3FC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X3FC);
    // 0x800238C8: jr          $ra
    // 0x800238CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800238CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C9BC_1D5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C9BC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001C9C0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8001C9C4: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8001C9C8: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8001C9CC: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001C9D0: jr          $ra
    // 0x8001C9D4: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8001C9D4: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8000B5D0_C1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B5D0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8000B5D4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8000B5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B5DC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x8000B5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B5E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000B5E8: sb          $zero, -0x760($at)
    MEM_B(-0X760, ctx->r1) = 0;
    // 0x8000B5EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000B5F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000B5F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B5F8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B5FC: sw          $t7, -0x3968($at)
    MEM_W(-0X3968, ctx->r1) = ctx->r15;
    // 0x8000B600: addiu       $a1, $a1, -0x3A28
    ctx->r5 = ADD32(ctx->r5, -0X3A28);
    // 0x8000B604: addiu       $a0, $a0, -0x3994
    ctx->r4 = ADD32(ctx->r4, -0X3994);
    // 0x8000B608: jal         0x80004208
    // 0x8000B60C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_80004208_4E08(rdram, ctx);
        goto after_0;
    // 0x8000B60C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_0:
    // 0x8000B610: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B614: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B618: addiu       $a1, $a1, -0x36F0
    ctx->r5 = ADD32(ctx->r5, -0X36F0);
    // 0x8000B61C: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x8000B620: jal         0x80004208
    // 0x8000B624: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    func_80004208_4E08(rdram, ctx);
        goto after_1;
    // 0x8000B624: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    after_1:
    // 0x8000B628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B62C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000B630: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000B634: sw          $t8, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r24;
    // 0x8000B638: jr          $ra
    // 0x8000B63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000B63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003F18C_3FD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F18C: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003F190: lw          $t6, 0x7858($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7858);
    // 0x8003F194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F19C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F1A0: bne         $t6, $zero, L_8003F1C8
    if (ctx->r14 != 0) {
        // 0x8003F1A4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8003F1C8;
    }
    // 0x8003F1A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003F1A8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8003F1AC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8003F1B0: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x8003F1B4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8003F1B8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8003F1BC: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x8003F1C0: jal         0x8003521C
    // 0x8003F1C4: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8003F1C4: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    after_0:
L_8003F1C8:
    // 0x8003F1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F1D0: jr          $ra
    // 0x8003F1D4: nop

    TRACE_RETURN()
    return;
    // 0x8003F1D4: nop

;}
RECOMP_FUNC void func_8003C820_3D420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C820: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C824: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C828: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003C82C: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x8003C830: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8003C834: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003C838: sb          $t6, 0x8C($t7)
    MEM_B(0X8C, ctx->r15) = ctx->r14;
    // 0x8003C83C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003C840: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003C844: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8003C848: sh          $t9, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r25;
    // 0x8003C84C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8003C850: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8003C854: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8003C858: jr          $ra
    // 0x8003C85C: nop

    TRACE_RETURN()
    return;
    // 0x8003C85C: nop

;}
RECOMP_FUNC void alFxParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800521D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800521D8: bne         $a1, $at, L_800521E4
    if (ctx->r5 != ctx->r1) {
        // 0x800521DC: nop
    
            goto L_800521E4;
    }
    // 0x800521DC: nop

    // 0x800521E0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_800521E4:
    // 0x800521E4: jr          $ra
    // 0x800521E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800521E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80013B14_14714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013B14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013B18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80013B1C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80013B20: addiu       $s0, $v0, 0x7FC0
    ctx->r16 = ADD32(ctx->r2, 0X7FC0);
    // 0x80013B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013B28: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80013B2C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x80013B30: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80013B34: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x80013B38: beq         $t6, $zero, L_80013B88
    if (ctx->r14 == 0) {
        // 0x80013B3C: addiu       $t7, $t7, 0x7FC0
        ctx->r15 = ADD32(ctx->r15, 0X7FC0);
            goto L_80013B88;
    }
    // 0x80013B3C: addiu       $t7, $t7, 0x7FC0
    ctx->r15 = ADD32(ctx->r15, 0X7FC0);
    // 0x80013B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80013B44: addiu       $a0, $a0, -0x7EC0
    ctx->r4 = ADD32(ctx->r4, -0X7EC0);
    // 0x80013B48: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x80013B4C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_80013B50:
    // 0x80013B50: bnel        $v0, $v1, L_80013B68
    if (ctx->r2 != ctx->r3) {
        // 0x80013B54: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80013B68;
    }
    goto skip_0;
    // 0x80013B54: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x80013B58: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80013B5C: b           L_80013BF8
    // 0x80013B60: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
        goto L_80013BF8;
    // 0x80013B60: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80013B64: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80013B68:
    // 0x80013B68: sltu        $at, $s0, $a0
    ctx->r1 = ctx->r16 < ctx->r4 ? 1 : 0;
    // 0x80013B6C: bnel        $at, $zero, L_80013B80
    if (ctx->r1 != 0) {
        // 0x80013B70: lhu         $v0, 0x0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X0);
            goto L_80013B80;
    }
    goto skip_1;
    // 0x80013B70: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    skip_1:
    // 0x80013B74: b           L_80013BF8
    // 0x80013B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80013BF8;
    // 0x80013B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80013B7C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
L_80013B80:
    // 0x80013B80: bne         $v0, $zero, L_80013B50
    if (ctx->r2 != 0) {
        // 0x80013B84: nop
    
            goto L_80013B50;
    }
    // 0x80013B84: nop

L_80013B88:
    // 0x80013B88: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80013B8C: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x80013B90: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x80013B94: jal         0x80001DF4
    // 0x80013B98: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80001DF4_29F4(rdram, ctx);
        goto after_0;
    // 0x80013B98: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80013B9C: beq         $v0, $zero, L_80013BC0
    if (ctx->r2 == 0) {
        // 0x80013BA0: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_80013BC0;
    }
    // 0x80013BA0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80013BA4: addiu       $a1, $a1, 0xFFF
    ctx->r5 = ADD32(ctx->r5, 0XFFF);
    // 0x80013BA8: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80013BAC: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x80013BB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80013BB4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80013BB8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80013BBC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_80013BC0:
    // 0x80013BC0: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80013BC4: jal         0x80001C00
    // 0x80013BC8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x80013BC8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x80013BCC: addiu       $v1, $v0, 0x3F
    ctx->r3 = ADD32(ctx->r2, 0X3F);
    // 0x80013BD0: addiu       $at, $zero, -0x40
    ctx->r1 = ADD32(0, -0X40);
    // 0x80013BD4: and         $t0, $v1, $at
    ctx->r8 = ctx->r3 & ctx->r1;
    // 0x80013BD8: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80013BDC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80013BE0: jal         0x800142BC
    // 0x80013BE4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_800142BC_14EBC(rdram, ctx);
        goto after_2;
    // 0x80013BE4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_2:
    // 0x80013BE8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80013BEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80013BF0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80013BF4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80013BF8:
    // 0x80013BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80013BFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80013C00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80013C04: jr          $ra
    // 0x80013C08: nop

    TRACE_RETURN()
    return;
    // 0x80013C08: nop

;}
RECOMP_FUNC void func_80008650_9250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008650: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80008654: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80008658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000865C: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80008660: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80008664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008668: addiu       $t6, $t6, -0x4920
    ctx->r14 = ADD32(ctx->r14, -0X4920);
    // 0x8000866C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80008670: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80008674: sw          $t6, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r14;
    // 0x80008678: jal         0x80005A20
    // 0x8000867C: addiu       $a0, $a0, -0x5228
    ctx->r4 = ADD32(ctx->r4, -0X5228);
    func_80005A20_6620(rdram, ctx);
        goto after_0;
    // 0x8000867C: addiu       $a0, $a0, -0x5228
    ctx->r4 = ADD32(ctx->r4, -0X5228);
    after_0:
    // 0x80008680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80008688: jr          $ra
    // 0x8000868C: nop

    TRACE_RETURN()
    return;
    // 0x8000868C: nop

;}
RECOMP_FUNC void func_8001136C_11F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001136C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80011370: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80011374: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x80011378: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001137C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80011380: beq         $v1, $zero, L_800113B0
    if (ctx->r3 == 0) {
        // 0x80011384: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_800113B0;
    }
    // 0x80011384: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80011388: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001138C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80011390: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x80011394: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x80011398: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001139C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x800113A0: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x800113A4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800113A8: b           L_800113C0
    // 0x800113AC: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
        goto L_800113C0;
    // 0x800113AC: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
L_800113B0:
    // 0x800113B0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x800113B4: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x800113B8: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
    // 0x800113BC: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
L_800113C0:
    // 0x800113C0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x800113C4: beql        $v1, $zero, L_800114B0
    if (ctx->r3 == 0) {
        // 0x800113C8: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_800114B0;
    }
    goto skip_0;
    // 0x800113C8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_0:
    // 0x800113CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800113D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800113D4: ldc1        $f18, -0x4FD0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4FD0);
    // 0x800113D8: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x800113DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800113E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800113E4: ldc1        $f14, -0x4FC8($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X4FC8);
    // 0x800113E8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x800113EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800113F0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800113F4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800113F8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800113FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80011400: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80011404: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
L_80011408:
    // 0x80011408: beql        $a0, $a1, L_80011424
    if (ctx->r4 == ctx->r5) {
        // 0x8001140C: lw          $t4, 0x10($v0)
        ctx->r12 = MEM_W(ctx->r2, 0X10);
            goto L_80011424;
    }
    goto skip_1;
    // 0x8001140C: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x80011410: beql        $a0, $a2, L_80011438
    if (ctx->r4 == ctx->r6) {
        // 0x80011414: lw          $t6, 0x10($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X10);
            goto L_80011438;
    }
    goto skip_2;
    // 0x80011414: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x80011418: b           L_800114A4
    // 0x8001141C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
        goto L_800114A4;
    // 0x8001141C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80011420: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
L_80011424:
    // 0x80011424: sh          $t4, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r12;
    // 0x80011428: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x8001142C: b           L_800114A0
    // 0x80011430: sh          $t5, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r13;
        goto L_800114A0;
    // 0x80011430: sh          $t5, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r13;
    // 0x80011434: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
L_80011438:
    // 0x80011438: lw          $t7, 0x80($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X80);
    // 0x8001143C: lw          $t0, 0x84($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X84);
    // 0x80011440: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80011444: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80011448: nop

    // 0x8001144C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011450: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80011454: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80011458: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8001145C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80011460: add.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f6.d + ctx->f14.d;
    // 0x80011464: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80011468: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x8001146C: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80011470: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
    // 0x80011474: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80011478: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8001147C: nop

    // 0x80011480: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011484: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80011488: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8001148C: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80011490: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80011494: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x80011498: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8001149C: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
L_800114A0:
    // 0x800114A0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_800114A4:
    // 0x800114A4: bnel        $v1, $zero, L_80011408
    if (ctx->r3 != 0) {
        // 0x800114A8: lbu         $a0, 0x4($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X4);
            goto L_80011408;
    }
    goto skip_3;
    // 0x800114A8: lbu         $a0, 0x4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4);
    skip_3:
    // 0x800114AC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_800114B0:
    // 0x800114B0: jr          $ra
    // 0x800114B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x800114B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80014CC4_158C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014CC4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80014CC8: addiu       $a2, $a2, -0x523C
    ctx->r6 = ADD32(ctx->r6, -0X523C);
    // 0x80014CCC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80014CD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80014CD4: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80014CD8: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80014CDC: beq         $at, $zero, L_80014D34
    if (ctx->r1 == 0) {
        // 0x80014CE0: lui         $t0, 0x8017
        ctx->r8 = S32(0X8017 << 16);
            goto L_80014D34;
    }
    // 0x80014CE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80014CE4: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80014CE8: addiu       $a3, $a3, -0x5234
    ctx->r7 = ADD32(ctx->r7, -0X5234);
    // 0x80014CEC: addiu       $t0, $t0, -0x7EA0
    ctx->r8 = ADD32(ctx->r8, -0X7EA0);
L_80014CF0:
    // 0x80014CF0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80014CF4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80014CF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80014CFC: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80014D00: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x80014D04: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80014D08: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80014D0C: and         $t2, $t6, $t9
    ctx->r10 = ctx->r14 & ctx->r25;
    // 0x80014D10: sllv        $t3, $t2, $a0
    ctx->r11 = S32(ctx->r10 << (ctx->r4 & 31));
    // 0x80014D14: slt         $at, $t1, $a0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80014D18: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x80014D1C: or          $v1, $v1, $t3
    ctx->r3 = ctx->r3 | ctx->r11;
    // 0x80014D20: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80014D24: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x80014D28: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80014D2C: bne         $at, $zero, L_80014CF0
    if (ctx->r1 != 0) {
        // 0x80014D30: sw          $t4, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r12;
            goto L_80014CF0;
    }
    // 0x80014D30: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
L_80014D34:
    // 0x80014D34: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80014D38: addiu       $a3, $a3, -0x5234
    ctx->r7 = ADD32(ctx->r7, -0X5234);
    // 0x80014D3C: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80014D40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80014D44: subu        $t7, $a1, $a0
    ctx->r15 = SUB32(ctx->r5, ctx->r4);
    // 0x80014D48: sllv        $t3, $t2, $a0
    ctx->r11 = S32(ctx->r10 << (ctx->r4 & 31));
    // 0x80014D4C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80014D50: srlv        $t9, $t8, $t7
    ctx->r25 = S32(U32(ctx->r24) >> (ctx->r15 & 31));
    // 0x80014D54: and         $t5, $t9, $t4
    ctx->r13 = ctx->r25 & ctx->r12;
    // 0x80014D58: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80014D5C: or          $v0, $t5, $v1
    ctx->r2 = ctx->r13 | ctx->r3;
    // 0x80014D60: jr          $ra
    // 0x80014D64: nop

    TRACE_RETURN()
    return;
    // 0x80014D64: nop

    // 0x80014D68: nop

    // 0x80014D6C: nop

;}
RECOMP_FUNC void func_800322A8_32EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800322A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800322AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800322B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800322B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800322B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800322BC: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x800322C0: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x800322C4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800322C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800322CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800322D0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x800322D4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800322D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800322DC: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x800322E0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800322E4: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x800322E8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800322EC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x800322F0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800322F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800322F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800322FC: jal         0x80032320
    // 0x80032300: nop

    func_80032320_32F20(rdram, ctx);
        goto after_0;
    // 0x80032300: nop

    after_0:
    // 0x80032304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003230C: jr          $ra
    // 0x80032310: nop

    TRACE_RETURN()
    return;
    // 0x80032310: nop

;}
RECOMP_FUNC void func_8003F1D8_3FDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F1D8: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003F1DC: lw          $t6, 0x7858($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7858);
    // 0x8003F1E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003F1E4: bne         $t6, $zero, L_8003F1F4
    if (ctx->r14 != 0) {
        // 0x8003F1E8: nop
    
            goto L_8003F1F4;
    }
    // 0x8003F1E8: nop

    // 0x8003F1EC: jr          $ra
    // 0x8003F1F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8003F1F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F1F4:
    // 0x8003F1F4: jr          $ra
    // 0x8003F1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8003F1F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800081AC_8DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800081AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800081B0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x800081B4: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800081B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800081BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800081C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800081C4: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x800081C8: beq         $t6, $at, L_800081E4
    if (ctx->r14 == ctx->r1) {
        // 0x800081CC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800081E4;
    }
    // 0x800081CC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800081D0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800081D4: beq         $t6, $at, L_80008248
    if (ctx->r14 == ctx->r1) {
        // 0x800081D8: sll         $t1, $a3, 2
        ctx->r9 = S32(ctx->r7 << 2);
            goto L_80008248;
    }
    // 0x800081D8: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x800081DC: b           L_80008214
    // 0x800081E0: lui         $t2, 0x8006
    ctx->r10 = S32(0X8006 << 16);
        goto L_80008214;
    // 0x800081E0: lui         $t2, 0x8006
    ctx->r10 = S32(0X8006 << 16);
L_800081E4:
    // 0x800081E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800081E8:
    // 0x800081E8: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800081EC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x800081F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800081F4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x800081F8: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x800081FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80008200: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80008204: bne         $at, $zero, L_800081E8
    if (ctx->r1 != 0) {
        // 0x80008208: sh          $zero, 0x0($t9)
        MEM_H(0X0, ctx->r25) = 0;
            goto L_800081E8;
    }
    // 0x80008208: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x8000820C: b           L_8000824C
    // 0x80008210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000824C;
    // 0x80008210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80008214:
    // 0x80008214: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80008218: andi        $t3, $v0, 0xF0
    ctx->r11 = ctx->r2 & 0XF0;
    // 0x8000821C: lw          $t2, -0x4950($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4950);
    // 0x80008220: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80008224: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80008228: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8000822C: sll         $t0, $v0, 4
    ctx->r8 = S32(ctx->r2 << 4);
    // 0x80008230: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x80008234: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80008238: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8000823C: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80008240: jal         0x800079C0
    // 0x80008244: addu        $a1, $t8, $t3
    ctx->r5 = ADD32(ctx->r24, ctx->r11);
    func_800079C0_85C0(rdram, ctx);
        goto after_0;
    // 0x80008244: addu        $a1, $t8, $t3
    ctx->r5 = ADD32(ctx->r24, ctx->r11);
    after_0:
L_80008248:
    // 0x80008248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000824C:
    // 0x8000824C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80008250: jr          $ra
    // 0x80008254: nop

    TRACE_RETURN()
    return;
    // 0x80008254: nop

;}
RECOMP_FUNC void func_80006BF8_77F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006BF8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80006BFC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80006C00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80006C04: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006C08: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80006C0C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80006C10: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80006C14: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80006C18: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80006C1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80006C20: bc1f        L_80006D88
    if (!c1cs) {
        // 0x80006C24: sw          $zero, 0x4($v1)
        MEM_W(0X4, ctx->r3) = 0;
            goto L_80006D88;
    }
    // 0x80006C24: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80006C28: add.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x80006C2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80006C30: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006C34: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x80006C38: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80006C3C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80006C40: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80006C44: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80006C48: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80006C4C: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x80006C50: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80006C54: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x80006C58: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80006C5C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80006C60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80006C64: addiu       $t0, $a2, 0x8
    ctx->r8 = ADD32(ctx->r6, 0X8);
    // 0x80006C68: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80006C6C: beq         $t2, $zero, L_80006CB8
    if (ctx->r10 == 0) {
        // 0x80006C70: sw          $t0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r8;
            goto L_80006CB8;
    }
    // 0x80006C70: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80006C74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80006C78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80006C7C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80006C80: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80006C84: nop

    // 0x80006C88: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80006C8C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80006C90: nop

    // 0x80006C94: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80006C98: bne         $t2, $zero, L_80006CB0
    if (ctx->r10 != 0) {
        // 0x80006C9C: nop
    
            goto L_80006CB0;
    }
    // 0x80006C9C: nop

    // 0x80006CA0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80006CA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006CA8: b           L_80006CC8
    // 0x80006CAC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80006CC8;
    // 0x80006CAC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80006CB0:
    // 0x80006CB0: b           L_80006CC8
    // 0x80006CB4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80006CC8;
    // 0x80006CB4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_80006CB8:
    // 0x80006CB8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80006CBC: nop

    // 0x80006CC0: bltz        $t2, L_80006CB0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80006CC4: nop
    
            goto L_80006CB0;
    }
    // 0x80006CC4: nop

L_80006CC8:
    // 0x80006CC8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80006CCC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80006CD0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80006CD4: addiu       $t6, $a3, 0xD5
    ctx->r14 = ADD32(ctx->r7, 0XD5);
    // 0x80006CD8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80006CDC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80006CE0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80006CE4: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x80006CE8: cvt.w.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = CVT_W_S(ctx->f14.fl);
    // 0x80006CEC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80006CF0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80006CF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80006CF8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80006CFC: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x80006D00: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80006D04: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80006D08: beq         $t1, $zero, L_80006D58
    if (ctx->r9 == 0) {
        // 0x80006D0C: addiu       $t4, $a3, 0xD2
        ctx->r12 = ADD32(ctx->r7, 0XD2);
            goto L_80006D58;
    }
    // 0x80006D0C: addiu       $t4, $a3, 0xD2
    ctx->r12 = ADD32(ctx->r7, 0XD2);
    // 0x80006D10: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80006D14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80006D18: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80006D1C: sub.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80006D20: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80006D24: nop

    // 0x80006D28: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80006D2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80006D30: nop

    // 0x80006D34: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80006D38: bne         $t1, $zero, L_80006D50
    if (ctx->r9 != 0) {
        // 0x80006D3C: nop
    
            goto L_80006D50;
    }
    // 0x80006D3C: nop

    // 0x80006D40: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80006D44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006D48: b           L_80006D68
    // 0x80006D4C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80006D68;
    // 0x80006D4C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80006D50:
    // 0x80006D50: b           L_80006D68
    // 0x80006D54: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80006D68;
    // 0x80006D54: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_80006D58:
    // 0x80006D58: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80006D5C: nop

    // 0x80006D60: bltz        $t1, L_80006D50
    if (SIGNED(ctx->r9) < 0) {
        // 0x80006D64: nop
    
            goto L_80006D50;
    }
    // 0x80006D64: nop

L_80006D68:
    // 0x80006D68: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80006D6C: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x80006D70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80006D74: sll         $t3, $t2, 14
    ctx->r11 = S32(ctx->r10 << 14);
    // 0x80006D78: or          $t5, $t3, $t7
    ctx->r13 = ctx->r11 | ctx->r15;
    // 0x80006D7C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80006D80: jr          $ra
    // 0x80006D84: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x80006D84: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
L_80006D88:
    // 0x80006D88: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006D8C: lw          $a3, 0x10($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X10);
    // 0x80006D90: lui         $t0, 0x7801
    ctx->r8 = S32(0X7801 << 16);
    // 0x80006D94: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80006D98: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80006D9C: ori         $t0, $t0, 0x7801
    ctx->r8 = ctx->r8 | 0X7801;
    // 0x80006DA0: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x80006DA4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80006DA8: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x80006DAC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80006DB0: addiu       $t2, $a3, 0xD5
    ctx->r10 = ADD32(ctx->r7, 0XD5);
    // 0x80006DB4: andi        $t4, $t2, 0x3FF
    ctx->r12 = ctx->r10 & 0X3FF;
    // 0x80006DB8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80006DBC: lui         $at, 0xF646
    ctx->r1 = S32(0XF646 << 16);
    // 0x80006DC0: addiu       $t7, $a3, 0xD2
    ctx->r15 = ADD32(ctx->r7, 0XD2);
    // 0x80006DC4: andi        $t5, $t7, 0x3FF
    ctx->r13 = ctx->r15 & 0X3FF;
    // 0x80006DC8: or          $t3, $t6, $at
    ctx->r11 = ctx->r14 | ctx->r1;
    // 0x80006DCC: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x80006DD0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80006DD4: lui         $at, 0xA
    ctx->r1 = S32(0XA << 16);
    // 0x80006DD8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80006DDC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80006DE0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80006DE4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80006DE8: jr          $ra
    // 0x80006DEC: nop

    TRACE_RETURN()
    return;
    // 0x80006DEC: nop

;}
RECOMP_FUNC void func_80035490_36090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035498: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x8003549C: jal         0x8003522C
    // 0x800354A0: addiu       $a1, $a1, 0x54B4
    ctx->r5 = ADD32(ctx->r5, 0X54B4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x800354A0: addiu       $a1, $a1, 0x54B4
    ctx->r5 = ADD32(ctx->r5, 0X54B4);
    after_0:
    // 0x800354A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800354A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800354AC: jr          $ra
    // 0x800354B0: nop

    TRACE_RETURN()
    return;
    // 0x800354B0: nop

;}
RECOMP_FUNC void func_8000EA34_F634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EA34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EA38: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000EA3C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EA40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EA44: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8000EA48: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EA4C: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8000EA50: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EA54: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EA58: jal         0x800040A8
    // 0x8000EA5C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000EA5C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8000EA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EA64: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8000EA68: andi        $v0, $t6, 0x3FF
    ctx->r2 = ctx->r14 & 0X3FF;
    // 0x8000EA6C: jr          $ra
    // 0x8000EA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000EA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000FBA8_107A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FBA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000FBAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FBB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000FBB4: lhu         $a0, 0x5C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5C);
    // 0x8000FBB8: ori         $t7, $a0, 0x8000
    ctx->r15 = ctx->r4 | 0X8000;
    // 0x8000FBBC: jal         0x80038B98
    // 0x8000FBC0: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x8000FBC0: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    after_0:
    // 0x8000FBC4: jal         0x80034EF8
    // 0x8000FBC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x8000FBC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8000FBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000FBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000FBD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000FBD8: jr          $ra
    // 0x8000FBDC: nop

    TRACE_RETURN()
    return;
    // 0x8000FBDC: nop

;}
RECOMP_FUNC void alFxParamHdl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051F78: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x80051F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051F80: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x80051F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051F88: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80051F8C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80051F90: beq         $at, $zero, L_800521C0
    if (ctx->r1 == 0) {
        // 0x80051F94: lw          $t0, 0x0($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X0);
            goto L_800521C0;
    }
    // 0x80051F94: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80051F98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80051F9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80051FA0: addu        $at, $at, $t6
    gpr jr_addend_80051FA8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80051FA4: lw          $t6, -0x2AD0($at)
    ctx->r14 = ADD32(ctx->r1, -0X2AD0);
    // 0x80051FA8: jr          $t6
    // 0x80051FAC: nop

    switch (jr_addend_80051FA8 >> 2) {
        case 0: goto L_80051FB0; break;
        case 1: goto L_80051FE4; break;
        case 2: goto L_80052044; break;
        case 3: goto L_80052018; break;
        case 4: goto L_80052070; break;
        case 5: goto L_8005209C; break;
        case 6: goto L_80052104; break;
        case 7: goto L_8005217C; break;
        default: switch_error(__func__, 0x80051FA8, 0x8007D530);
    }
    // 0x80051FAC: nop

L_80051FB0:
    // 0x80051FB0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80051FB4: and         $t7, $t0, $at
    ctx->r15 = ctx->r8 & ctx->r1;
    // 0x80051FB8: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x80051FBC: bgez        $v1, L_80051FCC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80051FC0: sra         $t9, $v1, 3
        ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80051FCC;
    }
    // 0x80051FC0: sra         $t9, $v1, 3
    ctx->r25 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80051FC4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80051FC8: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80051FCC:
    // 0x80051FCC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80051FD0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80051FD4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80051FD8: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80051FDC: b           L_800521C0
    // 0x80051FE0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_800521C0;
    // 0x80051FE0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_80051FE4:
    // 0x80051FE4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80051FE8: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x80051FEC: lw          $t4, 0x20($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X20);
    // 0x80051FF0: bgez        $v1, L_80052000
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80051FF4: sra         $t5, $v1, 3
        ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80052000;
    }
    // 0x80051FF4: sra         $t5, $v1, 3
    ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80051FF8: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80051FFC: sra         $t5, $at, 3
    ctx->r13 = S32(SIGNED(ctx->r1) >> 3);
L_80052000:
    // 0x80052000: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80052004: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80052008: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005200C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x80052010: b           L_800521C0
    // 0x80052014: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
        goto L_800521C0;
    // 0x80052014: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_80052018:
    // 0x80052018: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8005201C: bgez        $v1, L_8005202C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80052020: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8005202C;
    }
    // 0x80052020: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80052024: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80052028: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_8005202C:
    // 0x8005202C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80052030: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80052034: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80052038: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x8005203C: b           L_800521C0
    // 0x80052040: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
        goto L_800521C0;
    // 0x80052040: sh          $t0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r8;
L_80052044:
    // 0x80052044: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x80052048: bgez        $v1, L_80052058
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005204C: sra         $t4, $v1, 3
        ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80052058;
    }
    // 0x8005204C: sra         $t4, $v1, 3
    ctx->r12 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80052050: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80052054: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_80052058:
    // 0x80052058: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005205C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80052060: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80052064: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80052068: b           L_800521C0
    // 0x8005206C: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
        goto L_800521C0;
    // 0x8005206C: sh          $t0, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r8;
L_80052070:
    // 0x80052070: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x80052074: bgez        $v1, L_80052084
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80052078: sra         $t1, $v1, 3
        ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80052084;
    }
    // 0x80052078: sra         $t1, $v1, 3
    ctx->r9 = S32(SIGNED(ctx->r3) >> 3);
    // 0x8005207C: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80052080: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_80052084:
    // 0x80052084: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80052088: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8005208C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80052090: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80052094: b           L_800521C0
    // 0x80052098: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
        goto L_800521C0;
    // 0x80052098: sh          $t0, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r8;
L_8005209C:
    // 0x8005209C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800520A0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800520A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800520A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800520AC: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x800520B0: lw          $t2, -0x5DD0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5DD0);
    // 0x800520B4: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x800520B8: lw          $t4, 0x44($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X44);
    // 0x800520BC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800520C0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800520C4: nop

    // 0x800520C8: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x800520CC: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x800520D0: add.d       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f0.d + ctx->f0.d;
    // 0x800520D4: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x800520D8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800520DC: bgez        $v1, L_800520EC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800520E0: sra         $t6, $v1, 3
        ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
            goto L_800520EC;
    }
    // 0x800520E0: sra         $t6, $v1, 3
    ctx->r14 = S32(SIGNED(ctx->r3) >> 3);
    // 0x800520E4: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x800520E8: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_800520EC:
    // 0x800520EC: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800520F0: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x800520F4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800520F8: addu        $t1, $t5, $t3
    ctx->r9 = ADD32(ctx->r13, ctx->r11);
    // 0x800520FC: b           L_800521C0
    // 0x80052100: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_800521C0;
    // 0x80052100: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
L_80052104:
    // 0x80052104: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x80052108: bgez        $v1, L_80052118
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005210C: sra         $t8, $v1, 3
        ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
            goto L_80052118;
    }
    // 0x8005210C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80052110: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80052114: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_80052118:
    // 0x80052118: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8005211C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80052120: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80052124: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x80052128: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8005212C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80052130: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80052134: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80052138: subu        $t6, $t2, $t4
    ctx->r14 = SUB32(ctx->r10, ctx->r12);
    // 0x8005213C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80052140: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80052144: bgez        $t6, L_8005215C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80052148: cvt.d.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
            goto L_8005215C;
    }
    // 0x80052148: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x8005214C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80052150: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80052154: nop

    // 0x80052158: add.d       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f18.d + ctx->f16.d;
L_8005215C:
    // 0x8005215C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80052160: ldc1        $f10, -0x2AB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2AB0);
    // 0x80052164: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80052168: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8005216C: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80052170: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80052174: b           L_800521C0
    // 0x80052178: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
        goto L_800521C0;
    // 0x80052178: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_8005217C:
    // 0x8005217C: bgez        $v1, L_8005218C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80052180: sra         $v0, $v1, 3
        ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
            goto L_8005218C;
    }
    // 0x80052180: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80052184: addiu       $at, $v1, 0x7
    ctx->r1 = ADD32(ctx->r3, 0X7);
    // 0x80052188: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8005218C:
    // 0x8005218C: lw          $t3, 0x20($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X20);
    // 0x80052190: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80052194: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x80052198: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8005219C: addu        $t1, $t3, $t5
    ctx->r9 = ADD32(ctx->r11, ctx->r13);
    // 0x800521A0: lw          $a1, 0x20($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X20);
    // 0x800521A4: beql        $a1, $zero, L_800521C4
    if (ctx->r5 == 0) {
        // 0x800521A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800521C4;
    }
    goto skip_0;
    // 0x800521A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800521AC: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x800521B0: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x800521B4: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x800521B8: jal         0x8004E5E0
    // 0x800521BC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x800521BC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_0:
L_800521C0:
    // 0x800521C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800521C4:
    // 0x800521C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800521C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800521CC: jr          $ra
    // 0x800521D0: nop

    TRACE_RETURN()
    return;
    // 0x800521D0: nop

;}
RECOMP_FUNC void func_8000DB78_E778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DB78: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000DB7C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000DB80: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000DB84: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000DB88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000DB8C: beq         $v0, $zero, L_8000DBB8
    if (ctx->r2 == 0) {
        // 0x8000DB90: nop
    
            goto L_8000DBB8;
    }
    // 0x8000DB90: nop

    // 0x8000DB94: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x8000DB98: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8000DB9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000DBA0: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000DBA4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8000DBA8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8000DBAC: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x8000DBB0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x8000DBB4: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
L_8000DBB8:
    // 0x8000DBB8: jr          $ra
    // 0x8000DBBC: nop

    TRACE_RETURN()
    return;
    // 0x8000DBBC: nop

;}
RECOMP_FUNC void func_80034E38_35A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034E40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034E44: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80034E48: jal         0x80034C4C
    // 0x80034E4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80034C4C_3584C(rdram, ctx);
        goto after_0;
    // 0x80034E4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x80034E50: jal         0x80034D24
    // 0x80034E54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80034E54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034E60: jr          $ra
    // 0x80034E64: nop

    TRACE_RETURN()
    return;
    // 0x80034E64: nop

;}
RECOMP_FUNC void func_80024038_24C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024038: bgez        $a0, L_80024048
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002403C: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80024048;
    }
    // 0x8002403C: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80024040: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80024044: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80024048:
    // 0x80024048: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8002404C: addiu       $t8, $t8, -0x39F8
    ctx->r24 = ADD32(ctx->r24, -0X39F8);
    // 0x80024050: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80024054: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80024058: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8002405C: bgez        $a0, L_80024070
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80024060: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_80024070;
    }
    // 0x80024060: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x80024064: beq         $t0, $zero, L_80024070
    if (ctx->r8 == 0) {
        // 0x80024068: nop
    
            goto L_80024070;
    }
    // 0x80024068: nop

    // 0x8002406C: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80024070:
    // 0x80024070: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80024074: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80024078: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x8002407C: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80024080: jr          $ra
    // 0x80024084: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x80024084: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void func_80020440_21040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020440: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80020444: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80020448: addiu       $v1, $sp, 0x30
    ctx->r3 = ADD32(ctx->r29, 0X30);
    // 0x8002044C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80020450: addiu       $t6, $t6, -0x48C4
    ctx->r14 = ADD32(ctx->r14, -0X48C4);
    // 0x80020454: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020458: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002045C: addiu       $t9, $t6, 0x30
    ctx->r25 = ADD32(ctx->r14, 0X30);
    // 0x80020460: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
L_80020464:
    // 0x80020464: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80020468: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002046C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80020470: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80020474: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80020478: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x8002047C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80020480: bne         $t6, $t9, L_80020464
    if (ctx->r14 != ctx->r25) {
        // 0x80020484: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80020464;
    }
    // 0x80020484: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80020488: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002048C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80020490: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x80020494: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80020498: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x8002049C: addiu       $t5, $t1, 0x7FFF
    ctx->r13 = ADD32(ctx->r9, 0X7FFF);
    // 0x800204A0: sh          $at, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r1;
    // 0x800204A4: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x800204A8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800204AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800204B0: sh          $t3, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r11;
    // 0x800204B4: lbu         $t8, 0x2DE5($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X2DE5);
    // 0x800204B8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800204BC: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x800204C0: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x800204C4: jal         0x800203D4
    // 0x800204C8: lhu         $a1, 0x2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2);
    func_800203D4_20FD4(rdram, ctx);
        goto after_0;
    // 0x800204C8: lhu         $a1, 0x2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2);
    after_0:
    // 0x800204CC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800204D0: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800204D4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800204D8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800204DC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800204E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800204E4: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x800204E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800204EC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800204F0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800204F4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800204F8: lbu         $t6, 0x2DE4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2DE4);
    // 0x800204FC: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x80020500: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x80020504: sltiu       $at, $t6, 0xD
    ctx->r1 = ctx->r14 < 0XD ? 1 : 0;
    // 0x80020508: beq         $at, $zero, L_800206BC
    if (ctx->r1 == 0) {
        // 0x8002050C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800206BC;
    }
    // 0x8002050C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80020510: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80020514: addu        $at, $at, $t6
    gpr jr_addend_8002051C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80020518: lw          $t6, -0x457C($at)
    ctx->r14 = ADD32(ctx->r1, -0X457C);
    // 0x8002051C: jr          $t6
    // 0x80020520: nop

    switch (jr_addend_8002051C >> 2) {
        case 0: goto L_80020524; break;
        case 1: goto L_80020524; break;
        case 2: goto L_80020524; break;
        case 3: goto L_80020524; break;
        case 4: goto L_80020538; break;
        case 5: goto L_8002054C; break;
        case 6: goto L_80020584; break;
        case 7: goto L_80020658; break;
        case 8: goto L_8002066C; break;
        case 9: goto L_8002054C; break;
        case 10: goto L_80020680; break;
        case 11: goto L_80020694; break;
        case 12: goto L_800206A8; break;
        default: switch_error(__func__, 0x8002051C, 0x8007BA84);
    }
    // 0x80020520: nop

L_80020524:
    // 0x80020524: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x80020528: jal         0x8003488C
    // 0x8002052C: addiu       $a0, $a0, 0x71D0
    ctx->r4 = ADD32(ctx->r4, 0X71D0);
    func_8003488C_3548C(rdram, ctx);
        goto after_1;
    // 0x8002052C: addiu       $a0, $a0, 0x71D0
    ctx->r4 = ADD32(ctx->r4, 0X71D0);
    after_1:
    // 0x80020530: b           L_800206C8
    // 0x80020534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020538:
    // 0x80020538: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8002053C: jal         0x8003488C
    // 0x80020540: addiu       $a0, $a0, -0x4A60
    ctx->r4 = ADD32(ctx->r4, -0X4A60);
    func_8003488C_3548C(rdram, ctx);
        goto after_2;
    // 0x80020540: addiu       $a0, $a0, -0x4A60
    ctx->r4 = ADD32(ctx->r4, -0X4A60);
    after_2:
    // 0x80020544: b           L_800206C8
    // 0x80020548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002054C:
    // 0x8002054C: lhu         $t2, 0x2E16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2E16);
    // 0x80020550: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80020554: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80020558: beq         $t2, $at, L_80020574
    if (ctx->r10 == ctx->r1) {
        // 0x8002055C: nop
    
            goto L_80020574;
    }
    // 0x8002055C: nop

    // 0x80020560: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80020564: jal         0x8003488C
    // 0x80020568: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    func_8003488C_3548C(rdram, ctx);
        goto after_3;
    // 0x80020568: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    after_3:
    // 0x8002056C: b           L_800206C8
    // 0x80020570: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020570: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020574:
    // 0x80020574: jal         0x8003488C
    // 0x80020578: addiu       $a0, $a0, -0x49E0
    ctx->r4 = ADD32(ctx->r4, -0X49E0);
    func_8003488C_3548C(rdram, ctx);
        goto after_4;
    // 0x80020578: addiu       $a0, $a0, -0x49E0
    ctx->r4 = ADD32(ctx->r4, -0X49E0);
    after_4:
    // 0x8002057C: b           L_800206C8
    // 0x80020580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020584:
    // 0x80020584: addiu       $t0, $t1, 0x7FFF
    ctx->r8 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020588: lhu         $t0, 0x2DFD($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X2DFD);
    // 0x8002058C: addiu       $at, $zero, 0x1B8
    ctx->r1 = ADD32(0, 0X1B8);
    // 0x80020590: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80020594: bne         $t0, $at, L_800205AC
    if (ctx->r8 != ctx->r1) {
        // 0x80020598: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800205AC;
    }
    // 0x80020598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002059C: jal         0x8020F3B8
    // 0x800205A0: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_8020F3B8_66E368(rdram, ctx);
        goto after_5;
    // 0x800205A0: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_5:
    // 0x800205A4: b           L_800206C8
    // 0x800205A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x800205A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800205AC:
    // 0x800205AC: addiu       $at, $zero, 0x1B9
    ctx->r1 = ADD32(0, 0X1B9);
    // 0x800205B0: bne         $t0, $at, L_800205D0
    if (ctx->r8 != ctx->r1) {
        // 0x800205B4: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_800205D0;
    }
    // 0x800205B4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800205B8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800205BC: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    // 0x800205C0: jal         0x8020F3B8
    // 0x800205C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8020F3B8_66E368(rdram, ctx);
        goto after_6;
    // 0x800205C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800205C8: b           L_800206C8
    // 0x800205CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x800205CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800205D0:
    // 0x800205D0: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x800205D4: lw          $t3, 0x2A4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2A4);
    // 0x800205D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800205DC: addiu       $t9, $t1, 0x7FFF
    ctx->r25 = ADD32(ctx->r9, 0X7FFF);
    // 0x800205E0: beql        $t3, $zero, L_8002060C
    if (ctx->r11 == 0) {
        // 0x800205E4: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_8002060C;
    }
    goto skip_0;
    // 0x800205E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
    // 0x800205E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800205EC:
    // 0x800205EC: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x800205F0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800205F4: addu        $t8, $v1, $t5
    ctx->r24 = ADD32(ctx->r3, ctx->r13);
    // 0x800205F8: lw          $t7, 0x2A4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X2A4);
    // 0x800205FC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80020600: bnel        $t7, $zero, L_800205EC
    if (ctx->r15 != 0) {
        // 0x80020604: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800205EC;
    }
    goto skip_1;
    // 0x80020604: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x80020608: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_8002060C:
    // 0x8002060C: lh          $t9, 0x2FE5($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2FE5);
    // 0x80020610: addiu       $t6, $t1, 0x7FFF
    ctx->r14 = ADD32(ctx->r9, 0X7FFF);
    // 0x80020614: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80020618: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002061C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80020620: lw          $a3, -0x3A24($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3A24);
    // 0x80020624: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80020628: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    // 0x8002062C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80020630: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80020634: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80020638: lh          $t6, 0x2FE9($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2FE9);
    // 0x8002063C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80020640: nop

    // 0x80020644: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020648: jal         0x8020F170
    // 0x8002064C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_8020F170_66E120(rdram, ctx);
        goto after_7;
    // 0x8002064C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80020650: b           L_800206C8
    // 0x80020654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020658:
    // 0x80020658: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8002065C: jal         0x8003488C
    // 0x80020660: addiu       $a0, $a0, 0x1EA0
    ctx->r4 = ADD32(ctx->r4, 0X1EA0);
    func_8003488C_3548C(rdram, ctx);
        goto after_8;
    // 0x80020660: addiu       $a0, $a0, 0x1EA0
    ctx->r4 = ADD32(ctx->r4, 0X1EA0);
    after_8:
    // 0x80020664: b           L_800206C8
    // 0x80020668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002066C:
    // 0x8002066C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80020670: jal         0x8003488C
    // 0x80020674: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    func_8003488C_3548C(rdram, ctx);
        goto after_9;
    // 0x80020674: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    after_9:
    // 0x80020678: b           L_800206C8
    // 0x8002067C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x8002067C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020680:
    // 0x80020680: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80020684: jal         0x8003488C
    // 0x80020688: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    func_8003488C_3548C(rdram, ctx);
        goto after_10;
    // 0x80020688: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    after_10:
    // 0x8002068C: b           L_800206C8
    // 0x80020690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x80020690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80020694:
    // 0x80020694: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80020698: jal         0x8003488C
    // 0x8002069C: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    func_8003488C_3548C(rdram, ctx);
        goto after_11;
    // 0x8002069C: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    after_11:
    // 0x800206A0: b           L_800206C8
    // 0x800206A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x800206A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800206A8:
    // 0x800206A8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800206AC: jal         0x8003488C
    // 0x800206B0: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    func_8003488C_3548C(rdram, ctx);
        goto after_12;
    // 0x800206B0: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    after_12:
    // 0x800206B4: b           L_800206C8
    // 0x800206B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800206C8;
    // 0x800206B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800206BC:
    // 0x800206BC: jal         0x8003488C
    // 0x800206C0: addiu       $a0, $a0, 0x71D0
    ctx->r4 = ADD32(ctx->r4, 0X71D0);
    func_8003488C_3548C(rdram, ctx);
        goto after_13;
    // 0x800206C0: addiu       $a0, $a0, 0x71D0
    ctx->r4 = ADD32(ctx->r4, 0X71D0);
    after_13:
    // 0x800206C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800206C8:
    // 0x800206C8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800206CC: jr          $ra
    // 0x800206D0: nop

    TRACE_RETURN()
    return;
    // 0x800206D0: nop

;}
RECOMP_FUNC void func_8003F23C_3FE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F23C: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003F240: lw          $t6, 0x7858($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7858);
    // 0x8003F244: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003F248: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F24C: addiu       $v0, $v0, 0x78E8
    ctx->r2 = ADD32(ctx->r2, 0X78E8);
    // 0x8003F250: sw          $t6, 0x78F4($at)
    MEM_W(0X78F4, ctx->r1) = ctx->r14;
    // 0x8003F254: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8003F258: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003F25C: lw          $a0, 0x7744($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X7744);
    // 0x8003F260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F264: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F26C: sw          $t7, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = ctx->r15;
    // 0x8003F270: jal         0x800141C4
    // 0x8003F274: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8003F274: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x8003F278: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F27C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F280: sw          $v0, 0x77FC($at)
    MEM_W(0X77FC, ctx->r1) = ctx->r2;
    // 0x8003F284: jal         0x80001E50
    // 0x8003F288: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    func_80001E50_2A50(rdram, ctx);
        goto after_1;
    // 0x8003F288: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    after_1:
    // 0x8003F28C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F290: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F294: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F298: sw          $v0, 0x78EC($at)
    MEM_W(0X78EC, ctx->r1) = ctx->r2;
    // 0x8003F29C: lw          $a1, 0x78E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X78E8);
    // 0x8003F2A0: jal         0x8003DDC4
    // 0x8003F2A4: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    func_8003DDC4_3E9C4(rdram, ctx);
        goto after_2;
    // 0x8003F2A4: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    after_2:
    // 0x8003F2A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003F2AC: lw          $a0, 0x7740($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X7740);
    // 0x8003F2B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F2B4: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F2B8: jal         0x8003DE48
    // 0x8003F2BC: sw          $t9, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r25;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_3;
    // 0x8003F2BC: sw          $t9, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r25;
    after_3:
    // 0x8003F2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F2C4: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003F2C8: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
    // 0x8003F2CC: jr          $ra
    // 0x8003F2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003F2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030730_31330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030730: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x80030734: lwc1        $f12, 0x14C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030738: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003073C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80030740: mul.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80030744: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80030748: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8003074C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80030750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80030754: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80030758: addiu       $s0, $sp, 0xF0
    ctx->r16 = ADD32(ctx->r29, 0XF0);
    // 0x8003075C: add.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80030760: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80030764: sw          $a0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r4;
    // 0x80030768: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x8003076C: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x80030770: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x80030774: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x80030778: sh          $zero, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = 0;
    // 0x8003077C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x80030780: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030788: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x8003078C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x80030790: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80030794: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x80030798: swc1        $f20, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f20.u32l;
    // 0x8003079C: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x800307A0: swc1        $f20, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f20.u32l;
    // 0x800307A4: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x800307A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800307AC: jal         0x800322A8
    // 0x800307B0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_0;
    // 0x800307B0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800307B4: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x800307B8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800307BC: bne         $t6, $at, L_80030870
    if (ctx->r14 != ctx->r1) {
        // 0x800307C0: nop
    
            goto L_80030870;
    }
    // 0x800307C0: nop

    // 0x800307C4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800307C8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800307CC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800307D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800307D4: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x800307D8: nop

    // 0x800307DC: bc1f        L_80030870
    if (!c1cs) {
        // 0x800307E0: nop
    
            goto L_80030870;
    }
    // 0x800307E0: nop

    // 0x800307E4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800307E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800307EC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800307F0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800307F4: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x800307F8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800307FC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030800: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030804: bc1f        L_80030870
    if (!c1cs) {
        // 0x80030808: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80030870;
    }
    // 0x80030808: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003080C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80030810: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x80030814: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x80030818: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x8003081C: bc1fl       L_8003084C
    if (!c1cs) {
        // 0x80030820: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_8003084C;
    }
    goto skip_0;
    // 0x80030820: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_0:
L_80030824:
    // 0x80030824: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80030828: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8003082C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80030830: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80030834: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80030838: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8003083C: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80030840: bne         $t0, $t9, L_80030824
    if (ctx->r8 != ctx->r25) {
        // 0x80030844: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80030824;
    }
    // 0x80030844: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80030848: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_8003084C:
    // 0x8003084C: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030850: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80030854: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030858: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8003085C: bc1f        L_80030868
    if (!c1cs) {
        // 0x80030860: nop
    
            goto L_80030868;
    }
    // 0x80030860: nop

    // 0x80030864: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_80030868:
    // 0x80030868: jal         0x80030688
    // 0x8003086C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_1;
    // 0x8003086C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
L_80030870:
    // 0x80030870: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030874: lwc1        $f8, -0x3A70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3A70);
    // 0x80030878: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003087C: lwc1        $f10, -0x3A6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A6C);
    // 0x80030880: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030888: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8003088C: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030890: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030894: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030898: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8003089C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800308A0: jal         0x800322A8
    // 0x800308A4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_2;
    // 0x800308A4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800308A8: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x800308AC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800308B0: bne         $t1, $at, L_800309A8
    if (ctx->r9 != ctx->r1) {
        // 0x800308B4: nop
    
            goto L_800309A8;
    }
    // 0x800308B4: nop

    // 0x800308B8: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800308BC: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800308C0: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800308C4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800308C8: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x800308CC: nop

    // 0x800308D0: bc1f        L_800309A8
    if (!c1cs) {
        // 0x800308D4: nop
    
            goto L_800309A8;
    }
    // 0x800308D4: nop

    // 0x800308D8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800308DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800308E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800308E4: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800308E8: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x800308EC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800308F0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800308F4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800308F8: bc1f        L_800309A8
    if (!c1cs) {
        // 0x800308FC: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_800309A8;
    }
    // 0x800308FC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030900: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80030904: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80030908: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x8003090C: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x80030910: bc1f        L_8003093C
    if (!c1cs) {
        // 0x80030914: addiu       $t4, $s0, 0x48
        ctx->r12 = ADD32(ctx->r16, 0X48);
            goto L_8003093C;
    }
    // 0x80030914: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
L_80030918:
    // 0x80030918: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8003091C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80030920: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80030924: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80030928: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8003092C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80030930: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80030934: bne         $t5, $t4, L_80030918
    if (ctx->r13 != ctx->r12) {
        // 0x80030938: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80030918;
    }
    // 0x80030938: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
L_8003093C:
    // 0x8003093C: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030940: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030944: ldc1        $f18, -0x3A68($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3A68);
    // 0x80030948: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x8003094C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030950: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80030954: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030958: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8003095C: nop

    // 0x80030960: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x80030964: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80030968: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8003096C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030970: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030974: bc1fl       L_80030984
    if (!c1cs) {
        // 0x80030978: cvt.s.d     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
            goto L_80030984;
    }
    goto skip_1;
    // 0x80030978: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    skip_1:
    // 0x8003097C: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80030980: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
L_80030984:
    // 0x80030984: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80030988: sub.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8003098C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030990: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80030994: bc1f        L_800309A0
    if (!c1cs) {
        // 0x80030998: nop
    
            goto L_800309A0;
    }
    // 0x80030998: nop

    // 0x8003099C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800309A0:
    // 0x800309A0: jal         0x80030688
    // 0x800309A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_3;
    // 0x800309A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_800309A8:
    // 0x800309A8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800309AC: lwc1        $f18, -0x3A60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3A60);
    // 0x800309B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800309B4: lwc1        $f4, -0x3A5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3A5C);
    // 0x800309B8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800309BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800309C0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800309C4: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x800309C8: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800309CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800309D0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800309D4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800309D8: jal         0x800322A8
    // 0x800309DC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_4;
    // 0x800309DC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800309E0: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x800309E4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800309E8: bnel        $t6, $at, L_80030AE4
    if (ctx->r14 != ctx->r1) {
        // 0x800309EC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80030AE4;
    }
    goto skip_2;
    // 0x800309EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x800309F0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800309F4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800309F8: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800309FC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030A00: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x80030A04: nop

    // 0x80030A08: bc1fl       L_80030AE4
    if (!c1cs) {
        // 0x80030A0C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80030AE4;
    }
    goto skip_3;
    // 0x80030A0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x80030A10: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80030A14: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80030A18: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80030A1C: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030A20: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80030A24: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030A28: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030A2C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030A30: bc1f        L_80030AE0
    if (!c1cs) {
        // 0x80030A34: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80030AE0;
    }
    // 0x80030A34: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030A38: ldc1        $f6, -0x3A58($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3A58);
    // 0x80030A3C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80030A40: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030A44: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80030A48: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80030A4C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80030A50: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80030A54: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030A58: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80030A5C: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x80030A60: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80030A64: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x80030A68: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x80030A6C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030A70: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80030A74: bc1f        L_80030AA0
    if (!c1cs) {
        // 0x80030A78: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_80030AA0;
    }
    // 0x80030A78: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80030A7C:
    // 0x80030A7C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80030A80: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80030A84: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80030A88: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80030A8C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80030A90: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80030A94: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80030A98: bne         $t7, $t0, L_80030A7C
    if (ctx->r15 != ctx->r8) {
        // 0x80030A9C: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80030A7C;
    }
    // 0x80030A9C: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
L_80030AA0:
    // 0x80030AA0: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030AA4: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80030AA8: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030AAC: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030AB0: bc1fl       L_80030AC0
    if (!c1cs) {
        // 0x80030AB4: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80030AC0;
    }
    goto skip_4;
    // 0x80030AB4: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_4:
    // 0x80030AB8: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80030ABC: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80030AC0:
    // 0x80030AC0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80030AC4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030AC8: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80030ACC: bc1f        L_80030AD8
    if (!c1cs) {
        // 0x80030AD0: nop
    
            goto L_80030AD8;
    }
    // 0x80030AD0: nop

    // 0x80030AD4: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030AD8:
    // 0x80030AD8: jal         0x80030688
    // 0x80030ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_5;
    // 0x80030ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
L_80030AE0:
    // 0x80030AE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80030AE4:
    // 0x80030AE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80030AE8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030AF0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030AF4: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030AF8: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030AFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80030B00: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030B04: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80030B08: jal         0x800322A8
    // 0x80030B0C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_6;
    // 0x80030B0C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80030B10: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80030B14: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030B18: bne         $t1, $at, L_80030BCC
    if (ctx->r9 != ctx->r1) {
        // 0x80030B1C: nop
    
            goto L_80030BCC;
    }
    // 0x80030B1C: nop

    // 0x80030B20: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030B24: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030B28: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030B2C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030B30: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80030B34: nop

    // 0x80030B38: bc1f        L_80030BCC
    if (!c1cs) {
        // 0x80030B3C: nop
    
            goto L_80030BCC;
    }
    // 0x80030B3C: nop

    // 0x80030B40: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80030B44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80030B48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80030B4C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030B50: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80030B54: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030B58: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030B5C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030B60: bc1f        L_80030BCC
    if (!c1cs) {
        // 0x80030B64: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80030BCC;
    }
    // 0x80030B64: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030B68: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80030B6C: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x80030B70: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x80030B74: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x80030B78: bc1fl       L_80030BA8
    if (!c1cs) {
        // 0x80030B7C: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80030BA8;
    }
    goto skip_5;
    // 0x80030B7C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_5:
L_80030B80:
    // 0x80030B80: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80030B84: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80030B88: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80030B8C: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x80030B90: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80030B94: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80030B98: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80030B9C: bne         $t2, $t5, L_80030B80
    if (ctx->r10 != ctx->r13) {
        // 0x80030BA0: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80030B80;
    }
    // 0x80030BA0: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x80030BA4: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80030BA8:
    // 0x80030BA8: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030BAC: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80030BB0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030BB4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80030BB8: bc1f        L_80030BC4
    if (!c1cs) {
        // 0x80030BBC: nop
    
            goto L_80030BC4;
    }
    // 0x80030BBC: nop

    // 0x80030BC0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030BC4:
    // 0x80030BC4: jal         0x80030688
    // 0x80030BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_7;
    // 0x80030BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_7:
L_80030BCC:
    // 0x80030BCC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030BD0: lwc1        $f10, -0x3A50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A50);
    // 0x80030BD4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030BD8: lwc1        $f16, -0x3A4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3A4C);
    // 0x80030BDC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030BE4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030BE8: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030BEC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030BF0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030BF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80030BF8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80030BFC: jal         0x800322A8
    // 0x80030C00: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_8;
    // 0x80030C00: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80030C04: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80030C08: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030C0C: bne         $t6, $at, L_80030D04
    if (ctx->r14 != ctx->r1) {
        // 0x80030C10: nop
    
            goto L_80030D04;
    }
    // 0x80030C10: nop

    // 0x80030C14: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030C18: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030C1C: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030C20: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030C24: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80030C28: nop

    // 0x80030C2C: bc1f        L_80030D04
    if (!c1cs) {
        // 0x80030C30: nop
    
            goto L_80030D04;
    }
    // 0x80030C30: nop

    // 0x80030C34: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80030C38: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80030C3C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80030C40: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030C44: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80030C48: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030C4C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030C50: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030C54: bc1f        L_80030D04
    if (!c1cs) {
        // 0x80030C58: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80030D04;
    }
    // 0x80030C58: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030C5C: ldc1        $f18, -0x3A48($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3A48);
    // 0x80030C60: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x80030C64: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030C68: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80030C6C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80030C70: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80030C74: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80030C78: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030C7C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80030C80: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x80030C84: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80030C88: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x80030C8C: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x80030C90: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030C94: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x80030C98: bc1f        L_80030CC4
    if (!c1cs) {
        // 0x80030C9C: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_80030CC4;
    }
    // 0x80030C9C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80030CA0:
    // 0x80030CA0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80030CA4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80030CA8: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80030CAC: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80030CB0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80030CB4: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80030CB8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80030CBC: bne         $t8, $t7, L_80030CA0
    if (ctx->r24 != ctx->r15) {
        // 0x80030CC0: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80030CA0;
    }
    // 0x80030CC0: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_80030CC4:
    // 0x80030CC4: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030CC8: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80030CCC: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030CD0: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030CD4: bc1fl       L_80030CE4
    if (!c1cs) {
        // 0x80030CD8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80030CE4;
    }
    goto skip_6;
    // 0x80030CD8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_6:
    // 0x80030CDC: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80030CE0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80030CE4:
    // 0x80030CE4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80030CE8: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030CEC: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80030CF0: bc1f        L_80030CFC
    if (!c1cs) {
        // 0x80030CF4: nop
    
            goto L_80030CFC;
    }
    // 0x80030CF4: nop

    // 0x80030CF8: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030CFC:
    // 0x80030CFC: jal         0x80030688
    // 0x80030D00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_9;
    // 0x80030D00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_9:
L_80030D04:
    // 0x80030D04: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030D08: lwc1        $f18, -0x3A40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3A40);
    // 0x80030D0C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030D10: lwc1        $f4, -0x3A3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3A3C);
    // 0x80030D14: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030D1C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030D20: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030D24: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030D28: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030D2C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80030D30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80030D34: jal         0x800322A8
    // 0x80030D38: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_10;
    // 0x80030D38: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x80030D3C: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80030D40: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030D44: bnel        $t1, $at, L_80030E40
    if (ctx->r9 != ctx->r1) {
        // 0x80030D48: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80030E40;
    }
    goto skip_7;
    // 0x80030D48: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_7:
    // 0x80030D4C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030D50: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030D54: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030D58: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030D5C: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x80030D60: nop

    // 0x80030D64: bc1fl       L_80030E40
    if (!c1cs) {
        // 0x80030D68: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80030E40;
    }
    goto skip_8;
    // 0x80030D68: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_8:
    // 0x80030D6C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80030D70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80030D74: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80030D78: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030D7C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80030D80: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030D84: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030D88: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030D8C: bc1f        L_80030E3C
    if (!c1cs) {
        // 0x80030D90: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80030E3C;
    }
    // 0x80030D90: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030D94: ldc1        $f6, -0x3A38($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3A38);
    // 0x80030D98: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80030D9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030DA0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80030DA4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80030DA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80030DAC: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80030DB0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030DB4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80030DB8: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x80030DBC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80030DC0: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x80030DC4: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x80030DC8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030DCC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80030DD0: bc1f        L_80030DFC
    if (!c1cs) {
        // 0x80030DD4: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_80030DFC;
    }
    // 0x80030DD4: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80030DD8:
    // 0x80030DD8: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80030DDC: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80030DE0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80030DE4: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x80030DE8: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x80030DEC: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x80030DF0: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x80030DF4: bne         $t3, $t2, L_80030DD8
    if (ctx->r11 != ctx->r10) {
        // 0x80030DF8: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_80030DD8;
    }
    // 0x80030DF8: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
L_80030DFC:
    // 0x80030DFC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80030E00: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80030E04: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030E08: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030E0C: bc1fl       L_80030E1C
    if (!c1cs) {
        // 0x80030E10: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80030E1C;
    }
    goto skip_9;
    // 0x80030E10: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_9:
    // 0x80030E14: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80030E18: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80030E1C:
    // 0x80030E1C: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80030E20: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80030E24: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80030E28: bc1f        L_80030E34
    if (!c1cs) {
        // 0x80030E2C: nop
    
            goto L_80030E34;
    }
    // 0x80030E2C: nop

    // 0x80030E30: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80030E34:
    // 0x80030E34: jal         0x80030688
    // 0x80030E38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_11;
    // 0x80030E38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_11:
L_80030E3C:
    // 0x80030E3C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80030E40:
    // 0x80030E40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80030E44: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030E4C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030E50: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030E54: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030E58: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030E5C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80030E60: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80030E64: jal         0x800322A8
    // 0x80030E68: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_12;
    // 0x80030E68: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x80030E6C: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80030E70: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030E74: bne         $t6, $at, L_80030F28
    if (ctx->r14 != ctx->r1) {
        // 0x80030E78: nop
    
            goto L_80030F28;
    }
    // 0x80030E78: nop

    // 0x80030E7C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030E80: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030E84: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030E88: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030E8C: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80030E90: nop

    // 0x80030E94: bc1f        L_80030F28
    if (!c1cs) {
        // 0x80030E98: nop
    
            goto L_80030F28;
    }
    // 0x80030E98: nop

    // 0x80030E9C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80030EA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80030EA4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80030EA8: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030EAC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80030EB0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030EB4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030EB8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030EBC: bc1f        L_80030F28
    if (!c1cs) {
        // 0x80030EC0: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80030F28;
    }
    // 0x80030EC0: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030EC4: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80030EC8: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x80030ECC: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x80030ED0: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x80030ED4: bc1fl       L_80030F04
    if (!c1cs) {
        // 0x80030ED8: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_80030F04;
    }
    goto skip_10;
    // 0x80030ED8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_10:
L_80030EDC:
    // 0x80030EDC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80030EE0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80030EE4: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80030EE8: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x80030EEC: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80030EF0: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x80030EF4: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80030EF8: bne         $t9, $t8, L_80030EDC
    if (ctx->r25 != ctx->r24) {
        // 0x80030EFC: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_80030EDC;
    }
    // 0x80030EFC: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x80030F00: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_80030F04:
    // 0x80030F04: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030F08: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80030F0C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80030F10: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80030F14: bc1f        L_80030F20
    if (!c1cs) {
        // 0x80030F18: nop
    
            goto L_80030F20;
    }
    // 0x80030F18: nop

    // 0x80030F1C: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_80030F20:
    // 0x80030F20: jal         0x80030688
    // 0x80030F24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_13;
    // 0x80030F24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_13:
L_80030F28:
    // 0x80030F28: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030F2C: lwc1        $f10, -0x3A30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A30);
    // 0x80030F30: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030F34: lwc1        $f16, -0x3A2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3A2C);
    // 0x80030F38: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80030F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030F40: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80030F44: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80030F48: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80030F4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80030F50: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80030F54: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80030F58: jal         0x800322A8
    // 0x80030F5C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_14;
    // 0x80030F5C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x80030F60: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80030F64: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80030F68: bne         $t1, $at, L_80031060
    if (ctx->r9 != ctx->r1) {
        // 0x80030F6C: nop
    
            goto L_80031060;
    }
    // 0x80030F6C: nop

    // 0x80030F70: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80030F74: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80030F78: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80030F7C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030F80: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80030F84: nop

    // 0x80030F88: bc1f        L_80031060
    if (!c1cs) {
        // 0x80030F8C: nop
    
            goto L_80031060;
    }
    // 0x80030F8C: nop

    // 0x80030F90: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80030F94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80030F98: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80030F9C: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80030FA0: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80030FA4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80030FA8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80030FAC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80030FB0: bc1f        L_80031060
    if (!c1cs) {
        // 0x80030FB4: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031060;
    }
    // 0x80030FB4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80030FB8: ldc1        $f18, -0x3A28($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3A28);
    // 0x80030FBC: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x80030FC0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80030FC4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80030FC8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80030FCC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80030FD0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80030FD4: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80030FD8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80030FDC: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x80030FE0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80030FE4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80030FE8: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x80030FEC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80030FF0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x80030FF4: bc1f        L_80031020
    if (!c1cs) {
        // 0x80030FF8: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_80031020;
    }
    // 0x80030FF8: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80030FFC:
    // 0x80030FFC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80031000: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80031004: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80031008: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x8003100C: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x80031010: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x80031014: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x80031018: bne         $t4, $t3, L_80030FFC
    if (ctx->r12 != ctx->r11) {
        // 0x8003101C: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_80030FFC;
    }
    // 0x8003101C: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
L_80031020:
    // 0x80031020: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031024: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80031028: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8003102C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031030: bc1fl       L_80031040
    if (!c1cs) {
        // 0x80031034: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031040;
    }
    goto skip_11;
    // 0x80031034: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_11:
    // 0x80031038: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x8003103C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031040:
    // 0x80031040: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80031044: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031048: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x8003104C: bc1f        L_80031058
    if (!c1cs) {
        // 0x80031050: nop
    
            goto L_80031058;
    }
    // 0x80031050: nop

    // 0x80031054: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031058:
    // 0x80031058: jal         0x80030688
    // 0x8003105C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_15;
    // 0x8003105C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_15:
L_80031060:
    // 0x80031060: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031064: lwc1        $f18, -0x3A20($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3A20);
    // 0x80031068: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003106C: lwc1        $f4, -0x3A1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3A1C);
    // 0x80031070: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031078: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x8003107C: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x80031080: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031084: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031088: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8003108C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80031090: jal         0x800322A8
    // 0x80031094: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_16;
    // 0x80031094: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x80031098: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8003109C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800310A0: bnel        $t6, $at, L_8003119C
    if (ctx->r14 != ctx->r1) {
        // 0x800310A4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8003119C;
    }
    goto skip_12;
    // 0x800310A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_12:
    // 0x800310A8: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800310AC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800310B0: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800310B4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800310B8: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x800310BC: nop

    // 0x800310C0: bc1fl       L_8003119C
    if (!c1cs) {
        // 0x800310C4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8003119C;
    }
    goto skip_13;
    // 0x800310C4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_13:
    // 0x800310C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800310CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800310D0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800310D4: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x800310D8: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x800310DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800310E0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800310E4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800310E8: bc1f        L_80031198
    if (!c1cs) {
        // 0x800310EC: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031198;
    }
    // 0x800310EC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800310F0: ldc1        $f6, -0x3A18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3A18);
    // 0x800310F4: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x800310F8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800310FC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80031100: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80031104: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80031108: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8003110C: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031110: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80031114: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x80031118: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8003111C: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x80031120: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x80031124: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031128: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8003112C: bc1f        L_80031158
    if (!c1cs) {
        // 0x80031130: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_80031158;
    }
    // 0x80031130: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80031134:
    // 0x80031134: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80031138: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8003113C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80031140: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80031144: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80031148: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8003114C: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80031150: bne         $t0, $t9, L_80031134
    if (ctx->r8 != ctx->r25) {
        // 0x80031154: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80031134;
    }
    // 0x80031154: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
L_80031158:
    // 0x80031158: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8003115C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80031160: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031164: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031168: bc1fl       L_80031178
    if (!c1cs) {
        // 0x8003116C: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031178;
    }
    goto skip_14;
    // 0x8003116C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_14:
    // 0x80031170: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031174: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031178:
    // 0x80031178: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8003117C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031180: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031184: bc1f        L_80031190
    if (!c1cs) {
        // 0x80031188: nop
    
            goto L_80031190;
    }
    // 0x80031188: nop

    // 0x8003118C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031190:
    // 0x80031190: jal         0x80030688
    // 0x80031194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_17;
    // 0x80031194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_17:
L_80031198:
    // 0x80031198: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8003119C:
    // 0x8003119C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800311A0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800311A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800311A8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800311AC: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x800311B0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800311B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x800311B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800311BC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x800311C0: jal         0x800322A8
    // 0x800311C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_18;
    // 0x800311C4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x800311C8: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x800311CC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800311D0: bne         $t1, $at, L_80031284
    if (ctx->r9 != ctx->r1) {
        // 0x800311D4: nop
    
            goto L_80031284;
    }
    // 0x800311D4: nop

    // 0x800311D8: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800311DC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800311E0: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800311E4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800311E8: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x800311EC: nop

    // 0x800311F0: bc1f        L_80031284
    if (!c1cs) {
        // 0x800311F4: nop
    
            goto L_80031284;
    }
    // 0x800311F4: nop

    // 0x800311F8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800311FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80031200: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80031204: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031208: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8003120C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031210: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031214: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031218: bc1f        L_80031284
    if (!c1cs) {
        // 0x8003121C: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80031284;
    }
    // 0x8003121C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031220: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80031224: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x80031228: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x8003122C: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
    // 0x80031230: bc1fl       L_80031260
    if (!c1cs) {
        // 0x80031234: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031260;
    }
    goto skip_15;
    // 0x80031234: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_15:
L_80031238:
    // 0x80031238: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8003123C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80031240: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80031244: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80031248: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8003124C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80031250: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80031254: bne         $t5, $t4, L_80031238
    if (ctx->r13 != ctx->r12) {
        // 0x80031258: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80031238;
    }
    // 0x80031258: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x8003125C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031260:
    // 0x80031260: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031264: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80031268: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8003126C: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031270: bc1f        L_8003127C
    if (!c1cs) {
        // 0x80031274: nop
    
            goto L_8003127C;
    }
    // 0x80031274: nop

    // 0x80031278: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_8003127C:
    // 0x8003127C: jal         0x80030688
    // 0x80031280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_19;
    // 0x80031280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_19:
L_80031284:
    // 0x80031284: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031288: lwc1        $f10, -0x3A10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3A10);
    // 0x8003128C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031290: lwc1        $f16, -0x3A0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3A0C);
    // 0x80031294: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003129C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800312A0: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x800312A4: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800312A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800312AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800312B0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x800312B4: jal         0x800322A8
    // 0x800312B8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_20;
    // 0x800312B8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x800312BC: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x800312C0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800312C4: bne         $t6, $at, L_800313BC
    if (ctx->r14 != ctx->r1) {
        // 0x800312C8: nop
    
            goto L_800313BC;
    }
    // 0x800312C8: nop

    // 0x800312CC: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800312D0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800312D4: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800312D8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800312DC: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x800312E0: nop

    // 0x800312E4: bc1f        L_800313BC
    if (!c1cs) {
        // 0x800312E8: nop
    
            goto L_800313BC;
    }
    // 0x800312E8: nop

    // 0x800312EC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800312F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800312F4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800312F8: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x800312FC: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80031300: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031304: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031308: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8003130C: bc1f        L_800313BC
    if (!c1cs) {
        // 0x80031310: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800313BC;
    }
    // 0x80031310: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031314: ldc1        $f18, -0x3A08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3A08);
    // 0x80031318: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x8003131C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031320: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80031324: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80031328: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8003132C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80031330: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031334: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80031338: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x8003133C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80031340: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x80031344: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x80031348: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003134C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x80031350: bc1f        L_8003137C
    if (!c1cs) {
        // 0x80031354: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_8003137C;
    }
    // 0x80031354: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_80031358:
    // 0x80031358: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8003135C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80031360: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80031364: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80031368: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8003136C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80031370: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80031374: bne         $t7, $t0, L_80031358
    if (ctx->r15 != ctx->r8) {
        // 0x80031378: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80031358;
    }
    // 0x80031378: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
L_8003137C:
    // 0x8003137C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031380: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80031384: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031388: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8003138C: bc1fl       L_8003139C
    if (!c1cs) {
        // 0x80031390: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8003139C;
    }
    goto skip_16;
    // 0x80031390: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_16:
    // 0x80031394: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031398: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8003139C:
    // 0x8003139C: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x800313A0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800313A4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800313A8: bc1f        L_800313B4
    if (!c1cs) {
        // 0x800313AC: nop
    
            goto L_800313B4;
    }
    // 0x800313AC: nop

    // 0x800313B0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800313B4:
    // 0x800313B4: jal         0x80030688
    // 0x800313B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_21;
    // 0x800313B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_21:
L_800313BC:
    // 0x800313BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800313C0: lwc1        $f18, -0x3A00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3A00);
    // 0x800313C4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800313C8: lwc1        $f4, -0x39FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X39FC);
    // 0x800313CC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800313D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800313D4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800313D8: lw          $a2, 0x140($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X140);
    // 0x800313DC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x800313E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800313E4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800313E8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800313EC: jal         0x800322A8
    // 0x800313F0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_22;
    // 0x800313F0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x800313F4: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x800313F8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800313FC: bnel        $t1, $at, L_800314F8
    if (ctx->r9 != ctx->r1) {
        // 0x80031400: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800314F8;
    }
    goto skip_17;
    // 0x80031400: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_17:
    // 0x80031404: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031408: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003140C: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031410: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031414: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x80031418: nop

    // 0x8003141C: bc1fl       L_800314F8
    if (!c1cs) {
        // 0x80031420: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800314F8;
    }
    goto skip_18;
    // 0x80031420: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_18:
    // 0x80031424: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80031428: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8003142C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80031430: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031434: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80031438: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003143C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031440: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031444: bc1f        L_800314F4
    if (!c1cs) {
        // 0x80031448: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800314F4;
    }
    // 0x80031448: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8003144C: ldc1        $f6, -0x39F8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X39F8);
    // 0x80031450: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80031454: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031458: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8003145C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80031460: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80031464: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80031468: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8003146C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80031470: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x80031474: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80031478: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8003147C: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x80031480: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031484: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80031488: bc1f        L_800314B4
    if (!c1cs) {
        // 0x8003148C: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_800314B4;
    }
    // 0x8003148C: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80031490:
    // 0x80031490: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80031494: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80031498: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8003149C: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x800314A0: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x800314A4: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x800314A8: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x800314AC: bne         $t2, $t5, L_80031490
    if (ctx->r10 != ctx->r13) {
        // 0x800314B0: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80031490;
    }
    // 0x800314B0: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
L_800314B4:
    // 0x800314B4: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800314B8: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800314BC: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800314C0: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800314C4: bc1fl       L_800314D4
    if (!c1cs) {
        // 0x800314C8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800314D4;
    }
    goto skip_19;
    // 0x800314C8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_19:
    // 0x800314CC: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800314D0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800314D4:
    // 0x800314D4: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x800314D8: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800314DC: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800314E0: bc1f        L_800314EC
    if (!c1cs) {
        // 0x800314E4: nop
    
            goto L_800314EC;
    }
    // 0x800314E4: nop

    // 0x800314E8: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800314EC:
    // 0x800314EC: jal         0x80030688
    // 0x800314F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_23;
    // 0x800314F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_23:
L_800314F4:
    // 0x800314F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800314F8:
    // 0x800314F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800314FC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031504: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031508: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8003150C: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031510: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031514: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80031518: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8003151C: jal         0x800322A8
    // 0x80031520: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_24;
    // 0x80031520: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_24:
    // 0x80031524: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80031528: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8003152C: bne         $t6, $at, L_800315E0
    if (ctx->r14 != ctx->r1) {
        // 0x80031530: nop
    
            goto L_800315E0;
    }
    // 0x80031530: nop

    // 0x80031534: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031538: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003153C: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031540: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031544: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80031548: nop

    // 0x8003154C: bc1f        L_800315E0
    if (!c1cs) {
        // 0x80031550: nop
    
            goto L_800315E0;
    }
    // 0x80031550: nop

    // 0x80031554: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80031558: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8003155C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80031560: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031564: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80031568: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003156C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031570: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031574: bc1f        L_800315E0
    if (!c1cs) {
        // 0x80031578: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_800315E0;
    }
    // 0x80031578: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003157C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80031580: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x80031584: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x80031588: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x8003158C: bc1fl       L_800315BC
    if (!c1cs) {
        // 0x80031590: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_800315BC;
    }
    goto skip_20;
    // 0x80031590: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_20:
L_80031594:
    // 0x80031594: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80031598: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8003159C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800315A0: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x800315A4: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x800315A8: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x800315AC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x800315B0: bne         $t8, $t7, L_80031594
    if (ctx->r24 != ctx->r15) {
        // 0x800315B4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80031594;
    }
    // 0x800315B4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x800315B8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_800315BC:
    // 0x800315BC: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x800315C0: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x800315C4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800315C8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800315CC: bc1f        L_800315D8
    if (!c1cs) {
        // 0x800315D0: nop
    
            goto L_800315D8;
    }
    // 0x800315D0: nop

    // 0x800315D4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_800315D8:
    // 0x800315D8: jal         0x80030688
    // 0x800315DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_25;
    // 0x800315DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_25:
L_800315E0:
    // 0x800315E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800315E4: lwc1        $f10, -0x39F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X39F0);
    // 0x800315E8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800315EC: lwc1        $f16, -0x39EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X39EC);
    // 0x800315F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800315F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800315F8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x800315FC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031600: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031604: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031608: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8003160C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80031610: jal         0x800322A8
    // 0x80031614: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_26;
    // 0x80031614: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_26:
    // 0x80031618: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x8003161C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031620: bne         $t1, $at, L_80031718
    if (ctx->r9 != ctx->r1) {
        // 0x80031624: nop
    
            goto L_80031718;
    }
    // 0x80031624: nop

    // 0x80031628: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8003162C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031630: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031634: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031638: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8003163C: nop

    // 0x80031640: bc1f        L_80031718
    if (!c1cs) {
        // 0x80031644: nop
    
            goto L_80031718;
    }
    // 0x80031644: nop

    // 0x80031648: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8003164C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80031650: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80031654: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031658: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8003165C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031660: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031664: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031668: bc1f        L_80031718
    if (!c1cs) {
        // 0x8003166C: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031718;
    }
    // 0x8003166C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031670: ldc1        $f18, -0x39E8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X39E8);
    // 0x80031674: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x80031678: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8003167C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80031680: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80031684: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80031688: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8003168C: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031690: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80031694: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x80031698: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8003169C: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x800316A0: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x800316A4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800316A8: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x800316AC: bc1f        L_800316D8
    if (!c1cs) {
        // 0x800316B0: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_800316D8;
    }
    // 0x800316B0: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_800316B4:
    // 0x800316B4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x800316B8: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x800316BC: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800316C0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x800316C4: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x800316C8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x800316CC: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x800316D0: bne         $t3, $t2, L_800316B4
    if (ctx->r11 != ctx->r10) {
        // 0x800316D4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_800316B4;
    }
    // 0x800316D4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
L_800316D8:
    // 0x800316D8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800316DC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800316E0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800316E4: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800316E8: bc1fl       L_800316F8
    if (!c1cs) {
        // 0x800316EC: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800316F8;
    }
    goto skip_21;
    // 0x800316EC: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_21:
    // 0x800316F0: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800316F4: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800316F8:
    // 0x800316F8: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800316FC: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031700: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031704: bc1f        L_80031710
    if (!c1cs) {
        // 0x80031708: nop
    
            goto L_80031710;
    }
    // 0x80031708: nop

    // 0x8003170C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031710:
    // 0x80031710: jal         0x80030688
    // 0x80031714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_27;
    // 0x80031714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_27:
L_80031718:
    // 0x80031718: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003171C: lwc1        $f18, -0x39E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X39E0);
    // 0x80031720: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031724: lwc1        $f4, -0x39DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X39DC);
    // 0x80031728: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8003172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031730: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031734: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031738: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8003173C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031740: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80031744: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80031748: jal         0x800322A8
    // 0x8003174C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_28;
    // 0x8003174C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x80031750: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80031754: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031758: bnel        $t6, $at, L_80031850
    if (ctx->r14 != ctx->r1) {
        // 0x8003175C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80031850;
    }
    goto skip_22;
    // 0x8003175C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_22:
    // 0x80031760: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031764: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031768: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8003176C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031770: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x80031774: nop

    // 0x80031778: bc1fl       L_80031850
    if (!c1cs) {
        // 0x8003177C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80031850;
    }
    goto skip_23;
    // 0x8003177C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_23:
    // 0x80031780: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80031784: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80031788: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8003178C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031790: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80031794: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031798: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003179C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800317A0: bc1f        L_8003184C
    if (!c1cs) {
        // 0x800317A4: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_8003184C;
    }
    // 0x800317A4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800317A8: ldc1        $f8, -0x39D8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X39D8);
    // 0x800317AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800317B0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800317B4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800317B8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800317BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800317C0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800317C4: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x800317C8: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x800317CC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800317D0: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x800317D4: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x800317D8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800317DC: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x800317E0: bc1f        L_8003180C
    if (!c1cs) {
        // 0x800317E4: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_8003180C;
    }
    // 0x800317E4: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_800317E8:
    // 0x800317E8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x800317EC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800317F0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x800317F4: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x800317F8: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x800317FC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x80031800: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80031804: bne         $t9, $t8, L_800317E8
    if (ctx->r25 != ctx->r24) {
        // 0x80031808: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_800317E8;
    }
    // 0x80031808: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
L_8003180C:
    // 0x8003180C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031810: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80031814: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031818: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x8003181C: bc1fl       L_8003182C
    if (!c1cs) {
        // 0x80031820: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_8003182C;
    }
    goto skip_24;
    // 0x80031820: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_24:
    // 0x80031824: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031828: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_8003182C:
    // 0x8003182C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80031830: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031834: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031838: bc1f        L_80031844
    if (!c1cs) {
        // 0x8003183C: nop
    
            goto L_80031844;
    }
    // 0x8003183C: nop

    // 0x80031840: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031844:
    // 0x80031844: jal         0x80030688
    // 0x80031848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_29;
    // 0x80031848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_29:
L_8003184C:
    // 0x8003184C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80031850:
    // 0x80031850: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80031854: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003185C: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031860: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031864: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031868: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8003186C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031870: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80031874: jal         0x800322A8
    // 0x80031878: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_30;
    // 0x80031878: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_30:
    // 0x8003187C: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80031880: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031884: bne         $t1, $at, L_80031938
    if (ctx->r9 != ctx->r1) {
        // 0x80031888: nop
    
            goto L_80031938;
    }
    // 0x80031888: nop

    // 0x8003188C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031890: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031894: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031898: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8003189C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x800318A0: nop

    // 0x800318A4: bc1f        L_80031938
    if (!c1cs) {
        // 0x800318A8: nop
    
            goto L_80031938;
    }
    // 0x800318A8: nop

    // 0x800318AC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800318B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800318B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800318B8: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800318BC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x800318C0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800318C4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800318C8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800318CC: bc1f        L_80031938
    if (!c1cs) {
        // 0x800318D0: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80031938;
    }
    // 0x800318D0: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800318D4: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x800318D8: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x800318DC: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x800318E0: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x800318E4: bc1fl       L_80031914
    if (!c1cs) {
        // 0x800318E8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031914;
    }
    goto skip_25;
    // 0x800318E8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_25:
L_800318EC:
    // 0x800318EC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800318F0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800318F4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800318F8: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x800318FC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x80031900: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x80031904: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x80031908: bne         $t4, $t3, L_800318EC
    if (ctx->r12 != ctx->r11) {
        // 0x8003190C: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_800318EC;
    }
    // 0x8003190C: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x80031910: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031914:
    // 0x80031914: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031918: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8003191C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031920: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031924: bc1f        L_80031930
    if (!c1cs) {
        // 0x80031928: nop
    
            goto L_80031930;
    }
    // 0x80031928: nop

    // 0x8003192C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031930:
    // 0x80031930: jal         0x80030688
    // 0x80031934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_31;
    // 0x80031934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_31:
L_80031938:
    // 0x80031938: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003193C: lwc1        $f6, -0x39D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X39D0);
    // 0x80031940: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031944: lwc1        $f16, -0x39CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X39CC);
    // 0x80031948: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8003194C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031950: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031954: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031958: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x8003195C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031960: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80031964: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80031968: jal         0x800322A8
    // 0x8003196C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_32;
    // 0x8003196C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_32:
    // 0x80031970: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80031974: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031978: bne         $t6, $at, L_80031A6C
    if (ctx->r14 != ctx->r1) {
        // 0x8003197C: nop
    
            goto L_80031A6C;
    }
    // 0x8003197C: nop

    // 0x80031980: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031984: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031988: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8003198C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031990: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80031994: nop

    // 0x80031998: bc1f        L_80031A6C
    if (!c1cs) {
        // 0x8003199C: nop
    
            goto L_80031A6C;
    }
    // 0x8003199C: nop

    // 0x800319A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800319A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800319A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800319AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800319B0: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x800319B4: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x800319B8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800319BC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800319C0: bc1f        L_80031A6C
    if (!c1cs) {
        // 0x800319C4: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031A6C;
    }
    // 0x800319C4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x800319C8: ldc1        $f4, -0x39C8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X39C8);
    // 0x800319CC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800319D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800319D4: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800319D8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800319DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800319E0: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800319E4: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x800319E8: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x800319EC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x800319F0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x800319F4: addiu       $t9, $s0, 0x48
    ctx->r25 = ADD32(ctx->r16, 0X48);
    // 0x800319F8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800319FC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80031A00: bc1f        L_80031A2C
    if (!c1cs) {
        // 0x80031A04: cvt.s.d     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
            goto L_80031A2C;
    }
    // 0x80031A04: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
L_80031A08:
    // 0x80031A08: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80031A0C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80031A10: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80031A14: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80031A18: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80031A1C: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80031A20: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80031A24: bne         $t0, $t9, L_80031A08
    if (ctx->r8 != ctx->r25) {
        // 0x80031A28: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80031A08;
    }
    // 0x80031A28: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
L_80031A2C:
    // 0x80031A2C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031A30: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80031A34: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031A38: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031A3C: bc1fl       L_80031A4C
    if (!c1cs) {
        // 0x80031A40: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031A4C;
    }
    goto skip_26;
    // 0x80031A40: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_26:
    // 0x80031A44: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031A48: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031A4C:
    // 0x80031A4C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80031A50: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031A54: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031A58: bc1f        L_80031A64
    if (!c1cs) {
        // 0x80031A5C: nop
    
            goto L_80031A64;
    }
    // 0x80031A5C: nop

    // 0x80031A60: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031A64:
    // 0x80031A64: jal         0x80030688
    // 0x80031A68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_33;
    // 0x80031A68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_33:
L_80031A6C:
    // 0x80031A6C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031A70: lwc1        $f4, -0x39C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X39C0);
    // 0x80031A74: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031A78: lwc1        $f8, -0x39BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X39BC);
    // 0x80031A7C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031A84: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031A88: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031A8C: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031A90: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031A94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80031A98: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80031A9C: jal         0x800322A8
    // 0x80031AA0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_34;
    // 0x80031AA0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_34:
    // 0x80031AA4: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80031AA8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031AAC: bnel        $t1, $at, L_80031BA4
    if (ctx->r9 != ctx->r1) {
        // 0x80031AB0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80031BA4;
    }
    goto skip_27;
    // 0x80031AB0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_27:
    // 0x80031AB4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031AB8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031ABC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031AC0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031AC4: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80031AC8: nop

    // 0x80031ACC: bc1fl       L_80031BA4
    if (!c1cs) {
        // 0x80031AD0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80031BA4;
    }
    goto skip_28;
    // 0x80031AD0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_28:
    // 0x80031AD4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80031AD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80031ADC: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x80031AE0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031AE4: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80031AE8: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031AEC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031AF0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031AF4: bc1f        L_80031BA0
    if (!c1cs) {
        // 0x80031AF8: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031BA0;
    }
    // 0x80031AF8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031AFC: ldc1        $f10, -0x39B8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X39B8);
    // 0x80031B00: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x80031B04: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031B08: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x80031B0C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80031B10: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80031B14: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031B18: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x80031B1C: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80031B20: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80031B24: or          $t5, $s0, $zero
    ctx->r13 = ctx->r16 | 0;
    // 0x80031B28: addiu       $t4, $s0, 0x48
    ctx->r12 = ADD32(ctx->r16, 0X48);
    // 0x80031B2C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031B30: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80031B34: bc1f        L_80031B60
    if (!c1cs) {
        // 0x80031B38: cvt.s.d     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
            goto L_80031B60;
    }
    // 0x80031B38: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_80031B3C:
    // 0x80031B3C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80031B40: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80031B44: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80031B48: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80031B4C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x80031B50: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80031B54: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80031B58: bne         $t5, $t4, L_80031B3C
    if (ctx->r13 != ctx->r12) {
        // 0x80031B5C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80031B3C;
    }
    // 0x80031B5C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
L_80031B60:
    // 0x80031B60: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031B64: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80031B68: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031B6C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031B70: bc1fl       L_80031B80
    if (!c1cs) {
        // 0x80031B74: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031B80;
    }
    goto skip_29;
    // 0x80031B74: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_29:
    // 0x80031B78: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031B7C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031B80:
    // 0x80031B80: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80031B84: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80031B88: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031B8C: bc1f        L_80031B98
    if (!c1cs) {
        // 0x80031B90: nop
    
            goto L_80031B98;
    }
    // 0x80031B90: nop

    // 0x80031B94: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031B98:
    // 0x80031B98: jal         0x80030688
    // 0x80031B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_35;
    // 0x80031B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_35:
L_80031BA0:
    // 0x80031BA0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80031BA4:
    // 0x80031BA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80031BA8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031BB0: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031BB4: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031BB8: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031BBC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031BC0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80031BC4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80031BC8: jal         0x800322A8
    // 0x80031BCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_36;
    // 0x80031BCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_36:
    // 0x80031BD0: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80031BD4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031BD8: bne         $t6, $at, L_80031C8C
    if (ctx->r14 != ctx->r1) {
        // 0x80031BDC: nop
    
            goto L_80031C8C;
    }
    // 0x80031BDC: nop

    // 0x80031BE0: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031BE4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031BE8: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031BEC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031BF0: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x80031BF4: nop

    // 0x80031BF8: bc1f        L_80031C8C
    if (!c1cs) {
        // 0x80031BFC: nop
    
            goto L_80031C8C;
    }
    // 0x80031BFC: nop

    // 0x80031C00: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80031C04: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80031C08: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80031C0C: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031C10: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80031C14: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031C18: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031C1C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031C20: bc1f        L_80031C8C
    if (!c1cs) {
        // 0x80031C24: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80031C8C;
    }
    // 0x80031C24: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031C28: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80031C2C: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x80031C30: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x80031C34: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x80031C38: bc1fl       L_80031C68
    if (!c1cs) {
        // 0x80031C3C: lwc1        $f12, 0x108($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
            goto L_80031C68;
    }
    goto skip_30;
    // 0x80031C3C: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    skip_30:
L_80031C40:
    // 0x80031C40: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80031C44: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80031C48: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80031C4C: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80031C50: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80031C54: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80031C58: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80031C5C: bne         $t7, $t0, L_80031C40
    if (ctx->r15 != ctx->r8) {
        // 0x80031C60: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80031C40;
    }
    // 0x80031C60: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80031C64: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
L_80031C68:
    // 0x80031C68: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031C6C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80031C70: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031C74: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031C78: bc1f        L_80031C84
    if (!c1cs) {
        // 0x80031C7C: nop
    
            goto L_80031C84;
    }
    // 0x80031C7C: nop

    // 0x80031C80: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
L_80031C84:
    // 0x80031C84: jal         0x80030688
    // 0x80031C88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_37;
    // 0x80031C88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_37:
L_80031C8C:
    // 0x80031C8C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031C90: lwc1        $f18, -0x39B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X39B0);
    // 0x80031C94: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031C98: lwc1        $f16, -0x39AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X39AC);
    // 0x80031C9C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031CA4: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031CA8: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031CAC: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031CB0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031CB4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80031CB8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80031CBC: jal         0x800322A8
    // 0x80031CC0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_38;
    // 0x80031CC0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_38:
    // 0x80031CC4: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80031CC8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031CCC: bne         $t1, $at, L_80031DC0
    if (ctx->r9 != ctx->r1) {
        // 0x80031CD0: nop
    
            goto L_80031DC0;
    }
    // 0x80031CD0: nop

    // 0x80031CD4: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031CD8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031CDC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031CE0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031CE4: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x80031CE8: nop

    // 0x80031CEC: bc1f        L_80031DC0
    if (!c1cs) {
        // 0x80031CF0: nop
    
            goto L_80031DC0;
    }
    // 0x80031CF0: nop

    // 0x80031CF4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80031CF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80031CFC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80031D00: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031D04: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x80031D08: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031D0C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031D10: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031D14: bc1f        L_80031DC0
    if (!c1cs) {
        // 0x80031D18: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031DC0;
    }
    // 0x80031D18: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031D1C: ldc1        $f8, -0x39A8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X39A8);
    // 0x80031D20: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80031D24: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031D28: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80031D2C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80031D30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80031D34: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031D38: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x80031D3C: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80031D40: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80031D44: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x80031D48: addiu       $t5, $s0, 0x48
    ctx->r13 = ADD32(ctx->r16, 0X48);
    // 0x80031D4C: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031D50: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80031D54: bc1f        L_80031D80
    if (!c1cs) {
        // 0x80031D58: cvt.s.d     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
            goto L_80031D80;
    }
    // 0x80031D58: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
L_80031D5C:
    // 0x80031D5C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80031D60: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80031D64: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80031D68: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x80031D6C: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80031D70: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80031D74: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80031D78: bne         $t2, $t5, L_80031D5C
    if (ctx->r10 != ctx->r13) {
        // 0x80031D7C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80031D5C;
    }
    // 0x80031D7C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
L_80031D80:
    // 0x80031D80: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031D84: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80031D88: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031D8C: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031D90: bc1fl       L_80031DA0
    if (!c1cs) {
        // 0x80031D94: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031DA0;
    }
    goto skip_31;
    // 0x80031D94: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_31:
    // 0x80031D98: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031D9C: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031DA0:
    // 0x80031DA0: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80031DA4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031DA8: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031DAC: bc1f        L_80031DB8
    if (!c1cs) {
        // 0x80031DB0: nop
    
            goto L_80031DB8;
    }
    // 0x80031DB0: nop

    // 0x80031DB4: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031DB8:
    // 0x80031DB8: jal         0x80030688
    // 0x80031DBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_39;
    // 0x80031DBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_39:
L_80031DC0:
    // 0x80031DC0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031DC4: lwc1        $f8, -0x39A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X39A0);
    // 0x80031DC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031DCC: lwc1        $f10, -0x399C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X399C);
    // 0x80031DD0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031DD8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031DDC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031DE0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031DE4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031DE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80031DEC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80031DF0: jal         0x800322A8
    // 0x80031DF4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_40;
    // 0x80031DF4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_40:
    // 0x80031DF8: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x80031DFC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031E00: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031E04: bne         $t6, $at, L_80031EEC
    if (ctx->r14 != ctx->r1) {
        // 0x80031E08: lwc1        $f6, 0x3C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80031EEC;
    }
    // 0x80031E08: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031E0C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x80031E10: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031E14: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031E18: bc1fl       L_80031EF0
    if (!c1cs) {
        // 0x80031E1C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80031EF0;
    }
    goto skip_32;
    // 0x80031E1C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_32:
    // 0x80031E20: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80031E24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80031E28: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80031E2C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031E30: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80031E34: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031E38: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031E3C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031E40: bc1f        L_80031EEC
    if (!c1cs) {
        // 0x80031E44: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80031EEC;
    }
    // 0x80031E44: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031E48: ldc1        $f6, -0x3998($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3998);
    // 0x80031E4C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80031E50: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031E54: mul.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80031E58: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80031E5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80031E60: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031E64: addiu       $t9, $sp, 0xA8
    ctx->r25 = ADD32(ctx->r29, 0XA8);
    // 0x80031E68: mul.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x80031E6C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80031E70: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
    // 0x80031E74: addiu       $t7, $s0, 0x48
    ctx->r15 = ADD32(ctx->r16, 0X48);
    // 0x80031E78: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031E7C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80031E80: bc1f        L_80031EAC
    if (!c1cs) {
        // 0x80031E84: cvt.s.d     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
            goto L_80031EAC;
    }
    // 0x80031E84: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80031E88:
    // 0x80031E88: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80031E8C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80031E90: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80031E94: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80031E98: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80031E9C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80031EA0: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80031EA4: bne         $t8, $t7, L_80031E88
    if (ctx->r24 != ctx->r15) {
        // 0x80031EA8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80031E88;
    }
    // 0x80031EA8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_80031EAC:
    // 0x80031EAC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80031EB0: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x80031EB4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031EB8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x80031EBC: bc1fl       L_80031ECC
    if (!c1cs) {
        // 0x80031EC0: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031ECC;
    }
    goto skip_33;
    // 0x80031EC0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_33:
    // 0x80031EC4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80031EC8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031ECC:
    // 0x80031ECC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80031ED0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031ED4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031ED8: bc1f        L_80031EE4
    if (!c1cs) {
        // 0x80031EDC: nop
    
            goto L_80031EE4;
    }
    // 0x80031EDC: nop

    // 0x80031EE0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031EE4:
    // 0x80031EE4: jal         0x80030688
    // 0x80031EE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_41;
    // 0x80031EE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_41:
L_80031EEC:
    // 0x80031EEC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80031EF0:
    // 0x80031EF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80031EF4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031EFC: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031F00: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031F04: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031F08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80031F0C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031F10: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80031F14: jal         0x800322A8
    // 0x80031F18: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_42;
    // 0x80031F18: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_42:
    // 0x80031F1C: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80031F20: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80031F24: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80031F28: bne         $t1, $at, L_80031FD0
    if (ctx->r9 != ctx->r1) {
        // 0x80031F2C: lwc1        $f4, 0x3C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80031FD0;
    }
    // 0x80031F2C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80031F30: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80031F34: lwc1        $f16, 0x118($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80031F38: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80031F3C: bc1f        L_80031FD0
    if (!c1cs) {
        // 0x80031F40: nop
    
            goto L_80031FD0;
    }
    // 0x80031F40: nop

    // 0x80031F44: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80031F48: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80031F4C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80031F50: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80031F54: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80031F58: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80031F5C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80031F60: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80031F64: bc1f        L_80031FD0
    if (!c1cs) {
        // 0x80031F68: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80031FD0;
    }
    // 0x80031F68: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80031F6C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80031F70: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x80031F74: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x80031F78: addiu       $t2, $s0, 0x48
    ctx->r10 = ADD32(ctx->r16, 0X48);
    // 0x80031F7C: bc1fl       L_80031FAC
    if (!c1cs) {
        // 0x80031F80: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80031FAC;
    }
    goto skip_34;
    // 0x80031F80: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_34:
L_80031F84:
    // 0x80031F84: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80031F88: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80031F8C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80031F90: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x80031F94: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x80031F98: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x80031F9C: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x80031FA0: bne         $t3, $t2, L_80031F84
    if (ctx->r11 != ctx->r10) {
        // 0x80031FA4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_80031F84;
    }
    // 0x80031FA4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x80031FA8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80031FAC:
    // 0x80031FAC: lwc1        $f18, 0x14C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80031FB0: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80031FB4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80031FB8: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80031FBC: bc1f        L_80031FC8
    if (!c1cs) {
        // 0x80031FC0: nop
    
            goto L_80031FC8;
    }
    // 0x80031FC0: nop

    // 0x80031FC4: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80031FC8:
    // 0x80031FC8: jal         0x80030688
    // 0x80031FCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_43;
    // 0x80031FCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_43:
L_80031FD0:
    // 0x80031FD0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031FD4: lwc1        $f4, -0x3990($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3990);
    // 0x80031FD8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80031FDC: lwc1        $f16, -0x398C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X398C);
    // 0x80031FE0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80031FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031FE8: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80031FEC: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x80031FF0: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80031FF4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80031FF8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80031FFC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80032000: jal         0x800322A8
    // 0x80032004: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_44;
    // 0x80032004: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_44:
    // 0x80032008: lh          $t6, 0x128($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X128);
    // 0x8003200C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80032010: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80032014: bne         $t6, $at, L_800320FC
    if (ctx->r14 != ctx->r1) {
        // 0x80032018: lwc1        $f10, 0x3C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_800320FC;
    }
    // 0x80032018: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003201C: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x80032020: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80032024: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80032028: bc1f        L_800320FC
    if (!c1cs) {
        // 0x8003202C: nop
    
            goto L_800320FC;
    }
    // 0x8003202C: nop

    // 0x80032030: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80032034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80032038: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x8003203C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80032040: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80032044: lwc1        $f16, 0x14C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80032048: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8003204C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80032050: bc1f        L_800320FC
    if (!c1cs) {
        // 0x80032054: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_800320FC;
    }
    // 0x80032054: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80032058: ldc1        $f10, -0x3988($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3988);
    // 0x8003205C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80032060: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80032064: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80032068: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8003206C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80032070: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80032074: addiu       $t0, $sp, 0xA8
    ctx->r8 = ADD32(ctx->r29, 0XA8);
    // 0x80032078: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x8003207C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80032080: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x80032084: addiu       $t8, $s0, 0x48
    ctx->r24 = ADD32(ctx->r16, 0X48);
    // 0x80032088: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8003208C: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80032090: bc1f        L_800320BC
    if (!c1cs) {
        // 0x80032094: cvt.s.d     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
            goto L_800320BC;
    }
    // 0x80032094: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
L_80032098:
    // 0x80032098: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8003209C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800320A0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x800320A4: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x800320A8: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x800320AC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x800320B0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x800320B4: bne         $t9, $t8, L_80032098
    if (ctx->r25 != ctx->r24) {
        // 0x800320B8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_80032098;
    }
    // 0x800320B8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
L_800320BC:
    // 0x800320BC: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800320C0: sub.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800320C4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800320C8: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800320CC: bc1fl       L_800320DC
    if (!c1cs) {
        // 0x800320D0: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_800320DC;
    }
    goto skip_35;
    // 0x800320D0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_35:
    // 0x800320D4: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x800320D8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_800320DC:
    // 0x800320DC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x800320E0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x800320E4: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x800320E8: bc1f        L_800320F4
    if (!c1cs) {
        // 0x800320EC: nop
    
            goto L_800320F4;
    }
    // 0x800320EC: nop

    // 0x800320F0: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_800320F4:
    // 0x800320F4: jal         0x80030688
    // 0x800320F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_45;
    // 0x800320F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_45:
L_800320FC:
    // 0x800320FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80032100: lwc1        $f10, -0x3980($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3980);
    // 0x80032104: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80032108: lwc1        $f6, -0x397C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X397C);
    // 0x8003210C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80032110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032114: lw          $a1, 0x13C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X13C);
    // 0x80032118: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x8003211C: lw          $a3, 0x148($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X148);
    // 0x80032120: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80032124: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80032128: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8003212C: jal         0x800322A8
    // 0x80032130: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_800322A8_32EA8(rdram, ctx);
        goto after_46;
    // 0x80032130: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_46:
    // 0x80032134: lh          $t1, 0x128($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X128);
    // 0x80032138: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8003213C: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80032140: bne         $t1, $at, L_80032228
    if (ctx->r9 != ctx->r1) {
        // 0x80032144: lwc1        $f18, 0x3C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80032228;
    }
    // 0x80032144: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80032148: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x8003214C: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80032150: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80032154: bc1fl       L_8003222C
    if (!c1cs) {
        // 0x80032158: lh          $t6, 0xE0($sp)
        ctx->r14 = MEM_H(ctx->r29, 0XE0);
            goto L_8003222C;
    }
    goto skip_36;
    // 0x80032158: lh          $t6, 0xE0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE0);
    skip_36:
    // 0x8003215C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80032160: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80032164: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80032168: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003216C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80032170: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80032174: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80032178: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x8003217C: bc1f        L_80032228
    if (!c1cs) {
        // 0x80032180: addiu       $a2, $sp, 0x58
        ctx->r6 = ADD32(ctx->r29, 0X58);
            goto L_80032228;
    }
    // 0x80032180: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x80032184: ldc1        $f18, -0x3978($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3978);
    // 0x80032188: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8003218C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80032190: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80032194: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80032198: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8003219C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800321A0: addiu       $t5, $sp, 0xA8
    ctx->r13 = ADD32(ctx->r29, 0XA8);
    // 0x800321A4: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800321A8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x800321AC: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x800321B0: addiu       $t3, $s0, 0x48
    ctx->r11 = ADD32(ctx->r16, 0X48);
    // 0x800321B4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800321B8: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x800321BC: bc1f        L_800321E8
    if (!c1cs) {
        // 0x800321C0: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_800321E8;
    }
    // 0x800321C0: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_800321C4:
    // 0x800321C4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x800321C8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x800321CC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800321D0: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x800321D4: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x800321D8: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x800321DC: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x800321E0: bne         $t4, $t3, L_800321C4
    if (ctx->r12 != ctx->r11) {
        // 0x800321E4: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_800321C4;
    }
    // 0x800321E4: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
L_800321E8:
    // 0x800321E8: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800321EC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800321F0: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x800321F4: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x800321F8: bc1fl       L_80032208
    if (!c1cs) {
        // 0x800321FC: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80032208;
    }
    goto skip_37;
    // 0x800321FC: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    skip_37:
    // 0x80032200: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x80032204: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
L_80032208:
    // 0x80032208: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x8003220C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80032210: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80032214: bc1f        L_80032220
    if (!c1cs) {
        // 0x80032218: nop
    
            goto L_80032220;
    }
    // 0x80032218: nop

    // 0x8003221C: swc1        $f20, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f20.u32l;
L_80032220:
    // 0x80032220: jal         0x80030688
    // 0x80032224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030688_31288(rdram, ctx);
        goto after_47;
    // 0x80032224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_47:
L_80032228:
    // 0x80032228: lh          $t6, 0xE0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE0);
L_8003222C:
    // 0x8003222C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80032230: bnel        $t6, $at, L_80032260
    if (ctx->r14 != ctx->r1) {
        // 0x80032234: lw          $v1, 0x138($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X138);
            goto L_80032260;
    }
    goto skip_38;
    // 0x80032234: lw          $v1, 0x138($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X138);
    skip_38:
    // 0x80032238: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8003223C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80032240: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80032244: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80032248: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8003224C: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x80032250: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80032254: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80032258: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x8003225C: lw          $v1, 0x138($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X138);
L_80032260:
    // 0x80032260: addiu       $t7, $sp, 0xA8
    ctx->r15 = ADD32(ctx->r29, 0XA8);
    // 0x80032264: addiu       $t0, $t7, 0x48
    ctx->r8 = ADD32(ctx->r15, 0X48);
    // 0x80032268: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
L_8003226C:
    // 0x8003226C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80032270: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80032274: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80032278: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8003227C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80032280: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80032284: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80032288: bne         $t7, $t0, L_8003226C
    if (ctx->r15 != ctx->r8) {
        // 0x8003228C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8003226C;
    }
    // 0x8003228C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80032290: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80032294: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80032298: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8003229C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    // 0x800322A0: jr          $ra
    // 0x800322A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x800322A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80036E2C_37A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036E2C: jr          $ra
    // 0x80036E30: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    TRACE_RETURN()
    return;
    // 0x80036E30: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
;}
RECOMP_FUNC void func_80023788_24388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023788: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002378C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80023794: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x80023798: jal         0x80045680
    // 0x8002379C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_0;
    // 0x8002379C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800237A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800237A4: jal         0x80023ADC
    // 0x800237A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x800237A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800237AC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800237B0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800237B4: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x800237B8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800237BC: bgez        $t6, L_800237CC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800237C0: sra         $t7, $t6, 8
        ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
            goto L_800237CC;
    }
    // 0x800237C0: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800237C4: addiu       $at, $t6, 0xFF
    ctx->r1 = ADD32(ctx->r14, 0XFF);
    // 0x800237C8: sra         $t7, $at, 8
    ctx->r15 = S32(SIGNED(ctx->r1) >> 8);
L_800237CC:
    // 0x800237CC: sw          $t7, 0x408($t8)
    MEM_W(0X408, ctx->r24) = ctx->r15;
    // 0x800237D0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800237D4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800237D8: sw          $t9, 0x3FC($t0)
    MEM_W(0X3FC, ctx->r8) = ctx->r25;
    // 0x800237DC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800237E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800237E4: lw          $v0, 0x3FC($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X3FC);
    // 0x800237E8: jr          $ra
    // 0x800237EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800237EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003F480_40080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F488: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F48C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8003F490: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003F494: lw          $a2, 0x7740($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7740);
    // 0x8003F498: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x8003F49C: jal         0x80048984
    // 0x8003F4A0: addiu       $a0, $a0, 0x7780
    ctx->r4 = ADD32(ctx->r4, 0X7780);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8003F4A0: addiu       $a0, $a0, 0x7780
    ctx->r4 = ADD32(ctx->r4, 0X7780);
    after_0:
    // 0x8003F4A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003F4A8: addiu       $a0, $v1, 0x7780
    ctx->r4 = ADD32(ctx->r3, 0X7780);
    // 0x8003F4AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F4B0: sw          $a0, 0x779C($at)
    MEM_W(0X779C, ctx->r1) = ctx->r4;
    // 0x8003F4B4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8003F4B8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F4BC: addiu       $a1, $a1, 0x77A8
    ctx->r5 = ADD32(ctx->r5, 0X77A8);
    // 0x8003F4C0: beq         $t6, $zero, L_8003F4F8
    if (ctx->r14 == 0) {
        // 0x8003F4C4: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8003F4F8;
    }
    // 0x8003F4C4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8003F4C8: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003F4CC: addiu       $t7, $t7, 0x7780
    ctx->r15 = ADD32(ctx->r15, 0X7780);
    // 0x8003F4D0: lbu         $v1, 0x0($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X0);
    // 0x8003F4D4: addiu       $t8, $v1, -0x30
    ctx->r24 = ADD32(ctx->r3, -0X30);
L_8003F4D8:
    // 0x8003F4D8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8003F4DC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8003F4E0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8003F4E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003F4E8: bnel        $v1, $zero, L_8003F4D8
    if (ctx->r3 != 0) {
        // 0x8003F4EC: addiu       $t8, $v1, -0x30
        ctx->r24 = ADD32(ctx->r3, -0X30);
            goto L_8003F4D8;
    }
    goto skip_0;
    // 0x8003F4EC: addiu       $t8, $v1, -0x30
    ctx->r24 = ADD32(ctx->r3, -0X30);
    skip_0:
    // 0x8003F4F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F4F4: sw          $a0, 0x779C($at)
    MEM_W(0X779C, ctx->r1) = ctx->r4;
L_8003F4F8:
    // 0x8003F4F8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8003F4FC: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8003F500: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F504: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F508: sw          $v0, 0x77DC($at)
    MEM_W(0X77DC, ctx->r1) = ctx->r2;
    // 0x8003F50C: jal         0x8003EB34
    // 0x8003F510: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8003EB34_3F734(rdram, ctx);
        goto after_1;
    // 0x8003F510: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_1:
    // 0x8003F514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F51C: jr          $ra
    // 0x8003F520: nop

    TRACE_RETURN()
    return;
    // 0x8003F520: nop

;}
RECOMP_FUNC void func_800191CC_19DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800191CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800191D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800191D4: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x800191D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800191DC: bnel        $v1, $zero, L_800191F0
    if (ctx->r3 != 0) {
        // 0x800191E0: lw          $t6, 0x2C($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X2C);
            goto L_800191F0;
    }
    goto skip_0;
    // 0x800191E0: lw          $t6, 0x2C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X2C);
    skip_0:
    // 0x800191E4: b           L_800192C0
    // 0x800191E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800192C0;
    // 0x800191E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800191EC: lw          $t6, 0x2C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X2C);
L_800191F0:
    // 0x800191F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800191F4: bnel        $a1, $t6, L_80019270
    if (ctx->r5 != ctx->r14) {
        // 0x800191F8: lw          $a0, 0x78($a2)
        ctx->r4 = MEM_W(ctx->r6, 0X78);
            goto L_80019270;
    }
    goto skip_1;
    // 0x800191F8: lw          $a0, 0x78($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X78);
    skip_1:
    // 0x800191FC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80019200: jal         0x8003674C
    // 0x80019204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8003674C_3734C(rdram, ctx);
        goto after_0;
    // 0x80019204: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80019208: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8001920C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80019210: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    // 0x80019214: beql        $a0, $zero, L_8001925C
    if (ctx->r4 == 0) {
        // 0x80019218: sw          $zero, 0x78($v1)
        MEM_W(0X78, ctx->r3) = 0;
            goto L_8001925C;
    }
    goto skip_2;
    // 0x80019218: sw          $zero, 0x78($v1)
    MEM_W(0X78, ctx->r3) = 0;
    skip_2:
    // 0x8001921C: lw          $a1, 0x78($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X78);
    // 0x80019220: bnel        $a2, $a1, L_80019234
    if (ctx->r6 != ctx->r5) {
        // 0x80019224: lw          $v0, 0x74($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X74);
            goto L_80019234;
    }
    goto skip_3;
    // 0x80019224: lw          $v0, 0x74($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X74);
    skip_3:
    // 0x80019228: b           L_8001925C
    // 0x8001922C: sw          $a0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r4;
        goto L_8001925C;
    // 0x8001922C: sw          $a0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r4;
    // 0x80019230: lw          $v0, 0x74($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X74);
L_80019234:
    // 0x80019234: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80019238: beq         $a2, $v0, L_80019250
    if (ctx->r6 == ctx->r2) {
        // 0x8001923C: nop
    
            goto L_80019250;
    }
    // 0x8001923C: nop

    // 0x80019240: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80019244:
    // 0x80019244: lw          $v0, 0x74($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74);
    // 0x80019248: bnel        $a2, $v0, L_80019244
    if (ctx->r6 != ctx->r2) {
        // 0x8001924C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80019244;
    }
    goto skip_4;
    // 0x8001924C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_4:
L_80019250:
    // 0x80019250: b           L_8001925C
    // 0x80019254: sw          $a0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r4;
        goto L_8001925C;
    // 0x80019254: sw          $a0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r4;
    // 0x80019258: sw          $zero, 0x78($v1)
    MEM_W(0X78, ctx->r3) = 0;
L_8001925C:
    // 0x8001925C: jal         0x800367E4
    // 0x80019260: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800367E4_373E4(rdram, ctx);
        goto after_1;
    // 0x80019260: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80019264: b           L_800192C0
    // 0x80019268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800192C0;
    // 0x80019268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001926C: lw          $a0, 0x78($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X78);
L_80019270:
    // 0x80019270: beql        $a0, $zero, L_8001929C
    if (ctx->r4 == 0) {
        // 0x80019274: lw          $a0, 0x74($a2)
        ctx->r4 = MEM_W(ctx->r6, 0X74);
            goto L_8001929C;
    }
    goto skip_5;
    // 0x80019274: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    skip_5:
    // 0x80019278: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001927C: jal         0x800191CC
    // 0x80019280: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800191CC_19DCC(rdram, ctx);
        goto after_2;
    // 0x80019280: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x80019284: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80019288: beq         $v0, $zero, L_80019298
    if (ctx->r2 == 0) {
        // 0x8001928C: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80019298;
    }
    // 0x8001928C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80019290: b           L_800192C0
    // 0x80019294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800192C0;
    // 0x80019294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80019298:
    // 0x80019298: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
L_8001929C:
    // 0x8001929C: beql        $a0, $zero, L_800192C0
    if (ctx->r4 == 0) {
        // 0x800192A0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800192C0;
    }
    goto skip_6;
    // 0x800192A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x800192A4: jal         0x800191CC
    // 0x800192A8: nop

    func_800191CC_19DCC(rdram, ctx);
        goto after_3;
    // 0x800192A8: nop

    after_3:
    // 0x800192AC: beql        $v0, $zero, L_800192C0
    if (ctx->r2 == 0) {
        // 0x800192B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800192C0;
    }
    goto skip_7;
    // 0x800192B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x800192B4: b           L_800192C0
    // 0x800192B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800192C0;
    // 0x800192B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800192BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800192C0:
    // 0x800192C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800192C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800192C8: jr          $ra
    // 0x800192CC: nop

    TRACE_RETURN()
    return;
    // 0x800192CC: nop

;}
RECOMP_FUNC void func_800352AC_35EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800352AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800352B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800352B4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800352B8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800352BC: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x800352C0: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x800352C4: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x800352C8: jalr        $a2
    // 0x800352CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x800352CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800352D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800352D4: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x800352D8: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x800352DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800352E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800352E4: jr          $ra
    // 0x800352E8: nop

    TRACE_RETURN()
    return;
    // 0x800352E8: nop

;}
RECOMP_FUNC void init_lpfilter(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E5E0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8004E5E4: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x8004E5E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004E5EC: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x8004E5F0: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8004E5F4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x8004E5F8: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8004E5FC: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x8004E600: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x8004E604: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x8004E608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E60C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_8004E610:
    // 0x8004E610: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004E614: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x8004E618: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8004E61C: bne         $at, $zero, L_8004E610
    if (ctx->r1 != 0) {
        // 0x8004E620: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_8004E610;
    }
    // 0x8004E620: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x8004E624: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8004E628: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x8004E62C: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x8004E630: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8004E634: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8004E638: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004E63C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8004E640: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x8004E644: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x8004E648: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8004E64C: beq         $at, $zero, L_8004E678
    if (ctx->r1 == 0) {
        // 0x8004E650: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_8004E678;
    }
    // 0x8004E650: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_8004E654:
    // 0x8004E654: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8004E658: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004E65C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8004E660: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8004E664: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x8004E668: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8004E66C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8004E670: bne         $at, $zero, L_8004E654
    if (ctx->r1 != 0) {
        // 0x8004E674: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_8004E654;
    }
    // 0x8004E674: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_8004E678:
    // 0x8004E678: jr          $ra
    // 0x8004E67C: nop

    TRACE_RETURN()
    return;
    // 0x8004E67C: nop

;}
RECOMP_FUNC void func_8000B4A0_C0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B4A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000B4A4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x8000B4A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000B4AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B4B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000B4B4: sb          $zero, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = 0;
    // 0x8000B4B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8000B4BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B4C0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000B4C4: sb          $zero, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = 0;
    // 0x8000B4C8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8000B4CC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000B4D0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8000B4D4: jr          $ra
    // 0x8000B4D8: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8000B4D8: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001EC04_1F804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001EC04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001EC08: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x8001EC0C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8001EC10: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8001EC14: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001EC18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EC1C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001EC20: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001EC24: bne         $v1, $v0, L_8001EC38
    if (ctx->r3 != ctx->r2) {
        // 0x8001EC28: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_8001EC38;
    }
    // 0x8001EC28: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8001EC2C: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x8001EC30: b           L_8001EC44
    // 0x8001EC34: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
        goto L_8001EC44;
    // 0x8001EC34: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
L_8001EC38:
    // 0x8001EC38: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x8001EC3C: subu        $t6, $a0, $v0
    ctx->r14 = SUB32(ctx->r4, ctx->r2);
    // 0x8001EC40: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
L_8001EC44:
    // 0x8001EC44: lhu         $v0, 0x56($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X56);
    // 0x8001EC48: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8001EC4C: bne         $v1, $v0, L_8001EC5C
    if (ctx->r3 != ctx->r2) {
        // 0x8001EC50: subu        $a3, $a0, $v0
        ctx->r7 = SUB32(ctx->r4, ctx->r2);
            goto L_8001EC5C;
    }
    // 0x8001EC50: subu        $a3, $a0, $v0
    ctx->r7 = SUB32(ctx->r4, ctx->r2);
    // 0x8001EC54: b           L_8001EC64
    // 0x8001EC58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001EC64;
    // 0x8001EC58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001EC5C:
    // 0x8001EC5C: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x8001EC60: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
L_8001EC64:
    // 0x8001EC64: lhu         $v0, 0x5A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X5A);
    // 0x8001EC68: bne         $v1, $v0, L_8001EC78
    if (ctx->r3 != ctx->r2) {
        // 0x8001EC6C: subu        $t8, $a0, $v0
        ctx->r24 = SUB32(ctx->r4, ctx->r2);
            goto L_8001EC78;
    }
    // 0x8001EC6C: subu        $t8, $a0, $v0
    ctx->r24 = SUB32(ctx->r4, ctx->r2);
    // 0x8001EC70: b           L_8001EC7C
    // 0x8001EC74: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
        goto L_8001EC7C;
    // 0x8001EC74: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
L_8001EC78:
    // 0x8001EC78: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
L_8001EC7C:
    // 0x8001EC7C: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    // 0x8001EC80: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8001EC84: jal         0x80003F30
    // 0x8001EC88: sh          $a3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r7;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001EC88: sh          $a3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001EC8C: lhu         $a0, 0x56($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X56);
    // 0x8001EC90: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8001EC94: jal         0x80003F30
    // 0x8001EC98: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001EC98: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8001EC9C: lhu         $a0, 0x5A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5A);
    // 0x8001ECA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001ECA4: jal         0x80003F30
    // 0x8001ECA8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001ECA8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8001ECAC: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001ECB0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001ECB4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001ECB8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ECBC: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001ECC0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001ECC4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8001ECC8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001ECCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001ECD0: mul.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001ECD4: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x8001ECD8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ECDC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001ECE0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8001ECE4: nop

    // 0x8001ECE8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001ECEC: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x8001ECF0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8001ECF4: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
    // 0x8001ECF8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ECFC: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001ED00: nop

    // 0x8001ED04: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001ED08: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001ED0C: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x8001ED10: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001ED14: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x8001ED18: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001ED1C: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    // 0x8001ED20: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001ED24: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ED28: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8001ED2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001ED30: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001ED34: nop

    // 0x8001ED38: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001ED3C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001ED40: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001ED44: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x8001ED48: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ED4C: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001ED50: swc1        $f14, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f14.u32l;
    // 0x8001ED54: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001ED58: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x8001ED5C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001ED60: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001ED64: swc1        $f6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f6.u32l;
    // 0x8001ED68: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001ED6C: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001ED70: swc1        $f10, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f10.u32l;
    // 0x8001ED74: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001ED78: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001ED7C: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001ED80: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001ED84: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
    // 0x8001ED88: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001ED8C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001ED90: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8001ED94: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8001ED98: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8001ED9C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8001EDA0: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8001EDA4: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001EDA8: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001EDAC: swc1        $f8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f8.u32l;
    // 0x8001EDB0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001EDB4: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001EDB8: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8001EDBC: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001EDC0: lwc1        $f6, 0x14($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8001EDC4: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8001EDC8: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001EDCC: lwc1        $f6, 0x24($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X24);
    // 0x8001EDD0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001EDD4: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001EDD8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8001EDDC: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001EDE0: swc1        $f10, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f10.u32l;
    // 0x8001EDE4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001EDE8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001EDEC: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x8001EDF0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8001EDF4: lwc1        $f6, 0x18($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8001EDF8: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x8001EDFC: swc1        $f2, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f2.u32l;
    // 0x8001EE00: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8001EE04: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8001EE08: swc1        $f12, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f12.u32l;
    // 0x8001EE0C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001EE10: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001EE14: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001EE18: bc1t        L_8001EE54
    if (c1cs) {
        // 0x8001EE1C: swc1        $f4, 0x38($a2)
        MEM_W(0X38, ctx->r6) = ctx->f4.u32l;
            goto L_8001EE54;
    }
    // 0x8001EE1C: swc1        $f4, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f4.u32l;
    // 0x8001EE20: div.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001EE24: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001EE28: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8001EE2C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EE30: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8001EE34: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EE38: lwc1        $f10, 0x30($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X30);
    // 0x8001EE3C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x8001EE40: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EE44: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    // 0x8001EE48: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EE4C: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x8001EE50: swc1        $f4, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f4.u32l;
L_8001EE54:
    // 0x8001EE54: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001EE58: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8001EE5C: nop

    // 0x8001EE60: bc1tl       L_8001EEA0
    if (c1cs) {
        // 0x8001EE64: lwc1        $f0, 0x64($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
            goto L_8001EEA0;
    }
    goto skip_0;
    // 0x8001EE64: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x8001EE68: div.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001EE6C: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001EE70: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8001EE74: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EE78: lwc1        $f6, 0x24($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X24);
    // 0x8001EE7C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EE80: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8001EE84: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x8001EE88: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EE8C: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
    // 0x8001EE90: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EE94: swc1        $f8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f8.u32l;
    // 0x8001EE98: swc1        $f4, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f4.u32l;
    // 0x8001EE9C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
L_8001EEA0:
    // 0x8001EEA0: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8001EEA4: nop

    // 0x8001EEA8: bc1tl       L_8001EEE8
    if (c1cs) {
        // 0x8001EEAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001EEE8;
    }
    goto skip_1;
    // 0x8001EEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8001EEB0: div.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001EEB4: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001EEB8: lwc1        $f10, 0x18($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8001EEBC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EEC0: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x8001EEC4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EEC8: lwc1        $f10, 0x38($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X38);
    // 0x8001EECC: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x8001EED0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001EED4: swc1        $f4, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f4.u32l;
    // 0x8001EED8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001EEDC: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x8001EEE0: swc1        $f4, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f4.u32l;
    // 0x8001EEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001EEE8:
    // 0x8001EEE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001EEEC: jr          $ra
    // 0x8001EEF0: nop

    TRACE_RETURN()
    return;
    // 0x8001EEF0: nop

;}
RECOMP_FUNC void func_800350C4_35CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800350C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800350C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800350CC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800350D0: beq         $v1, $zero, L_800350E0
    if (ctx->r3 == 0) {
        // 0x800350D4: nop
    
            goto L_800350E0;
    }
    // 0x800350D4: nop

    // 0x800350D8: b           L_800350EC
    // 0x800350DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800350EC;
    // 0x800350DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800350E0:
    // 0x800350E0: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x800350E4: addiu       $v1, $v1, -0x2CD8
    ctx->r3 = ADD32(ctx->r3, -0X2CD8);
    // 0x800350E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_800350EC:
    // 0x800350EC: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x800350F0: lhu         $t7, 0x20($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X20);
    // 0x800350F4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800350F8: bne         $at, $zero, L_8003517C
    if (ctx->r1 != 0) {
        // 0x800350FC: lui         $t7, 0x8003
        ctx->r15 = S32(0X8003 << 16);
            goto L_8003517C;
    }
    // 0x800350FC: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x80035100: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80035104: jal         0x800351B4
    // 0x80035108: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800351B4_35DB4(rdram, ctx);
        goto after_0;
    // 0x80035108: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003510C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80035110: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80035114: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x80035118: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8003511C: addiu       $t8, $t8, 0x54B4
    ctx->r24 = ADD32(ctx->r24, 0X54B4);
    // 0x80035120: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80035124: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x80035128: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8003512C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80035130: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80035134: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x80035138: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x8003513C: addiu       $v1, $v1, -0x2CD8
    ctx->r3 = ADD32(ctx->r3, -0X2CD8);
    // 0x80035140: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80035144: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x80035148: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8003514C: addiu       $a1, $a1, -0x254C
    ctx->r5 = ADD32(ctx->r5, -0X254C);
    // 0x80035150: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80035154: lhu         $t3, 0xC($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XC);
    // 0x80035158: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x8003515C: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80035160: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80035164: bne         $a0, $t5, L_80035174
    if (ctx->r4 != ctx->r13) {
        // 0x80035168: sh          $t4, 0xC($v1)
        MEM_H(0XC, ctx->r3) = ctx->r12;
            goto L_80035174;
    }
    // 0x80035168: sh          $t4, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r12;
    // 0x8003516C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80035170: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80035174:
    // 0x80035174: b           L_80035184
    // 0x80035178: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
        goto L_80035184;
    // 0x80035178: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_8003517C:
    // 0x8003517C: addiu       $t7, $t7, 0x5194
    ctx->r15 = ADD32(ctx->r15, 0X5194);
    // 0x80035180: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
L_80035184:
    // 0x80035184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003518C: jr          $ra
    // 0x80035190: nop

    TRACE_RETURN()
    return;
    // 0x80035190: nop

;}
RECOMP_FUNC void strchr_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A4F4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8004A4F8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004A4FC: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8004A500: beql        $t6, $v1, L_8004A52C
    if (ctx->r14 == ctx->r3) {
        // 0x8004A504: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8004A52C;
    }
    goto skip_0;
    // 0x8004A504: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
L_8004A508:
    // 0x8004A508: bnel        $v1, $zero, L_8004A51C
    if (ctx->r3 != 0) {
        // 0x8004A50C: lbu         $v1, 0x1($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X1);
            goto L_8004A51C;
    }
    goto skip_1;
    // 0x8004A50C: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x8004A510: jr          $ra
    // 0x8004A514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8004A514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004A518: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
L_8004A51C:
    // 0x8004A51C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8004A520: bne         $v0, $v1, L_8004A508
    if (ctx->r2 != ctx->r3) {
        // 0x8004A524: nop
    
            goto L_8004A508;
    }
    // 0x8004A524: nop

    // 0x8004A528: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004A52C:
    // 0x8004A52C: jr          $ra
    // 0x8004A530: nop

    TRACE_RETURN()
    return;
    // 0x8004A530: nop

;}
RECOMP_FUNC void func_800277C0_283C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800277C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800277C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800277C8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800277CC: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x800277D0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800277D4: lhu         $t6, 0x5E($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X5E);
    // 0x800277D8: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x800277DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800277E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800277E4: lw          $t8, 0x6984($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6984);
    // 0x800277E8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800277EC: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x800277F0: jal         0x800141C4
    // 0x800277F4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x800277F4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x800277F8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800277FC: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x80027800: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80027804: lhu         $t3, 0x5E($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X5E);
    // 0x80027808: lbu         $t7, 0x6C($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X6C);
    // 0x8002780C: lw          $t0, 0x18($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X18);
    // 0x80027810: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80027814: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80027818: lw          $t5, 0x6984($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6984);
    // 0x8002781C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80027820: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80027824: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80027828: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8002782C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80027830: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x80027834: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80027838: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x8002783C: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80027840: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80027844: addu        $t1, $t3, $v0
    ctx->r9 = ADD32(ctx->r11, ctx->r2);
    // 0x80027848: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x8002784C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80027850: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80027854: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80027858: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8002785C: subu        $t9, $t2, $a1
    ctx->r25 = SUB32(ctx->r10, ctx->r5);
    // 0x80027860: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80027864: addu        $t2, $t9, $v0
    ctx->r10 = ADD32(ctx->r25, ctx->r2);
    // 0x80027868: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8002786C: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80027870: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80027874: beq         $a0, $zero, L_80027894
    if (ctx->r4 == 0) {
        // 0x80027878: swc1        $f4, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
            goto L_80027894;
    }
    // 0x80027878: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x8002787C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80027880: nop

    // 0x80027884: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80027888: nop

    // 0x8002788C: bc1fl       L_800278A0
    if (!c1cs) {
        // 0x80027890: mtc1        $a0, $f8
        ctx->f8.u32l = ctx->r4;
            goto L_800278A0;
    }
    goto skip_0;
    // 0x80027890: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    skip_0:
L_80027894:
    // 0x80027894: b           L_80027948
    // 0x80027898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80027948;
    // 0x80027898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002789C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
L_800278A0:
    // 0x800278A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800278A4: bgez        $a0, L_800278B8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800278A8: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800278B8;
    }
    // 0x800278A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800278AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800278B0: nop

    // 0x800278B4: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_800278B8:
    // 0x800278B8: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800278BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800278C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800278C4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800278C8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800278CC: nop

    // 0x800278D0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800278D4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800278D8: nop

    // 0x800278DC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x800278E0: beql        $a0, $zero, L_80027930
    if (ctx->r4 == 0) {
        // 0x800278E4: mfc1        $a0, $f8
        ctx->r4 = (int32_t)ctx->f8.u32l;
            goto L_80027930;
    }
    goto skip_1;
    // 0x800278E4: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x800278E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800278EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800278F0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800278F4: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800278F8: nop

    // 0x800278FC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80027900: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80027904: nop

    // 0x80027908: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8002790C: bne         $a0, $zero, L_80027924
    if (ctx->r4 != 0) {
        // 0x80027910: nop
    
            goto L_80027924;
    }
    // 0x80027910: nop

    // 0x80027914: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80027918: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002791C: b           L_8002793C
    // 0x80027920: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8002793C;
    // 0x80027920: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80027924:
    // 0x80027924: b           L_8002793C
    // 0x80027928: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8002793C;
    // 0x80027928: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002792C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
L_80027930:
    // 0x80027930: nop

    // 0x80027934: bltz        $a0, L_80027924
    if (SIGNED(ctx->r4) < 0) {
        // 0x80027938: nop
    
            goto L_80027924;
    }
    // 0x80027938: nop

L_8002793C:
    // 0x8002793C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80027940: nop

    // 0x80027944: nop

L_80027948:
    // 0x80027948: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002794C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80027950: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x80027954: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80027958: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002795C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80027960: bc1fl       L_80027974
    if (!c1cs) {
        // 0x80027964: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80027974;
    }
    goto skip_2;
    // 0x80027964: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x80027968: b           L_80027974
    // 0x8002796C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_80027974;
    // 0x8002796C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x80027970: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80027974:
    // 0x80027974: bgez        $a0, L_80027988
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80027978: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80027988;
    }
    // 0x80027978: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002797C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80027980: nop

    // 0x80027984: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_80027988:
    // 0x80027988: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8002798C: nop

    // 0x80027990: bc1t        L_80027A04
    if (c1cs) {
        // 0x80027994: nop
    
            goto L_80027A04;
    }
    // 0x80027994: nop

    // 0x80027998: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002799C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800279A0: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x800279A4: nop

    // 0x800279A8: bc1fl       L_800279BC
    if (!c1cs) {
        // 0x800279AC: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_800279BC;
    }
    goto skip_3;
    // 0x800279AC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_3:
    // 0x800279B0: b           L_800279BC
    // 0x800279B4: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_800279BC;
    // 0x800279B4: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x800279B8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_800279BC:
    // 0x800279BC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800279C0: nop

    // 0x800279C4: bc1t        L_80027A04
    if (c1cs) {
        // 0x800279C8: nop
    
            goto L_80027A04;
    }
    // 0x800279C8: nop

    // 0x800279CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800279D0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x800279D4: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x800279D8: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x800279DC: nop

    // 0x800279E0: bc1fl       L_800279F4
    if (!c1cs) {
        // 0x800279E4: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_800279F4;
    }
    goto skip_4;
    // 0x800279E4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_4:
    // 0x800279E8: b           L_800279F4
    // 0x800279EC: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_800279F4;
    // 0x800279EC: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x800279F0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_800279F4:
    // 0x800279F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800279F8: nop

    // 0x800279FC: bc1fl       L_80027A10
    if (!c1cs) {
        // 0x80027A00: lhu         $t5, 0x14($t0)
        ctx->r13 = MEM_HU(ctx->r8, 0X14);
            goto L_80027A10;
    }
    goto skip_5;
    // 0x80027A00: lhu         $t5, 0x14($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X14);
    skip_5:
L_80027A04:
    // 0x80027A04: b           L_80027A6C
    // 0x80027A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80027A6C;
    // 0x80027A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80027A0C: lhu         $t5, 0x14($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X14);
L_80027A10:
    // 0x80027A10: lhu         $t6, 0x16($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X16);
    // 0x80027A14: lhu         $t9, 0x18($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X18);
    // 0x80027A18: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
    // 0x80027A1C: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x80027A20: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80027A24: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80027A28: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80027A2C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80027A30: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80027A34: andi        $a1, $t6, 0x3FF
    ctx->r5 = ctx->r14 & 0X3FF;
    // 0x80027A38: jal         0x80033A3C
    // 0x80027A3C: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    func_80033A3C_3463C(rdram, ctx);
        goto after_1;
    // 0x80027A3C: andi        $a2, $t9, 0x3FF
    ctx->r6 = ctx->r25 & 0X3FF;
    after_1:
    // 0x80027A40: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80027A44: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80027A48: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80027A4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80027A50: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80027A54: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80027A58: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80027A5C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80027A60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80027A64: jal         0x80029E58
    // 0x80027A68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80029E58_2AA58(rdram, ctx);
        goto after_2;
    // 0x80027A68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
L_80027A6C:
    // 0x80027A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80027A70: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80027A74: jr          $ra
    // 0x80027A78: nop

    TRACE_RETURN()
    return;
    // 0x80027A78: nop

;}
