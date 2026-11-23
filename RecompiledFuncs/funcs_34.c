#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E2AA0_59E9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2AA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2AA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E2AAC: jal         0x801DD830
    // 0x801E2AB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801E2AB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x801E2AB4: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x801E2AB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2ABC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E2AC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E2AC4: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E2AC8: addiu       $a2, $zero, 0x196
    ctx->r6 = ADD32(0, 0X196);
    // 0x801E2ACC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x801E2AD0: jal         0x801DB494
    // 0x801E2AD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DB494_5973A4(rdram, ctx);
        goto after_1;
    // 0x801E2AD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E2AD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E2ADC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2AE0: sw          $v0, 0x88($t6)
    MEM_W(0X88, ctx->r14) = ctx->r2;
    // 0x801E2AE4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2AE8: sh          $zero, 0x34($t7)
    MEM_H(0X34, ctx->r15) = 0;
    // 0x801E2AEC: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2AF0: lw          $t8, 0x88($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X88);
    // 0x801E2AF4: beql        $t8, $zero, L_801E2B20
    if (ctx->r24 == 0) {
        // 0x801E2AF8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801E2B20;
    }
    goto skip_0;
    // 0x801E2AF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x801E2AFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2B00: nop

    // 0x801E2B04: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B08: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B0C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B10: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B14: b           L_801E2B44
    // 0x801E2B18: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
        goto L_801E2B44;
    // 0x801E2B18: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801E2B20:
    // 0x801E2B20: nop

    // 0x801E2B24: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B28: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B2C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B30: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B34: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E2B38: sb          $zero, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = 0;
    // 0x801E2B3C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2B40: sh          $zero, 0x30($t9)
    MEM_H(0X30, ctx->r25) = 0;
L_801E2B44:
    // 0x801E2B44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2B4C: jr          $ra
    // 0x801E2B50: nop

    TRACE_RETURN()
    return;
    // 0x801E2B50: nop

;}
RECOMP_FUNC void func_801D7B74_593A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7B74: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801D7B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7B7C: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x801D7B80: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801D7B84: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801D7B88: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x801D7B8C: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x801D7B90: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x801D7B94: addiu       $t0, $a1, 0x60
    ctx->r8 = ADD32(ctx->r5, 0X60);
L_801D7B98:
    // 0x801D7B98: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D7B9C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D7BA0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D7BA4: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801D7BA8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801D7BAC: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801D7BB0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801D7BB4: bne         $t7, $t0, L_801D7B98
    if (ctx->r15 != ctx->r8) {
        // 0x801D7BB8: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801D7B98;
    }
    // 0x801D7BB8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801D7BBC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D7BC0: lhu         $t1, -0x2E12($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E12);
    // 0x801D7BC4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801D7BC8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x801D7BCC: bne         $t1, $zero, L_801D7C10
    if (ctx->r9 != 0) {
        // 0x801D7BD0: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_801D7C10;
    }
    // 0x801D7BD0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801D7BD4: lhu         $t2, 0x96($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X96);
    // 0x801D7BD8: lhu         $a3, 0x92($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X92);
    // 0x801D7BDC: jal         0x801D7C20
    // 0x801D7BE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801D7C20_593B30(rdram, ctx);
        goto after_0;
    // 0x801D7BE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x801D7BE4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D7BE8: beql        $v0, $at, L_801D7C14
    if (ctx->r2 == ctx->r1) {
        // 0x801D7BEC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D7C14;
    }
    goto skip_0;
    // 0x801D7BEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D7BF0: beq         $v0, $zero, L_801D7C00
    if (ctx->r2 == 0) {
        // 0x801D7BF4: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_801D7C00;
    }
    // 0x801D7BF4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801D7BF8: jal         0x801D72D4
    // 0x801D7BFC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_801D72D4_5931E4(rdram, ctx);
        goto after_1;
    // 0x801D7BFC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
L_801D7C00:
    // 0x801D7C00: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801D7C04: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801D7C08: jal         0x801D80F4
    // 0x801D7C0C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_801D80F4_594004(rdram, ctx);
        goto after_2;
    // 0x801D7C0C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
L_801D7C10:
    // 0x801D7C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7C14:
    // 0x801D7C14: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x801D7C18: jr          $ra
    // 0x801D7C1C: nop

    TRACE_RETURN()
    return;
    // 0x801D7C1C: nop

;}
RECOMP_FUNC void func_801CBC40_587B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC40: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801CBC44: lw          $a3, -0x39FC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X39FC);
    // 0x801CBC48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBC4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBC50: beql        $a3, $zero, L_801CBCD8
    if (ctx->r7 == 0) {
        // 0x801CBC54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CBCD8;
    }
    goto skip_0;
    // 0x801CBC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CBC58: lhu         $a0, 0x28($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X28);
    // 0x801CBC5C: jal         0x800141C4
    // 0x801CBC60: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801CBC60: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CBC64: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBC68: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CBC6C: lui         $t7, 0xC
    ctx->r15 = S32(0XC << 16);
    // 0x801CBC70: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x801CBC74: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CBC78: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801CBC7C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801CBC80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CBC84: lhu         $t7, 0x2D90($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2D90);
    // 0x801CBC88: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CBC8C: sh          $t7, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r15;
    // 0x801CBC90: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801CBC94: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x801CBC98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801CBC9C: lhu         $t0, 0x4020($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X4020);
    // 0x801CBCA0: sh          $t0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r8;
    // 0x801CBCA4: lbu         $t1, 0x90($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X90);
    // 0x801CBCA8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801CBCAC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801CBCB0: lw          $t3, -0x2DE0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2DE0);
    // 0x801CBCB4: sw          $t3, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r11;
    // 0x801CBCB8: jal         0x801DC9C8
    // 0x801CBCBC: lbu         $a1, 0x60($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X60);
    func_801DC9C8_5988D8(rdram, ctx);
        goto after_1;
    // 0x801CBCBC: lbu         $a1, 0x60($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X60);
    after_1:
    // 0x801CBCC0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CBCC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBCC8: addiu       $a2, $a2, -0x2DA0
    ctx->r6 = ADD32(ctx->r6, -0X2DA0);
    // 0x801CBCCC: jal         0x801DCA64
    // 0x801CBCD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DCA64_598974(rdram, ctx);
        goto after_2;
    // 0x801CBCD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801CBCD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBCD8:
    // 0x801CBCD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBCDC: jr          $ra
    // 0x801CBCE0: nop

    TRACE_RETURN()
    return;
    // 0x801CBCE0: nop

;}
RECOMP_FUNC void func_801DDBB0_599AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDBB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DDBBC: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801DDBC0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801DDBC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801DDBC8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801DDBCC: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801DDBD0: lw          $t9, -0x39E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39E4);
    // 0x801DDBD4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DDBD8: sb          $t8, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r24;
    // 0x801DDBDC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DDBE0: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DDBE4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DDBE8: jalr        $t9
    // 0x801DDBEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DDBEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801DDBF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DDBF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DDBF8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDBFC: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DDC00: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801DDC04: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DDC08: nop

    // 0x801DDC0C: bc1fl       L_801DDC2C
    if (!c1cs) {
        // 0x801DDC10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DDC2C;
    }
    goto skip_0;
    // 0x801DDC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DDC14: jal         0x801CC454
    // 0x801DDC18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801CC454_588364(rdram, ctx);
        goto after_1;
    // 0x801DDC18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801DDC1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DDC20: jal         0x801DACDC
    // 0x801DDC24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DDC24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801DDC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DDC2C:
    // 0x801DDC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDC30: jr          $ra
    // 0x801DDC34: nop

    TRACE_RETURN()
    return;
    // 0x801DDC34: nop

;}
RECOMP_FUNC void func_801F7F30_5B3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7F34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F7F38: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801F7F3C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801F7F40: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F7F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7F48: ori         $at, $at, 0xB022
    ctx->r1 = ctx->r1 | 0XB022;
    // 0x801F7F4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F7F50: jal         0x80013C70
    // 0x801F7F54: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80013C70_14870(rdram, ctx);
        goto after_0;
    // 0x801F7F54: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801F7F58: beq         $v0, $zero, L_801F7F68
    if (ctx->r2 == 0) {
        // 0x801F7F5C: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801F7F68;
    }
    // 0x801F7F5C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7F60: jal         0x8003521C
    // 0x801F7F64: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F7F64: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    after_1:
L_801F7F68:
    // 0x801F7F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7F70: jr          $ra
    // 0x801F7F74: nop

    TRACE_RETURN()
    return;
    // 0x801F7F74: nop

;}
RECOMP_FUNC void func_801D2E10_58ED20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2E10: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801D2E14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D2E18: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x801D2E1C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801D2E20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D2E24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D2E28: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x801D2E2C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x801D2E30: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801D2E34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D2E38: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801D2E3C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801D2E40: lwc1        $f6, 0x10($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X10);
    // 0x801D2E44: jal         0x801D7818
    // 0x801D2E48: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    func_801D7818_593728(rdram, ctx);
        goto after_0;
    // 0x801D2E48: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    after_0:
    // 0x801D2E4C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2E50: addiu       $v1, $v1, -0x2E28
    ctx->r3 = ADD32(ctx->r3, -0X2E28);
    // 0x801D2E54: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x801D2E58: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x801D2E5C: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801D2E60: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801D2E64: addiu       $t9, $t9, 0x650C
    ctx->r25 = ADD32(ctx->r25, 0X650C);
    // 0x801D2E68: bne         $t9, $t0, L_801D2E80
    if (ctx->r25 != ctx->r8) {
        // 0x801D2E6C: sh          $t8, 0x6A($s0)
        MEM_H(0X6A, ctx->r16) = ctx->r24;
            goto L_801D2E80;
    }
    // 0x801D2E6C: sh          $t8, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r24;
    // 0x801D2E70: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801D2E74: addu        $t2, $t8, $at
    ctx->r10 = ADD32(ctx->r24, ctx->r1);
    // 0x801D2E78: b           L_801D2EBC
    // 0x801D2E7C: sh          $t2, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r10;
        goto L_801D2EBC;
    // 0x801D2E7C: sh          $t2, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r10;
L_801D2E80:
    // 0x801D2E80: lhu         $t3, 0xB6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D2E84: lhu         $t4, 0xB2($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0XB2);
    // 0x801D2E88: bne         $t3, $zero, L_801D2EBC
    if (ctx->r11 != 0) {
        // 0x801D2E8C: nop
    
            goto L_801D2EBC;
    }
    // 0x801D2E8C: nop

    // 0x801D2E90: bne         $t4, $zero, L_801D2EBC
    if (ctx->r12 != 0) {
        // 0x801D2E94: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801D2EBC;
    }
    // 0x801D2E94: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2E98: addiu       $v0, $v0, -0x2E34
    ctx->r2 = ADD32(ctx->r2, -0X2E34);
    // 0x801D2E9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2EA0: lwc1        $f0, -0x2E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x801D2EA4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D2EA8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801D2EAC: nop

    // 0x801D2EB0: bc1f        L_801D2EBC
    if (!c1cs) {
        // 0x801D2EB4: nop
    
            goto L_801D2EBC;
    }
    // 0x801D2EB4: nop

    // 0x801D2EB8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_801D2EBC:
    // 0x801D2EBC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801D2EC0: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x801D2EC4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x801D2EC8: lhu         $a0, 0x94($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X94);
    // 0x801D2ECC: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x801D2ED0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801D2ED4: jal         0x80003F30
    // 0x801D2ED8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x801D2ED8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x801D2EDC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D2EE0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D2EE4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D2EE8: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
    // 0x801D2EEC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D2EF0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801D2EF4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D2EF8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801D2EFC: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x801D2F00: jal         0x8001D718
    // 0x801D2F04: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_2;
    // 0x801D2F04: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_2:
    // 0x801D2F08: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D2F0C: jal         0x80003A94
    // 0x801D2F10: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D2F10: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x801D2F14: lhu         $v1, 0x6A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D2F18: lhu         $t1, 0xB2($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XB2);
    // 0x801D2F1C: lhu         $t9, 0xB2($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XB2);
    // 0x801D2F20: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x801D2F24: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x801D2F28: beq         $t8, $zero, L_801D2F3C
    if (ctx->r24 == 0) {
        // 0x801D2F2C: subu        $t2, $v1, $t1
        ctx->r10 = SUB32(ctx->r3, ctx->r9);
            goto L_801D2F3C;
    }
    // 0x801D2F2C: subu        $t2, $v1, $t1
    ctx->r10 = SUB32(ctx->r3, ctx->r9);
    // 0x801D2F30: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x801D2F34: b           L_801D2F40
    // 0x801D2F38: sh          $t0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r8;
        goto L_801D2F40;
    // 0x801D2F38: sh          $t0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r8;
L_801D2F3C:
    // 0x801D2F3C: sh          $t2, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r10;
L_801D2F40:
    // 0x801D2F40: lhu         $t3, 0x6A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D2F44: lhu         $t4, 0xB6($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0XB6);
    // 0x801D2F48: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x801D2F4C: sh          $t5, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r13;
    // 0x801D2F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2F54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D2F58: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x801D2F5C: jr          $ra
    // 0x801D2F60: andi        $v0, $t5, 0xFFFF
    ctx->r2 = ctx->r13 & 0XFFFF;
    TRACE_RETURN()
    return;
    // 0x801D2F60: andi        $v0, $t5, 0xFFFF
    ctx->r2 = ctx->r13 & 0XFFFF;
;}
RECOMP_FUNC void func_801E307C_59EF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E307C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3080: nop

    // 0x801E3084: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E3088: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E308C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E3090: jr          $ra
    // 0x801E3094: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3094: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801E75D4_5A34E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E75D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E75D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E75DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E75E0: jal         0x801E77A4
    // 0x801E75E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801E77A4_5A36B4(rdram, ctx);
        goto after_0;
    // 0x801E75E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801E75E8: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E75EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E75F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E75F4: beql        $v0, $zero, L_801E7620
    if (ctx->r2 == 0) {
        // 0x801E75F8: lbu         $t6, 0x30($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X30);
            goto L_801E7620;
    }
    goto skip_0;
    // 0x801E75F8: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    skip_0:
    // 0x801E75FC: beq         $v0, $at, L_801E7670
    if (ctx->r2 == ctx->r1) {
        // 0x801E7600: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E7670;
    }
    // 0x801E7600: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E7604: beq         $v0, $at, L_801E76D4
    if (ctx->r2 == ctx->r1) {
        // 0x801E7608: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E76D4;
    }
    // 0x801E7608: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E760C: beql        $v0, $at, L_801E7754
    if (ctx->r2 == ctx->r1) {
        // 0x801E7610: lbu         $t7, 0x30($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X30);
            goto L_801E7754;
    }
    goto skip_1;
    // 0x801E7610: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    skip_1:
    // 0x801E7614: b           L_801E7794
    // 0x801E7618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E7794;
    // 0x801E7618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E761C: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
L_801E7620:
    // 0x801E7620: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7624: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x801E7628: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801E762C: sb          $t7, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r15;
    // 0x801E7630: jal         0x801DACDC
    // 0x801E7634: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E7634: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    after_1:
    // 0x801E7638: jal         0x801DCCF0
    // 0x801E763C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    func_801DCCF0_598C00(rdram, ctx);
        goto after_2;
    // 0x801E763C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_2:
    // 0x801E7640: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7648: jal         0x801E307C
    // 0x801E764C: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_3;
    // 0x801E764C: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x801E7650: jal         0x801E8160
    // 0x801E7654: nop

    func_801E8160_5A4070(rdram, ctx);
        goto after_4;
    // 0x801E7654: nop

    after_4:
    // 0x801E7658: jal         0x80038BC8
    // 0x801E765C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801E765C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_5:
    // 0x801E7660: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7664: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7668: b           L_801E7790
    // 0x801E766C: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
        goto L_801E7790;
    // 0x801E766C: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
L_801E7670:
    // 0x801E7670: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7674: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E7678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E767C: sh          $zero, 0x30($t0)
    MEM_H(0X30, ctx->r8) = 0;
    // 0x801E7680: jal         0x801E307C
    // 0x801E7684: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_6;
    // 0x801E7684: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    after_6:
    // 0x801E7688: lbu         $t1, 0x30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X30);
    // 0x801E768C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7690: addiu       $a1, $zero, 0x8E
    ctx->r5 = ADD32(0, 0X8E);
    // 0x801E7694: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x801E7698: jal         0x801DACDC
    // 0x801E769C: sb          $t2, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r10;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801E769C: sb          $t2, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r10;
    after_7:
    // 0x801E76A0: jal         0x801E8160
    // 0x801E76A4: nop

    func_801E8160_5A4070(rdram, ctx);
        goto after_8;
    // 0x801E76A4: nop

    after_8:
    // 0x801E76A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E76AC: jal         0x801E8964
    // 0x801E76B0: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801E8964_5A4874(rdram, ctx);
        goto after_9;
    // 0x801E76B0: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_9:
    // 0x801E76B4: jal         0x80038BC8
    // 0x801E76B8: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    func_80038BC8_397C8(rdram, ctx);
        goto after_10;
    // 0x801E76B8: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    after_10:
    // 0x801E76BC: jal         0x80038BC8
    // 0x801E76C0: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x801E76C0: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    after_11:
    // 0x801E76C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E76C8: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E76CC: b           L_801E7790
    // 0x801E76D0: swc1        $f10, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f10.u32l;
        goto L_801E7790;
    // 0x801E76D0: swc1        $f10, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f10.u32l;
