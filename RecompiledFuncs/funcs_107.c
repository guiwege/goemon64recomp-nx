#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000F34_6C0684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F3C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000F40: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08000F44: addiu       $a2, $a2, -0x33D0
    ctx->r6 = ADD32(ctx->r6, -0X33D0);
    // 0x08000F48: swc1        $f4, 0x184($a2)
    MEM_W(0X184, ctx->r6) = ctx->f4.u32l;
    // 0x08000F4C: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000F50: lui         $at, 0xC2D6
    ctx->r1 = S32(0XC2D6 << 16);
    // 0x08000F54: swc1        $f6, 0x188($a2)
    MEM_W(0X188, ctx->r6) = ctx->f6.u32l;
    // 0x08000F58: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000F5C: swc1        $f8, 0x18C($a2)
    MEM_W(0X18C, ctx->r6) = ctx->f8.u32l;
    // 0x08000F60: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000F64: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000F68: bne         $v0, $zero, L_08001008
    if (ctx->r2 != 0) {
        // 0x08000F6C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001008;
    }
    // 0x08000F6C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000F70: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000F74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000F78: lui         $at, 0xC2B0
    ctx->r1 = S32(0XC2B0 << 16);
    // 0x08000F7C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x08000F80: nop

    // 0x08000F84: bc1f        L_08000FF4
    if (!c1cs) {
        // 0x08000F88: nop
    
            goto L_08000FF4;
    }
    // 0x08000F88: nop

    // 0x08000F8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F90: lui         $at, 0xC238
    ctx->r1 = S32(0XC238 << 16);
    // 0x08000F94: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x08000F98: nop

    // 0x08000F9C: bc1f        L_08000FF4
    if (!c1cs) {
        // 0x08000FA0: nop
    
            goto L_08000FF4;
    }
    // 0x08000FA0: nop

    // 0x08000FA4: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000FA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000FAC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x08000FB0: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x08000FB4: nop

    // 0x08000FB8: bc1f        L_08000FF4
    if (!c1cs) {
        // 0x08000FBC: nop
    
            goto L_08000FF4;
    }
    // 0x08000FBC: nop

    // 0x08000FC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000FC4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000FCC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08000FD0: nop

    // 0x08000FD4: bc1f        L_08000FF4
    if (!c1cs) {
        // 0x08000FD8: nop
    
            goto L_08000FF4;
    }
    // 0x08000FD8: nop

    // 0x08000FDC: jalr        $t9
    // 0x08000FE0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FE0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x08000FE4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000FE8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000FEC: jalr        $t9
    // 0x08000FF0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FF0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
L_08000FF4:
    // 0x08000FF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1018) << 16);
    // 0x08001000: jalr        $t9
    // 0x08001004: addiu       $a0, $a0, 0x1018
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1018));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001004: addiu       $a0, $a0, 0x1018
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1018));
    after_2:
L_08001008:
    // 0x08001008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800100C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001010: jr          $ra
    // 0x08001014: nop

    TRACE_RETURN()
    return;
    // 0x08001014: nop

;}
RECOMP_FUNC void func_08005A0C_6C515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005A18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08005A1C: lbu         $a3, 0xD4($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XD4);
    // 0x08005A20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005A24: bne         $a3, $zero, L_08005A5C
    if (ctx->r7 != 0) {
        // 0x08005A28: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_08005A5C;
    }
    // 0x08005A28: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x08005A2C: jal         0x08005CF4
    // 0x08005A30: lui         $a2, 0x4214
    ctx->r6 = S32(0X4214 << 16);
    func_08005CF4_6C5444(rdram, ctx);
        goto after_0;
    // 0x08005A30: lui         $a2, 0x4214
    ctx->r6 = S32(0X4214 << 16);
    after_0:
    // 0x08005A34: beq         $v0, $zero, L_08005A5C
    if (ctx->r2 == 0) {
        // 0x08005A38: lui         $t7, 0x8020
        ctx->r15 = S32(0X8020 << 16);
            goto L_08005A5C;
    }
    // 0x08005A38: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08005A3C: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08005A40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08005A44: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08005A48: sb          $t6, 0x63($t7)
    MEM_B(0X63, ctx->r15) = ctx->r14;
    // 0x08005A4C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x08005A50: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08005A54: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08005A58: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_08005A5C:
    // 0x08005A5C: lbu         $a3, 0xD4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XD4);
    // 0x08005A60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08005A68: bne         $a3, $at, L_08005AA0
    if (ctx->r7 != ctx->r1) {
        // 0x08005A6C: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_08005AA0;
    }
    // 0x08005A6C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x08005A70: jal         0x08005CF4
    // 0x08005A74: lui         $a2, 0x4204
    ctx->r6 = S32(0X4204 << 16);
    func_08005CF4_6C5444(rdram, ctx);
        goto after_1;
    // 0x08005A74: lui         $a2, 0x4204
    ctx->r6 = S32(0X4204 << 16);
    after_1:
    // 0x08005A78: beq         $v0, $zero, L_08005AA0
    if (ctx->r2 == 0) {
        // 0x08005A7C: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08005AA0;
    }
    // 0x08005A7C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08005A80: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x08005A84: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08005A88: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08005A8C: sb          $t0, 0x63($t1)
    MEM_B(0X63, ctx->r9) = ctx->r8;
    // 0x08005A90: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08005A94: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08005A98: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08005A9C: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08005AA0:
    // 0x08005AA0: lbu         $t4, 0xD2($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD2);
    // 0x08005AA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08005AA8: bnel        $t4, $at, L_08005B20
    if (ctx->r12 != ctx->r1) {
        // 0x08005AAC: lw          $t1, 0x68($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X68);
            goto L_08005B20;
    }
    goto skip_0;
    // 0x08005AAC: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x08005AB0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08005AB4: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x08005AB8: bne         $v0, $zero, L_08005BAC
    if (ctx->r2 != 0) {
        // 0x08005ABC: sh          $t5, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r13;
            goto L_08005BAC;
    }
    // 0x08005ABC: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x08005AC0: lbu         $t6, 0xD4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD4);
    // 0x08005AC4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005AC8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005ACC: bnel        $t6, $zero, L_08005AE0
    if (ctx->r14 != 0) {
        // 0x08005AD0: lw          $t8, 0x60($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X60);
            goto L_08005AE0;
    }
    goto skip_1;
    // 0x08005AD0: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    skip_1:
    // 0x08005AD4: jalr        $t9
    // 0x08005AD8: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005AD8: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    after_2:
    // 0x08005ADC: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
L_08005AE0:
    // 0x08005AE0: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x08005AE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08005AE8: lbu         $t7, 0xD1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD1);
    // 0x08005AEC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08005AF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005AF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005AF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5BC0) << 16);
    // 0x08005AFC: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08005B00: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08005B04: addiu       $a0, $a0, 0x5BC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5BC0));
    // 0x08005B08: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x08005B0C: jalr        $t9
    // 0x08005B10: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005B10: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    after_3:
    // 0x08005B14: b           L_08005BB0
    // 0x08005B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08005BB0;
    // 0x08005B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005B1C: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
L_08005B20:
    // 0x08005B20: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x08005B24: bnel        $t2, $zero, L_08005BB0
    if (ctx->r10 != 0) {
        // 0x08005B28: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08005BB0;
    }
    goto skip_2;
    // 0x08005B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x08005B2C: lbu         $t3, 0xD4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD4);
    // 0x08005B30: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08005B34: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08005B38: bne         $t3, $zero, L_08005B58
    if (ctx->r11 != 0) {
        // 0x08005B3C: addiu       $a0, $zero, 0x2A0
        ctx->r4 = ADD32(0, 0X2A0);
            goto L_08005B58;
    }
    // 0x08005B3C: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x08005B40: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005B44: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005B48: jalr        $t9
    // 0x08005B4C: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005B4C: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    after_4:
    // 0x08005B50: b           L_08005B70
    // 0x08005B54: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
        goto L_08005B70;
    // 0x08005B54: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
L_08005B58:
    // 0x08005B58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08005B5C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08005B60: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08005B64: jalr        $t9
    // 0x08005B68: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005B68: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_5:
    // 0x08005B6C: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
L_08005B70:
    // 0x08005B70: lbu         $t6, 0xD1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD1);
    // 0x08005B74: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x08005B78: ori         $at, $at, 0xFEFF
    ctx->r1 = ctx->r1 | 0XFEFF;
    // 0x08005B7C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08005B80: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x08005B84: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08005B88: bne         $t7, $zero, L_08005B98
    if (ctx->r15 != 0) {
        // 0x08005B8C: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08005B98;
    }
    // 0x08005B8C: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08005B90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08005B94: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
L_08005B98:
    // 0x08005B98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005B9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005BA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5BC0) << 16);
    // 0x08005BA4: jalr        $t9
    // 0x08005BA8: addiu       $a0, $a0, 0x5BC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5BC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08005BA8: addiu       $a0, $a0, 0x5BC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5BC0));
    after_6:
L_08005BAC:
    // 0x08005BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08005BB0:
    // 0x08005BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005BB8: jr          $ra
    // 0x08005BBC: nop

    TRACE_RETURN()
    return;
    // 0x08005BBC: nop

;}
RECOMP_FUNC void func_080040B8_6C3808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080040B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080040BC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080040C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080040C4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080040C8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080040CC: bne         $v0, $zero, L_080040FC
    if (ctx->r2 != 0) {
        // 0x080040D0: swc1        $f0, 0x78($a0)
        MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
            goto L_080040FC;
    }
    // 0x080040D0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080040D4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x080040D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080040DC: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x080040E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080040E4: lui         $at, 0xC33E
    ctx->r1 = S32(0XC33E << 16);
    // 0x080040E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080040EC: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x080040F0: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x080040F4: jr          $ra
    // 0x080040F8: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x080040F8: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
L_080040FC:
    // 0x080040FC: bne         $v0, $at, L_08004128
    if (ctx->r2 != ctx->r1) {
        // 0x08004100: lui         $at, 0xC31F
        ctx->r1 = S32(0XC31F << 16);
            goto L_08004128;
    }
    // 0x08004100: lui         $at, 0xC31F
    ctx->r1 = S32(0XC31F << 16);
    // 0x08004104: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004108: lui         $at, 0xC290
    ctx->r1 = S32(0XC290 << 16);
    // 0x0800410C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08004110: lui         $at, 0xC32F
    ctx->r1 = S32(0XC32F << 16);
    // 0x08004114: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004118: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x0800411C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08004120: jr          $ra
    // 0x08004124: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x08004124: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_08004128:
    // 0x08004128: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800412C: bne         $v0, $at, L_08004150
    if (ctx->r2 != ctx->r1) {
        // 0x08004130: lui         $at, 0x430A
        ctx->r1 = S32(0X430A << 16);
            goto L_08004150;
    }
    // 0x08004130: lui         $at, 0x430A
    ctx->r1 = S32(0X430A << 16);
    // 0x08004134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004138: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x0800413C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004140: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x08004144: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x08004148: jr          $ra
    // 0x0800414C: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x0800414C: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
L_08004150:
    // 0x08004150: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08004154: bne         $v0, $at, L_08004178
    if (ctx->r2 != ctx->r1) {
        // 0x08004158: lui         $at, 0x4300
        ctx->r1 = S32(0X4300 << 16);
            goto L_08004178;
    }
    // 0x08004158: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x0800415C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004160: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x08004164: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004168: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x0800416C: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08004170: jr          $ra
    // 0x08004174: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x08004174: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
L_08004178:
    // 0x08004178: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800417C: bne         $v0, $at, L_080041A0
    if (ctx->r2 != ctx->r1) {
        // 0x08004180: lui         $at, 0x42EC
        ctx->r1 = S32(0X42EC << 16);
            goto L_080041A0;
    }
    // 0x08004180: lui         $at, 0x42EC
    ctx->r1 = S32(0X42EC << 16);
    // 0x08004184: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08004188: lui         $at, 0x42AC
    ctx->r1 = S32(0X42AC << 16);
    // 0x0800418C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004190: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x08004194: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08004198: jr          $ra
    // 0x0800419C: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x0800419C: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_080041A0:
    // 0x080041A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080041A4: bne         $v0, $at, L_080041C8
    if (ctx->r2 != ctx->r1) {
        // 0x080041A8: lui         $at, 0x42D8
        ctx->r1 = S32(0X42D8 << 16);
            goto L_080041C8;
    }
    // 0x080041A8: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x080041AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080041B0: lui         $at, 0x4294
    ctx->r1 = S32(0X4294 << 16);
    // 0x080041B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080041B8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080041BC: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x080041C0: jr          $ra
    // 0x080041C4: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x080041C4: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
L_080041C8:
    // 0x080041C8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080041CC: bne         $v0, $at, L_080041F0
    if (ctx->r2 != ctx->r1) {
        // 0x080041D0: lui         $at, 0x42C4
        ctx->r1 = S32(0X42C4 << 16);
            goto L_080041F0;
    }
    // 0x080041D0: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x080041D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080041D8: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x080041DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080041E0: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080041E4: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x080041E8: jr          $ra
    // 0x080041EC: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x080041EC: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
L_080041F0:
    // 0x080041F0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x080041F4: bne         $v0, $at, L_08004214
    if (ctx->r2 != ctx->r1) {
        // 0x080041F8: lui         $at, 0x42B0
        ctx->r1 = S32(0X42B0 << 16);
            goto L_08004214;
    }
    // 0x080041F8: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x080041FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08004200: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08004204: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004208: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x0800420C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08004210: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_08004214:
    // 0x08004214: jr          $ra
    // 0x08004218: nop

    TRACE_RETURN()
    return;
    // 0x08004218: nop

