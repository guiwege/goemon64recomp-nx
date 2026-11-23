#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001A7C_6C11CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001A88: lui         $at, 0xC204
    ctx->r1 = S32(0XC204 << 16);
    // 0x08001A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A90: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001A94: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001A98: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001A9C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001AA0: lui         $a3, 0x461C
    ctx->r7 = S32(0X461C << 16);
    // 0x08001AA4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x08001AA8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001AAC: bc1t        L_08001AF4
    if (c1cs) {
        // 0x08001AB0: addiu       $a0, $zero, 0x272
        ctx->r4 = ADD32(0, 0X272);
            goto L_08001AF4;
    }
    // 0x08001AB0: addiu       $a0, $zero, 0x272
    ctx->r4 = ADD32(0, 0X272);
    // 0x08001AB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001AB8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001ABC: jalr        $t9
    // 0x08001AC0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AC0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08001AC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001AC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08001ACC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001AD0: lui         $at, 0xC204
    ctx->r1 = S32(0XC204 << 16);
    // 0x08001AD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001AD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ADC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1B04) << 16);
    // 0x08001AE4: swc1        $f8, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f8.u32l;
    // 0x08001AE8: addiu       $a0, $a0, 0x1B04
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1B04));
    // 0x08001AEC: jalr        $t9
    // 0x08001AF0: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AF0: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    after_1:
L_08001AF4:
    // 0x08001AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AFC: jr          $ra
    // 0x08001B00: nop

    TRACE_RETURN()
    return;
    // 0x08001B00: nop

;}
RECOMP_FUNC void func_08002848_6C1F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800284C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002850: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08002854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002858: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800285C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002860: lw          $t8, 0xA0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA0);
    // 0x08002864: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002868: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800286C: bne         $a1, $t8, L_08002894
    if (ctx->r5 != ctx->r24) {
        // 0x08002870: nop
    
            goto L_08002894;
    }
    // 0x08002870: nop

    // 0x08002874: jalr        $t9
    // 0x08002878: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002878: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x0800287C: bne         $v0, $zero, L_08002894
    if (ctx->r2 != 0) {
        // 0x08002880: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002894;
    }
    // 0x08002880: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002884: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08002888: jalr        $t9
    // 0x0800288C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800288C: nop

    after_1:
    // 0x08002890: beq         $v0, $zero, L_08002920
    if (ctx->r2 == 0) {
        // 0x08002894: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002920;
    }
L_08002894:
    // 0x08002894: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002898: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800289C: jalr        $t9
    // 0x080028A0: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080028A0: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_2:
    // 0x080028A4: beq         $v0, $zero, L_08002920
    if (ctx->r2 == 0) {
        // 0x080028A8: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08002920;
    }
    // 0x080028A8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080028AC: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x080028B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080028B4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080028B8: lw          $t2, 0xA0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XA0);
    // 0x080028BC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080028C0: bnel        $t0, $t2, L_08002924
    if (ctx->r8 != ctx->r10) {
        // 0x080028C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002924;
    }
    goto skip_0;
    // 0x080028C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080028C8: jalr        $t9
    // 0x080028CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080028CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x080028D0: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x080028D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080028D8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080028DC: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x080028E0: sb          $t3, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r11;
    // 0x080028E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080028E8: jalr        $v0
    // 0x080028EC: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x080028EC: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    after_4:
    // 0x080028F0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080028F4: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x080028F8: jalr        $v0
    // 0x080028FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x080028FC: nop

    after_5:
    // 0x08002900: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x08002904: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002908: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x0800290C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002910: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2930) << 16);
    // 0x08002914: addiu       $a0, $a0, 0x2930
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2930));
    // 0x08002918: jalr        $t9
    // 0x0800291C: sh          $t4, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800291C: sh          $t4, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r12;
    after_6:
L_08002920:
    // 0x08002920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002924:
    // 0x08002924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002928: jr          $ra
    // 0x0800292C: nop

    TRACE_RETURN()
    return;
    // 0x0800292C: nop

;}
RECOMP_FUNC void func_08007040_6C6790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007048: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800704C: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x08007050: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x08007054: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08007058: beq         $t7, $zero, L_08007084
    if (ctx->r15 == 0) {
        // 0x0800705C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08007084;
    }
    // 0x0800705C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08007060: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007064: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08007068: jalr        $t9
    // 0x0800706C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800706C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08007070: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007074: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007078: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X7094) << 16);
    // 0x0800707C: jalr        $t9
    // 0x08007080: addiu       $a0, $a0, 0x7094
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7094));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007080: addiu       $a0, $a0, 0x7094
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7094));
    after_1:
L_08007084:
    // 0x08007084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800708C: jr          $ra
    // 0x08007090: nop

    TRACE_RETURN()
    return;
    // 0x08007090: nop

;}
RECOMP_FUNC void func_08000970_6C00C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000970: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000974: jr          $ra
    // 0x08000978: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000978: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002D64_6C24B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002D6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2B4C) << 16);
    // 0x08002D7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002D80: jalr        $t9
    // 0x08002D84: addiu       $a0, $a0, 0x2B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2B4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D84: addiu       $a0, $a0, 0x2B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2B4C));
    after_0:
    // 0x08002D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D90: jr          $ra
    // 0x08002D94: nop

    TRACE_RETURN()
    return;
    // 0x08002D94: nop

;}
RECOMP_FUNC void func_08005624_6C4D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800562C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005634: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005638: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800563C: bne         $v0, $zero, L_08005674
    if (ctx->r2 != 0) {
        // 0x08005640: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005674;
    }
    // 0x08005640: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005644: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08005648: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800564C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005650: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08005654: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08005658: jalr        $t9
    // 0x0800565C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800565C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_0:
    // 0x08005660: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005664: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005668: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5684) << 16);
    // 0x0800566C: jalr        $t9
    // 0x08005670: addiu       $a0, $a0, 0x5684
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5684));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005670: addiu       $a0, $a0, 0x5684
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5684));
    after_1:
L_08005674:
    // 0x08005674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800567C: jr          $ra
    // 0x08005680: nop

    TRACE_RETURN()
    return;
    // 0x08005680: nop