L_801E76D4:
    // 0x801E76D4: jal         0x801E3278
    // 0x801E76D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3278_59F188(rdram, ctx);
        goto after_12;
    // 0x801E76D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801E76DC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x801E76E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E76E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E76E8: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801E76EC: swc1        $f16, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f16.u32l;
    // 0x801E76F0: lwc1        $f18, -0x4A30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4A30);
    // 0x801E76F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E76F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E76FC: swc1        $f18, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f18.u32l;
    // 0x801E7700: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7704: swc1        $f4, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f4.u32l;
    // 0x801E7708: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x801E770C: sh          $zero, 0x30($t5)
    MEM_H(0X30, ctx->r13) = 0;
    // 0x801E7710: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7714: jal         0x801DD6E0
    // 0x801E7718: sb          $zero, 0x2E($t6)
    MEM_B(0X2E, ctx->r14) = 0;
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_13;
    // 0x801E7718: sb          $zero, 0x2E($t6)
    MEM_B(0X2E, ctx->r14) = 0;
    after_13:
    // 0x801E771C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7720: jal         0x801DACDC
    // 0x801E7724: addiu       $a1, $zero, 0x9B
    ctx->r5 = ADD32(0, 0X9B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_14;
    // 0x801E7724: addiu       $a1, $zero, 0x9B
    ctx->r5 = ADD32(0, 0X9B);
    after_14:
    // 0x801E7728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E772C: jal         0x801E8964
    // 0x801E7730: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_801E8964_5A4874(rdram, ctx);
        goto after_15;
    // 0x801E7730: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_15:
    // 0x801E7734: jal         0x80038BC8
    // 0x801E7738: addiu       $a0, $zero, 0x14F
    ctx->r4 = ADD32(0, 0X14F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_16;
    // 0x801E7738: addiu       $a0, $zero, 0x14F
    ctx->r4 = ADD32(0, 0X14F);
    after_16:
    // 0x801E773C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7740: jal         0x801DD6E0
    // 0x801E7744: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_17;
    // 0x801E7744: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_17:
    // 0x801E7748: b           L_801E7794
    // 0x801E774C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E7794;
    // 0x801E774C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7750: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
L_801E7754:
    // 0x801E7754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7758: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x801E775C: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801E7760: jal         0x801DACDC
    // 0x801E7764: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_18;
    // 0x801E7764: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    after_18:
    // 0x801E7768: jal         0x801E8160
    // 0x801E776C: nop

    func_801E8160_5A4070(rdram, ctx);
        goto after_19;
    // 0x801E776C: nop

    after_19:
    // 0x801E7770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7774: jal         0x801E8964
    // 0x801E7778: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801E8964_5A4874(rdram, ctx);
        goto after_20;
    // 0x801E7778: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_20:
    // 0x801E777C: jal         0x80038BC8
    // 0x801E7780: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    func_80038BC8_397C8(rdram, ctx);
        goto after_21;
    // 0x801E7780: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    after_21:
    // 0x801E7784: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7788: nop

    // 0x801E778C: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
L_801E7790:
    // 0x801E7790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7794:
    // 0x801E7794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E779C: jr          $ra
    // 0x801E77A0: nop

    TRACE_RETURN()
    return;
    // 0x801E77A0: nop

;}
RECOMP_FUNC void func_801F27AC_5AE6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F27AC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801F27B0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801F27B4: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801F27B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801F27BC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801F27C0: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x801F27C4: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x801F27C8: lw          $v1, 0x5C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X5C);
    // 0x801F27CC: lbu         $a1, 0x9F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X9F);
    // 0x801F27D0: jal         0x801E8C44
    // 0x801F27D4: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F27D4: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    after_0:
    // 0x801F27D8: bne         $v0, $zero, L_801F2B5C
    if (ctx->r2 != 0) {
        // 0x801F27DC: lw          $v1, 0x94($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X94);
            goto L_801F2B5C;
    }
    // 0x801F27DC: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x801F27E0: lbu         $t7, 0x58($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X58);
    // 0x801F27E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F27E8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801F27EC: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801F27F0: addiu       $t8, $t7, -0x28
    ctx->r24 = ADD32(ctx->r15, -0X28);
    // 0x801F27F4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801F27F8: addiu       $s0, $s0, -0x3540
    ctx->r16 = ADD32(ctx->r16, -0X3540);
    // 0x801F27FC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801F2800: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F2804: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F2808: lwc1        $f8, 0x54($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X54);
    // 0x801F280C: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F2810: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F2814: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x801F2818: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801F281C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F2820: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F2824: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F2828: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801F282C: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801F2830: add.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x801F2834: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801F2838: nop

    // 0x801F283C: bc1tl       L_801F2B60
    if (c1cs) {
        // 0x801F2840: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801F2B60;
    }
    goto skip_0;
    // 0x801F2840: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x801F2844: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F2848: nop

    // 0x801F284C: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x801F2850: sub.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801F2854: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801F2858: nop

    // 0x801F285C: bc1tl       L_801F2B60
    if (c1cs) {
        // 0x801F2860: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801F2B60;
    }
    goto skip_1;
    // 0x801F2860: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x801F2864: sh          $zero, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = 0;
    // 0x801F2868: sh          $zero, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = 0;
    // 0x801F286C: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
    // 0x801F2870: lwc1        $f6, 0xB8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XB8);
    // 0x801F2874: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x801F2878: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x801F287C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x801F2880: lwc1        $f8, 0xBC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XBC);
    // 0x801F2884: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F2888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F288C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x801F2890: lwc1        $f16, 0xC0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC0);
    // 0x801F2894: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x801F2898: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F289C: jal         0x8001DB04
    // 0x801F28A0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x801F28A0: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801F28A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F28A8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801F28AC: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801F28B0: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801F28B4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F28B8: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F28BC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F28C0: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F28C4: lhu         $t9, 0x78($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X78);
    // 0x801F28C8: lhu         $t0, 0x7A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7A);
    // 0x801F28CC: lhu         $t1, 0x7C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7C);
    // 0x801F28D0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801F28D4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F28D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801F28DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801F28E0: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F28E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801F28E8: lui         $a2, 0x900
    ctx->r6 = S32(0X900 << 16);
    // 0x801F28EC: addiu       $a2, $a2, 0x2BD0
    ctx->r6 = ADD32(ctx->r6, 0X2BD0);
    // 0x801F28F0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F28F4: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801F28F8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F28FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F2900: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x801F2904: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F2908: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x801F290C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801F2910: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801F2914: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801F2918: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801F291C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F2920: addiu       $a1, $a1, 0x2B70
    ctx->r5 = ADD32(ctx->r5, 0X2B70);
    // 0x801F2924: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x801F2928: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F292C: jal         0x800358E8
    // 0x801F2930: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_2;
    // 0x801F2930: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801F2934: beq         $v0, $zero, L_801F2B5C
    if (ctx->r2 == 0) {
        // 0x801F2938: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F2B5C;
    }
    // 0x801F2938: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F293C: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x801F2940: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x801F2944: lbu         $a2, 0x9F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X9F);
    // 0x801F2948: beql        $s0, $zero, L_801F2B60
    if (ctx->r16 == 0) {
        // 0x801F294C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801F2B60;
    }
    goto skip_2;
    // 0x801F294C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_2:
    // 0x801F2950: jal         0x801EE4AC
    // 0x801F2954: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_3;
    // 0x801F2954: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    after_3:
    // 0x801F2958: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x801F295C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F2960: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801F2964: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801F2968: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801F296C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801F2970: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x801F2974: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801F2978: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F297C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801F2980: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801F2984: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F2988: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801F298C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F2990: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F2994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F2998: jal         0x801DC554
    // 0x801F299C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801DC554_598464(rdram, ctx);
        goto after_4;
    // 0x801F299C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x801F29A0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801F29A4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F29A8: addiu       $t8, $zero, 0x152
    ctx->r24 = ADD32(0, 0X152);
    // 0x801F29AC: or          $t7, $a1, $at
    ctx->r15 = ctx->r5 | ctx->r1;
    // 0x801F29B0: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x801F29B4: sh          $t8, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r24;
    // 0x801F29B8: jal         0x80014218
    // 0x801F29BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_5;
    // 0x801F29BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F29C0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801F29C4: sb          $t9, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r25;
    // 0x801F29C8: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x801F29CC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F29D0: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x801F29D4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x801F29D8: lbu         $t2, 0x7CDD($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7CDD);
    // 0x801F29DC: lw          $a1, 0x2C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X2C);
    // 0x801F29E0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801F29E4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801F29E8: and         $t1, $a1, $at
    ctx->r9 = ctx->r5 & ctx->r1;
    // 0x801F29EC: bne         $t2, $zero, L_801F2A84
    if (ctx->r10 != 0) {
        // 0x801F29F0: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_801F2A84;
    }
    // 0x801F29F0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801F29F4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801F29F8: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x801F29FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F2A00: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F2A04: lwc1        $f0, 0xA4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0XA4);
    // 0x801F2A08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F2A0C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x801F2A10: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801F2A14: addiu       $a0, $zero, 0x284
    ctx->r4 = ADD32(0, 0X284);
    // 0x801F2A18: bc1fl       L_801F2A2C
    if (!c1cs) {
        // 0x801F2A1C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801F2A2C;
    }
    goto skip_3;
    // 0x801F2A1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x801F2A20: b           L_801F2A2C
    // 0x801F2A24: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801F2A2C;
    // 0x801F2A24: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801F2A28: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801F2A2C:
    // 0x801F2A2C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x801F2A30: nop

    // 0x801F2A34: bc1fl       L_801F2A6C
    if (!c1cs) {
        // 0x801F2A38: lwc1        $f4, 0x10($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
            goto L_801F2A6C;
    }
    goto skip_4;
    // 0x801F2A38: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    skip_4:
    // 0x801F2A3C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x801F2A40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F2A44: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F2A48: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801F2A4C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801F2A50: addiu       $a0, $zero, 0x287
    ctx->r4 = ADD32(0, 0X287);
    // 0x801F2A54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801F2A58: jal         0x8000FE1C
    // 0x801F2A5C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000FE1C_10A1C(rdram, ctx);
        goto after_6;
    // 0x801F2A5C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801F2A60: b           L_801F2A84
    // 0x801F2A64: nop

        goto L_801F2A84;
    // 0x801F2A64: nop

    // 0x801F2A68: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
L_801F2A6C:
    // 0x801F2A6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F2A70: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801F2A74: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801F2A78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F2A7C: jal         0x8000FE1C
    // 0x801F2A80: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000FE1C_10A1C(rdram, ctx);
        goto after_7;
    // 0x801F2A80: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
L_801F2A84:
    // 0x801F2A84: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801F2A88: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x801F2A8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F2A90: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F2A94: lwc1        $f0, 0xA4($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0XA4);
    // 0x801F2A98: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x801F2A9C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F2AA0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801F2AA4: nop

    // 0x801F2AA8: bc1fl       L_801F2ABC
    if (!c1cs) {
        // 0x801F2AAC: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_801F2ABC;
    }
    goto skip_5;
    // 0x801F2AAC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_5:
    // 0x801F2AB0: b           L_801F2ABC
    // 0x801F2AB4: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_801F2ABC;
    // 0x801F2AB4: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x801F2AB8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_801F2ABC:
    // 0x801F2ABC: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x801F2AC0: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801F2AC4: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x801F2AC8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F2ACC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F2AD0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F2AD4: lw          $t5, -0x39F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39F4);
    // 0x801F2AD8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801F2ADC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F2AE0: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x801F2AE4: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x801F2AE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F2AEC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F2AF0: add.d       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f4.d + ctx->f12.d;
    // 0x801F2AF4: mul.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x801F2AF8: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x801F2AFC: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x801F2B00: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x801F2B04: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801F2B08: lwc1        $f0, 0xA4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XA4);
    // 0x801F2B0C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801F2B10: nop

    // 0x801F2B14: bc1fl       L_801F2B28
    if (!c1cs) {
        // 0x801F2B18: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801F2B28;
    }
    goto skip_6;
    // 0x801F2B18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_6:
    // 0x801F2B1C: b           L_801F2B28
    // 0x801F2B20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801F2B28;
    // 0x801F2B20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801F2B24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801F2B28:
    // 0x801F2B28: ldc1        $f6, -0x4098($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4098);
    // 0x801F2B2C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801F2B30: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801F2B34: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801F2B38: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F2B3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F2B40: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x801F2B44: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x801F2B48: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x801F2B4C: div.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x801F2B50: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x801F2B54: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F2B58: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_801F2B5C:
    // 0x801F2B5C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801F2B60:
    // 0x801F2B60: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801F2B64: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x801F2B68: jr          $ra
    // 0x801F2B6C: nop

    TRACE_RETURN()
    return;
    // 0x801F2B6C: nop

;}
RECOMP_FUNC void func_801E081C_59C72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E081C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E0824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E0828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E082C: jal         0x801E74EC
    // 0x801E0830: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E74EC_5A33FC(rdram, ctx);
        goto after_0;
    // 0x801E0830: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E0834: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0838: lbu         $v0, 0x18($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X18);
    // 0x801E083C: beq         $v0, $zero, L_801E087C
    if (ctx->r2 == 0) {
        // 0x801E0840: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_801E087C;
    }
    // 0x801E0840: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x801E0844: bne         $t7, $zero, L_801E087C
    if (ctx->r15 != 0) {
        // 0x801E0848: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_801E087C;
    }
    // 0x801E0848: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x801E084C: beql        $t8, $zero, L_801E0894
    if (ctx->r24 == 0) {
        // 0x801E0850: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E0894;
    }
    goto skip_0;
    // 0x801E0850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E0854: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
    // 0x801E0858: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801E085C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801E0860: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801E0864: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801E0868: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801E086C: lhu         $t1, 0x7DB4($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7DB4);
    // 0x801E0870: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x801E0874: beql        $t2, $zero, L_801E0894
    if (ctx->r10 == 0) {
        // 0x801E0878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E0894;
    }
    goto skip_1;
    // 0x801E0878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_801E087C:
    // 0x801E087C: jal         0x801E7544
    // 0x801E0880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7544_5A3454(rdram, ctx);
        goto after_1;
    // 0x801E0880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E0884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0888: jal         0x801DACDC
    // 0x801E088C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E088C: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_2:
    // 0x801E0890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E0894:
    // 0x801E0894: jal         0x801E8964
    // 0x801E0898: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_801E8964_5A4874(rdram, ctx);
        goto after_3;
    // 0x801E0898: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_3:
    // 0x801E089C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E08A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E08A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E08A8: jr          $ra
    // 0x801E08AC: nop

    TRACE_RETURN()
    return;
    // 0x801E08AC: nop

;}
RECOMP_FUNC void func_801FBD50_5B7C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBD50: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x801FBD54: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FBD58: sw          $a0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r4;
    // 0x801FBD5C: sw          $a1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r5;
    // 0x801FBD60: addiu       $t6, $t6, -0x5A54
    ctx->r14 = ADD32(ctx->r14, -0X5A54);
    // 0x801FBD64: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801FBD68: addiu       $v1, $sp, 0x110
    ctx->r3 = ADD32(ctx->r29, 0X110);
    // 0x801FBD6C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FBD70: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x801FBD74: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801FBD78: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x801FBD7C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FBD80: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x801FBD84: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801FBD88: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x801FBD8C: addiu       $t8, $t8, -0x5A44
    ctx->r24 = ADD32(ctx->r24, -0X5A44);
    // 0x801FBD90: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x801FBD94: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x801FBD98: ori         $t3, $t3, 0x8000
    ctx->r11 = ctx->r11 | 0X8000;
    // 0x801FBD9C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801FBDA0: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x801FBDA4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x801FBDA8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801FBDAC: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x801FBDB0: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x801FBDB4: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x801FBDB8: addiu       $t9, $t8, 0x24
    ctx->r25 = ADD32(ctx->r24, 0X24);
    // 0x801FBDBC: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
L_801FBDC0:
    // 0x801FBDC0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801FBDC4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801FBDC8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801FBDCC: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801FBDD0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801FBDD4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801FBDD8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801FBDDC: bne         $t8, $t9, L_801FBDC0
    if (ctx->r24 != ctx->r25) {
        // 0x801FBDE0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801FBDC0;
    }
    // 0x801FBDE0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801FBDE4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801FBDE8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FBDEC: addiu       $t7, $t7, -0x5A18
    ctx->r15 = ADD32(ctx->r15, -0X5A18);
    // 0x801FBDF0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801FBDF4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x801FBDF8: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x801FBDFC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801FBE00: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x801FBE04: addiu       $t6, $t7, 0x78
    ctx->r14 = ADD32(ctx->r15, 0X78);
