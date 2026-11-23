#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DDA08_599918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDA08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDA0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDA10: jal         0x801E1B60
    // 0x801DDA14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E1B60_59DA70(rdram, ctx);
        goto after_0;
    // 0x801DDA14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDA1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDA20: jr          $ra
    // 0x801DDA24: nop

    TRACE_RETURN()
    return;
    // 0x801DDA24: nop

;}
RECOMP_FUNC void func_801D896C_59487C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D896C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D8970: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D8974: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D8978: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801D897C: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D8980: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D8984: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801D8988: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801D898C: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801D8990: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x801D8994: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801D8998: lhu         $t6, 0x3153($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3153);
    // 0x801D899C: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x801D89A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D89A4: sh          $t6, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r14;
    // 0x801D89A8: lhu         $t7, 0x3155($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3155);
    // 0x801D89AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D89B0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801D89B4: sh          $zero, 0x56($sp)
    MEM_H(0X56, ctx->r29) = 0;
    // 0x801D89B8: jal         0x801D8E08
    // 0x801D89BC: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    func_801D8E08_594D18(rdram, ctx);
        goto after_0;
    // 0x801D89BC: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    after_0:
    // 0x801D89C0: bne         $v0, $zero, L_801D89E4
    if (ctx->r2 != 0) {
        // 0x801D89C4: lhu         $t0, 0x56($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X56);
            goto L_801D89E4;
    }
    // 0x801D89C4: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x801D89C8: lbu         $t8, 0xD2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD2);
    // 0x801D89CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D89D0: beql        $t8, $zero, L_801D89E8
    if (ctx->r24 == 0) {
        // 0x801D89D4: lbu         $t9, 0x71($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X71);
            goto L_801D89E8;
    }
    goto skip_0;
    // 0x801D89D4: lbu         $t9, 0x71($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X71);
    skip_0:
    // 0x801D89D8: jal         0x801D8F74
    // 0x801D89DC: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    func_801D8F74_594E84(rdram, ctx);
        goto after_1;
    // 0x801D89DC: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    after_1:
    // 0x801D89E0: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
L_801D89E4:
    // 0x801D89E4: lbu         $t9, 0x71($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X71);
L_801D89E8:
    // 0x801D89E8: lhu         $t1, 0x5A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X5A);
    // 0x801D89EC: bne         $t9, $zero, L_801D8B08
    if (ctx->r25 != 0) {
        // 0x801D89F0: andi        $t2, $t1, 0x10
        ctx->r10 = ctx->r9 & 0X10;
            goto L_801D8B08;
    }
    // 0x801D89F0: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x801D89F4: beql        $t2, $zero, L_801D8B0C
    if (ctx->r10 == 0) {
        // 0x801D89F8: lhu         $t2, 0x5A($sp)
        ctx->r10 = MEM_HU(ctx->r29, 0X5A);
            goto L_801D8B0C;
    }
    goto skip_1;
    // 0x801D89F8: lhu         $t2, 0x5A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5A);
    skip_1:
    // 0x801D89FC: lbu         $v0, 0x70($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X70);
    // 0x801D8A00: lhu         $v1, 0x58($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X58);
    // 0x801D8A04: bne         $v0, $zero, L_801D8A88
    if (ctx->r2 != 0) {
        // 0x801D8A08: andi        $t8, $v1, 0x8
        ctx->r24 = ctx->r3 & 0X8;
            goto L_801D8A88;
    }
    // 0x801D8A08: andi        $t8, $v1, 0x8
    ctx->r24 = ctx->r3 & 0X8;
    // 0x801D8A0C: lhu         $v1, 0x58($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X58);
    // 0x801D8A10: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x801D8A14: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x801D8A18: beql        $t3, $zero, L_801D8AA0
    if (ctx->r11 == 0) {
        // 0x801D8A1C: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_801D8AA0;
    }
    goto skip_2;
    // 0x801D8A1C: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    skip_2:
    // 0x801D8A20: lhu         $t4, 0x7AB2($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X7AB2);
    // 0x801D8A24: addiu       $at, $zero, 0x1AF
    ctx->r1 = ADD32(0, 0X1AF);
    // 0x801D8A28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D8A2C: beq         $t4, $at, L_801D8A9C
    if (ctx->r12 == ctx->r1) {
        // 0x801D8A30: addiu       $v0, $v0, -0x39FC
        ctx->r2 = ADD32(ctx->r2, -0X39FC);
            goto L_801D8A9C;
    }
    // 0x801D8A30: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x801D8A34: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801D8A38: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D8A3C: sb          $t5, 0xED($t6)
    MEM_B(0XED, ctx->r14) = ctx->r13;
    // 0x801D8A40: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    // 0x801D8A44: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801D8A48: jal         0x801D8E08
    // 0x801D8A4C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_801D8E08_594D18(rdram, ctx);
        goto after_2;
    // 0x801D8A4C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x801D8A50: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801D8A54: beq         $v0, $zero, L_801D8A9C
    if (ctx->r2 == 0) {
        // 0x801D8A58: lhu         $t0, 0x56($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X56);
            goto L_801D8A9C;
    }
    // 0x801D8A58: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x801D8A5C: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x801D8A60: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x801D8A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8A68: beql        $t7, $at, L_801D8AA0
    if (ctx->r15 == ctx->r1) {
        // 0x801D8A6C: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_801D8AA0;
    }
    goto skip_3;
    // 0x801D8A6C: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    skip_3:
    // 0x801D8A70: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801D8A74: jal         0x801D8E94
    // 0x801D8A78: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    func_801D8E94_594DA4(rdram, ctx);
        goto after_3;
    // 0x801D8A78: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    after_3:
    // 0x801D8A7C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801D8A80: b           L_801D8A9C
    // 0x801D8A84: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
        goto L_801D8A9C;
    // 0x801D8A84: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
L_801D8A88:
    // 0x801D8A88: beq         $t8, $zero, L_801D8A9C
    if (ctx->r24 == 0) {
        // 0x801D8A8C: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_801D8A9C;
    }
    // 0x801D8A8C: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x801D8A90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D8A94: sb          $t9, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r25;
    // 0x801D8A98: sb          $t1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r9;
L_801D8A9C:
    // 0x801D8A9C: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
L_801D8AA0:
    // 0x801D8AA0: beql        $t2, $zero, L_801D8B0C
    if (ctx->r10 == 0) {
        // 0x801D8AA4: lhu         $t2, 0x5A($sp)
        ctx->r10 = MEM_HU(ctx->r29, 0X5A);
            goto L_801D8B0C;
    }
    goto skip_4;
    // 0x801D8AA4: lhu         $t2, 0x5A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5A);
    skip_4:
    // 0x801D8AA8: lbu         $t3, 0xD2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD2);
    // 0x801D8AAC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8AB4: beql        $t3, $zero, L_801D8AD0
    if (ctx->r11 == 0) {
        // 0x801D8AB8: lbu         $t4, 0x98($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X98);
            goto L_801D8AD0;
    }
    goto skip_5;
    // 0x801D8AB8: lbu         $t4, 0x98($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X98);
    skip_5:
    // 0x801D8ABC: jal         0x801D8F74
    // 0x801D8AC0: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    func_801D8F74_594E84(rdram, ctx);
        goto after_4;
    // 0x801D8AC0: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    after_4:
    // 0x801D8AC4: b           L_801D8B08
    // 0x801D8AC8: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
        goto L_801D8B08;
    // 0x801D8AC8: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x801D8ACC: lbu         $t4, 0x98($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X98);
L_801D8AD0:
    // 0x801D8AD0: addiu       $v1, $v1, -0x36E4
    ctx->r3 = ADD32(ctx->r3, -0X36E4);
    // 0x801D8AD4: lbu         $v0, 0x70($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X70);
    // 0x801D8AD8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801D8ADC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801D8AE0: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801D8AE4: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x801D8AE8: lbu         $t7, 0x7($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7);
    // 0x801D8AEC: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801D8AF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D8AF4: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801D8AF8: beq         $at, $zero, L_801D8B08
    if (ctx->r1 == 0) {
        // 0x801D8AFC: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_801D8B08;
    }
    // 0x801D8AFC: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x801D8B00: sb          $t9, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r25;
    // 0x801D8B04: sb          $t1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r9;
L_801D8B08:
    // 0x801D8B08: lhu         $t2, 0x5A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5A);
L_801D8B0C:
    // 0x801D8B0C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8B10: addiu       $v1, $v1, -0x36E4
    ctx->r3 = ADD32(ctx->r3, -0X36E4);
    // 0x801D8B14: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x801D8B18: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801D8B1C: lbu         $t4, 0x71($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X71);
    // 0x801D8B20: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801D8B24: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D8B28: beq         $t4, $zero, L_801D8C9C
    if (ctx->r12 == 0) {
        // 0x801D8B2C: lui         $a2, 0x8021
        ctx->r6 = S32(0X8021 << 16);
            goto L_801D8C9C;
    }
    // 0x801D8B2C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D8B30: lbu         $t5, 0x98($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X98);
    // 0x801D8B34: lbu         $t8, 0x70($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X70);
    // 0x801D8B38: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D8B3C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801D8B40: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801D8B44: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D8B48: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x801D8B4C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801D8B50: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x801D8B54: lwc1        $f2, 0x8($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801D8B58: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801D8B5C: nop

    // 0x801D8B60: bc1tl       L_801D8C94
    if (c1cs) {
        // 0x801D8B64: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D8C94;
    }
    goto skip_6;
    // 0x801D8B64: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    skip_6:
    // 0x801D8B68: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801D8B6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D8B70: bc1fl       L_801D8C0C
    if (!c1cs) {
        // 0x801D8B74: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801D8C0C;
    }
    goto skip_7;
    // 0x801D8B74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_7:
    // 0x801D8B78: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801D8B7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D8B80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D8B84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D8B88: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8B8C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D8B90: swc1        $f16, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f16.u32l;
    // 0x801D8B94: lwc1        $f12, 0xE4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8B98: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801D8B9C: nop

    // 0x801D8BA0: bc1fl       L_801D8BB4
    if (!c1cs) {
        // 0x801D8BA4: lwc1        $f18, 0x74($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801D8BB4;
    }
    goto skip_8;
    // 0x801D8BA4: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    skip_8:
    // 0x801D8BA8: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801D8BAC: lwc1        $f12, 0xE4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8BB0: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
L_801D8BB4:
    // 0x801D8BB4: lbu         $t2, 0x98($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X98);
    // 0x801D8BB8: lbu         $t5, 0x70($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X70);
    // 0x801D8BBC: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x801D8BC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801D8BC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801D8BC8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801D8BCC: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801D8BD0: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x801D8BD4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801D8BD8: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x801D8BDC: lwc1        $f2, 0x8($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801D8BE0: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D8BE4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801D8BE8: nop

    // 0x801D8BEC: bc1fl       L_801D8C94
    if (!c1cs) {
        // 0x801D8BF0: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D8C94;
    }
    goto skip_9;
    // 0x801D8BF0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    skip_9:
    // 0x801D8BF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D8BF8: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801D8BFC: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D8C00: b           L_801D8C90
    // 0x801D8C04: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
        goto L_801D8C90;
    // 0x801D8C04: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
    // 0x801D8C08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801D8C0C:
    // 0x801D8C0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D8C10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D8C14: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8C18: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D8C1C: swc1        $f16, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f16.u32l;
    // 0x801D8C20: lwc1        $f12, 0xE4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8C24: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801D8C28: nop

    // 0x801D8C2C: bc1fl       L_801D8C40
    if (!c1cs) {
        // 0x801D8C30: lwc1        $f18, 0x74($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801D8C40;
    }
    goto skip_10;
    // 0x801D8C30: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    skip_10:
    // 0x801D8C34: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801D8C38: lwc1        $f12, 0xE4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801D8C3C: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
L_801D8C40:
    // 0x801D8C40: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x801D8C44: lbu         $t2, 0x70($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X70);
    // 0x801D8C48: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x801D8C4C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x801D8C50: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801D8C54: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D8C58: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801D8C5C: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x801D8C60: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x801D8C64: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x801D8C68: lwc1        $f2, 0x8($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X8);
    // 0x801D8C6C: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D8C70: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D8C74: nop

    // 0x801D8C78: bc1fl       L_801D8C94
    if (!c1cs) {
        // 0x801D8C7C: lwc1        $f8, 0x5C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D8C94;
    }
    goto skip_11;
    // 0x801D8C7C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    skip_11:
    // 0x801D8C80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D8C84: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801D8C88: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D8C8C: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
L_801D8C90:
    // 0x801D8C90: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
L_801D8C94:
    // 0x801D8C94: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801D8C98: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
L_801D8C9C:
    // 0x801D8C9C: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D8CA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D8CA4: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D8CA8: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x801D8CAC: nop

    // 0x801D8CB0: bc1tl       L_801D8D24
    if (c1cs) {
        // 0x801D8CB4: sb          $zero, 0x71($s0)
        MEM_B(0X71, ctx->r16) = 0;
            goto L_801D8D24;
    }
    goto skip_12;
    // 0x801D8CB4: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    skip_12:
    // 0x801D8CB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D8CBC: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x801D8CC0: sh          $t0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r8;
    // 0x801D8CC4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x801D8CC8: jal         0x8001D5B8
    // 0x801D8CCC: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_5;
    // 0x801D8CCC: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x801D8CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8CD4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x801D8CD8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x801D8CDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D8CE0: jal         0x801D56D0
    // 0x801D8CE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_6;
    // 0x801D8CE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x801D8CE8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x801D8CEC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x801D8CF0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801D8CF4: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801D8CF8: addiu       $t4, $t4, 0x6710
    ctx->r12 = ADD32(ctx->r12, 0X6710);
    // 0x801D8CFC: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x801D8D00: beq         $t4, $t8, L_801D8D24
    if (ctx->r12 == ctx->r24) {
        // 0x801D8D04: lhu         $t0, 0x56($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X56);
            goto L_801D8D24;
    }
    // 0x801D8D04: lhu         $t0, 0x56($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X56);
    // 0x801D8D08: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D8D0C: lhu         $t7, -0x2E2C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2E2C);
    // 0x801D8D10: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D8D14: sb          $t9, 0xA2($s0)
    MEM_B(0XA2, ctx->r16) = ctx->r25;
    // 0x801D8D18: b           L_801D8D24
    // 0x801D8D1C: sh          $t7, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r15;
        goto L_801D8D24;
    // 0x801D8D1C: sh          $t7, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r15;
    // 0x801D8D20: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