;}
RECOMP_FUNC void func_080049A4_6C40F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080049A8: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x080049AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080049B0: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x080049B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080049B8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080049BC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080049C0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080049C4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x080049C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080049CC: jalr        $t9
    // 0x080049D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080049D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x080049D4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A20) << 16);
    // 0x080049D8: lwc1        $f0, -0x75E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A20));
    // 0x080049DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x080049E0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x080049E4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x080049E8: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x080049EC: addiu       $v0, $v0, 0x7B58
    ctx->r2 = ADD32(ctx->r2, 0X7B58);
    // 0x080049F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080049F4: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x080049F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080049FC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004A00: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X4AB4) << 16);
    // 0x08004A04: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08004A08: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08004A0C: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08004A10: sw          $t7, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r15;
    // 0x08004A14: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x08004A18: addiu       $a1, $a1, 0x4AB4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X4AB4));
    // 0x08004A1C: jalr        $t9
    // 0x08004A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08004A24: beq         $v0, $zero, L_08004A7C
    if (ctx->r2 == 0) {
        // 0x08004A28: lui         $t0, 0x20
        ctx->r8 = S32(0X20 << 16);
            goto L_08004A7C;
    }
    // 0x08004A28: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x08004A2C: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x08004A30: ori         $t0, $t0, 0x6E1
    ctx->r8 = ctx->r8 | 0X6E1;
    // 0x08004A34: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x08004A38: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x08004A3C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004A40: sw          $t0, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r8;
    // 0x08004A44: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08004A48: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004A4C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08004A50: jalr        $t9
    // 0x08004A54: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004A54: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x08004A58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x08004A5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004A60: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004A68: jalr        $t9
    // 0x08004A6C: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004A6C: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    after_3:
    // 0x08004A70: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x08004A74: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x08004A78: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
L_08004A7C:
    // 0x08004A7C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004A80: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004A84: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4AA0) << 16);
    // 0x08004A88: jalr        $t9
    // 0x08004A8C: addiu       $a0, $a0, 0x4AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4AA0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004A8C: addiu       $a0, $a0, 0x4AA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4AA0));
    after_4:
    // 0x08004A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004A98: jr          $ra
    // 0x08004A9C: nop

    TRACE_RETURN()
    return;
    // 0x08004A9C: nop

;}
RECOMP_FUNC void func_08004694_6C3DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004694: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800469C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080046A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080046A4: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x080046A8: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(21, 0X7C30) << 16);
    // 0x080046AC: addiu       $t7, $t7, 0x7C30
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(21, 0X7C30));
    // 0x080046B0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080046B4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080046B8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x080046BC: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x080046C0: addiu       $t9, $zero, 0x19D
    ctx->r25 = ADD32(0, 0X19D);
    // 0x080046C4: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x080046C8: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x080046CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080046D0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080046D4: ori         $t0, $t0, 0x6E1
    ctx->r8 = ctx->r8 | 0X6E1;
    // 0x080046D8: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x080046DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080046E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080046E4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x080046E8: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x080046EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080046F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080046F4: jalr        $t9
    // 0x080046F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080046F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080046FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004700: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08004704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004708: jalr        $t9
    // 0x0800470C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800470C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08004710: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A1C) << 16);
    // 0x08004714: lwc1        $f0, -0x75E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A1C));
    // 0x08004718: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0800471C: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
    // 0x08004720: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08004724: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08004728: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x0800472C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x08004730: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004734: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08004738: lbu         $v0, 0xD3($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0XD3);
    // 0x0800473C: bnel        $v0, $zero, L_08004788
    if (ctx->r2 != 0) {
        // 0x08004740: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08004788;
    }
    goto skip_0;
    // 0x08004740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x08004744: jalr        $t9
    // 0x08004748: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004748: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_2:
    // 0x0800474C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08004750: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004754: add.d       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f2.d + ctx->f2.d;
    // 0x08004758: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800475C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004760: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08004764: jalr        $t9
    // 0x08004768: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004768: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x0800476C: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08004770: add.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f2.d + ctx->f2.d;
    // 0x08004774: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08004778: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x0800477C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x08004780: lbu         $v0, 0xD3($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0XD3);
    // 0x08004784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_08004788:
    // 0x08004788: bne         $v0, $at, L_080047F8
    if (ctx->r2 != ctx->r1) {
        // 0x0800478C: lui         $t5, 0x8000
        ctx->r13 = S32(0X8000 << 16);
            goto L_080047F8;
    }
    // 0x0800478C: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x08004790: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004794: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08004798: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x0800479C: addiu       $t5, $t5, 0x3EA0
    ctx->r13 = ADD32(ctx->r13, 0X3EA0);
    // 0x080047A0: jalr        $t9
    // 0x080047A4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080047A4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_4:
    // 0x080047A8: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x080047AC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080047B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080047B4: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x080047B8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x080047BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080047C0: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x080047C4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080047C8: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x080047CC: jalr        $t9
    // 0x080047D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080047D0: nop

    after_5:
    // 0x080047D4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x080047D8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080047DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080047E0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080047E4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x080047E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080047EC: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    // 0x080047F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x080047F4: lbu         $v0, 0xD3($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XD3);
L_080047F8:
    // 0x080047F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080047FC: bne         $v0, $at, L_08004864
    if (ctx->r2 != ctx->r1) {
        // 0x08004800: lui         $t7, 0x8000
        ctx->r15 = S32(0X8000 << 16);
            goto L_08004864;
    }
    // 0x08004800: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x08004804: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004808: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800480C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08004810: addiu       $t7, $t7, 0x3EA0
    ctx->r15 = ADD32(ctx->r15, 0X3EA0);
    // 0x08004814: jalr        $t9
    // 0x08004818: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004818: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_6:
    // 0x0800481C: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x08004820: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004824: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004828: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x0800482C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08004830: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08004834: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x08004838: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x0800483C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08004840: jalr        $t9
    // 0x08004844: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004844: nop

    after_7:
    // 0x08004848: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x0800484C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08004850: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004854: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08004858: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x0800485C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004860: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
L_08004864:
    // 0x08004864: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004868: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800486C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X488C) << 16);
    // 0x08004870: jalr        $t9
    // 0x08004874: addiu       $a0, $a0, 0x488C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X488C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004874: addiu       $a0, $a0, 0x488C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X488C));
    after_8:
    // 0x08004878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800487C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08004880: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08004884: jr          $ra
    // 0x08004888: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08004888: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08001268_6C09B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800126C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001274: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001278: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800127C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001280: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001284: bne         $v0, $zero, L_080012A8
    if (ctx->r2 != 0) {
        // 0x08001288: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080012A8;
    }
    // 0x08001288: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800128C: jalr        $t9
    // 0x08001290: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001290: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_0:
    // 0x08001294: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001298: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800129C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X12B8) << 16);
    // 0x080012A0: jalr        $t9
    // 0x080012A4: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X12B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080012A4: addiu       $a0, $a0, 0x12B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X12B8));
    after_1:
L_080012A8:
    // 0x080012A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080012AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080012B0: jr          $ra
    // 0x080012B4: nop

    TRACE_RETURN()
    return;
    // 0x080012B4: nop

;}
RECOMP_FUNC void func_08007094_6C67E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800709C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080070A0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080070A4: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x080070A8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080070AC: beq         $t7, $zero, L_080070D4
    if (ctx->r15 == 0) {
        // 0x080070B0: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080070D4;
    }
    // 0x080070B0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080070B4: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080070B8: jalr        $t9
    // 0x080070BC: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080070BC: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    after_0:
    // 0x080070C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080070C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080070C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X70E4) << 16);
    // 0x080070CC: jalr        $t9
    // 0x080070D0: addiu       $a0, $a0, 0x70E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X70E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080070D0: addiu       $a0, $a0, 0x70E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X70E4));
    after_1:
L_080070D4:
    // 0x080070D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080070D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080070DC: jr          $ra
    // 0x080070E0: nop

    TRACE_RETURN()
    return;
    // 0x080070E0: nop

;}
RECOMP_FUNC void func_08001388_6C0AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800138C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001390: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001394: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001398: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800139C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080013A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080013A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013A8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080013AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080013B4: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x080013B8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080013BC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080013C0: bne         $v0, $zero, L_080013D4
    if (ctx->r2 != 0) {
        // 0x080013C4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080013D4;
    }
    // 0x080013C4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080013C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X13E4) << 16);
    // 0x080013CC: jalr        $t9
    // 0x080013D0: addiu       $a0, $a0, 0x13E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X13E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013D0: addiu       $a0, $a0, 0x13E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X13E4));
    after_0:
L_080013D4:
    // 0x080013D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013DC: jr          $ra
    // 0x080013E0: nop

    TRACE_RETURN()
    return;
    // 0x080013E0: nop

;}
RECOMP_FUNC void func_0800447C_6C3BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800447C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A18) << 16);
    // 0x08004480: lwc1        $f0, -0x75E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A18));
    // 0x08004484: lui         $t6, 0x800
    ctx->r14 = S32(RELOC_HI16(21, 0X7C30) << 16);
    // 0x08004488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800448C: addiu       $t6, $t6, 0x7C30
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(21, 0X7C30));
    // 0x08004490: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004498: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x0800449C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x080044A0: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x080044A4: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x080044A8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080044AC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x080044B0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x080044B4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x080044B8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080044BC: lbu         $t9, 0xD2($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD2);
    // 0x080044C0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x080044C4: bne         $v0, $zero, L_080044F8
    if (ctx->r2 != 0) {
        // 0x080044C8: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_080044F8;
    }
    // 0x080044C8: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x080044CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080044D0: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x080044D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080044D8: lui         $at, 0xC33E
    ctx->r1 = S32(0XC33E << 16);
    // 0x080044DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080044E0: addiu       $t0, $zero, 0x4B
    ctx->r8 = ADD32(0, 0X4B);
    // 0x080044E4: sh          $t0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r8;
    // 0x080044E8: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x080044EC: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x080044F0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x080044F4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
L_080044F8:
    // 0x080044F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080044FC: bne         $v0, $at, L_08004530
    if (ctx->r2 != ctx->r1) {
        // 0x08004500: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X4550) << 16);
            goto L_08004530;
    }
    // 0x08004500: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4550) << 16);
    // 0x08004504: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x08004508: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800450C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08004510: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08004514: lui         $at, 0xC33E
    ctx->r1 = S32(0XC33E << 16);
    // 0x08004518: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800451C: addiu       $t1, $zero, 0x4B
    ctx->r9 = ADD32(0, 0X4B);
    // 0x08004520: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    // 0x08004524: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x08004528: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x0800452C: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_08004530:
    // 0x08004530: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004534: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004538: jalr        $t9
    // 0x0800453C: addiu       $a0, $a0, 0x4550
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4550));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800453C: addiu       $a0, $a0, 0x4550
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4550));
    after_0:
    // 0x08004540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004548: jr          $ra
    // 0x0800454C: nop

    TRACE_RETURN()
    return;
    // 0x0800454C: nop