L_801FBE08:
    // 0x801FBE08: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801FBE0C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801FBE10: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801FBE14: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x801FBE18: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801FBE1C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x801FBE20: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801FBE24: bne         $t7, $t6, L_801FBE08
    if (ctx->r15 != ctx->r14) {
        // 0x801FBE28: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_801FBE08;
    }
    // 0x801FBE28: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x801FBE2C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801FBE30: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FBE34: addiu       $t9, $t9, -0x5998
    ctx->r25 = ADD32(ctx->r25, -0X5998);
    // 0x801FBE38: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x801FBE3C: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x801FBE40: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FBE44: addiu       $t7, $t7, -0x5988
    ctx->r15 = ADD32(ctx->r15, -0X5988);
    // 0x801FBE48: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x801FBE4C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801FBE50: addiu       $a0, $a0, -0x3A28
    ctx->r4 = ADD32(ctx->r4, -0X3A28);
    // 0x801FBE54: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801FBE58: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x801FBE5C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x801FBE60: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x801FBE64: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x801FBE68: lw          $t8, 0xC($t9)
    ctx->r24 = MEM_W(ctx->r25, 0XC);
    // 0x801FBE6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FBE70: addiu       $t9, $t9, -0x5978
    ctx->r25 = ADD32(ctx->r25, -0X5978);
    // 0x801FBE74: sw          $t8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r24;
    // 0x801FBE78: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801FBE7C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801FBE80: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x801FBE84: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x801FBE88: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801FBE8C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x801FBE90: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x801FBE94: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FBE98: addiu       $t7, $t7, -0x5968
    ctx->r15 = ADD32(ctx->r15, -0X5968);
    // 0x801FBE9C: sw          $t8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r24;
    // 0x801FBEA0: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801FBEA4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801FBEA8: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x801FBEAC: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x801FBEB0: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x801FBEB4: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x801FBEB8: lw          $t8, 0xC($t9)
    ctx->r24 = MEM_W(ctx->r25, 0XC);
    // 0x801FBEBC: or          $t9, $a2, $zero
    ctx->r25 = ctx->r6 | 0;
    // 0x801FBEC0: sw          $t8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r24;
    // 0x801FBEC4: addiu       $t8, $t7, 0x24
    ctx->r24 = ADD32(ctx->r15, 0X24);
L_801FBEC8:
    // 0x801FBEC8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801FBECC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801FBED0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801FBED4: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x801FBED8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801FBEDC: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x801FBEE0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801FBEE4: bne         $t7, $t8, L_801FBEC8
    if (ctx->r15 != ctx->r24) {
        // 0x801FBEE8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_801FBEC8;
    }
    // 0x801FBEE8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x801FBEEC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801FBEF0: lw          $t9, 0x128($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X128);
    // 0x801FBEF4: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x801FBEF8: lh          $t7, 0x2DB2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2DB2);
    // 0x801FBEFC: lh          $t6, 0x60($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X60);
    // 0x801FBF00: beql        $t7, $t6, L_801FBF28
    if (ctx->r15 == ctx->r14) {
        // 0x801FBF04: lw          $t8, 0x4($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X4);
            goto L_801FBF28;
    }
    goto skip_0;
    // 0x801FBF04: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x801FBF08: lw          $t8, 0x5C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X5C);
    // 0x801FBF0C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x801FBF10: sw          $t7, 0x5C($t9)
    MEM_W(0X5C, ctx->r25) = ctx->r15;
    // 0x801FBF14: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801FBF18: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x801FBF1C: lh          $t7, 0x2DB2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2DB2);
    // 0x801FBF20: sh          $t7, 0x60($t9)
    MEM_H(0X60, ctx->r25) = ctx->r15;
    // 0x801FBF24: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
L_801FBF28:
    // 0x801FBF28: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x801FBF2C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801FBF30: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x801FBF34: addu        $t9, $v1, $t7
    ctx->r25 = ADD32(ctx->r3, ctx->r15);
    // 0x801FBF38: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x801FBF3C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x801FBF40: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x801FBF44: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x801FBF48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBF4C: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x801FBF50: beq         $at, $zero, L_801FBF60
    if (ctx->r1 == 0) {
        // 0x801FBF54: nop
    
            goto L_801FBF60;
    }
    // 0x801FBF54: nop

    // 0x801FBF58: b           L_801FBF60
    // 0x801FBF5C: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
        goto L_801FBF60;
    // 0x801FBF5C: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
L_801FBF60:
    // 0x801FBF60: bne         $v1, $zero, L_801FBF70
    if (ctx->r3 != 0) {
        // 0x801FBF64: or          $t3, $v1, $zero
        ctx->r11 = ctx->r3 | 0;
            goto L_801FBF70;
    }
    // 0x801FBF64: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x801FBF68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801FBF6C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_801FBF70:
    // 0x801FBF70: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x801FBF74: addu        $t7, $a1, $t8
    ctx->r15 = ADD32(ctx->r5, ctx->r24);
    // 0x801FBF78: lw          $t9, -0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, -0X4);
    // 0x801FBF7C: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FBF80: lw          $t4, 0x10($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X10);
    // 0x801FBF84: slti        $at, $t4, 0x2710
    ctx->r1 = SIGNED(ctx->r12) < 0X2710 ? 1 : 0;
    // 0x801FBF88: bnel        $at, $zero, L_801FBFC8
    if (ctx->r1 != 0) {
        // 0x801FBF8C: addiu       $at, $zero, 0x3E8
        ctx->r1 = ADD32(0, 0X3E8);
            goto L_801FBFC8;
    }
    goto skip_1;
    // 0x801FBF8C: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    skip_1:
    // 0x801FBF90: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBF94: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x801FBF98: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x801FBF9C: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x801FBFA0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBFA4: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x801FBFA8: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x801FBFAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBFB0: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x801FBFB4: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x801FBFB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBFBC: b           L_801FC268
    // 0x801FBFC0: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
        goto L_801FC268;
    // 0x801FBFC0: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FBFC4: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
L_801FBFC8:
    // 0x801FBFC8: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x801FBFCC: mflo        $t6
    ctx->r14 = lo;
    // 0x801FBFD0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801FBFD4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FBFD8: div         $zero, $t6, $t5
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r13)));
    // 0x801FBFDC: mfhi        $v1
    ctx->r3 = hi;
    // 0x801FBFE0: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801FBFE4: bne         $t5, $zero, L_801FBFF0
    if (ctx->r13 != 0) {
        // 0x801FBFE8: nop
    
            goto L_801FBFF0;
    }
    // 0x801FBFE8: nop

    // 0x801FBFEC: break       7
    do_break(2149564396);
L_801FBFF0:
    // 0x801FBFF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FBFF4: bne         $t5, $at, L_801FC008
    if (ctx->r13 != ctx->r1) {
        // 0x801FBFF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC008;
    }
    // 0x801FBFF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FBFFC: bne         $t6, $at, L_801FC008
    if (ctx->r14 != ctx->r1) {
        // 0x801FC000: nop
    
            goto L_801FC008;
    }
    // 0x801FC000: nop

    // 0x801FC004: break       6
    do_break(2149564420);
L_801FC008:
    // 0x801FC008: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801FC00C: beq         $t8, $zero, L_801FC01C
    if (ctx->r24 == 0) {
        // 0x801FC010: or          $t3, $t8, $zero
        ctx->r11 = ctx->r24 | 0;
            goto L_801FC01C;
    }
    // 0x801FC010: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x801FC014: b           L_801FC020
    // 0x801FC018: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
        goto L_801FC020;
    // 0x801FC018: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
L_801FC01C:
    // 0x801FC01C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
L_801FC020:
    // 0x801FC020: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
    // 0x801FC024: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x801FC028: addu        $t9, $a1, $t7
    ctx->r25 = ADD32(ctx->r5, ctx->r15);
    // 0x801FC02C: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x801FC030: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
    // 0x801FC034: bne         $t5, $v1, L_801FC0B8
    if (ctx->r13 != ctx->r3) {
        // 0x801FC038: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_801FC0B8;
    }
    // 0x801FC038: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC03C: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x801FC040: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FC044: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x801FC048: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x801FC04C: mflo        $t7
    ctx->r15 = lo;
    // 0x801FC050: nop

    // 0x801FC054: nop

    // 0x801FC058: div         $zero, $t7, $t5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r13)));
    // 0x801FC05C: mfhi        $v1
    ctx->r3 = hi;
    // 0x801FC060: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FC064: bne         $t5, $zero, L_801FC070
    if (ctx->r13 != 0) {
        // 0x801FC068: nop
    
            goto L_801FC070;
    }
    // 0x801FC068: nop

    // 0x801FC06C: break       7
    do_break(2149564524);
L_801FC070:
    // 0x801FC070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC074: bne         $t5, $at, L_801FC088
    if (ctx->r13 != ctx->r1) {
        // 0x801FC078: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC088;
    }
    // 0x801FC078: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC07C: bne         $t7, $at, L_801FC088
    if (ctx->r15 != ctx->r1) {
        // 0x801FC080: nop
    
            goto L_801FC088;
    }
    // 0x801FC080: nop

    // 0x801FC084: break       6
    do_break(2149564548);
L_801FC088:
    // 0x801FC088: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FC08C: beq         $t9, $zero, L_801FC09C
    if (ctx->r25 == 0) {
        // 0x801FC090: or          $t3, $t9, $zero
        ctx->r11 = ctx->r25 | 0;
            goto L_801FC09C;
    }
    // 0x801FC090: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x801FC094: b           L_801FC09C
    // 0x801FC098: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
        goto L_801FC09C;
    // 0x801FC098: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
L_801FC09C:
    // 0x801FC09C: andi        $t6, $t4, 0xFFFF
    ctx->r14 = ctx->r12 & 0XFFFF;
    // 0x801FC0A0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC0A4: addu        $t7, $a1, $t8
    ctx->r15 = ADD32(ctx->r5, ctx->r24);
    // 0x801FC0A8: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC0AC: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
    // 0x801FC0B0: b           L_801FC114
    // 0x801FC0B4: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
        goto L_801FC114;
    // 0x801FC0B4: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
L_801FC0B8:
    // 0x801FC0B8: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x801FC0BC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FC0C0: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x801FC0C4: mflo        $t8
    ctx->r24 = lo;
    // 0x801FC0C8: nop

    // 0x801FC0CC: nop

    // 0x801FC0D0: div         $zero, $t8, $t5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r13)));
    // 0x801FC0D4: mfhi        $v1
    ctx->r3 = hi;
    // 0x801FC0D8: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x801FC0DC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x801FC0E0: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x801FC0E4: bne         $t5, $zero, L_801FC0F0
    if (ctx->r13 != 0) {
        // 0x801FC0E8: nop
    
            goto L_801FC0F0;
    }
    // 0x801FC0E8: nop

    // 0x801FC0EC: break       7
    do_break(2149564652);
L_801FC0F0:
    // 0x801FC0F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC0F4: bne         $t5, $at, L_801FC108
    if (ctx->r13 != ctx->r1) {
        // 0x801FC0F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC108;
    }
    // 0x801FC0F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC0FC: bne         $t8, $at, L_801FC108
    if (ctx->r24 != ctx->r1) {
        // 0x801FC100: nop
    
            goto L_801FC108;
    }
    // 0x801FC100: nop

    // 0x801FC104: break       6
    do_break(2149564676);
L_801FC108:
    // 0x801FC108: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x801FC10C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801FC110: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
L_801FC114:
    // 0x801FC114: bne         $t5, $v1, L_801FC1B0
    if (ctx->r13 != ctx->r3) {
        // 0x801FC118: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_801FC1B0;
    }
    // 0x801FC118: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC11C: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x801FC120: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x801FC124: div         $zero, $t7, $t5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r13)));
    // 0x801FC128: mflo        $t9
    ctx->r25 = lo;
    // 0x801FC12C: bne         $t5, $zero, L_801FC138
    if (ctx->r13 != 0) {
        // 0x801FC130: nop
    
            goto L_801FC138;
    }
    // 0x801FC130: nop

    // 0x801FC134: break       7
    do_break(2149564724);
L_801FC138:
    // 0x801FC138: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC13C: bne         $t5, $at, L_801FC150
    if (ctx->r13 != ctx->r1) {
        // 0x801FC140: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC150;
    }
    // 0x801FC140: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC144: bne         $t7, $at, L_801FC150
    if (ctx->r15 != ctx->r1) {
        // 0x801FC148: nop
    
            goto L_801FC150;
    }
    // 0x801FC148: nop

    // 0x801FC14C: break       6
    do_break(2149564748);
L_801FC150:
    // 0x801FC150: div         $zero, $t9, $t5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r13)));
    // 0x801FC154: mfhi        $v1
    ctx->r3 = hi;
    // 0x801FC158: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x801FC15C: bne         $t5, $zero, L_801FC168
    if (ctx->r13 != 0) {
        // 0x801FC160: nop
    
            goto L_801FC168;
    }
    // 0x801FC160: nop

    // 0x801FC164: break       7
    do_break(2149564772);
L_801FC168:
    // 0x801FC168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC16C: bne         $t5, $at, L_801FC180
    if (ctx->r13 != ctx->r1) {
        // 0x801FC170: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC180;
    }
    // 0x801FC170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC174: bne         $t9, $at, L_801FC180
    if (ctx->r25 != ctx->r1) {
        // 0x801FC178: nop
    
            goto L_801FC180;
    }
    // 0x801FC178: nop

    // 0x801FC17C: break       6
    do_break(2149564796);
L_801FC180:
    // 0x801FC180: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801FC184: beq         $t6, $zero, L_801FC194
    if (ctx->r14 == 0) {
        // 0x801FC188: or          $t3, $t6, $zero
        ctx->r11 = ctx->r14 | 0;
            goto L_801FC194;
    }
    // 0x801FC188: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
    // 0x801FC18C: b           L_801FC194
    // 0x801FC190: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
        goto L_801FC194;
    // 0x801FC190: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
L_801FC194:
    // 0x801FC194: andi        $t8, $t4, 0xFFFF
    ctx->r24 = ctx->r12 & 0XFFFF;
    // 0x801FC198: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801FC19C: addu        $t9, $a1, $t7
    ctx->r25 = ADD32(ctx->r5, ctx->r15);
    // 0x801FC1A0: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x801FC1A4: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
    // 0x801FC1A8: b           L_801FC224
    // 0x801FC1AC: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
        goto L_801FC224;
    // 0x801FC1AC: sw          $t6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r14;
L_801FC1B0:
    // 0x801FC1B0: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x801FC1B4: div         $zero, $t8, $t5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r13)));
    // 0x801FC1B8: mflo        $t7
    ctx->r15 = lo;
    // 0x801FC1BC: bne         $t5, $zero, L_801FC1C8
    if (ctx->r13 != 0) {
        // 0x801FC1C0: nop
    
            goto L_801FC1C8;
    }
    // 0x801FC1C0: nop

    // 0x801FC1C4: break       7
    do_break(2149564868);
L_801FC1C8:
    // 0x801FC1C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC1CC: bne         $t5, $at, L_801FC1E0
    if (ctx->r13 != ctx->r1) {
        // 0x801FC1D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC1E0;
    }
    // 0x801FC1D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC1D4: bne         $t8, $at, L_801FC1E0
    if (ctx->r24 != ctx->r1) {
        // 0x801FC1D8: nop
    
            goto L_801FC1E0;
    }
    // 0x801FC1D8: nop

    // 0x801FC1DC: break       6
    do_break(2149564892);
L_801FC1E0:
    // 0x801FC1E0: div         $zero, $t7, $t5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r13)));
    // 0x801FC1E4: mfhi        $v1
    ctx->r3 = hi;
    // 0x801FC1E8: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FC1EC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x801FC1F0: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x801FC1F4: bne         $t5, $zero, L_801FC200
    if (ctx->r13 != 0) {
        // 0x801FC1F8: nop
    
            goto L_801FC200;
    }
    // 0x801FC1F8: nop

    // 0x801FC1FC: break       7
    do_break(2149564924);
L_801FC200:
    // 0x801FC200: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC204: bne         $t5, $at, L_801FC218
    if (ctx->r13 != ctx->r1) {
        // 0x801FC208: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC218;
    }
    // 0x801FC208: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC20C: bne         $t7, $at, L_801FC218
    if (ctx->r15 != ctx->r1) {
        // 0x801FC210: nop
    
            goto L_801FC218;
    }
    // 0x801FC210: nop

    // 0x801FC214: break       6
    do_break(2149564948);
L_801FC218:
    // 0x801FC218: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x801FC21C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FC220: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
L_801FC224:
    // 0x801FC224: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x801FC228: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC22C: div         $zero, $t9, $t5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r13)));
    // 0x801FC230: mfhi        $t6
    ctx->r14 = hi;
    // 0x801FC234: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC238: addu        $t7, $a1, $t8
    ctx->r15 = ADD32(ctx->r5, ctx->r24);
    // 0x801FC23C: bne         $t5, $zero, L_801FC248
    if (ctx->r13 != 0) {
        // 0x801FC240: nop
    
            goto L_801FC248;
    }
    // 0x801FC240: nop

    // 0x801FC244: break       7
    do_break(2149564996);
L_801FC248:
    // 0x801FC248: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801FC24C: bne         $t5, $at, L_801FC260
    if (ctx->r13 != ctx->r1) {
        // 0x801FC250: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801FC260;
    }
    // 0x801FC250: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FC254: bne         $t9, $at, L_801FC260
    if (ctx->r25 != ctx->r1) {
        // 0x801FC258: nop
    
            goto L_801FC260;
    }
    // 0x801FC258: nop

    // 0x801FC25C: break       6
    do_break(2149565020);
L_801FC260:
    // 0x801FC260: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC264: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