;}
RECOMP_FUNC void func_08003EE0_6C3630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003EE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003EE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003EEC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003EF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003EF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003EF8: bne         $v0, $at, L_08003F48
    if (ctx->r2 != ctx->r1) {
        // 0x08003EFC: lui         $a2, 0x430A
        ctx->r6 = S32(0X430A << 16);
            goto L_08003F48;
    }
    // 0x08003EFC: lui         $a2, 0x430A
    ctx->r6 = S32(0X430A << 16);
    // 0x08003F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F04: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003F08: addiu       $t6, $zero, 0x79
    ctx->r14 = ADD32(0, 0X79);
    // 0x08003F0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003F10: jalr        $t9
    // 0x08003F14: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003F14: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_0:
    // 0x08003F18: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08003F1C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080040A8;
    }
    // 0x08003F1C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003F20: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003F24: jalr        $t9
    // 0x08003F28: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003F28: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x08003F2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003F38: jalr        $t9
    // 0x08003F3C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003F3C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_2:
    // 0x08003F40: b           L_080040AC
    // 0x08003F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080040AC;
    // 0x08003F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003F48:
    // 0x08003F48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003F4C: bne         $v0, $at, L_08003F90
    if (ctx->r2 != ctx->r1) {
        // 0x08003F50: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003F90;
    }
    // 0x08003F50: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003F54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F58: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003F5C: addiu       $t7, $zero, 0x79
    ctx->r15 = ADD32(0, 0X79);
    // 0x08003F60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08003F64: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x08003F68: jalr        $t9
    // 0x08003F6C: lui         $a3, 0x42C4
    ctx->r7 = S32(0X42C4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003F6C: lui         $a3, 0x42C4
    ctx->r7 = S32(0X42C4 << 16);
    after_3:
    // 0x08003F70: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08003F74: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
            goto L_080040A8;
    }
    // 0x08003F74: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003F78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F80: jalr        $t9
    // 0x08003F84: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003F84: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_4:
    // 0x08003F88: b           L_080040AC
    // 0x08003F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080040AC;
    // 0x08003F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003F90:
    // 0x08003F90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003F94: bne         $v0, $at, L_08003FD8
    if (ctx->r2 != ctx->r1) {
        // 0x08003F98: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003FD8;
    }
    // 0x08003F98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003FA0: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003FA4: addiu       $t8, $zero, 0x79
    ctx->r24 = ADD32(0, 0X79);
    // 0x08003FA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003FAC: lui         $a2, 0x42EC
    ctx->r6 = S32(0X42EC << 16);
    // 0x08003FB0: jalr        $t9
    // 0x08003FB4: lui         $a3, 0x42AC
    ctx->r7 = S32(0X42AC << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003FB4: lui         $a3, 0x42AC
    ctx->r7 = S32(0X42AC << 16);
    after_5:
    // 0x08003FB8: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08003FBC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
            goto L_080040A8;
    }
    // 0x08003FBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003FC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FC8: jalr        $t9
    // 0x08003FCC: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003FCC: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_6:
    // 0x08003FD0: b           L_080040AC
    // 0x08003FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080040AC;
    // 0x08003FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003FD8:
    // 0x08003FD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003FDC: bne         $v0, $at, L_08004020
    if (ctx->r2 != ctx->r1) {
        // 0x08003FE0: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08004020;
    }
    // 0x08003FE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003FE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003FE8: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003FEC: addiu       $t0, $zero, 0x79
    ctx->r8 = ADD32(0, 0X79);
    // 0x08003FF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08003FF4: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    // 0x08003FF8: jalr        $t9
    // 0x08003FFC: lui         $a3, 0x4294
    ctx->r7 = S32(0X4294 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003FFC: lui         $a3, 0x4294
    ctx->r7 = S32(0X4294 << 16);
    after_7:
    // 0x08004000: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08004004: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
            goto L_080040A8;
    }
    // 0x08004004: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08004008: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800400C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004010: jalr        $t9
    // 0x08004014: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004014: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_8:
    // 0x08004018: b           L_080040AC
    // 0x0800401C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080040AC;
    // 0x0800401C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004020:
    // 0x08004020: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08004024: bne         $v0, $at, L_08004068
    if (ctx->r2 != ctx->r1) {
        // 0x08004028: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08004068;
    }
    // 0x08004028: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800402C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004030: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08004034: addiu       $t1, $zero, 0x79
    ctx->r9 = ADD32(0, 0X79);
    // 0x08004038: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0800403C: lui         $a2, 0x42C4
    ctx->r6 = S32(0X42C4 << 16);
    // 0x08004040: jalr        $t9
    // 0x08004044: lui         $a3, 0x4278
    ctx->r7 = S32(0X4278 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004044: lui         $a3, 0x4278
    ctx->r7 = S32(0X4278 << 16);
    after_9:
    // 0x08004048: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x0800404C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
            goto L_080040A8;
    }
    // 0x0800404C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08004050: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004054: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004058: jalr        $t9
    // 0x0800405C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800405C: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_10:
    // 0x08004060: b           L_080040AC
    // 0x08004064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080040AC;
    // 0x08004064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004068:
    // 0x08004068: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x0800406C: bne         $v0, $at, L_080040A8
    if (ctx->r2 != ctx->r1) {
        // 0x08004070: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_080040A8;
    }
    // 0x08004070: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08004074: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004078: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x0800407C: addiu       $t2, $zero, 0x79
    ctx->r10 = ADD32(0, 0X79);
    // 0x08004080: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08004084: lui         $a2, 0x42B0
    ctx->r6 = S32(0X42B0 << 16);
    // 0x08004088: jalr        $t9
    // 0x0800408C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800408C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_11:
    // 0x08004090: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08004094: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
            goto L_080040A8;
    }
    // 0x08004094: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08004098: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800409C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080040A0: jalr        $t9
    // 0x080040A4: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080040A4: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_12:
L_080040A8:
    // 0x080040A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080040AC:
    // 0x080040AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080040B0: jr          $ra
    // 0x080040B4: nop

    TRACE_RETURN()
    return;
    // 0x080040B4: nop

;}
RECOMP_FUNC void func_08004BDC_6C432C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004BDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004BE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08004BE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08004BE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004BEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004BF0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08004BF4: sb          $zero, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = 0;
    // 0x08004BF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BFC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004C00: lbu         $a1, 0xDC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004C04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004C08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004C0C: jalr        $t9
    // 0x08004C10: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004C10: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x08004C14: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004C18: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08004C1C: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
    // 0x08004C20: lbu         $v1, 0xD0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD0);
    // 0x08004C24: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x08004C28: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08004C2C: bne         $v1, $zero, L_08004C60
    if (ctx->r3 != 0) {
        // 0x08004C30: sw          $t7, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r15;
            goto L_08004C60;
    }
    // 0x08004C30: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08004C34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004C38: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004C40: jalr        $t9
    // 0x08004C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08004C48: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A2C) << 16);
    // 0x08004C4C: lwc1        $f2, -0x75D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A2C));
    // 0x08004C50: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x08004C54: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08004C58: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x08004C5C: lbu         $v1, 0xD0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD0);
L_08004C60:
    // 0x08004C60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004C64: bne         $v1, $at, L_08004C94
    if (ctx->r3 != ctx->r1) {
        // 0x08004C68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004C94;
    }
    // 0x08004C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004C6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004C70: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004C74: jalr        $t9
    // 0x08004C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08004C7C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A34) << 16);
    // 0x08004C80: lwc1        $f0, -0x75CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A34));
    // 0x08004C84: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08004C88: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08004C8C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08004C90: lbu         $v1, 0xD0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD0);
L_08004C94:
    // 0x08004C94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004C98: bne         $v1, $at, L_08004CC4
    if (ctx->r3 != ctx->r1) {
        // 0x08004C9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004CC4;
    }
    // 0x08004C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004CA0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004CA4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004CA8: jalr        $t9
    // 0x08004CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08004CB0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A3C) << 16);
    // 0x08004CB4: lwc1        $f2, -0x75C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A3C));
    // 0x08004CB8: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x08004CBC: swc1        $f2, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f2.u32l;
    // 0x08004CC0: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
L_08004CC4:
    // 0x08004CC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004CC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004CCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4CEC) << 16);
    // 0x08004CD0: jalr        $t9
    // 0x08004CD4: addiu       $a0, $a0, 0x4CEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4CEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004CD4: addiu       $a0, $a0, 0x4CEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4CEC));
    after_4:
    // 0x08004CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004CDC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08004CE0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08004CE4: jr          $ra
    // 0x08004CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08004CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080024E4_6C1C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080024E8: jr          $ra
    // 0x080024EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080024EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800201C_6C176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800201C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002020: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800202C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002030: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002034: jalr        $t9
    // 0x08002038: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002038: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x0800203C: bne         $v0, $zero, L_08002054
    if (ctx->r2 != 0) {
        // 0x08002040: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002054;
    }
    // 0x08002040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002044: jal         0x08001E00
    // 0x08002048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_08001E00_6C1550(rdram, ctx);
        goto after_1;
    // 0x08002048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800204C: b           L_08002084
    // 0x08002050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002084;
    // 0x08002050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002054:
    // 0x08002054: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002058: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x0800205C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08002060: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89D8) << 16);
    // 0x08002064: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x08002068: bne         $t6, $t7, L_08002078
    if (ctx->r14 != ctx->r15) {
        // 0x0800206C: nop
    
            goto L_08002078;
    }
    // 0x0800206C: nop

    // 0x08002070: lwc1        $f4, -0x7628($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89D8));
    // 0x08002074: swc1        $f4, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f4.u32l;
L_08002078:
    // 0x08002078: jal         0x08001E00
    // 0x0800207C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_08001E00_6C1550(rdram, ctx);
        goto after_2;
    // 0x0800207C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x08002080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002084:
    // 0x08002084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002088: jr          $ra
    // 0x0800208C: nop

    TRACE_RETURN()
    return;
    // 0x0800208C: nop

;}
RECOMP_FUNC void func_08005C34_6C5384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005C3C: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08005C40: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08005C44: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08005C48: nop

    // 0x08005C4C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08005C50: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x08005C54: nop

    // 0x08005C58: bc1tl       L_08005C9C
    if (c1cs) {
        // 0x08005C5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005C9C;
    }
    goto skip_0;
    // 0x08005C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08005C60: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x08005C64: lbu         $t7, 0xD1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD1);
    // 0x08005C68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08005C6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08005C70: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08005C74: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08005C78: bne         $t8, $zero, L_08005C84
    if (ctx->r24 != 0) {
        // 0x08005C7C: swc1        $f8, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
            goto L_08005C84;
    }
    // 0x08005C7C: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
    // 0x08005C80: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