L_801D8D24:
    // 0x801D8D24: lbu         $t2, 0xA3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XA3);
    // 0x801D8D28: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D8D2C: beql        $t2, $zero, L_801D8D5C
    if (ctx->r10 == 0) {
        // 0x801D8D30: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_801D8D5C;
    }
    goto skip_13;
    // 0x801D8D30: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_13:
    // 0x801D8D34: lhu         $t1, 0xCE($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XCE);
    // 0x801D8D38: lhu         $t3, -0x2E2A($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2E2A);
    // 0x801D8D3C: subu        $t5, $t1, $t3
    ctx->r13 = SUB32(ctx->r9, ctx->r11);
    // 0x801D8D40: addiu       $t6, $t5, 0x20
    ctx->r14 = ADD32(ctx->r13, 0X20);
    // 0x801D8D44: andi        $t4, $t6, 0xFFFF
    ctx->r12 = ctx->r14 & 0XFFFF;
    // 0x801D8D48: slti        $at, $t4, 0x40
    ctx->r1 = SIGNED(ctx->r12) < 0X40 ? 1 : 0;
    // 0x801D8D4C: beql        $at, $zero, L_801D8D5C
    if (ctx->r1 == 0) {
        // 0x801D8D50: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_801D8D5C;
    }
    goto skip_14;
    // 0x801D8D50: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_14:
    // 0x801D8D54: sb          $zero, 0xA3($s0)
    MEM_B(0XA3, ctx->r16) = 0;
    // 0x801D8D58: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_801D8D5C:
    // 0x801D8D5C: lhu         $v1, 0x58($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X58);
    // 0x801D8D60: beq         $t8, $zero, L_801D8DF4
    if (ctx->r24 == 0) {
        // 0x801D8D64: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_801D8DF4;
    }
    // 0x801D8D64: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x801D8D68: beq         $t7, $zero, L_801D8D74
    if (ctx->r15 == 0) {
        // 0x801D8D6C: andi        $t9, $v1, 0x1
        ctx->r25 = ctx->r3 & 0X1;
            goto L_801D8D74;
    }
    // 0x801D8D6C: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x801D8D70: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_801D8D74:
    // 0x801D8D74: beq         $t9, $zero, L_801D8D80
    if (ctx->r25 == 0) {
        // 0x801D8D78: ori         $t2, $t0, 0x2
        ctx->r10 = ctx->r8 | 0X2;
            goto L_801D8D80;
    }
    // 0x801D8D78: ori         $t2, $t0, 0x2
    ctx->r10 = ctx->r8 | 0X2;
    // 0x801D8D7C: andi        $t0, $t2, 0xFFFF
    ctx->r8 = ctx->r10 & 0XFFFF;
L_801D8D80:
    // 0x801D8D80: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x801D8D84: bne         $v0, $zero, L_801D8D98
    if (ctx->r2 != 0) {
        // 0x801D8D88: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D8D98;
    }
    // 0x801D8D88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D8D8C: bne         $v0, $at, L_801D8D98
    if (ctx->r2 != ctx->r1) {
        // 0x801D8D90: nop
    
            goto L_801D8D98;
    }
    // 0x801D8D90: nop

    // 0x801D8D94: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_801D8D98:
    // 0x801D8D98: beq         $t0, $zero, L_801D8DF4
    if (ctx->r8 == 0) {
        // 0x801D8D9C: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_801D8DF4;
    }
    // 0x801D8D9C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801D8DA0: andi        $t3, $t0, 0x1
    ctx->r11 = ctx->r8 & 0X1;
    // 0x801D8DA4: beq         $t3, $zero, L_801D8DB4
    if (ctx->r11 == 0) {
        // 0x801D8DA8: sb          $t0, 0xA3($s0)
        MEM_B(0XA3, ctx->r16) = ctx->r8;
            goto L_801D8DB4;
    }
    // 0x801D8DA8: sb          $t0, 0xA3($s0)
    MEM_B(0XA3, ctx->r16) = ctx->r8;
    // 0x801D8DAC: b           L_801D8DB8
    // 0x801D8DB0: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
        goto L_801D8DB8;
    // 0x801D8DB0: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
L_801D8DB4:
    // 0x801D8DB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801D8DB8:
    // 0x801D8DB8: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x801D8DBC: beq         $t5, $zero, L_801D8DCC
    if (ctx->r13 == 0) {
        // 0x801D8DC0: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801D8DCC;
    }
    // 0x801D8DC0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D8DC4: b           L_801D8DD0
    // 0x801D8DC8: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
        goto L_801D8DD0;
    // 0x801D8DC8: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
L_801D8DCC:
    // 0x801D8DCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D8DD0:
    // 0x801D8DD0: lhu         $v0, 0x66($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X66);
    // 0x801D8DD4: lhu         $t6, -0x2E2A($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2E2A);
    // 0x801D8DD8: subu        $t4, $t6, $v0
    ctx->r12 = SUB32(ctx->r14, ctx->r2);
    // 0x801D8DDC: addiu       $t8, $t4, 0x1000
    ctx->r24 = ADD32(ctx->r12, 0X1000);
    // 0x801D8DE0: andi        $t7, $t8, 0xE000
    ctx->r15 = ctx->r24 & 0XE000;
    // 0x801D8DE4: addu        $t9, $v0, $t7
    ctx->r25 = ADD32(ctx->r2, ctx->r15);
    // 0x801D8DE8: addu        $t2, $t9, $a0
    ctx->r10 = ADD32(ctx->r25, ctx->r4);
    // 0x801D8DEC: subu        $t1, $t2, $v1
    ctx->r9 = SUB32(ctx->r10, ctx->r3);
    // 0x801D8DF0: sh          $t1, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = ctx->r9;
L_801D8DF4:
    // 0x801D8DF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D8DF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D8DFC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801D8E00: jr          $ra
    // 0x801D8E04: nop

    TRACE_RETURN()
    return;
    // 0x801D8E04: nop

;}
RECOMP_FUNC void func_801EAC24_5A6B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAC24: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801EAC28: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EAC2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EAC30: addiu       $t7, $t7, 0x4A90
    ctx->r15 = ADD32(ctx->r15, 0X4A90);
    // 0x801EAC34: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801EAC38: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801EAC3C: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x801EAC40: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801EAC44: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801EAC48: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801EAC4C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801EAC50: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801EAC54: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801EAC58: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801EAC5C: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x801EAC60: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801EAC64: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x801EAC68: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801EAC6C: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x801EAC70: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801EAC74: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801EAC78: jal         0x801EAE88
    // 0x801EAC7C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_801EAE88_5A6D98(rdram, ctx);
        goto after_0;
    // 0x801EAC7C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x801EAC80: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801EAC84: jal         0x801E8858
    // 0x801EAC88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_1;
    // 0x801EAC88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801EAC8C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x801EAC90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAC94: lwc1        $f6, -0x477C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X477C);
    // 0x801EAC98: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x801EAC9C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801EACA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EACA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EACA8: swc1        $f8, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f8.u32l;
    // 0x801EACAC: lwc1        $f2, 0x1C($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x801EACB0: swc1        $f2, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f2.u32l;
    // 0x801EACB4: swc1        $f2, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f2.u32l;
    // 0x801EACB8: lwc1        $f10, -0x4778($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4778);
    // 0x801EACBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801EACC0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801EACC4: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x801EACC8: nop

    // 0x801EACCC: bc1fl       L_801EAD2C
    if (!c1cs) {
        // 0x801EACD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EAD2C;
    }
    goto skip_0;
    // 0x801EACD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EACD4: lbu         $t3, 0x61($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X61);
    // 0x801EACD8: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x801EACDC: lwc1        $f6, 0xB0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XB0);
    // 0x801EACE0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801EACE4: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x801EACE8: lwc1        $f16, 0x28($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X28);
    // 0x801EACEC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801EACF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801EACF4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801EACF8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801EACFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EAD00: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801EAD04: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EAD08: sb          $t8, 0x60($a2)
    MEM_B(0X60, ctx->r6) = ctx->r24;
    // 0x801EAD0C: addiu       $a0, $a0, -0x52C8
    ctx->r4 = ADD32(ctx->r4, -0X52C8);
    // 0x801EAD10: swc1        $f4, 0xAC($a2)
    MEM_W(0XAC, ctx->r6) = ctx->f4.u32l;
    // 0x801EAD14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EAD18: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EAD1C: swc1        $f4, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->f4.u32l;
    // 0x801EAD20: jal         0x8003521C
    // 0x801EAD24: swc1        $f18, 0xB0($a2)
    MEM_W(0XB0, ctx->r6) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EAD24: swc1        $f18, 0xB0($a2)
    MEM_W(0XB0, ctx->r6) = ctx->f18.u32l;
    after_2:
    // 0x801EAD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EAD2C:
    // 0x801EAD2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801EAD30: jr          $ra
    // 0x801EAD34: nop

    TRACE_RETURN()
    return;
    // 0x801EAD34: nop

;}
RECOMP_FUNC void func_801DC70C_59861C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC70C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DC710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC714: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DC718: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x801DC71C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801DC720: addiu       $t9, $t9, 0x4028
    ctx->r25 = ADD32(ctx->r25, 0X4028);
    // 0x801DC724: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x801DC728: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801DC72C: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x801DC730: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DC734: sb          $t8, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r24;
    // 0x801DC738: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801DC73C: lbu         $a3, 0x60($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X60);
    // 0x801DC740: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DC744: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801DC748: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x801DC74C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801DC750: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x801DC754: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x801DC758: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DC75C: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x801DC760: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801DC764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DC768: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DC76C: lw          $t8, 0x3F34($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3F34);
    // 0x801DC770: lui         $at, 0xF900
    ctx->r1 = S32(0XF900 << 16);
    // 0x801DC774: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801DC778: addu        $v1, $t8, $t4
    ctx->r3 = ADD32(ctx->r24, ctx->r12);
    // 0x801DC77C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x801DC780: addiu       $t2, $t2, -0x3A2C
    ctx->r10 = ADD32(ctx->r10, -0X3A2C);
    // 0x801DC784: lbu         $t6, 0x0($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X0);
    // 0x801DC788: addu        $t3, $v0, $at
    ctx->r11 = ADD32(ctx->r2, ctx->r1);
    // 0x801DC78C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801DC790: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x801DC794: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x801DC798: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x801DC79C: subu        $t5, $t9, $v0
    ctx->r13 = SUB32(ctx->r25, ctx->r2);
    // 0x801DC7A0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x801DC7A4: sb          $t6, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r14;
    // 0x801DC7A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DC7AC: lhu         $a0, 0x0($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X0);
    // 0x801DC7B0: sb          $t7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r15;
    // 0x801DC7B4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801DC7B8: jal         0x80001D68
    // 0x801DC7BC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80001D68_2968(rdram, ctx);
        goto after_0;
    // 0x801DC7BC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DC7C0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801DC7C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801DC7C8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801DC7CC: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x801DC7D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC7D4: bne         $t4, $zero, L_801DC818
    if (ctx->r12 != 0) {
        // 0x801DC7D8: nop
    
            goto L_801DC818;
    }
    // 0x801DC7D8: nop

    // 0x801DC7DC: lhu         $a0, 0x0($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X0);
    // 0x801DC7E0: jal         0x80001D94
    // 0x801DC7E4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80001D94_2994(rdram, ctx);
        goto after_1;
    // 0x801DC7E4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x801DC7E8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC7EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801DC7F0: jal         0x80001D68
    // 0x801DC7F4: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    func_80001D68_2968(rdram, ctx);
        goto after_2;
    // 0x801DC7F4: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    after_2:
    // 0x801DC7F8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801DC7FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801DC800: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801DC804: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x801DC808: subu        $t6, $t5, $v0
    ctx->r14 = SUB32(ctx->r13, ctx->r2);
    // 0x801DC80C: subu        $a2, $t6, $t7
    ctx->r6 = SUB32(ctx->r14, ctx->r15);
    // 0x801DC810: b           L_801DC818
    // 0x801DC814: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
        goto L_801DC818;
    // 0x801DC814: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
L_801DC818:
    // 0x801DC818: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x801DC81C: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801DC820: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x801DC824: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801DC828: addiu       $t5, $t5, -0x2DDC
    ctx->r13 = ADD32(ctx->r13, -0X2DDC);
    // 0x801DC82C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x801DC830: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x801DC834: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x801DC838: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801DC83C: jal         0x80001640
    // 0x801DC840: addu        $a0, $t8, $t4
    ctx->r4 = ADD32(ctx->r24, ctx->r12);
    func_80001640_2240(rdram, ctx);
        goto after_3;
    // 0x801DC840: addu        $a0, $t8, $t4
    ctx->r4 = ADD32(ctx->r24, ctx->r12);
    after_3:
    // 0x801DC844: lbu         $t6, 0x41($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X41);
    // 0x801DC848: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC84C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801DC850: sb          $t6, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r14;
    // 0x801DC854: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801DC858: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801DC85C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x801DC860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DC864: subu        $t4, $t7, $t8
    ctx->r12 = SUB32(ctx->r15, ctx->r24);
    // 0x801DC868: sw          $t4, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r12;
    // 0x801DC86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC870: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DC874: jr          $ra
    // 0x801DC878: nop

    TRACE_RETURN()
    return;
    // 0x801DC878: nop

;}
RECOMP_FUNC void func_801D7DD0_593CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7DD0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D7DD4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D7DD8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D7DDC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7DE0: lhu         $v1, -0x2E2C($v0)
    ctx->r3 = MEM_HU(ctx->r2, -0X2E2C);
    // 0x801D7DE4: lhu         $t8, 0x6E($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6E);
    // 0x801D7DE8: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801D7DEC: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801D7DF0: subu        $a1, $t8, $v1
    ctx->r5 = SUB32(ctx->r24, ctx->r3);
    // 0x801D7DF4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x801D7DF8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D7DFC: beq         $t9, $zero, L_801D7F14
    if (ctx->r25 == 0) {
        // 0x801D7E00: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_801D7F14;
    }
    // 0x801D7E00: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D7E04: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x801D7E08: beq         $t0, $zero, L_801D7EBC
    if (ctx->r8 == 0) {
        // 0x801D7E0C: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_801D7EBC;
    }
    // 0x801D7E0C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D7E10: lhu         $t1, -0x2E10($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E10);
    // 0x801D7E14: beql        $t1, $zero, L_801D7E28
    if (ctx->r9 == 0) {
        // 0x801D7E18: lhu         $t2, 0xBA($a0)
        ctx->r10 = MEM_HU(ctx->r4, 0XBA);
            goto L_801D7E28;
    }
    goto skip_0;
    // 0x801D7E18: lhu         $t2, 0xBA($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XBA);
    skip_0:
    // 0x801D7E1C: jr          $ra
    // 0x801D7E20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D7E20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D7E24: lhu         $t2, 0xBA($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XBA);
L_801D7E28:
    // 0x801D7E28: negu        $v0, $a3
    ctx->r2 = SUB32(0, ctx->r7);
    // 0x801D7E2C: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x801D7E30: subu        $t3, $t2, $a2
    ctx->r11 = SUB32(ctx->r10, ctx->r6);
    // 0x801D7E34: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    // 0x801D7E38: andi        $t4, $a1, 0x8000
    ctx->r12 = ctx->r5 & 0X8000;
    // 0x801D7E3C: beq         $t4, $zero, L_801D7E58
    if (ctx->r12 == 0) {
        // 0x801D7E40: sh          $t3, 0xBA($a0)
        MEM_H(0XBA, ctx->r4) = ctx->r11;
            goto L_801D7E58;
    }
    // 0x801D7E40: sh          $t3, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r11;
    // 0x801D7E44: slt         $at, $a1, $t5
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801D7E48: beq         $at, $zero, L_801D7E58
    if (ctx->r1 == 0) {
        // 0x801D7E4C: nop
    
            goto L_801D7E58;
    }
    // 0x801D7E4C: nop

    // 0x801D7E50: sh          $v0, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r2;
    // 0x801D7E54: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