L_801FC268:
    // 0x801FC268: lw          $t5, 0x2C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X2C);
    // 0x801FC26C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801FC270: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x801FC274: beq         $t5, $zero, L_801FC2A0
    if (ctx->r13 == 0) {
        // 0x801FC278: or          $t4, $t5, $zero
        ctx->r12 = ctx->r13 | 0;
            goto L_801FC2A0;
    }
    // 0x801FC278: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x801FC27C: beq         $t5, $at, L_801FC2A8
    if (ctx->r13 == ctx->r1) {
        // 0x801FC280: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801FC2A8;
    }
    // 0x801FC280: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FC284: beq         $t5, $at, L_801FC2C8
    if (ctx->r13 == ctx->r1) {
        // 0x801FC288: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801FC2C8;
    }
    // 0x801FC288: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FC28C: beq         $t4, $at, L_801FC2D8
    if (ctx->r12 == ctx->r1) {
        // 0x801FC290: lui         $t6, 0x8020
        ctx->r14 = S32(0X8020 << 16);
            goto L_801FC2D8;
    }
    // 0x801FC290: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801FC294: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x801FC298: b           L_801FC360
    // 0x801FC29C: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
        goto L_801FC360;
    // 0x801FC29C: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
L_801FC2A0:
    // 0x801FC2A0: b           L_801FC360
    // 0x801FC2A4: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
        goto L_801FC360;
    // 0x801FC2A4: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_801FC2A8:
    // 0x801FC2A8: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x801FC2AC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801FC2B0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801FC2B4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x801FC2B8: lw          $v1, -0x3954($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3954);
    // 0x801FC2BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801FC2C0: b           L_801FC360
    // 0x801FC2C4: andi        $t3, $v1, 0xFFFF
    ctx->r11 = ctx->r3 & 0XFFFF;
        goto L_801FC360;
    // 0x801FC2C4: andi        $t3, $v1, 0xFFFF
    ctx->r11 = ctx->r3 & 0XFFFF;
L_801FC2C8:
    // 0x801FC2C8: addiu       $v1, $t5, 0x2
    ctx->r3 = ADD32(ctx->r13, 0X2);
    // 0x801FC2CC: andi        $t3, $v1, 0xFFFF
    ctx->r11 = ctx->r3 & 0XFFFF;
    // 0x801FC2D0: b           L_801FC360
    // 0x801FC2D4: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
        goto L_801FC360;
    // 0x801FC2D4: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_801FC2D8:
    // 0x801FC2D8: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801FC2DC: addiu       $v1, $t5, 0x2
    ctx->r3 = ADD32(ctx->r13, 0X2);
    // 0x801FC2E0: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FC2E4: lw          $a1, 0x5C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X5C);
    // 0x801FC2E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FC2EC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FC2F0: lbu         $t3, 0x68($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X68);
    // 0x801FC2F4: bnel        $t3, $at, L_801FC310
    if (ctx->r11 != ctx->r1) {
        // 0x801FC2F8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801FC310;
    }
    goto skip_2;
    // 0x801FC2F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_2:
    // 0x801FC2FC: addiu       $v1, $t5, 0x3
    ctx->r3 = ADD32(ctx->r13, 0X3);
    // 0x801FC300: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801FC304: b           L_801FC358
    // 0x801FC308: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_801FC358;
    // 0x801FC308: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801FC30C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_801FC310:
    // 0x801FC310: bne         $t3, $at, L_801FC358
    if (ctx->r11 != ctx->r1) {
        // 0x801FC314: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_801FC358;
    }
    // 0x801FC314: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801FC318: lhu         $t7, 0x36($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X36);
    // 0x801FC31C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801FC320: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x801FC324: beq         $at, $zero, L_801FC330
    if (ctx->r1 == 0) {
        // 0x801FC328: nop
    
            goto L_801FC330;
    }
    // 0x801FC328: nop

    // 0x801FC32C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_801FC330:
    // 0x801FC330: lhu         $t9, 0x7A78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7A78);
    // 0x801FC334: and         $t6, $t9, $v1
    ctx->r14 = ctx->r25 & ctx->r3;
    // 0x801FC338: beq         $t6, $zero, L_801FC350
    if (ctx->r14 == 0) {
        // 0x801FC33C: addiu       $v1, $t5, 0x3
        ctx->r3 = ADD32(ctx->r13, 0X3);
            goto L_801FC350;
    }
    // 0x801FC33C: addiu       $v1, $t5, 0x3
    ctx->r3 = ADD32(ctx->r13, 0X3);
    // 0x801FC340: addiu       $v1, $t5, 0x4
    ctx->r3 = ADD32(ctx->r13, 0X4);
    // 0x801FC344: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801FC348: b           L_801FC358
    // 0x801FC34C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_801FC358;
    // 0x801FC34C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801FC350:
    // 0x801FC350: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x801FC354: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_801FC358:
    // 0x801FC358: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x801FC35C: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
L_801FC360:
    // 0x801FC360: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x801FC364: addu        $v1, $t3, $t9
    ctx->r3 = ADD32(ctx->r11, ctx->r25);
    // 0x801FC368: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x801FC36C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC370: addu        $t7, $a3, $t8
    ctx->r15 = ADD32(ctx->r7, ctx->r24);
    // 0x801FC374: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC378: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC37C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801FC380: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC384: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801FC388: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC38C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC390: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x801FC394: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC398: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC39C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x801FC3A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC3A4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC3A8: addu        $t7, $a2, $t8
    ctx->r15 = ADD32(ctx->r6, ctx->r24);
    // 0x801FC3AC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC3B0: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC3B4: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x801FC3B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC3BC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC3C0: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x801FC3C4: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC3C8: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC3CC: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x801FC3D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC3D4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC3D8: addu        $t7, $a2, $t8
    ctx->r15 = ADD32(ctx->r6, ctx->r24);
    // 0x801FC3DC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC3E0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801FC3E4: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC3E8: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x801FC3EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC3F0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801FC3F4: addu        $t7, $t2, $t8
    ctx->r15 = ADD32(ctx->r10, ctx->r24);
    // 0x801FC3F8: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x801FC3FC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FC400: addiu       $t7, $t7, -0x5B5C
    ctx->r15 = ADD32(ctx->r15, -0X5B5C);
    // 0x801FC404: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x801FC408: lhu         $t4, 0xE($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XE);
    // 0x801FC40C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC410: slti        $at, $t4, 0x28
    ctx->r1 = SIGNED(ctx->r12) < 0X28 ? 1 : 0;
    // 0x801FC414: bne         $at, $zero, L_801FC424
    if (ctx->r1 != 0) {
        // 0x801FC418: or          $t5, $t4, $zero
        ctx->r13 = ctx->r12 | 0;
            goto L_801FC424;
    }
    // 0x801FC418: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x801FC41C: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x801FC420: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
L_801FC424:
    // 0x801FC424: bgez        $t5, L_801FC438
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801FC428: andi        $t6, $t5, 0x1
        ctx->r14 = ctx->r13 & 0X1;
            goto L_801FC438;
    }
    // 0x801FC428: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801FC42C: beq         $t6, $zero, L_801FC438
    if (ctx->r14 == 0) {
        // 0x801FC430: nop
    
            goto L_801FC438;
    }
    // 0x801FC430: nop

    // 0x801FC434: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_801FC438:
    // 0x801FC438: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x801FC43C: beq         $t8, $zero, L_801FC490
    if (ctx->r24 == 0) {
        // 0x801FC440: andi        $v1, $t4, 0xFFFF
        ctx->r3 = ctx->r12 & 0XFFFF;
            goto L_801FC490;
    }
    // 0x801FC440: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
    // 0x801FC444: slti        $at, $t5, 0x15
    ctx->r1 = SIGNED(ctx->r13) < 0X15 ? 1 : 0;
    // 0x801FC448: bne         $at, $zero, L_801FC468
    if (ctx->r1 != 0) {
        // 0x801FC44C: sw          $t7, 0x34($v0)
        MEM_W(0X34, ctx->r2) = ctx->r15;
            goto L_801FC468;
    }
    // 0x801FC44C: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x801FC450: addiu       $v1, $t5, -0x14
    ctx->r3 = ADD32(ctx->r13, -0X14);
    // 0x801FC454: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FC458: addiu       $t6, $zero, 0xC9
    ctx->r14 = ADD32(0, 0XC9);
    // 0x801FC45C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FC460: b           L_801FC470
    // 0x801FC464: sh          $t6, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r14;
        goto L_801FC470;
    // 0x801FC464: sh          $t6, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r14;
L_801FC468:
    // 0x801FC468: addiu       $t8, $zero, 0xC1
    ctx->r24 = ADD32(0, 0XC1);
    // 0x801FC46C: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
L_801FC470:
    // 0x801FC470: bgez        $v1, L_801FC480
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801FC474: sra         $t7, $v1, 1
        ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
            goto L_801FC480;
    }
    // 0x801FC474: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x801FC478: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x801FC47C: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_801FC480:
    // 0x801FC480: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x801FC484: addiu       $t8, $t6, 0x3E
    ctx->r24 = ADD32(ctx->r14, 0X3E);
    // 0x801FC488: b           L_801FC494
    // 0x801FC48C: sh          $t8, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r24;
        goto L_801FC494;
    // 0x801FC48C: sh          $t8, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r24;
L_801FC490:
    // 0x801FC490: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_801FC494:
    // 0x801FC494: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC498: bgez        $t5, L_801FC4A8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801FC49C: sra         $t7, $t5, 1
        ctx->r15 = S32(SIGNED(ctx->r13) >> 1);
            goto L_801FC4A8;
    }
    // 0x801FC49C: sra         $t7, $t5, 1
    ctx->r15 = S32(SIGNED(ctx->r13) >> 1);
    // 0x801FC4A0: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x801FC4A4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_801FC4A8:
    // 0x801FC4A8: subu        $v1, $a1, $t7
    ctx->r3 = SUB32(ctx->r5, ctx->r15);
    // 0x801FC4AC: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FC4B0: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x801FC4B4: beql        $at, $zero, L_801FC4E0
    if (ctx->r1 == 0) {
        // 0x801FC4B8: sw          $zero, 0x34($v0)
        MEM_W(0X34, ctx->r2) = 0;
            goto L_801FC4E0;
    }
    goto skip_3;
    // 0x801FC4B8: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    skip_3:
    // 0x801FC4BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801FC4C0: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FC4C4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FC4C8: addiu       $t8, $t8, -0x5C4C
    ctx->r24 = ADD32(ctx->r24, -0X5C4C);
    // 0x801FC4CC: mflo        $t6
    ctx->r14 = lo;
    // 0x801FC4D0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x801FC4D4: b           L_801FC4E0
    // 0x801FC4D8: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
        goto L_801FC4E0;
    // 0x801FC4D8: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x801FC4DC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_801FC4E0:
    // 0x801FC4E0: lhu         $t5, 0xA($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XA);
    // 0x801FC4E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC4E8: slti        $at, $t5, 0x28
    ctx->r1 = SIGNED(ctx->r13) < 0X28 ? 1 : 0;
    // 0x801FC4EC: bnel        $at, $zero, L_801FC4FC
    if (ctx->r1 != 0) {
        // 0x801FC4F0: addiu       $v1, $t5, 0x1
        ctx->r3 = ADD32(ctx->r13, 0X1);
            goto L_801FC4FC;
    }
    goto skip_4;
    // 0x801FC4F0: addiu       $v1, $t5, 0x1
    ctx->r3 = ADD32(ctx->r13, 0X1);
    skip_4:
    // 0x801FC4F4: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x801FC4F8: addiu       $v1, $t5, 0x1
    ctx->r3 = ADD32(ctx->r13, 0X1);
L_801FC4FC:
    // 0x801FC4FC: bgez        $v1, L_801FC50C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801FC500: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_801FC50C;
    }
    // 0x801FC500: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x801FC504: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x801FC508: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_801FC50C:
    // 0x801FC50C: subu        $a0, $a1, $t9
    ctx->r4 = SUB32(ctx->r5, ctx->r25);
    // 0x801FC510: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801FC514: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x801FC518: beq         $at, $zero, L_801FC53C
    if (ctx->r1 == 0) {
        // 0x801FC51C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_801FC53C;
    }
    // 0x801FC51C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FC520: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FC524: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FC528: addiu       $t7, $t7, -0x5D3C
    ctx->r15 = ADD32(ctx->r15, -0X5D3C);
    // 0x801FC52C: mflo        $t8
    ctx->r24 = lo;
    // 0x801FC530: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x801FC534: b           L_801FC540
    // 0x801FC538: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
        goto L_801FC540;
    // 0x801FC538: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
L_801FC53C:
    // 0x801FC53C: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_801FC540:
    // 0x801FC540: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x801FC544: slti        $at, $a0, 0x14
    ctx->r1 = SIGNED(ctx->r4) < 0X14 ? 1 : 0;
    // 0x801FC548: beq         $at, $zero, L_801FC56C
    if (ctx->r1 == 0) {
        // 0x801FC54C: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_801FC56C;
    }
    // 0x801FC54C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801FC550: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FC554: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FC558: addiu       $t8, $t8, -0x5E2C
    ctx->r24 = ADD32(ctx->r24, -0X5E2C);
    // 0x801FC55C: mflo        $t6
    ctx->r14 = lo;
    // 0x801FC560: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x801FC564: b           L_801FC570
    // 0x801FC568: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
        goto L_801FC570;
    // 0x801FC568: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
L_801FC56C:
    // 0x801FC56C: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_801FC570:
    // 0x801FC570: jr          $ra
    // 0x801FC574: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    TRACE_RETURN()
    return;
    // 0x801FC574: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_801E3D04_59FC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3D04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E3D08: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3D0C: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x801E3D10: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x801E3D14: lhu         $v0, 0x8($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8);
    // 0x801E3D18: beq         $v0, $at, L_801E3DD8
    if (ctx->r2 == ctx->r1) {
        // 0x801E3D1C: nop
    
            goto L_801E3DD8;
    }
    // 0x801E3D1C: nop

    // 0x801E3D20: lhu         $a2, 0x94($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X94);
    // 0x801E3D24: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x801E3D28: andi        $t7, $a2, 0x3FF
    ctx->r15 = ctx->r6 & 0X3FF;
    // 0x801E3D2C: subu        $a1, $t7, $t8
    ctx->r5 = SUB32(ctx->r15, ctx->r24);
    // 0x801E3D30: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x801E3D34: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801E3D38: bltz        $t1, L_801E3D70
    if (SIGNED(ctx->r9) < 0) {
        // 0x801E3D3C: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_801E3D70;
    }
    // 0x801E3D3C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801E3D40: slti        $at, $t1, 0x201
    ctx->r1 = SIGNED(ctx->r9) < 0X201 ? 1 : 0;
    // 0x801E3D44: bne         $at, $zero, L_801E3D60
    if (ctx->r1 != 0) {
        // 0x801E3D48: or          $t0, $a3, $zero
        ctx->r8 = ctx->r7 | 0;
            goto L_801E3D60;
    }
    // 0x801E3D48: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x801E3D4C: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x801E3D50: sra         $t2, $v1, 16
    ctx->r10 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801E3D54: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801E3D58: b           L_801E3DA0
    // 0x801E3D5C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
        goto L_801E3DA0;
    // 0x801E3D5C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_801E3D60:
    // 0x801E3D60: negu        $v1, $a3
    ctx->r3 = SUB32(0, ctx->r7);
    // 0x801E3D64: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x801E3D68: b           L_801E3DA0
    // 0x801E3D6C: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
        goto L_801E3DA0;
    // 0x801E3D6C: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
L_801E3D70:
    // 0x801E3D70: negu        $t5, $a1
    ctx->r13 = SUB32(0, ctx->r5);
    // 0x801E3D74: slti        $at, $t5, 0x201
    ctx->r1 = SIGNED(ctx->r13) < 0X201 ? 1 : 0;
    // 0x801E3D78: bne         $at, $zero, L_801E3D94
    if (ctx->r1 != 0) {
        // 0x801E3D7C: or          $t0, $a3, $zero
        ctx->r8 = ctx->r7 | 0;
            goto L_801E3D94;
    }
    // 0x801E3D7C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x801E3D80: negu        $v1, $a3
    ctx->r3 = SUB32(0, ctx->r7);
    // 0x801E3D84: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801E3D88: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801E3D8C: b           L_801E3DA0
    // 0x801E3D90: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
        goto L_801E3DA0;
    // 0x801E3D90: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_801E3D94:
    // 0x801E3D94: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x801E3D98: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801E3D9C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801E3DA0:
    // 0x801E3DA0: bgez        $a1, L_801E3DB0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801E3DA4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_801E3DB0;
    }
    // 0x801E3DA4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801E3DA8: b           L_801E3DB0
    // 0x801E3DAC: negu        $a3, $a1
    ctx->r7 = SUB32(0, ctx->r5);
        goto L_801E3DB0;
    // 0x801E3DAC: negu        $a3, $a1
    ctx->r7 = SUB32(0, ctx->r5);
L_801E3DB0:
    // 0x801E3DB0: bgez        $t0, L_801E3DC0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801E3DB4: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_801E3DC0;
    }
    // 0x801E3DB4: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801E3DB8: b           L_801E3DC0
    // 0x801E3DBC: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
        goto L_801E3DC0;
    // 0x801E3DBC: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
L_801E3DC0:
    // 0x801E3DC0: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801E3DC4: beq         $at, $zero, L_801E3DD4
    if (ctx->r1 == 0) {
        // 0x801E3DC8: addu        $t9, $a2, $v1
        ctx->r25 = ADD32(ctx->r6, ctx->r3);
            goto L_801E3DD4;
    }
    // 0x801E3DC8: addu        $t9, $a2, $v1
    ctx->r25 = ADD32(ctx->r6, ctx->r3);
    // 0x801E3DCC: jr          $ra
    // 0x801E3DD0: sh          $v0, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801E3DD0: sh          $v0, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r2;