L_08005C84:
    // 0x08005C84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005C88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005C8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5CA8) << 16);
    // 0x08005C90: jalr        $t9
    // 0x08005C94: addiu       $a0, $a0, 0x5CA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5CA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005C94: addiu       $a0, $a0, 0x5CA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5CA8));
    after_0:
    // 0x08005C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005C9C:
    // 0x08005C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005CA0: jr          $ra
    // 0x08005CA4: nop

    TRACE_RETURN()
    return;
    // 0x08005CA4: nop

;}
RECOMP_FUNC void func_0800532C_6C4A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800532C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005330: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800533C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08005340: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005344: jalr        $t9
    // 0x08005348: addiu       $a0, $zero, 0x71
    ctx->r4 = ADD32(0, 0X71);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005348: addiu       $a0, $zero, 0x71
    ctx->r4 = ADD32(0, 0X71);
    after_0:
    // 0x0800534C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005350: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005354: jalr        $t9
    // 0x08005358: addiu       $a0, $zero, 0x26B
    ctx->r4 = ADD32(0, 0X26B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005358: addiu       $a0, $zero, 0x26B
    ctx->r4 = ADD32(0, 0X26B);
    after_1:
    // 0x0800535C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005360: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08005364: jalr        $t9
    // 0x08005368: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005368: nop

    after_2:
    // 0x0800536C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005370: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08005374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08005378: jalr        $t9
    // 0x0800537C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800537C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x08005380: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005384: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005388: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X53A4) << 16);
    // 0x0800538C: jalr        $t9
    // 0x08005390: addiu       $a0, $a0, 0x53A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X53A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005390: addiu       $a0, $a0, 0x53A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X53A4));
    after_4:
    // 0x08005394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800539C: jr          $ra
    // 0x080053A0: nop

    TRACE_RETURN()
    return;
    // 0x080053A0: nop

;}
RECOMP_FUNC void func_08001CCC_6C141C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001CD0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001CD8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001CDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001CE0: jalr        $t9
    // 0x08001CE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001CE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001CE8: bne         $v0, $zero, L_08001CFC
    if (ctx->r2 != 0) {
        // 0x08001CEC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001CFC;
    }
    // 0x08001CEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CF0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001CF4: jalr        $t9
    // 0x08001CF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CF8: nop

    after_1:
L_08001CFC:
    // 0x08001CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D04: jr          $ra
    // 0x08001D08: nop

    TRACE_RETURN()
    return;
    // 0x08001D08: nop

;}
RECOMP_FUNC void func_0800152C_6C0C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800152C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001534: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x08001538: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800153C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001540: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001544: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08001548: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800154C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001550: bc1tl       L_08001588
    if (c1cs) {
        // 0x08001554: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001588;
    }
    goto skip_0;
    // 0x08001554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001558: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x0800155C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x08001560: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001564: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08001568: jalr        $t9
    // 0x0800156C: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800156C: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_0:
    // 0x08001570: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001574: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001578: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1594) << 16);
    // 0x0800157C: jalr        $t9
    // 0x08001580: addiu       $a0, $a0, 0x1594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1594));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001580: addiu       $a0, $a0, 0x1594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1594));
    after_1:
    // 0x08001584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001588:
    // 0x08001588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800158C: jr          $ra
    // 0x08001590: nop

    TRACE_RETURN()
    return;
    // 0x08001590: nop

;}
RECOMP_FUNC void func_08000298_6BF9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000298: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x0800029C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080002A0: lui         $t9, 0x8280
    ctx->r25 = S32(0X8280 << 16);
    // 0x080002A4: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080002A8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x080002AC: beq         $t7, $zero, L_080002BC
    if (ctx->r15 == 0) {
        // 0x080002B0: ori         $t9, $t9, 0x320
        ctx->r25 = ctx->r25 | 0X320;
            goto L_080002BC;
    }
    // 0x080002B0: ori         $t9, $t9, 0x320
    ctx->r25 = ctx->r25 | 0X320;
    // 0x080002B4: jr          $ra
    // 0x080002B8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x080002B8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
L_080002BC:
    // 0x080002BC: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x080002C0: jr          $ra
    // 0x080002C4: nop

    TRACE_RETURN()
    return;
    // 0x080002C4: nop

;}
RECOMP_FUNC void func_08002B4C_6C229C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002B50: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002B5C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002B60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002B64: jalr        $t9
    // 0x08002B68: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B68: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x08002B6C: beq         $v0, $zero, L_08002BE8
    if (ctx->r2 == 0) {
        // 0x08002B70: lui         $t7, 0x8020
        ctx->r15 = S32(0X8020 << 16);
            goto L_08002BE8;
    }
    // 0x08002B70: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002B74: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08002B78: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002B7C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002B80: lw          $t8, 0xA0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA0);
    // 0x08002B84: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002B88: bnel        $t6, $t8, L_08002BEC
    if (ctx->r14 != ctx->r24) {
        // 0x08002B8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002BEC;
    }
    goto skip_0;
    // 0x08002B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002B90: jalr        $t9
    // 0x08002B94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x08002B98: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x08002B9C: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x08002BA0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08002BA4: jalr        $v0
    // 0x08002BA8: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08002BA8: addiu       $a0, $zero, 0x2A5
    ctx->r4 = ADD32(0, 0X2A5);
    after_2:
    // 0x08002BAC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08002BB0: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08002BB4: jalr        $v0
    // 0x08002BB8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08002BB8: nop

    after_3:
    // 0x08002BBC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x08002BC0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08002BC4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002BC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BCC: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x08002BD0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08002BD4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2BF8) << 16);
    // 0x08002BDC: addiu       $a0, $a0, 0x2BF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2BF8));
    // 0x08002BE0: jalr        $t9
    // 0x08002BE4: sh          $t1, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002BE4: sh          $t1, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = ctx->r9;
    after_4:
L_08002BE8:
    // 0x08002BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002BEC:
    // 0x08002BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002BF0: jr          $ra
    // 0x08002BF4: nop

    TRACE_RETURN()
    return;
    // 0x08002BF4: nop

;}
RECOMP_FUNC void func_08004998_6C40E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004998: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800499C: jr          $ra
    // 0x080049A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080049A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800601C_6C576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800601C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006020: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(21, 0X5F2C) << 16);
    // 0x08006024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800602C: addiu       $t9, $t9, 0x5F2C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(21, 0X5F2C));
    // 0x08006030: jalr        $t9
    // 0x08006034: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006034: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08006038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800603C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006040: jr          $ra
    // 0x08006044: nop

    TRACE_RETURN()
    return;
    // 0x08006044: nop

;}
RECOMP_FUNC void func_080054A4_6C4BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080054A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080054A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080054AC: lhu         $t6, 0x18($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X18);
    // 0x080054B0: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x080054B4: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x080054B8: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x080054BC: lwc1        $f4, 0xDC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080054C0: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x080054C4: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x080054C8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080054CC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x080054D0: nop

    // 0x080054D4: sll         $t0, $t9, 7
    ctx->r8 = S32(ctx->r25 << 7);
    // 0x080054D8: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x080054DC: bne         $at, $zero, L_0800550C
    if (ctx->r1 != 0) {
        // 0x080054E0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800550C;
    }
    // 0x080054E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080054E4: sh          $t1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r9;
    // 0x080054E8: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x080054EC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080054F0: jalr        $t9
    // 0x080054F4: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080054F4: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    after_0:
    // 0x080054F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080054FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005500: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X551C) << 16);
    // 0x08005504: jalr        $t9
    // 0x08005508: addiu       $a0, $a0, 0x551C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X551C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005508: addiu       $a0, $a0, 0x551C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X551C));
    after_1:
L_0800550C:
    // 0x0800550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005514: jr          $ra
    // 0x08005518: nop

    TRACE_RETURN()
    return;
    // 0x08005518: nop

;}
RECOMP_FUNC void func_080072C4_6C6A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080072C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080072C8: jr          $ra
    // 0x080072CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080072CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080076B4_6C6E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080076B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080076B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080076BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080076C0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080076C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080076C8: jalr        $t9
    // 0x080076CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080076CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080076D0: bne         $v0, $zero, L_080076E4
    if (ctx->r2 != 0) {
        // 0x080076D4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080076E4;
    }
    // 0x080076D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080076D8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080076DC: jalr        $t9
    // 0x080076E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080076E0: nop

    after_1:
L_080076E4:
    // 0x080076E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080076E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080076EC: jr          $ra
    // 0x080076F0: nop

    TRACE_RETURN()
    return;
    // 0x080076F0: nop