;}
RECOMP_FUNC void func_080036E0_6C2E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080036E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080036E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080036EC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080036F0: lui         $a1, 0xC2E6
    ctx->r5 = S32(0XC2E6 << 16);
    // 0x080036F4: lui         $a2, 0xC234
    ctx->r6 = S32(0XC234 << 16);
    // 0x080036F8: bne         $v0, $zero, L_08003748
    if (ctx->r2 != 0) {
        // 0x080036FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08003748;
    }
    // 0x080036FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003700: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003704: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003708: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x0800370C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003710: jalr        $t9
    // 0x08003714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x08003718: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x0800371C: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003A64;
    }
    // 0x0800371C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003720: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003724: jalr        $t9
    // 0x08003728: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003728: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x0800372C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003730: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003734: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003738: jalr        $t9
    // 0x0800373C: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800373C: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_2:
    // 0x08003740: b           L_08003A68
    // 0x08003744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003748:
    // 0x08003748: bne         $v0, $at, L_0800378C
    if (ctx->r2 != ctx->r1) {
        // 0x0800374C: lui         $a1, 0xC2D2
        ctx->r5 = S32(0XC2D2 << 16);
            goto L_0800378C;
    }
    // 0x0800374C: lui         $a1, 0xC2D2
    ctx->r5 = S32(0XC2D2 << 16);
    // 0x08003750: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003754: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003758: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x0800375C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08003760: lui         $a2, 0xC25C
    ctx->r6 = S32(0XC25C << 16);
    // 0x08003764: jalr        $t9
    // 0x08003768: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003768: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x0800376C: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003770: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003770: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003774: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003778: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800377C: jalr        $t9
    // 0x08003780: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003780: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_4:
    // 0x08003784: b           L_08003A68
    // 0x08003788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800378C:
    // 0x0800378C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003790: bne         $v0, $at, L_080037D4
    if (ctx->r2 != ctx->r1) {
        // 0x08003794: lui         $a1, 0xC2BE
        ctx->r5 = S32(0XC2BE << 16);
            goto L_080037D4;
    }
    // 0x08003794: lui         $a1, 0xC2BE
    ctx->r5 = S32(0XC2BE << 16);
    // 0x08003798: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800379C: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x080037A0: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x080037A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080037A8: lui         $a2, 0xC282
    ctx->r6 = S32(0XC282 << 16);
    // 0x080037AC: jalr        $t9
    // 0x080037B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080037B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x080037B4: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x080037B8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x080037B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x080037BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080037C4: jalr        $t9
    // 0x080037C8: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080037C8: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_6:
    // 0x080037CC: b           L_08003A68
    // 0x080037D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x080037D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080037D4:
    // 0x080037D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080037D8: bne         $v0, $at, L_0800381C
    if (ctx->r2 != ctx->r1) {
        // 0x080037DC: lui         $a1, 0xC2AA
        ctx->r5 = S32(0XC2AA << 16);
            goto L_0800381C;
    }
    // 0x080037DC: lui         $a1, 0xC2AA
    ctx->r5 = S32(0XC2AA << 16);
    // 0x080037E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080037E4: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x080037E8: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x080037EC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080037F0: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x080037F4: jalr        $t9
    // 0x080037F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080037F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x080037FC: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003800: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003800: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003808: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800380C: jalr        $t9
    // 0x08003810: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003810: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_8:
    // 0x08003814: b           L_08003A68
    // 0x08003818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800381C:
    // 0x0800381C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003820: bne         $v0, $at, L_08003864
    if (ctx->r2 != ctx->r1) {
        // 0x08003824: lui         $a1, 0xC296
        ctx->r5 = S32(0XC296 << 16);
            goto L_08003864;
    }
    // 0x08003824: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    // 0x08003828: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800382C: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003830: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x08003834: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08003838: lui         $a2, 0xC2AA
    ctx->r6 = S32(0XC2AA << 16);
    // 0x0800383C: jalr        $t9
    // 0x08003840: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003840: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
    // 0x08003844: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003848: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003848: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x0800384C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003850: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003854: jalr        $t9
    // 0x08003858: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003858: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_10:
    // 0x0800385C: b           L_08003A68
    // 0x08003860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003864:
    // 0x08003864: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003868: bne         $v0, $at, L_080038AC
    if (ctx->r2 != ctx->r1) {
        // 0x0800386C: lui         $a1, 0xC282
        ctx->r5 = S32(0XC282 << 16);
            goto L_080038AC;
    }
    // 0x0800386C: lui         $a1, 0xC282
    ctx->r5 = S32(0XC282 << 16);
    // 0x08003870: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003874: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003878: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x0800387C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08003880: lui         $a2, 0xC2BE
    ctx->r6 = S32(0XC2BE << 16);
    // 0x08003884: jalr        $t9
    // 0x08003888: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08003888: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
    // 0x0800388C: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003890: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003890: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003894: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003898: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800389C: jalr        $t9
    // 0x080038A0: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080038A0: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_12:
    // 0x080038A4: b           L_08003A68
    // 0x080038A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x080038A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080038AC:
    // 0x080038AC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x080038B0: bne         $v0, $at, L_08003904
    if (ctx->r2 != ctx->r1) {
        // 0x080038B4: lui         $a1, 0x42B4
        ctx->r5 = S32(0X42B4 << 16);
            goto L_08003904;
    }
    // 0x080038B4: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080038B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038BC: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x080038C0: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x080038C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x080038C8: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x080038CC: jalr        $t9
    // 0x080038D0: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080038D0: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_13:
    // 0x080038D4: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x080038D8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003A64;
    }
    // 0x080038D8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080038DC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080038E0: jalr        $t9
    // 0x080038E4: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080038E4: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_14:
    // 0x080038E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080038EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080038F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x080038F4: jalr        $t9
    // 0x080038F8: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080038F8: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_15:
    // 0x080038FC: b           L_08003A68
    // 0x08003900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003904:
    // 0x08003904: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08003908: bne         $v0, $at, L_0800394C
    if (ctx->r2 != ctx->r1) {
        // 0x0800390C: lui         $a1, 0x4288
        ctx->r5 = S32(0X4288 << 16);
            goto L_0800394C;
    }
    // 0x0800390C: lui         $a1, 0x4288
    ctx->r5 = S32(0X4288 << 16);
    // 0x08003910: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003914: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003918: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x0800391C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08003920: lui         $a2, 0xC302
    ctx->r6 = S32(0XC302 << 16);
    // 0x08003924: jalr        $t9
    // 0x08003928: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08003928: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_16:
    // 0x0800392C: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003930: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003930: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003934: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003938: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800393C: jalr        $t9
    // 0x08003940: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08003940: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_17:
    // 0x08003944: b           L_08003A68
    // 0x08003948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800394C:
    // 0x0800394C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x08003950: bne         $v0, $at, L_08003994
    if (ctx->r2 != ctx->r1) {
        // 0x08003954: lui         $a1, 0x4238
        ctx->r5 = S32(0X4238 << 16);
            goto L_08003994;
    }
    // 0x08003954: lui         $a1, 0x4238
    ctx->r5 = S32(0X4238 << 16);
    // 0x08003958: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800395C: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003960: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x08003964: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08003968: lui         $a2, 0xC2DC
    ctx->r6 = S32(0XC2DC << 16);
    // 0x0800396C: jalr        $t9
    // 0x08003970: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08003970: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_18:
    // 0x08003974: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003978: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003978: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x0800397C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003980: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003984: jalr        $t9
    // 0x08003988: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08003988: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_19:
    // 0x0800398C: b           L_08003A68
    // 0x08003990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003994:
    // 0x08003994: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x08003998: bne         $v0, $at, L_080039DC
    if (ctx->r2 != ctx->r1) {
        // 0x0800399C: lui         $a1, 0x41C0
        ctx->r5 = S32(0X41C0 << 16);
            goto L_080039DC;
    }
    // 0x0800399C: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x080039A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080039A4: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x080039A8: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x080039AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080039B0: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x080039B4: jalr        $t9
    // 0x080039B8: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080039B8: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_20:
    // 0x080039BC: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x080039C0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x080039C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x080039C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080039CC: jalr        $t9
    // 0x080039D0: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x080039D0: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_21:
    // 0x080039D4: b           L_08003A68
    // 0x080039D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x080039D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080039DC:
    // 0x080039DC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080039E0: bne         $v0, $at, L_08003A24
    if (ctx->r2 != ctx->r1) {
        // 0x080039E4: lui         $a1, 0x4000
        ctx->r5 = S32(0X4000 << 16);
            goto L_08003A24;
    }
    // 0x080039E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x080039E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080039EC: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x080039F0: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x080039F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080039F8: lui         $a2, 0xC28C
    ctx->r6 = S32(0XC28C << 16);
    // 0x080039FC: jalr        $t9
    // 0x08003A00: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08003A00: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_22:
    // 0x08003A04: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003A08: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003A08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003A0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003A10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003A14: jalr        $t9
    // 0x08003A18: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08003A18: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_23:
    // 0x08003A1C: b           L_08003A68
    // 0x08003A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003A68;
    // 0x08003A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003A24:
    // 0x08003A24: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08003A28: bne         $v0, $at, L_08003A64
    if (ctx->r2 != ctx->r1) {
        // 0x08003A2C: lui         $a1, 0xC1A0
        ctx->r5 = S32(0XC1A0 << 16);
            goto L_08003A64;
    }
    // 0x08003A2C: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x08003A30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A34: addiu       $t9, $t9, -0x1390
    ctx->r25 = ADD32(ctx->r25, -0X1390);
    // 0x08003A38: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08003A3C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003A40: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x08003A44: jalr        $t9
    // 0x08003A48: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08003A48: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_24:
    // 0x08003A4C: bne         $v0, $zero, L_08003A64
    if (ctx->r2 != 0) {
        // 0x08003A50: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
            goto L_08003A64;
    }
    // 0x08003A50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3A74) << 16);
    // 0x08003A54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003A58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003A5C: jalr        $t9
    // 0x08003A60: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08003A60: addiu       $a0, $a0, 0x3A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3A74));
    after_25:
L_08003A64:
    // 0x08003A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003A68:
    // 0x08003A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003A6C: jr          $ra
    // 0x08003A70: nop

    TRACE_RETURN()
    return;
    // 0x08003A70: nop

;}
RECOMP_FUNC void func_080006CC_6BFE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080006D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080006D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080006D8: lui         $t6, 0x8280
    ctx->r14 = S32(0X8280 << 16);
    // 0x080006DC: ori         $t6, $t6, 0x320
    ctx->r14 = ctx->r14 | 0X320;
    // 0x080006E0: addiu       $t7, $zero, 0x1FF
    ctx->r15 = ADD32(0, 0X1FF);
    // 0x080006E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006E8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080006EC: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x080006F0: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x080006F4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080006F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080006FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000700: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000704: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000708: jalr        $t9
    // 0x0800070C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800070C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x08000710: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000714: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000718: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800071C: jalr        $t9
    // 0x08000720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000724: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89AC) << 16);
    // 0x08000728: lwc1        $f0, -0x7654($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89AC));
    // 0x0800072C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000730: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000734: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000738: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X760) << 16);
    // 0x0800073C: addiu       $a0, $a0, 0x760
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X760));
    // 0x08000740: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000744: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000748: jalr        $t9
    // 0x0800074C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800074C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x08000750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000758: jr          $ra
    // 0x0800075C: nop

    TRACE_RETURN()
    return;
    // 0x0800075C: nop

;}
RECOMP_FUNC void func_08004DDC_6C452C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004DDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004DE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004DE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004DE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004DEC: lbu         $t6, 0xDC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004DF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004DF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004DF8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08004DFC: sb          $t7, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r15;
    // 0x08004E00: lbu         $a1, 0xDC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004E04: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004E08: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x08004E0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08004E10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004E14: jalr        $t9
    // 0x08004E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004E1C: lbu         $t0, 0xDC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004E20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4E58) << 16);
    // 0x08004E24: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x08004E28: slti        $at, $t0, 0xF0
    ctx->r1 = SIGNED(ctx->r8) < 0XF0 ? 1 : 0;
    // 0x08004E2C: bne         $at, $zero, L_08004E44
    if (ctx->r1 != 0) {
        // 0x08004E30: addiu       $a0, $a0, 0x4E58
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4E58));
            goto L_08004E44;
    }
    // 0x08004E30: addiu       $a0, $a0, 0x4E58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4E58));
    // 0x08004E34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004E38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004E3C: jalr        $t9
    // 0x08004E40: sb          $t1, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004E40: sb          $t1, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r9;
    after_1:
L_08004E44:
    // 0x08004E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004E48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004E50: jr          $ra
    // 0x08004E54: nop

    TRACE_RETURN()
    return;
    // 0x08004E54: nop

;}
RECOMP_FUNC void func_08002624_6C1D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002628: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800262C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002630: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002634: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08002638: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800263C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08002640: jalr        $v0
    // 0x08002644: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08002644: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x08002648: beq         $v0, $zero, L_0800267C
    if (ctx->r2 == 0) {
        // 0x0800264C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_0800267C;
    }
    // 0x0800264C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002650: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002654: jalr        $t9
    // 0x08002658: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002658: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
    // 0x0800265C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002660: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002664: jalr        $t9
    // 0x08002668: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002668: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    after_2:
    // 0x0800266C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002670: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08002674: jalr        $t9
    // 0x08002678: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002678: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    after_3:
L_0800267C:
    // 0x0800267C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002680: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08002684: lui         $at, 0xC32A
    ctx->r1 = S32(0XC32A << 16);
    // 0x08002688: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800268C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002690: lui         $t6, 0x8002
    ctx->r14 = S32(0X8002 << 16);
    // 0x08002694: lui         $t7, 0x8002
    ctx->r15 = S32(0X8002 << 16);
    // 0x08002698: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x0800269C: addiu       $t7, $t7, 0x4088
    ctx->r15 = ADD32(ctx->r15, 0X4088);
    // 0x080026A0: addiu       $t6, $t6, 0x4038
    ctx->r14 = ADD32(ctx->r14, 0X4038);
    // 0x080026A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x080026A8: bc1f        L_08002730
    if (!c1cs) {
        // 0x080026AC: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_08002730;
    }
    // 0x080026AC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x080026B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080026B4: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x080026B8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x080026BC: nop

    // 0x080026C0: bc1f        L_08002730
    if (!c1cs) {
        // 0x080026C4: nop
    
            goto L_08002730;
    }
    // 0x080026C4: nop

    // 0x080026C8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080026CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080026D0: lui         $at, 0x42F6
    ctx->r1 = S32(0X42F6 << 16);
    // 0x080026D4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x080026D8: nop

    // 0x080026DC: bc1f        L_08002730
    if (!c1cs) {
        // 0x080026E0: nop
    
            goto L_08002730;
    }
    // 0x080026E0: nop

    // 0x080026E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080026E8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080026EC: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080026F0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x080026F4: nop

    // 0x080026F8: bc1f        L_08002730
    if (!c1cs) {
        // 0x080026FC: nop
    
            goto L_08002730;
    }
    // 0x080026FC: nop

    // 0x08002700: jalr        $t9
    // 0x08002704: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002704: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_4:
    // 0x08002708: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x0800270C: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x08002710: jalr        $t9
    // 0x08002714: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002714: nop

    after_5:
    // 0x08002718: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800271C: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x08002720: jalr        $t9
    // 0x08002724: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002724: nop

    after_6:
    // 0x08002728: b           L_08002760
    // 0x0800272C: nop

        goto L_08002760;
    // 0x0800272C: nop

L_08002730:
    // 0x08002730: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002734: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002738: jalr        $t9
    // 0x0800273C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800273C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_7:
    // 0x08002740: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08002744: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x08002748: jalr        $t9
    // 0x0800274C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800274C: nop

    after_8:
    // 0x08002750: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08002754: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x08002758: jalr        $t9
    // 0x0800275C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800275C: nop

    after_9:
L_08002760:
    // 0x08002760: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002764: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002768: jalr        $t9
    // 0x0800276C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800276C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_10:
    // 0x08002770: bne         $v0, $zero, L_080027BC
    if (ctx->r2 != 0) {
        // 0x08002774: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_080027BC;
    }
    // 0x08002774: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08002778: jalr        $t9
    // 0x0800277C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800277C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_11:
    // 0x08002780: bne         $v0, $zero, L_080027BC
    if (ctx->r2 != 0) {
        // 0x08002784: lui         $t0, 0x8020
        ctx->r8 = S32(0X8020 << 16);
            goto L_080027BC;
    }
    // 0x08002784: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08002788: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x0800278C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08002790: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002794: lw          $t1, 0xA0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XA0);
    // 0x08002798: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x0800279C: bnel        $t8, $t1, L_080027C0
    if (ctx->r24 != ctx->r9) {
        // 0x080027A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080027C0;
    }
    goto skip_0;
    // 0x080027A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080027A4: jalr        $t9
    // 0x080027A8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080027A8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_12:
    // 0x080027AC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080027B0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080027B4: jalr        $t9
    // 0x080027B8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080027B8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_13:
L_080027BC:
    // 0x080027BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080027C0:
    // 0x080027C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080027C4: jr          $ra
    // 0x080027C8: nop

    TRACE_RETURN()
    return;
    // 0x080027C8: nop

;}
RECOMP_FUNC void func_08005018_6C4768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800501C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005024: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005028: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800502C: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x08005030: jalr        $t9
    // 0x08005034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08005038: bne         $v0, $zero, L_08005080
    if (ctx->r2 != 0) {
        // 0x0800503C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08005080;
    }
    // 0x0800503C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08005040: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08005044: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08005048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800504C: addiu       $t6, $zero, 0x350
    ctx->r14 = ADD32(0, 0X350);
    // 0x08005050: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08005054: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005058: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800505C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005060: sh          $t6, 0x5E($t7)
    MEM_H(0X5E, ctx->r15) = ctx->r14;
    // 0x08005064: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005068: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5090) << 16);
    // 0x0800506C: addiu       $a0, $a0, 0x5090
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5090));
    // 0x08005070: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08005074: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x08005078: jalr        $t9
    // 0x0800507C: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800507C: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    after_1:
L_08005080:
    // 0x08005080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005088: jr          $ra
    // 0x0800508C: nop

    TRACE_RETURN()
    return;
    // 0x0800508C: nop

;}
RECOMP_FUNC void func_080075DC_6C6D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080075DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080075E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080075E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080075E8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x080075EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080075F0: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x080075F4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080075F8: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x080075FC: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x08007600: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x08007604: beq         $t0, $zero, L_080076A0
    if (ctx->r8 == 0) {
        // 0x08007608: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080076A0;
    }
    // 0x08007608: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800760C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08007610: jalr        $t9
    // 0x08007614: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007614: nop

    after_0:
    // 0x08007618: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800761C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08007620: jalr        $t9
    // 0x08007624: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007624: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_1:
    // 0x08007628: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800762C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08007630: jalr        $t9
    // 0x08007634: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007634: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    after_2:
    // 0x08007638: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800763C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08007640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800764C: jalr        $t9
    // 0x08007650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08007654: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007658: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x0800765C: jalr        $t9
    // 0x08007660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08007664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007668: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x0800766C: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08007670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007674: jalr        $t9
    // 0x08007678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x0800767C: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x08007680: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007684: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007688: beq         $v0, $zero, L_08007698
    if (ctx->r2 == 0) {
        // 0x0800768C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X76B4) << 16);
            goto L_08007698;
    }
    // 0x0800768C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X76B4) << 16);
    // 0x08007690: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08007694: sb          $t1, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r9;
L_08007698:
    // 0x08007698: jalr        $t9
    // 0x0800769C: addiu       $a0, $a0, 0x76B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X76B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800769C: addiu       $a0, $a0, 0x76B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X76B4));
    after_6:
L_080076A0:
    // 0x080076A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080076A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080076A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080076AC: jr          $ra
    // 0x080076B0: nop

    TRACE_RETURN()
    return;
    // 0x080076B0: nop

;}
RECOMP_FUNC void func_080052A0_6C49F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080052A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080052A4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x080052A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080052AC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x080052B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080052B4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x080052B8: lhu         $v0, -0x4F56($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F56);
    // 0x080052BC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080052C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X532C) << 16);
    // 0x080052C4: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x080052C8: beq         $t7, $zero, L_080052EC
    if (ctx->r15 == 0) {
        // 0x080052CC: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_080052EC;
    }
    // 0x080052CC: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x080052D0: beql        $t8, $zero, L_080052F0
    if (ctx->r24 == 0) {
        // 0x080052D4: lhu         $t2, 0x16($a1)
        ctx->r10 = MEM_HU(ctx->r5, 0X16);
            goto L_080052F0;
    }
    goto skip_0;
    // 0x080052D4: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    skip_0:
    // 0x080052D8: lhu         $t9, 0x16($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X16);
    // 0x080052DC: addiu       $t0, $t9, 0x80
    ctx->r8 = ADD32(ctx->r25, 0X80);
    // 0x080052E0: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x080052E4: b           L_080052FC
    // 0x080052E8: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
        goto L_080052FC;
    // 0x080052E8: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
L_080052EC:
    // 0x080052EC: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
L_080052F0:
    // 0x080052F0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x080052F4: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x080052F8: sh          $t4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r12;
L_080052FC:
    // 0x080052FC: lw          $t5, 0x68($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X68);
    // 0x08005300: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005304: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005308: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x0800530C: beq         $t6, $zero, L_0800531C
    if (ctx->r14 == 0) {
        // 0x08005310: addiu       $a0, $a0, 0x532C
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X532C));
            goto L_0800531C;
    }
    // 0x08005310: addiu       $a0, $a0, 0x532C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X532C));
    // 0x08005314: jalr        $t9
    // 0x08005318: sw          $zero, 0x60($a2)
    MEM_W(0X60, ctx->r6) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005318: sw          $zero, 0x60($a2)
    MEM_W(0X60, ctx->r6) = 0;
    after_0:
L_0800531C:
    // 0x0800531C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005324: jr          $ra
    // 0x08005328: nop

    TRACE_RETURN()
    return;
    // 0x08005328: nop

;}
RECOMP_FUNC void func_080002C8_6BFA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002D0: lui         $t6, 0x8280
    ctx->r14 = S32(0X8280 << 16);
    // 0x080002D4: ori         $t6, $t6, 0x320
    ctx->r14 = ctx->r14 | 0X320;
    // 0x080002D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080002DC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080002E0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080002E4: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x080002E8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080002EC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080002F0: jalr        $t9
    // 0x080002F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080002F8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89A4) << 16);
    // 0x080002FC: lwc1        $f0, -0x765C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89A4));
    // 0x08000300: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000304: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000308: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800030C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X298) << 16);
    // 0x08000310: addiu       $a0, $a0, 0x298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X298));
    // 0x08000314: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08000318: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x0800031C: jalr        $t9
    // 0x08000320: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000320: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08000324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800032C: jr          $ra
    // 0x08000330: nop

    TRACE_RETURN()
    return;
    // 0x08000330: nop

;}
RECOMP_FUNC void func_08006A38_6C6188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006A40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006A44: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08006A48: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08006A4C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08006A50: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08006A54: bne         $v0, $zero, L_08006A98
    if (ctx->r2 != 0) {
        // 0x08006A58: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08006A98;
    }
    // 0x08006A58: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08006A5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08006A60: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08006A64: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08006A68: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08006A6C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006A70: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08006A74: addiu       $a0, $zero, 0x2BA
    ctx->r4 = ADD32(0, 0X2BA);
    // 0x08006A78: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08006A7C: jalr        $t9
    // 0x08006A80: swc1        $f4, 0x80($t8)
    MEM_W(0X80, ctx->r24) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006A80: swc1        $f4, 0x80($t8)
    MEM_W(0X80, ctx->r24) = ctx->f4.u32l;
    after_0:
    // 0x08006A84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006A8C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X6AA8) << 16);
    // 0x08006A90: jalr        $t9
    // 0x08006A94: addiu       $a0, $a0, 0x6AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6AA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006A94: addiu       $a0, $a0, 0x6AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X6AA8));
    after_1:
L_08006A98:
    // 0x08006A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006AA0: jr          $ra
    // 0x08006AA4: nop

    TRACE_RETURN()
    return;
    // 0x08006AA4: nop

;}
RECOMP_FUNC void func_08003300_6C2A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003308: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x0800330C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003310: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08003314: addiu       $t6, $zero, 0x1FB
    ctx->r14 = ADD32(0, 0X1FB);
    // 0x08003318: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x0800331C: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x08003320: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003324: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003328: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800332C: beq         $v0, $zero, L_0800335C
    if (ctx->r2 == 0) {
        // 0x08003330: sw          $t9, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r25;
            goto L_0800335C;
    }
    // 0x08003330: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08003334: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003338: beq         $v0, $at, L_0800335C
    if (ctx->r2 == ctx->r1) {
        // 0x0800333C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_0800335C;
    }
    // 0x0800333C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003340: beq         $v0, $at, L_0800335C
    if (ctx->r2 == ctx->r1) {
        // 0x08003344: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_0800335C;
    }
    // 0x08003344: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003348: beq         $v0, $at, L_0800335C
    if (ctx->r2 == ctx->r1) {
        // 0x0800334C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_0800335C;
    }
    // 0x0800334C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003350: beq         $v0, $at, L_0800335C
    if (ctx->r2 == ctx->r1) {
        // 0x08003354: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_0800335C;
    }
    // 0x08003354: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003358: bne         $v0, $at, L_08003388
    if (ctx->r2 != ctx->r1) {
        // 0x0800335C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08003388;
    }
L_0800335C:
    // 0x0800335C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003360: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003368: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800336C: jalr        $t9
    // 0x08003370: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003370: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08003374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003378: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800337C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003380: b           L_080033E0
    // 0x08003384: sb          $t0, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r8;
        goto L_080033E0;
    // 0x08003384: sb          $t0, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r8;
L_08003388:
    // 0x08003388: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x0800338C: beq         $v0, $at, L_080033BC
    if (ctx->r2 == ctx->r1) {
        // 0x08003390: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_080033BC;
    }
    // 0x08003390: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003394: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08003398: beq         $v0, $at, L_080033BC
    if (ctx->r2 == ctx->r1) {
        // 0x0800339C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_080033BC;
    }
    // 0x0800339C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080033A0: beq         $v0, $at, L_080033BC
    if (ctx->r2 == ctx->r1) {
        // 0x080033A4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_080033BC;
    }
    // 0x080033A4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x080033A8: beq         $v0, $at, L_080033BC
    if (ctx->r2 == ctx->r1) {
        // 0x080033AC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_080033BC;
    }
    // 0x080033AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080033B0: beq         $v0, $at, L_080033BC
    if (ctx->r2 == ctx->r1) {
        // 0x080033B4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_080033BC;
    }
    // 0x080033B4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x080033B8: bne         $v0, $at, L_080033E0
    if (ctx->r2 != ctx->r1) {
        // 0x080033BC: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080033E0;
    }
L_080033BC:
    // 0x080033BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080033C0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080033C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080033C8: jalr        $t9
    // 0x080033CC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080033CC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x080033D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080033D4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080033D8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x080033DC: sb          $t1, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r9;
L_080033E0:
    // 0x080033E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080033E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080033E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080033F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3418) << 16);
    // 0x080033F4: addiu       $a0, $a0, 0x3418
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3418));
    // 0x080033F8: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080033FC: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08003400: jalr        $t9
    // 0x08003404: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003404: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_2:
    // 0x08003408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800340C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003410: jr          $ra
    // 0x08003414: nop

    TRACE_RETURN()
    return;
    // 0x08003414: nop

;}
RECOMP_FUNC void func_0800421C_6C396C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800421C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004220: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004228: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800422C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004230: addiu       $t6, $zero, 0xE6
    ctx->r14 = ADD32(0, 0XE6);
    // 0x08004234: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08004238: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x0800423C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08004240: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08004244: jalr        $t9
    // 0x08004248: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004248: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_0:
    // 0x0800424C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004250: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004254: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08004258: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800425C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004260: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08004264: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08004268: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x0800426C: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x08004270: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08004274: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08004278: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x0800427C: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08004280: lbu         $v1, 0xD0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004284: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004288: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800428C: bne         $v1, $zero, L_080042A4
    if (ctx->r3 != 0) {
        // 0x08004290: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_080042A4;
    }
    // 0x08004290: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004294: jalr        $t9
    // 0x08004298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800429C: b           L_08004338
    // 0x080042A0: nop

        goto L_08004338;
    // 0x080042A0: nop

L_080042A4:
    // 0x080042A4: bne         $v1, $at, L_080042C0
    if (ctx->r3 != ctx->r1) {
        // 0x080042A8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080042C0;
    }
    // 0x080042A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080042AC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080042B0: jalr        $t9
    // 0x080042B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080042B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x080042B8: b           L_08004338
    // 0x080042BC: nop

        goto L_08004338;
    // 0x080042BC: nop

L_080042C0:
    // 0x080042C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080042C4: bne         $v1, $at, L_080042E0
    if (ctx->r3 != ctx->r1) {
        // 0x080042C8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080042E0;
    }
    // 0x080042C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080042CC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080042D0: jalr        $t9
    // 0x080042D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080042D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x080042D8: b           L_08004338
    // 0x080042DC: nop

        goto L_08004338;
    // 0x080042DC: nop

L_080042E0:
    // 0x080042E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080042E4: bne         $v1, $at, L_08004300
    if (ctx->r3 != ctx->r1) {
        // 0x080042E8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08004300;
    }
    // 0x080042E8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080042EC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080042F0: jalr        $t9
    // 0x080042F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080042F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x080042F8: b           L_08004338
    // 0x080042FC: nop

        goto L_08004338;
    // 0x080042FC: nop