L_801E3DD4:
    // 0x801E3DD4: sh          $t9, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r25;
L_801E3DD8:
    // 0x801E3DD8: jr          $ra
    // 0x801E3DDC: nop

    TRACE_RETURN()
    return;
    // 0x801E3DDC: nop

;}
RECOMP_FUNC void func_801F750C_5B341C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F750C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7514: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F7518: jal         0x801FB2A4
    // 0x801F751C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_0;
    // 0x801F751C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F7520: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F7524: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F7528: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F752C: lhu         $t6, 0x2E3B($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E3B);
    // 0x801F7530: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801F7534: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7538: beq         $t6, $at, L_801F7564
    if (ctx->r14 == ctx->r1) {
        // 0x801F753C: nop
    
            goto L_801F7564;
    }
    // 0x801F753C: nop

    // 0x801F7540: lhu         $t7, 0x2E17($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2E17);
    // 0x801F7544: beq         $t7, $zero, L_801F7564
    if (ctx->r15 == 0) {
        // 0x801F7548: nop
    
            goto L_801F7564;
    }
    // 0x801F7548: nop

    // 0x801F754C: jal         0x801FA128
    // 0x801F7550: nop

    func_801FA128_5B6038(rdram, ctx);
        goto after_1;
    // 0x801F7550: nop

    after_1:
    // 0x801F7554: jal         0x80006298
    // 0x801F7558: nop

    func_80006298_6E98(rdram, ctx);
        goto after_2;
    // 0x801F7558: nop

    after_2:
    // 0x801F755C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F7560: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
L_801F7564:
    // 0x801F7564: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801F7568: lhu         $t8, 0x7D52($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7D52);
    // 0x801F756C: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7570: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x801F7574: bne         $t9, $zero, L_801F758C
    if (ctx->r25 != 0) {
        // 0x801F7578: nop
    
            goto L_801F758C;
    }
    // 0x801F7578: nop

    // 0x801F757C: lhu         $t0, 0x2E3B($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X2E3B);
    // 0x801F7580: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801F7584: bne         $t0, $at, L_801F75A4
    if (ctx->r8 != ctx->r1) {
        // 0x801F7588: nop
    
            goto L_801F75A4;
    }
    // 0x801F7588: nop

L_801F758C:
    // 0x801F758C: jal         0x80004910
    // 0x801F7590: nop

    func_80004910_5510(rdram, ctx);
        goto after_3;
    // 0x801F7590: nop

    after_3:
    // 0x801F7594: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F7598: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F759C: jal         0x801FA128
    // 0x801F75A0: sb          $t1, 0x71BC($at)
    MEM_B(0X71BC, ctx->r1) = ctx->r9;
    func_801FA128_5B6038(rdram, ctx);
        goto after_4;
    // 0x801F75A0: sb          $t1, 0x71BC($at)
    MEM_B(0X71BC, ctx->r1) = ctx->r9;
    after_4:
L_801F75A4:
    // 0x801F75A4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F75A8: jal         0x8003521C
    // 0x801F75AC: addiu       $a0, $a0, 0x75C0
    ctx->r4 = ADD32(ctx->r4, 0X75C0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F75AC: addiu       $a0, $a0, 0x75C0
    ctx->r4 = ADD32(ctx->r4, 0X75C0);
    after_5:
    // 0x801F75B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F75B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F75B8: jr          $ra
    // 0x801F75BC: nop

    TRACE_RETURN()
    return;
    // 0x801F75BC: nop

;}
RECOMP_FUNC void func_801EB86C_5A777C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB86C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB874: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB878: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB87C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB880: jal         0x801EB898
    // 0x801EB884: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EB898_5A77A8(rdram, ctx);
        goto after_0;
    // 0x801EB884: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801EB888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB890: jr          $ra
    // 0x801EB894: nop

    TRACE_RETURN()
    return;
    // 0x801EB894: nop

;}
RECOMP_FUNC void func_801EF1A0_5AB0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF1A0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EF1A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EF1A8: lwc1        $f0, -0x4148($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4148);
    // 0x801EF1AC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801EF1B0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801EF1B4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801EF1B8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801EF1BC: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EF1C0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EF1C4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EF1C8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EF1CC: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801EF1D0: addiu       $a1, $a1, 0x420
    ctx->r5 = ADD32(ctx->r5, 0X420);
    // 0x801EF1D4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801EF1D8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EF1DC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801EF1E0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EF1E4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801EF1E8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EF1EC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EF1F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EF1F4: addiu       $v0, $s1, 0xC8
    ctx->r2 = ADD32(ctx->r17, 0XC8);
    // 0x801EF1F8: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x801EF1FC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EF200: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801EF204: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x801EF208: addiu       $t8, $zero, 0x152
    ctx->r24 = ADD32(0, 0X152);
    // 0x801EF20C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EF210: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x801EF214: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801EF218: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801EF21C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801EF220: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EF224: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x801EF228: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801EF22C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801EF230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF234: jal         0x80034680
    // 0x801EF238: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EF238: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801EF23C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EF240: addiu       $a2, $a2, 0x4E30
    ctx->r6 = ADD32(ctx->r6, 0X4E30);
    // 0x801EF244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF248: jal         0x801E8820
    // 0x801EF24C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801EF24C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801EF250: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x801EF254: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801EF258: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801EF25C: lbu         $t0, 0x90($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X90);
    // 0x801EF260: addiu       $v0, $s1, 0xC4
    ctx->r2 = ADD32(ctx->r17, 0XC4);
    // 0x801EF264: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801EF268: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801EF26C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801EF270: lw          $t2, -0x2DE0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2DE0);
    // 0x801EF274: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x801EF278: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801EF27C: sw          $t2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r10;
    // 0x801EF280: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x801EF284: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801EF288: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801EF28C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801EF290: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801EF294: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801EF298: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EF29C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF2A0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x801EF2A4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EF2A8: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EF2AC: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801EF2B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EF2B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF2B8: jal         0x801DC554
    // 0x801EF2BC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EF2BC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_2:
    // 0x801EF2C0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EF2C4: lwc1        $f16, 0x6C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EF2C8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EF2CC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801EF2D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801EF2D4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EF2D8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801EF2DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EF2E0: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801EF2E4: lwc1        $f6, 0x70($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EF2E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801EF2EC: addiu       $a1, $s1, 0x6C
    ctx->r5 = ADD32(ctx->r17, 0X6C);
    // 0x801EF2F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EF2F4: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x801EF2F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF2FC: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801EF300: lwc1        $f16, 0x74($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EF304: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801EF308: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801EF30C: lwc1        $f4, 0x6C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801EF310: lwc1        $f16, 0x70($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801EF314: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EF318: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801EF31C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801EF320: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EF324: lwc1        $f8, 0x74($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EF328: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801EF32C: swc1        $f10, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f10.u32l;
    // 0x801EF330: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801EF334: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801EF338: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801EF33C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EF340: swc1        $f6, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f6.u32l;
    // 0x801EF344: swc1        $f18, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f18.u32l;
    // 0x801EF348: jal         0x8001DB04
    // 0x801EF34C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801EF34C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x801EF350: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801EF354: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801EF358: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801EF35C: jr          $ra
    // 0x801EF360: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801EF360: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801EE824_5AA734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE824: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EE828: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EE82C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EE830: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EE834: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801EE838: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EE83C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE840: jal         0x801EE8D8
    // 0x801EE844: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_801EE8D8_5AA7E8(rdram, ctx);
        goto after_0;
    // 0x801EE844: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_0:
    // 0x801EE848: bne         $v0, $zero, L_801EE8C4
    if (ctx->r2 != 0) {
        // 0x801EE84C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EE8C4;
    }
    // 0x801EE84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE850: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x801EE854: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801EE858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EE85C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EE860: jal         0x801EE980
    // 0x801EE864: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801EE980_5AA890(rdram, ctx);
        goto after_1;
    // 0x801EE864: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x801EE868: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EE86C: addiu       $a1, $a1, -0x910
    ctx->r5 = ADD32(ctx->r5, -0X910);
    // 0x801EE870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE874: jal         0x80034E08
    // 0x801EE878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801EE878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801EE87C: beq         $v0, $zero, L_801EE8C4
    if (ctx->r2 == 0) {
        // 0x801EE880: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EE8C4;
    }
    // 0x801EE880: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EE884: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EE888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EE88C: jal         0x801EE4AC
    // 0x801EE890: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_3;
    // 0x801EE890: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x801EE894: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801EE898: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EE89C: jal         0x80035EEC
    // 0x801EE8A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801EE8A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x801EE8A4: bne         $v0, $zero, L_801EE8B8
    if (ctx->r2 != 0) {
        // 0x801EE8A8: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_801EE8B8;
    }
    // 0x801EE8A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801EE8AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EE8B0: b           L_801EE8C4
    // 0x801EE8B4: sb          $t7, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r15;
        goto L_801EE8C4;
    // 0x801EE8B4: sb          $t7, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r15;
L_801EE8B8:
    // 0x801EE8B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801EE8BC: jal         0x801EEBBC
    // 0x801EE8C0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_801EEBBC_5AAACC(rdram, ctx);
        goto after_5;
    // 0x801EE8C0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_5:
L_801EE8C4:
    // 0x801EE8C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EE8C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EE8CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EE8D0: jr          $ra
    // 0x801EE8D4: nop

    TRACE_RETURN()
    return;
    // 0x801EE8D4: nop

;}
RECOMP_FUNC void func_801EE750_5AA660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EE75C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801EE760: jal         0x801EE688
    // 0x801EE764: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801EE688_5AA598(rdram, ctx);
        goto after_0;
    // 0x801EE764: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801EE768: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801EE76C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EE770: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801EE774: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801EE778: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801EE77C: lw          $t8, 0x4B78($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4B78);
    // 0x801EE780: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x801EE784: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x801EE788: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    // 0x801EE78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE794: jr          $ra
    // 0x801EE798: nop

    TRACE_RETURN()
    return;
    // 0x801EE798: nop

;}
RECOMP_FUNC void func_801DFA1C_59B92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFA1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFA20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DFA24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DFA28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DFA2C: lhu         $t6, 0x98($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X98);
    // 0x801DFA30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801DFA34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DFA38: bne         $t6, $zero, L_801DFA7C
    if (ctx->r14 != 0) {
        // 0x801DFA3C: ori         $at, $at, 0x8000
        ctx->r1 = ctx->r1 | 0X8000;
            goto L_801DFA7C;
    }
    // 0x801DFA3C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DFA40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DFA44: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x801DFA48: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801DFA4C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801DFA50: jal         0x801E55D4
    // 0x801DFA54: nop

    func_801E55D4_5A14E4(rdram, ctx);
        goto after_0;
    // 0x801DFA54: nop

    after_0:
    // 0x801DFA58: jal         0x801E3324
    // 0x801DFA5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801DFA5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DFA60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFA64: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DFA68: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DFA6C: jal         0x801DAC7C
    // 0x801DFA70: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801DFA70: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801DFA74: b           L_801DFBB4
    // 0x801DFA78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFBB4;
    // 0x801DFA78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFA7C:
    // 0x801DFA7C: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
    // 0x801DFA80: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x801DFA84: addiu       $t0, $t0, -0x3340
    ctx->r8 = ADD32(ctx->r8, -0X3340);
    // 0x801DFA88: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DFA8C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DFA90: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DFA94: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801DFA98: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801DFA9C: lhu         $t1, 0x30F4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X30F4);
    // 0x801DFAA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFAA4: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x801DFAA8: beql        $t2, $zero, L_801DFB04
    if (ctx->r10 == 0) {
        // 0x801DFAAC: lwc1        $f0, 0x30FC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
            goto L_801DFB04;
    }
    goto skip_0;
    // 0x801DFAAC: lwc1        $f0, 0x30FC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
    skip_0:
    // 0x801DFAB0: jal         0x801E307C
    // 0x801DFAB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_3;
    // 0x801DFAB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DFAB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DFABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFAC0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801DFAC4: jal         0x801DACDC
    // 0x801DFAC8: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DFAC8: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x801DFACC: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801DFAD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFAD4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFAD8: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801DFADC: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x801DFAE0: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x801DFAE4: lw          $a2, 0x4370($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4370);
    // 0x801DFAE8: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFAEC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x801DFAF0: jal         0x801E54E0
    // 0x801DFAF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_5;
    // 0x801DFAF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DFAF8: b           L_801DFBB4
    // 0x801DFAFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFBB4;
    // 0x801DFAFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFB00: lwc1        $f0, 0x30FC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
L_801DFB04:
    // 0x801DFB04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DFB08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFB0C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801DFB10: nop

    // 0x801DFB14: bc1fl       L_801DFB28
    if (!c1cs) {
        // 0x801DFB18: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801DFB28;
    }
    goto skip_1;
    // 0x801DFB18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x801DFB1C: b           L_801DFB28
    // 0x801DFB20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801DFB28;
    // 0x801DFB20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801DFB24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801DFB28:
    // 0x801DFB28: ldc1        $f8, -0x4E38($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4E38);
    // 0x801DFB2C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801DFB30: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801DFB34: nop

    // 0x801DFB38: bc1tl       L_801DFB8C
    if (c1cs) {
        // 0x801DFB3C: lbu         $v0, 0x60($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X60);
            goto L_801DFB8C;
    }
    goto skip_2;
    // 0x801DFB3C: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    skip_2:
    // 0x801DFB40: jal         0x801E3244
    // 0x801DFB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3244_59F154(rdram, ctx);
        goto after_6;
    // 0x801DFB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DFB48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFB4C: jal         0x801DACDC
    // 0x801DFB50: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801DFB50: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    after_7:
    // 0x801DFB54: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801DFB58: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFB5C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFB60: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801DFB64: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x801DFB68: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x801DFB6C: lw          $a2, 0x4380($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4380);
    // 0x801DFB70: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFB74: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x801DFB78: jal         0x801E54E0
    // 0x801DFB7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_8;
    // 0x801DFB7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801DFB80: b           L_801DFBB4
    // 0x801DFB84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFBB4;
    // 0x801DFB84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFB88: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
L_801DFB8C:
    // 0x801DFB8C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFB90: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFB94: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x801DFB98: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801DFB9C: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x801DFBA0: lw          $a2, 0x4360($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4360);
    // 0x801DFBA4: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFBA8: jal         0x801E54E0
    // 0x801DFBAC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_9;
    // 0x801DFBAC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    after_9:
    // 0x801DFBB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFBB4:
    // 0x801DFBB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DFBB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DFBBC: jr          $ra
    // 0x801DFBC0: nop

    TRACE_RETURN()
    return;
    // 0x801DFBC0: nop

;}
RECOMP_FUNC void func_801F6668_5B2578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F666C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6670: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F6678: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    // 0x801F667C: jal         0x801F6770
    // 0x801F6680: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F6680: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_0:
    // 0x801F6684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F668C: jr          $ra
    // 0x801F6690: nop

    TRACE_RETURN()
    return;
    // 0x801F6690: nop

;}
RECOMP_FUNC void func_801E1494_59D3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1494: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1498: jr          $ra
    // 0x801E149C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E149C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801CB58C_58749C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB58C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB594: jal         0x80004240
    // 0x801CB598: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801CB598: nop

    after_0:
    // 0x801CB59C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB5A0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB5A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB5AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB5B0: sb          $t6, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = ctx->r14;
    // 0x801CB5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB5BC: jr          $ra
    // 0x801CB5C0: nop

    TRACE_RETURN()
    return;
    // 0x801CB5C0: nop

;}
RECOMP_FUNC void func_801FA150_5B6060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FA154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FA15C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FA160: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FA164: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FA168: jal         0x801FA3FC
    // 0x801FA16C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_801FA3FC_5B630C(rdram, ctx);
        goto after_0;
    // 0x801FA16C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x801FA170: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA174: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FA178: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA17C: addiu       $a0, $a0, -0x5E64
    ctx->r4 = ADD32(ctx->r4, -0X5E64);
    // 0x801FA180: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x801FA184: jal         0x8003521C
    // 0x801FA188: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FA188: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    after_1:
    // 0x801FA18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FA190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FA194: jr          $ra
    // 0x801FA198: nop

    TRACE_RETURN()
    return;
    // 0x801FA198: nop

;}
RECOMP_FUNC void func_801EAE88_5A6D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAE88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EAE8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EAE90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EAE94: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801EAE98: lwc1        $f6, 0xAC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801EAE9C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EAEA0: lwc1        $f10, 0xA4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801EAEA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAEA8: lwc1        $f16, 0xB0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x801EAEAC: lwc1        $f6, 0xB4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x801EAEB0: lwc1        $f4, 0xA8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801EAEB4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x801EAEB8: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801EAEBC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EAEC0: lwc1        $f10, 0xA0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801EAEC4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EAEC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAECC: swc1        $f18, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f18.u32l;
    // 0x801EAED0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801EAED4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x801EAED8: swc1        $f8, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f8.u32l;
    // 0x801EAEDC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x801EAEE0: lwc1        $f16, 0xA4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801EAEE4: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x801EAEE8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801EAEEC: lwc1        $f18, 0xA8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801EAEF0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801EAEF4: lw          $a0, 0x5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C);
    // 0x801EAEF8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801EAEFC: jal         0x801EAF50
    // 0x801EAF00: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_801EAF50_5A6E60(rdram, ctx);
        goto after_0;
    // 0x801EAF00: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EAF04: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801EAF08: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801EAF0C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801EAF10: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EAF14: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAF18: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x801EAF1C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801EAF20: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EAF24: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EAF28: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x801EAF2C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801EAF30: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EAF34: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAF38: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x801EAF3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EAF40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EAF44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EAF48: jr          $ra
    // 0x801EAF4C: nop

    TRACE_RETURN()
    return;
    // 0x801EAF4C: nop