;}
RECOMP_FUNC void func_080029A0_6C20F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080029A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080029A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080029AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080029B0: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080029B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080029B8: jalr        $t9
    // 0x080029BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080029BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x080029C0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080029C4: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x080029C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080029CC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080029D0: lw          $t8, 0xA0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA0);
    // 0x080029D4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080029D8: beql        $t6, $t8, L_08002A14
    if (ctx->r14 == ctx->r24) {
        // 0x080029DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002A14;
    }
    goto skip_0;
    // 0x080029DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080029E0: jalr        $t9
    // 0x080029E4: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080029E4: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x080029E8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x080029EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080029F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029F4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x080029F8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x080029FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2A20) << 16);
    // 0x08002A04: addiu       $a0, $a0, 0x2A20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2A20));
    // 0x08002A08: jalr        $t9
    // 0x08002A0C: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A0C: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    after_2:
    // 0x08002A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002A14:
    // 0x08002A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A18: jr          $ra
    // 0x08002A1C: nop

    TRACE_RETURN()
    return;
    // 0x08002A1C: nop

;}
RECOMP_FUNC void func_0800676C_6C5EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800676C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08006770: jr          $ra
    // 0x08006774: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08006774: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080023E4_6C1B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080023E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080023F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080023F4: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x080023F8: jalr        $t9
    // 0x080023FC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023FC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_0:
    // 0x08002400: bne         $v0, $zero, L_08002418
    if (ctx->r2 != 0) {
        // 0x08002404: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X2428) << 16);
            goto L_08002418;
    }
    // 0x08002404: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2428) << 16);
    // 0x08002408: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800240C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002410: jalr        $t9
    // 0x08002414: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2428));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002414: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2428));
    after_1:
L_08002418:
    // 0x08002418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800241C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002420: jr          $ra
    // 0x08002424: nop

    TRACE_RETURN()
    return;
    // 0x08002424: nop

;}
RECOMP_FUNC void func_08005858_6C4FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800585C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005864: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08005868: lbu         $t8, 0xD2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD2);
    // 0x0800586C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08005870: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x08005874: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08005878: bne         $v0, $t8, L_08005890
    if (ctx->r2 != ctx->r24) {
        // 0x0800587C: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08005890;
    }
    // 0x0800587C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08005880: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08005884: ori         $t9, $t9, 0x2E0
    ctx->r25 = ctx->r25 | 0X2E0;
    // 0x08005888: b           L_0800589C
    // 0x0800588C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
        goto L_0800589C;
    // 0x0800588C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_08005890:
    // 0x08005890: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x08005894: ori         $t0, $t0, 0x2E0
    ctx->r8 = ctx->r8 | 0X2E0;
    // 0x08005898: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_0800589C:
    // 0x0800589C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080058A0: lbu         $t4, 0xD4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XD4);
    // 0x080058A4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x080058A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080058AC: sb          $t3, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r11;
    // 0x080058B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080058B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080058B8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x080058BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x080058C0: bne         $v0, $t4, L_08005914
    if (ctx->r2 != ctx->r12) {
        // 0x080058C4: sh          $t2, 0xA0($a0)
        MEM_H(0XA0, ctx->r4) = ctx->r10;
            goto L_08005914;
    }
    // 0x080058C4: sh          $t2, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = ctx->r10;
    // 0x080058C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080058CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080058D0: addiu       $t5, $zero, 0x1A4
    ctx->r13 = ADD32(0, 0X1A4);
    // 0x080058D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080058D8: sh          $t5, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r13;
    // 0x080058DC: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x080058E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080058E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080058E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080058EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080058F0: jalr        $t9
    // 0x080058F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080058F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080058F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080058FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08005904: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08005908: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800590C: b           L_08005940
    // 0x08005910: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08005940;
    // 0x08005910: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08005914:
    // 0x08005914: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005918: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800591C: jalr        $t9
    // 0x08005920: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005920: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08005924: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A50) << 16);
    // 0x08005928: lwc1        $f0, -0x75B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A50));
    // 0x0800592C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08005930: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08005934: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08005938: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800593C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08005940:
    // 0x08005940: lbu         $t7, 0xD0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD0);
    // 0x08005944: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x08005948: sb          $t6, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r14;
    // 0x0800594C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08005950: bne         $t8, $zero, L_08005960
    if (ctx->r24 != 0) {
        // 0x08005954: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08005960;
    }
    // 0x08005954: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08005958: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800595C: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
L_08005960:
    // 0x08005960: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005964: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005968: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5988) << 16);
    // 0x0800596C: jalr        $t9
    // 0x08005970: addiu       $a0, $a0, 0x5988
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5988));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005970: addiu       $a0, $a0, 0x5988
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5988));
    after_2:
    // 0x08005974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800597C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005980: jr          $ra
    // 0x08005984: nop

    TRACE_RETURN()
    return;
    // 0x08005984: nop

;}
RECOMP_FUNC void func_08004AAC_6C41FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AAC: jr          $ra
    // 0x08004AB0: nop

    TRACE_RETURN()
    return;
    // 0x08004AB0: nop

;}
RECOMP_FUNC void func_08000E2C_6C057C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000E38: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000E3C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000E40: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000E44: swc1        $f4, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->f4.u32l;
    // 0x08000E48: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000E4C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89B8) << 16);
    // 0x08000E50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000E54: swc1        $f6, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f6.u32l;
    // 0x08000E58: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000E5C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E60: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000E64: swc1        $f8, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->f8.u32l;
    // 0x08000E68: lwc1        $f10, -0x7648($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89B8));
    // 0x08000E6C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08000E70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000E74: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x08000E78: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000E7C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x08000E80: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000E84: nop

    // 0x08000E88: bc1fl       L_08000EA4
    if (!c1cs) {
        // 0x08000E8C: lui         $at, 0xC270
        ctx->r1 = S32(0XC270 << 16);
            goto L_08000EA4;
    }
    goto skip_0;
    // 0x08000E8C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    skip_0:
    // 0x08000E90: jalr        $t9
    // 0x08000E94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000E98: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08000E9C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000EA0: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
L_08000EA4:
    // 0x08000EA4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000EA8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08000EAC: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    // 0x08000EB0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000EB4: nop

    // 0x08000EB8: bc1tl       L_08000F24
    if (c1cs) {
        // 0x08000EBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000F24;
    }
    goto skip_1;
    // 0x08000EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000EC0: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x08000EC4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000EC8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000ECC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000ED0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08000ED4: jalr        $t9
    // 0x08000ED8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000ED8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    after_1:
    // 0x08000EDC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000EE0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000EE4: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x08000EE8: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x08000EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000EF4: jalr        $t9
    // 0x08000EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000EFC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000F00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F04: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08000F08: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XF34) << 16);
    // 0x08000F10: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08000F14: addiu       $a0, $a0, 0xF34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XF34));
    // 0x08000F18: jalr        $t9
    // 0x08000F1C: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F1C: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x08000F20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000F24:
    // 0x08000F24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F2C: jr          $ra
    // 0x08000F30: nop

    TRACE_RETURN()
    return;
    // 0x08000F30: nop