L_801D7E58:
    // 0x801D7E58: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7E5C: lhu         $v0, -0x2E0E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2E0E);
    // 0x801D7E60: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x801D7E64: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x801D7E68: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801D7E6C: beq         $v0, $at, L_801D7E98
    if (ctx->r2 == ctx->r1) {
        // 0x801D7E70: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_801D7E98;
    }
    // 0x801D7E70: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801D7E74: addiu       $t7, $t6, 0x4000
    ctx->r15 = ADD32(ctx->r14, 0X4000);
    // 0x801D7E78: addiu       $t9, $v0, 0x4000
    ctx->r25 = ADD32(ctx->r2, 0X4000);
    // 0x801D7E7C: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801D7E80: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801D7E84: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801D7E88: beql        $at, $zero, L_801D7E9C
    if (ctx->r1 == 0) {
        // 0x801D7E8C: lhu         $v0, 0x6E($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X6E);
            goto L_801D7E9C;
    }
    goto skip_1;
    // 0x801D7E8C: lhu         $v0, 0x6E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6E);
    skip_1:
    // 0x801D7E90: jr          $ra
    // 0x801D7E94: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x801D7E94: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801D7E98:
    // 0x801D7E98: lhu         $v0, 0x6E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6E);
L_801D7E9C:
    // 0x801D7E9C: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x801D7EA0: beq         $a2, $zero, L_801D7EB0
    if (ctx->r6 == 0) {
        // 0x801D7EA4: andi        $t1, $a2, 0x8000
        ctx->r9 = ctx->r6 & 0X8000;
            goto L_801D7EB0;
    }
    // 0x801D7EA4: andi        $t1, $a2, 0x8000
    ctx->r9 = ctx->r6 & 0X8000;
    // 0x801D7EA8: bnel        $t1, $zero, L_801D7F18
    if (ctx->r9 != 0) {
        // 0x801D7EAC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801D7F18;
    }
    goto skip_2;
    // 0x801D7EAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_2:
L_801D7EB0:
    // 0x801D7EB0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D7EB4: b           L_801D7F14
    // 0x801D7EB8: sh          $zero, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = 0;
        goto L_801D7F14;
    // 0x801D7EB8: sh          $zero, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = 0;
L_801D7EBC:
    // 0x801D7EBC: lhu         $t2, 0xBA($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XBA);
    // 0x801D7EC0: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x801D7EC4: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    // 0x801D7EC8: andi        $t4, $a1, 0x8000
    ctx->r12 = ctx->r5 & 0X8000;
    // 0x801D7ECC: bne         $t4, $zero, L_801D7EE8
    if (ctx->r12 != 0) {
        // 0x801D7ED0: sh          $t3, 0xBA($a0)
        MEM_H(0XBA, ctx->r4) = ctx->r11;
            goto L_801D7EE8;
    }
    // 0x801D7ED0: sh          $t3, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r11;
    // 0x801D7ED4: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801D7ED8: beql        $at, $zero, L_801D7EEC
    if (ctx->r1 == 0) {
        // 0x801D7EDC: lhu         $v0, 0x6E($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X6E);
            goto L_801D7EEC;
    }
    goto skip_3;
    // 0x801D7EDC: lhu         $v0, 0x6E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6E);
    skip_3:
    // 0x801D7EE0: sh          $a3, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = ctx->r7;
    // 0x801D7EE4: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
L_801D7EE8:
    // 0x801D7EE8: lhu         $v0, 0x6E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6E);
L_801D7EEC:
    // 0x801D7EEC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x801D7EF0: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x801D7EF4: subu        $a2, $v0, $t5
    ctx->r6 = SUB32(ctx->r2, ctx->r13);
    // 0x801D7EF8: beq         $a2, $zero, L_801D7F0C
    if (ctx->r6 == 0) {
        // 0x801D7EFC: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_801D7F0C;
    }
    // 0x801D7EFC: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x801D7F00: andi        $t6, $a2, 0x8000
    ctx->r14 = ctx->r6 & 0X8000;
    // 0x801D7F04: beql        $t6, $zero, L_801D7F18
    if (ctx->r14 == 0) {
        // 0x801D7F08: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801D7F18;
    }
    goto skip_4;
    // 0x801D7F08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_4:
L_801D7F0C:
    // 0x801D7F0C: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D7F10: sh          $zero, 0xBA($a0)
    MEM_H(0XBA, ctx->r4) = 0;
L_801D7F14:
    // 0x801D7F14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801D7F18:
    // 0x801D7F18: jr          $ra
    // 0x801D7F1C: nop

    TRACE_RETURN()
    return;
    // 0x801D7F1C: nop

;}
RECOMP_FUNC void func_801DD830_599740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD830: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD838: beq         $a1, $zero, L_801DD87C
    if (ctx->r5 == 0) {
        // 0x801DD83C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_801DD87C;
    }
    // 0x801DD83C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801DD840: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801DD844: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801DD848: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x801DD84C: lw          $v1, 0x4324($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4324);
    // 0x801DD850: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x801DD854: beql        $a0, $zero, L_801DD880
    if (ctx->r4 == 0) {
        // 0x801DD858: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DD880;
    }
    goto skip_0;
    // 0x801DD858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DD85C: jal         0x8001DA08
    // 0x801DD860: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8001DA08_1E608(rdram, ctx);
        goto after_0;
    // 0x801DD860: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DD864: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD868: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x801DD86C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DD870: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801DD874: jal         0x801DD6E0
    // 0x801DD878: lhu         $a1, 0x2($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X2);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_1;
    // 0x801DD878: lhu         $a1, 0x2($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X2);
    after_1:
L_801DD87C:
    // 0x801DD87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD880:
    // 0x801DD880: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD884: jr          $ra
    // 0x801DD888: nop

    TRACE_RETURN()
    return;
    // 0x801DD888: nop

;}
RECOMP_FUNC void func_801DE3D4_59A2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE3D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DE3D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE3DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DE3E0: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE3E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE3E8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801DE3EC: bne         $t6, $at, L_801DE41C
    if (ctx->r14 != ctx->r1) {
        // 0x801DE3F0: addiu       $a2, $zero, 0x6A
        ctx->r6 = ADD32(0, 0X6A);
            goto L_801DE41C;
    }
    // 0x801DE3F0: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x801DE3F4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x801DE3F8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801DE3FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801DE400: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DE404: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801DE408: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x801DE40C: jal         0x801F5B04
    // 0x801DE410: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801DE410: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    after_0:
    // 0x801DE414: b           L_801DE428
    // 0x801DE418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE428;
    // 0x801DE418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE41C:
    // 0x801DE41C: jal         0x801E4078
    // 0x801DE420: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    func_801E4078_59FF88(rdram, ctx);
        goto after_1;
    // 0x801DE420: addiu       $a3, $zero, 0x6C
    ctx->r7 = ADD32(0, 0X6C);
    after_1:
    // 0x801DE424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE428:
    // 0x801DE428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE42C: jr          $ra
    // 0x801DE430: nop

    TRACE_RETURN()
    return;
    // 0x801DE430: nop

;}
RECOMP_FUNC void func_801E3008_59EF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3008: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E300C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3010: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801E3014: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E3018: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E301C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E3020: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E3024: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E3028: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x801E302C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3030: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
    // 0x801E3034: jr          $ra
    // 0x801E3038: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    TRACE_RETURN()
    return;
    // 0x801E3038: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
;}
RECOMP_FUNC void func_801EBC64_5A7B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBC64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBC6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBC70: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EBC74: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EBC78: jal         0x801EBCE8
    // 0x801EBC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EBCE8_5A7BF8(rdram, ctx);
        goto after_0;
    // 0x801EBC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EBC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBC88: jr          $ra
    // 0x801EBC8C: nop

    TRACE_RETURN()
    return;
    // 0x801EBC8C: nop

;}
RECOMP_FUNC void func_801EB454_5A7364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB454: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EB458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EB45C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801EB460: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801EB464: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801EB468: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801EB46C: addiu       $a1, $a1, 0x7F90
    ctx->r5 = ADD32(ctx->r5, 0X7F90);
    // 0x801EB470: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB474: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801EB478: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801EB47C: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801EB480: addiu       $t0, $zero, 0x128
    ctx->r8 = ADD32(0, 0X128);
    // 0x801EB484: lui         $t2, 0xC
    ctx->r10 = S32(0XC << 16);
    // 0x801EB488: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EB48C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801EB490: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x801EB494: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x801EB498: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801EB49C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EB4A0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EB4A4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EB4A8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EB4AC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EB4B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EB4B4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801EB4B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801EB4BC: lhu         $t2, 0x2D90($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X2D90);
    // 0x801EB4C0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB4C4: addiu       $a2, $a0, 0x80
    ctx->r6 = ADD32(ctx->r4, 0X80);
    // 0x801EB4C8: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801EB4CC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EB4D0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801EB4D4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801EB4D8: jal         0x80034680
    // 0x801EB4DC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EB4DC: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_0:
    // 0x801EB4E0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x801EB4E4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EB4E8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801EB4EC: lbu         $t4, 0x90($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X90);
    // 0x801EB4F0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x801EB4F4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801EB4F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801EB4FC: lw          $t6, -0x2DE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2DE0);
    // 0x801EB500: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x801EB504: sw          $t6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r14;
    // 0x801EB508: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EB50C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801EB510: jr          $ra
    // 0x801EB514: nop

    TRACE_RETURN()
    return;
    // 0x801EB514: nop

;}
RECOMP_FUNC void func_801EC5B4_5A84C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC5B4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801EC5B8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EC5BC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801EC5C0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801EC5C4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801EC5C8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801EC5CC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801EC5D0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801EC5D4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801EC5D8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801EC5DC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801EC5E0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EC5E4: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x801EC5E8: addiu       $t7, $t7, 0x4CD8
    ctx->r15 = ADD32(ctx->r15, 0X4CD8);
    // 0x801EC5EC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801EC5F0: lw          $s7, 0x5C($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X5C);
    // 0x801EC5F4: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x801EC5F8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801EC5FC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801EC600: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801EC604: andi        $fp, $a1, 0xFF
    ctx->r30 = ctx->r5 & 0XFF;
    // 0x801EC608: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801EC60C: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801EC610: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801EC614: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801EC618: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801EC61C: lbu         $at, 0x14($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X14);
    // 0x801EC620: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801EC624: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x801EC628: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801EC62C: jal         0x801E8C44
    // 0x801EC630: sb          $at, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r1;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EC630: sb          $at, 0x14($t6)
    MEM_B(0X14, ctx->r14) = ctx->r1;
    after_0:
    // 0x801EC634: beq         $v0, $zero, L_801EC650
    if (ctx->r2 == 0) {
        // 0x801EC638: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_801EC650;
    }
    // 0x801EC638: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801EC63C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801EC640: jal         0x801E8C44
    // 0x801EC644: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_1;
    // 0x801EC644: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
    // 0x801EC648: b           L_801EC754
    // 0x801EC64C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801EC754;
    // 0x801EC64C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801EC650:
    // 0x801EC650: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801EC654: addiu       $t2, $t2, 0x4868
    ctx->r10 = ADD32(ctx->r10, 0X4868);
    // 0x801EC658: sll         $t1, $fp, 2
    ctx->r9 = S32(ctx->r30 << 2);
    // 0x801EC65C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x801EC660: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x801EC664: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x801EC668: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_801EC66C:
    // 0x801EC66C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801EC670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EC674: jal         0x80034E08
    // 0x801EC678: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801EC678: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x801EC67C: beq         $v0, $zero, L_801EC750
    if (ctx->r2 == 0) {
        // 0x801EC680: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801EC750;
    }
    // 0x801EC680: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801EC684: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EC688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EC68C: jal         0x80035EEC
    // 0x801EC690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801EC690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801EC694: bne         $v0, $zero, L_801EC6A8
    if (ctx->r2 != 0) {
        // 0x801EC698: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801EC6A8;
    }
    // 0x801EC698: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EC69C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EC6A0: b           L_801EC750
    // 0x801EC6A4: sb          $t3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r11;
        goto L_801EC750;
    // 0x801EC6A4: sb          $t3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r11;
L_801EC6A8:
    // 0x801EC6A8: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x801EC6AC: addiu       $s4, $s4, 0x4C28
    ctx->r20 = ADD32(ctx->r20, 0X4C28);
    // 0x801EC6B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC6B4: or          $t9, $s4, $at
    ctx->r25 = ctx->r20 | ctx->r1;
    // 0x801EC6B8: sll         $t4, $s2, 3
    ctx->r12 = S32(ctx->r18 << 3);
    // 0x801EC6BC: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x801EC6C0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC6C4: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x801EC6C8: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
    // 0x801EC6CC: or          $s4, $t9, $at
    ctx->r20 = ctx->r25 | ctx->r1;
    // 0x801EC6D0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801EC6D4: jal         0x801EC780
    // 0x801EC6D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_801EC780_5A8690(rdram, ctx);
        goto after_4;
    // 0x801EC6D8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x801EC6DC: addiu       $s0, $s1, 0xC0
    ctx->r16 = ADD32(ctx->r17, 0XC0);
    // 0x801EC6E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC6E4: jal         0x801EE3AC
    // 0x801EC6E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_5;
    // 0x801EC6E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
    // 0x801EC6EC: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x801EC6F0: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801EC6F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EC6F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EC6FC: lbu         $t7, 0x3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3);
    // 0x801EC700: addiu       $a1, $s1, 0xC8
    ctx->r5 = ADD32(ctx->r17, 0XC8);
    // 0x801EC704: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801EC708: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EC70C: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x801EC710: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EC714: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x801EC718: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801EC71C: lbu         $t2, 0x6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X6);
    // 0x801EC720: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801EC724: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x801EC728: jal         0x801DC554
    // 0x801EC72C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_6;
    // 0x801EC72C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_6:
    // 0x801EC730: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EC734: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801EC738: jal         0x801EE4AC
    // 0x801EC73C: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_7;
    // 0x801EC73C: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    after_7:
    // 0x801EC740: sb          $s2, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r18;
    // 0x801EC744: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801EC748: bnel        $s2, $s6, L_801EC66C
    if (ctx->r18 != ctx->r22) {
        // 0x801EC74C: lw          $v0, 0x64($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X64);
            goto L_801EC66C;
    }
    goto skip_0;
    // 0x801EC74C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    skip_0:
L_801EC750:
    // 0x801EC750: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801EC754:
    // 0x801EC754: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EC758: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801EC75C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801EC760: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801EC764: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801EC768: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801EC76C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801EC770: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801EC774: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801EC778: jr          $ra
    // 0x801EC77C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801EC77C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801DAD08_596C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAD08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DAD0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAD10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DAD14: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x801DAD18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DAD1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DAD20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DAD24: jal         0x801DAD68
    // 0x801DAD28: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_801DAD68_596C78(rdram, ctx);
        goto after_0;
    // 0x801DAD28: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801DAD2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DAD30: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DAD34: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x801DAD38: jalr        $t9
    // 0x801DAD3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801DAD3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801DAD40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DAD44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DAD48: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAD4C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801DAD50: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x801DAD54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DAD58: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x801DAD5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DAD60: jr          $ra
    // 0x801DAD64: nop

    TRACE_RETURN()
    return;
    // 0x801DAD64: nop

;}
RECOMP_FUNC void func_801F603C_5B1F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F603C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6048: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F604C: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x801F6050: jal         0x801F50A4
    // 0x801F6054: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F6054: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_0:
    // 0x801F6058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F605C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6060: jr          $ra
    // 0x801F6064: nop

    TRACE_RETURN()
    return;
    // 0x801F6064: nop