;}
RECOMP_FUNC void func_801E0708_59C618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E070C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E0710: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801E0714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E071C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0720: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E0724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E0728: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801E072C: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801E0730: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E0734: jal         0x801DD720
    // 0x801E0738: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E0738: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x801E073C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0740: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0744: jalr        $t9
    // 0x801E0748: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E0748: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E074C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0754: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0758: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E075C: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801E0760: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E0764: nop

    // 0x801E0768: bc1fl       L_801E0788
    if (!c1cs) {
        // 0x801E076C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0788;
    }
    goto skip_0;
    // 0x801E076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0770: jal         0x801E6F00
    // 0x801E0774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E6F00_5A2E10(rdram, ctx);
        goto after_2;
    // 0x801E0774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E0778: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E077C: jal         0x801DACDC
    // 0x801E0780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E0780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801E0784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0788:
    // 0x801E0788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E078C: jr          $ra
    // 0x801E0790: nop

    TRACE_RETURN()
    return;
    // 0x801E0790: nop

;}
RECOMP_FUNC void func_801DE32C_59A23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE334: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE338: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE33C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE340: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    // 0x801DE344: bne         $t6, $at, L_801DE35C
    if (ctx->r14 != ctx->r1) {
        // 0x801DE348: nop
    
            goto L_801DE35C;
    }
    // 0x801DE348: nop

    // 0x801DE34C: jal         0x801F5B9C
    // 0x801DE350: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801F5B9C_5B1AAC(rdram, ctx);
        goto after_0;
    // 0x801DE350: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801DE354: b           L_801DE368
    // 0x801DE358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DE368;
    // 0x801DE358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE35C:
    // 0x801DE35C: jal         0x801E4260
    // 0x801DE360: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    func_801E4260_5A0170(rdram, ctx);
        goto after_1;
    // 0x801DE360: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    after_1:
    // 0x801DE364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE368:
    // 0x801DE368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE36C: jr          $ra
    // 0x801DE370: nop

    TRACE_RETURN()
    return;
    // 0x801DE370: nop

;}
RECOMP_FUNC void func_801EBEAC_5A7DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBEAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBEB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBEB8: lui         $a2, 0x42FA
    ctx->r6 = S32(0X42FA << 16);
    // 0x801EBEBC: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x801EBEC0: ori         $a3, $a3, 0x428F
    ctx->r7 = ctx->r7 | 0X428F;
    // 0x801EBEC4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801EBEC8: jal         0x801EBF48
    // 0x801EBECC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801EBF48_5A7E58(rdram, ctx);
        goto after_0;
    // 0x801EBECC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x801EBED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBED8: jr          $ra
    // 0x801EBEDC: nop

    TRACE_RETURN()
    return;
    // 0x801EBEDC: nop

;}
RECOMP_FUNC void func_801F6B34_5B2A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F6B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F6B40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F6B44: jal         0x801E7F50
    // 0x801F6B48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6B48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6B50: jal         0x801DD720
    // 0x801F6B54: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801DD720_599630(rdram, ctx);
        goto after_1;
    // 0x801F6B54: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x801F6B58: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801F6B5C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F6B60: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F6B64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F6B68: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801F6B6C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801F6B70: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x801F6B74: addiu       $t9, $t9, -0x3340
    ctx->r25 = ADD32(ctx->r25, -0X3340);
    // 0x801F6B78: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801F6B7C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801F6B80: lhu         $t0, 0x30F4($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X30F4);
    // 0x801F6B84: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F6B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6B8C: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x801F6B90: beql        $t1, $zero, L_801F6BAC
    if (ctx->r9 == 0) {
        // 0x801F6B94: lhu         $t3, 0x30F2($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30F2);
            goto L_801F6BAC;
    }
    goto skip_0;
    // 0x801F6B94: lhu         $t3, 0x30F2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30F2);
    skip_0:
    // 0x801F6B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F6B9C: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6BA0: b           L_801F6BDC
    // 0x801F6BA4: swc1        $f4, 0xAC($t2)
    MEM_W(0XAC, ctx->r10) = ctx->f4.u32l;
        goto L_801F6BDC;
    // 0x801F6BA4: swc1        $f4, 0xAC($t2)
    MEM_W(0XAC, ctx->r10) = ctx->f4.u32l;
    // 0x801F6BA8: lhu         $t3, 0x30F2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30F2);
L_801F6BAC:
    // 0x801F6BAC: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x801F6BB0: beq         $t4, $zero, L_801F6BDC
    if (ctx->r12 == 0) {
        // 0x801F6BB4: nop
    
            goto L_801F6BDC;
    }
    // 0x801F6BB4: nop

    // 0x801F6BB8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6BBC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801F6BC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F6BC4: lwc1        $f6, 0xAC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801F6BC8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801F6BCC: nop

    // 0x801F6BD0: bc1f        L_801F6BDC
    if (!c1cs) {
        // 0x801F6BD4: nop
    
            goto L_801F6BDC;
    }
    // 0x801F6BD4: nop

    // 0x801F6BD8: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
L_801F6BDC:
    // 0x801F6BDC: jal         0x801F7140
    // 0x801F6BE0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801F7140_5B3050(rdram, ctx);
        goto after_2;
    // 0x801F6BE0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x801F6BE4: lbu         $t5, 0x90($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X90);
    // 0x801F6BE8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801F6BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6BF0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801F6BF4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x801F6BF8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801F6BFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801F6C00: lhu         $t7, 0x7DB2($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7DB2);
    // 0x801F6C04: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x801F6C08: beql        $t8, $zero, L_801F6C1C
    if (ctx->r24 == 0) {
        // 0x801F6C0C: lui         $a1, 0x3DCC
        ctx->r5 = S32(0X3DCC << 16);
            goto L_801F6C1C;
    }
    goto skip_1;
    // 0x801F6C0C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    skip_1:
    // 0x801F6C10: jal         0x801DACDC
    // 0x801F6C14: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F6C14: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_3:
    // 0x801F6C18: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
L_801F6C1C:
    // 0x801F6C1C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F6C20: jal         0x801F70B0
    // 0x801F6C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F70B0_5B2FC0(rdram, ctx);
        goto after_4;
    // 0x801F6C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F6C28: beq         $v0, $zero, L_801F6C44
    if (ctx->r2 == 0) {
        // 0x801F6C2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6C44;
    }
    // 0x801F6C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6C30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F6C34: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801F6C38: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
    // 0x801F6C3C: jal         0x801DACDC
    // 0x801F6C40: swc1        $f8, 0xAC($t9)
    MEM_W(0XAC, ctx->r25) = ctx->f8.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801F6C40: swc1        $f8, 0xAC($t9)
    MEM_W(0XAC, ctx->r25) = ctx->f8.u32l;
    after_5:
L_801F6C44:
    // 0x801F6C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6C48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6C4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F6C50: jr          $ra
    // 0x801F6C54: nop

    TRACE_RETURN()
    return;
    // 0x801F6C54: nop

;}
RECOMP_FUNC void func_801EDC08_5A9B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDC08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EDC0C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801EDC10: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x801EDC14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EDC18: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801EDC1C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EDC20: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801EDC24: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x801EDC28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x801EDC2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801EDC30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801EDC34: jal         0x801E8C44
    // 0x801EDC38: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EDC38: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_0:
    // 0x801EDC3C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801EDC40: beq         $at, $zero, L_801EDCBC
    if (ctx->r1 == 0) {
        // 0x801EDC44: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801EDCBC;
    }
    // 0x801EDC44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801EDC48: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EDC4C: addiu       $t7, $t7, 0x4868
    ctx->r15 = ADD32(ctx->r15, 0X4868);
    // 0x801EDC50: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x801EDC54: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x801EDC58: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x801EDC5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801EDC60:
    // 0x801EDC60: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x801EDC64: jal         0x80034E08
    // 0x801EDC68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801EDC68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EDC6C: beq         $v0, $zero, L_801EDCBC
    if (ctx->r2 == 0) {
        // 0x801EDC70: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801EDCBC;
    }
    // 0x801EDC70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801EDC74: sll         $a1, $s5, 16
    ctx->r5 = S32(ctx->r21 << 16);
    // 0x801EDC78: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801EDC7C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801EDC80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EDC84: jal         0x80035EEC
    // 0x801EDC88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801EDC88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x801EDC8C: bne         $v0, $zero, L_801EDCA0
    if (ctx->r2 != 0) {
        // 0x801EDC90: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801EDCA0;
    }
    // 0x801EDC90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EDC94: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801EDC98: b           L_801EDCBC
    // 0x801EDC9C: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
        goto L_801EDCBC;
    // 0x801EDC9C: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
L_801EDCA0:
    // 0x801EDCA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EDCA4: jal         0x801EE4AC
    // 0x801EDCA8: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_3;
    // 0x801EDCA8: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_3:
    // 0x801EDCAC: sb          $s0, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r16;
    // 0x801EDCB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801EDCB4: bnel        $s0, $s5, L_801EDC60
    if (ctx->r16 != ctx->r21) {
        // 0x801EDCB8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EDC60;
    }
    goto skip_0;
    // 0x801EDCB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
L_801EDCBC:
    // 0x801EDCBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801EDCC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801EDCC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801EDCC8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801EDCCC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801EDCD0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x801EDCD4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x801EDCD8: jr          $ra
    // 0x801EDCDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801EDCDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801E0DF8_59CD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0E00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0E04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E0E08: jal         0x801DD720
    // 0x801E0E0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E0E0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x801E0E10: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0E14: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0E18: jalr        $t9
    // 0x801E0E1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E0E1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E0E20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0E24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0E28: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0E2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E0E30: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E0E34: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0E38: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E0E3C: nop

    // 0x801E0E40: bc1fl       L_801E0E54
    if (!c1cs) {
        // 0x801E0E44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0E54;
    }
    goto skip_0;
    // 0x801E0E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0E48: jal         0x801DACDC
    // 0x801E0E4C: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0E4C: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    after_2:
    // 0x801E0E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0E54:
    // 0x801E0E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0E58: jr          $ra
    // 0x801E0E5C: nop

    TRACE_RETURN()
    return;
    // 0x801E0E5C: nop

;}
RECOMP_FUNC void func_801D2F64_58EE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2F64: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801D2F68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D2F6C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D2F70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D2F74: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x801D2F78: lhu         $a0, 0x6A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6A);
    // 0x801D2F7C: jal         0x80003D88
    // 0x801D2F80: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80003D88_4988(rdram, ctx);
        goto after_0;
    // 0x801D2F80: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x801D2F84: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x801D2F88: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D2F8C: jal         0x80003D28
    // 0x801D2F90: lhu         $a0, 0x6E($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X6E);
    func_80003D28_4928(rdram, ctx);
        goto after_1;
    // 0x801D2F90: lhu         $a0, 0x6E($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X6E);
    after_1:
    // 0x801D2F94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2F98: lwc1        $f4, -0x2E34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D2F9C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2FA0: addiu       $v1, $v1, -0x2E30
    ctx->r3 = ADD32(ctx->r3, -0X2E30);
    // 0x801D2FA4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D2FA8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D2FAC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D2FB0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2FB4: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D2FB8: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x801D2FBC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801D2FC0: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D2FC4: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x801D2FC8: nop

    // 0x801D2FCC: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D2FD0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x801D2FD4: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x801D2FD8: jal         0x80003CC8
    // 0x801D2FDC: lhu         $a0, 0x6E($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X6E);
    func_80003CC8_48C8(rdram, ctx);
        goto after_2;
    // 0x801D2FDC: lhu         $a0, 0x6E($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X6E);
    after_2:
    // 0x801D2FE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2FE4: lwc1        $f8, -0x2E34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D2FE8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D2FEC: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801D2FF0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801D2FF4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801D2FF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2FFC: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D3000: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801D3004: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x801D3008: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801D300C: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801D3010: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801D3014: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801D3018: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x801D301C: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801D3020: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x801D3024: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801D3028: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x801D302C: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801D3030: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x801D3034: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x801D3038: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D303C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D3040: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D3044: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D3048: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D304C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801D3050: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D3054: jal         0x8002C9D4
    // 0x801D3058: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_3;
    // 0x801D3058: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x801D305C: lh          $t2, 0x80($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X80);
    // 0x801D3060: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3064: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D3068: bne         $t2, $at, L_801D30F8
    if (ctx->r10 != ctx->r1) {
        // 0x801D306C: addiu       $v0, $v0, -0x2E40
        ctx->r2 = ADD32(ctx->r2, -0X2E40);
            goto L_801D30F8;
    }
    // 0x801D306C: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D3070: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D3074: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3078: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D307C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D3080: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D3084: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x801D3088: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D308C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D3090: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D3094: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D3098: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D309C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D30A0: lwc1        $f6, -0x2E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D30A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D30A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D30AC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D30B0: add.d       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f10.d + ctx->f12.d;
    // 0x801D30B4: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x801D30B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D30BC: sub.d       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f12.d - ctx->f10.d;
    // 0x801D30C0: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x801D30C4: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x801D30C8: nop

    // 0x801D30CC: bc1fl       L_801D30FC
    if (!c1cs) {
        // 0x801D30D0: lwc1        $f6, 0x0($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
            goto L_801D30FC;
    }
    goto skip_0;
    // 0x801D30D0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x801D30D4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D30D8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D30DC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D30E0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D30E4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D30E8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x801D30EC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D30F0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x801D30F4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_801D30F8:
    // 0x801D30F8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
L_801D30FC:
    // 0x801D30FC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D3100: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D3104: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D3108: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x801D310C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D3110: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D3114: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x801D3118: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x801D311C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D3120: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D3124: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801D3128: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D312C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D3130: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x801D3134: jr          $ra
    // 0x801D3138: nop

    TRACE_RETURN()
    return;
    // 0x801D3138: nop

;}
RECOMP_FUNC void func_801F60F4_5B2004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F60F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F60F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F60FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6100: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F6104: jal         0x801F519C
    // 0x801F6108: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_801F519C_5B10AC(rdram, ctx);
        goto after_0;
    // 0x801F6108: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x801F610C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6114: jr          $ra
    // 0x801F6118: nop

    TRACE_RETURN()
    return;
    // 0x801F6118: nop

;}
RECOMP_FUNC void func_801D9D74_595C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9D7C: lhu         $v0, 0x96($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X96);
    // 0x801D9D80: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
    // 0x801D9D84: beq         $a1, $v0, L_801D9DA8
    if (ctx->r5 == ctx->r2) {
        // 0x801D9D88: nop
    
            goto L_801D9DA8;
    }
    // 0x801D9D88: nop

    // 0x801D9D8C: lhu         $v1, 0x98($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X98);
    // 0x801D9D90: beq         $a1, $v1, L_801D9DA8
    if (ctx->r5 == ctx->r3) {
        // 0x801D9D94: addiu       $a1, $zero, 0x92
        ctx->r5 = ADD32(0, 0X92);
            goto L_801D9DA8;
    }
    // 0x801D9D94: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x801D9D98: beq         $a1, $v0, L_801D9DA8
    if (ctx->r5 == ctx->r2) {
        // 0x801D9D9C: nop
    
            goto L_801D9DA8;
    }
    // 0x801D9D9C: nop

    // 0x801D9DA0: bnel        $a1, $v1, L_801D9E18
    if (ctx->r5 != ctx->r3) {
        // 0x801D9DA4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9E18;
    }
    goto skip_0;
    // 0x801D9DA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_801D9DA8:
    // 0x801D9DA8: jal         0x801E7E18
    // 0x801D9DAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7E18_5A3D28(rdram, ctx);
        goto after_0;
    // 0x801D9DAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D9DB0: bne         $v0, $zero, L_801D9E14
    if (ctx->r2 != 0) {
        // 0x801D9DB4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801D9E14;
    }
    // 0x801D9DB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D9DB8: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801D9DBC: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x801D9DC0: beq         $v0, $at, L_801D9E14
    if (ctx->r2 == ctx->r1) {
        // 0x801D9DC4: addiu       $at, $zero, 0x8F
        ctx->r1 = ADD32(0, 0X8F);
            goto L_801D9E14;
    }
    // 0x801D9DC4: addiu       $at, $zero, 0x8F
    ctx->r1 = ADD32(0, 0X8F);
    // 0x801D9DC8: beql        $v0, $at, L_801D9E18
    if (ctx->r2 == ctx->r1) {
        // 0x801D9DCC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9E18;
    }
    goto skip_1;
    // 0x801D9DCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801D9DD0: lbu         $t6, 0xD4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD4);
    // 0x801D9DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9DD8: beq         $t6, $zero, L_801D9DF0
    if (ctx->r14 == 0) {
        // 0x801D9DDC: nop
    
            goto L_801D9DF0;
    }
    // 0x801D9DDC: nop

    // 0x801D9DE0: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801D9DE4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x801D9DE8: beql        $t8, $zero, L_801D9E18
    if (ctx->r24 == 0) {
        // 0x801D9DEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9E18;
    }
    goto skip_2;
    // 0x801D9DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_801D9DF0:
    // 0x801D9DF0: jal         0x801DA708
    // 0x801D9DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DA708_596618(rdram, ctx);
        goto after_1;
    // 0x801D9DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D9DF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D9DFC: jal         0x801DA924
    // 0x801D9E00: lh          $a1, 0x94($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X94);
    func_801DA924_596834(rdram, ctx);
        goto after_2;
    // 0x801D9E00: lh          $a1, 0x94($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X94);
    after_2:
    // 0x801D9E04: jal         0x80038BC8
    // 0x801D9E08: addiu       $a0, $zero, 0x2B3
    ctx->r4 = ADD32(0, 0X2B3);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801D9E08: addiu       $a0, $zero, 0x2B3
    ctx->r4 = ADD32(0, 0X2B3);
    after_3:
    // 0x801D9E0C: b           L_801D9E18
    // 0x801D9E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D9E18;
    // 0x801D9E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9E14:
    // 0x801D9E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D9E18:
    // 0x801D9E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9E20: jr          $ra
    // 0x801D9E24: nop

    TRACE_RETURN()
    return;
    // 0x801D9E24: nop