L_08004300:
    // 0x08004300: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08004304: bne         $v1, $at, L_08004320
    if (ctx->r3 != ctx->r1) {
        // 0x08004308: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08004320;
    }
    // 0x08004308: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800430C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004310: jalr        $t9
    // 0x08004314: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004314: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x08004318: b           L_08004338
    // 0x0800431C: nop

        goto L_08004338;
    // 0x0800431C: nop

L_08004320:
    // 0x08004320: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08004324: bne         $v1, $at, L_08004338
    if (ctx->r3 != ctx->r1) {
        // 0x08004328: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08004338;
    }
    // 0x08004328: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800432C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004330: jalr        $t9
    // 0x08004334: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004334: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
L_08004338:
    // 0x08004338: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800433C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004340: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X435C) << 16);
    // 0x08004344: jalr        $t9
    // 0x08004348: addiu       $a0, $a0, 0x435C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X435C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004348: addiu       $a0, $a0, 0x435C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X435C));
    after_7:
    // 0x0800434C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004354: jr          $ra
    // 0x08004358: nop

    TRACE_RETURN()
    return;
    // 0x08004358: nop

;}
RECOMP_FUNC void func_080024AC_6C1BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080024B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080024B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080024B8: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080024BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024C4: beq         $t6, $zero, L_080024D4
    if (ctx->r14 == 0) {
        // 0x080024C8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(21, 0X24E4) << 16);
            goto L_080024D4;
    }
    // 0x080024C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X24E4) << 16);
    // 0x080024CC: jalr        $t9
    // 0x080024D0: addiu       $a0, $a0, 0x24E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X24E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024D0: addiu       $a0, $a0, 0x24E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X24E4));
    after_0:
L_080024D4:
    // 0x080024D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080024D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080024DC: jr          $ra
    // 0x080024E0: nop

    TRACE_RETURN()
    return;
    // 0x080024E0: nop

;}
RECOMP_FUNC void func_08002A20_6C2170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A28: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002A2C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89F0) << 16);
    // 0x08002A30: ldc1        $f8, -0x7610($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X89F0));
    // 0x08002A34: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002A38: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A3C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002A40: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002A44: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002A48: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08002A4C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002A50: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002A54: bne         $v0, $zero, L_08002A88
    if (ctx->r2 != 0) {
        // 0x08002A58: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002A88;
    }
    // 0x08002A58: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002A5C: jalr        $t9
    // 0x08002A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08002A64: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002A68: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08002A6C: jalr        $t9
    // 0x08002A70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x08002A74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A78: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A7C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2A98) << 16);
    // 0x08002A80: jalr        $t9
    // 0x08002A84: addiu       $a0, $a0, 0x2A98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2A98));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A84: addiu       $a0, $a0, 0x2A98
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2A98));
    after_2:
L_08002A88:
    // 0x08002A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A90: jr          $ra
    // 0x08002A94: nop

    TRACE_RETURN()
    return;
    // 0x08002A94: nop

;}
RECOMP_FUNC void func_08006F48_6C6698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006F48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08006F4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08006F50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08006F54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08006F58: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08006F5C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A78) << 16);
    // 0x08006F60: ldc1        $f0, -0x7588($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A78));
    // 0x08006F64: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08006F68: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08006F6C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08006F70: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A80) << 16);
    // 0x08006F74: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08006F78: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08006F7C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08006F80: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08006F84: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08006F88: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08006F8C: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08006F90: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08006F94: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08006F98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08006F9C: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08006FA0: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08006FA4: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08006FA8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08006FAC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08006FB0: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08006FB4: ldc1        $f4, -0x7580($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A80));
    // 0x08006FB8: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x08006FBC: nop

    // 0x08006FC0: bc1tl       L_08007030
    if (c1cs) {
        // 0x08006FC4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08007030;
    }
    goto skip_0;
    // 0x08006FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08006FC8: jalr        $t9
    // 0x08006FCC: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006FCC: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_0:
    // 0x08006FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08006FD4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A88) << 16);
    // 0x08006FD8: lwc1        $f0, -0x7578($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A88));
    // 0x08006FDC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006FE0: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x08006FE4: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x08006FE8: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x08006FEC: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x08006FF0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006FF4: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x08006FF8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08006FFC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08007000: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08007004: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x08007008: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800700C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007010: jalr        $t9
    // 0x08007014: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007014: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    after_1:
    // 0x08007018: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800701C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007020: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X7040) << 16);
    // 0x08007024: jalr        $t9
    // 0x08007028: addiu       $a0, $a0, 0x7040
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7040));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007028: addiu       $a0, $a0, 0x7040
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X7040));
    after_2:
    // 0x0800702C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08007030:
    // 0x08007030: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08007034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08007038: jr          $ra
    // 0x0800703C: nop

    TRACE_RETURN()
    return;
    // 0x0800703C: nop

;}
RECOMP_FUNC void func_080010B8_6C0808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080010BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080010C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080010C8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x080010CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080010D0: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080010D4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x080010D8: addiu       $v0, $v0, -0x7468
    ctx->r2 = ADD32(ctx->r2, -0X7468);
    // 0x080010DC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080010E0: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    // 0x080010E4: bc1tl       L_08001168
    if (c1cs) {
        // 0x080010E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001168;
    }
    goto skip_0;
    // 0x080010E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080010EC: jalr        $v0
    // 0x080010F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080010F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x080010F4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010F8: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080010FC: jalr        $t9
    // 0x08001100: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001100: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x08001104: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001108: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x0800110C: jalr        $t9
    // 0x08001110: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001110: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_2:
    // 0x08001114: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001118: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800111C: jalr        $t9
    // 0x08001120: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001120: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    after_3:
    // 0x08001124: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08001128: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800112C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08001130: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001134: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08001138: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x0800113C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08001140: swc1        $f10, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f10.u32l;
    // 0x08001144: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001148: jalr        $t9
    // 0x0800114C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800114C: nop

    after_4:
    // 0x08001150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001154: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001158: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1174) << 16);
    // 0x0800115C: jalr        $t9
    // 0x08001160: addiu       $a0, $a0, 0x1174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001160: addiu       $a0, $a0, 0x1174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1174));
    after_5:
    // 0x08001164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001168:
    // 0x08001168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800116C: jr          $ra
    // 0x08001170: nop

    TRACE_RETURN()
    return;
    // 0x08001170: nop

;}
RECOMP_FUNC void func_08001BBC_6C130C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BC8: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08001BCC: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08001BD0: lui         $at, 0xC2BA
    ctx->r1 = S32(0XC2BA << 16);
    // 0x08001BD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001BD8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001BDC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BE0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001BE4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08001BE8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08001BEC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1C10) << 16);
    // 0x08001BF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BF4: addiu       $a0, $a0, 0x1C10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1C10));
    // 0x08001BF8: jalr        $t9
    // 0x08001BFC: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BFC: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    after_0:
    // 0x08001C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C08: jr          $ra
    // 0x08001C0C: nop

    TRACE_RETURN()
    return;
    // 0x08001C0C: nop

;}
RECOMP_FUNC void func_08002474_6C1BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002474: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002478: jr          $ra
    // 0x0800247C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800247C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003C7C_6C33CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003C84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003C88: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003C8C: lui         $a1, 0x4302
    ctx->r5 = S32(0X4302 << 16);
    // 0x08003C90: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    // 0x08003C94: bne         $v0, $zero, L_08003CE8
    if (ctx->r2 != 0) {
        // 0x08003C98: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08003CE8;
    }
    // 0x08003C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003C9C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A10) << 16);
    // 0x08003CA0: lwc1        $f4, -0x75F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A10));
    // 0x08003CA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CA8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08003CAC: lui         $a3, 0xC33E
    ctx->r7 = S32(0XC33E << 16);
    // 0x08003CB0: jalr        $t9
    // 0x08003CB4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CB4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08003CB8: bne         $v0, $zero, L_08003ED0
    if (ctx->r2 != 0) {
        // 0x08003CBC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003ED0;
    }
    // 0x08003CBC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003CC0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003CC4: jalr        $t9
    // 0x08003CC8: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003CC8: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x08003CCC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003CD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003CD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003CD8: jalr        $t9
    // 0x08003CDC: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003CDC: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_2:
    // 0x08003CE0: b           L_08003ED4
    // 0x08003CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003CE8:
    // 0x08003CE8: bne         $v0, $at, L_08003D40
    if (ctx->r2 != ctx->r1) {
        // 0x08003CEC: lui         $a1, 0xC31F
        ctx->r5 = S32(0XC31F << 16);
            goto L_08003D40;
    }
    // 0x08003CEC: lui         $a1, 0xC31F
    ctx->r5 = S32(0XC31F << 16);
    // 0x08003CF0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A14) << 16);
    // 0x08003CF4: lwc1        $f6, -0x75EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A14));
    // 0x08003CF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CFC: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08003D00: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    // 0x08003D04: lui         $a3, 0xC32F
    ctx->r7 = S32(0XC32F << 16);
    // 0x08003D08: jalr        $t9
    // 0x08003D0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003D0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x08003D10: bne         $v0, $zero, L_08003ED0
    if (ctx->r2 != 0) {
        // 0x08003D14: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003ED0;
    }
    // 0x08003D14: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003D18: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003D1C: jalr        $t9
    // 0x08003D20: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003D20: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_4:
    // 0x08003D24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D28: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X40B8) << 16);
    // 0x08003D30: jalr        $t9
    // 0x08003D34: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003D34: addiu       $a0, $a0, 0x40B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X40B8));
    after_5:
    // 0x08003D38: b           L_08003ED4
    // 0x08003D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003D40:
    // 0x08003D40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003D44: bne         $v0, $at, L_08003D84
    if (ctx->r2 != ctx->r1) {
        // 0x08003D48: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003D84;
    }
    // 0x08003D48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003D4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D50: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003D54: addiu       $t6, $zero, 0x79
    ctx->r14 = ADD32(0, 0X79);
    // 0x08003D58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003D5C: lui         $a2, 0x430A
    ctx->r6 = S32(0X430A << 16);
    // 0x08003D60: jalr        $t9
    // 0x08003D64: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003D64: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_6:
    // 0x08003D68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003D74: jalr        $t9
    // 0x08003D78: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003D78: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_7:
    // 0x08003D7C: b           L_08003ED4
    // 0x08003D80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003D80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003D84:
    // 0x08003D84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003D88: bne         $v0, $at, L_08003DC8
    if (ctx->r2 != ctx->r1) {
        // 0x08003D8C: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003DC8;
    }
    // 0x08003D8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003D90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D94: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003D98: addiu       $t7, $zero, 0x79
    ctx->r15 = ADD32(0, 0X79);
    // 0x08003D9C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08003DA0: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x08003DA4: jalr        $t9
    // 0x08003DA8: lui         $a3, 0x42C4
    ctx->r7 = S32(0X42C4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003DA8: lui         $a3, 0x42C4
    ctx->r7 = S32(0X42C4 << 16);
    after_8:
    // 0x08003DAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003DB8: jalr        $t9
    // 0x08003DBC: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003DBC: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_9:
    // 0x08003DC0: b           L_08003ED4
    // 0x08003DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003DC8:
    // 0x08003DC8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003DCC: bne         $v0, $at, L_08003E0C
    if (ctx->r2 != ctx->r1) {
        // 0x08003DD0: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003E0C;
    }
    // 0x08003DD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003DD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DD8: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003DDC: addiu       $t8, $zero, 0x79
    ctx->r24 = ADD32(0, 0X79);
    // 0x08003DE0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003DE4: lui         $a2, 0x42EC
    ctx->r6 = S32(0X42EC << 16);
    // 0x08003DE8: jalr        $t9
    // 0x08003DEC: lui         $a3, 0x42AC
    ctx->r7 = S32(0X42AC << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003DEC: lui         $a3, 0x42AC
    ctx->r7 = S32(0X42AC << 16);
    after_10:
    // 0x08003DF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003DFC: jalr        $t9
    // 0x08003E00: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08003E00: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_11:
    // 0x08003E04: b           L_08003ED4
    // 0x08003E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003E0C:
    // 0x08003E0C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003E10: bne         $v0, $at, L_08003E50
    if (ctx->r2 != ctx->r1) {
        // 0x08003E14: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003E50;
    }
    // 0x08003E14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003E18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E1C: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003E20: addiu       $t0, $zero, 0x79
    ctx->r8 = ADD32(0, 0X79);
    // 0x08003E24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08003E28: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    // 0x08003E2C: jalr        $t9
    // 0x08003E30: lui         $a3, 0x4294
    ctx->r7 = S32(0X4294 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08003E30: lui         $a3, 0x4294
    ctx->r7 = S32(0X4294 << 16);
    after_12:
    // 0x08003E34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003E40: jalr        $t9
    // 0x08003E44: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08003E44: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_13:
    // 0x08003E48: b           L_08003ED4
    // 0x08003E4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003E4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003E50:
    // 0x08003E50: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08003E54: bne         $v0, $at, L_08003E94
    if (ctx->r2 != ctx->r1) {
        // 0x08003E58: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003E94;
    }
    // 0x08003E58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003E5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E60: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003E64: addiu       $t1, $zero, 0x79
    ctx->r9 = ADD32(0, 0X79);
    // 0x08003E68: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x08003E6C: lui         $a2, 0x42C4
    ctx->r6 = S32(0X42C4 << 16);
    // 0x08003E70: jalr        $t9
    // 0x08003E74: lui         $a3, 0x4278
    ctx->r7 = S32(0X4278 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08003E74: lui         $a3, 0x4278
    ctx->r7 = S32(0X4278 << 16);
    after_14:
    // 0x08003E78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003E84: jalr        $t9
    // 0x08003E88: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08003E88: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_15:
    // 0x08003E8C: b           L_08003ED4
    // 0x08003E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003ED4;
    // 0x08003E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003E94:
    // 0x08003E94: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08003E98: bne         $v0, $at, L_08003ED0
    if (ctx->r2 != ctx->r1) {
        // 0x08003E9C: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08003ED0;
    }
    // 0x08003E9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08003EA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003EA4: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003EA8: addiu       $t2, $zero, 0x79
    ctx->r10 = ADD32(0, 0X79);
    // 0x08003EAC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08003EB0: lui         $a2, 0x42B0
    ctx->r6 = S32(0X42B0 << 16);
    // 0x08003EB4: jalr        $t9
    // 0x08003EB8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08003EB8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_16:
    // 0x08003EBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003EC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003EC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X3EE0) << 16);
    // 0x08003EC8: jalr        $t9
    // 0x08003ECC: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08003ECC: addiu       $a0, $a0, 0x3EE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X3EE0));
    after_17:
L_08003ED0:
    // 0x08003ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003ED4:
    // 0x08003ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003ED8: jr          $ra
    // 0x08003EDC: nop

    TRACE_RETURN()
    return;
    // 0x08003EDC: nop

;}
RECOMP_FUNC void func_080024A0_6C1BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080024A4: jr          $ra
    // 0x080024A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080024A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001174_6C08C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001178: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800117C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001184: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001188: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x0800118C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001190: lui         $a1, 0xC352
    ctx->r5 = S32(0XC352 << 16);
    // 0x08001194: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x08001198: jalr        $t9
    // 0x0800119C: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800119C: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_0:
    // 0x080011A0: bne         $v0, $zero, L_08001214
    if (ctx->r2 != 0) {
        // 0x080011A4: lui         $at, 0xFEFF
        ctx->r1 = S32(0XFEFF << 16);
            goto L_08001214;
    }
    // 0x080011A4: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080011A8: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080011AC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080011B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080011B4: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080011B8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080011BC: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x080011C0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080011C4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080011C8: jalr        $t9
    // 0x080011CC: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011CC: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_1:
    // 0x080011D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080011D4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080011D8: jalr        $t9
    // 0x080011DC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080011DC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x080011E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080011E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080011E8: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x080011EC: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x080011F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080011F8: jalr        $t9
    // 0x080011FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080011FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001200: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001204: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001208: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1228) << 16);
    // 0x0800120C: jalr        $t9
    // 0x08001210: addiu       $a0, $a0, 0x1228
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1228));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001210: addiu       $a0, $a0, 0x1228
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1228));
    after_4:
L_08001214:
    // 0x08001214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001218: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800121C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001220: jr          $ra
    // 0x08001224: nop

    TRACE_RETURN()
    return;
    // 0x08001224: nop

;}
RECOMP_FUNC void func_080014C8_6C0C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080014CC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080014D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080014D8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080014DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080014E0: jalr        $t9
    // 0x080014E4: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014E4: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_0:
    // 0x080014E8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x080014EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X152C) << 16);
    // 0x080014F0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89C0) << 16);
    // 0x080014F4: lbu         $t7, 0x7C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7C);
    // 0x080014F8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080014FC: addiu       $a0, $a0, 0x152C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X152C));
    // 0x08001500: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08001504: beq         $t8, $zero, L_0800151C
    if (ctx->r24 == 0) {
        // 0x08001508: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800151C;
    }
    // 0x08001508: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800150C: lwc1        $f4, -0x7640($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89C0));
    // 0x08001510: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001514: jalr        $t9
    // 0x08001518: swc1        $f4, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001518: swc1        $f4, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->f4.u32l;
    after_1:
L_0800151C:
    // 0x0800151C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001524: jr          $ra
    // 0x08001528: nop

    TRACE_RETURN()
    return;
    // 0x08001528: nop

;}
RECOMP_FUNC void func_080013E4_6C0B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080013E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080013EC: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x080013F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080013F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080013F8: addiu       $s0, $s0, 0x3E40
    ctx->r16 = ADD32(ctx->r16, 0X3E40);
    // 0x080013FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001400: jalr        $s0
    // 0x08001404: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08001404: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x08001408: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800140C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08001410: jalr        $t9
    // 0x08001414: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001414: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    after_1:
    // 0x08001418: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800141C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08001420: jalr        $t9
    // 0x08001424: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001424: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    after_2:
    // 0x08001428: jalr        $s0
    // 0x0800142C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x0800142C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x08001430: jalr        $s0
    // 0x08001434: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08001434: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x08001438: jalr        $s0
    // 0x0800143C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x0800143C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x08001440: jalr        $s0
    // 0x08001444: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08001444: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x08001448: jalr        $s0
    // 0x0800144C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x0800144C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_7:
    // 0x08001450: jalr        $s0
    // 0x08001454: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x08001454: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_8:
    // 0x08001458: jalr        $s0
    // 0x0800145C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x0800145C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
    // 0x08001460: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001464: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001468: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XBE8) << 16);
    // 0x0800146C: jalr        $t9
    // 0x08001470: addiu       $a0, $a0, 0xBE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XBE8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001470: addiu       $a0, $a0, 0xBE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XBE8));
    after_10:
    // 0x08001474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001478: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800147C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001480: jr          $ra
    // 0x08001484: nop

    TRACE_RETURN()
    return;
    // 0x08001484: nop

;}
RECOMP_FUNC void func_08001E00_6C1550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001E00: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08001E04: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08001E08: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08001E0C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08001E10: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x08001E14: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001E18: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08001E1C: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08001E20: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x08001E24: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x08001E28: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08001E2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001E30: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08001E34: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08001E38: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x08001E3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08001E40: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x08001E44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08001E48: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x08001E4C: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x08001E50: addiu       $t5, $t5, 0x2360
    ctx->r13 = ADD32(ctx->r13, 0X2360);
    // 0x08001E54: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x08001E58: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08001E5C: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08001E60: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001E64: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08001E68: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08001E6C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08001E70: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x08001E74: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08001E78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08001E7C: lbu         $t0, 0xE0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE0);
    // 0x08001E80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E84: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08001E88: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x08001E8C: lbu         $t1, 0xE1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE1);
    // 0x08001E90: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x08001E94: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08001E98: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x08001E9C: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x08001EA0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08001EA4: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08001EA8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x08001EAC: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x08001EB0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x08001EB4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08001EB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08001EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001EC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001EC8: jalr        $t9
    // 0x08001ECC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001ECC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08001ED0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x08001ED4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08001ED8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08001EDC: jr          $ra
    // 0x08001EE0: nop

    TRACE_RETURN()
    return;
    // 0x08001EE0: nop

;}
RECOMP_FUNC void func_0800166C_6C0DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800166C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001674: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08001678: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800167C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001680: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001684: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08001688: nop

    // 0x0800168C: bc1tl       L_080016C4
    if (c1cs) {
        // 0x08001690: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080016C4;
    }
    goto skip_0;
    // 0x08001690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001694: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001698: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x0800169C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080016A0: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x080016A4: jalr        $t9
    // 0x080016A8: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016A8: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    after_0:
    // 0x080016AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080016B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080016B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1174) << 16);
    // 0x080016B8: jalr        $t9
    // 0x080016BC: addiu       $a0, $a0, 0x1174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016BC: addiu       $a0, $a0, 0x1174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1174));
    after_1:
    // 0x080016C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080016C4:
    // 0x080016C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080016C8: jr          $ra
    // 0x080016CC: nop

    TRACE_RETURN()
    return;
    // 0x080016CC: nop

    // 0x080016D0: jr          $ra
    // 0x080016D4: nop

    TRACE_RETURN()
    return;
    // 0x080016D4: nop

;}
RECOMP_FUNC void func_08004AE0_6C4230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AE0: jr          $ra
    // 0x08004AE4: nop

    TRACE_RETURN()
    return;
    // 0x08004AE4: nop

;}
RECOMP_FUNC void func_08001DF8_6C1548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001DF8: jr          $ra
    // 0x08001DFC: nop

    TRACE_RETURN()
    return;
    // 0x08001DFC: nop

;}
RECOMP_FUNC void func_08003164_6C28B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003164: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08003168: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800316C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08003170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003178: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x0800317C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08003180: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08003184: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08003188: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800318C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003190: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08003194: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08003198: jalr        $t9
    // 0x0800319C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800319C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    after_0:
    // 0x080031A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080031A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080031A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080031AC: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x080031B0: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x080031B4: lui         $at, 0xC2C2
    ctx->r1 = S32(0XC2C2 << 16);
    // 0x080031B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080031BC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x080031C0: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    // 0x080031C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080031C8: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x080031CC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x080031D0: lui         $at, 0x42A8
    ctx->r1 = S32(0X42A8 << 16);
    // 0x080031D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080031D8: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    // 0x080031DC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x080031E0: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x080031E4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080031E8: swc1        $f8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f8.u32l;
    // 0x080031EC: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x080031F0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080031F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080031F8: sh          $t4, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r12;
    // 0x080031FC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08003200: jalr        $t9
    // 0x08003204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08003208: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x0800320C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003210: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08003214: lui         $a1, 0xC367
    ctx->r5 = S32(0XC367 << 16);
    // 0x08003218: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x0800321C: lui         $a3, 0x4298
    ctx->r7 = S32(0X4298 << 16);
    // 0x08003220: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x08003224: jalr        $t9
    // 0x08003228: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003228: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x0800322C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08003230: addiu       $v0, $v0, 0x2628
    ctx->r2 = ADD32(ctx->r2, 0X2628);
    // 0x08003234: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08003238: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800323C: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    // 0x08003240: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x08003244: jalr        $v0
    // 0x08003248: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08003248: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_3:
    // 0x0800324C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003250: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08003254: jalr        $t9
    // 0x08003258: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003258: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_4:
    // 0x0800325C: beq         $v0, $zero, L_08003280
    if (ctx->r2 == 0) {
        // 0x08003260: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_08003280;
    }
    // 0x08003260: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08003264: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003268: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800326C: lw          $a1, 0x184($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X184);
    // 0x08003270: lw          $a2, 0x188($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X188);
    // 0x08003274: lw          $a3, 0x18C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X18C);
    // 0x08003278: jalr        $t9
    // 0x0800327C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800327C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
L_08003280:
    // 0x08003280: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003284: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08003288: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800328C: jalr        $t9
    // 0x08003290: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003290: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x08003294: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003298: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800329C: jalr        $t9
    // 0x080032A0: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080032A0: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    after_7:
    // 0x080032A4: beq         $v0, $zero, L_080032D4
    if (ctx->r2 == 0) {
        // 0x080032A8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080032D4;
    }
    // 0x080032A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032AC: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080032B0: jalr        $t9
    // 0x080032B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080032B4: nop

    after_8:
    // 0x080032B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080032BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080032C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080032C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2E5C) << 16);
    // 0x080032C8: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x080032CC: jalr        $t9
    // 0x080032D0: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080032D0: addiu       $a0, $a0, 0x2E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2E5C));
    after_9:
L_080032D4:
    // 0x080032D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080032D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080032DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080032E0: jr          $ra
    // 0x080032E4: nop

    TRACE_RETURN()
    return;
    // 0x080032E4: nop

    // 0x080032E8: jr          $ra
    // 0x080032EC: nop

    TRACE_RETURN()
    return;
    // 0x080032EC: nop

    // 0x080032F0: jr          $ra
    // 0x080032F4: nop

    TRACE_RETURN()
    return;
    // 0x080032F4: nop

    // 0x080032F8: jr          $ra
    // 0x080032FC: nop

    TRACE_RETURN()
    return;
    // 0x080032FC: nop

;}
RECOMP_FUNC void func_08001B04_6C1254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B04: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08001B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B14: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x08001B18: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x08001B1C: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08001B20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001B24: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x08001B28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B2C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08001B30: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08001B34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B38: bc1tl       L_08001B54
    if (c1cs) {
        // 0x08001B3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001B54;
    }
    goto skip_0;
    // 0x08001B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001B40: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001B44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1B60) << 16);
    // 0x08001B48: jalr        $t9
    // 0x08001B4C: addiu       $a0, $a0, 0x1B60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1B60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B4C: addiu       $a0, $a0, 0x1B60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1B60));
    after_0:
    // 0x08001B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001B54:
    // 0x08001B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B58: jr          $ra
    // 0x08001B5C: nop

    TRACE_RETURN()
    return;
    // 0x08001B5C: nop

;}
RECOMP_FUNC void func_08005F2C_6C567C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005F2C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08005F30: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08005F34: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x08005F38: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x08005F3C: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x08005F40: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08005F44: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x08005F48: addu        $t9, $t6, $a1
    ctx->r25 = ADD32(ctx->r14, ctx->r5);
    // 0x08005F4C: sb          $t9, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r25;
    // 0x08005F50: addiu       $t1, $t1, -0x2058
    ctx->r9 = ADD32(ctx->r9, -0X2058);
    // 0x08005F54: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x08005F58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005F5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08005F60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x08005F64: lw          $t2, 0xE4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE4);
    // 0x08005F68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08005F6C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x08005F70: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x08005F74: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x08005F78: lui         $t5, 0x900
    ctx->r13 = S32(0X900 << 16);
    // 0x08005F7C: addiu       $t5, $t5, 0x1000
    ctx->r13 = ADD32(ctx->r13, 0X1000);
    // 0x08005F80: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x08005F84: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08005F88: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x08005F8C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08005F90: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08005F94: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08005F98: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x08005F9C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x08005FA0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08005FA4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08005FA8: lbu         $t0, 0xE0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE0);
    // 0x08005FAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005FB0: addiu       $t9, $t9, 0xA60
    ctx->r25 = ADD32(ctx->r25, 0XA60);
    // 0x08005FB4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x08005FB8: lbu         $t1, 0xE1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE1);
    // 0x08005FBC: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x08005FC0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08005FC4: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x08005FC8: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x08005FCC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x08005FD0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x08005FD4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x08005FD8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x08005FDC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x08005FE0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x08005FE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08005FE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08005FEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08005FF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08005FF4: jalr        $t9
    // 0x08005FF8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005FF8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x08005FFC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x08006000: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x08006004: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08006008: jr          $ra
    // 0x0800600C: nop

    TRACE_RETURN()
    return;
    // 0x0800600C: nop