;}
RECOMP_FUNC void func_801F6DF0_5B2D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6DF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6DFC: jal         0x801E7F50
    // 0x801F6E00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6E00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6E04: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6E08: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6E0C: jalr        $t9
    // 0x801F6E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6E14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6E18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6E1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6E20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6E24: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6E28: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6E2C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6E30: nop

    // 0x801F6E34: bc1fl       L_801F6E54
    if (!c1cs) {
        // 0x801F6E38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6E54;
    }
    goto skip_0;
    // 0x801F6E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6E3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F6E40: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801F6E44: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    // 0x801F6E48: jal         0x801DACDC
    // 0x801F6E4C: swc1        $f10, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->f10.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6E4C: swc1        $f10, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->f10.u32l;
    after_2:
    // 0x801F6E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6E54:
    // 0x801F6E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6E58: jr          $ra
    // 0x801F6E5C: nop

    TRACE_RETURN()
    return;
    // 0x801F6E5C: nop

;}
RECOMP_FUNC void func_801E15A8_59D4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E15A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E15AC: jr          $ra
    // 0x801E15B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E15B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DFE44_59BD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFE44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFE48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DFE4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DFE50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DFE54: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801DFE58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DFE5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DFE60: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801DFE64: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DFE68: sltiu       $a2, $v1, 0x1
    ctx->r6 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801DFE6C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x801DFE70: beq         $a2, $zero, L_801DFE94
    if (ctx->r6 == 0) {
        // 0x801DFE74: sh          $t6, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r14;
            goto L_801DFE94;
    }
    // 0x801DFE74: sh          $t6, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r14;
    // 0x801DFE78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFE7C: lwc1        $f4, -0x4E30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E30);
    // 0x801DFE80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFE84: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801DFE88: lwc1        $f6, -0x4E2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4E2C);
    // 0x801DFE8C: b           L_801DFF5C
    // 0x801DFE90: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
        goto L_801DFF5C;
    // 0x801DFE90: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
L_801DFE94:
    // 0x801DFE94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DFE98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DFE9C: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DFEA0: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x801DFEA4: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x801DFEA8: jalr        $t9
    // 0x801DFEAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DFEAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x801DFEB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DFEB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DFEB8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801DFEBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFEC0: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801DFEC4: lwc1        $f16, 0x28($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801DFEC8: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x801DFECC: nop

    // 0x801DFED0: bc1fl       L_801DFF60
    if (!c1cs) {
        // 0x801DFED4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DFF60;
    }
    goto skip_0;
    // 0x801DFED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DFED8: jal         0x801DD6E0
    // 0x801DFEDC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_1;
    // 0x801DFEDC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_1:
    // 0x801DFEE0: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801DFEE4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801DFEE8: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801DFEEC: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801DFEF0: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801DFEF4: jal         0x801E3C34
    // 0x801DFEF8: lhu         $a0, 0x8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X8);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_2;
    // 0x801DFEF8: lhu         $a0, 0x8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X8);
    after_2:
    // 0x801DFEFC: beq         $v0, $zero, L_801DFF54
    if (ctx->r2 == 0) {
        // 0x801DFF00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DFF54;
    }
    // 0x801DFF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF04: lbu         $t1, 0x90($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X90);
    // 0x801DFF08: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x801DFF0C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801DFF10: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801DFF14: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x801DFF18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801DFF1C: lhu         $t3, 0x7DB2($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X7DB2);
    // 0x801DFF20: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801DFF24: beq         $t4, $zero, L_801DFF54
    if (ctx->r12 == 0) {
        // 0x801DFF28: nop
    
            goto L_801DFF54;
    }
    // 0x801DFF28: nop

    // 0x801DFF2C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801DFF30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF34: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x801DFF38: lhu         $t5, 0x2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X2);
    // 0x801DFF3C: addiu       $t6, $t5, 0x200
    ctx->r14 = ADD32(ctx->r13, 0X200);
    // 0x801DFF40: andi        $t9, $t6, 0x3FF
    ctx->r25 = ctx->r14 & 0X3FF;
    // 0x801DFF44: jal         0x801DACDC
    // 0x801DFF48: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DFF48: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    after_3:
    // 0x801DFF4C: b           L_801DFF60
    // 0x801DFF50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFF60;
    // 0x801DFF50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFF54:
    // 0x801DFF54: jal         0x801DACDC
    // 0x801DFF58: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DFF58: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_4:
L_801DFF5C:
    // 0x801DFF5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFF60:
    // 0x801DFF60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DFF64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DFF68: jr          $ra
    // 0x801DFF6C: nop

    TRACE_RETURN()
    return;
    // 0x801DFF6C: nop

;}
RECOMP_FUNC void func_801F6398_5B22A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F639C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F63A0: jal         0x801F65A4
    // 0x801F63A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F65A4_5B24B4(rdram, ctx);
        goto after_0;
    // 0x801F63A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F63A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F63AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F63B0: jr          $ra
    // 0x801F63B4: nop

    TRACE_RETURN()
    return;
    // 0x801F63B4: nop

;}
RECOMP_FUNC void func_801E6F4C_5A2E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6F4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E6F50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6F54: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E6F58: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E6F5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6F60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6F64: lwc1        $f4, -0x4A54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4A54);
    // 0x801E6F68: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E6F6C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E6F70: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801E6F74: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6F78: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E6F7C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E6F80: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x801E6F84: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x801E6F88: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E6F8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E6F90: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801E6F94: jal         0x80033898
    // 0x801E6F98: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E6F98: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E6F9C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801E6FA0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E6FA4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6FA8: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E6FAC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E6FB0: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6FB4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801E6FB8: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E6FBC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6FC0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801E6FC4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E6FC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E6FCC: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801E6FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6FD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E6FD8: jr          $ra
    // 0x801E6FDC: nop

    TRACE_RETURN()
    return;
    // 0x801E6FDC: nop

;}
RECOMP_FUNC void func_801ED518_5A9428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED518: jr          $ra
    // 0x801ED51C: nop

    TRACE_RETURN()
    return;
    // 0x801ED51C: nop

    // 0x801ED520: jr          $ra
    // 0x801ED524: nop

    TRACE_RETURN()
    return;
    // 0x801ED524: nop

;}
RECOMP_FUNC void func_801DE5BC_59A4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE5C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE5C8: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE5CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE5D0: bne         $t6, $at, L_801DE5E8
    if (ctx->r14 != ctx->r1) {
        // 0x801DE5D4: nop
    
            goto L_801DE5E8;
    }
    // 0x801DE5D4: nop

    // 0x801DE5D8: jal         0x801F5BF0
    // 0x801DE5DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801F5BF0_5B1B00(rdram, ctx);
        goto after_0;
    // 0x801DE5DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x801DE5E0: b           L_801DE5F4
    // 0x801DE5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DE5F4;
    // 0x801DE5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE5E8:
    // 0x801DE5E8: jal         0x801E43B0
    // 0x801DE5EC: nop

    func_801E43B0_5A02C0(rdram, ctx);
        goto after_1;
    // 0x801DE5EC: nop

    after_1:
    // 0x801DE5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE5F4:
    // 0x801DE5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE5F8: jr          $ra
    // 0x801DE5FC: nop

    TRACE_RETURN()
    return;
    // 0x801DE5FC: nop

;}
RECOMP_FUNC void func_801DEABC_59A9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEAC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEAC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEAC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DEACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEAD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DEAD4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DEAD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DEADC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DEAE0: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801DEAE4: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801DEAE8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DEAEC: jalr        $t9
    // 0x801DEAF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DEAF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801DEAF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEAF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DEAFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEB00: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DEB04: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801DEB08: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DEB0C: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801DEB10: nop

    // 0x801DEB14: bc1f        L_801DEB38
    if (!c1cs) {
        // 0x801DEB18: nop
    
            goto L_801DEB38;
    }
    // 0x801DEB18: nop

    // 0x801DEB1C: lw          $t7, 0x5C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5C);
    // 0x801DEB20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DEB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEB28: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801DEB2C: jal         0x801DACDC
    // 0x801DEB30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DEB30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801DEB34: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_801DEB38:
    // 0x801DEB38: jal         0x801E84A4
    // 0x801DEB3C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E84A4_5A43B4(rdram, ctx);
        goto after_2;
    // 0x801DEB3C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x801DEB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEB48: jr          $ra
    // 0x801DEB4C: nop

    TRACE_RETURN()
    return;
    // 0x801DEB4C: nop

;}
RECOMP_FUNC void func_801E1C90_59DBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1C98: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E1C9C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E1CA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E1CA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E1CA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E1CAC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801E1CB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E1CB4: lwc1        $f0, 0x7DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801E1CB8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1CBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E1CC0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801E1CC4: nop

    // 0x801E1CC8: bc1fl       L_801E1CDC
    if (!c1cs) {
        // 0x801E1CCC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E1CDC;
    }
    goto skip_0;
    // 0x801E1CCC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E1CD0: b           L_801E1CDC
    // 0x801E1CD4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E1CDC;
    // 0x801E1CD4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E1CD8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E1CDC:
    // 0x801E1CDC: ldc1        $f8, -0x4D28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4D28);
    // 0x801E1CE0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E1CE4: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801E1CE8: nop

    // 0x801E1CEC: bc1t        L_801E1E00
    if (c1cs) {
        // 0x801E1CF0: nop
    
            goto L_801E1E00;
    }
    // 0x801E1CF0: nop

    // 0x801E1CF4: jal         0x801E7DE8
    // 0x801E1CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E1CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1CFC: beq         $v0, $zero, L_801E1D24
    if (ctx->r2 == 0) {
        // 0x801E1D00: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E1D24;
    }
    // 0x801E1D00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1D04: lui         $a1, 0x3F8F
    ctx->r5 = S32(0X3F8F << 16);
    // 0x801E1D08: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801E1D0C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801E1D10: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x801E1D14: jal         0x801E3DE0
    // 0x801E1D18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3DE0_59FCF0(rdram, ctx);
        goto after_1;
    // 0x801E1D18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x801E1D1C: b           L_801E1D40
    // 0x801E1D20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_801E1D40;
    // 0x801E1D20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_801E1D24:
    // 0x801E1D24: lui         $a1, 0x4033
    ctx->r5 = S32(0X4033 << 16);
    // 0x801E1D28: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801E1D2C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801E1D30: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801E1D34: jal         0x801E3DE0
    // 0x801E1D38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3DE0_59FCF0(rdram, ctx);
        goto after_2;
    // 0x801E1D38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x801E1D3C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_801E1D40:
    // 0x801E1D40: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E1D44: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E1D48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E1D4C: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801E1D50: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E1D54: nop

    // 0x801E1D58: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801E1D5C: beql        $t9, $zero, L_801E1DAC
    if (ctx->r25 == 0) {
        // 0x801E1D60: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_801E1DAC;
    }
    goto skip_1;
    // 0x801E1D60: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801E1D64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E1D68: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E1D6C: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E1D70: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E1D74: nop

    // 0x801E1D78: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801E1D7C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E1D80: nop

    // 0x801E1D84: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801E1D88: bne         $t9, $zero, L_801E1DA0
    if (ctx->r25 != 0) {
        // 0x801E1D8C: nop
    
            goto L_801E1DA0;
    }
    // 0x801E1D8C: nop

    // 0x801E1D90: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x801E1D94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D98: b           L_801E1DB8
    // 0x801E1D9C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_801E1DB8;
    // 0x801E1D9C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_801E1DA0:
    // 0x801E1DA0: b           L_801E1DB8
    // 0x801E1DA4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_801E1DB8;
    // 0x801E1DA4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801E1DA8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_801E1DAC:
    // 0x801E1DAC: nop

    // 0x801E1DB0: bltz        $t9, L_801E1DA0
    if (SIGNED(ctx->r25) < 0) {
        // 0x801E1DB4: nop
    
            goto L_801E1DA0;
    }
    // 0x801E1DB4: nop

L_801E1DB8:
    // 0x801E1DB8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E1DBC: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x801E1DC0: beq         $at, $zero, L_801E1DF4
    if (ctx->r1 == 0) {
        // 0x801E1DC4: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_801E1DF4;
    }
    // 0x801E1DC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801E1DC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E1DCC: addu        $at, $at, $t9
    gpr jr_addend_801E1DD4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801E1DD0: lw          $t9, -0x4D20($at)
    ctx->r25 = ADD32(ctx->r1, -0X4D20);
    // 0x801E1DD4: jr          $t9
    // 0x801E1DD8: nop

    switch (jr_addend_801E1DD4 >> 2) {
        case 0: goto L_801E1DDC; break;
        case 1: goto L_801E1DE4; break;
        case 2: goto L_801E1DEC; break;
        case 3: goto L_801E1DF4; break;
        case 4: goto L_801E1DF4; break;
        case 5: goto L_801E1DF4; break;
        case 6: goto L_801E1DF4; break;
        case 7: goto L_801E1DF4; break;
        default: switch_error(__func__, 0x801E1DD4, 0x8020B2E0);
    }
    // 0x801E1DD8: nop

L_801E1DDC:
    // 0x801E1DDC: b           L_801E1E00
    // 0x801E1DE0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_801E1E00;
    // 0x801E1DE0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_801E1DE4:
    // 0x801E1DE4: b           L_801E1E00
    // 0x801E1DE8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_801E1E00;
    // 0x801E1DE8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_801E1DEC:
    // 0x801E1DEC: b           L_801E1E00
    // 0x801E1DF0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_801E1E00;
    // 0x801E1DF0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_801E1DF4:
    // 0x801E1DF4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x801E1DF8: b           L_801E1E00
    // 0x801E1DFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_801E1E00;
    // 0x801E1DFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801E1E00:
    // 0x801E1E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1E08: jr          $ra
    // 0x801E1E0C: nop

    TRACE_RETURN()
    return;
    // 0x801E1E0C: nop