;}
RECOMP_FUNC void func_801DA67C_59658C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA67C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DA680: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801DA684: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801DA688: bne         $t6, $at, L_801DA6C8
    if (ctx->r14 != ctx->r1) {
        // 0x801DA68C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_801DA6C8;
    }
    // 0x801DA68C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801DA690: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DA694: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x801DA698: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x801DA69C: bnel        $t7, $zero, L_801DA6B0
    if (ctx->r15 != 0) {
        // 0x801DA6A0: lw          $t8, 0x20($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X20);
            goto L_801DA6B0;
    }
    goto skip_0;
    // 0x801DA6A0: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x801DA6A4: jr          $ra
    // 0x801DA6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DA6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA6AC: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
L_801DA6B0:
    // 0x801DA6B0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801DA6B4: bgtz        $t9, L_801DA6FC
    if (SIGNED(ctx->r25) > 0) {
        // 0x801DA6B8: sw          $t9, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->r25;
            goto L_801DA6FC;
    }
    // 0x801DA6B8: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
    // 0x801DA6BC: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x801DA6C0: b           L_801DA6FC
    // 0x801DA6C4: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
        goto L_801DA6FC;
    // 0x801DA6C4: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
L_801DA6C8:
    // 0x801DA6C8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DA6CC: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x801DA6D0: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x801DA6D4: bnel        $t1, $zero, L_801DA6E8
    if (ctx->r9 != 0) {
        // 0x801DA6D8: lw          $t2, 0x28($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X28);
            goto L_801DA6E8;
    }
    goto skip_1;
    // 0x801DA6D8: lw          $t2, 0x28($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X28);
    skip_1:
    // 0x801DA6DC: jr          $ra
    // 0x801DA6E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DA6E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA6E4: lw          $t2, 0x28($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X28);
L_801DA6E8:
    // 0x801DA6E8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801DA6EC: bgtz        $t3, L_801DA6FC
    if (SIGNED(ctx->r11) > 0) {
        // 0x801DA6F0: sw          $t3, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->r11;
            goto L_801DA6FC;
    }
    // 0x801DA6F0: sw          $t3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r11;
    // 0x801DA6F4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x801DA6F8: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
L_801DA6FC:
    // 0x801DA6FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DA700: jr          $ra
    // 0x801DA704: nop

    TRACE_RETURN()
    return;
    // 0x801DA704: nop

;}
RECOMP_FUNC void func_801CC454_588364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC454: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801CC458: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801CC45C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801CC460: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x801CC464: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x801CC468: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x801CC46C: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x801CC470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CC474: lhu         $t8, -0x39A0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X39A0);
    // 0x801CC478: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801CC47C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801CC480: sh          $t8, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r24;
    // 0x801CC484: lhu         $t9, -0x3998($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3998);
    // 0x801CC488: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x801CC48C: lh          $v1, 0x52($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X52);
    // 0x801CC490: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801CC494: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x801CC498: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
    // 0x801CC49C: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
    // 0x801CC4A0: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801CC4A4: sb          $t0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r8;
    // 0x801CC4A8: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    // 0x801CC4AC: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x801CC4B0: sh          $t9, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r25;
    // 0x801CC4B4: sh          $v1, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r3;
    // 0x801CC4B8: jr          $ra
    // 0x801CC4BC: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x801CC4BC: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_801E0FF8_59CF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1004: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1008: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E100C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E1010: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E1014: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801E1018: jal         0x801E7B24
    // 0x801E101C: lbu         $a2, 0x43A3($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A3);
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E101C: lbu         $a2, 0x43A3($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A3);
    after_0:
    // 0x801E1020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1028: jr          $ra
    // 0x801E102C: nop

    TRACE_RETURN()
    return;
    // 0x801E102C: nop

;}
RECOMP_FUNC void func_801E6E98_5A2DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6E98: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E6E9C: addiu       $v1, $v1, 0x470C
    ctx->r3 = ADD32(ctx->r3, 0X470C);
    // 0x801E6EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6EA4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E6EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6EAC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E6EB0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801E6EB4: addiu       $a3, $a3, 0x4700
    ctx->r7 = ADD32(ctx->r7, 0X4700);
    // 0x801E6EB8: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x801E6EBC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801E6EC0: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E6EC4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801E6EC8: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x801E6ECC: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801E6ED0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E6ED4: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x801E6ED8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801E6EDC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6EE0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801E6EE4: sh          $zero, 0x36($t6)
    MEM_H(0X36, ctx->r14) = 0;
    // 0x801E6EE8: jal         0x801E7398
    // 0x801E6EEC: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_0;
    // 0x801E6EEC: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    after_0:
    // 0x801E6EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E6EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6EF8: jr          $ra
    // 0x801E6EFC: nop

    TRACE_RETURN()
    return;
    // 0x801E6EFC: nop

;}
RECOMP_FUNC void func_801EFA18_5AB928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFA18: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801EFA1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EFA20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801EFA24: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801EFA28: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801EFA2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EFA30: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801EFA34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EFA38: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801EFA3C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801EFA40: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801EFA44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EFA48: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x801EFA4C: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x801EFA50: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801EFA54: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801EFA58: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801EFA5C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801EFA60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EFA64: jal         0x80033898
    // 0x801EFA68: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801EFA68: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x801EFA6C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801EFA70: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801EFA74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801EFA78: swc1        $f6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f6.u32l;
    // 0x801EFA7C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801EFA80: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x801EFA84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFA88: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801EFA8C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801EFA90: sh          $t9, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r25;
    // 0x801EFA94: sh          $t0, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r8;
    // 0x801EFA98: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801EFA9C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EFAA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EFAA4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801EFAA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EFAAC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801EFAB0: jal         0x801EE228
    // 0x801EFAB4: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    func_801EE228_5AA138(rdram, ctx);
        goto after_1;
    // 0x801EFAB4: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    after_1:
    // 0x801EFAB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801EFABC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801EFAC0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801EFAC4: jr          $ra
    // 0x801EFAC8: nop

    TRACE_RETURN()
    return;
    // 0x801EFAC8: nop

;}
RECOMP_FUNC void func_801EE7F8_5AA708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE7F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE800: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EE804: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EE808: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EE80C: jal         0x801EE824
    // 0x801EE810: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EE824_5AA734(rdram, ctx);
        goto after_0;
    // 0x801EE810: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801EE814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE81C: jr          $ra
    // 0x801EE820: nop

    TRACE_RETURN()
    return;
    // 0x801EE820: nop

;}
RECOMP_FUNC void func_801CB5C4_5874D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB5C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CB5C8: jr          $ra
    // 0x801CB5CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CB5CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D1EC8_58DDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1EC8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D1ECC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801D1ED0: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801D1ED4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1EDC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801D1EE0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801D1EE4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801D1EE8: sh          $zero, -0x3468($at)
    MEM_H(-0X3468, ctx->r1) = 0;
    // 0x801D1EEC: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x801D1EF0: lbu         $t6, 0x2E21($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E21);
    // 0x801D1EF4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D1EF8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D1EFC: beq         $t6, $zero, L_801D1F40
    if (ctx->r14 == 0) {
        // 0x801D1F00: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801D1F40;
    }
    // 0x801D1F00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1F04: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D1F08: addiu       $t7, $t7, -0x34A0
    ctx->r15 = ADD32(ctx->r15, -0X34A0);
    // 0x801D1F0C: addiu       $t0, $t7, 0x48
    ctx->r8 = ADD32(ctx->r15, 0X48);
    // 0x801D1F10: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
L_801D1F14:
    // 0x801D1F14: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D1F18: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D1F1C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801D1F20: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x801D1F24: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801D1F28: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x801D1F2C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801D1F30: bne         $t7, $t0, L_801D1F14
    if (ctx->r15 != ctx->r8) {
        // 0x801D1F34: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_801D1F14;
    }
    // 0x801D1F34: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x801D1F38: b           L_801D23B0
    // 0x801D1F3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_801D23B0;
    // 0x801D1F3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D1F40:
    // 0x801D1F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1F44: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x801D1F48: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    // 0x801D1F4C: nop

    // 0x801D1F50: bc1f        L_801D1F94
    if (!c1cs) {
        // 0x801D1F54: nop
    
            goto L_801D1F94;
    }
    // 0x801D1F54: nop

    // 0x801D1F58: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x801D1F5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D1F60: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D1F64: beq         $v0, $at, L_801D1F78
    if (ctx->r2 == ctx->r1) {
        // 0x801D1F68: lwc1        $f14, 0x5C($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D1F78;
    }
    // 0x801D1F68: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D1F6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D1F70: bne         $v0, $at, L_801D1F94
    if (ctx->r2 != ctx->r1) {
        // 0x801D1F74: nop
    
            goto L_801D1F94;
    }
    // 0x801D1F74: nop

L_801D1F78:
    // 0x801D1F78: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801D1F7C: jal         0x8021A67C
    // 0x801D1F80: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    func_8021A67C_5D5B4C(rdram, ctx);
        goto after_0;
    // 0x801D1F80: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D1F84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1F88: sw          $v0, -0x3414($at)
    MEM_W(-0X3414, ctx->r1) = ctx->r2;
    // 0x801D1F8C: bne         $v0, $zero, L_801D1FD0
    if (ctx->r2 != 0) {
        // 0x801D1F90: lw          $a1, 0x50($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X50);
            goto L_801D1FD0;
    }
    // 0x801D1F90: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
L_801D1F94:
    // 0x801D1F94: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801D1F98: addiu       $t2, $t2, -0x34A0
    ctx->r10 = ADD32(ctx->r10, -0X34A0);
    // 0x801D1F9C: addiu       $t4, $t2, 0x48
    ctx->r12 = ADD32(ctx->r10, 0X48);
    // 0x801D1FA0: or          $t5, $a1, $zero
    ctx->r13 = ctx->r5 | 0;
L_801D1FA4:
    // 0x801D1FA4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801D1FA8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x801D1FAC: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801D1FB0: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x801D1FB4: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x801D1FB8: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x801D1FBC: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x801D1FC0: bne         $t2, $t4, L_801D1FA4
    if (ctx->r10 != ctx->r12) {
        // 0x801D1FC4: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_801D1FA4;
    }
    // 0x801D1FC4: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x801D1FC8: b           L_801D23B0
    // 0x801D1FCC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_801D23B0;
    // 0x801D1FCC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D1FD0:
    // 0x801D1FD0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D1FD4: lw          $t6, -0x3414($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3414);
    // 0x801D1FD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1FDC: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D1FE0: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x801D1FE4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D1FE8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D1FEC: sw          $t9, -0x3418($at)
    MEM_W(-0X3418, ctx->r1) = ctx->r25;
    // 0x801D1FF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1FF4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D1FF8: swc1        $f4, -0x3458($at)
    MEM_W(-0X3458, ctx->r1) = ctx->f4.u32l;
    // 0x801D1FFC: swc1        $f10, -0x3454($at)
    MEM_W(-0X3454, ctx->r1) = ctx->f10.u32l;
    // 0x801D2000: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2004: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D2008: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D200C: swc1        $f8, -0x3450($at)
    MEM_W(-0X3450, ctx->r1) = ctx->f8.u32l;
    // 0x801D2010: swc1        $f6, -0x344C($at)
    MEM_W(-0X344C, ctx->r1) = ctx->f6.u32l;
    // 0x801D2014: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D2018: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D201C: swc1        $f0, -0x3448($at)
    MEM_W(-0X3448, ctx->r1) = ctx->f0.u32l;
    // 0x801D2020: swc1        $f2, -0x3444($at)
    MEM_W(-0X3444, ctx->r1) = ctx->f2.u32l;
    // 0x801D2024: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x801D2028: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x801D202C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2030: swc1        $f10, -0x3440($at)
    MEM_W(-0X3440, ctx->r1) = ctx->f10.u32l;
    // 0x801D2034: swc1        $f8, -0x343C($at)
    MEM_W(-0X343C, ctx->r1) = ctx->f8.u32l;
    // 0x801D2038: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x801D203C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2040: swc1        $f6, -0x3438($at)
    MEM_W(-0X3438, ctx->r1) = ctx->f6.u32l;
    // 0x801D2044: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x801D2048: jal         0x8001D394
    // 0x801D204C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801D204C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    after_1:
    // 0x801D2050: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D2054: lw          $t8, -0x3418($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3418);
    // 0x801D2058: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D205C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D2060: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801D2064: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D2068: lw          $t0, -0x3414($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3414);
    // 0x801D206C: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D2070: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D2074: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801D2078: lwc1        $f10, 0x10($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X10);
    // 0x801D207C: lbu         $t7, 0x99($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X99);
    // 0x801D2080: sub.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801D2084: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801D2088: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801D208C: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D2090: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D2094: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D2098: addiu       $t1, $t1, -0x34A0
    ctx->r9 = ADD32(ctx->r9, -0X34A0);
    // 0x801D209C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D20A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D20A4: addiu       $t4, $t1, 0x48
    ctx->r12 = ADD32(ctx->r9, 0X48);
    // 0x801D20A8: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x801D20AC: bgez        $t7, L_801D20C0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801D20B0: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801D20C0;
    }
    // 0x801D20B0: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D20B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D20B8: nop

    // 0x801D20BC: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_801D20C0:
    // 0x801D20C0: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D20C4: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D20C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D20CC: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D20D0: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D20D4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D20D8: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D20DC: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801D20E0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D20E4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801D20E8: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801D20EC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D20F0: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D20F4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x801D20F8: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D20FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D2100: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D2104: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D2108: mul.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801D210C: nop

    // 0x801D2110: mul.s       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D2114: nop

    // 0x801D2118: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D211C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801D2120: nop

    // 0x801D2124: bc1f        L_801D2158
    if (!c1cs) {
        // 0x801D2128: nop
    
            goto L_801D2158;
    }
    // 0x801D2128: nop

L_801D212C:
    // 0x801D212C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801D2130: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801D2134: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x801D2138: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x801D213C: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x801D2140: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x801D2144: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x801D2148: bne         $t1, $t4, L_801D212C
    if (ctx->r9 != ctx->r12) {
        // 0x801D214C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_801D212C;
    }
    // 0x801D214C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x801D2150: b           L_801D23B0
    // 0x801D2154: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_801D23B0;
    // 0x801D2154: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D2158:
    // 0x801D2158: sub.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x801D215C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D2160: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x801D2164: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2168: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D216C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801D2170: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801D2174: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x801D2178: nop

    // 0x801D217C: bc1fl       L_801D21A0
    if (!c1cs) {
        // 0x801D2180: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_801D21A0;
    }
    goto skip_0;
    // 0x801D2180: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    skip_0:
    // 0x801D2184: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x801D2188: ldc1        $f10, -0x5520($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5520);
    // 0x801D218C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801D2190: mul.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x801D2194: b           L_801D223C
    // 0x801D2198: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_801D223C;
    // 0x801D2198: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801D219C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
L_801D21A0:
    // 0x801D21A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D21A4: ldc1        $f6, -0x5518($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5518);
    // 0x801D21A8: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x801D21AC: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x801D21B0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801D21B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D21B8: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x801D21BC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801D21C0: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x801D21C4: nop

    // 0x801D21C8: bc1fl       L_801D2240
    if (!c1cs) {
        // 0x801D21CC: lwc1        $f8, 0x64($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
            goto L_801D2240;
    }
    goto skip_1;
    // 0x801D21CC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    skip_1:
    // 0x801D21D0: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x801D21D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D21D8: ldc1        $f4, -0x5510($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5510);
    // 0x801D21DC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D21E0: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x801D21E4: addiu       $t5, $t5, -0x34A0
    ctx->r13 = ADD32(ctx->r13, -0X34A0);
    // 0x801D21E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D21EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D21F0: mul.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x801D21F4: addiu       $t9, $t5, 0x48
    ctx->r25 = ADD32(ctx->r13, 0X48);
    // 0x801D21F8: or          $t8, $a1, $zero
    ctx->r24 = ctx->r5 | 0;
    // 0x801D21FC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x801D2200: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x801D2204: nop

    // 0x801D2208: bc1fl       L_801D2240
    if (!c1cs) {
        // 0x801D220C: lwc1        $f8, 0x64($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
            goto L_801D2240;
    }
    goto skip_2;
    // 0x801D220C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    skip_2:
L_801D2210:
    // 0x801D2210: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801D2214: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801D2218: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801D221C: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x801D2220: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x801D2224: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x801D2228: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x801D222C: bne         $t5, $t9, L_801D2210
    if (ctx->r13 != ctx->r25) {
        // 0x801D2230: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_801D2210;
    }
    // 0x801D2230: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x801D2234: b           L_801D23B0
    // 0x801D2238: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_801D23B0;
    // 0x801D2238: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D223C:
    // 0x801D223C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
L_801D2240:
    // 0x801D2240: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D2244: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D2248: mul.s       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x801D224C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2250: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D2254: mul.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x801D2258: addiu       $a0, $a0, -0x3434
    ctx->r4 = ADD32(ctx->r4, -0X3434);
    // 0x801D225C: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x801D2260: mul.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x801D2264: add.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x801D2268: add.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x801D226C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801D2270: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D2274: swc1        $f8, -0x3434($at)
    MEM_W(-0X3434, ctx->r1) = ctx->f8.u32l;
    // 0x801D2278: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x801D227C: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801D2280: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2284: swc1        $f10, -0x3430($at)
    MEM_W(-0X3430, ctx->r1) = ctx->f10.u32l;
    // 0x801D2288: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x801D228C: swc1        $f4, -0x342C($at)
    MEM_W(-0X342C, ctx->r1) = ctx->f4.u32l;
    // 0x801D2290: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2294: swc1        $f0, -0x3438($at)
    MEM_W(-0X3438, ctx->r1) = ctx->f0.u32l;
    // 0x801D2298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D229C: swc1        $f2, -0x3440($at)
    MEM_W(-0X3440, ctx->r1) = ctx->f2.u32l;
    // 0x801D22A0: jal         0x8001D394
    // 0x801D22A4: swc1        $f14, -0x343C($at)
    MEM_W(-0X343C, ctx->r1) = ctx->f14.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D22A4: swc1        $f14, -0x343C($at)
    MEM_W(-0X343C, ctx->r1) = ctx->f14.u32l;
    after_2:
    // 0x801D22A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D22AC: lwc1        $f2, -0x3440($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3440);
    // 0x801D22B0: lwc1        $f14, -0x343C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X343C);
    // 0x801D22B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D22B8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D22BC: lwc1        $f16, -0x3438($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3438);
    // 0x801D22C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D22C4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D22C8: addiu       $t0, $zero, 0xF2
    ctx->r8 = ADD32(0, 0XF2);
    // 0x801D22CC: sh          $t0, -0x3422($at)
    MEM_H(-0X3422, ctx->r1) = ctx->r8;
    // 0x801D22D0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D22D4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D22D8: lh          $t3, -0x3468($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3468);
    // 0x801D22DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D22E0: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x801D22E4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D22E8: sh          $t7, -0x3420($at)
    MEM_H(-0X3420, ctx->r1) = ctx->r15;
    // 0x801D22EC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D22F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D22F4: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D22F8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801D22FC: addiu       $t9, $t9, -0x3458
    ctx->r25 = ADD32(ctx->r25, -0X3458);
    // 0x801D2300: bne         $t3, $at, L_801D2380
    if (ctx->r11 != ctx->r1) {
        // 0x801D2304: sqrt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
            goto L_801D2380;
    }
    // 0x801D2304: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x801D2308: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D230C: lwc1        $f2, -0x3488($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3488);
    // 0x801D2310: lwc1        $f14, -0x3484($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3484);
    // 0x801D2314: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2318: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D231C: lwc1        $f16, -0x3480($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3480);
    // 0x801D2320: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D2324: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D2328: addiu       $t4, $t4, -0x34A0
    ctx->r12 = ADD32(ctx->r12, -0X34A0);
    // 0x801D232C: addiu       $t2, $t4, 0x48
    ctx->r10 = ADD32(ctx->r12, 0X48);
    // 0x801D2330: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D2334: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x801D2338: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D233C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D2340: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D2344: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801D2348: nop

    // 0x801D234C: bc1fl       L_801D2384
    if (!c1cs) {
        // 0x801D2350: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_801D2384;
    }
    goto skip_3;
    // 0x801D2350: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    skip_3:
L_801D2354:
    // 0x801D2354: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D2358: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D235C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D2360: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801D2364: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x801D2368: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801D236C: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x801D2370: bne         $t4, $t2, L_801D2354
    if (ctx->r12 != ctx->r10) {
        // 0x801D2374: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801D2354;
    }
    // 0x801D2374: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801D2378: b           L_801D23B0
    // 0x801D237C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_801D23B0;
    // 0x801D237C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D2380:
    // 0x801D2380: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
L_801D2384:
    // 0x801D2384: addiu       $t8, $t9, 0x48
    ctx->r24 = ADD32(ctx->r25, 0X48);
L_801D2388:
    // 0x801D2388: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801D238C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801D2390: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801D2394: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x801D2398: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801D239C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x801D23A0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801D23A4: bne         $t9, $t8, L_801D2388
    if (ctx->r25 != ctx->r24) {
        // 0x801D23A8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_801D2388;
    }
    // 0x801D23A8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x801D23AC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D23B0:
    // 0x801D23B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D23B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D23B8: jr          $ra
    // 0x801D23BC: nop

    TRACE_RETURN()
    return;
    // 0x801D23BC: nop

;}
RECOMP_FUNC void func_801E14C4_59D3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14C8: jr          $ra
    // 0x801E14CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D2734_58E644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2734: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801D2738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D273C: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x801D2740: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801D2744: jal         0x801D25EC
    // 0x801D2748: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_801D25EC_58E4FC(rdram, ctx);
        goto after_0;
    // 0x801D2748: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x801D274C: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x801D2750: lhu         $t6, 0x42($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X42);
    // 0x801D2754: lhu         $a1, 0x1A($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X1A);
    // 0x801D2758: subu        $v1, $t6, $a1
    ctx->r3 = SUB32(ctx->r14, ctx->r5);
    // 0x801D275C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x801D2760: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x801D2764: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801D2768: slti        $at, $t8, 0x101
    ctx->r1 = SIGNED(ctx->r24) < 0X101 ? 1 : 0;
    // 0x801D276C: bne         $at, $zero, L_801D277C
    if (ctx->r1 != 0) {
        // 0x801D2770: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_801D277C;
    }
    // 0x801D2770: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801D2774: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x801D2778: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
L_801D277C:
    // 0x801D277C: slti        $at, $a0, -0x100
    ctx->r1 = SIGNED(ctx->r4) < -0X100 ? 1 : 0;
    // 0x801D2780: beql        $at, $zero, L_801D2790
    if (ctx->r1 == 0) {
        // 0x801D2784: addu        $t9, $a1, $v0
        ctx->r25 = ADD32(ctx->r5, ctx->r2);
            goto L_801D2790;
    }
    goto skip_0;
    // 0x801D2784: addu        $t9, $a1, $v0
    ctx->r25 = ADD32(ctx->r5, ctx->r2);
    skip_0:
    // 0x801D2788: ori         $v0, $zero, 0xFF00
    ctx->r2 = 0 | 0XFF00;
    // 0x801D278C: addu        $t9, $a1, $v0
    ctx->r25 = ADD32(ctx->r5, ctx->r2);
L_801D2790:
    // 0x801D2790: sh          $t9, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r25;
    // 0x801D2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2798: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x801D279C: jr          $ra
    // 0x801D27A0: nop

    TRACE_RETURN()
    return;
    // 0x801D27A0: nop

;}
RECOMP_FUNC void func_801DEBA0_59AAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEBA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEBA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEBA8: jal         0x801E5208
    // 0x801DEBAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E5208_5A1118(rdram, ctx);
        goto after_0;
    // 0x801DEBAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEBB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEBB8: jr          $ra
    // 0x801DEBBC: nop

    TRACE_RETURN()
    return;
    // 0x801DEBBC: nop

;}
RECOMP_FUNC void func_801F55DC_5B14EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F55DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F55E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F55E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F55E8: jal         0x801F5624
    // 0x801F55EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801F5624_5B1534(rdram, ctx);
        goto after_0;
    // 0x801F55EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801F55F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F55F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F55F8: jr          $ra
    // 0x801F55FC: nop

    TRACE_RETURN()
    return;
    // 0x801F55FC: nop

;}
RECOMP_FUNC void func_801DACDC_596BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DACDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DACE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DACE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DACE8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DACEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DACF0: jal         0x801DAD68
    // 0x801DACF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801DAD68_596C78(rdram, ctx);
        goto after_0;
    // 0x801DACF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x801DACF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DACFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAD00: jr          $ra
    // 0x801DAD04: nop

    TRACE_RETURN()
    return;
    // 0x801DAD04: nop

;}
RECOMP_FUNC void func_801DE49C_59A3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE49C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE4A4: jal         0x801E3AC0
    // 0x801DE4A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE4A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE4B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE4B4: jr          $ra
    // 0x801DE4B8: nop

    TRACE_RETURN()
    return;
    // 0x801DE4B8: nop

;}
RECOMP_FUNC void func_801D2BF8_58EB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2C00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2C04: jal         0x801D2C88
    // 0x801D2C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D2C88_58EB98(rdram, ctx);
        goto after_0;
    // 0x801D2C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D2C0C: bne         $v0, $zero, L_801D2C30
    if (ctx->r2 != 0) {
        // 0x801D2C10: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801D2C30;
    }
    // 0x801D2C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2C14: lbu         $a3, 0xBC($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XBC);
    // 0x801D2C18: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D2C20: andi        $t6, $a3, 0x7
    ctx->r14 = ctx->r7 & 0X7;
    // 0x801D2C24: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x801D2C28: jal         0x801D2E10
    // 0x801D2C2C: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    func_801D2E10_58ED20(rdram, ctx);
        goto after_1;
    // 0x801D2C2C: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    after_1:
L_801D2C30:
    // 0x801D2C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2C38: jr          $ra
    // 0x801D2C3C: nop

    TRACE_RETURN()
    return;
    // 0x801D2C3C: nop

;}
RECOMP_FUNC void func_801F6FB4_5B2EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6FBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6FC0: jal         0x801E50C0
    // 0x801F6FC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E50C0_5A0FD0(rdram, ctx);
        goto after_0;
    // 0x801F6FC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6FC8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801F6FCC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x801F6FD0: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x801F6FD4: sh          $t6, 0x86($t8)
    MEM_H(0X86, ctx->r24) = ctx->r14;
    // 0x801F6FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6FE0: jr          $ra
    // 0x801F6FE4: nop

    TRACE_RETURN()
    return;
    // 0x801F6FE4: nop

;}
RECOMP_FUNC void func_801DC120_598030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC120: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DC124: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x801DC128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC130: bgtzl       $t6, L_801DC144
    if (SIGNED(ctx->r14) > 0) {
        // 0x801DC134: lw          $v1, 0x5C($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X5C);
            goto L_801DC144;
    }
    goto skip_0;
    // 0x801DC134: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    skip_0:
    // 0x801DC138: b           L_801DC26C
    // 0x801DC13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DC26C;
    // 0x801DC13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DC140: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
L_801DC144:
    // 0x801DC144: lbu         $t7, 0x59($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X59);
    // 0x801DC148: beql        $t7, $zero, L_801DC26C
    if (ctx->r15 == 0) {
        // 0x801DC14C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC26C;
    }
    goto skip_1;
    // 0x801DC14C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DC150: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DC154: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x801DC158: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC15C: addiu       $at, $zero, 0x43
        ctx->r1 = ADD32(0, 0X43);
            goto L_801DC268;
    }
    // 0x801DC15C: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x801DC160: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC164: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_801DC268;
    }
    // 0x801DC164: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x801DC168: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC16C: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_801DC268;
    }
    // 0x801DC16C: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x801DC170: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC174: addiu       $a1, $zero, 0x23
        ctx->r5 = ADD32(0, 0X23);
            goto L_801DC268;
    }
    // 0x801DC174: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x801DC178: beq         $a1, $v0, L_801DC268
    if (ctx->r5 == ctx->r2) {
        // 0x801DC17C: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_801DC268;
    }
    // 0x801DC17C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x801DC180: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC184: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_801DC268;
    }
    // 0x801DC184: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x801DC188: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC18C: addiu       $at, $zero, 0xBA
        ctx->r1 = ADD32(0, 0XBA);
            goto L_801DC268;
    }
    // 0x801DC18C: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x801DC190: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC194: addiu       $at, $zero, 0x8E
        ctx->r1 = ADD32(0, 0X8E);
            goto L_801DC268;
    }
    // 0x801DC194: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x801DC198: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC19C: addiu       $at, $zero, 0x8F
        ctx->r1 = ADD32(0, 0X8F);
            goto L_801DC268;
    }
    // 0x801DC19C: addiu       $at, $zero, 0x8F
    ctx->r1 = ADD32(0, 0X8F);
    // 0x801DC1A0: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC1A4: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_801DC268;
    }
    // 0x801DC1A4: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801DC1A8: beq         $v0, $at, L_801DC268
    if (ctx->r2 == ctx->r1) {
        // 0x801DC1AC: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_801DC268;
    }
    // 0x801DC1AC: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x801DC1B0: beql        $v0, $at, L_801DC26C
    if (ctx->r2 == ctx->r1) {
        // 0x801DC1B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC26C;
    }
    goto skip_2;
    // 0x801DC1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801DC1B8: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DC1BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DC1C0: bne         $t8, $at, L_801DC1D8
    if (ctx->r24 != ctx->r1) {
        // 0x801DC1C4: nop
    
            goto L_801DC1D8;
    }
    // 0x801DC1C4: nop

    // 0x801DC1C8: lhu         $t9, 0x86($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X86);
    // 0x801DC1CC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DC1D0: beql        $t9, $at, L_801DC26C
    if (ctx->r25 == ctx->r1) {
        // 0x801DC1D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC26C;
    }
    goto skip_3;
    // 0x801DC1D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
L_801DC1D8:
    // 0x801DC1D8: beq         $a1, $v0, L_801DC204
    if (ctx->r5 == ctx->r2) {
        // 0x801DC1DC: addiu       $at, $zero, 0xB8
        ctx->r1 = ADD32(0, 0XB8);
            goto L_801DC204;
    }
    // 0x801DC1DC: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x801DC1E0: beql        $v0, $at, L_801DC208
    if (ctx->r2 == ctx->r1) {
        // 0x801DC1E4: lbu         $v0, 0xCC($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XCC);
            goto L_801DC208;
    }
    goto skip_4;
    // 0x801DC1E4: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    skip_4:
    // 0x801DC1E8: jal         0x801E7E18
    // 0x801DC1EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7E18_5A3D28(rdram, ctx);
        goto after_0;
    // 0x801DC1EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DC1F0: beq         $v0, $zero, L_801DC204
    if (ctx->r2 == 0) {
        // 0x801DC1F4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DC204;
    }
    // 0x801DC1F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DC1F8: jal         0x801E3134
    // 0x801DC1FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3134_59F044(rdram, ctx);
        goto after_1;
    // 0x801DC1FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801DC200: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801DC204:
    // 0x801DC204: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
L_801DC208:
    // 0x801DC208: slti        $at, $v0, 0x31
    ctx->r1 = SIGNED(ctx->r2) < 0X31 ? 1 : 0;
    // 0x801DC20C: bne         $at, $zero, L_801DC228
    if (ctx->r1 != 0) {
        // 0x801DC210: slti        $at, $v0, 0x35
        ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
            goto L_801DC228;
    }
    // 0x801DC210: slti        $at, $v0, 0x35
    ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x801DC214: beql        $at, $zero, L_801DC22C
    if (ctx->r1 == 0) {
        // 0x801DC218: lw          $v1, 0x5C($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X5C);
            goto L_801DC22C;
    }
    goto skip_5;
    // 0x801DC218: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    skip_5:
    // 0x801DC21C: jal         0x801E759C
    // 0x801DC220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E759C_5A34AC(rdram, ctx);
        goto after_2;
    // 0x801DC220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x801DC224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801DC228:
    // 0x801DC228: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
L_801DC22C:
    // 0x801DC22C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801DC230: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DC234: lwc1        $f6, -0x50AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X50AC);
    // 0x801DC238: lwc1        $f4, 0x48($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X48);
    // 0x801DC23C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DC240: swc1        $f8, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f8.u32l;
    // 0x801DC244: jal         0x801CC424
    // 0x801DC248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CC424_588334(rdram, ctx);
        goto after_3;
    // 0x801DC248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x801DC24C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DC250: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x801DC254: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DC258: jal         0x801DACDC
    // 0x801DC25C: sh          $zero, 0x36($t0)
    MEM_H(0X36, ctx->r8) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DC25C: sh          $zero, 0x36($t0)
    MEM_H(0X36, ctx->r8) = 0;
    after_4:
    // 0x801DC260: b           L_801DC26C
    // 0x801DC264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DC26C;
    // 0x801DC264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DC268:
    // 0x801DC268: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC26C:
    // 0x801DC26C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC274: jr          $ra
    // 0x801DC278: nop

    TRACE_RETURN()
    return;
    // 0x801DC278: nop

;}
RECOMP_FUNC void func_801E1578_59D488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1578: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E157C: jr          $ra
    // 0x801E1580: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1580: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