;}
RECOMP_FUNC void func_08001EE4_6C1634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001EEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001EF0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001EF4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08001EF8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001EFC: addiu       $t6, $zero, 0x1B9
    ctx->r14 = ADD32(0, 0X1B9);
    // 0x08001F00: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08001F04: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001F08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001F0C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08001F10: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001F14: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001F18: jalr        $t9
    // 0x08001F1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08001F20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F24: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08001F28: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001F2C: addiu       $a1, $a1, 0x2360
    ctx->r5 = ADD32(ctx->r5, 0X2360);
    // 0x08001F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001F38: jalr        $t9
    // 0x08001F3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F3C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x08001F40: lui         $at, 0xC357
    ctx->r1 = S32(0XC357 << 16);
    // 0x08001F44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001F48: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x08001F4C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001F50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001F54: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x08001F58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001F5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F60: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001F64: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X209C) << 16);
    // 0x08001F68: addiu       $a1, $a1, 0x209C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X209C));
    // 0x08001F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F70: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001F74: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08001F78: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08001F7C: jalr        $t9
    // 0x08001F80: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001F80: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_2:
    // 0x08001F84: beq         $v0, $zero, L_08001FB0
    if (ctx->r2 == 0) {
        // 0x08001F88: addiu       $t8, $zero, 0x1E
        ctx->r24 = ADD32(0, 0X1E);
            goto L_08001FB0;
    }
    // 0x08001F88: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08001F8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F90: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08001F94: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001F98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08001F9C: jalr        $t9
    // 0x08001FA0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001FA0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x08001FA4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001FA8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001FAC: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08001FB0:
    // 0x08001FB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FB4: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x08001FB8: jalr        $t9
    // 0x08001FBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001FBC: nop

    after_4:
    // 0x08001FC0: bne         $v0, $zero, L_08001FE0
    if (ctx->r2 != 0) {
        // 0x08001FC4: sw          $v0, 0xE4($s0)
        MEM_W(0XE4, ctx->r16) = ctx->r2;
            goto L_08001FE0;
    }
    // 0x08001FC4: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08001FC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FCC: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001FD0: jalr        $t9
    // 0x08001FD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001FD4: nop

    after_5:
    // 0x08001FD8: b           L_0800200C
    // 0x08001FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800200C;
    // 0x08001FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001FE0:
    // 0x08001FE0: lw          $t0, 0xE4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE4);
    // 0x08001FE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08001FE8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001FEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FF4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X201C) << 16);
    // 0x08001FF8: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08001FFC: addiu       $a0, $a0, 0x201C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X201C));
    // 0x08002000: jalr        $t9
    // 0x08002004: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002004: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_6:
    // 0x08002008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800200C:
    // 0x0800200C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002014: jr          $ra
    // 0x08002018: nop

    TRACE_RETURN()
    return;
    // 0x08002018: nop

;}
RECOMP_FUNC void func_080024F0_6C1C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080024F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080024F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080024FC: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002500: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08002504: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002508: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x0800250C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002510: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x08002514: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800251C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x08002520: jalr        $t9
    // 0x08002524: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002524: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x08002528: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89DC) << 16);
    // 0x0800252C: lwc1        $f0, -0x7624($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89DC));
    // 0x08002530: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x08002534: lui         $at, 0xC2C0
    ctx->r1 = S32(0XC2C0 << 16);
    // 0x08002538: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800253C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002540: sb          $t7, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r15;
    // 0x08002544: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08002548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800254C: lui         $at, 0x42AC
    ctx->r1 = S32(0X42AC << 16);
    // 0x08002550: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002554: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08002558: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x0800255C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X27CC) << 16);
    // 0x08002560: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08002564: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08002568: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x0800256C: swc1        $f4, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f4.u32l;
    // 0x08002570: swc1        $f6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f6.u32l;
    // 0x08002574: swc1        $f8, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f8.u32l;
    // 0x08002578: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800257C: addiu       $a1, $a1, 0x27CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X27CC));
    // 0x08002580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002584: jalr        $v0
    // 0x08002588: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002588: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x0800258C: beq         $v0, $zero, L_080025B8
    if (ctx->r2 == 0) {
        // 0x08002590: addiu       $t8, $zero, 0x1E
        ctx->r24 = ADD32(0, 0X1E);
            goto L_080025B8;
    }
    // 0x08002590: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002594: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002598: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    // 0x0800259C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080025A0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080025A4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080025A8: jalr        $t9
    // 0x080025AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080025AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x080025B0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080025B4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080025B8:
    // 0x080025B8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080025BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X2ACC) << 16);
    // 0x080025C0: addiu       $a1, $a1, 0x2ACC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X2ACC));
    // 0x080025C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080025C8: jalr        $t9
    // 0x080025CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080025CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x080025D0: beq         $v0, $zero, L_080025FC
    if (ctx->r2 == 0) {
        // 0x080025D4: addiu       $t0, $zero, 0x1E
        ctx->r8 = ADD32(0, 0X1E);
            goto L_080025FC;
    }
    // 0x080025D4: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x080025D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025DC: sw          $s0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r16;
    // 0x080025E0: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x080025E4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080025E8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080025EC: jalr        $t9
    // 0x080025F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080025F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x080025F4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080025F8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080025FC:
    // 0x080025FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002600: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002604: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2624) << 16);
    // 0x08002608: jalr        $t9
    // 0x0800260C: addiu       $a0, $a0, 0x2624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2624));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800260C: addiu       $a0, $a0, 0x2624
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2624));
    after_5:
    // 0x08002610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800261C: jr          $ra
    // 0x08002620: nop

    TRACE_RETURN()
    return;
    // 0x08002620: nop

;}
RECOMP_FUNC void func_08002A98_6C21E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002AA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002AA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002AAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X2848) << 16);
    // 0x08002AB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002AB4: jalr        $t9
    // 0x08002AB8: addiu       $a0, $a0, 0x2848
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2848));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AB8: addiu       $a0, $a0, 0x2848
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X2848));
    after_0:
    // 0x08002ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AC4: jr          $ra
    // 0x08002AC8: nop

    TRACE_RETURN()
    return;
    // 0x08002AC8: nop

;}
RECOMP_FUNC void func_08001018_6C0768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800101C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001024: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001028: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800102C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001030: swc1        $f4, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->f4.u32l;
    // 0x08001034: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001038: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800103C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001040: swc1        $f6, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f6.u32l;
    // 0x08001044: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08001048: swc1        $f8, 0x18C($v0)
    MEM_W(0X18C, ctx->r2) = ctx->f8.u32l;
    // 0x0800104C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001050: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001054: beql        $t7, $zero, L_080010AC
    if (ctx->r15 == 0) {
        // 0x08001058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080010AC;
    }
    goto skip_0;
    // 0x08001058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800105C: jalr        $t9
    // 0x08001060: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001060: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x08001064: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001068: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800106C: jalr        $t9
    // 0x08001070: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001070: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_1:
    // 0x08001074: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001078: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800107C: jalr        $t9
    // 0x08001080: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001080: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_2:
    // 0x08001084: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89BC) << 16);
    // 0x08001088: lwc1        $f10, -0x7644($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89BC));
    // 0x0800108C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08001090: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001094: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001098: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X10B8) << 16);
    // 0x0800109C: addiu       $a0, $a0, 0x10B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X10B8));
    // 0x080010A0: jalr        $t9
    // 0x080010A4: swc1        $f10, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010A4: swc1        $f10, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f10.u32l;
    after_3:
    // 0x080010A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080010AC:
    // 0x080010AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080010B0: jr          $ra
    // 0x080010B4: nop

    TRACE_RETURN()
    return;
    // 0x080010B4: nop

;}
RECOMP_FUNC void func_08004ED4_6C4624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004EDC: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x08004EE0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08004EE4: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x08004EE8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004EEC: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x08004EF0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08004EF4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08004EF8: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08004EFC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004F00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004F04: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08004F08: jalr        $t9
    // 0x08004F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08004F10: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004F14: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08004F18: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X8A40) << 16);
    // 0x08004F1C: lwc1        $f0, -0x75C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X8A40));
    // 0x08004F20: sb          $zero, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = 0;
    // 0x08004F24: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08004F28: lui         $at, 0xC388
    ctx->r1 = S32(0XC388 << 16);
    // 0x08004F2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004F30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004F34: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08004F38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004F3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4F74) << 16);
    // 0x08004F40: addiu       $a0, $a0, 0x4F74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4F74));
    // 0x08004F44: sh          $t0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r8;
    // 0x08004F48: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08004F4C: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08004F50: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08004F54: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x08004F58: swc1        $f2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f2.u32l;
    // 0x08004F5C: jalr        $t9
    // 0x08004F60: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004F60: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    after_1:
    // 0x08004F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004F6C: jr          $ra
    // 0x08004F70: nop

    TRACE_RETURN()
    return;
    // 0x08004F70: nop

;}
RECOMP_FUNC void func_08000108_6BF858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000108: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x0800010C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000110: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000114: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000118: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800011C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000120: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000124: bne         $t6, $zero, L_08000160
    if (ctx->r14 != 0) {
        // 0x08000128: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_08000160;
    }
    // 0x08000128: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x0800012C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000130: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000134: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x08000138: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x0800013C: jalr        $t9
    // 0x08000140: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000140: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_0:
    // 0x08000144: lh          $t7, 0x68($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X68);
    // 0x08000148: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0800014C: beql        $t7, $zero, L_08000164
    if (ctx->r15 == 0) {
        // 0x08000150: lbu         $v0, 0xD1($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0XD1);
            goto L_08000164;
    }
    goto skip_0;
    // 0x08000150: lbu         $v0, 0xD1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD1);
    skip_0:
    // 0x08000154: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000158: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800015C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_08000160:
    // 0x08000160: lbu         $v0, 0xD1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD1);
L_08000164:
    // 0x08000164: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800016C: bne         $v0, $at, L_08000190
    if (ctx->r2 != ctx->r1) {
        // 0x08000170: lui         $a1, 0x3DA3
        ctx->r5 = S32(0X3DA3 << 16);
            goto L_08000190;
    }
    // 0x08000170: lui         $a1, 0x3DA3
    ctx->r5 = S32(0X3DA3 << 16);
    // 0x08000174: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000178: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800017C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x08000180: jalr        $t9
    // 0x08000184: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000184: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x08000188: b           L_080001A8
    // 0x0800018C: nop

        goto L_080001A8;
    // 0x0800018C: nop

L_08000190:
    // 0x08000190: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000194: bne         $v0, $at, L_080001A8
    if (ctx->r2 != ctx->r1) {
        // 0x08000198: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080001A8;
    }
    // 0x08000198: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800019C: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
L_080001A8:
    // 0x080001A8: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X899C) << 16);
    // 0x080001AC: lwc1        $f0, -0x7664($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X899C));
    // 0x080001B0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x080001B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080001B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001BC: addiu       $t9, $t9, -0x2A54
    ctx->r25 = ADD32(ctx->r25, -0X2A54);
    // 0x080001C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080001C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080001C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080001CC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x080001D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080001D4: jalr        $t9
    // 0x080001D8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001D8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x080001DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080001E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080001E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080001E8: jr          $ra
    // 0x080001EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x080001EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_08005988_6C50D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800598C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005994: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005998: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800599C: bne         $v0, $zero, L_080059FC
    if (ctx->r2 != 0) {
        // 0x080059A0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080059FC;
    }
    // 0x080059A0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080059A4: lbu         $v0, 0xD2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD2);
    // 0x080059A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x080059AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080059B0: beql        $v1, $v0, L_08005A00
    if (ctx->r3 == ctx->r2) {
        // 0x080059B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005A00;
    }
    goto skip_0;
    // 0x080059B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080059B8: bne         $v0, $at, L_080059C8
    if (ctx->r2 != ctx->r1) {
        // 0x080059BC: lui         $t0, 0x8280
        ctx->r8 = S32(0X8280 << 16);
            goto L_080059C8;
    }
    // 0x080059BC: lui         $t0, 0x8280
    ctx->r8 = S32(0X8280 << 16);
    // 0x080059C0: lbu         $t7, 0xD3($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD3);
    // 0x080059C4: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
L_080059C8:
    // 0x080059C8: lbu         $t8, 0xD4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD4);
    // 0x080059CC: lui         $t9, 0x8280
    ctx->r25 = S32(0X8280 << 16);
    // 0x080059D0: ori         $t9, $t9, 0x3E0
    ctx->r25 = ctx->r25 | 0X3E0;
    // 0x080059D4: bne         $v1, $t8, L_080059E4
    if (ctx->r3 != ctx->r24) {
        // 0x080059D8: ori         $t0, $t0, 0x3E0
        ctx->r8 = ctx->r8 | 0X3E0;
            goto L_080059E4;
    }
    // 0x080059D8: ori         $t0, $t0, 0x3E0
    ctx->r8 = ctx->r8 | 0X3E0;
    // 0x080059DC: b           L_080059E8
    // 0x080059E0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
        goto L_080059E8;
    // 0x080059E0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_080059E4:
    // 0x080059E4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