;}
RECOMP_FUNC void func_801E32D4_59F1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E32D4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801E32D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E32DC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E32E0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E32E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E32E8: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x801E32EC: swc1        $f14, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f14.u32l;
    // 0x801E32F0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801E32F4: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E32F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E32FC: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    // 0x801E3300: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x801E3304: lhu         $t9, 0x94($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X94);
    // 0x801E3308: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801E330C: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x801E3310: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x801E3314: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E3318: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E331C: jr          $ra
    // 0x801E3320: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3320: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801E4624_5A0534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E4628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E462C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4634: jal         0x801E7DE8
    // 0x801E4638: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E4638: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E463C: bne         $v0, $zero, L_801E4EC0
    if (ctx->r2 != 0) {
        // 0x801E4640: lbu         $a3, 0x2F($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X2F);
            goto L_801E4EC0;
    }
    // 0x801E4640: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E4644: bne         $a3, $zero, L_801E4688
    if (ctx->r7 != 0) {
        // 0x801E4648: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4688;
    }
    // 0x801E4648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E464C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E4650: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E4654: addiu       $a2, $zero, 0x243
    ctx->r6 = ADD32(0, 0X243);
    // 0x801E4658: jal         0x801E53E0
    // 0x801E465C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_801E53E0_5A12F0(rdram, ctx);
        goto after_1;
    // 0x801E465C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x801E4660: bne         $v0, $zero, L_801E4EC0
    if (ctx->r2 != 0) {
        // 0x801E4664: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_801E4EC0;
    }
    // 0x801E4664: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E4668: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E466C: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E4670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4674: addiu       $a2, $zero, 0x3D0
    ctx->r6 = ADD32(0, 0X3D0);
    // 0x801E4678: jal         0x801E53E0
    // 0x801E467C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_801E53E0_5A12F0(rdram, ctx);
        goto after_2;
    // 0x801E467C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x801E4680: bne         $v0, $zero, L_801E4EC0
    if (ctx->r2 != 0) {
        // 0x801E4684: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_801E4EC0;
    }
    // 0x801E4684: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_801E4688:
    // 0x801E4688: lbu         $a0, 0x60($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X60);
    // 0x801E468C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4690: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4694: beq         $a0, $zero, L_801E46C8
    if (ctx->r4 == 0) {
        // 0x801E4698: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_801E46C8;
    }
    // 0x801E4698: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E469C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E46A0: beq         $a0, $a2, L_801E48B0
    if (ctx->r4 == ctx->r6) {
        // 0x801E46A4: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_801E48B0;
    }
    // 0x801E46A4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E46A8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801E46AC: beq         $a0, $t1, L_801E49D4
    if (ctx->r4 == ctx->r9) {
        // 0x801E46B0: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_801E49D4;
    }
    // 0x801E46B0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E46B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E46B8: beq         $v0, $at, L_801E4D08
    if (ctx->r2 == ctx->r1) {
        // 0x801E46BC: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_801E4D08;
    }
    // 0x801E46BC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E46C0: b           L_801E4EC4
    // 0x801E46C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E46C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E46C8:
    // 0x801E46C8: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E46CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E46D0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801E46D4: bne         $a2, $v1, L_801E46EC
    if (ctx->r6 != ctx->r3) {
        // 0x801E46D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E46EC;
    }
    // 0x801E46D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E46DC: jal         0x801E4ED4
    // 0x801E46E0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801E4ED4_5A0DE4(rdram, ctx);
        goto after_3;
    // 0x801E46E0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_3:
    // 0x801E46E4: b           L_801E4EC4
    // 0x801E46E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E46E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E46EC:
    // 0x801E46EC: bne         $t1, $v1, L_801E4768
    if (ctx->r9 != ctx->r3) {
        // 0x801E46F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E4768;
    }
    // 0x801E46F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E46F4: beq         $a3, $zero, L_801E4714
    if (ctx->r7 == 0) {
        // 0x801E46F8: nop
    
            goto L_801E4714;
    }
    // 0x801E46F8: nop

    // 0x801E46FC: beq         $a3, $a2, L_801E4730
    if (ctx->r7 == ctx->r6) {
        // 0x801E4700: nop
    
            goto L_801E4730;
    }
    // 0x801E4700: nop

    // 0x801E4704: beq         $a3, $t1, L_801E474C
    if (ctx->r7 == ctx->r9) {
        // 0x801E4708: nop
    
            goto L_801E474C;
    }
    // 0x801E4708: nop

    // 0x801E470C: b           L_801E4EC4
    // 0x801E4710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4714:
    // 0x801E4714: jal         0x801E29A0
    // 0x801E4718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E29A0_59E8B0(rdram, ctx);
        goto after_4;
    // 0x801E4718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E471C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4720: jal         0x801DACDC
    // 0x801E4724: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801E4724: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_5:
    // 0x801E4728: b           L_801E4EC4
    // 0x801E472C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E472C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4730:
    // 0x801E4730: jal         0x801E2B54
    // 0x801E4734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2B54_59EA64(rdram, ctx);
        goto after_6;
    // 0x801E4734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E4738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E473C: jal         0x801DACDC
    // 0x801E4740: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801E4740: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    after_7:
    // 0x801E4744: b           L_801E4EC4
    // 0x801E4748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E474C:
    // 0x801E474C: jal         0x801E2AA0
    // 0x801E4750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2AA0_59E9B0(rdram, ctx);
        goto after_8;
    // 0x801E4750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E4754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4758: jal         0x801DACDC
    // 0x801E475C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801E475C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    after_9:
    // 0x801E4760: b           L_801E4EC4
    // 0x801E4764: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4764: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4768:
    // 0x801E4768: bnel        $v1, $at, L_801E4EC4
    if (ctx->r3 != ctx->r1) {
        // 0x801E476C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_0;
    // 0x801E476C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E4770: lw          $t6, 0x10($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X10);
    // 0x801E4774: blezl       $t6, L_801E4EC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801E4778: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_1;
    // 0x801E4778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E477C: beq         $a3, $zero, L_801E479C
    if (ctx->r7 == 0) {
        // 0x801E4780: nop
    
            goto L_801E479C;
    }
    // 0x801E4780: nop

    // 0x801E4784: beq         $a3, $a2, L_801E47F8
    if (ctx->r7 == ctx->r6) {
        // 0x801E4788: nop
    
            goto L_801E47F8;
    }
    // 0x801E4788: nop

    // 0x801E478C: beq         $a3, $t1, L_801E4854
    if (ctx->r7 == ctx->r9) {
        // 0x801E4790: nop
    
            goto L_801E4854;
    }
    // 0x801E4790: nop

    // 0x801E4794: b           L_801E4EC4
    // 0x801E4798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E479C:
    // 0x801E479C: jal         0x801E291C
    // 0x801E47A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E291C_59E82C(rdram, ctx);
        goto after_10;
    // 0x801E47A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801E47A4: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E47A8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E47AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E47B0: lbu         $t8, 0x68($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X68);
    // 0x801E47B4: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E47B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E47BC: bne         $t8, $at, L_801E47E8
    if (ctx->r24 != ctx->r1) {
        // 0x801E47C0: nop
    
            goto L_801E47E8;
    }
    // 0x801E47C0: nop

    // 0x801E47C4: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x801E47C8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x801E47CC: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x801E47D0: bne         $at, $zero, L_801E47E8
    if (ctx->r1 != 0) {
        // 0x801E47D4: nop
    
            goto L_801E47E8;
    }
    // 0x801E47D4: nop

    // 0x801E47D8: jal         0x801DACDC
    // 0x801E47DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_11;
    // 0x801E47DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801E47E0: b           L_801E4EC4
    // 0x801E47E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E47E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E47E8:
    // 0x801E47E8: jal         0x801DACDC
    // 0x801E47EC: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_12;
    // 0x801E47EC: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_12:
    // 0x801E47F0: b           L_801E4EC4
    // 0x801E47F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E47F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E47F8:
    // 0x801E47F8: jal         0x801E2950
    // 0x801E47FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2950_59E860(rdram, ctx);
        goto after_13;
    // 0x801E47FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x801E4800: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4804: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4808: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E480C: lbu         $t3, 0x68($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X68);
    // 0x801E4810: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4818: bne         $t3, $at, L_801E4844
    if (ctx->r11 != ctx->r1) {
        // 0x801E481C: nop
    
            goto L_801E4844;
    }
    // 0x801E481C: nop

    // 0x801E4820: lw          $t4, 0x10($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X10);
    // 0x801E4824: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x801E4828: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x801E482C: bne         $at, $zero, L_801E4844
    if (ctx->r1 != 0) {
        // 0x801E4830: nop
    
            goto L_801E4844;
    }
    // 0x801E4830: nop

    // 0x801E4834: jal         0x801DACDC
    // 0x801E4838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_14;
    // 0x801E4838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801E483C: b           L_801E4EC4
    // 0x801E4840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4844:
    // 0x801E4844: jal         0x801DACDC
    // 0x801E4848: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_15;
    // 0x801E4848: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_15:
    // 0x801E484C: b           L_801E4EC4
    // 0x801E4850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4854:
    // 0x801E4854: jal         0x801E2980
    // 0x801E4858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2980_59E890(rdram, ctx);
        goto after_16;
    // 0x801E4858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x801E485C: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4860: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4864: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4868: lbu         $t6, 0x68($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X68);
    // 0x801E486C: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4874: bne         $t6, $at, L_801E48A0
    if (ctx->r14 != ctx->r1) {
        // 0x801E4878: nop
    
            goto L_801E48A0;
    }
    // 0x801E4878: nop

    // 0x801E487C: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x801E4880: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x801E4884: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x801E4888: bne         $at, $zero, L_801E48A0
    if (ctx->r1 != 0) {
        // 0x801E488C: nop
    
            goto L_801E48A0;
    }
    // 0x801E488C: nop

    // 0x801E4890: jal         0x801DACDC
    // 0x801E4894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_17;
    // 0x801E4894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801E4898: b           L_801E4EC4
    // 0x801E489C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E489C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E48A0:
    // 0x801E48A0: jal         0x801DACDC
    // 0x801E48A4: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_18;
    // 0x801E48A4: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    after_18:
    // 0x801E48A8: b           L_801E4EC4
    // 0x801E48AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E48AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E48B0:
    // 0x801E48B0: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E48B4: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E48B8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801E48BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E48C0: bne         $a2, $v1, L_801E48D8
    if (ctx->r6 != ctx->r3) {
        // 0x801E48C4: nop
    
            goto L_801E48D8;
    }
    // 0x801E48C4: nop

    // 0x801E48C8: jal         0x801E4ED4
    // 0x801E48CC: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801E4ED4_5A0DE4(rdram, ctx);
        goto after_19;
    // 0x801E48CC: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_19:
    // 0x801E48D0: b           L_801E4EC4
    // 0x801E48D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E48D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E48D8:
    // 0x801E48D8: bne         $t1, $v1, L_801E4954
    if (ctx->r9 != ctx->r3) {
        // 0x801E48DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_801E4954;
    }
    // 0x801E48DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801E48E0: beq         $a3, $zero, L_801E4900
    if (ctx->r7 == 0) {
        // 0x801E48E4: nop
    
            goto L_801E4900;
    }
    // 0x801E48E4: nop

    // 0x801E48E8: beq         $a3, $a2, L_801E491C
    if (ctx->r7 == ctx->r6) {
        // 0x801E48EC: nop
    
            goto L_801E491C;
    }
    // 0x801E48EC: nop

    // 0x801E48F0: beq         $a3, $t1, L_801E4938
    if (ctx->r7 == ctx->r9) {
        // 0x801E48F4: nop
    
            goto L_801E4938;
    }
    // 0x801E48F4: nop

    // 0x801E48F8: b           L_801E4EC4
    // 0x801E48FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E48FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4900:
    // 0x801E4900: jal         0x801E2BA8
    // 0x801E4904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2BA8_59EAB8(rdram, ctx);
        goto after_20;
    // 0x801E4904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x801E4908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E490C: jal         0x801DACDC
    // 0x801E4910: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_21;
    // 0x801E4910: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_21:
    // 0x801E4914: b           L_801E4EC4
    // 0x801E4918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E491C:
    // 0x801E491C: jal         0x801E2C50
    // 0x801E4920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2C50_59EB60(rdram, ctx);
        goto after_22;
    // 0x801E4920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x801E4924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4928: jal         0x801DACDC
    // 0x801E492C: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_23;
    // 0x801E492C: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    after_23:
    // 0x801E4930: b           L_801E4EC4
    // 0x801E4934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4938:
    // 0x801E4938: jal         0x801E2C70
    // 0x801E493C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2C70_59EB80(rdram, ctx);
        goto after_24;
    // 0x801E493C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x801E4940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4944: jal         0x801DACDC
    // 0x801E4948: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_25;
    // 0x801E4948: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    after_25:
    // 0x801E494C: b           L_801E4EC4
    // 0x801E4950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4954:
    // 0x801E4954: bnel        $v0, $v1, L_801E4EC4
    if (ctx->r2 != ctx->r3) {
        // 0x801E4958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_2;
    // 0x801E4958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801E495C: beql        $a3, $zero, L_801E4980
    if (ctx->r7 == 0) {
        // 0x801E4960: lw          $t8, 0x5C($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X5C);
            goto L_801E4980;
    }
    goto skip_3;
    // 0x801E4960: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    skip_3:
    // 0x801E4964: beql        $a3, $a2, L_801E4EC4
    if (ctx->r7 == ctx->r6) {
        // 0x801E4968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_4;
    // 0x801E4968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x801E496C: beql        $a3, $t1, L_801E49AC
    if (ctx->r7 == ctx->r9) {
        // 0x801E4970: lw          $t2, 0x5C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X5C);
            goto L_801E49AC;
    }
    goto skip_5;
    // 0x801E4970: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    skip_5:
    // 0x801E4974: b           L_801E4EC4
    // 0x801E4978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E497C: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
L_801E4980:
    // 0x801E4980: lbu         $t9, 0x68($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X68);
    // 0x801E4984: bnel        $v0, $t9, L_801E4EC4
    if (ctx->r2 != ctx->r25) {
        // 0x801E4988: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_6;
    // 0x801E4988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x801E498C: jal         0x801E2CAC
    // 0x801E4990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2CAC_59EBBC(rdram, ctx);
        goto after_26;
    // 0x801E4990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x801E4994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4998: jal         0x801DACDC
    // 0x801E499C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_27;
    // 0x801E499C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    after_27:
    // 0x801E49A0: b           L_801E4EC4
    // 0x801E49A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E49A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E49A8: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
L_801E49AC:
    // 0x801E49AC: lbu         $t3, 0x68($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X68);
    // 0x801E49B0: bnel        $v0, $t3, L_801E4EC4
    if (ctx->r2 != ctx->r11) {
        // 0x801E49B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_7;
    // 0x801E49B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x801E49B8: jal         0x801E2CCC
    // 0x801E49BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2CCC_59EBDC(rdram, ctx);
        goto after_28;
    // 0x801E49BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x801E49C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E49C4: jal         0x801DACDC
    // 0x801E49C8: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_29;
    // 0x801E49C8: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    after_29:
    // 0x801E49CC: b           L_801E4EC4
    // 0x801E49D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E49D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E49D4:
    // 0x801E49D4: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E49D8: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E49DC: bne         $a2, $v1, L_801E4B38
    if (ctx->r6 != ctx->r3) {
        // 0x801E49E0: nop
    
            goto L_801E4B38;
    }
    // 0x801E49E0: nop

    // 0x801E49E4: beq         $a3, $zero, L_801E4A04
    if (ctx->r7 == 0) {
        // 0x801E49E8: sll         $t4, $a0, 2
        ctx->r12 = S32(ctx->r4 << 2);
            goto L_801E4A04;
    }
    // 0x801E49E8: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x801E49EC: beq         $a3, $a2, L_801E4A8C
    if (ctx->r7 == ctx->r6) {
        // 0x801E49F0: sll         $t5, $a0, 2
        ctx->r13 = S32(ctx->r4 << 2);
            goto L_801E4A8C;
    }
    // 0x801E49F0: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x801E49F4: beq         $a3, $t1, L_801E4B14
    if (ctx->r7 == ctx->r9) {
        // 0x801E49F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4B14;
    }
    // 0x801E49F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E49FC: b           L_801E4EC4
    // 0x801E4A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4A04:
    // 0x801E4A04: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E4A08: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x801E4A0C: lw          $v0, -0x3954($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3954);
    // 0x801E4A10: bne         $a2, $v0, L_801E4A40
    if (ctx->r6 != ctx->r2) {
        // 0x801E4A14: nop
    
            goto L_801E4A40;
    }
    // 0x801E4A14: nop

    // 0x801E4A18: jal         0x801E2D2C
    // 0x801E4A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2D2C_59EC3C(rdram, ctx);
        goto after_30;
    // 0x801E4A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x801E4A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A24: jal         0x801DACDC
    // 0x801E4A28: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_31;
    // 0x801E4A28: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_31:
    // 0x801E4A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A30: jal         0x801F5C4C
    // 0x801E4A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_32;
    // 0x801E4A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x801E4A38: b           L_801E4EC4
    // 0x801E4A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4A40:
    // 0x801E4A40: bne         $t1, $v0, L_801E4A70
    if (ctx->r9 != ctx->r2) {
        // 0x801E4A44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4A70;
    }
    // 0x801E4A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A48: jal         0x801E2D50
    // 0x801E4A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2D50_59EC60(rdram, ctx);
        goto after_33;
    // 0x801E4A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x801E4A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A54: jal         0x801DACDC
    // 0x801E4A58: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_34;
    // 0x801E4A58: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_34:
    // 0x801E4A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A60: jal         0x801F5C4C
    // 0x801E4A64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_35;
    // 0x801E4A64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_35:
    // 0x801E4A68: b           L_801E4EC4
    // 0x801E4A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4A70:
    // 0x801E4A70: jal         0x801E2800
    // 0x801E4A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E2800_59E710(rdram, ctx);
        goto after_36;
    // 0x801E4A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_36:
    // 0x801E4A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4A7C: jal         0x801DACDC
    // 0x801E4A80: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_37;
    // 0x801E4A80: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_37:
    // 0x801E4A84: b           L_801E4EC4
    // 0x801E4A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4A8C:
    // 0x801E4A8C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E4A90: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x801E4A94: lw          $v0, -0x3954($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3954);
    // 0x801E4A98: bne         $a2, $v0, L_801E4AC8
    if (ctx->r6 != ctx->r2) {
        // 0x801E4A9C: nop
    
            goto L_801E4AC8;
    }
    // 0x801E4A9C: nop

    // 0x801E4AA0: jal         0x801E2E30
    // 0x801E4AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2E30_59ED40(rdram, ctx);
        goto after_38;
    // 0x801E4AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x801E4AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4AAC: jal         0x801DACDC
    // 0x801E4AB0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_39;
    // 0x801E4AB0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_39:
    // 0x801E4AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4AB8: jal         0x801F5C4C
    // 0x801E4ABC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_40;
    // 0x801E4ABC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_40:
    // 0x801E4AC0: b           L_801E4EC4
    // 0x801E4AC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4AC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4AC8:
    // 0x801E4AC8: bne         $t1, $v0, L_801E4AF8
    if (ctx->r9 != ctx->r2) {
        // 0x801E4ACC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4AF8;
    }
    // 0x801E4ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4AD0: jal         0x801E2E60
    // 0x801E4AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2E60_59ED70(rdram, ctx);
        goto after_41;
    // 0x801E4AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x801E4AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4ADC: jal         0x801DACDC
    // 0x801E4AE0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_42;
    // 0x801E4AE0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_42:
    // 0x801E4AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4AE8: jal         0x801F5C4C
    // 0x801E4AEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_43;
    // 0x801E4AEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_43:
    // 0x801E4AF0: b           L_801E4EC4
    // 0x801E4AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4AF8:
    // 0x801E4AF8: jal         0x801E28B0
    // 0x801E4AFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801E28B0_59E7C0(rdram, ctx);
        goto after_44;
    // 0x801E4AFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_44:
    // 0x801E4B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4B04: jal         0x801DACDC
    // 0x801E4B08: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_45;
    // 0x801E4B08: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    after_45:
    // 0x801E4B0C: b           L_801E4EC4
    // 0x801E4B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4B14:
    // 0x801E4B14: jal         0x801E28D8
    // 0x801E4B18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E28D8_59E7E8(rdram, ctx);
        goto after_46;
    // 0x801E4B18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_46:
    // 0x801E4B1C: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x801E4B20: sb          $t6, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r14;
    // 0x801E4B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4B28: jal         0x801DACDC
    // 0x801E4B2C: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_47;
    // 0x801E4B2C: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    after_47:
    // 0x801E4B30: b           L_801E4EC4
    // 0x801E4B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4B38:
    // 0x801E4B38: bne         $t1, $v1, L_801E4BC0
    if (ctx->r9 != ctx->r3) {
        // 0x801E4B3C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E4BC0;
    }
    // 0x801E4B3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4B40: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x801E4B44: blezl       $t7, L_801E4EC4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x801E4B48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_8;
    // 0x801E4B48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x801E4B4C: beq         $a3, $zero, L_801E4B6C
    if (ctx->r7 == 0) {
        // 0x801E4B50: nop
    
            goto L_801E4B6C;
    }
    // 0x801E4B50: nop

    // 0x801E4B54: beq         $a3, $a2, L_801E4B88
    if (ctx->r7 == ctx->r6) {
        // 0x801E4B58: nop
    
            goto L_801E4B88;
    }
    // 0x801E4B58: nop

    // 0x801E4B5C: beq         $a3, $t1, L_801E4BA4
    if (ctx->r7 == ctx->r9) {
        // 0x801E4B60: nop
    
            goto L_801E4BA4;
    }
    // 0x801E4B60: nop

    // 0x801E4B64: b           L_801E4EC4
    // 0x801E4B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4B6C:
    // 0x801E4B6C: jal         0x801E2E90
    // 0x801E4B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2E90_59EDA0(rdram, ctx);
        goto after_48;
    // 0x801E4B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x801E4B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4B78: jal         0x801DACDC
    // 0x801E4B7C: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_49;
    // 0x801E4B7C: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_49:
    // 0x801E4B80: b           L_801E4EC4
    // 0x801E4B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4B88:
    // 0x801E4B88: jal         0x801E2EB0
    // 0x801E4B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2EB0_59EDC0(rdram, ctx);
        goto after_50;
    // 0x801E4B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_50:
    // 0x801E4B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4B94: jal         0x801DACDC
    // 0x801E4B98: addiu       $a1, $zero, 0x91
    ctx->r5 = ADD32(0, 0X91);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_51;
    // 0x801E4B98: addiu       $a1, $zero, 0x91
    ctx->r5 = ADD32(0, 0X91);
    after_51:
    // 0x801E4B9C: b           L_801E4EC4
    // 0x801E4BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4BA4:
    // 0x801E4BA4: jal         0x801E2ED0
    // 0x801E4BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2ED0_59EDE0(rdram, ctx);
        goto after_52;
    // 0x801E4BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x801E4BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4BB0: jal         0x801DACDC
    // 0x801E4BB4: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_53;
    // 0x801E4BB4: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    after_53:
    // 0x801E4BB8: b           L_801E4EC4
    // 0x801E4BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4BC0:
    // 0x801E4BC0: bnel        $v1, $at, L_801E4EC4
    if (ctx->r3 != ctx->r1) {
        // 0x801E4BC4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_9;
    // 0x801E4BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x801E4BC8: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x801E4BCC: blezl       $t8, L_801E4EC4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801E4BD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_10;
    // 0x801E4BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x801E4BD4: beq         $a3, $zero, L_801E4BF4
    if (ctx->r7 == 0) {
        // 0x801E4BD8: nop
    
            goto L_801E4BF4;
    }
    // 0x801E4BD8: nop

    // 0x801E4BDC: beq         $a3, $a2, L_801E4C50
    if (ctx->r7 == ctx->r6) {
        // 0x801E4BE0: nop
    
            goto L_801E4C50;
    }
    // 0x801E4BE0: nop

    // 0x801E4BE4: beq         $a3, $t1, L_801E4CAC
    if (ctx->r7 == ctx->r9) {
        // 0x801E4BE8: nop
    
            goto L_801E4CAC;
    }
    // 0x801E4BE8: nop

    // 0x801E4BEC: b           L_801E4EC4
    // 0x801E4BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4BF4:
    // 0x801E4BF4: jal         0x801E2F14
    // 0x801E4BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2F14_59EE24(rdram, ctx);
        goto after_54;
    // 0x801E4BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x801E4BFC: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4C00: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4C04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4C08: lbu         $t2, 0x68($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X68);
    // 0x801E4C0C: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4C14: bne         $t2, $at, L_801E4C40
    if (ctx->r10 != ctx->r1) {
        // 0x801E4C18: nop
    
            goto L_801E4C40;
    }
    // 0x801E4C18: nop

    // 0x801E4C1C: lw          $t3, 0x10($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X10);
    // 0x801E4C20: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x801E4C24: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x801E4C28: bne         $at, $zero, L_801E4C40
    if (ctx->r1 != 0) {
        // 0x801E4C2C: nop
    
            goto L_801E4C40;
    }
    // 0x801E4C2C: nop

    // 0x801E4C30: jal         0x801DACDC
    // 0x801E4C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_55;
    // 0x801E4C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x801E4C38: b           L_801E4EC4
    // 0x801E4C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4C40:
    // 0x801E4C40: jal         0x801DACDC
    // 0x801E4C44: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_56;
    // 0x801E4C44: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
    after_56:
    // 0x801E4C48: b           L_801E4EC4
    // 0x801E4C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4C50:
    // 0x801E4C50: jal         0x801E2F38
    // 0x801E4C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2F38_59EE48(rdram, ctx);
        goto after_57;
    // 0x801E4C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x801E4C58: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4C5C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4C60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4C64: lbu         $t5, 0x68($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X68);
    // 0x801E4C68: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4C70: bne         $t5, $at, L_801E4C9C
    if (ctx->r13 != ctx->r1) {
        // 0x801E4C74: nop
    
            goto L_801E4C9C;
    }
    // 0x801E4C74: nop

    // 0x801E4C78: lw          $t6, 0x10($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X10);
    // 0x801E4C7C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x801E4C80: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x801E4C84: bne         $at, $zero, L_801E4C9C
    if (ctx->r1 != 0) {
        // 0x801E4C88: nop
    
            goto L_801E4C9C;
    }
    // 0x801E4C88: nop

    // 0x801E4C8C: jal         0x801DACDC
    // 0x801E4C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_58;
    // 0x801E4C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
    // 0x801E4C94: b           L_801E4EC4
    // 0x801E4C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4C9C:
    // 0x801E4C9C: jal         0x801DACDC
    // 0x801E4CA0: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_59;
    // 0x801E4CA0: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    after_59:
    // 0x801E4CA4: b           L_801E4EC4
    // 0x801E4CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4CAC:
    // 0x801E4CAC: jal         0x801E2F44
    // 0x801E4CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2F44_59EE54(rdram, ctx);
        goto after_60;
    // 0x801E4CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x801E4CB4: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4CB8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4CBC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4CC0: lbu         $t8, 0x68($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X68);
    // 0x801E4CC4: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4CCC: bne         $t8, $at, L_801E4CF8
    if (ctx->r24 != ctx->r1) {
        // 0x801E4CD0: nop
    
            goto L_801E4CF8;
    }
    // 0x801E4CD0: nop

    // 0x801E4CD4: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x801E4CD8: addiu       $a1, $zero, 0x99
    ctx->r5 = ADD32(0, 0X99);
    // 0x801E4CDC: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x801E4CE0: bne         $at, $zero, L_801E4CF8
    if (ctx->r1 != 0) {
        // 0x801E4CE4: nop
    
            goto L_801E4CF8;
    }
    // 0x801E4CE4: nop

    // 0x801E4CE8: jal         0x801DACDC
    // 0x801E4CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_61;
    // 0x801E4CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x801E4CF0: b           L_801E4EC4
    // 0x801E4CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4CF8:
    // 0x801E4CF8: jal         0x801DACDC
    // 0x801E4CFC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_62;
    // 0x801E4CFC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_62:
    // 0x801E4D00: b           L_801E4EC4
    // 0x801E4D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4D08:
    // 0x801E4D08: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4D0C: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E4D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4D14: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E4D18: bne         $a2, $v1, L_801E4D40
    if (ctx->r6 != ctx->r3) {
        // 0x801E4D1C: nop
    
            goto L_801E4D40;
    }
    // 0x801E4D1C: nop

    // 0x801E4D20: jal         0x801E4ED4
    // 0x801E4D24: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_801E4ED4_5A0DE4(rdram, ctx);
        goto after_63;
    // 0x801E4D24: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_63:
    // 0x801E4D28: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4D2C: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4D30: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E4D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E4D38: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E4D3C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_801E4D40:
    // 0x801E4D40: bnel        $t1, $v1, L_801E4D80
    if (ctx->r9 != ctx->r3) {
        // 0x801E4D44: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E4D80;
    }
    goto skip_11;
    // 0x801E4D44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_11:
    // 0x801E4D48: bne         $a3, $zero, L_801E4D7C
    if (ctx->r7 != 0) {
        // 0x801E4D4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E4D7C;
    }
    // 0x801E4D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4D50: jal         0x801E2FA4
    // 0x801E4D54: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_801E2FA4_59EEB4(rdram, ctx);
        goto after_64;
    // 0x801E4D54: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_64:
    // 0x801E4D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4D5C: jal         0x801DACDC
    // 0x801E4D60: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_65;
    // 0x801E4D60: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    after_65:
    // 0x801E4D64: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4D68: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4D6C: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x801E4D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E4D74: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801E4D78: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_801E4D7C:
    // 0x801E4D7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_801E4D80:
    // 0x801E4D80: bnel        $v1, $at, L_801E4EC4
    if (ctx->r3 != ctx->r1) {
        // 0x801E4D84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_12;
    // 0x801E4D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_12:
    // 0x801E4D88: lw          $t2, 0x10($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X10);
    // 0x801E4D8C: blezl       $t2, L_801E4EC4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x801E4D90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4EC4;
    }
    goto skip_13;
    // 0x801E4D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_13:
    // 0x801E4D94: beq         $a3, $zero, L_801E4DB4
    if (ctx->r7 == 0) {
        // 0x801E4D98: nop
    
            goto L_801E4DB4;
    }
    // 0x801E4D98: nop

    // 0x801E4D9C: beq         $a3, $a2, L_801E4E10
    if (ctx->r7 == ctx->r6) {
        // 0x801E4DA0: nop
    
            goto L_801E4E10;
    }
    // 0x801E4DA0: nop

    // 0x801E4DA4: beq         $a3, $t1, L_801E4E6C
    if (ctx->r7 == ctx->r9) {
        // 0x801E4DA8: nop
    
            goto L_801E4E6C;
    }
    // 0x801E4DA8: nop

    // 0x801E4DAC: b           L_801E4EC4
    // 0x801E4DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4DB4:
    // 0x801E4DB4: jal         0x801E3008
    // 0x801E4DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3008_59EF18(rdram, ctx);
        goto after_66;
    // 0x801E4DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x801E4DBC: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4DC0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4DC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4DC8: lbu         $t4, 0x68($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X68);
    // 0x801E4DCC: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4DD4: bne         $t4, $at, L_801E4E00
    if (ctx->r12 != ctx->r1) {
        // 0x801E4DD8: nop
    
            goto L_801E4E00;
    }
    // 0x801E4DD8: nop

    // 0x801E4DDC: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x801E4DE0: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    // 0x801E4DE4: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x801E4DE8: bne         $at, $zero, L_801E4E00
    if (ctx->r1 != 0) {
        // 0x801E4DEC: nop
    
            goto L_801E4E00;
    }
    // 0x801E4DEC: nop

    // 0x801E4DF0: jal         0x801DACDC
    // 0x801E4DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_67;
    // 0x801E4DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_67:
    // 0x801E4DF8: b           L_801E4EC4
    // 0x801E4DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4E00:
    // 0x801E4E00: jal         0x801DACDC
    // 0x801E4E04: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_68;
    // 0x801E4E04: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    after_68:
    // 0x801E4E08: b           L_801E4EC4
    // 0x801E4E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4E10:
    // 0x801E4E10: jal         0x801E303C
    // 0x801E4E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E303C_59EF4C(rdram, ctx);
        goto after_69;
    // 0x801E4E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_69:
    // 0x801E4E18: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4E1C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4E20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4E24: lbu         $t7, 0x68($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X68);
    // 0x801E4E28: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4E30: bne         $t7, $at, L_801E4E5C
    if (ctx->r15 != ctx->r1) {
        // 0x801E4E34: nop
    
            goto L_801E4E5C;
    }
    // 0x801E4E34: nop

    // 0x801E4E38: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x801E4E3C: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x801E4E40: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x801E4E44: bne         $at, $zero, L_801E4E5C
    if (ctx->r1 != 0) {
        // 0x801E4E48: nop
    
            goto L_801E4E5C;
    }
    // 0x801E4E48: nop

    // 0x801E4E4C: jal         0x801DACDC
    // 0x801E4E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_70;
    // 0x801E4E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_70:
    // 0x801E4E54: b           L_801E4EC4
    // 0x801E4E58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4E58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4E5C:
    // 0x801E4E5C: jal         0x801DACDC
    // 0x801E4E60: addiu       $a1, $zero, 0xA5
    ctx->r5 = ADD32(0, 0XA5);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_71;
    // 0x801E4E60: addiu       $a1, $zero, 0xA5
    ctx->r5 = ADD32(0, 0XA5);
    after_71:
    // 0x801E4E64: b           L_801E4EC4
    // 0x801E4E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4E6C:
    // 0x801E4E6C: jal         0x801E305C
    // 0x801E4E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E305C_59EF6C(rdram, ctx);
        goto after_72;
    // 0x801E4E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_72:
    // 0x801E4E74: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E4E78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4E7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E4E80: lbu         $t2, 0x68($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X68);
    // 0x801E4E84: addiu       $t0, $t0, -0x3A28
    ctx->r8 = ADD32(ctx->r8, -0X3A28);
    // 0x801E4E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4E8C: bne         $t2, $at, L_801E4EB8
    if (ctx->r10 != ctx->r1) {
        // 0x801E4E90: nop
    
            goto L_801E4EB8;
    }
    // 0x801E4E90: nop

    // 0x801E4E94: lw          $t3, 0x10($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X10);
    // 0x801E4E98: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    // 0x801E4E9C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x801E4EA0: bne         $at, $zero, L_801E4EB8
    if (ctx->r1 != 0) {
        // 0x801E4EA4: nop
    
            goto L_801E4EB8;
    }
    // 0x801E4EA4: nop

    // 0x801E4EA8: jal         0x801DACDC
    // 0x801E4EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_73;
    // 0x801E4EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_73:
    // 0x801E4EB0: b           L_801E4EC4
    // 0x801E4EB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E4EC4;
    // 0x801E4EB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4EB8:
    // 0x801E4EB8: jal         0x801DACDC
    // 0x801E4EBC: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_74;
    // 0x801E4EBC: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    after_74:
L_801E4EC0:
    // 0x801E4EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4EC4:
    // 0x801E4EC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E4EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E4ECC: jr          $ra
    // 0x801E4ED0: nop

    TRACE_RETURN()
    return;
    // 0x801E4ED0: nop

;}
RECOMP_FUNC void func_80213C04_5CF0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213C10: lhu         $t7, 0x8A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X8A);
    // 0x80213C14: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80213C18: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x80213C1C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80213C20: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80213C24: bne         $t9, $zero, L_80213C34
    if (ctx->r25 != 0) {
        // 0x80213C28: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_80213C34;
    }
    // 0x80213C28: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x80213C2C: jal         0x80034ED4
    // 0x80213C30: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80213C30: nop

    after_0:
L_80213C34:
    // 0x80213C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213C3C: jr          $ra
    // 0x80213C40: nop

    TRACE_RETURN()
    return;
    // 0x80213C40: nop

;}
RECOMP_FUNC void func_80210480_5CB950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210488: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021048C: jal         0x80013AC4
    // 0x80210490: addiu       $a0, $a0, -0x1F8C
    ctx->r4 = ADD32(ctx->r4, -0X1F8C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210490: addiu       $a0, $a0, -0x1F8C
    ctx->r4 = ADD32(ctx->r4, -0X1F8C);
    after_0:
    // 0x80210494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021049C: jr          $ra
    // 0x802104A0: nop

    TRACE_RETURN()
    return;
    // 0x802104A0: nop

;}
RECOMP_FUNC void func_8021E134_5D9604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E134: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021E138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E13C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8021E140: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021E144: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8021E148: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021E14C: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x8021E150: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021E154: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x8021E158: sb          $t7, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r15;
    // 0x8021E15C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8021E160: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8021E164: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x8021E168: slti        $at, $t8, 0xFF
    ctx->r1 = SIGNED(ctx->r24) < 0XFF ? 1 : 0;
    // 0x8021E16C: beq         $at, $zero, L_8021E1A0
    if (ctx->r1 == 0) {
        // 0x8021E170: addiu       $a0, $a0, 0xA4
        ctx->r4 = ADD32(ctx->r4, 0XA4);
            goto L_8021E1A0;
    }
    // 0x8021E170: addiu       $a0, $a0, 0xA4
    ctx->r4 = ADD32(ctx->r4, 0XA4);
    // 0x8021E174: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x8021E178: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
    // 0x8021E17C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8021E180: lui         $t2, 0x8024
    ctx->r10 = S32(0X8024 << 16);
    // 0x8021E184: addiu       $t2, $t2, -0x78B8
    ctx->r10 = ADD32(ctx->r10, -0X78B8);
    // 0x8021E188: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8021E18C: addiu       $a0, $a0, 0xA4
    ctx->r4 = ADD32(ctx->r4, 0XA4);
    // 0x8021E190: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8021E194: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8021E198: b           L_8021E1B4
    // 0x8021E19C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
        goto L_8021E1B4;
    // 0x8021E19C: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
L_8021E1A0:
    // 0x8021E1A0: lui         $t4, 0x8024
    ctx->r12 = S32(0X8024 << 16);
    // 0x8021E1A4: addiu       $t4, $t4, -0x7910
    ctx->r12 = ADD32(ctx->r12, -0X7910);
    // 0x8021E1A8: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x8021E1AC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8021E1B0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
L_8021E1B4:
    // 0x8021E1B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021E1B8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8021E1BC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8021E1C0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E1C4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8021E1C8: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x8021E1CC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8021E1D0: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8021E1D4: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8021E1D8: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8021E1DC: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8021E1E0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8021E1E4: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8021E1E8: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x8021E1EC: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x8021E1F0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8021E1F4: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8021E1F8: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x8021E1FC: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x8021E200: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8021E204: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8021E208: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8021E20C: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x8021E210: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x8021E214: andi        $t2, $t8, 0xFF
    ctx->r10 = ctx->r24 & 0XFF;
    // 0x8021E218: sll         $t3, $t5, 24
    ctx->r11 = S32(ctx->r13 << 24);
    // 0x8021E21C: or          $t1, $t3, $t7
    ctx->r9 = ctx->r11 | ctx->r15;
    // 0x8021E220: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x8021E224: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x8021E228: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8021E22C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x8021E230: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8021E234: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021E238: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8021E23C: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x8021E240: subu        $a1, $a0, $v0
    ctx->r5 = SUB32(ctx->r4, ctx->r2);
    // 0x8021E244: jal         0x80040620
    // 0x8021E248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021E248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021E24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E250: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021E254: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8021E258: jr          $ra
    // 0x8021E25C: nop

    TRACE_RETURN()
    return;
    // 0x8021E25C: nop

;}
RECOMP_FUNC void func_80211464_5CC934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211464: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211468: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021146C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211470: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211474: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80211478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021147C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80211480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211484: bgez        $t6, L_8021149C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80211488: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8021149C;
    }
    // 0x80211488: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8021148C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80211490: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80211494: nop

    // 0x80211498: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8021149C:
    // 0x8021149C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802114A0: ldc1        $f10, -0x6148($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6148);
    // 0x802114A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802114A8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802114AC: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x802114B0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802114B4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802114B8: nop

    // 0x802114BC: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x802114C0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802114C4: nop

    // 0x802114C8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802114CC: beql        $t8, $zero, L_80211520
    if (ctx->r24 == 0) {
        // 0x802114D0: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_80211520;
    }
    goto skip_0;
    // 0x802114D0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x802114D4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802114D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802114DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802114E0: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x802114E4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802114E8: nop

    // 0x802114EC: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x802114F0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802114F4: nop

    // 0x802114F8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802114FC: bne         $t8, $zero, L_80211514
    if (ctx->r24 != 0) {
        // 0x80211500: nop
    
            goto L_80211514;
    }
    // 0x80211500: nop

    // 0x80211504: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80211508: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021150C: b           L_8021152C
    // 0x80211510: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8021152C;
    // 0x80211510: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80211514:
    // 0x80211514: b           L_8021152C
    // 0x80211518: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8021152C;
    // 0x80211518: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8021151C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_80211520:
    // 0x80211520: nop

    // 0x80211524: bltz        $t8, L_80211514
    if (SIGNED(ctx->r24) < 0) {
        // 0x80211528: nop
    
            goto L_80211514;
    }
    // 0x80211528: nop

L_8021152C:
    // 0x8021152C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80211530: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x80211534: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211538: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021153C: jal         0x8021A26C
    // 0x80211540: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211540: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x80211544: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80211548: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021154C: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211550: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80211554: bgez        $t9, L_8021156C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211558: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_8021156C;
    }
    // 0x80211558: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x8021155C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80211560: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80211564: nop

    // 0x80211568: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_8021156C:
    // 0x8021156C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211570: ldc1        $f10, -0x6140($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6140);
    // 0x80211574: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80211578: nop

    // 0x8021157C: bc1fl       L_80211590
    if (!c1cs) {
        // 0x80211580: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211590;
    }
    goto skip_1;
    // 0x80211580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80211584: jal         0x80034ED4
    // 0x80211588: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80211588: nop

    after_1:
    // 0x8021158C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211590:
    // 0x80211590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211594: jr          $ra
    // 0x80211598: nop

    TRACE_RETURN()
    return;
    // 0x80211598: nop