;}
RECOMP_FUNC void func_08002D98_6C24E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002D9C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002DA0: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08002DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002DA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002DAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002DB0: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08002DB4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08002DB8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08002DBC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002DC0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08002DC4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002DC8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x08002DCC: jalr        $t9
    // 0x08002DD0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DD0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x08002DD4: beq         $v0, $zero, L_08002E4C
    if (ctx->r2 == 0) {
        // 0x08002DD8: lw          $t0, 0x28($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X28);
            goto L_08002E4C;
    }
    // 0x08002DD8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x08002DDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002DE0: addiu       $t9, $t9, 0x1B60
    ctx->r25 = ADD32(ctx->r25, 0X1B60);
    // 0x08002DE4: jalr        $t9
    // 0x08002DE8: sb          $zero, 0xDC($t0)
    MEM_B(0XDC, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DE8: sb          $zero, 0xDC($t0)
    MEM_B(0XDC, ctx->r8) = 0;
    after_1:
    // 0x08002DEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002DF0: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08002DF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08002DF8: jalr        $t9
    // 0x08002DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08002E00: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08002E04: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E08: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08002E0C: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08002E10: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x08002E14: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x08002E18: jalr        $t9
    // 0x08002E1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x08002E20: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08002E24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E28: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08002E2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08002E30: jalr        $t9
    // 0x08002E34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002E34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_4:
    // 0x08002E38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2E5C) << 16);
    // 0x08002E44: jalr        $t9
    // 0x08002E48: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002E48: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    after_5:
L_08002E4C:
    // 0x08002E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002E54: jr          $ra
    // 0x08002E58: nop

    TRACE_RETURN()
    return;
    // 0x08002E58: nop

;}
RECOMP_FUNC void func_08004AF4_6C4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004AF8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004B00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004B04: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08004B08: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x08004B0C: jalr        $t9
    // 0x08004B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08004B14: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004B18: beq         $v0, $zero, L_08004B3C
    if (ctx->r2 == 0) {
        // 0x08004B1C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_08004B3C;
    }
    // 0x08004B1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08004B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004B24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004B28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4AE8) << 16);
    // 0x08004B2C: jalr        $t9
    // 0x08004B30: addiu       $a0, $a0, 0x4AE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4AE8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B30: addiu       $a0, $a0, 0x4AE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4AE8));
    after_1:
    // 0x08004B34: b           L_08004BD0
    // 0x08004B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08004BD0;
    // 0x08004B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004B3C:
    // 0x08004B3C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08004B40: addiu       $t6, $zero, 0x24F
    ctx->r14 = ADD32(0, 0X24F);
    // 0x08004B44: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08004B48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004B4C: sh          $t6, 0x5E($a3)
    MEM_H(0X5E, ctx->r7) = ctx->r14;
    // 0x08004B50: sw          $t7, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->r15;
    // 0x08004B54: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004B58: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08004B5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004B60: jalr        $t9
    // 0x08004B64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004B64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x08004B68: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004B6C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08004B70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004B74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004B78: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08004B7C: sb          $t8, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = ctx->r24;
    // 0x08004B80: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A28) << 16);
    // 0x08004B84: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08004B88: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08004B8C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08004B90: lwc1        $f4, -0x75D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A28));
    // 0x08004B94: lui         $at, 0xC2A8
    ctx->r1 = S32(0XC2A8 << 16);
    // 0x08004B98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004B9C: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x08004BA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004BA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004BA8: addiu       $t0, $zero, 0x37F
    ctx->r8 = ADD32(0, 0X37F);
    // 0x08004BAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004BB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4AE8) << 16);
    // 0x08004BB4: addiu       $a0, $a0, 0x4AE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4AE8));
    // 0x08004BB8: sh          $t0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r8;
    // 0x08004BBC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08004BC0: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08004BC4: jalr        $t9
    // 0x08004BC8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004BC8: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_3:
    // 0x08004BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004BD0:
    // 0x08004BD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004BD4: jr          $ra
    // 0x08004BD8: nop

    TRACE_RETURN()
    return;
    // 0x08004BD8: nop

;}
RECOMP_FUNC void func_08002E5C_6C25AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002E60: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002E64: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08002E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002E70: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08002E74: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08002E78: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08002E7C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08002E80: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08002E84: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08002E88: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08002E8C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002E90: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08002E94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08002E98: jalr        $v0
    // 0x08002E9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08002E9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x08002EA0: bne         $v0, $zero, L_08002F0C
    if (ctx->r2 != 0) {
        // 0x08002EA4: lui         $s0, 0x8002
        ctx->r16 = S32(0X8002 << 16);
            goto L_08002F0C;
    }
    // 0x08002EA4: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08002EA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08002EAC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002EB0: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08002EB4: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08002EB8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08002EBC: beq         $a0, $zero, L_08002ED0
    if (ctx->r4 == 0) {
        // 0x08002EC0: nop
    
            goto L_08002ED0;
    }
    // 0x08002EC0: nop

    // 0x08002EC4: jalr        $t9
    // 0x08002EC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002EC8: nop

    after_1:
    // 0x08002ECC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_08002ED0:
    // 0x08002ED0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002ED4: addiu       $t9, $t9, 0x1BB4
    ctx->r25 = ADD32(ctx->r25, 0X1BB4);
    // 0x08002ED8: jalr        $t9
    // 0x08002EDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002EDC: nop

    after_2:
    // 0x08002EE0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08002EE4: lw          $t1, -0x39DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39DC);
    // 0x08002EE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EEC: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x08002EF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002EF4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2D98) << 16);
    // 0x08002EF8: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2D98));
    // 0x08002EFC: jalr        $t9
    // 0x08002F00: sb          $t0, 0xD0($t1)
    MEM_B(0XD0, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002F00: sb          $t0, 0xD0($t1)
    MEM_B(0XD0, ctx->r9) = ctx->r8;
    after_3:
    // 0x08002F04: b           L_08002FF4
    // 0x08002F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002FF4;
    // 0x08002F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002F0C:
    // 0x08002F0C: addiu       $s0, $s0, 0x40DC
    ctx->r16 = ADD32(ctx->r16, 0X40DC);
    // 0x08002F10: jalr        $s0
    // 0x08002F14: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08002F14: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    after_4:
    // 0x08002F18: bnel        $v0, $zero, L_08002F5C
    if (ctx->r2 != 0) {
        // 0x08002F1C: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_08002F5C;
    }
    goto skip_0;
    // 0x08002F1C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x08002F20: jalr        $s0
    // 0x08002F24: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08002F24: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_5:
    // 0x08002F28: beq         $v0, $zero, L_08002F58
    if (ctx->r2 == 0) {
        // 0x08002F2C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002F58;
    }
    // 0x08002F2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002F30: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002F34: jalr        $t9
    // 0x08002F38: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002F38: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    after_6:
    // 0x08002F3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3044) << 16);
    // 0x08002F48: jalr        $t9
    // 0x08002F4C: addiu       $a0, $a0, 0x3044
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3044));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002F4C: addiu       $a0, $a0, 0x3044
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3044));
    after_7:
    // 0x08002F50: b           L_08002FF4
    // 0x08002F54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002FF4;
    // 0x08002F54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002F58:
    // 0x08002F58: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_08002F5C:
    // 0x08002F5C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x08002F60: jalr        $t9
    // 0x08002F64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002F64: nop

    after_8:
    // 0x08002F68: beq         $v0, $zero, L_08002F8C
    if (ctx->r2 == 0) {
        // 0x08002F6C: lw          $s0, 0x30($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X30);
            goto L_08002F8C;
    }
    // 0x08002F6C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08002F70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F78: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3164) << 16);
    // 0x08002F7C: jalr        $t9
    // 0x08002F80: addiu       $a0, $a0, 0x3164
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3164));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002F80: addiu       $a0, $a0, 0x3164
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3164));
    after_9:
    // 0x08002F84: b           L_08002FF4
    // 0x08002F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002FF4;
    // 0x08002F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002F8C:
    // 0x08002F8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002F90: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08002F94: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08002F98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002F9C: jalr        $t9
    // 0x08002FA0: addiu       $a1, $zero, 0x1600
    ctx->r5 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08002FA0: addiu       $a1, $zero, 0x1600
    ctx->r5 = ADD32(0, 0X1600);
    after_10:
    // 0x08002FA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FA8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08002FAC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002FB0: lui         $a1, 0xC130
    ctx->r5 = S32(0XC130 << 16);
    // 0x08002FB4: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x08002FB8: jalr        $t9
    // 0x08002FBC: lui         $a3, 0x4339
    ctx->r7 = S32(0X4339 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002FBC: lui         $a3, 0x4339
    ctx->r7 = S32(0X4339 << 16);
    after_11:
    // 0x08002FC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FC4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002FC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002FCC: lui         $a1, 0xC2CE
    ctx->r5 = S32(0XC2CE << 16);
    // 0x08002FD0: lui         $a2, 0xC214
    ctx->r6 = S32(0XC214 << 16);
    // 0x08002FD4: jalr        $t9
    // 0x08002FD8: lui         $a3, 0x4150
    ctx->r7 = S32(0X4150 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08002FD8: lui         $a3, 0x4150
    ctx->r7 = S32(0X4150 << 16);
    after_12:
    // 0x08002FDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FE0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002FE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08002FE8: jalr        $t9
    // 0x08002FEC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002FEC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_13:
    // 0x08002FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002FF4:
    // 0x08002FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002FF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002FFC: jr          $ra
    // 0x08003000: nop

    TRACE_RETURN()
    return;
    // 0x08003000: nop

    // 0x08003004: jr          $ra
    // 0x08003008: nop

    TRACE_RETURN()
    return;
    // 0x08003008: nop

    // 0x0800300C: jr          $ra
    // 0x08003010: nop

    TRACE_RETURN()
    return;
    // 0x08003010: nop

    // 0x08003014: jr          $ra
    // 0x08003018: nop

    TRACE_RETURN()
    return;
    // 0x08003018: nop

    // 0x0800301C: jr          $ra
    // 0x08003020: nop

    TRACE_RETURN()
    return;
    // 0x08003020: nop

    // 0x08003024: jr          $ra
    // 0x08003028: nop

    TRACE_RETURN()
    return;
    // 0x08003028: nop

    // 0x0800302C: jr          $ra
    // 0x08003030: nop

    TRACE_RETURN()
    return;
    // 0x08003030: nop

    // 0x08003034: jr          $ra
    // 0x08003038: nop

    TRACE_RETURN()
    return;
    // 0x08003038: nop

    // 0x0800303C: jr          $ra
    // 0x08003040: nop

    TRACE_RETURN()
    return;
    // 0x08003040: nop

;}
RECOMP_FUNC void func_08004D64_6C44B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004D64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004D68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004D6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004D70: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004D74: lbu         $t6, 0xDC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004D78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004D7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D80: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x08004D84: sb          $t7, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r15;
    // 0x08004D88: lbu         $a1, 0xDC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004D8C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004D94: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08004D98: jalr        $t9
    // 0x08004D9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004D9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004DA0: lbu         $t8, 0xDC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004DA4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4DDC) << 16);
    // 0x08004DA8: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08004DAC: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x08004DB0: beq         $at, $zero, L_08004DC8
    if (ctx->r1 == 0) {
        // 0x08004DB4: addiu       $a0, $a0, 0x4DDC
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4DDC));
            goto L_08004DC8;
    }
    // 0x08004DB4: addiu       $a0, $a0, 0x4DDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4DDC));
    // 0x08004DB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004DBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004DC0: jalr        $t9
    // 0x08004DC4: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004DC4: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    after_1:
L_08004DC8:
    // 0x08004DC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004DCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004DD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004DD4: jr          $ra
    // 0x08004DD8: nop

    TRACE_RETURN()
    return;
    // 0x08004DD8: nop

;}
RECOMP_FUNC void func_080072E8_6C6A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080072E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080072EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080072F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080072F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080072F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080072FC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08007300: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007304: jalr        $t9
    // 0x08007308: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007308: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    after_0:
    // 0x0800730C: beq         $v0, $zero, L_08007324
    if (ctx->r2 == 0) {
        // 0x08007310: lui         $t8, 0x20
        ctx->r24 = S32(0X20 << 16);
            goto L_08007324;
    }
    // 0x08007310: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08007314: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08007318: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x0800731C: b           L_080073A8
    // 0x08007320: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080073A8;
    // 0x08007320: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08007324:
    // 0x08007324: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007328: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x0800732C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08007330: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08007334: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08007338: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x0800733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007340: jalr        $t9
    // 0x08007344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08007348: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800734C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08007350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007354: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08007358: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x0800735C: jalr        $t9
    // 0x08007360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08007364: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007368: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800736C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007370: jalr        $t9
    // 0x08007374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08007378: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8AB0) << 16);
    // 0x0800737C: lwc1        $f0, -0x7550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8AB0));
    // 0x08007380: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08007384: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08007388: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800738C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007390: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X73BC) << 16);
    // 0x08007394: addiu       $a0, $a0, 0x73BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X73BC));
    // 0x08007398: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x0800739C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080073A0: jalr        $t9
    // 0x080073A4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080073A4: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    after_4:
L_080073A8:
    // 0x080073A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080073AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080073B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080073B4: jr          $ra
    // 0x080073B8: nop

    TRACE_RETURN()
    return;
    // 0x080073B8: nop

;}
RECOMP_FUNC void func_08003B48_6C3298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003B50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003B54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003B58: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003B5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08003B60: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003B64: bne         $v0, $zero, L_08003BA8
    if (ctx->r2 != 0) {
        // 0x08003B68: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08003BA8;
    }
    // 0x08003B68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003B6C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003B70: jalr        $t9
    // 0x08003B74: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B74: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    after_0:
    // 0x08003B78: beq         $v0, $zero, L_08003C6C
    if (ctx->r2 == 0) {
        // 0x08003B7C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003C6C;
    }
    // 0x08003B7C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003B80: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003B84: jalr        $t9
    // 0x08003B88: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B88: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_1:
    // 0x08003B8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3C7C) << 16);
    // 0x08003B98: jalr        $t9
    // 0x08003B9C: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003B9C: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    after_2:
    // 0x08003BA0: b           L_08003C70
    // 0x08003BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08003C70;
    // 0x08003BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003BA8:
    // 0x08003BA8: bne         $v0, $at, L_08003BEC
    if (ctx->r2 != ctx->r1) {
        // 0x08003BAC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08003BEC;
    }
    // 0x08003BAC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003BB0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003BB4: jalr        $t9
    // 0x08003BB8: lhu         $a0, 0xD4($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003BB8: lhu         $a0, 0xD4($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XD4);
    after_3:
    // 0x08003BBC: beq         $v0, $zero, L_08003C6C
    if (ctx->r2 == 0) {
        // 0x08003BC0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003C6C;
    }
    // 0x08003BC0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003BC4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003BC8: jalr        $t9
    // 0x08003BCC: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003BCC: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_4:
    // 0x08003BD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003BD4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003BD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3C7C) << 16);
    // 0x08003BDC: jalr        $t9
    // 0x08003BE0: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003BE0: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    after_5:
    // 0x08003BE4: b           L_08003C70
    // 0x08003BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08003C70;
    // 0x08003BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003BEC:
    // 0x08003BEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003BF0: beq         $v0, $at, L_08003C24
    if (ctx->r2 == ctx->r1) {
        // 0x08003BF4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08003C24;
    }
    // 0x08003BF4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003BF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003BFC: beq         $v0, $at, L_08003C24
    if (ctx->r2 == ctx->r1) {
        // 0x08003C00: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08003C24;
    }
    // 0x08003C00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003C04: beq         $v0, $at, L_08003C24
    if (ctx->r2 == ctx->r1) {
        // 0x08003C08: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_08003C24;
    }
    // 0x08003C08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003C0C: beq         $v0, $at, L_08003C24
    if (ctx->r2 == ctx->r1) {
        // 0x08003C10: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_08003C24;
    }
    // 0x08003C10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08003C14: beq         $v0, $at, L_08003C24
    if (ctx->r2 == ctx->r1) {
        // 0x08003C18: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_08003C24;
    }
    // 0x08003C18: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08003C1C: bnel        $v0, $at, L_08003C70
    if (ctx->r2 != ctx->r1) {
        // 0x08003C20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003C70;
    }
    goto skip_0;
    // 0x08003C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_08003C24:
    // 0x08003C24: lhu         $a0, 0xD4($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XD4);
    // 0x08003C28: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003C2C: jalr        $t9
    // 0x08003C30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003C30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_6:
    // 0x08003C34: beq         $v0, $zero, L_08003C6C
    if (ctx->r2 == 0) {
        // 0x08003C38: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_08003C6C;
    }
    // 0x08003C38: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08003C3C: lbu         $t6, 0xD0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XD0);
    // 0x08003C40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003C44: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003C48: bne         $t6, $at, L_08003C58
    if (ctx->r14 != ctx->r1) {
        // 0x08003C4C: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_08003C58;
    }
    // 0x08003C4C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003C50: jalr        $t9
    // 0x08003C54: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003C54: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_7:
L_08003C58:
    // 0x08003C58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C5C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C60: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3C7C) << 16);
    // 0x08003C64: jalr        $t9
    // 0x08003C68: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003C68: addiu       $a0, $a0, 0x3C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3C7C));
    after_8:
L_08003C6C:
    // 0x08003C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003C70:
    // 0x08003C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C74: jr          $ra
    // 0x08003C78: nop

    TRACE_RETURN()
    return;
    // 0x08003C78: nop

;}
RECOMP_FUNC void func_08007984_6C70D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007984: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800798C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08007990: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08007994: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x08007998: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x0800799C: bne         $t6, $zero, L_080079B8
    if (ctx->r14 != 0) {
        // 0x080079A0: addiu       $a3, $zero, 0xB4
        ctx->r7 = ADD32(0, 0XB4);
            goto L_080079B8;
    }
    // 0x080079A0: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x080079A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080079A8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080079AC: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x080079B0: jalr        $t9
    // 0x080079B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080079B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
L_080079B8:
    // 0x080079B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080079BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080079C0: jr          $ra
    // 0x080079C4: nop

    TRACE_RETURN()
    return;
    // 0x080079C4: nop