L_080059E8:
    // 0x080059E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080059EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080059F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X5A0C) << 16);
    // 0x080059F4: jalr        $t9
    // 0x080059F8: addiu       $a0, $a0, 0x5A0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5A0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080059F8: addiu       $a0, $a0, 0x5A0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X5A0C));
    after_0:
L_080059FC:
    // 0x080059FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005A00:
    // 0x08005A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005A04: jr          $ra
    // 0x08005A08: nop

    TRACE_RETURN()
    return;
    // 0x08005A08: nop

;}
RECOMP_FUNC void func_08003418_6C2B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800341C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003420: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003424: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003428: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800342C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08003430: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08003434: jalr        $t9
    // 0x08003438: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003438: lhu         $a0, 0xD4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD4);
    after_0:
    // 0x0800343C: beq         $v0, $zero, L_080036CC
    if (ctx->r2 == 0) {
        // 0x08003440: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080036CC;
    }
    // 0x08003440: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003444: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003448: jalr        $t9
    // 0x0800344C: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800344C: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    after_1:
    // 0x08003450: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x08003454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003458: lui         $a1, 0xC2E6
    ctx->r5 = S32(0XC2E6 << 16);
    // 0x0800345C: bne         $v0, $zero, L_08003488
    if (ctx->r2 != 0) {
        // 0x08003460: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08003488;
    }
    // 0x08003460: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003464: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003468: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x0800346C: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x08003470: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003474: lui         $a2, 0xC234
    ctx->r6 = S32(0XC234 << 16);
    // 0x08003478: jalr        $t9
    // 0x0800347C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800347C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x08003480: b           L_080036B8
    // 0x08003484: nop

        goto L_080036B8;
    // 0x08003484: nop

L_08003488:
    // 0x08003488: bne         $v0, $at, L_080034B8
    if (ctx->r2 != ctx->r1) {
        // 0x0800348C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080034B8;
    }
    // 0x0800348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003490: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003494: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003498: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x0800349C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080034A0: lui         $a1, 0xC2D2
    ctx->r5 = S32(0XC2D2 << 16);
    // 0x080034A4: lui         $a2, 0xC25C
    ctx->r6 = S32(0XC25C << 16);
    // 0x080034A8: jalr        $t9
    // 0x080034AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080034AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x080034B0: b           L_080036B8
    // 0x080034B4: nop

        goto L_080036B8;
    // 0x080034B4: nop

L_080034B8:
    // 0x080034B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080034BC: bne         $v0, $at, L_080034EC
    if (ctx->r2 != ctx->r1) {
        // 0x080034C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080034EC;
    }
    // 0x080034C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034C8: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x080034CC: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x080034D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080034D4: lui         $a1, 0xC2BE
    ctx->r5 = S32(0XC2BE << 16);
    // 0x080034D8: lui         $a2, 0xC282
    ctx->r6 = S32(0XC282 << 16);
    // 0x080034DC: jalr        $t9
    // 0x080034E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080034E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_4:
    // 0x080034E4: b           L_080036B8
    // 0x080034E8: nop

        goto L_080036B8;
    // 0x080034E8: nop

L_080034EC:
    // 0x080034EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080034F0: bne         $v0, $at, L_08003520
    if (ctx->r2 != ctx->r1) {
        // 0x080034F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003520;
    }
    // 0x080034F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034FC: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003500: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x08003504: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08003508: lui         $a1, 0xC2AA
    ctx->r5 = S32(0XC2AA << 16);
    // 0x0800350C: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x08003510: jalr        $t9
    // 0x08003514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003514: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x08003518: b           L_080036B8
    // 0x0800351C: nop

        goto L_080036B8;
    // 0x0800351C: nop

L_08003520:
    // 0x08003520: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003524: bne         $v0, $at, L_08003554
    if (ctx->r2 != ctx->r1) {
        // 0x08003528: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003554;
    }
    // 0x08003528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800352C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003530: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003534: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x08003538: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x0800353C: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    // 0x08003540: lui         $a2, 0xC2AA
    ctx->r6 = S32(0XC2AA << 16);
    // 0x08003544: jalr        $t9
    // 0x08003548: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003548: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_6:
    // 0x0800354C: b           L_080036B8
    // 0x08003550: nop

        goto L_080036B8;
    // 0x08003550: nop

L_08003554:
    // 0x08003554: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08003558: bne         $v0, $at, L_08003588
    if (ctx->r2 != ctx->r1) {
        // 0x0800355C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003588;
    }
    // 0x0800355C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003564: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003568: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x0800356C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08003570: lui         $a1, 0xC282
    ctx->r5 = S32(0XC282 << 16);
    // 0x08003574: lui         $a2, 0xC2BE
    ctx->r6 = S32(0XC2BE << 16);
    // 0x08003578: jalr        $t9
    // 0x0800357C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800357C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x08003580: b           L_080036B8
    // 0x08003584: nop

        goto L_080036B8;
    // 0x08003584: nop

L_08003588:
    // 0x08003588: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x0800358C: bne         $v0, $at, L_080035BC
    if (ctx->r2 != ctx->r1) {
        // 0x08003590: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080035BC;
    }
    // 0x08003590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003594: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003598: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x0800359C: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x080035A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x080035A4: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080035A8: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x080035AC: jalr        $t9
    // 0x080035B0: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080035B0: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_8:
    // 0x080035B4: b           L_080036B8
    // 0x080035B8: nop

        goto L_080036B8;
    // 0x080035B8: nop

L_080035BC:
    // 0x080035BC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x080035C0: bne         $v0, $at, L_080035F0
    if (ctx->r2 != ctx->r1) {
        // 0x080035C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080035F0;
    }
    // 0x080035C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035CC: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x080035D0: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x080035D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080035D8: lui         $a1, 0x4288
    ctx->r5 = S32(0X4288 << 16);
    // 0x080035DC: lui         $a2, 0xC302
    ctx->r6 = S32(0XC302 << 16);
    // 0x080035E0: jalr        $t9
    // 0x080035E4: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080035E4: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_9:
    // 0x080035E8: b           L_080036B8
    // 0x080035EC: nop

        goto L_080036B8;
    // 0x080035EC: nop

L_080035F0:
    // 0x080035F0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080035F4: bne         $v0, $at, L_08003624
    if (ctx->r2 != ctx->r1) {
        // 0x080035F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003624;
    }
    // 0x080035F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003600: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003604: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x08003608: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x0800360C: lui         $a1, 0x4238
    ctx->r5 = S32(0X4238 << 16);
    // 0x08003610: lui         $a2, 0xC2DC
    ctx->r6 = S32(0XC2DC << 16);
    // 0x08003614: jalr        $t9
    // 0x08003618: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003618: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_10:
    // 0x0800361C: b           L_080036B8
    // 0x08003620: nop

        goto L_080036B8;
    // 0x08003620: nop

L_08003624:
    // 0x08003624: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x08003628: bne         $v0, $at, L_08003658
    if (ctx->r2 != ctx->r1) {
        // 0x0800362C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003658;
    }
    // 0x0800362C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003630: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003634: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x08003638: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x0800363C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003640: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x08003644: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x08003648: jalr        $t9
    // 0x0800364C: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800364C: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_11:
    // 0x08003650: b           L_080036B8
    // 0x08003654: nop

        goto L_080036B8;
    // 0x08003654: nop

L_08003658:
    // 0x08003658: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x0800365C: bne         $v0, $at, L_0800368C
    if (ctx->r2 != ctx->r1) {
        // 0x08003660: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800368C;
    }
    // 0x08003660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003668: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x0800366C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08003670: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08003674: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08003678: lui         $a2, 0xC28C
    ctx->r6 = S32(0XC28C << 16);
    // 0x0800367C: jalr        $t9
    // 0x08003680: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08003680: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_12:
    // 0x08003684: b           L_080036B8
    // 0x08003688: nop

        goto L_080036B8;
    // 0x08003688: nop

L_0800368C:
    // 0x0800368C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08003690: bne         $v0, $at, L_080036B8
    if (ctx->r2 != ctx->r1) {
        // 0x08003694: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080036B8;
    }
    // 0x08003694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003698: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800369C: addiu       $t9, $t9, -0x13E4
    ctx->r25 = ADD32(ctx->r25, -0X13E4);
    // 0x080036A0: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x080036A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080036A8: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x080036AC: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x080036B0: jalr        $t9
    // 0x080036B4: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080036B4: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_13:
L_080036B8:
    // 0x080036B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X36E0) << 16);
    // 0x080036C4: jalr        $t9
    // 0x080036C8: addiu       $a0, $a0, 0x36E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X36E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080036C8: addiu       $a0, $a0, 0x36E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X36E0));
    after_14:
L_080036CC:
    // 0x080036CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080036D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080036D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080036D8: jr          $ra
    // 0x080036DC: nop

    TRACE_RETURN()
    return;
    // 0x080036DC: nop

;}
RECOMP_FUNC void func_08001A24_6C1174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A28: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001A34: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08001A38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001A3C: jalr        $t9
    // 0x08001A40: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A40: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x08001A44: beq         $v0, $zero, L_08001A6C
    if (ctx->r2 == 0) {
        // 0x08001A48: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_08001A6C;
    }
    // 0x08001A48: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x08001A4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A50: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08001A54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X1A7C) << 16);
    // 0x08001A60: addiu       $a0, $a0, 0x1A7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X1A7C));
    // 0x08001A64: jalr        $t9
    // 0x08001A68: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A68: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    after_1:
L_08001A6C:
    // 0x08001A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A74: jr          $ra
    // 0x08001A78: nop

    TRACE_RETURN()
    return;
    // 0x08001A78: nop

;}
RECOMP_FUNC void func_08000ACC_6C021C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000AD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000AD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000ADC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000AE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000AE4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000AE8: addiu       $t6, $zero, 0x1B9
    ctx->r14 = ADD32(0, 0X1B9);
    // 0x08000AEC: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08000AF0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000AF4: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x08000AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AFC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000B00: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000B04: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x08000B08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000B0C: jalr        $t9
    // 0x08000B10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000B14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B18: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B20: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08000B24: jalr        $t9
    // 0x08000B28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08000B2C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x08000B30: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(21, 0X89B4) << 16);
    // 0x08000B34: lwc1        $f0, -0x764C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(21, 0X89B4));
    // 0x08000B38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000B3C: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08000B40: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x08000B44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000B48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000B4C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000B50: sb          $t1, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r9;
    // 0x08000B54: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x08000B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000B5C: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x08000B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000B64: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B68: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000B6C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(21, 0X16D8) << 16);
    // 0x08000B70: addiu       $a1, $a1, 0x16D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(21, 0X16D8));
    // 0x08000B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B7C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08000B80: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000B84: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000B88: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x08000B8C: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x08000B90: jalr        $t9
    // 0x08000B94: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B94: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_2:
    // 0x08000B98: beq         $v0, $zero, L_08000BC0
    if (ctx->r2 == 0) {
        // 0x08000B9C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08000BC0;
    }
    // 0x08000B9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08000BA0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BA4: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08000BA8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000BAC: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08000BB0: jalr        $t9
    // 0x08000BB4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BB4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x08000BB8: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08000BBC: sw          $s0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r16;
L_08000BC0:
    // 0x08000BC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0XBE8) << 16);
    // 0x08000BCC: jalr        $t9
    // 0x08000BD0: addiu       $a0, $a0, 0xBE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XBE8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BD0: addiu       $a0, $a0, 0xBE8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0XBE8));
    after_4:
    // 0x08000BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000BDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000BE0: jr          $ra
    // 0x08000BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080072D0_6C6A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080072D0: jr          $ra
    // 0x080072D4: nop

    TRACE_RETURN()
    return;
    // 0x080072D4: nop

    // 0x080072D8: jr          $ra
    // 0x080072DC: nop

    TRACE_RETURN()
    return;
    // 0x080072DC: nop

    // 0x080072E0: jr          $ra
    // 0x080072E4: nop

    TRACE_RETURN()
    return;
    // 0x080072E4: nop

;}
RECOMP_FUNC void func_08004CEC_6C443C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004CEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004CF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004CF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004CF8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004CFC: lbu         $t6, 0xDC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDC);
    // 0x08004D00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004D04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D08: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08004D0C: sb          $t7, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r15;
    // 0x08004D10: lbu         $a1, 0xDC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004D14: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004D18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004D1C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08004D20: jalr        $t9
    // 0x08004D24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004D24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004D28: lbu         $t8, 0xDC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDC);
    // 0x08004D2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(21, 0X4D64) << 16);
    // 0x08004D30: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x08004D34: slti        $at, $t8, 0xF0
    ctx->r1 = SIGNED(ctx->r24) < 0XF0 ? 1 : 0;
    // 0x08004D38: bne         $at, $zero, L_08004D50
    if (ctx->r1 != 0) {
        // 0x08004D3C: addiu       $a0, $a0, 0x4D64
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4D64));
            goto L_08004D50;
    }
    // 0x08004D3C: addiu       $a0, $a0, 0x4D64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(21, 0X4D64));
    // 0x08004D40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004D44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004D48: jalr        $t9
    // 0x08004D4C: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004D4C: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    after_1:
L_08004D50:
    // 0x08004D50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004D54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004D5C: jr          $ra
    // 0x08004D60: nop

    TRACE_RETURN()
    return;
    // 0x08004D60: nop

;}