;}
RECOMP_FUNC void func_80225E20_5E12F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E24: beq         $a1, $zero, L_80225E3C
    if (ctx->r5 == 0) {
        // 0x80225E28: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80225E3C;
    }
    // 0x80225E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E2C: jal         0x80014840
    // 0x80225E30: nop

    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80225E30: nop

    after_0:
    // 0x80225E34: b           L_80225E40
    // 0x80225E38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80225E40;
    // 0x80225E38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80225E3C:
    // 0x80225E3C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80225E40:
    // 0x80225E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225E48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80225E4C: jr          $ra
    // 0x80225E50: nop

    TRACE_RETURN()
    return;
    // 0x80225E50: nop

;}
RECOMP_FUNC void func_80210F54_5CC424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210F5C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210F60: jal         0x80013AC4
    // 0x80210F64: addiu       $a0, $a0, -0x17D4
    ctx->r4 = ADD32(ctx->r4, -0X17D4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210F64: addiu       $a0, $a0, -0x17D4
    ctx->r4 = ADD32(ctx->r4, -0X17D4);
    after_0:
    // 0x80210F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F70: jr          $ra
    // 0x80210F74: nop

    TRACE_RETURN()
    return;
    // 0x80210F74: nop

;}
RECOMP_FUNC void func_8020E1A0_5C9670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E1A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E1A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E1A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E1AC: jal         0x80013AC4
    // 0x8020E1B0: addiu       $a0, $a0, -0x3AFC
    ctx->r4 = ADD32(ctx->r4, -0X3AFC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E1B0: addiu       $a0, $a0, -0x3AFC
    ctx->r4 = ADD32(ctx->r4, -0X3AFC);
    after_0:
    // 0x8020E1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E1BC: jr          $ra
    // 0x8020E1C0: nop

    TRACE_RETURN()
    return;
    // 0x8020E1C0: nop

;}
RECOMP_FUNC void func_80211104_5CC5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021110C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211110: jal         0x80013AC4
    // 0x80211114: addiu       $a0, $a0, -0x16A8
    ctx->r4 = ADD32(ctx->r4, -0X16A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211114: addiu       $a0, $a0, -0x16A8
    ctx->r4 = ADD32(ctx->r4, -0X16A8);
    after_0:
    // 0x80211118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021111C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211120: jr          $ra
    // 0x80211124: nop

    TRACE_RETURN()
    return;
    // 0x80211124: nop

;}
RECOMP_FUNC void func_80210894_5CBD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021089C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802108A0: jal         0x80013AC4
    // 0x802108A4: addiu       $a0, $a0, -0x1C18
    ctx->r4 = ADD32(ctx->r4, -0X1C18);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802108A4: addiu       $a0, $a0, -0x1C18
    ctx->r4 = ADD32(ctx->r4, -0X1C18);
    after_0:
    // 0x802108A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802108AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802108B0: jr          $ra
    // 0x802108B4: nop

    TRACE_RETURN()
    return;
    // 0x802108B4: nop