;}
RECOMP_FUNC void func_080073BC_6C6B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080073BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080073C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080073C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080073C8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080073CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080073D0: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x080073D4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080073D8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x080073DC: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x080073E0: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x080073E4: beq         $t0, $zero, L_08007480
    if (ctx->r8 == 0) {
        // 0x080073E8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08007480;
    }
    // 0x080073E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080073EC: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080073F0: jalr        $t9
    // 0x080073F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080073F4: nop

    after_0:
    // 0x080073F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080073FC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08007400: jalr        $t9
    // 0x08007404: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007404: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_1:
    // 0x08007408: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800740C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08007410: jalr        $t9
    // 0x08007414: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007414: addiu       $a0, $zero, 0x1A6
    ctx->r4 = ADD32(0, 0X1A6);
    after_2:
    // 0x08007418: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800741C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08007420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800742C: jalr        $t9
    // 0x08007430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08007434: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007438: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x0800743C: jalr        $t9
    // 0x08007440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08007444: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007448: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800744C: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08007450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007454: jalr        $t9
    // 0x08007458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x0800745C: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x08007460: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007464: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007468: beq         $v0, $zero, L_08007478
    if (ctx->r2 == 0) {
        // 0x0800746C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X7494) << 16);
            goto L_08007478;
    }
    // 0x0800746C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X7494) << 16);
    // 0x08007470: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08007474: sb          $t1, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r9;
L_08007478:
    // 0x08007478: jalr        $t9
    // 0x0800747C: addiu       $a0, $a0, 0x7494
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7494));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800747C: addiu       $a0, $a0, 0x7494
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7494));
    after_6:
L_08007480:
    // 0x08007480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08007484: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08007488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800748C: jr          $ra
    // 0x08007490: nop

    TRACE_RETURN()
    return;
    // 0x08007490: nop

;}
RECOMP_FUNC void func_08001228_6C0978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800122C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001230: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001234: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001238: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x0800123C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001240: beq         $t7, $zero, L_08001258
    if (ctx->r15 == 0) {
        // 0x08001244: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08001258;
    }
    // 0x08001244: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001248: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x0800124C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1268) << 16);
    // 0x08001250: jalr        $t9
    // 0x08001254: addiu       $a0, $a0, 0x1268
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1268));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001254: addiu       $a0, $a0, 0x1268
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1268));
    after_0:
L_08001258:
    // 0x08001258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800125C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001260: jr          $ra
    // 0x08001264: nop

    TRACE_RETURN()
    return;
    // 0x08001264: nop

;}
RECOMP_FUNC void func_08002BF8_6C2348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C04: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002C08: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A00) << 16);
    // 0x08002C0C: ldc1        $f8, -0x7600($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A00));
    // 0x08002C10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002C14: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002C18: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x08002C1C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002C20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08002C24: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002C28: jalr        $t9
    // 0x08002C2C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C2C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    after_0:
    // 0x08002C30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002C34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C3C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002C40: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002C44: bne         $v0, $zero, L_08002C58
    if (ctx->r2 != 0) {
        // 0x08002C48: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002C58;
    }
    // 0x08002C48: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002C4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2C68) << 16);
    // 0x08002C50: jalr        $t9
    // 0x08002C54: addiu       $a0, $a0, 0x2C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2C68));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C54: addiu       $a0, $a0, 0x2C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2C68));
    after_1:
L_08002C58:
    // 0x08002C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002C60: jr          $ra
    // 0x08002C64: nop

    TRACE_RETURN()
    return;
    // 0x08002C64: nop

;}
RECOMP_FUNC void func_08005CA8_6C53F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005CB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005CB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005CB8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005CBC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08005CC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005CC4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08005CC8: bne         $v0, $zero, L_08005CE4
    if (ctx->r2 != 0) {
        // 0x08005CCC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005CE4;
    }
    // 0x08005CCC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005CD0: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08005CD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5988) << 16);
    // 0x08005CD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005CDC: jalr        $t9
    // 0x08005CE0: addiu       $a0, $a0, 0x5988
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5988));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005CE0: addiu       $a0, $a0, 0x5988
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5988));
    after_0:
L_08005CE4:
    // 0x08005CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005CEC: jr          $ra
    // 0x08005CF0: nop

    TRACE_RETURN()
    return;
    // 0x08005CF0: nop

;}
RECOMP_FUNC void func_08001D0C_6C145C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001D10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001D18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001D1C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001D20: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x08001D24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001D28: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08001D2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001D30: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08001D34: jalr        $t9
    // 0x08001D38: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D38: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    after_0:
    // 0x08001D3C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001D40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001D44: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001D48: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08001D4C: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x08001D50: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D54: addiu       $t8, $zero, 0x1B9
    ctx->r24 = ADD32(0, 0X1B9);
    // 0x08001D58: ori         $t0, $t0, 0x6E1
    ctx->r8 = ctx->r8 | 0X6E1;
    // 0x08001D5C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001D60: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
    // 0x08001D64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001D68: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08001D6C: jalr        $t9
    // 0x08001D70: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D70: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    after_1:
    // 0x08001D74: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89D4) << 16);
    // 0x08001D78: lwc1        $f0, -0x762C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89D4));
    // 0x08001D7C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001D80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1DB0) << 16);
    // 0x08001D8C: addiu       $a0, $a0, 0x1DB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1DB0));
    // 0x08001D90: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08001D94: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08001D98: jalr        $t9
    // 0x08001D9C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D9C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    after_2:
    // 0x08001DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001DA8: jr          $ra
    // 0x08001DAC: nop

    TRACE_RETURN()
    return;
    // 0x08001DAC: nop

;}
RECOMP_FUNC void func_080027CC_6C1F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080027D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080027D4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080027D8: addiu       $t6, $zero, 0x1BB
    ctx->r14 = ADD32(0, 0X1BB);
    // 0x080027DC: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x080027E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080027E4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080027E8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080027EC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080027F0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080027F4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080027F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080027FC: jalr        $t9
    // 0x08002800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002804: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89E0) << 16);
    // 0x08002808: lwc1        $f0, -0x7620($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89E0));
    // 0x0800280C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08002810: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08002814: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002818: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x0800281C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002820: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2848) << 16);
    // 0x08002824: addiu       $a0, $a0, 0x2848
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2848));
    // 0x08002828: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x0800282C: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002830: jalr        $t9
    // 0x08002834: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002834: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x08002838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800283C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002840: jr          $ra
    // 0x08002844: nop

    TRACE_RETURN()
    return;
    // 0x08002844: nop

;}
RECOMP_FUNC void func_0800612C_6C587C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800612C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08006130: jr          $ra
    // 0x08006134: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08006134: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001B60_6C12B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B68: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001B6C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001B70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001B74: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08001B78: bne         $t7, $zero, L_08001BAC
    if (ctx->r15 != 0) {
        // 0x08001B7C: addiu       $a0, $zero, 0x272
        ctx->r4 = ADD32(0, 0X272);
            goto L_08001BAC;
    }
    // 0x08001B7C: addiu       $a0, $zero, 0x272
    ctx->r4 = ADD32(0, 0X272);
    // 0x08001B80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B84: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001B88: lui         $a3, 0x461C
    ctx->r7 = S32(0X461C << 16);
    // 0x08001B8C: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x08001B90: jalr        $t9
    // 0x08001B94: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B94: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_0:
    // 0x08001B98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1BBC) << 16);
    // 0x08001BA4: jalr        $t9
    // 0x08001BA8: addiu       $a0, $a0, 0x1BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1BBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001BA8: addiu       $a0, $a0, 0x1BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1BBC));
    after_1:
L_08001BAC:
    // 0x08001BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BB4: jr          $ra
    // 0x08001BB8: nop

    TRACE_RETURN()
    return;
    // 0x08001BB8: nop