;}
RECOMP_FUNC void func_80220410_5DB8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80220414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80220418: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022041C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80220420: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80220424: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80220428: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022042C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80220430: addiu       $t9, $t9, 0x58E8
    ctx->r25 = ADD32(ctx->r25, 0X58E8);
    // 0x80220434: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80220438: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x8022043C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80220440: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80220444: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80220448: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8022044C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80220450: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80220454: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80220458: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8022045C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80220460: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80220464: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80220468: jalr        $t9
    // 0x8022046C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8022046C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x80220470: bne         $v0, $zero, L_80220480
    if (ctx->r2 != 0) {
        // 0x80220474: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80220480;
    }
    // 0x80220474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80220478: b           L_802204F0
    // 0x8022047C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802204F0;
    // 0x8022047C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80220480:
    // 0x80220480: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80220484: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80220488: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022048C: lwc1        $f0, -0x5758($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5758);
    // 0x80220490: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80220494: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80220498: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8022049C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x802204A0: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x802204A4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802204A8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802204AC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x802204B0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x802204B4: lhu         $t6, 0x66($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X66);
    // 0x802204B8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x802204BC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x802204C0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x802204C4: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x802204C8: jalr        $t9
    // 0x802204CC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802204CC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802204D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802204D4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x802204D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802204DC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x802204E0: jalr        $t9
    // 0x802204E4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802204E4: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    after_2:
    // 0x802204E8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x802204EC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802204F0:
    // 0x802204F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802204F4: jr          $ra
    // 0x802204F8: nop

    TRACE_RETURN()
    return;
    // 0x802204F8: nop

;}
RECOMP_FUNC void func_80211008_5CC4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021100C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211010: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211014: jal         0x80013AC4
    // 0x80211018: addiu       $a0, $a0, -0x1764
    ctx->r4 = ADD32(ctx->r4, -0X1764);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211018: addiu       $a0, $a0, -0x1764
    ctx->r4 = ADD32(ctx->r4, -0X1764);
    after_0:
    // 0x8021101C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211024: jr          $ra
    // 0x80211028: nop

    TRACE_RETURN()
    return;
    // 0x80211028: nop

;}
RECOMP_FUNC void func_80222E4C_5DE31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222E50: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80222E54: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80222E58: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80222E5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80222E60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80222E64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80222E68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80222E6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80222E70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80222E74: lbu         $t7, -0x51DD($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X51DD);
    // 0x80222E78: bne         $t7, $zero, L_80222EA4
    if (ctx->r15 != 0) {
        // 0x80222E7C: nop
    
            goto L_80222EA4;
    }
    // 0x80222E7C: nop

    // 0x80222E80: jal         0x80035020
    // 0x80222E84: nop

    func_80035020_35C20(rdram, ctx);
        goto after_0;
    // 0x80222E84: nop

    after_0:
    // 0x80222E88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80222E8C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80222E90:
    // 0x80222E90: jal         0x8022306C
    // 0x80222E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022306C_5DE53C(rdram, ctx);
        goto after_1;
    // 0x80222E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80222E98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80222E9C: bne         $s0, $s1, L_80222E90
    if (ctx->r16 != ctx->r17) {
        // 0x80222EA0: nop
    
            goto L_80222E90;
    }
    // 0x80222EA0: nop

L_80222EA4:
    // 0x80222EA4: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x80222EA8: addiu       $t9, $t9, -0x4C60
    ctx->r25 = ADD32(ctx->r25, -0X4C60);
    // 0x80222EAC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80222EB0: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x80222EB4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80222EB8: addiu       $t8, $t8, 0x7DB0
    ctx->r24 = ADD32(ctx->r24, 0X7DB0);
    // 0x80222EBC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80222EC0: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x80222EC4: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x80222EC8: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80222ECC: lui         $t3, 0x8024
    ctx->r11 = S32(0X8024 << 16);
    // 0x80222ED0: sw          $t1, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r9;
    // 0x80222ED4: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80222ED8: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x80222EDC: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x80222EE0: addiu       $t3, $t3, -0x4C48
    ctx->r11 = ADD32(ctx->r11, -0X4C48);
    // 0x80222EE4: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x80222EE8: sw          $t1, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r9;
    // 0x80222EEC: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x80222EF0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80222EF4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80222EF8: addiu       $t2, $t2, 0x7DC8
    ctx->r10 = ADD32(ctx->r10, 0X7DC8);
    // 0x80222EFC: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x80222F00: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80222F04: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x80222F08: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x80222F0C: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80222F10: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x80222F14: sw          $t5, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r13;
    // 0x80222F18: lw          $t5, 0x14($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X14);
    // 0x80222F1C: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x80222F20: addiu       $t7, $t7, -0x4C30
    ctx->r15 = ADD32(ctx->r15, -0X4C30);
    // 0x80222F24: sw          $t5, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r13;
    // 0x80222F28: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x80222F2C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80222F30: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80222F34: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80222F38: addiu       $t6, $t6, 0x7DE0
    ctx->r14 = ADD32(ctx->r14, 0X7DE0);
    // 0x80222F3C: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80222F40: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80222F44: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80222F48: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x80222F4C: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x80222F50: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80222F54: sw          $t8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r24;
    // 0x80222F58: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x80222F5C: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80222F60: addiu       $t1, $t1, -0x4C18
    ctx->r9 = ADD32(ctx->r9, -0X4C18);
    // 0x80222F64: sw          $t8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r24;
    // 0x80222F68: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80222F6C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x80222F70: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80222F74: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80222F78: addiu       $t9, $t9, 0x7DF8
    ctx->r25 = ADD32(ctx->r25, 0X7DF8);
    // 0x80222F7C: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x80222F80: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80222F84: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x80222F88: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80222F8C: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x80222F90: sw          $t2, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r10;
    // 0x80222F94: lw          $t2, 0x14($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X14);
    // 0x80222F98: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x80222F9C: sw          $t2, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r10;
    // 0x80222FA0: sw          $at, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r1;
    // 0x80222FA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222FA8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80222FAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80222FB0: jr          $ra
    // 0x80222FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80222FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80213BC4_5CF094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213BCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213BD0: lwc1        $f6, 0xD0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x80213BD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80213BD8: nop

    // 0x80213BDC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80213BE0: nop

    // 0x80213BE4: bc1tl       L_80213BF8
    if (c1cs) {
        // 0x80213BE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80213BF8;
    }
    goto skip_0;
    // 0x80213BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80213BEC: jal         0x80034ED4
    // 0x80213BF0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80213BF0: nop

    after_0:
    // 0x80213BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80213BF8:
    // 0x80213BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213BFC: jr          $ra
    // 0x80213C00: nop

    TRACE_RETURN()
    return;
    // 0x80213C00: nop

;}
RECOMP_FUNC void func_8020F0D0_5CA5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F0D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F0D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F0DC: jal         0x80013AC4
    // 0x8020F0E0: addiu       $a0, $a0, -0x3198
    ctx->r4 = ADD32(ctx->r4, -0X3198);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F0E0: addiu       $a0, $a0, -0x3198
    ctx->r4 = ADD32(ctx->r4, -0X3198);
    after_0:
    // 0x8020F0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F0E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F0EC: jr          $ra
    // 0x8020F0F0: nop

    TRACE_RETURN()
    return;
    // 0x8020F0F0: nop

;}
RECOMP_FUNC void func_80222944_5DDE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222944: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80222948: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022294C: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80222950: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80222954: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80222958: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8022295C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80222960: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80222964: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80222968: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8022296C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80222970: lwc1        $f18, 0xC($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80222974: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80222978: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8022297C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80222980: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80222984: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80222988: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8022298C: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80222990: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80222994: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80222998: lwc1        $f18, 0x18($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8022299C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802229A0: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802229A4: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802229A8: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x802229AC: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802229B0: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802229B4: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802229B8: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x802229BC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802229C0: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x802229C4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802229C8: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x802229CC: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802229D0: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x802229D4: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802229D8: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802229DC: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802229E0: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802229E4: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802229E8: lwc1        $f4, 0x2C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x802229EC: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x802229F0: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802229F4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802229F8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802229FC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80222A00: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80222A04: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80222A08: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80222A0C: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80222A10: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80222A14: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80222A18: lwc1        $f16, 0x38($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80222A1C: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80222A20: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80222A24: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80222A28: lwc1        $f16, 0x3C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80222A2C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80222A30: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80222A34: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80222A38: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80222A3C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80222A40: jr          $ra
    // 0x80222A44: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80222A44: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8021925C_5D472C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021925C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80219260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80219264: jal         0x80218FE8
    // 0x80219268: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80218FE8_5D44B8(rdram, ctx);
        goto after_0;
    // 0x80219268: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021926C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80219270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80219274: jr          $ra
    // 0x80219278: nop

    TRACE_RETURN()
    return;
    // 0x80219278: nop

;}
RECOMP_FUNC void func_8020E68C_5C9B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E68C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E694: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E698: jal         0x80013AC4
    // 0x8020E69C: addiu       $a0, $a0, -0x387C
    ctx->r4 = ADD32(ctx->r4, -0X387C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E69C: addiu       $a0, $a0, -0x387C
    ctx->r4 = ADD32(ctx->r4, -0X387C);
    after_0:
    // 0x8020E6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E6A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E6A8: jr          $ra
    // 0x8020E6AC: nop

    TRACE_RETURN()
    return;
    // 0x8020E6AC: nop

;}
RECOMP_FUNC void func_8020F9F4_5CAEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F9FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FA00: jal         0x80013AC4
    // 0x8020FA04: addiu       $a0, $a0, -0x2AA4
    ctx->r4 = ADD32(ctx->r4, -0X2AA4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FA04: addiu       $a0, $a0, -0x2AA4
    ctx->r4 = ADD32(ctx->r4, -0X2AA4);
    after_0:
    // 0x8020FA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FA10: jr          $ra
    // 0x8020FA14: nop

    TRACE_RETURN()
    return;
    // 0x8020FA14: nop

;}
RECOMP_FUNC void func_80211128_5CC5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021112C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211130: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211134: jal         0x80013AC4
    // 0x80211138: addiu       $a0, $a0, -0x169C
    ctx->r4 = ADD32(ctx->r4, -0X169C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211138: addiu       $a0, $a0, -0x169C
    ctx->r4 = ADD32(ctx->r4, -0X169C);
    after_0:
    // 0x8021113C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211144: jr          $ra
    // 0x80211148: nop

    TRACE_RETURN()
    return;
    // 0x80211148: nop

;}
RECOMP_FUNC void func_80224CE0_5E01B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80224CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80224CE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80224CEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80224CF0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80224CF4: sw          $a1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r5;
    // 0x80224CF8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80224CFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80224D00: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x80224D04: sw          $t7, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r15;
    // 0x80224D08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80224D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80224D10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80224D14: sw          $t8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r24;
    // 0x80224D18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80224D1C: jalr        $t9
    // 0x80224D20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80224D20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x80224D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80224D28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80224D2C: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x80224D30: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80224D34: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80224D38: jalr        $t9
    // 0x80224D3C: lw          $a1, 0x90($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X90);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80224D3C: lw          $a1, 0x90($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X90);
    after_1:
    // 0x80224D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80224D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80224D48: jr          $ra
    // 0x80224D4C: nop

    TRACE_RETURN()
    return;
    // 0x80224D4C: nop

;}
RECOMP_FUNC void func_8020EDDC_5CA2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EDDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EDE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EDE4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EDE8: jal         0x80013AC4
    // 0x8020EDEC: addiu       $a0, $a0, -0x3310
    ctx->r4 = ADD32(ctx->r4, -0X3310);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EDEC: addiu       $a0, $a0, -0x3310
    ctx->r4 = ADD32(ctx->r4, -0X3310);
    after_0:
    // 0x8020EDF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EDF8: jr          $ra
    // 0x8020EDFC: nop

    TRACE_RETURN()
    return;
    // 0x8020EDFC: nop

;}
RECOMP_FUNC void func_8021BEE4_5D73B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BEE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021BEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BEEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021BEF0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021BEF4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8021BEF8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021BEFC: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021BF00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021BF04: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021BF08: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BF0C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021BF10: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021BF14: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021BF18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021BF1C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021BF20: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021BF24: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021BF28: nop

    // 0x8021BF2C: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021BF30: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021BF34: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021BF38: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8021BF3C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8021BF40: nop

    // 0x8021BF44: bc1t        L_8021BFE0
    if (c1cs) {
        // 0x8021BF48: nop
    
            goto L_8021BFE0;
    }
    // 0x8021BF48: nop

    // 0x8021BF4C: lwc1        $f8, 0xD0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x8021BF50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021BF54: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021BF58: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8021BF5C: nop

    // 0x8021BF60: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021BF64: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8021BF68: jal         0x800417F0
    // 0x8021BF6C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8021BF6C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x8021BF70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021BF74: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BF78: lwc1        $f6, 0xD0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x8021BF7C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021BF80: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8021BF84: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x8021BF88: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x8021BF8C: nop

    // 0x8021BF90: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x8021BF94: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8021BF98: jal         0x800419B0
    // 0x8021BF9C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8021BF9C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x8021BFA0: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BFA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021BFA8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021BFAC: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x8021BFB0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8021BFB4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021BFB8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021BFBC: bnel        $t2, $zero, L_8021BFD8
    if (ctx->r10 != 0) {
        // 0x8021BFC0: lwc1        $f10, 0xD0($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0XD0);
            goto L_8021BFD8;
    }
    goto skip_0;
    // 0x8021BFC0: lwc1        $f10, 0xD0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD0);
    skip_0:
    // 0x8021BFC4: lwc1        $f4, 0xD0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x8021BFC8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021BFCC: b           L_8021BFE0
    // 0x8021BFD0: swc1        $f8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f8.u32l;
        goto L_8021BFE0;
    // 0x8021BFD0: swc1        $f8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f8.u32l;
    // 0x8021BFD4: lwc1        $f10, 0xD0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XD0);
L_8021BFD8:
    // 0x8021BFD8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021BFDC: swc1        $f18, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f18.u32l;
L_8021BFE0:
    // 0x8021BFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021BFE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BFE8: jr          $ra
    // 0x8021BFEC: nop

    TRACE_RETURN()
    return;
    // 0x8021BFEC: nop

;}
RECOMP_FUNC void func_8020E350_5C9820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E358: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E35C: jal         0x80013AC4
    // 0x8020E360: addiu       $a0, $a0, -0x3A5C
    ctx->r4 = ADD32(ctx->r4, -0X3A5C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E360: addiu       $a0, $a0, -0x3A5C
    ctx->r4 = ADD32(ctx->r4, -0X3A5C);
    after_0:
    // 0x8020E364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E36C: jr          $ra
    // 0x8020E370: nop

    TRACE_RETURN()
    return;
    // 0x8020E370: nop

;}
RECOMP_FUNC void func_80216DF8_5D22C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80216DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216E00: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80216E04: jal         0x80216CE0
    // 0x80216E08: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    func_80216CE0_5D21B0(rdram, ctx);
        goto after_0;
    // 0x80216E08: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x80216E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80216E14: jr          $ra
    // 0x80216E18: nop

    TRACE_RETURN()
    return;
    // 0x80216E18: nop

;}
RECOMP_FUNC void func_8021392C_5CEDFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021392C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80213930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80213934: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80213938: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021393C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80213940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213944: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80213948: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x8021394C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80213950: jal         0x8021A26C
    // 0x80213954: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80213954: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x80213958: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021395C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80213960: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80213964: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80213968: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8021396C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80213970: addiu       $t1, $zero, 0x22A
    ctx->r9 = ADD32(0, 0X22A);
    // 0x80213974: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80213978: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x8021397C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x80213980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213984: jal         0x80216DF8
    // 0x80213988: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_1;
    // 0x80213988: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x8021398C: jal         0x8021A310
    // 0x80213990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_2;
    // 0x80213990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80213994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213998: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021399C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802139A0: jal         0x80224ABC
    // 0x802139A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_3;
    // 0x802139A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x802139A8: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x802139AC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802139B0: addiu       $a0, $a0, 0x39D4
    ctx->r4 = ADD32(ctx->r4, 0X39D4);
    // 0x802139B4: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x802139B8: jal         0x8003521C
    // 0x802139BC: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x802139BC: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    after_4:
    // 0x802139C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802139C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802139C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802139CC: jr          $ra
    // 0x802139D0: nop

    TRACE_RETURN()
    return;
    // 0x802139D0: nop

;}
RECOMP_FUNC void func_8020FA84_5CAF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FA8C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FA90: jal         0x80013AC4
    // 0x8020FA94: addiu       $a0, $a0, -0x2A70
    ctx->r4 = ADD32(ctx->r4, -0X2A70);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FA94: addiu       $a0, $a0, -0x2A70
    ctx->r4 = ADD32(ctx->r4, -0X2A70);
    after_0:
    // 0x8020FA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FAA0: jr          $ra
    // 0x8020FAA4: nop

    TRACE_RETURN()
    return;
    // 0x8020FAA4: nop

;}