;}
RECOMP_FUNC void func_08001DEC_6C153C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001DF0: jr          $ra
    // 0x08001DF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001DF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800211C_6C186C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800211C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002124: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002128: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800212C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002130: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002134: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002138: jalr        $t9
    // 0x0800213C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800213C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_0:
    // 0x08002140: beq         $v0, $zero, L_080021B8
    if (ctx->r2 == 0) {
        // 0x08002144: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_080021B8;
    }
    // 0x08002144: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08002148: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800214C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002150: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08002154: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002158: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002160: jalr        $t9
    // 0x08002164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08002168: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800216C: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08002170: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x08002174: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08002178: jalr        $t9
    // 0x0800217C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800217C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x08002180: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002184: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002188: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800218C: sb          $t7, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r15;
    // 0x08002190: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08002194: jalr        $t9
    // 0x08002198: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002198: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    after_3:
    // 0x0800219C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080021A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2488) << 16);
    // 0x080021A8: jalr        $t9
    // 0x080021AC: addiu       $a0, $a0, 0x2488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2488));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080021AC: addiu       $a0, $a0, 0x2488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2488));
    after_4:
    // 0x080021B0: b           L_0800220C
    // 0x080021B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800220C;
    // 0x080021B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080021B8:
    // 0x080021B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080021BC: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x080021C0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080021C4: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080021C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021CC: jalr        $t9
    // 0x080021D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080021D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x080021D4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080021D8: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x080021DC: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    // 0x080021E0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x080021E4: jalr        $t9
    // 0x080021E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080021E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_6:
    // 0x080021EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080021F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X221C) << 16);
    // 0x080021F8: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x080021FC: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08002200: jalr        $t9
    // 0x08002204: addiu       $a0, $a0, 0x221C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X221C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002204: addiu       $a0, $a0, 0x221C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X221C));
    after_7:
    // 0x08002208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800220C:
    // 0x0800220C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002214: jr          $ra
    // 0x08002218: nop

    TRACE_RETURN()
    return;
    // 0x08002218: nop

;}
RECOMP_FUNC void func_080070E4_6C6834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080070E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080070E8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080070EC: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080070F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080070F4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080070F8: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x080070FC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08007100: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08007104: jalr        $s0
    // 0x08007108: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08007108: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x0800710C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08007110: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08007114: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007118: lhu         $t6, 0x8A($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8A);
    // 0x0800711C: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x08007120: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08007124: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x08007128: mfhi        $t7
    ctx->r15 = hi;
    // 0x0800712C: bnel        $t7, $zero, L_0800728C
    if (ctx->r15 != 0) {
        // 0x08007130: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_0800728C;
    }
    goto skip_0;
    // 0x08007130: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x08007134: jalr        $t9
    // 0x08007138: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007138: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    after_1:
    // 0x0800713C: jalr        $s0
    // 0x08007140: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08007140: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x08007144: slti        $at, $v0, 0x50
    ctx->r1 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x08007148: beq         $at, $zero, L_080071F0
    if (ctx->r1 == 0) {
        // 0x0800714C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080071F0;
    }
    // 0x0800714C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08007150: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08007154: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08007158: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800715C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007160: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08007164: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007168: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800716C: addiu       $a1, $a1, 0x4314
    ctx->r5 = ADD32(ctx->r5, 0X4314);
    // 0x08007170: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08007174: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08007178: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800717C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08007180: jalr        $t9
    // 0x08007184: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007184: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x08007188: beq         $v0, $zero, L_08007288
    if (ctx->r2 == 0) {
        // 0x0800718C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08007288;
    }
    // 0x0800718C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08007190: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08007194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08007198: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800719C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080071A0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x080071A4: jalr        $t9
    // 0x080071A8: swc1        $f6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080071A8: swc1        $f6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f6.u32l;
    after_4:
    // 0x080071AC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A90) << 16);
    // 0x080071B0: ldc1        $f10, -0x7570($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A90));
    // 0x080071B4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080071B8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080071BC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x080071C0: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080071C4: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x080071C8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080071CC: jalr        $t9
    // 0x080071D0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080071D0: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x080071D4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A98) << 16);
    // 0x080071D8: ldc1        $f6, -0x7568($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A98));
    // 0x080071DC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x080071E0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x080071E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080071E8: b           L_08007288
    // 0x080071EC: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
        goto L_08007288;
    // 0x080071EC: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
L_080071F0:
    // 0x080071F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080071F4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080071F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080071FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007200: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08007204: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007208: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800720C: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x08007210: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08007214: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08007218: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0800721C: jalr        $t9
    // 0x08007220: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08007220: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x08007224: beq         $v0, $zero, L_08007288
    if (ctx->r2 == 0) {
        // 0x08007228: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08007288;
    }
    // 0x08007228: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800722C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08007230: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08007234: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08007238: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800723C: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x08007240: jalr        $t9
    // 0x08007244: swc1        $f18, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08007244: swc1        $f18, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f18.u32l;
    after_7:
    // 0x08007248: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8AA0) << 16);
    // 0x0800724C: ldc1        $f6, -0x7560($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8AA0));
    // 0x08007250: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08007254: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08007258: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x0800725C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08007260: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x08007264: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08007268: jalr        $t9
    // 0x0800726C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800726C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_8:
    // 0x08007270: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8AA8) << 16);
    // 0x08007274: ldc1        $f18, -0x7558($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8AA8));
    // 0x08007278: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x0800727C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x08007280: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08007284: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
L_08007288:
    // 0x08007288: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_0800728C:
    // 0x0800728C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007290: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007294: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08007298: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X72C4) << 16);
    // 0x0800729C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x080072A0: bne         $v0, $zero, L_080072B0
    if (ctx->r2 != 0) {
        // 0x080072A4: sh          $t8, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r24;
            goto L_080072B0;
    }
    // 0x080072A4: sh          $t8, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r24;
    // 0x080072A8: jalr        $t9
    // 0x080072AC: addiu       $a0, $a0, 0x72C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X72C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080072AC: addiu       $a0, $a0, 0x72C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X72C4));
    after_9:
L_080072B0:
    // 0x080072B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080072B4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080072B8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080072BC: jr          $ra
    // 0x080072C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x080072C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08002494_6C1BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002494: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002498: jr          $ra
    // 0x0800249C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800249C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002C68_6C23B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C6C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C78: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002C7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002C80: jalr        $t9
    // 0x08002C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x08002C88: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002C8C: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08002C90: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C94: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002C98: lw          $t8, 0xA0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA0);
    // 0x08002C9C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002CA0: beql        $t6, $t8, L_08002CE0
    if (ctx->r14 == ctx->r24) {
        // 0x08002CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002CE0;
    }
    goto skip_0;
    // 0x08002CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002CA8: jalr        $t9
    // 0x08002CAC: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CAC: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x08002CB0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x08002CB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08002CB8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002CBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CC0: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x08002CC4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08002CC8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2CEC) << 16);
    // 0x08002CD0: addiu       $a0, $a0, 0x2CEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2CEC));
    // 0x08002CD4: jalr        $t9
    // 0x08002CD8: sh          $t1, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002CD8: sh          $t1, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = ctx->r9;
    after_2:
    // 0x08002CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002CE0:
    // 0x08002CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002CE4: jr          $ra
    // 0x08002CE8: nop

    TRACE_RETURN()
    return;
    // 0x08002CE8: nop

;}
RECOMP_FUNC void func_08004550_6C3CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800455C: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004560: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004564: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004568: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x0800456C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08004570: bgtz        $t8, L_08004584
    if (SIGNED(ctx->r24) > 0) {
        // 0x08004574: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08004584;
    }
    // 0x08004574: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08004578: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4594) << 16);
    // 0x0800457C: jalr        $t9
    // 0x08004580: addiu       $a0, $a0, 0x4594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4594));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004580: addiu       $a0, $a0, 0x4594
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4594));
    after_0:
L_08004584:
    // 0x08004584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800458C: jr          $ra
    // 0x08004590: nop

    TRACE_RETURN()
    return;
    // 0x08004590: nop

;}
RECOMP_FUNC void func_08004AA0_6C41F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AA0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004AA4: jr          $ra
    // 0x08004AA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004AA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080001F0_6BF940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080001F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080001F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080001FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000200: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000204: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000208: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x0800020C: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08000210: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000218: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800021C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000220: jalr        $t9
    // 0x08000224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000228: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89A0) << 16);
    // 0x0800022C: lwc1        $f0, -0x7660($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89A0));
    // 0x08000230: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000234: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08000238: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800023C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000244: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000248: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x0800024C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000250: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000254: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000258: jalr        $t9
    // 0x0800025C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800025C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08000260: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000264: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000268: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X28C) << 16);
    // 0x0800026C: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08000270: jalr        $t9
    // 0x08000274: addiu       $a0, $a0, 0x28C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X28C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000274: addiu       $a0, $a0, 0x28C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X28C));
    after_2:
    // 0x08000278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800027C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000284: jr          $ra
    // 0x08000288: nop

    TRACE_RETURN()
    return;
    // 0x08000288: nop

;}
