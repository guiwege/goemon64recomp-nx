#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void __osIdCheckSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C27C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004C280: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x8004C284: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x8004C288: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x8004C28C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8004C290: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8004C294:
    // 0x8004C294: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8004C298: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8004C29C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8004C2A0: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8004C2A4: lhu         $t0, 0x0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X0);
    // 0x8004C2A8: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8004C2AC: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x8004C2B0: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x8004C2B4: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x8004C2B8: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x8004C2BC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8004C2C0: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x8004C2C4: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8004C2C8: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8004C2CC: sltiu       $at, $t7, 0x1C
    ctx->r1 = ctx->r15 < 0X1C ? 1 : 0;
    // 0x8004C2D0: bne         $at, $zero, L_8004C294
    if (ctx->r1 != 0) {
        // 0x8004C2D4: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_8004C294;
    }
    // 0x8004C2D4: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8004C2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004C2DC: jr          $ra
    // 0x8004C2E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8004C2E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80011934_12534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011934: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80011938: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8001193C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80011940: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80011944: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80011948: beq         $a0, $zero, L_80011960
    if (ctx->r4 == 0) {
        // 0x8001194C: andi        $t8, $a3, 0xFFFF
        ctx->r24 = ctx->r7 & 0XFFFF;
            goto L_80011960;
    }
    // 0x8001194C: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x80011950: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80011954: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
    // 0x80011958: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x8001195C: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
L_80011960:
    // 0x80011960: jr          $ra
    // 0x80011964: nop

    TRACE_RETURN()
    return;
    // 0x80011964: nop

;}
RECOMP_FUNC void func_8002599C_2659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002599C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800259A0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x800259A4: addiu       $t7, $t7, -0x2D68
    ctx->r15 = ADD32(ctx->r15, -0X2D68);
    // 0x800259A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800259AC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800259B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800259B4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800259B8: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x800259BC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800259C0: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x800259C4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800259C8: lbu         $t3, 0x24($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X24);
    // 0x800259CC: lbu         $t6, 0x25($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X25);
    // 0x800259D0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800259D4: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x800259D8: lbu         $t3, 0x26($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X26);
    // 0x800259DC: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800259E0: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800259E4: lbu         $t7, 0x27($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X27);
    // 0x800259E8: sll         $t5, $t3, 8
    ctx->r13 = S32(ctx->r11 << 8);
    // 0x800259EC: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x800259F0: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800259F4: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x800259F8: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x800259FC: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x80025A00: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x80025A04: ori         $t3, $t3, 0x31D
    ctx->r11 = ctx->r11 | 0X31D;
    // 0x80025A08: ori         $t8, $t8, 0x45D8
    ctx->r24 = ctx->r24 | 0X45D8;
    // 0x80025A0C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A10: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80025A14: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x80025A18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025A1C: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x80025A20: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80025A24: lw          $t4, 0x30($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X30);
    // 0x80025A28: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A2C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025A30: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80025A34: lui         $t7, 0x701
    ctx->r15 = S32(0X701 << 16);
    // 0x80025A38: ori         $t7, $t7, 0x4060
    ctx->r15 = ctx->r15 | 0X4060;
    // 0x80025A3C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A40: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x80025A44: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80025A48: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80025A4C: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x80025A50: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A54: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80025A58: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80025A5C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80025A60: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A64: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x80025A68: lui         $t8, 0x77F
    ctx->r24 = S32(0X77F << 16);
    // 0x80025A6C: ori         $t8, $t8, 0xF080
    ctx->r24 = ctx->r24 | 0XF080;
    // 0x80025A70: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80025A74: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x80025A78: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x80025A7C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025A80: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80025A84: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80025A88: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80025A8C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80025A90: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80025A94: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x80025A98: lui         $t4, 0xF510
    ctx->r12 = S32(0XF510 << 16);
    // 0x80025A9C: ori         $t4, $t4, 0x2000
    ctx->r12 = ctx->r12 | 0X2000;
    // 0x80025AA0: ori         $t6, $t6, 0x4060
    ctx->r14 = ctx->r14 | 0X4060;
    // 0x80025AA4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025AA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025AAC: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80025AB0: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x80025AB4: lui         $t9, 0xF
    ctx->r25 = S32(0XF << 16);
    // 0x80025AB8: ori         $t9, $t9, 0xC07C
    ctx->r25 = ctx->r25 | 0XC07C;
    // 0x80025ABC: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x80025AC0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80025AC4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80025AC8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80025ACC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025AD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025AD4: andi        $t8, $t3, 0x40
    ctx->r24 = ctx->r11 & 0X40;
    // 0x80025AD8: beq         $t8, $zero, L_80025B1C
    if (ctx->r24 == 0) {
        // 0x80025ADC: lui         $t9, 0xFC12
        ctx->r25 = S32(0XFC12 << 16);
            goto L_80025B1C;
    }
    // 0x80025ADC: lui         $t9, 0xFC12
    ctx->r25 = S32(0XFC12 << 16);
    // 0x80025AE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025AE4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80025AE8: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x80025AEC: ori         $t5, $t5, 0x2
    ctx->r13 = ctx->r13 | 0X2;
    // 0x80025AF0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80025AF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025AF8: lui         $t6, 0xFC12
    ctx->r14 = S32(0XFC12 << 16);
    // 0x80025AFC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80025B00: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80025B04: ori         $t6, $t6, 0x7E24
    ctx->r14 = ctx->r14 | 0X7E24;
    // 0x80025B08: addiu       $t7, $zero, -0x805
    ctx->r15 = ADD32(0, -0X805);
    // 0x80025B0C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80025B10: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80025B14: b           L_80025B30
    // 0x80025B18: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80025B30;
    // 0x80025B18: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025B1C:
    // 0x80025B1C: ori         $t9, $t9, 0x7E24
    ctx->r25 = ctx->r25 | 0X7E24;
    // 0x80025B20: addiu       $t3, $zero, -0x202
    ctx->r11 = ADD32(0, -0X202);
    // 0x80025B24: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80025B28: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80025B2C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80025B30:
    // 0x80025B30: jr          $ra
    // 0x80025B34: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80025B34: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80035FDC_36BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80035FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035FE4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80035FE8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80035FEC: addiu       $t0, $t0, -0x2540
    ctx->r8 = ADD32(ctx->r8, -0X2540);
    // 0x80035FF0: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x80035FF4: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80035FF8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80035FFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80036000: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x80036004: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80036008: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8003600C: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80036010: addiu       $t3, $t3, -0x2528
    ctx->r11 = ADD32(ctx->r11, -0X2528);
    // 0x80036014: sll         $t2, $t8, 1
    ctx->r10 = S32(ctx->r24 << 1);
    // 0x80036018: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x8003601C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80036020: lh          $t4, 0x0($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X0);
    // 0x80036024: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80036028: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8003602C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80036030: bne         $t8, $at, L_80036044
    if (ctx->r24 != ctx->r1) {
        // 0x80036034: sh          $t5, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r13;
            goto L_80036044;
    }
    // 0x80036034: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x80036038: jal         0x800364FC
    // 0x8003603C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800364FC_370FC(rdram, ctx);
        goto after_0;
    // 0x8003603C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80036040: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_80036044:
    // 0x80036044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003604C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80036050: jr          $ra
    // 0x80036054: nop

    TRACE_RETURN()
    return;
    // 0x80036054: nop

;}
RECOMP_FUNC void func_80015C24_16824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015C24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80015C28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015C2C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80015C30: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80015C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015C38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80015C3C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80015C40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80015C44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015C48: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80015C4C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80015C50: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80015C54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80015C58: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80015C5C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80015C60: jal         0x80016358
    // 0x80015C64: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_0;
    // 0x80015C64: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x80015C68: jal         0x80014CC4
    // 0x80015C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80015C70: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80015C74: bne         $v0, $s4, L_80015D68
    if (ctx->r2 != ctx->r20) {
        // 0x80015C78: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80015D68;
    }
    // 0x80015C78: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80015C7C: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80015C80: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
L_80015C84:
    // 0x80015C84: jal         0x80014CC4
    // 0x80015C88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x80015C88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80015C8C: beq         $v0, $zero, L_80015D04
    if (ctx->r2 == 0) {
        // 0x80015C90: nop
    
            goto L_80015D04;
    }
    // 0x80015C90: nop

    // 0x80015C94: beq         $v0, $s4, L_80015CB4
    if (ctx->r2 == ctx->r20) {
        // 0x80015C98: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015CB4;
    }
    // 0x80015C98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015C9C: beq         $v0, $s5, L_80015CD0
    if (ctx->r2 == ctx->r21) {
        // 0x80015CA0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015CD0;
    }
    // 0x80015CA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80015CA4: beq         $v0, $s6, L_80015CE8
    if (ctx->r2 == ctx->r22) {
        // 0x80015CA8: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015CE8;
    }
    // 0x80015CA8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015CAC: b           L_80015D60
    // 0x80015CB0: nop

        goto L_80015D60;
    // 0x80015CB0: nop

L_80015CB4:
    // 0x80015CB4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80015CB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015CC0: jal         0x80016358
    // 0x80015CC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_3;
    // 0x80015CC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80015CC8: b           L_80015D60
    // 0x80015CCC: nop

        goto L_80015D60;
    // 0x80015CCC: nop

L_80015CD0:
    // 0x80015CD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015CD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015CD8: jal         0x80016358
    // 0x80015CDC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_4;
    // 0x80015CDC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x80015CE0: b           L_80015D60
    // 0x80015CE4: nop

        goto L_80015D60;
    // 0x80015CE4: nop

L_80015CE8:
    // 0x80015CE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80015CEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015CF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015CF4: jal         0x80016358
    // 0x80015CF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_5;
    // 0x80015CF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80015CFC: b           L_80015D60
    // 0x80015D00: nop

        goto L_80015D60;
    // 0x80015D00: nop

L_80015D04:
    // 0x80015D04: jal         0x80014CC4
    // 0x80015D08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_6;
    // 0x80015D08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80015D0C: bne         $v0, $zero, L_80015D1C
    if (ctx->r2 != 0) {
        // 0x80015D10: nop
    
            goto L_80015D1C;
    }
    // 0x80015D10: nop

    // 0x80015D14: b           L_80015D60
    // 0x80015D18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80015D60;
    // 0x80015D18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80015D1C:
    // 0x80015D1C: jal         0x80014CC4
    // 0x80015D20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_7;
    // 0x80015D20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80015D24: bne         $v0, $zero, L_80015D4C
    if (ctx->r2 != 0) {
        // 0x80015D28: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80015D4C;
    }
    // 0x80015D28: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80015D2C: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x80015D30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015D34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80015D3C: jal         0x80016358
    // 0x80015D40: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_8;
    // 0x80015D40: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x80015D44: b           L_80015D60
    // 0x80015D48: nop

        goto L_80015D60;
    // 0x80015D48: nop

L_80015D4C:
    // 0x80015D4C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80015D50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015D54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015D58: jal         0x80016358
    // 0x80015D5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80016358_16F58(rdram, ctx);
        goto after_9;
    // 0x80015D5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
L_80015D60:
    // 0x80015D60: beq         $s3, $zero, L_80015C84
    if (ctx->r19 == 0) {
        // 0x80015D64: nop
    
            goto L_80015C84;
    }
    // 0x80015D64: nop

L_80015D68:
    // 0x80015D68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80015D6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015D70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015D74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015D78: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80015D7C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80015D80: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80015D84: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80015D88: jr          $ra
    // 0x80015D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80015D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80010784_11384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010784: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80010788: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001078C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80010790: addiu       $t7, $t7, 0x7EF8
    ctx->r15 = ADD32(ctx->r15, 0X7EF8);
    // 0x80010794: mflo        $t6
    ctx->r14 = lo;
    // 0x80010798: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8001079C: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x800107A0: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800107A4: bne         $at, $zero, L_800107B4
    if (ctx->r1 != 0) {
        // 0x800107A8: nop
    
            goto L_800107B4;
    }
    // 0x800107A8: nop

    // 0x800107AC: jr          $ra
    // 0x800107B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x800107B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800107B4:
    // 0x800107B4: multu       $a1, $t0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800107B8: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x800107BC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800107C0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800107C4: addiu       $t3, $t2, 0x4000
    ctx->r11 = ADD32(ctx->r10, 0X4000);
    // 0x800107C8: mflo        $t1
    ctx->r9 = lo;
    // 0x800107CC: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x800107D0: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x800107D4: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x800107D8: sb          $t4, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r12;
    // 0x800107DC: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x800107E0: sh          $a2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r6;
    // 0x800107E4: sh          $a3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r7;
    // 0x800107E8: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x800107EC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800107F0: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800107F4: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x800107F8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800107FC: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80010800: sh          $t9, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r25;
    // 0x80010804: jr          $ra
    // 0x80010808: nop

    TRACE_RETURN()
    return;
    // 0x80010808: nop

;}
RECOMP_FUNC void func_80035430_36030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035438: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003543C: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x80035440: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80035444: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    // 0x80035448: lh          $t8, 0x24($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X24);
    // 0x8003544C: bgtzl       $t8, L_80035460
    if (SIGNED(ctx->r24) > 0) {
        // 0x80035450: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035460;
    }
    goto skip_0;
    // 0x80035450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80035454: jal         0x80035384
    // 0x80035458: nop

    func_80035384_35F84(rdram, ctx);
        goto after_0;
    // 0x80035458: nop

    after_0:
    // 0x8003545C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035460:
    // 0x80035460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035464: jr          $ra
    // 0x80035468: nop

    TRACE_RETURN()
    return;
    // 0x80035468: nop

;}
RECOMP_FUNC void func_8000A1BC_ADBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A1BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A1C0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000A1C4: ori         $at, $at, 0x2D94
    ctx->r1 = ctx->r1 | 0X2D94;
    // 0x8000A1C8: sll         $t6, $a0, 6
    ctx->r14 = S32(ctx->r4 << 6);
    // 0x8000A1CC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8000A1D0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000A1D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A1D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A1DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A1E0: addiu       $t8, $t8, -0x3340
    ctx->r24 = ADD32(ctx->r24, -0X3340);
    // 0x8000A1E4: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8000A1E8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8000A1EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A1F0: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x8000A1F4: beq         $at, $zero, L_8000A210
    if (ctx->r1 == 0) {
        // 0x8000A1F8: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8000A210;
    }
    // 0x8000A1F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_8000A1FC:
    // 0x8000A1FC: jal         0x8000A228
    // 0x8000A200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A228_AE28(rdram, ctx);
        goto after_0;
    // 0x8000A200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A204: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A208: bne         $s1, $s2, L_8000A1FC
    if (ctx->r17 != ctx->r18) {
        // 0x8000A20C: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_8000A1FC;
    }
    // 0x8000A20C: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
L_8000A210:
    // 0x8000A210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A218: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A21C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A220: jr          $ra
    // 0x8000A224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80034AB8_356B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034AB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034AC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80034AC4: jal         0x80034B58
    // 0x80034AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034B58_35758(rdram, ctx);
        goto after_0;
    // 0x80034AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034ACC: bne         $v0, $zero, L_80034ADC
    if (ctx->r2 != 0) {
        // 0x80034AD0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80034ADC;
    }
    // 0x80034AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034AD4: b           L_80034B14
    // 0x80034AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034B14;
    // 0x80034AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034ADC:
    // 0x80034ADC: beq         $v0, $zero, L_80034B08
    if (ctx->r2 == 0) {
        // 0x80034AE0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80034B08;
    }
    // 0x80034AE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80034AE4: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x80034AE8: jal         0x80035DFC
    // 0x80034AEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80035DFC_369FC(rdram, ctx);
        goto after_1;
    // 0x80034AEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80034AF0: bne         $v0, $zero, L_80034B08
    if (ctx->r2 != 0) {
        // 0x80034AF4: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80034B08;
    }
    // 0x80034AF4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80034AF8: jal         0x80035044
    // 0x80034AFC: nop

    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x80034AFC: nop

    after_2:
    // 0x80034B00: b           L_80034B14
    // 0x80034B04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034B14;
    // 0x80034B04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034B08:
    // 0x80034B08: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80034B0C: sw          $a0, -0x2CE0($at)
    MEM_W(-0X2CE0, ctx->r1) = ctx->r4;
    // 0x80034B10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80034B14:
    // 0x80034B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80034B1C: jr          $ra
    // 0x80034B20: nop

    TRACE_RETURN()
    return;
    // 0x80034B20: nop

;}
RECOMP_FUNC void func_8000C6A8_D2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C6A8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000C6AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000C6B0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000C6B4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x8000C6B8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000C6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C6C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000C6C4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8000C6C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000C6CC: addiu       $a1, $zero, 0x1818
    ctx->r5 = ADD32(0, 0X1818);
    // 0x8000C6D0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8000C6D4: jal         0x800148F0
    // 0x8000C6D8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x8000C6D8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x8000C6DC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8000C6E0: bne         $v0, $zero, L_8000C6FC
    if (ctx->r2 != 0) {
        // 0x8000C6E4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8000C6FC;
    }
    // 0x8000C6E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000C6E8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8000C6EC: jal         0x800408FC
    // 0x8000C6F0: addiu       $a0, $a0, -0x5458
    ctx->r4 = ADD32(ctx->r4, -0X5458);
    rmonPrintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000C6F0: addiu       $a0, $a0, -0x5458
    ctx->r4 = ADD32(ctx->r4, -0X5458);
    after_1:
    // 0x8000C6F4: b           L_8000C82C
    // 0x8000C6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000C82C;
    // 0x8000C6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000C6FC:
    // 0x8000C6FC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8000C700: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8000C704: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8000C708: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8000C70C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C710: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8000C714: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x8000C718: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000C71C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8000C720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000C724: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000C728: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8000C72C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8000C730: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8000C734: sw          $t3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r11;
    // 0x8000C738: sw          $t2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r10;
    // 0x8000C73C: sw          $a3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r7;
    // 0x8000C740: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8000C744: sh          $a0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r4;
    // 0x8000C748: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x8000C74C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8000C750: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8000C754: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000C758: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8000C75C: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x8000C760: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8000C764: sh          $a1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r5;
    // 0x8000C768: sh          $a2, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r6;
    // 0x8000C76C: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x8000C770: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8000C774: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8000C778: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000C77C: sh          $a1, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r5;
    // 0x8000C780: sh          $a2, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r6;
    // 0x8000C784: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8000C788: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C78C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x8000C790: sh          $t6, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r14;
    // 0x8000C794: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000C798: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8000C79C: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8000C7A0: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x8000C7A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000C7A8: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    // 0x8000C7AC: sw          $t9, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r25;
    // 0x8000C7B0: mflo        $t2
    ctx->r10 = lo;
    // 0x8000C7B4: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x8000C7B8: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x8000C7BC: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x8000C7C0: sh          $zero, 0x64($v0)
    MEM_H(0X64, ctx->r2) = 0;
    // 0x8000C7C4: sh          $zero, 0x66($v0)
    MEM_H(0X66, ctx->r2) = 0;
    // 0x8000C7C8: sh          $t2, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r10;
    // 0x8000C7CC: sh          $zero, 0x6C($v0)
    MEM_H(0X6C, ctx->r2) = 0;
    // 0x8000C7D0: sh          $zero, 0x6E($v0)
    MEM_H(0X6E, ctx->r2) = 0;
    // 0x8000C7D4: sh          $t3, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r11;
    // 0x8000C7D8: sh          $zero, 0x72($v0)
    MEM_H(0X72, ctx->r2) = 0;
    // 0x8000C7DC: sh          $zero, 0x74($v0)
    MEM_H(0X74, ctx->r2) = 0;
    // 0x8000C7E0: sh          $t4, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r12;
    // 0x8000C7E4: sw          $zero, 0x78($v0)
    MEM_W(0X78, ctx->r2) = 0;
    // 0x8000C7E8: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x8000C7EC: sw          $zero, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = 0;
    // 0x8000C7F0: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x8000C7F4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8000C7F8: swc1        $f0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f0.u32l;
    // 0x8000C7FC: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x8000C800: swc1        $f0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f0.u32l;
    // 0x8000C804: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
    // 0x8000C808: sh          $t1, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r9;
    // 0x8000C80C: sh          $t0, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r8;
    // 0x8000C810: sh          $a0, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r4;
    // 0x8000C814: sh          $a0, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r4;
    // 0x8000C818: sh          $t7, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r15;
    // 0x8000C81C: sw          $v1, 0x7C48($at)
    MEM_W(0X7C48, ctx->r1) = ctx->r3;
    // 0x8000C820: jal         0x8000D2C0
    // 0x8000C824: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8000D2C0_DEC0(rdram, ctx);
        goto after_2;
    // 0x8000C824: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8000C828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000C82C:
    // 0x8000C82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000C830: jr          $ra
    // 0x8000C834: nop

    TRACE_RETURN()
    return;
    // 0x8000C834: nop

;}
RECOMP_FUNC void func_80014F1C_15B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014F1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80014F20: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80014F24: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80014F28: addiu       $s2, $s2, -0x7B70
    ctx->r18 = ADD32(ctx->r18, -0X7B70);
    // 0x80014F2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80014F30: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80014F34: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80014F38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80014F3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014F40: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80014F44: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80014F48: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80014F4C: sw          $a1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r5;
    // 0x80014F50: lw          $t8, 0x10($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X10);
    // 0x80014F54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80014F58: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80014F5C: bne         $t8, $at, L_80014F94
    if (ctx->r24 != ctx->r1) {
        // 0x80014F60: sw          $a1, 0x1C($a2)
        MEM_W(0X1C, ctx->r6) = ctx->r5;
            goto L_80014F94;
    }
    // 0x80014F60: sw          $a1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r5;
    // 0x80014F64: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80014F68: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x80014F6C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80014F70: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80014F74: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014F78: mflo        $t1
    ctx->r9 = lo;
    // 0x80014F7C: addu        $t3, $a1, $t1
    ctx->r11 = ADD32(ctx->r5, ctx->r9);
    // 0x80014F80: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x80014F84: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80014F88: sw          $t5, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r13;
    // 0x80014F8C: jal         0x800153B0
    // 0x80014F90: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800153B0_15FB0(rdram, ctx);
        goto after_0;
    // 0x80014F90: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
L_80014F94:
    // 0x80014F94: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80014F98: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80014F9C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80014FA0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80014FA4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014FA8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80014FAC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80014FB0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80014FB4: mflo        $s3
    ctx->r19 = lo;
    // 0x80014FB8: bgez        $s3, L_80014FC8
    if (SIGNED(ctx->r19) >= 0) {
        // 0x80014FBC: sra         $a1, $s3, 3
        ctx->r5 = S32(SIGNED(ctx->r19) >> 3);
            goto L_80014FC8;
    }
    // 0x80014FBC: sra         $a1, $s3, 3
    ctx->r5 = S32(SIGNED(ctx->r19) >> 3);
    // 0x80014FC0: addiu       $at, $s3, 0x7
    ctx->r1 = ADD32(ctx->r19, 0X7);
    // 0x80014FC4: sra         $a1, $at, 3
    ctx->r5 = S32(SIGNED(ctx->r1) >> 3);
L_80014FC8:
    // 0x80014FC8: jal         0x800148F0
    // 0x80014FCC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x80014FCC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x80014FD0: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x80014FD4: addiu       $s4, $s4, -0x7B6C
    ctx->r20 = ADD32(ctx->r20, -0X7B6C);
    // 0x80014FD8: bne         $v0, $zero, L_80015050
    if (ctx->r2 != 0) {
        // 0x80014FDC: sw          $v0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r2;
            goto L_80015050;
    }
    // 0x80014FDC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80014FE0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80014FE4: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80014FE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80014FEC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80014FF0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80014FF4: lh          $t9, 0x2DB6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2DB6);
    // 0x80014FF8: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80014FFC: addiu       $t2, $t2, 0x1000
    ctx->r10 = ADD32(ctx->r10, 0X1000);
    // 0x80015000: beq         $t9, $zero, L_80015048
    if (ctx->r25 == 0) {
        // 0x80015004: nop
    
            goto L_80015048;
    }
    // 0x80015004: nop

    // 0x80015008: lh          $v1, 0x2DB0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2DB0);
    // 0x8001500C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80015010: bne         $v1, $at, L_80015020
    if (ctx->r3 != ctx->r1) {
        // 0x80015014: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80015020;
    }
    // 0x80015014: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80015018: b           L_80015020
    // 0x8001501C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80015020;
    // 0x8001501C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015020:
    // 0x80015020: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x80015024: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80015028: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001502C: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x80015030: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80015034: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x80015038: sll         $t0, $t0, 11
    ctx->r8 = S32(ctx->r8 << 11);
    // 0x8001503C: addu        $t1, $t0, $t2
    ctx->r9 = ADD32(ctx->r8, ctx->r10);
    // 0x80015040: b           L_80015058
    // 0x80015044: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
        goto L_80015058;
    // 0x80015044: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
L_80015048:
    // 0x80015048: b           L_800150F8
    // 0x8001504C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800150F8;
    // 0x8001504C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015050:
    // 0x80015050: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80015054: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80015058:
    // 0x80015058: blez        $s3, L_80015088
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8001505C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80015088;
    }
    // 0x8001505C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80015060: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
L_80015064:
    // 0x80015064: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80015068: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8001506C: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x80015070: jal         0x80016684
    // 0x80015074: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_80016684_17284(rdram, ctx);
        goto after_2;
    // 0x80015074: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_2:
    // 0x80015078: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001507C: bnel        $s0, $s3, L_80015064
    if (ctx->r16 != ctx->r19) {
        // 0x80015080: lw          $t4, 0x0($s2)
        ctx->r12 = MEM_W(ctx->r18, 0X0);
            goto L_80015064;
    }
    goto skip_0;
    // 0x80015080: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x80015084: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80015088:
    // 0x80015088: jal         0x800159B0
    // 0x8001508C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800159B0_165B0(rdram, ctx);
        goto after_3;
    // 0x8001508C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80015090: blez        $s3, L_800150D0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80015094: lw          $s1, 0x30($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X30);
            goto L_800150D0;
    }
    // 0x80015094: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
L_80015098:
    // 0x80015098: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8001509C: jal         0x800166AC
    // 0x800150A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800166AC_172AC(rdram, ctx);
        goto after_4;
    // 0x800150A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800150A4: beql        $v0, $zero, L_800150BC
    if (ctx->r2 == 0) {
        // 0x800150A8: lw          $t8, 0x0($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X0);
            goto L_800150BC;
    }
    goto skip_1;
    // 0x800150A8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x800150AC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800150B0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x800150B4: lbu         $s1, 0x0($t7)
    ctx->r17 = MEM_BU(ctx->r15, 0X0);
    // 0x800150B8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_800150BC:
    // 0x800150BC: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800150C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800150C4: bne         $s0, $s3, L_80015098
    if (ctx->r16 != ctx->r19) {
        // 0x800150C8: sb          $s1, 0x0($t9)
        MEM_B(0X0, ctx->r25) = ctx->r17;
            goto L_80015098;
    }
    // 0x800150C8: sb          $s1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r17;
    // 0x800150CC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
L_800150D0:
    // 0x800150D0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800150D4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800150D8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x800150DC: beq         $t0, $zero, L_800150F4
    if (ctx->r8 == 0) {
        // 0x800150E0: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_800150F4;
    }
    // 0x800150E0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800150E4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800150E8: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x800150EC: jal         0x80014B74
    // 0x800150F0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_5;
    // 0x800150F0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
L_800150F4:
    // 0x800150F4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_800150F8:
    // 0x800150F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800150FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015100: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015104: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015108: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001510C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80015110: jr          $ra
    // 0x80015114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80015114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80007478_8078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007478: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000747C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007480: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80007484: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80007488: lw          $a1, 0x2B0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2B0);
    // 0x8000748C: sw          $zero, 0x2B0($a0)
    MEM_W(0X2B0, ctx->r4) = 0;
    // 0x80007490: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80007494: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80007498: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8000749C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800074A0: jal         0x80007550
    // 0x800074A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80007550_8150(rdram, ctx);
        goto after_0;
    // 0x800074A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800074A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800074AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800074B0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800074B4: lw          $t8, 0x2AC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2AC);
    // 0x800074B8: lw          $t1, 0x2B0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2B0);
    // 0x800074BC: sltiu       $t9, $t8, 0x1
    ctx->r25 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x800074C0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800074C4: sltiu       $t2, $t1, 0x1
    ctx->r10 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x800074C8: or          $a3, $t0, $t2
    ctx->r7 = ctx->r8 | ctx->r10;
    // 0x800074CC: jal         0x800077B8
    // 0x800074D0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800077B8_83B8(rdram, ctx);
        goto after_1;
    // 0x800074D0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x800074D4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800074D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800074DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800074E0: beql        $v0, $a3, L_800074F4
    if (ctx->r2 == ctx->r7) {
        // 0x800074E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800074F4;
    }
    goto skip_0;
    // 0x800074E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800074E8: jal         0x8000769C
    // 0x800074EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_8000769C_829C(rdram, ctx);
        goto after_2;
    // 0x800074EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800074F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800074F4:
    // 0x800074F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800074F8: jr          $ra
    // 0x800074FC: nop

    TRACE_RETURN()
    return;
    // 0x800074FC: nop

;}
RECOMP_FUNC void func_8000FDD4_109D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FDD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000FDD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000FDDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000FDE0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000FDE4: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000FDE8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8000FDEC: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8000FDF0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000FDF4: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8000FDF8: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8000FDFC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000FE00: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8000FE04: jal         0x8000FE1C
    // 0x8000FE08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000FE1C_10A1C(rdram, ctx);
        goto after_0;
    // 0x8000FE08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000FE0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FE10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000FE14: jr          $ra
    // 0x8000FE18: nop

    TRACE_RETURN()
    return;
    // 0x8000FE18: nop

;}
RECOMP_FUNC void func_8003767C_3827C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003767C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80037680: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80037684: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x80037688: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x8003768C: lhu         $t7, 0x2DFD($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2DFD);
    // 0x80037690: lhu         $t6, 0x2DF3($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2DF3);
    // 0x80037694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80037698: bne         $t6, $t7, L_800376A8
    if (ctx->r14 != ctx->r15) {
        // 0x8003769C: nop
    
            goto L_800376A8;
    }
    // 0x8003769C: nop

    // 0x800376A0: jr          $ra
    // 0x800376A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800376A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800376A8:
    // 0x800376A8: jr          $ra
    // 0x800376AC: nop

    TRACE_RETURN()
    return;
    // 0x800376AC: nop

;}
RECOMP_FUNC void func_80002A98_3698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002AA0: jal         0x80005B90
    // 0x80002AA4: nop

    func_80005B90_6790(rdram, ctx);
        goto after_0;
    // 0x80002AA4: nop

    after_0:
    // 0x80002AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002AB0: jr          $ra
    // 0x80002AB4: nop

    TRACE_RETURN()
    return;
    // 0x80002AB4: nop

;}
RECOMP_FUNC void func_80037DC0_389C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037DC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80037DC4: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80037DC8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80037DCC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80037DD0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80037DD4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80037DD8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80037DDC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80037DE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80037DE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80037DE8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80037DEC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80037DF0: addiu       $t6, $t6, -0x7A78
    ctx->r14 = ADD32(ctx->r14, -0X7A78);
    // 0x80037DF4: sw          $t6, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r14;
    // 0x80037DF8: jal         0x80047490
    // 0x80037DFC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_0;
    // 0x80037DFC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_0:
    // 0x80037E00: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x80037E04: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x80037E08: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_80037E0C:
    // 0x80037E0C: bnel        $s1, $zero, L_80037E0C
    if (ctx->r17 != 0) {
        // 0x80037E10: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_80037E0C;
    }
    goto skip_0;
    // 0x80037E10: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_0:
    // 0x80037E14: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x80037E18: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80037E1C: addiu       $v1, $v1, 0x224C
    ctx->r3 = ADD32(ctx->r3, 0X224C);
    // 0x80037E20: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80037E24: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80037E28: bgez        $t7, L_80037E40
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80037E2C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80037E40;
    }
    // 0x80037E2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80037E30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80037E34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80037E38: nop

    // 0x80037E3C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80037E40:
    // 0x80037E40: lw          $t8, 0x18($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X18);
    // 0x80037E44: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80037E48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80037E4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80037E50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80037E54: addiu       $s5, $s5, 0x2250
    ctx->r21 = ADD32(ctx->r21, 0X2250);
    // 0x80037E58: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80037E5C: addiu       $a0, $a0, -0x2098
    ctx->r4 = ADD32(ctx->r4, -0X2098);
    // 0x80037E60: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80037E64: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80037E68: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80037E6C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80037E70: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80037E74: nop

    // 0x80037E78: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80037E7C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80037E80: bgez        $v0, L_80037E98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80037E84: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80037E98;
    }
    // 0x80037E84: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80037E88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80037E8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80037E90: nop

    // 0x80037E94: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_80037E98:
    // 0x80037E98: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80037E9C: nop

    // 0x80037EA0: bc1f        L_80037EB0
    if (!c1cs) {
        // 0x80037EA4: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_80037EB0;
    }
    // 0x80037EA4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x80037EA8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80037EAC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80037EB0:
    // 0x80037EB0: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x80037EB4: beq         $t2, $zero, L_80037EC8
    if (ctx->r10 == 0) {
        // 0x80037EB8: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80037EC8;
    }
    // 0x80037EB8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80037EBC: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x80037EC0: addiu       $v0, $t3, 0x10
    ctx->r2 = ADD32(ctx->r11, 0X10);
    // 0x80037EC4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80037EC8:
    // 0x80037EC8: addiu       $t5, $v0, -0x10
    ctx->r13 = ADD32(ctx->r2, -0X10);
    // 0x80037ECC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80037ED0: sw          $t5, 0x2248($at)
    MEM_W(0X2248, ctx->r1) = ctx->r13;
    // 0x80037ED4: addiu       $t6, $v0, 0x100
    ctx->r14 = ADD32(ctx->r2, 0X100);
    // 0x80037ED8: jal         0x8004767C
    // 0x80037EDC: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    alInit(rdram, ctx);
        goto after_1;
    // 0x80037EDC: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    after_1:
    // 0x80037EE0: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80037EE4: addiu       $v0, $v0, 0x1FC8
    ctx->r2 = ADD32(ctx->r2, 0X1FC8);
    // 0x80037EE8: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80037EEC: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80037EF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80037EF4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80037EF8: addiu       $s0, $s0, 0x1FDC
    ctx->r16 = ADD32(ctx->r16, 0X1FDC);
    // 0x80037EFC: addiu       $s2, $s2, 0x1FC8
    ctx->r18 = ADD32(ctx->r18, 0X1FC8);
    // 0x80037F00: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80037F04:
    // 0x80037F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80037F08: jal         0x80047620
    // 0x80037F0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x80037F0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80037F10: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80037F14: addiu       $t7, $zero, 0xC00
    ctx->r15 = ADD32(0, 0XC00);
    // 0x80037F18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80037F1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037F24: jal         0x800476B0
    // 0x80037F28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80037F28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80037F2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80037F30: sltiu       $at, $s1, 0x1F
    ctx->r1 = ctx->r17 < 0X1F ? 1 : 0;
    // 0x80037F34: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80037F38: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80037F3C: bne         $at, $zero, L_80037F04
    if (ctx->r1 != 0) {
        // 0x80037F40: sw          $v0, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->r2;
            goto L_80037F04;
    }
    // 0x80037F40: sw          $v0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->r2;
    // 0x80037F44: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80037F48: addiu       $t8, $zero, 0xC00
    ctx->r24 = ADD32(0, 0XC00);
    // 0x80037F4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80037F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037F58: jal         0x800476B0
    // 0x80037F5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x80037F5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80037F60: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80037F64: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x80037F68: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80037F6C: addiu       $s1, $s1, -0x2488
    ctx->r17 = ADD32(ctx->r17, -0X2488);
    // 0x80037F70: addiu       $s0, $s0, -0x2490
    ctx->r16 = ADD32(ctx->r16, -0X2490);
L_80037F74:
    // 0x80037F74: lw          $t9, 0x8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8);
    // 0x80037F78: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80037F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037F80: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80037F84: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80037F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037F8C: jal         0x800476B0
    // 0x80037F90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80037F90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80037F94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80037F98: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80037F9C: bne         $at, $zero, L_80037F74
    if (ctx->r1 != 0) {
        // 0x80037FA0: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80037F74;
    }
    // 0x80037FA0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80037FA4: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x80037FA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80037FAC: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80037FB0: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80037FB4: addiu       $s2, $s2, -0x2484
    ctx->r18 = ADD32(ctx->r18, -0X2484);
    // 0x80037FB8: addiu       $s0, $s0, -0x2490
    ctx->r16 = ADD32(ctx->r16, -0X2490);
    // 0x80037FBC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80037FC0: sw          $t1, 0x2254($at)
    MEM_W(0X2254, ctx->r1) = ctx->r9;
L_80037FC4:
    // 0x80037FC4: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80037FC8: addiu       $t2, $zero, 0x90
    ctx->r10 = ADD32(0, 0X90);
    // 0x80037FCC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80037FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037FD8: jal         0x800476B0
    // 0x80037FDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80037FDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80037FE0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80037FE4: sh          $s1, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r17;
    // 0x80037FE8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80037FEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037FF4: sw          $v1, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r3;
    // 0x80037FF8: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80037FFC: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80038000: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80038004: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80038008: jal         0x800476B0
    // 0x8003800C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x8003800C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_7:
    // 0x80038010: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80038014: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80038018: bne         $s0, $s2, L_80037FC4
    if (ctx->r16 != ctx->r18) {
        // 0x8003801C: sw          $v0, 0x0($t5)
        MEM_W(0X0, ctx->r13) = ctx->r2;
            goto L_80037FC4;
    }
    // 0x8003801C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80038020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80038024: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80038028: addiu       $a1, $a1, -0x2198
    ctx->r5 = ADD32(ctx->r5, -0X2198);
    // 0x8003802C: addiu       $a0, $a0, -0x21B0
    ctx->r4 = ADD32(ctx->r4, -0X21B0);
    // 0x80038030: jal         0x8003FEC0
    // 0x80038034: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x80038034: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_8:
    // 0x80038038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003803C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80038040: addiu       $a1, $a1, -0x22B0
    ctx->r5 = ADD32(ctx->r5, -0X22B0);
    // 0x80038044: addiu       $a0, $a0, -0x22C8
    ctx->r4 = ADD32(ctx->r4, -0X22C8);
    // 0x80038048: jal         0x8003FEC0
    // 0x8003804C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x8003804C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_9:
    // 0x80038050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80038054: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80038058: addiu       $a1, $a1, 0x2870
    ctx->r5 = ADD32(ctx->r5, 0X2870);
    // 0x8003805C: addiu       $a0, $a0, 0x2858
    ctx->r4 = ADD32(ctx->r4, 0X2858);
    // 0x80038060: jal         0x8003FEC0
    // 0x80038064: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x80038064: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_10:
    // 0x80038068: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8003806C: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80038070: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80038074: addiu       $s0, $s0, -0x2478
    ctx->r16 = ADD32(ctx->r16, -0X2478);
    // 0x80038078: addiu       $t6, $t6, 0x1FB8
    ctx->r14 = ADD32(ctx->r14, 0X1FB8);
    // 0x8003807C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x80038080: addiu       $a2, $a2, -0x7F38
    ctx->r6 = ADD32(ctx->r6, -0X7F38);
    // 0x80038084: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80038088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003808C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80038090: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80038094: jal         0x8003F9B0
    // 0x80038098: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_11;
    // 0x80038098: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_11:
    // 0x8003809C: jal         0x8003FB00
    // 0x800380A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_12;
    // 0x800380A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800380A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800380A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800380AC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800380B0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800380B4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800380B8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800380BC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800380C0: jr          $ra
    // 0x800380C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800380C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void guAlignF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043D10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80043D14: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80043D18: lwc1        $f4, -0x2CA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2CA0);
    // 0x80043D1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043D20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80043D24: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x80043D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80043D2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80043D30: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80043D34: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80043D38: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80043D3C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80043D40: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80043D44: jal         0x8004BF50
    // 0x80043D48: swc1        $f4, -0x6170($at)
    MEM_W(-0X6170, ctx->r1) = ctx->f4.u32l;
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x80043D48: swc1        $f4, -0x6170($at)
    MEM_W(-0X6170, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x80043D4C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x80043D50: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80043D54: lwc1        $f6, -0x6170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6170);
    // 0x80043D58: mul.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80043D5C: jal         0x800417F0
    // 0x80043D60: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x80043D60: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80043D64: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80043D68: jal         0x800419B0
    // 0x80043D6C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x80043D6C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80043D70: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043D74: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043D78: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80043D7C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80043D80: nop

    // 0x80043D84: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80043D88: jal         0x800417E0
    // 0x80043D8C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x80043D8C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_3:
    // 0x80043D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80043D94: jal         0x80043BA0
    // 0x80043D98: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_4;
    // 0x80043D98: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80043D9C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80043DA0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80043DA4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80043DA8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80043DAC: c.eq.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl == ctx->f12.fl;
    // 0x80043DB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80043DB4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043DB8: bc1tl       L_80043EC0
    if (c1cs) {
        // 0x80043DBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80043EC0;
    }
    goto skip_0;
    // 0x80043DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80043DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80043DC4: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80043DC8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043DCC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043DD0: div.s       $f0, $f4, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80043DD4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80043DD8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80043DDC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80043DE0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80043DE4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80043DE8: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80043DEC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043DF0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043DF4: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80043DF8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043DFC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80043E00: nop

    // 0x80043E04: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80043E08: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80043E0C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80043E10: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x80043E14: mul.s       $f6, $f16, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x80043E18: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043E1C: swc1        $f12, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f12.u32l;
    // 0x80043E20: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80043E24: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x80043E28: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x80043E2C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80043E30: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x80043E34: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043E38: swc1        $f12, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f12.u32l;
    // 0x80043E3C: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x80043E40: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x80043E44: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043E48: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043E4C: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80043E50: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043E54: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80043E58: nop

    // 0x80043E5C: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80043E60: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80043E64: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x80043E68: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80043E6C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80043E70: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80043E74: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80043E78: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80043E7C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043E80: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80043E84: nop

    // 0x80043E88: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80043E8C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80043E90: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80043E94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80043E98: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x80043E9C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80043EA0: swc1        $f12, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f12.u32l;
    // 0x80043EA4: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    // 0x80043EA8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80043EAC: swc1        $f12, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f12.u32l;
    // 0x80043EB0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x80043EB4: swc1        $f12, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f12.u32l;
    // 0x80043EB8: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x80043EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80043EC0:
    // 0x80043EC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80043EC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80043EC8: jr          $ra
    // 0x80043ECC: nop

    TRACE_RETURN()
    return;
    // 0x80043ECC: nop

;}
RECOMP_FUNC void func_8001B740_1C340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B740: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x8001B744: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001B748: addiu       $s6, $sp, 0x58
    ctx->r22 = ADD32(ctx->r29, 0X58);
    // 0x8001B74C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001B750: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001B754: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001B758: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001B75C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001B760: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001B764: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001B768: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001B76C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001B770: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001B774: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x8001B778: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8001B77C: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    // 0x8001B780: or          $t9, $a1, $zero
    ctx->r25 = ctx->r5 | 0;
    // 0x8001B784: addiu       $t8, $a1, 0x90
    ctx->r24 = ADD32(ctx->r5, 0X90);
L_8001B788:
    // 0x8001B788: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8001B78C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8001B790: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8001B794: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8001B798: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8001B79C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8001B7A0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8001B7A4: bne         $t9, $t8, L_8001B788
    if (ctx->r25 != ctx->r24) {
        // 0x8001B7A8: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8001B788;
    }
    // 0x8001B7A8: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8001B7AC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8001B7B0: lui         $a2, 0xF000
    ctx->r6 = S32(0XF000 << 16);
    // 0x8001B7B4: ori         $a2, $a2, 0x1
    ctx->r6 = ctx->r6 | 0X1;
    // 0x8001B7B8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8001B7BC: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x8001B7C0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8001B7C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001B7C8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8001B7CC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x8001B7D0: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    // 0x8001B7D4: sh          $zero, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = 0;
    // 0x8001B7D8: jal         0x8001B918
    // 0x8001B7DC: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x8001B7DC: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    after_0:
    // 0x8001B7E0: beq         $v0, $zero, L_8001B8E4
    if (ctx->r2 == 0) {
        // 0x8001B7E4: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8001B8E4;
    }
    // 0x8001B7E4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8001B7E8: lui         $fp, 0xF000
    ctx->r30 = S32(0XF000 << 16);
    // 0x8001B7EC: ori         $fp, $fp, 0x1
    ctx->r30 = ctx->r30 | 0X1;
    // 0x8001B7F0: lui         $s7, 0x4000
    ctx->r23 = S32(0X4000 << 16);
L_8001B7F4:
    // 0x8001B7F4: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x8001B7F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8001B7FC: jal         0x80035EEC
    // 0x8001B800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x8001B800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001B804: bne         $v0, $zero, L_8001B814
    if (ctx->r2 != 0) {
        // 0x8001B808: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8001B814;
    }
    // 0x8001B808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001B80C: b           L_8001B8E8
    // 0x8001B810: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_8001B8E8;
    // 0x8001B810: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8001B814:
    // 0x8001B814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001B818: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8001B81C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8001B820: addiu       $s2, $s1, 0x34
    ctx->r18 = ADD32(ctx->r17, 0X34);
    // 0x8001B824: jal         0x8001C970
    // 0x8001B828: addiu       $s3, $s1, 0x3C
    ctx->r19 = ADD32(ctx->r17, 0X3C);
    func_8001C970_1D570(rdram, ctx);
        goto after_2;
    // 0x8001B828: addiu       $s3, $s1, 0x3C
    ctx->r19 = ADD32(ctx->r17, 0X3C);
    after_2:
    // 0x8001B82C: addu        $t1, $s4, $s7
    ctx->r9 = ADD32(ctx->r20, ctx->r23);
    // 0x8001B830: sw          $t1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r9;
    // 0x8001B834: lbu         $t2, 0x5($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X5);
    // 0x8001B838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8001B83C: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x8001B840: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
    // 0x8001B844: lw          $t3, 0x30($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X30);
    // 0x8001B848: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x8001B84C: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x8001B850: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x8001B854: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x8001B858: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8001B85C: sll         $t7, $s5, 24
    ctx->r15 = S32(ctx->r21 << 24);
    // 0x8001B860: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x8001B864: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x8001B868: sra         $s5, $t7, 24
    ctx->r21 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8001B86C: addu        $a2, $s5, $fp
    ctx->r6 = ADD32(ctx->r21, ctx->r30);
    // 0x8001B870: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x8001B874: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x8001B878: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8001B87C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001B880: sw          $at, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r1;
    // 0x8001B884: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x8001B888: sw          $t6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r14;
    // 0x8001B88C: lw          $at, 0x34($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X34);
    // 0x8001B890: sw          $at, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r1;
    // 0x8001B894: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x8001B898: sw          $t9, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r25;
    // 0x8001B89C: lw          $at, 0x3C($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X3C);
    // 0x8001B8A0: sw          $at, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r1;
    // 0x8001B8A4: lw          $t1, 0x40($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X40);
    // 0x8001B8A8: sw          $t1, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r9;
    // 0x8001B8AC: lw          $at, 0x44($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X44);
    // 0x8001B8B0: sw          $at, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r1;
    // 0x8001B8B4: lw          $t3, 0x48($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X48);
    // 0x8001B8B8: sw          $t3, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r11;
    // 0x8001B8BC: lw          $at, 0x4C($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X4C);
    // 0x8001B8C0: sw          $at, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r1;
    // 0x8001B8C4: lw          $t5, 0x50($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X50);
    // 0x8001B8C8: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x8001B8CC: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    // 0x8001B8D0: sh          $zero, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = 0;
    // 0x8001B8D4: jal         0x8001B918
    // 0x8001B8D8: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_3;
    // 0x8001B8D8: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    after_3:
    // 0x8001B8DC: bne         $v0, $zero, L_8001B7F4
    if (ctx->r2 != 0) {
        // 0x8001B8E0: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8001B7F4;
    }
    // 0x8001B8E0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8001B8E4:
    // 0x8001B8E4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8001B8E8:
    // 0x8001B8E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001B8EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001B8F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B8F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001B8F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001B8FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001B900: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B904: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001B908: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001B90C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001B910: jr          $ra
    // 0x8001B914: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x8001B914: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_8000D918_E518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D918: lh          $t9, 0x40($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X40);
    // 0x8000D91C: lh          $t0, 0x42($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X42);
    // 0x8000D920: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    // 0x8000D924: lh          $t7, 0x36($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X36);
    // 0x8000D928: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000D92C: lh          $t4, 0x3A($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X3A);
    // 0x8000D930: lh          $t2, 0x38($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X38);
    // 0x8000D934: lh          $t5, 0x3C($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X3C);
    // 0x8000D938: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8000D93C: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000D940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000D944: bgez        $v0, L_8000D954
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000D948: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8000D954;
    }
    // 0x8000D948: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8000D94C: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x8000D950: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8000D954:
    // 0x8000D954: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8000D958: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000D95C: mflo        $v1
    ctx->r3 = lo;
    // 0x8000D960: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000D964: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8000D968: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D96C: bgez        $v1, L_8000D97C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8000D970: sra         $t1, $v1, 1
        ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8000D97C;
    }
    // 0x8000D970: sra         $t1, $v1, 1
    ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8000D974: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8000D978: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_8000D97C:
    // 0x8000D97C: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8000D980: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8000D984: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8000D988: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000D98C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8000D990: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000D994: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000D998: add.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x8000D99C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x8000D9A0: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000D9A4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8000D9A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000D9AC: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x8000D9B0: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000D9B4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000D9B8: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000D9BC: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000D9C0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8000D9C4: sub.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8000D9C8: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D9CC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000D9D0: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000D9D4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8000D9D8: nop

    // 0x8000D9DC: sh          $t7, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r15;
    // 0x8000D9E0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8000D9E4: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8000D9E8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8000D9EC: jr          $ra
    // 0x8000D9F0: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8000D9F0: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8001B950_1C550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B950: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x8001B954: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8001B958: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B95C: sw          $zero, -0x7684($at)
    MEM_W(-0X7684, ctx->r1) = 0;
    // 0x8001B960: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    // 0x8001B964: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B968: swc1        $f12, -0x7AF0($at)
    MEM_W(-0X7AF0, ctx->r1) = ctx->f12.u32l;
    // 0x8001B96C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B970: swc1        $f4, -0x7AEC($at)
    MEM_W(-0X7AEC, ctx->r1) = ctx->f4.u32l;
    // 0x8001B974: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x8001B978: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001B97C: and         $t7, $a2, $at
    ctx->r15 = ctx->r6 & ctx->r1;
    // 0x8001B980: addiu       $v0, $v0, -0x7B60
    ctx->r2 = ADD32(ctx->r2, -0X7B60);
    // 0x8001B984: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8001B988: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001B98C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8001B990: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8001B994: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8001B998: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8001B99C: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x8001B9A0: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x8001B9A4: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x8001B9A8: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x8001B9AC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8001B9B0: beq         $t7, $at, L_8001B9C0
    if (ctx->r15 == ctx->r1) {
        // 0x8001B9B4: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_8001B9C0;
    }
    // 0x8001B9B4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x8001B9B8: b           L_8001B9C8
    // 0x8001B9BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8001B9C8;
    // 0x8001B9BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001B9C0:
    // 0x8001B9C0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8001B9C4: lw          $s1, 0x78($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X78);
L_8001B9C8:
    // 0x8001B9C8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001B9CC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8001B9D0: and         $t0, $a2, $at
    ctx->r8 = ctx->r6 & ctx->r1;
    // 0x8001B9D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B9D8: sw          $t0, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r8;
    // 0x8001B9DC: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001B9E0: lw          $v1, -0x7B10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B10);
    // 0x8001B9E4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8001B9E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001B9EC: beq         $v1, $zero, L_8001BA60
    if (ctx->r3 == 0) {
        // 0x8001B9F0: sll         $t1, $v1, 0
        ctx->r9 = S32(ctx->r3 << 0);
            goto L_8001BA60;
    }
    // 0x8001B9F0: sll         $t1, $v1, 0
    ctx->r9 = S32(ctx->r3 << 0);
    // 0x8001B9F4: bgez        $t1, L_8001BA04
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8001B9F8: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001BA04;
    }
    // 0x8001B9F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001B9FC: b           L_8001BA60
    // 0x8001BA00: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
        goto L_8001BA60;
    // 0x8001BA00: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
L_8001BA04:
    // 0x8001BA04: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001BA08: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001BA0C: sltu        $at, $v1, $at
    ctx->r1 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x8001BA10: bne         $at, $zero, L_8001BA40
    if (ctx->r1 != 0) {
        // 0x8001BA14: lw          $a0, -0x7B60($a0)
        ctx->r4 = MEM_W(ctx->r4, -0X7B60);
            goto L_8001BA40;
    }
    // 0x8001BA14: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    // 0x8001BA18: srl         $t2, $v1, 24
    ctx->r10 = S32(U32(ctx->r3) >> 24);
    // 0x8001BA1C: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8001BA20: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001BA24: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x8001BA28: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BA2C: lw          $t6, -0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, -0X8);
    // 0x8001BA30: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BA34: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x8001BA38: b           L_8001BA54
    // 0x8001BA3C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
        goto L_8001BA54;
    // 0x8001BA3C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
L_8001BA40:
    // 0x8001BA40: lw          $t8, 0x38($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X38);
    // 0x8001BA44: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BA48: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BA4C: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x8001BA50: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
L_8001BA54:
    // 0x8001BA54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001BA58: b           L_8001BA60
    // 0x8001BA5C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
        goto L_8001BA60;
    // 0x8001BA5C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_8001BA60:
    // 0x8001BA60: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x8001BA64: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001BA68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001BA6C: bne         $a2, $zero, L_8001BA7C
    if (ctx->r6 != 0) {
        // 0x8001BA70: srl         $t2, $a2, 8
        ctx->r10 = S32(U32(ctx->r6) >> 8);
            goto L_8001BA7C;
    }
    // 0x8001BA70: srl         $t2, $a2, 8
    ctx->r10 = S32(U32(ctx->r6) >> 8);
    // 0x8001BA74: b           L_8001C20C
    // 0x8001BA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C20C;
    // 0x8001BA78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001BA7C:
    // 0x8001BA7C: divu        $zero, $a2, $at
    lo = S32(U32(ctx->r6) / U32(ctx->r1)); hi = S32(U32(ctx->r6) % U32(ctx->r1));
    // 0x8001BA80: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x8001BA84: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8001BA88: mflo        $t0
    ctx->r8 = lo;
    // 0x8001BA8C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8001BA90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BA94: andi        $t3, $t2, 0x7FFF
    ctx->r11 = ctx->r10 & 0X7FFF;
    // 0x8001BA98: sw          $t1, -0x7AE4($at)
    MEM_W(-0X7AE4, ctx->r1) = ctx->r9;
    // 0x8001BA9C: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x8001BAA0: bgez        $t4, L_8001BAB8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8001BAA4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8001BAB8;
    }
    // 0x8001BAA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001BAA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001BAAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001BAB0: nop

    // 0x8001BAB4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8001BAB8:
    // 0x8001BAB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BABC: swc1        $f8, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f8.u32l;
    // 0x8001BAC0: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x8001BAC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BAC8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001BACC: sw          $t5, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r13;
    // 0x8001BAD0: lw          $v1, -0x7B10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B10);
    // 0x8001BAD4: srl         $t5, $a2, 28
    ctx->r13 = S32(U32(ctx->r6) >> 28);
    // 0x8001BAD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BADC: beq         $v1, $zero, L_8001BB58
    if (ctx->r3 == 0) {
        // 0x8001BAE0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8001BB58;
    }
    // 0x8001BAE0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8001BAE4: sll         $t6, $v1, 0
    ctx->r14 = S32(ctx->r3 << 0);
    // 0x8001BAE8: bgez        $t6, L_8001BAF8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001BAEC: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001BAF8;
    }
    // 0x8001BAEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001BAF0: b           L_8001BB4C
    // 0x8001BAF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001BB4C;
    // 0x8001BAF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001BAF8:
    // 0x8001BAF8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001BAFC: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001BB00: sltu        $at, $v1, $at
    ctx->r1 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x8001BB04: bne         $at, $zero, L_8001BB34
    if (ctx->r1 != 0) {
        // 0x8001BB08: lw          $a0, -0x7B60($a0)
        ctx->r4 = MEM_W(ctx->r4, -0X7B60);
            goto L_8001BB34;
    }
    // 0x8001BB08: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    // 0x8001BB0C: srl         $t7, $v1, 24
    ctx->r15 = S32(U32(ctx->r3) >> 24);
    // 0x8001BB10: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001BB14: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001BB18: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8001BB1C: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BB20: lw          $t1, -0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X8);
    // 0x8001BB24: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BB28: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x8001BB2C: b           L_8001BB48
    // 0x8001BB30: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
        goto L_8001BB48;
    // 0x8001BB30: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
L_8001BB34:
    // 0x8001BB34: lw          $t3, 0x38($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X38);
    // 0x8001BB38: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BB3C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BB40: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x8001BB44: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
L_8001BB48:
    // 0x8001BB48: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001BB4C:
    // 0x8001BB4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BB50: b           L_8001BB5C
    // 0x8001BB54: sw          $v0, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
        goto L_8001BB5C;
    // 0x8001BB54: sw          $v0, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r2;
L_8001BB58:
    // 0x8001BB58: sw          $zero, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = 0;
L_8001BB5C:
    // 0x8001BB5C: srl         $t7, $a2, 24
    ctx->r15 = S32(U32(ctx->r6) >> 24);
    // 0x8001BB60: lw          $t2, 0x134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X134);
    // 0x8001BB64: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001BB68: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x8001BB6C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001BB70: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001BB74: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x8001BB78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001BB7C: and         $v0, $t2, $v1
    ctx->r2 = ctx->r10 & ctx->r3;
    // 0x8001BB80: bne         $v1, $v0, L_8001BB98
    if (ctx->r3 != ctx->r2) {
        // 0x8001BB84: addu        $s3, $s3, $t1
        ctx->r19 = ADD32(ctx->r19, ctx->r9);
            goto L_8001BB98;
    }
    // 0x8001BB84: addu        $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
    // 0x8001BB88: subu        $t3, $t2, $v1
    ctx->r11 = SUB32(ctx->r10, ctx->r3);
    // 0x8001BB8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BB90: b           L_8001BBA0
    // 0x8001BB94: sw          $t3, -0x761C($at)
    MEM_W(-0X761C, ctx->r1) = ctx->r11;
        goto L_8001BBA0;
    // 0x8001BB94: sw          $t3, -0x761C($at)
    MEM_W(-0X761C, ctx->r1) = ctx->r11;
L_8001BB98:
    // 0x8001BB98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BB9C: sw          $zero, -0x761C($at)
    MEM_W(-0X761C, ctx->r1) = 0;
L_8001BBA0:
    // 0x8001BBA0: lui         $v1, 0xE000
    ctx->r3 = S32(0XE000 << 16);
    // 0x8001BBA4: bne         $v1, $v0, L_8001BBC0
    if (ctx->r3 != ctx->r2) {
        // 0x8001BBA8: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001BBC0;
    }
    // 0x8001BBA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BBAC: lw          $t4, 0x134($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X134);
    // 0x8001BBB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BBB4: subu        $t5, $t4, $v1
    ctx->r13 = SUB32(ctx->r12, ctx->r3);
    // 0x8001BBB8: b           L_8001BBC4
    // 0x8001BBBC: sw          $t5, -0x7620($at)
    MEM_W(-0X7620, ctx->r1) = ctx->r13;
        goto L_8001BBC4;
    // 0x8001BBBC: sw          $t5, -0x7620($at)
    MEM_W(-0X7620, ctx->r1) = ctx->r13;
L_8001BBC0:
    // 0x8001BBC0: sw          $zero, -0x7620($at)
    MEM_W(-0X7620, ctx->r1) = 0;
L_8001BBC4:
    // 0x8001BBC4: bne         $s0, $zero, L_8001BCC0
    if (ctx->r16 != 0) {
        // 0x8001BBC8: lw          $t1, 0x4C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X4C);
            goto L_8001BCC0;
    }
    // 0x8001BBC8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8001BBCC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8001BBD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001BBD4: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8001BBD8: beq         $t7, $zero, L_8001BDF4
    if (ctx->r15 == 0) {
        // 0x8001BBDC: sw          $t6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r14;
            goto L_8001BDF4;
    }
    // 0x8001BBDC: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x8001BBE0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8001BBE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BBE8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001BBEC: sw          $t8, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r24;
    // 0x8001BBF0: lw          $v1, -0x7B10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B10);
    // 0x8001BBF4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8001BBF8: lw          $a2, -0x7620($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7620);
    // 0x8001BBFC: beq         $v1, $zero, L_8001BC70
    if (ctx->r3 == 0) {
        // 0x8001BC00: sll         $t9, $v1, 0
        ctx->r25 = S32(ctx->r3 << 0);
            goto L_8001BC70;
    }
    // 0x8001BC00: sll         $t9, $v1, 0
    ctx->r25 = S32(ctx->r3 << 0);
    // 0x8001BC04: bgez        $t9, L_8001BC14
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001BC08: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001BC14;
    }
    // 0x8001BC08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001BC0C: b           L_8001BC70
    // 0x8001BC10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001BC70;
    // 0x8001BC10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001BC14:
    // 0x8001BC14: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001BC18: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001BC1C: sltu        $at, $v1, $at
    ctx->r1 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x8001BC20: bne         $at, $zero, L_8001BC50
    if (ctx->r1 != 0) {
        // 0x8001BC24: lw          $a0, -0x7B60($a0)
        ctx->r4 = MEM_W(ctx->r4, -0X7B60);
            goto L_8001BC50;
    }
    // 0x8001BC24: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    // 0x8001BC28: srl         $t0, $v1, 24
    ctx->r8 = S32(U32(ctx->r3) >> 24);
    // 0x8001BC2C: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x8001BC30: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001BC34: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8001BC38: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BC3C: lw          $t4, -0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, -0X8);
    // 0x8001BC40: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BC44: and         $t5, $v1, $at
    ctx->r13 = ctx->r3 & ctx->r1;
    // 0x8001BC48: b           L_8001BC64
    // 0x8001BC4C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
        goto L_8001BC64;
    // 0x8001BC4C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_8001BC50:
    // 0x8001BC50: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x8001BC54: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001BC58: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BC5C: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x8001BC60: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
L_8001BC64:
    // 0x8001BC64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001BC68: b           L_8001BC70
    // 0x8001BC6C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8001BC70;
    // 0x8001BC6C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001BC70:
    // 0x8001BC70: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8001BC74: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8001BC78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001BC7C: bne         $t8, $zero, L_8001BC98
    if (ctx->r24 != 0) {
        // 0x8001BC80: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8001BC98;
    }
    // 0x8001BC80: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001BC84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BC88: sw          $v0, -0x7670($at)
    MEM_W(-0X7670, ctx->r1) = ctx->r2;
    // 0x8001BC8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BC90: sw          $zero, -0x7648($at)
    MEM_W(-0X7648, ctx->r1) = 0;
    // 0x8001BC94: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001BC98:
    // 0x8001BC98: beq         $a2, $zero, L_8001BCD8
    if (ctx->r6 == 0) {
        // 0x8001BC9C: addiu       $t9, $a2, -0x1
        ctx->r25 = ADD32(ctx->r6, -0X1);
            goto L_8001BCD8;
    }
    // 0x8001BC9C: addiu       $t9, $a2, -0x1
    ctx->r25 = ADD32(ctx->r6, -0X1);
    // 0x8001BCA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BCA4: sw          $t9, -0x7620($at)
    MEM_W(-0X7620, ctx->r1) = ctx->r25;
    // 0x8001BCA8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001BCAC: lw          $t0, -0x7620($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7620);
    // 0x8001BCB0: bne         $t0, $zero, L_8001BCD8
    if (ctx->r8 != 0) {
        // 0x8001BCB4: nop
    
            goto L_8001BCD8;
    }
    // 0x8001BCB4: nop

    // 0x8001BCB8: b           L_8001BDF8
    // 0x8001BCBC: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
        goto L_8001BDF8;
    // 0x8001BCBC: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
L_8001BCC0:
    // 0x8001BCC0: bne         $t1, $zero, L_8001BCD8
    if (ctx->r9 != 0) {
        // 0x8001BCC4: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001BCD8;
    }
    // 0x8001BCC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BCC8: sw          $s0, -0x7670($at)
    MEM_W(-0X7670, ctx->r1) = ctx->r16;
    // 0x8001BCCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BCD0: sw          $zero, -0x7648($at)
    MEM_W(-0X7648, ctx->r1) = 0;
    // 0x8001BCD4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001BCD8:
    // 0x8001BCD8: bne         $s0, $zero, L_8001BCE8
    if (ctx->r16 != 0) {
        // 0x8001BCDC: lui         $at, 0x8FFF
        ctx->r1 = S32(0X8FFF << 16);
            goto L_8001BCE8;
    }
    // 0x8001BCDC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001BCE0: b           L_8001BBC4
    // 0x8001BCE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_8001BBC4;
    // 0x8001BCE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8001BCE8:
    // 0x8001BCE8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001BCEC: lw          $t3, 0x134($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X134);
    // 0x8001BCF0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001BCF4: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x8001BCF8: beq         $t3, $t2, L_8001BDF4
    if (ctx->r11 == ctx->r10) {
        // 0x8001BCFC: lui         $v0, 0x8017
        ctx->r2 = S32(0X8017 << 16);
            goto L_8001BDF4;
    }
    // 0x8001BCFC: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001BD00: beql        $t2, $zero, L_8001BD30
    if (ctx->r10 == 0) {
        // 0x8001BD04: lb          $t7, 0x4($s0)
        ctx->r15 = MEM_B(ctx->r16, 0X4);
            goto L_8001BD30;
    }
    goto skip_0;
    // 0x8001BD04: lb          $t7, 0x4($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X4);
    skip_0:
    // 0x8001BD08: lw          $v0, -0x761C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X761C);
    // 0x8001BD0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BD10: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001BD14: beq         $v0, $zero, L_8001BD2C
    if (ctx->r2 == 0) {
        // 0x8001BD18: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_8001BD2C;
    }
    // 0x8001BD18: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8001BD1C: sw          $t4, -0x761C($at)
    MEM_W(-0X761C, ctx->r1) = ctx->r12;
    // 0x8001BD20: lw          $t5, -0x761C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X761C);
    // 0x8001BD24: beql        $t5, $zero, L_8001BDF8
    if (ctx->r13 == 0) {
        // 0x8001BD28: lw          $t3, 0x120($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X120);
            goto L_8001BDF8;
    }
    goto skip_1;
    // 0x8001BD28: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    skip_1:
L_8001BD2C:
    // 0x8001BD2C: lb          $t7, 0x4($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X4);
L_8001BD30:
    // 0x8001BD30: beq         $t7, $zero, L_8001BDA0
    if (ctx->r15 == 0) {
        // 0x8001BD34: nop
    
            goto L_8001BDA0;
    }
    // 0x8001BD34: nop

    // 0x8001BD38: beq         $s1, $zero, L_8001BD64
    if (ctx->r17 == 0) {
        // 0x8001BD3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001BD64;
    }
    // 0x8001BD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001BD40: jal         0x80018F3C
    // 0x8001BD44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_0;
    // 0x8001BD44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x8001BD48: bne         $v0, $zero, L_8001BD64
    if (ctx->r2 != 0) {
        // 0x8001BD4C: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_8001BD64;
    }
    // 0x8001BD4C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x8001BD50: lw          $t6, 0x78($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X78);
    // 0x8001BD54: beq         $t6, $zero, L_8001BD64
    if (ctx->r14 == 0) {
        // 0x8001BD58: nop
    
            goto L_8001BD64;
    }
    // 0x8001BD58: nop

    // 0x8001BD5C: jal         0x8003674C
    // 0x8001BD60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003674C_3734C(rdram, ctx);
        goto after_1;
    // 0x8001BD60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
L_8001BD64:
    // 0x8001BD64: beq         $s1, $zero, L_8001BD74
    if (ctx->r17 == 0) {
        // 0x8001BD68: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_8001BD74;
    }
    // 0x8001BD68: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8001BD6C: beq         $t8, $zero, L_8001BDA0
    if (ctx->r24 == 0) {
        // 0x8001BD70: nop
    
            goto L_8001BDA0;
    }
    // 0x8001BD70: nop

L_8001BD74:
    // 0x8001BD74: lb          $t9, 0x4($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X4);
    // 0x8001BD78: lw          $a1, 0x134($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X134);
    // 0x8001BD7C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8001BD80: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001BD84: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001BD88: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8001BD8C: addu        $a0, $s0, $t0
    ctx->r4 = ADD32(ctx->r16, ctx->r8);
    // 0x8001BD90: jal         0x8001C228
    // 0x8001BD94: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    func_8001C228_1CE28(rdram, ctx);
        goto after_2;
    // 0x8001BD94: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    after_2:
    // 0x8001BD98: bne         $v0, $zero, L_8001BDF4
    if (ctx->r2 != 0) {
        // 0x8001BD9C: andi        $s2, $v0, 0xFF
        ctx->r18 = ctx->r2 & 0XFF;
            goto L_8001BDF4;
    }
    // 0x8001BD9C: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
L_8001BDA0:
    // 0x8001BDA0: beq         $s1, $zero, L_8001BDD0
    if (ctx->r17 == 0) {
        // 0x8001BDA4: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8001BDD0;
    }
    // 0x8001BDA4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8001BDA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001BDAC: jal         0x8001904C
    // 0x8001BDB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_3;
    // 0x8001BDB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x8001BDB4: bnel        $v0, $zero, L_8001BDD4
    if (ctx->r2 != 0) {
        // 0x8001BDB8: lb          $v0, 0x5($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X5);
            goto L_8001BDD4;
    }
    goto skip_2;
    // 0x8001BDB8: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    skip_2:
    // 0x8001BDBC: lw          $t1, 0x74($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X74);
    // 0x8001BDC0: beql        $t1, $zero, L_8001BDD4
    if (ctx->r9 == 0) {
        // 0x8001BDC4: lb          $v0, 0x5($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X5);
            goto L_8001BDD4;
    }
    goto skip_3;
    // 0x8001BDC4: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    skip_3:
    // 0x8001BDC8: jal         0x80036798
    // 0x8001BDCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_4;
    // 0x8001BDCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_8001BDD0:
    // 0x8001BDD0: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
L_8001BDD4:
    // 0x8001BDD4: beq         $v0, $zero, L_8001BDEC
    if (ctx->r2 == 0) {
        // 0x8001BDD8: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_8001BDEC;
    }
    // 0x8001BDD8: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8001BDDC: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x8001BDE0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8001BDE4: b           L_8001BBC4
    // 0x8001BDE8: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
        goto L_8001BBC4;
    // 0x8001BDE8: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
L_8001BDEC:
    // 0x8001BDEC: b           L_8001BBC4
    // 0x8001BDF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001BBC4;
    // 0x8001BDF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001BDF4:
    // 0x8001BDF4: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
L_8001BDF8:
    // 0x8001BDF8: beq         $t3, $zero, L_8001C1A8
    if (ctx->r11 == 0) {
        // 0x8001BDFC: nop
    
            goto L_8001C1A8;
    }
    // 0x8001BDFC: nop

    // 0x8001BE00: beq         $s2, $zero, L_8001C098
    if (ctx->r18 == 0) {
        // 0x8001BE04: lw          $t9, 0x6C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X6C);
            goto L_8001C098;
    }
    // 0x8001BE04: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8001BE08: lw          $t4, 0x124($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X124);
    // 0x8001BE0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001BE10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001BE14: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8001BE18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8001BE1C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8001BE20: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8001BE24: nop

    // 0x8001BE28: bc1tl       L_8001BE38
    if (c1cs) {
        // 0x8001BE2C: lwc1        $f18, 0xC($t4)
        ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
            goto L_8001BE38;
    }
    goto skip_4;
    // 0x8001BE2C: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    skip_4:
    // 0x8001BE30: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001BE34: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
L_8001BE38:
    // 0x8001BE38: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x8001BE3C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x8001BE40: nop

    // 0x8001BE44: bc1tl       L_8001BE54
    if (c1cs) {
        // 0x8001BE48: lwc1        $f4, 0x10($t4)
        ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
            goto L_8001BE54;
    }
    goto skip_5;
    // 0x8001BE48: lwc1        $f4, 0x10($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
    skip_5:
    // 0x8001BE4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001BE50: lwc1        $f4, 0x10($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
L_8001BE54:
    // 0x8001BE54: or          $t6, $t5, $t7
    ctx->r14 = ctx->r13 | ctx->r15;
    // 0x8001BE58: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x8001BE5C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8001BE60: nop

    // 0x8001BE64: bc1tl       L_8001BE74
    if (c1cs) {
        // 0x8001BE68: lwc1        $f6, 0x1C($t4)
        ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
            goto L_8001BE74;
    }
    goto skip_6;
    // 0x8001BE68: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    skip_6:
    // 0x8001BE6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001BE70: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
L_8001BE74:
    // 0x8001BE74: lhu         $t0, 0x14($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X14);
    // 0x8001BE78: lhu         $t2, 0x16($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X16);
    // 0x8001BE7C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x8001BE80: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8001BE84: lhu         $t5, 0x18($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X18);
    // 0x8001BE88: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x8001BE8C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x8001BE90: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x8001BE94: bc1t        L_8001BEA0
    if (c1cs) {
        // 0x8001BE98: or          $t7, $t3, $t5
        ctx->r15 = ctx->r11 | ctx->r13;
            goto L_8001BEA0;
    }
    // 0x8001BE98: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x8001BE9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8001BEA0:
    // 0x8001BEA0: lwc1        $f10, 0x20($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X20);
    // 0x8001BEA4: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x8001BEA8: addiu       $a0, $s1, -0x7AC8
    ctx->r4 = ADD32(ctx->r17, -0X7AC8);
    // 0x8001BEAC: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8001BEB0: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8001BEB4: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x8001BEB8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8001BEBC: bc1t        L_8001BEC8
    if (c1cs) {
        // 0x8001BEC0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8001BEC8;
    }
    // 0x8001BEC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001BEC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_8001BEC8:
    // 0x8001BEC8: lwc1        $f8, 0x24($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8001BECC: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x8001BED0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8001BED4: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x8001BED8: nop

    // 0x8001BEDC: bc1tl       L_8001BEEC
    if (c1cs) {
        // 0x8001BEE0: or          $t2, $t0, $t1
        ctx->r10 = ctx->r8 | ctx->r9;
            goto L_8001BEEC;
    }
    goto skip_7;
    // 0x8001BEE0: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    skip_7:
    // 0x8001BEE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8001BEE8: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
L_8001BEEC:
    // 0x8001BEEC: beq         $t2, $zero, L_8001BEFC
    if (ctx->r10 == 0) {
        // 0x8001BEF0: nop
    
            goto L_8001BEFC;
    }
    // 0x8001BEF0: nop

    // 0x8001BEF4: jal         0x8001E2BC
    // 0x8001BEF8: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    func_8001E2BC_1EEBC(rdram, ctx);
        goto after_5;
    // 0x8001BEF8: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    after_5:
L_8001BEFC:
    // 0x8001BEFC: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x8001BF00: addiu       $s1, $s1, -0x7AC8
    ctx->r17 = ADD32(ctx->r17, -0X7AC8);
    // 0x8001BF04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001BF08: blez        $s2, L_8001C038
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8001BF0C: sw          $s2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r18;
            goto L_8001C038;
    }
    // 0x8001BF0C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8001BF10: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x8001BF14: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8001BF18: addiu       $s0, $s0, -0x7A88
    ctx->r16 = ADD32(ctx->r16, -0X7A88);
    // 0x8001BF1C: addiu       $s2, $s2, -0x7648
    ctx->r18 = ADD32(ctx->r18, -0X7648);
L_8001BF20:
    // 0x8001BF20: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x8001BF24: lbu         $t6, 0x5D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5D);
    // 0x8001BF28: addu        $t7, $s2, $v1
    ctx->r15 = ADD32(ctx->r18, ctx->r3);
    // 0x8001BF2C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x8001BF30: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x8001BF34: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    // 0x8001BF38: beq         $v0, $zero, L_8001BFA8
    if (ctx->r2 == 0) {
        // 0x8001BF3C: lui         $a1, 0x8017
        ctx->r5 = S32(0X8017 << 16);
            goto L_8001BFA8;
    }
    // 0x8001BF3C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001BF40: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001BF44: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001BF48: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8001BF4C: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x8001BF50: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8001BF54: lw          $a1, -0x7670($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7670);
    // 0x8001BF58: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x8001BF5C: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x8001BF60: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8001BF64: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8001BF68: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x8001BF6C: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x8001BF70: lhu         $t0, 0x16($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X16);
    // 0x8001BF74: sh          $t0, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r8;
    // 0x8001BF78: lhu         $t1, 0x18($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X18);
    // 0x8001BF7C: sh          $t1, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r9;
    // 0x8001BF80: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8001BF84: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x8001BF88: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8001BF8C: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x8001BF90: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8001BF94: sb          $a3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r7;
    // 0x8001BF98: jal         0x80019ED8
    // 0x8001BF9C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_80019ED8_1AAD8(rdram, ctx);
        goto after_6;
    // 0x8001BF9C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8001BFA0: b           L_8001BFC0
    // 0x8001BFA4: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
        goto L_8001BFC0;
    // 0x8001BFA4: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
L_8001BFA8:
    // 0x8001BFA8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8001BFAC: lw          $a1, -0x7670($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7670);
    // 0x8001BFB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001BFB4: jal         0x80019ED8
    // 0x8001BFB8: sb          $a3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r7;
    func_80019ED8_1AAD8(rdram, ctx);
        goto after_7;
    // 0x8001BFB8: sb          $a3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r7;
    after_7:
    // 0x8001BFBC: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
L_8001BFC0:
    // 0x8001BFC0: lbu         $t2, 0x5D($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5D);
    // 0x8001BFC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001BFC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001BFCC: beq         $t2, $zero, L_8001C01C
    if (ctx->r10 == 0) {
        // 0x8001BFD0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8001C01C;
    }
    // 0x8001BFD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001BFD4: jal         0x8001F2D8
    // 0x8001BFD8: sb          $a3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r7;
    func_8001F2D8_1FED8(rdram, ctx);
        goto after_8;
    // 0x8001BFD8: sb          $a3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r7;
    after_8:
    // 0x8001BFDC: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8001BFE0: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8001BFE4: or          $t6, $s1, $zero
    ctx->r14 = ctx->r17 | 0;
    // 0x8001BFE8: addiu       $t5, $s0, 0x3C
    ctx->r13 = ADD32(ctx->r16, 0X3C);
L_8001BFEC:
    // 0x8001BFEC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8001BFF0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8001BFF4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8001BFF8: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8001BFFC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8001C000: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8001C004: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8001C008: bne         $t7, $t5, L_8001BFEC
    if (ctx->r15 != ctx->r13) {
        // 0x8001C00C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8001BFEC;
    }
    // 0x8001C00C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8001C010: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8001C014: b           L_8001C020
    // 0x8001C018: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
        goto L_8001C020;
    // 0x8001C018: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
L_8001C01C:
    // 0x8001C01C: sb          $t8, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r24;
L_8001C020:
    // 0x8001C020: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8001C024: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8001C028: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x8001C02C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001C030: bne         $at, $zero, L_8001BF20
    if (ctx->r1 != 0) {
        // 0x8001C034: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_8001BF20;
    }
    // 0x8001C034: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_8001C038:
    // 0x8001C038: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x8001C03C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8001C040: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8001C044: addiu       $t4, $t3, 0x16
    ctx->r12 = ADD32(ctx->r11, 0X16);
    // 0x8001C048: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8001C04C: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x8001C050: addiu       $t5, $t3, 0x18
    ctx->r13 = ADD32(ctx->r11, 0X18);
    // 0x8001C054: addiu       $t7, $t3, 0x1C
    ctx->r15 = ADD32(ctx->r11, 0X1C);
    // 0x8001C058: addiu       $t6, $t3, 0x20
    ctx->r14 = ADD32(ctx->r11, 0X20);
    // 0x8001C05C: addiu       $t8, $t3, 0x24
    ctx->r24 = ADD32(ctx->r11, 0X24);
    // 0x8001C060: lw          $s0, -0x7674($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7674);
    // 0x8001C064: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8001C068: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001C06C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001C070: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8001C074: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8001C078: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8001C07C: addiu       $a0, $t3, 0x8
    ctx->r4 = ADD32(ctx->r11, 0X8);
    // 0x8001C080: addiu       $a1, $t3, 0xC
    ctx->r5 = ADD32(ctx->r11, 0XC);
    // 0x8001C084: addiu       $a2, $t3, 0x10
    ctx->r6 = ADD32(ctx->r11, 0X10);
    // 0x8001C088: jal         0x8001EEF4
    // 0x8001C08C: addiu       $a3, $t3, 0x14
    ctx->r7 = ADD32(ctx->r11, 0X14);
    func_8001EEF4_1FAF4(rdram, ctx);
        goto after_9;
    // 0x8001C08C: addiu       $a3, $t3, 0x14
    ctx->r7 = ADD32(ctx->r11, 0X14);
    after_9:
    // 0x8001C090: b           L_8001C15C
    // 0x8001C094: lhu         $t4, 0xC($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XC);
        goto L_8001C15C;
    // 0x8001C094: lhu         $t4, 0xC($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XC);
L_8001C098:
    // 0x8001C098: beq         $t9, $zero, L_8001C0B8
    if (ctx->r25 == 0) {
        // 0x8001C09C: lw          $t0, 0x134($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X134);
            goto L_8001C0B8;
    }
    // 0x8001C09C: lw          $t0, 0x134($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X134);
    // 0x8001C0A0: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x8001C0A4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001C0A8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001C0AC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x8001C0B0: beql        $t0, $t2, L_8001C0C4
    if (ctx->r8 == ctx->r10) {
        // 0x8001C0B4: lw          $t4, 0x0($s3)
        ctx->r12 = MEM_W(ctx->r19, 0X0);
            goto L_8001C0C4;
    }
    goto skip_8;
    // 0x8001C0B4: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    skip_8:
L_8001C0B8:
    // 0x8001C0B8: b           L_8001C20C
    // 0x8001C0BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C20C;
    // 0x8001C0BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C0C0: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
L_8001C0C4:
    // 0x8001C0C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C0C8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001C0CC: sw          $t4, -0x7B10($at)
    MEM_W(-0X7B10, ctx->r1) = ctx->r12;
    // 0x8001C0D0: lw          $v1, -0x7B10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B10);
    // 0x8001C0D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001C0D8: beq         $v1, $zero, L_8001C14C
    if (ctx->r3 == 0) {
        // 0x8001C0DC: sll         $t5, $v1, 0
        ctx->r13 = S32(ctx->r3 << 0);
            goto L_8001C14C;
    }
    // 0x8001C0DC: sll         $t5, $v1, 0
    ctx->r13 = S32(ctx->r3 << 0);
    // 0x8001C0E0: bgez        $t5, L_8001C0F0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8001C0E4: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001C0F0;
    }
    // 0x8001C0E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001C0E8: b           L_8001C14C
    // 0x8001C0EC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_8001C14C;
    // 0x8001C0EC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_8001C0F0:
    // 0x8001C0F0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001C0F4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001C0F8: sltu        $at, $v1, $at
    ctx->r1 = ctx->r3 < ctx->r1 ? 1 : 0;
    // 0x8001C0FC: bne         $at, $zero, L_8001C12C
    if (ctx->r1 != 0) {
        // 0x8001C100: lw          $a0, -0x7B60($a0)
        ctx->r4 = MEM_W(ctx->r4, -0X7B60);
            goto L_8001C12C;
    }
    // 0x8001C100: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    // 0x8001C104: srl         $t7, $v1, 24
    ctx->r15 = S32(U32(ctx->r3) >> 24);
    // 0x8001C108: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x8001C10C: sll         $t3, $t6, 3
    ctx->r11 = S32(ctx->r14 << 3);
    // 0x8001C110: addu        $t8, $a0, $t3
    ctx->r24 = ADD32(ctx->r4, ctx->r11);
    // 0x8001C114: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001C118: lw          $t9, -0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X8);
    // 0x8001C11C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001C120: and         $t1, $v1, $at
    ctx->r9 = ctx->r3 & ctx->r1;
    // 0x8001C124: b           L_8001C140
    // 0x8001C128: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
        goto L_8001C140;
    // 0x8001C128: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
L_8001C12C:
    // 0x8001C12C: lw          $t0, 0x38($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X38);
    // 0x8001C130: lui         $at, 0x80FF
    ctx->r1 = S32(0X80FF << 16);
    // 0x8001C134: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001C138: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x8001C13C: addu        $a1, $t0, $t2
    ctx->r5 = ADD32(ctx->r8, ctx->r10);
L_8001C140:
    // 0x8001C140: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001C144: b           L_8001C14C
    // 0x8001C148: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8001C14C;
    // 0x8001C148: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8001C14C:
    // 0x8001C14C: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x8001C150: jal         0x8001C970
    // 0x8001C154: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    func_8001C970_1D570(rdram, ctx);
        goto after_10;
    // 0x8001C154: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    after_10:
    // 0x8001C158: lhu         $t4, 0xC($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XC);
L_8001C15C:
    // 0x8001C15C: lw          $t7, 0x120($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X120);
    // 0x8001C160: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x8001C164: beq         $t5, $zero, L_8001C170
    if (ctx->r13 == 0) {
        // 0x8001C168: ori         $v0, $zero, 0x8000
        ctx->r2 = 0 | 0X8000;
            goto L_8001C170;
    }
    // 0x8001C168: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x8001C16C: sh          $v0, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r2;
L_8001C170:
    // 0x8001C170: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x8001C174: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x8001C178: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x8001C17C: andi        $t3, $t6, 0x4000
    ctx->r11 = ctx->r14 & 0X4000;
    // 0x8001C180: beql        $t3, $zero, L_8001C190
    if (ctx->r11 == 0) {
        // 0x8001C184: lhu         $t9, 0x10($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X10);
            goto L_8001C190;
    }
    goto skip_9;
    // 0x8001C184: lhu         $t9, 0x10($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X10);
    skip_9:
    // 0x8001C188: sh          $v0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r2;
    // 0x8001C18C: lhu         $t9, 0x10($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X10);
L_8001C190:
    // 0x8001C190: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x8001C194: andi        $t1, $t9, 0x4000
    ctx->r9 = ctx->r25 & 0X4000;
    // 0x8001C198: beq         $t1, $zero, L_8001C1F0
    if (ctx->r9 == 0) {
        // 0x8001C19C: nop
    
            goto L_8001C1F0;
    }
    // 0x8001C19C: nop

    // 0x8001C1A0: b           L_8001C1F0
    // 0x8001C1A4: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
        goto L_8001C1F0;
    // 0x8001C1A4: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
L_8001C1A8:
    // 0x8001C1A8: beq         $s2, $zero, L_8001C1C4
    if (ctx->r18 == 0) {
        // 0x8001C1AC: lw          $t4, 0x6C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X6C);
            goto L_8001C1C4;
    }
    // 0x8001C1AC: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8001C1B0: sll         $t2, $s2, 2
    ctx->r10 = S32(ctx->r18 << 2);
    // 0x8001C1B4: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8001C1B8: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x8001C1BC: b           L_8001C1F0
    // 0x8001C1C0: lw          $s0, -0x7674($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7674);
        goto L_8001C1F0;
    // 0x8001C1C0: lw          $s0, -0x7674($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7674);
L_8001C1C4:
    // 0x8001C1C4: beq         $t4, $zero, L_8001C1E8
    if (ctx->r12 == 0) {
        // 0x8001C1C8: or          $s0, $t4, $zero
        ctx->r16 = ctx->r12 | 0;
            goto L_8001C1E8;
    }
    // 0x8001C1C8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8001C1CC: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x8001C1D0: lw          $t5, 0x134($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X134);
    // 0x8001C1D4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001C1D8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8001C1DC: and         $t6, $t7, $at
    ctx->r14 = ctx->r15 & ctx->r1;
    // 0x8001C1E0: beq         $t5, $t6, L_8001C1F0
    if (ctx->r13 == ctx->r14) {
        // 0x8001C1E4: nop
    
            goto L_8001C1F0;
    }
    // 0x8001C1E4: nop

L_8001C1E8:
    // 0x8001C1E8: b           L_8001C20C
    // 0x8001C1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C20C;
    // 0x8001C1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C1F0:
    // 0x8001C1F0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001C1F4: lw          $v1, -0x7684($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7684);
    // 0x8001C1F8: beql        $v1, $zero, L_8001C20C
    if (ctx->r3 == 0) {
        // 0x8001C1FC: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_8001C20C;
    }
    goto skip_10;
    // 0x8001C1FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x8001C200: b           L_8001C20C
    // 0x8001C204: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001C20C;
    // 0x8001C204: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001C208: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_8001C20C:
    // 0x8001C20C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C210: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C214: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8001C218: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8001C21C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8001C220: jr          $ra
    // 0x8001C224: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    TRACE_RETURN()
    return;
    // 0x8001C224: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_8000A74C_B34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A74C: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x8000A750: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000A754: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000A758: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000A75C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A760: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000A76C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8000A770: sw          $a2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r6;
    // 0x8000A774: addiu       $s1, $a2, -0x1
    ctx->r17 = ADD32(ctx->r6, -0X1);
    // 0x8000A778: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x8000A77C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8000A780: addiu       $s2, $sp, 0xCC
    ctx->r18 = ADD32(ctx->r29, 0XCC);
    // 0x8000A784: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
L_8000A788:
    // 0x8000A788: subu        $t6, $s1, $ra
    ctx->r14 = SUB32(ctx->r17, ctx->r31);
    // 0x8000A78C: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8000A790: beql        $at, $zero, L_8000A7B8
    if (ctx->r1 == 0) {
        // 0x8000A794: addu        $t9, $ra, $s1
        ctx->r25 = ADD32(ctx->r31, ctx->r17);
            goto L_8000A7B8;
    }
    goto skip_0;
    // 0x8000A794: addu        $t9, $ra, $s1
    ctx->r25 = ADD32(ctx->r31, ctx->r17);
    skip_0:
    // 0x8000A798: beq         $t5, $zero, L_8000A8E8
    if (ctx->r13 == 0) {
        // 0x8000A79C: addiu       $t5, $t5, -0x1
        ctx->r13 = ADD32(ctx->r13, -0X1);
            goto L_8000A8E8;
    }
    // 0x8000A79C: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x8000A7A0: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x8000A7A4: addu        $t7, $s2, $v0
    ctx->r15 = ADD32(ctx->r18, ctx->r2);
    // 0x8000A7A8: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x8000A7AC: lw          $ra, 0x0($t7)
    ctx->r31 = MEM_W(ctx->r15, 0X0);
    // 0x8000A7B0: lw          $s1, 0x0($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X0);
    // 0x8000A7B4: addu        $t9, $ra, $s1
    ctx->r25 = ADD32(ctx->r31, ctx->r17);
L_8000A7B8:
    // 0x8000A7B8: bgez        $t9, L_8000A7C8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8000A7BC: sra         $t6, $t9, 1
        ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
            goto L_8000A7C8;
    }
    // 0x8000A7BC: sra         $t6, $t9, 1
    ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8000A7C0: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x8000A7C4: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8000A7C8:
    // 0x8000A7C8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000A7CC: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x8000A7D0: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x8000A7D4: sll         $t9, $ra, 1
    ctx->r25 = S32(ctx->r31 << 1);
    // 0x8000A7D8: lhu         $a2, 0x0($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X0);
    // 0x8000A7DC: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x8000A7E0: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x8000A7E4: addu        $v1, $s4, $t9
    ctx->r3 = ADD32(ctx->r20, ctx->r25);
    // 0x8000A7E8: addu        $a0, $s4, $t6
    ctx->r4 = ADD32(ctx->r20, ctx->r14);
L_8000A7EC:
    // 0x8000A7EC: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x8000A7F0: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000A7F4: beql        $at, $zero, L_8000A818
    if (ctx->r1 == 0) {
        // 0x8000A7F8: lhu         $v0, 0x0($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X0);
            goto L_8000A818;
    }
    goto skip_1;
    // 0x8000A7F8: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    skip_1:
    // 0x8000A7FC: lhu         $a1, 0x2($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X2);
L_8000A800:
    // 0x8000A800: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8000A804: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8000A808: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000A80C: bnel        $at, $zero, L_8000A800
    if (ctx->r1 != 0) {
        // 0x8000A810: lhu         $a1, 0x2($v1)
        ctx->r5 = MEM_HU(ctx->r3, 0X2);
            goto L_8000A800;
    }
    goto skip_2;
    // 0x8000A810: lhu         $a1, 0x2($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X2);
    skip_2:
    // 0x8000A814: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
L_8000A818:
    // 0x8000A818: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x8000A81C: addu        $t1, $s0, $t7
    ctx->r9 = ADD32(ctx->r16, ctx->r15);
    // 0x8000A820: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000A824: beql        $at, $zero, L_8000A848
    if (ctx->r1 == 0) {
        // 0x8000A828: slt         $at, $a3, $t0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_8000A848;
    }
    goto skip_3;
    // 0x8000A828: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    skip_3:
    // 0x8000A82C: lhu         $v0, -0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X2);
L_8000A830:
    // 0x8000A830: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8000A834: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x8000A838: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000A83C: bnel        $at, $zero, L_8000A830
    if (ctx->r1 != 0) {
        // 0x8000A840: lhu         $v0, -0x2($a0)
        ctx->r2 = MEM_HU(ctx->r4, -0X2);
            goto L_8000A830;
    }
    goto skip_4;
    // 0x8000A840: lhu         $v0, -0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X2);
    skip_4:
    // 0x8000A844: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
L_8000A848:
    // 0x8000A848: beq         $at, $zero, L_8000A880
    if (ctx->r1 == 0) {
        // 0x8000A84C: sll         $t8, $t0, 2
        ctx->r24 = S32(ctx->r8 << 2);
            goto L_8000A880;
    }
    // 0x8000A84C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8000A850: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8000A854: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8000A858: addu        $t2, $s0, $t8
    ctx->r10 = ADD32(ctx->r16, ctx->r24);
    // 0x8000A85C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8000A860: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x8000A864: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8000A868: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8000A86C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8000A870: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8000A874: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x8000A878: b           L_8000A7EC
    // 0x8000A87C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
        goto L_8000A7EC;
    // 0x8000A87C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
L_8000A880:
    // 0x8000A880: subu        $v0, $s1, $t0
    ctx->r2 = SUB32(ctx->r17, ctx->r8);
    // 0x8000A884: subu        $v1, $a3, $ra
    ctx->r3 = SUB32(ctx->r7, ctx->r31);
    // 0x8000A888: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8000A88C: beq         $at, $zero, L_8000A8BC
    if (ctx->r1 == 0) {
        // 0x8000A890: slti        $at, $v1, 0xB
        ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_8000A8BC;
    }
    // 0x8000A890: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x8000A894: bne         $at, $zero, L_8000A8B4
    if (ctx->r1 != 0) {
        // 0x8000A898: sll         $v0, $t5, 2
        ctx->r2 = S32(ctx->r13 << 2);
            goto L_8000A8B4;
    }
    // 0x8000A898: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x8000A89C: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x8000A8A0: sw          $ra, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r31;
    // 0x8000A8A4: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x8000A8A8: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x8000A8AC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8000A8B0: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_8000A8B4:
    // 0x8000A8B4: b           L_8000A788
    // 0x8000A8B8: addiu       $ra, $t0, 0x1
    ctx->r31 = ADD32(ctx->r8, 0X1);
        goto L_8000A788;
    // 0x8000A8B8: addiu       $ra, $t0, 0x1
    ctx->r31 = ADD32(ctx->r8, 0X1);
L_8000A8BC:
    // 0x8000A8BC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8000A8C0: bne         $at, $zero, L_8000A8E0
    if (ctx->r1 != 0) {
        // 0x8000A8C4: sll         $v0, $t5, 2
        ctx->r2 = S32(ctx->r13 << 2);
            goto L_8000A8E0;
    }
    // 0x8000A8C4: sll         $v0, $t5, 2
    ctx->r2 = S32(ctx->r13 << 2);
    // 0x8000A8C8: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x8000A8CC: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x8000A8D0: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8000A8D4: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x8000A8D8: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x8000A8DC: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_8000A8E0:
    // 0x8000A8E0: b           L_8000A788
    // 0x8000A8E4: addiu       $s1, $a3, -0x1
    ctx->r17 = ADD32(ctx->r7, -0X1);
        goto L_8000A788;
    // 0x8000A8E4: addiu       $s1, $a3, -0x1
    ctx->r17 = ADD32(ctx->r7, -0X1);
L_8000A8E8:
    // 0x8000A8E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000A8EC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8000A8F0: jal         0x8000A680
    // 0x8000A8F4: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    func_8000A680_B280(rdram, ctx);
        goto after_0;
    // 0x8000A8F4: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    after_0:
    // 0x8000A8F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000A8FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A900: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A904: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A908: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000A90C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000A910: jr          $ra
    // 0x8000A914: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    TRACE_RETURN()
    return;
    // 0x8000A914: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_8000E1A0_EDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E1A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000E1A4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8000E1A8: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x8000E1AC: lbu         $t7, 0x8C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8C);
    // 0x8000E1B0: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8000E1B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000E1B8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000E1BC: sb          $t8, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = ctx->r24;
    // 0x8000E1C0: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x8000E1C4: andi        $t0, $t8, 0xFF
    ctx->r8 = ctx->r24 & 0XFF;
    // 0x8000E1C8: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000E1CC: beq         $at, $zero, L_8000E234
    if (ctx->r1 == 0) {
        // 0x8000E1D0: sll         $t9, $a2, 2
        ctx->r25 = S32(ctx->r6 << 2);
            goto L_8000E234;
    }
    // 0x8000E1D0: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8000E1D4: lbu         $t1, 0x90($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X90);
    // 0x8000E1D8: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x8000E1DC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8000E1E0: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x8000E1E4: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8000E1E8: bne         $at, $zero, L_8000E1FC
    if (ctx->r1 != 0) {
        // 0x8000E1EC: sb          $t2, 0x90($v0)
        MEM_B(0X90, ctx->r2) = ctx->r10;
            goto L_8000E1FC;
    }
    // 0x8000E1EC: sb          $t2, 0x90($v0)
    MEM_B(0X90, ctx->r2) = ctx->r10;
    // 0x8000E1F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8000E1F4: sb          $zero, 0x90($v0)
    MEM_B(0X90, ctx->r2) = 0;
    // 0x8000E1F8: andi        $a1, $zero, 0xFF
    ctx->r5 = 0 & 0XFF;
L_8000E1FC:
    // 0x8000E1FC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000E200: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x8000E204: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000E208: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8000E20C: lw          $a3, 0x0($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X0);
    // 0x8000E210: sb          $zero, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = 0;
    // 0x8000E214: lw          $t0, 0x36D0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X36D0);
    // 0x8000E218: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x8000E21C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8000E220: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8000E224: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8000E228: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8000E22C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x8000E230: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
L_8000E234:
    // 0x8000E234: jr          $ra
    // 0x8000E238: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8000E238: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80033A3C_3463C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033A3C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80033A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033A44: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80033A48: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80033A4C: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x80033A50: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80033A54: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80033A58: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80033A5C: jal         0x80003F30
    // 0x80033A60: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x80033A60: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x80033A64: lhu         $a0, 0x66($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X66);
    // 0x80033A68: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80033A6C: jal         0x80003F30
    // 0x80033A70: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x80033A70: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80033A74: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x80033A78: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80033A7C: jal         0x80003F30
    // 0x80033A80: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x80033A80: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80033A84: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80033A88: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80033A8C: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x80033A90: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x80033A94: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80033A98: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x80033A9C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80033AA0: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80033AA4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80033AA8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80033AAC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80033AB0: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80033AB4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80033AB8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80033ABC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80033AC0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80033AC4: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80033AC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80033ACC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80033AD0: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80033AD4: nop

    // 0x80033AD8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80033ADC: nop

    // 0x80033AE0: mul.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80033AE4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80033AE8: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x80033AEC: mul.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80033AF0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80033AF4: mul.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80033AF8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80033AFC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80033B00: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80033B04: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80033B08: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80033B0C: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80033B10: nop

    // 0x80033B14: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80033B18: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80033B1C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80033B20: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80033B24: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80033B28: nop

    // 0x80033B2C: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80033B30: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80033B34: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80033B38: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80033B3C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80033B40: mul.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80033B44: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80033B48: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80033B4C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80033B50: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80033B54: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80033B58: mul.s       $f6, $f16, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80033B5C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80033B60: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80033B64: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80033B68: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80033B6C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80033B70: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80033B74: nop

    // 0x80033B78: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80033B7C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80033B80: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80033B84: nop

    // 0x80033B88: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80033B8C: nop

    // 0x80033B90: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80033B94: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80033B98: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80033B9C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80033BA0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80033BA4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80033BA8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80033BAC: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80033BB0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80033BB4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80033BB8: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80033BBC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80033BC0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80033BC4: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80033BC8: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x80033BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033BD0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80033BD4: jr          $ra
    // 0x80033BD8: nop

    TRACE_RETURN()
    return;
    // 0x80033BD8: nop

;}
RECOMP_FUNC void func_8000A0F0_ACF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000A0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A0F8: jal         0x8000A130
    // 0x8000A0FC: nop

    func_8000A130_AD30(rdram, ctx);
        goto after_0;
    // 0x8000A0FC: nop

    after_0:
    // 0x8000A100: jal         0x8000A4F8
    // 0x8000A104: nop

    func_8000A4F8_B0F8(rdram, ctx);
        goto after_1;
    // 0x8000A104: nop

    after_1:
    // 0x8000A108: jal         0x8000A344
    // 0x8000A10C: nop

    func_8000A344_AF44(rdram, ctx);
        goto after_2;
    // 0x8000A10C: nop

    after_2:
    // 0x8000A110: jal         0x8000A430
    // 0x8000A114: nop

    func_8000A430_B030(rdram, ctx);
        goto after_3;
    // 0x8000A114: nop

    after_3:
    // 0x8000A118: jal         0x8000A614
    // 0x8000A11C: nop

    func_8000A614_B214(rdram, ctx);
        goto after_4;
    // 0x8000A11C: nop

    after_4:
    // 0x8000A120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000A128: jr          $ra
    // 0x8000A12C: nop

    TRACE_RETURN()
    return;
    // 0x8000A12C: nop

;}
RECOMP_FUNC void __cosf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800419B0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x800419B4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x800419B8: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800419BC: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800419C0: sra         $t6, $v0, 22
    ctx->r14 = S32(SIGNED(ctx->r2) >> 22);
    // 0x800419C4: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x800419C8: slti        $at, $t7, 0x136
    ctx->r1 = SIGNED(ctx->r15) < 0X136 ? 1 : 0;
    // 0x800419CC: beql        $at, $zero, L_80041AF4
    if (ctx->r1 == 0) {
        // 0x800419D0: c.eq.s      $f10, $f10
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
            goto L_80041AF4;
    }
    goto skip_0;
    // 0x800419D0: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
    skip_0:
    // 0x800419D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800419D8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800419DC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800419E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800419E4: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800419E8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800419EC: bc1fl       L_80041A00
    if (!c1cs) {
        // 0x800419F0: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_80041A00;
    }
    goto skip_1;
    // 0x800419F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
    // 0x800419F4: b           L_80041A00
    // 0x800419F8: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_80041A00;
    // 0x800419F8: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    // 0x800419FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80041A00:
    // 0x80041A00: ldc1        $f8, -0x2D78($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2D78);
    // 0x80041A04: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x80041A08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80041A0C: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x80041A10: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80041A14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80041A18: add.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = ctx->f10.d + ctx->f18.d;
    // 0x80041A1C: c.le.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d <= ctx->f14.d;
    // 0x80041A20: nop

    // 0x80041A24: bc1fl       L_80041A44
    if (!c1cs) {
        // 0x80041A28: sub.d       $f10, $f14, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
            goto L_80041A44;
    }
    goto skip_2;
    // 0x80041A28: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
    skip_2:
    // 0x80041A2C: add.d       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f14.d + ctx->f18.d;
    // 0x80041A30: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80041A34: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80041A38: b           L_80041A54
    // 0x80041A3C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
        goto L_80041A54;
    // 0x80041A3C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80041A40: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
L_80041A44:
    // 0x80041A44: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80041A48: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80041A4C: nop

    // 0x80041A50: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
L_80041A54:
    // 0x80041A54: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041A58: ldc1        $f10, -0x2D70($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2D70);
    // 0x80041A5C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80041A60: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041A64: ldc1        $f6, -0x2D68($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2D68);
    // 0x80041A68: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80041A6C: addiu       $v1, $v1, -0x2DA0
    ctx->r3 = ADD32(ctx->r3, -0X2DA0);
    // 0x80041A70: sub.d       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f8.d - ctx->f18.d;
    // 0x80041A74: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80041A78: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80041A7C: ldc1        $f10, 0x20($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X20);
    // 0x80041A80: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80041A84: ldc1        $f6, 0x18($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X18);
    // 0x80041A88: sub.d       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f12.d - ctx->f4.d;
    // 0x80041A8C: sub.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f2.d - ctx->f8.d;
    // 0x80041A90: mul.d       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f14.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80041A94: nop

    // 0x80041A98: mul.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x80041A9C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80041AA0: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x80041AA4: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x80041AA8: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x80041AAC: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x80041AB0: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x80041AB4: bne         $t0, $zero, L_80041AD4
    if (ctx->r8 != 0) {
        // 0x80041AB8: add.d       $f16, $f10, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
            goto L_80041AD4;
    }
    // 0x80041AB8: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x80041ABC: mul.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x80041AC0: nop

    // 0x80041AC4: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x80041AC8: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x80041ACC: jr          $ra
    // 0x80041AD0: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    TRACE_RETURN()
    return;
    // 0x80041AD0: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_80041AD4:
    // 0x80041AD4: mul.d       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x80041AD8: nop

    // 0x80041ADC: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80041AE0: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x80041AE4: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80041AE8: jr          $ra
    // 0x80041AEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80041AEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80041AF0: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
L_80041AF4:
    // 0x80041AF4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041AF8: bc1t        L_80041B0C
    if (c1cs) {
        // 0x80041AFC: nop
    
            goto L_80041B0C;
    }
    // 0x80041AFC: nop

    // 0x80041B00: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80041B04: jr          $ra
    // 0x80041B08: lwc1        $f0, -0x2BA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2BA0);
    TRACE_RETURN()
    return;
    // 0x80041B08: lwc1        $f0, -0x2BA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2BA0);
L_80041B0C:
    // 0x80041B0C: lwc1        $f0, -0x2D60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2D60);
    // 0x80041B10: jr          $ra
    // 0x80041B14: nop

    TRACE_RETURN()
    return;
    // 0x80041B14: nop

;}
RECOMP_FUNC void func_80034B24_35724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034B28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034B2C: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x80034B30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80034B34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034B40: jal         0x80034B58
    // 0x80034B44: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80034B58_35758(rdram, ctx);
        goto after_0;
    // 0x80034B44: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80034B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034B50: jr          $ra
    // 0x80034B54: nop

    TRACE_RETURN()
    return;
    // 0x80034B54: nop

;}
RECOMP_FUNC void func_8003A138_3AD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A138: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A13C: lw          $v0, 0xA20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA20);
    // 0x8003A140: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8003A144: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A148: beq         $v0, $at, L_8003A184
    if (ctx->r2 == ctx->r1) {
        // 0x8003A14C: addiu       $v1, $v1, 0x9D3
        ctx->r3 = ADD32(ctx->r3, 0X9D3);
            goto L_8003A184;
    }
    // 0x8003A14C: addiu       $v1, $v1, 0x9D3
    ctx->r3 = ADD32(ctx->r3, 0X9D3);
    // 0x8003A150: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A154: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8003A158: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8003A15C: bne         $t6, $zero, L_8003A16C
    if (ctx->r14 != 0) {
        // 0x8003A160: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003A16C;
    }
    // 0x8003A160: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A164: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8003A168: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_8003A16C:
    // 0x8003A16C: lbu         $t9, -0x19FF($t8)
    ctx->r25 = MEM_BU(ctx->r24, -0X19FF);
    // 0x8003A170: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A174: addiu       $v1, $v1, 0x9D1
    ctx->r3 = ADD32(ctx->r3, 0X9D1);
    // 0x8003A178: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8003A17C: jr          $ra
    // 0x8003A180: sb          $t9, 0x9D2($at)
    MEM_B(0X9D2, ctx->r1) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8003A180: sb          $t9, 0x9D2($at)
    MEM_B(0X9D2, ctx->r1) = ctx->r25;
L_8003A184:
    // 0x8003A184: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A188: addiu       $v1, $v1, 0x9D6
    ctx->r3 = ADD32(ctx->r3, 0X9D6);
    // 0x8003A18C: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A190: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003A194: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x8003A198: bne         $t0, $zero, L_8003A1A8
    if (ctx->r8 != 0) {
        // 0x8003A19C: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003A1A8;
    }
    // 0x8003A19C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A1A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8003A1A4: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_8003A1A8:
    // 0x8003A1A8: lbu         $t3, -0x19FF($t2)
    ctx->r11 = MEM_BU(ctx->r10, -0X19FF);
    // 0x8003A1AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003A1B0: addiu       $v1, $v1, 0x9D4
    ctx->r3 = ADD32(ctx->r3, 0X9D4);
    // 0x8003A1B4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x8003A1B8: sb          $t3, 0x9D5($at)
    MEM_B(0X9D5, ctx->r1) = ctx->r11;
    // 0x8003A1BC: jr          $ra
    // 0x8003A1C0: nop

    TRACE_RETURN()
    return;
    // 0x8003A1C0: nop

;}
RECOMP_FUNC void func_80036860_37460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036860: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80036864: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80036868: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003686C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036870: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x80036874: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80036878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003687C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80036880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80036884: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80036888: lw          $t8, 0x3014($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3014);
    // 0x8003688C: beql        $t8, $zero, L_800368FC
    if (ctx->r24 == 0) {
        // 0x80036890: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800368FC;
    }
    goto skip_0;
    // 0x80036890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80036894: jal         0x80041770
    // 0x80036898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x80036898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8003689C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800368A0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x800368A4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800368A8: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x800368AC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x800368B0: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x800368B4: lw          $v1, 0x3014($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X3014);
    // 0x800368B8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x800368BC: lbu         $a1, 0x10($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X10);
    // 0x800368C0: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800368C4: beq         $at, $zero, L_800368D8
    if (ctx->r1 == 0) {
        // 0x800368C8: subu        $t1, $a1, $a0
        ctx->r9 = SUB32(ctx->r5, ctx->r4);
            goto L_800368D8;
    }
    // 0x800368C8: subu        $t1, $a1, $a0
    ctx->r9 = SUB32(ctx->r5, ctx->r4);
    // 0x800368CC: sb          $t1, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r9;
    // 0x800368D0: b           L_800368F8
    // 0x800368D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800368F8;
    // 0x800368D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800368D8:
    // 0x800368D8: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
    // 0x800368DC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800368E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800368E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800368E8: addu        $t3, $t2, $a3
    ctx->r11 = ADD32(ctx->r10, ctx->r7);
    // 0x800368EC: jal         0x80036158
    // 0x800368F0: lw          $a1, 0x3014($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3014);
    func_80036158_36D58(rdram, ctx);
        goto after_1;
    // 0x800368F0: lw          $a1, 0x3014($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3014);
    after_1:
    // 0x800368F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800368F8:
    // 0x800368F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800368FC:
    // 0x800368FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036900: jr          $ra
    // 0x80036904: nop

    TRACE_RETURN()
    return;
    // 0x80036904: nop

;}
RECOMP_FUNC void func_800145B4_151B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800145B4: ori         $at, $zero, 0x8770
    ctx->r1 = 0 | 0X8770;
    // 0x800145B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800145BC: sltu        $at, $a0, $at
    ctx->r1 = ctx->r4 < ctx->r1 ? 1 : 0;
    // 0x800145C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800145C4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800145C8: bne         $at, $zero, L_800145D8
    if (ctx->r1 != 0) {
        // 0x800145CC: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800145D8;
    }
    // 0x800145CC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800145D0: b           L_80014688
    // 0x800145D4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80014688;
    // 0x800145D4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800145D8:
    // 0x800145D8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x800145DC: sltu        $at, $a3, $at
    ctx->r1 = ctx->r7 < ctx->r1 ? 1 : 0;
    // 0x800145E0: bne         $at, $zero, L_80014680
    if (ctx->r1 != 0) {
        // 0x800145E4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80014680;
    }
    // 0x800145E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800145E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800145EC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800145F0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x800145F4: jal         0x80014698
    // 0x800145F8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_80014698_15298(rdram, ctx);
        goto after_0;
    // 0x800145F8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x800145FC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80014600: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80014604: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80014608: beq         $v0, $zero, L_80014678
    if (ctx->r2 == 0) {
        // 0x8001460C: addu        $t0, $a1, $v0
        ctx->r8 = ADD32(ctx->r5, ctx->r2);
            goto L_80014678;
    }
    // 0x8001460C: addu        $t0, $a1, $v0
    ctx->r8 = ADD32(ctx->r5, ctx->r2);
    // 0x80014610: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80014614: addiu       $v0, $v0, -0x3A2C
    ctx->r2 = ADD32(ctx->r2, -0X3A2C);
    // 0x80014618: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8001461C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80014620: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80014624: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80014628: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001462C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80014630: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80014634: jal         0x80001640
    // 0x80014638: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    func_80001640_2240(rdram, ctx);
        goto after_1;
    // 0x80014638: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    after_1:
    // 0x8001463C: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x80014640: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80014644: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80014648: sb          $t8, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r24;
    // 0x8001464C: ori         $at, $zero, 0x818D
    ctx->r1 = 0 | 0X818D;
    // 0x80014650: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80014654: bne         $a3, $at, L_80014678
    if (ctx->r7 != ctx->r1) {
        // 0x80014658: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_80014678;
    }
    // 0x80014658: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001465C: beq         $a2, $zero, L_80014678
    if (ctx->r6 == 0) {
        // 0x80014660: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80014678;
    }
    // 0x80014660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014664:
    // 0x80014664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80014668: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8001466C: sltu        $at, $t9, $a2
    ctx->r1 = ctx->r25 < ctx->r6 ? 1 : 0;
    // 0x80014670: bne         $at, $zero, L_80014664
    if (ctx->r1 != 0) {
        // 0x80014674: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80014664;
    }
    // 0x80014674: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80014678:
    // 0x80014678: b           L_80014688
    // 0x8001467C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80014688;
    // 0x8001467C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80014680:
    // 0x80014680: jal         0x80001C00
    // 0x80014684: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80001C00_2800(rdram, ctx);
        goto after_2;
    // 0x80014684: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
L_80014688:
    // 0x80014688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001468C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80014690: jr          $ra
    // 0x80014694: nop

    TRACE_RETURN()
    return;
    // 0x80014694: nop

;}
RECOMP_FUNC void func_80005A64_6664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005A64: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80005A68: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80005A6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80005A70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80005A74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80005A78: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80005A7C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80005A80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80005A84: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x80005A88: lui         $s3, 0x3
    ctx->r19 = S32(0X3 << 16);
    // 0x80005A8C: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x80005A90: lui         $fp, 0xC
    ctx->r30 = S32(0XC << 16);
    // 0x80005A94: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80005A98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80005A9C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80005AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80005AA4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80005AA8: ori         $fp, $fp, 0x5F80
    ctx->r30 = ctx->r30 | 0X5F80;
    // 0x80005AAC: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x80005AB0: ori         $s3, $s3, 0x8000
    ctx->r19 = ctx->r19 | 0X8000;
    // 0x80005AB4: addiu       $s2, $s2, -0x3A38
    ctx->r18 = ADD32(ctx->r18, -0X3A38);
    // 0x80005AB8: lui         $s1, 0x2000
    ctx->r17 = S32(0X2000 << 16);
    // 0x80005ABC: lui         $s5, 0x4000
    ctx->r21 = S32(0X4000 << 16);
    // 0x80005AC0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_80005AC4:
    // 0x80005AC4: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x80005AC8: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80005ACC: addu        $s7, $t7, $fp
    ctx->r23 = ADD32(ctx->r15, ctx->r30);
    // 0x80005AD0: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80005AD4: beq         $v0, $zero, L_80005B38
    if (ctx->r2 == 0) {
        // 0x80005AD8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80005B38;
    }
    // 0x80005AD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80005ADC:
    // 0x80005ADC: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80005AE0: and         $t8, $a2, $s1
    ctx->r24 = ctx->r6 & ctx->r17;
    // 0x80005AE4: beql        $t8, $zero, L_80005B10
    if (ctx->r24 == 0) {
        // 0x80005AE8: and         $a0, $a2, $s4
        ctx->r4 = ctx->r6 & ctx->r20;
            goto L_80005B10;
    }
    goto skip_0;
    // 0x80005AE8: and         $a0, $a2, $s4
    ctx->r4 = ctx->r6 & ctx->r20;
    skip_0:
    // 0x80005AEC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80005AF0: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    // 0x80005AF4: lh          $v0, 0x2DB4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2DB4);
    // 0x80005AF8: lh          $v1, 0x2DB2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2DB2);
    // 0x80005AFC: bnel        $v0, $v1, L_80005B10
    if (ctx->r2 != ctx->r3) {
        // 0x80005B00: and         $a0, $a2, $s4
        ctx->r4 = ctx->r6 & ctx->r20;
            goto L_80005B10;
    }
    goto skip_1;
    // 0x80005B00: and         $a0, $a2, $s4
    ctx->r4 = ctx->r6 & ctx->r20;
    skip_1:
L_80005B04:
    // 0x80005B04: beq         $v0, $v1, L_80005B04
    if (ctx->r2 == ctx->r3) {
        // 0x80005B08: nop
    
            goto L_80005B04;
    }
    // 0x80005B08: nop

    // 0x80005B0C: and         $a0, $a2, $s4
    ctx->r4 = ctx->r6 & ctx->r20;
L_80005B10:
    // 0x80005B10: jal         0x80001C00
    // 0x80005B14: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80005B14: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x80005B18: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80005B1C: and         $t1, $t0, $s5
    ctx->r9 = ctx->r8 & ctx->r21;
    // 0x80005B20: bnel        $t1, $zero, L_80005B34
    if (ctx->r9 != 0) {
        // 0x80005B24: sw          $zero, 0x0($s7)
        MEM_W(0X0, ctx->r23) = 0;
            goto L_80005B34;
    }
    goto skip_2;
    // 0x80005B24: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
    skip_2:
    // 0x80005B28: b           L_80005ADC
    // 0x80005B2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80005ADC;
    // 0x80005B2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80005B30: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
L_80005B34:
    // 0x80005B34: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_80005B38:
    // 0x80005B38: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80005B3C: andi        $t2, $s6, 0xFF
    ctx->r10 = ctx->r22 & 0XFF;
    // 0x80005B40: slti        $at, $t2, 0x8
    ctx->r1 = SIGNED(ctx->r10) < 0X8 ? 1 : 0;
    // 0x80005B44: bne         $at, $zero, L_80005AC4
    if (ctx->r1 != 0) {
        // 0x80005B48: or          $s6, $t2, $zero
        ctx->r22 = ctx->r10 | 0;
            goto L_80005AC4;
    }
    // 0x80005B48: or          $s6, $t2, $zero
    ctx->r22 = ctx->r10 | 0;
    // 0x80005B4C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005B50: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80005B54: sb          $zero, -0x4F8C($at)
    MEM_B(-0X4F8C, ctx->r1) = 0;
    // 0x80005B58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80005B5C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80005B60: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80005B64: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80005B68: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80005B6C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80005B70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80005B74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80005B78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80005B7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80005B80: jr          $ra
    // 0x80005B84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80005B84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800085BC_91BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800085BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800085C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800085C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800085C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800085CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800085D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800085D4: andi        $s2, $a2, 0xFF
    ctx->r18 = ctx->r6 & 0XFF;
    // 0x800085D8: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x800085DC: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x800085E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800085E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800085E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800085EC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800085F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800085F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800085F8:
    // 0x800085F8: addu        $a2, $s2, $s1
    ctx->r6 = ADD32(ctx->r18, ctx->r17);
    // 0x800085FC: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80008600: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80008604: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x80008608: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8000860C: jal         0x800084F4
    // 0x80008610: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    func_800084F4_90F4(rdram, ctx);
        goto after_0;
    // 0x80008610: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_0:
    // 0x80008614: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80008618: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8000861C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80008620: bne         $at, $zero, L_800085F8
    if (ctx->r1 != 0) {
        // 0x80008624: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800085F8;
    }
    // 0x80008624: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80008628: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000862C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80008630: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80008634: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80008638: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000863C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008640: jr          $ra
    // 0x80008644: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80008644: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003B450_3C050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B450: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003B454: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003B458: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003B45C: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003B460: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8003B464: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8003B468: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003B46C: sb          $t7, 0x1D($t8)
    MEM_B(0X1D, ctx->r24) = ctx->r15;
    // 0x8003B470: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8003B474: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003B478: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003B47C: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8003B480: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003B484: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x8003B488: sb          $t2, 0x1C($t3)
    MEM_B(0X1C, ctx->r11) = ctx->r10;
    // 0x8003B48C: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8003B490: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003B494: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003B498: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8003B49C: lbu         $t6, 0x1C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1C);
    // 0x8003B4A0: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x8003B4A4: lbu         $t0, 0x1D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1D);
    // 0x8003B4A8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8003B4AC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8003B4B0: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x8003B4B4: div         $zero, $v1, $t0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r8)));
    // 0x8003B4B8: mflo        $t1
    ctx->r9 = lo;
    // 0x8003B4BC: sh          $t1, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r9;
    // 0x8003B4C0: bne         $t0, $zero, L_8003B4CC
    if (ctx->r8 != 0) {
        // 0x8003B4C4: nop
    
            goto L_8003B4CC;
    }
    // 0x8003B4C4: nop

    // 0x8003B4C8: break       7
    do_break(2147726536);
L_8003B4CC:
    // 0x8003B4CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003B4D0: bne         $t0, $at, L_8003B4E4
    if (ctx->r8 != ctx->r1) {
        // 0x8003B4D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003B4E4;
    }
    // 0x8003B4D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003B4D8: bne         $v1, $at, L_8003B4E4
    if (ctx->r3 != ctx->r1) {
        // 0x8003B4DC: nop
    
            goto L_8003B4E4;
    }
    // 0x8003B4DC: nop

    // 0x8003B4E0: break       6
    do_break(2147726560);
L_8003B4E4:
    // 0x8003B4E4: jr          $ra
    // 0x8003B4E8: nop

    TRACE_RETURN()
    return;
    // 0x8003B4E8: nop

;}
RECOMP_FUNC void func_80035204_35E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035204: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80035208: lw          $t6, -0x254C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X254C);
    // 0x8003520C: jr          $ra
    // 0x80035210: sw          $a0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80035210: sw          $a0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_80003428_4028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003428: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000342C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80003430: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80003434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003438: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000343C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003444: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80003448: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000344C: sb          $a1, -0x5222($at)
    MEM_B(-0X5222, ctx->r1) = ctx->r5;
    // 0x80003450: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80003454: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003458: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000345C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80003460: jal         0x80003380
    // 0x80003464: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    func_80003380_3F80(rdram, ctx);
        goto after_0;
    // 0x80003464: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    after_0:
    // 0x80003468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000346C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003470: jr          $ra
    // 0x80003474: nop

    TRACE_RETURN()
    return;
    // 0x80003474: nop

;}
RECOMP_FUNC void func_80020364_20F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020364: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80020368: addiu       $a1, $a1, 0x7FC0
    ctx->r5 = ADD32(ctx->r5, 0X7FC0);
    // 0x8002036C: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80020370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020374: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80020378: beq         $t6, $zero, L_800203A0
    if (ctx->r14 == 0) {
        // 0x8002037C: lui         $t3, 0x4
        ctx->r11 = S32(0X4 << 16);
            goto L_800203A0;
    }
    // 0x8002037C: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x80020380: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80020384:
    // 0x80020384: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80020388: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8002038C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80020390: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80020394: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80020398: bnel        $t0, $zero, L_80020384
    if (ctx->r8 != 0) {
        // 0x8002039C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80020384;
    }
    goto skip_0;
    // 0x8002039C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_800203A0:
    // 0x800203A0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x800203A4: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x800203A8: addu        $t2, $a1, $t1
    ctx->r10 = ADD32(ctx->r5, ctx->r9);
    // 0x800203AC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x800203B0: lw          $t3, -0x4FCC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4FCC);
    // 0x800203B4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x800203B8: sltu        $at, $t3, $a0
    ctx->r1 = ctx->r11 < ctx->r4 ? 1 : 0;
    // 0x800203BC: beq         $at, $zero, L_800203CC
    if (ctx->r1 == 0) {
        // 0x800203C0: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_800203CC;
    }
    // 0x800203C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800203C4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800203C8: sw          $a0, -0x4FCC($at)
    MEM_W(-0X4FCC, ctx->r1) = ctx->r4;
L_800203CC:
    // 0x800203CC: jr          $ra
    // 0x800203D0: nop

    TRACE_RETURN()
    return;
    // 0x800203D0: nop

;}
RECOMP_FUNC void func_80035244_35E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035244: jr          $ra
    // 0x80035248: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80035248: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8001B918_1C518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B91C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001B920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B924: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x8001B928: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001B92C: lw          $a3, 0x28($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X28);
    // 0x8001B930: lw          $a2, 0x2C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X2C);
    // 0x8001B934: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8001B938: jal         0x8001B950
    // 0x8001B93C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_8001B950_1C550(rdram, ctx);
        goto after_0;
    // 0x8001B93C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x8001B940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B948: jr          $ra
    // 0x8001B94C: nop

    TRACE_RETURN()
    return;
    // 0x8001B94C: nop

;}
RECOMP_FUNC void alRaw16Pull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EE84: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8004EE88: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8004EE8C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004EE90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8004EE94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004EE98: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8004EE9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004EEA0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8004EEA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004EEA8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8004EEAC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x8004EEB0: bne         $a2, $zero, L_8004EEC0
    if (ctx->r6 != 0) {
        // 0x8004EEB4: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_8004EEC0;
    }
    // 0x8004EEB4: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x8004EEB8: b           L_8004F214
    // 0x8004EEBC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8004F214;
    // 0x8004EEBC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8004EEC0:
    // 0x8004EEC0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8004EEC4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8004EEC8: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x8004EECC: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x8004EED0: beql        $at, $zero, L_8004F0E4
    if (ctx->r1 == 0) {
        // 0x8004EED4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_8004F0E4;
    }
    goto skip_0;
    // 0x8004EED4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x8004EED8: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8004EEDC: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x8004EEE0: beql        $t7, $zero, L_8004F0E4
    if (ctx->r15 == 0) {
        // 0x8004EEE4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_8004F0E4;
    }
    goto skip_1;
    // 0x8004EEE4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x8004EEE8: blez        $s2, L_8004EF64
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004EEEC: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_8004EF64;
    }
    // 0x8004EEEC: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8004EEF0: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8004EEF4: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8004EEF8: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8004EEFC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004EF00: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004EF04: jalr        $t9
    // 0x8004EF08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004EF08: nop

    after_0:
    // 0x8004EF0C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8004EF10: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8004EF14: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8004EF18: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x8004EF1C: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x8004EF20: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x8004EF24: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x8004EF28: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004EF2C: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x8004EF30: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8004EF34: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8004EF38: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8004EF3C: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8004EF40: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004EF44: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x8004EF48: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x8004EF4C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8004EF50: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8004EF54: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8004EF58: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8004EF5C: b           L_8004EF68
    // 0x8004EF60: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8004EF68;
    // 0x8004EF60: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8004EF64:
    // 0x8004EF64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8004EF68:
    // 0x8004EF68: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x8004EF6C: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004EF70: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x8004EF74: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x8004EF78: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x8004EF7C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8004EF80: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004EF84: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8004EF88: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8004EF8C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004EF90: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x8004EF94: beq         $at, $zero, L_8004F0BC
    if (ctx->r1 == 0) {
        // 0x8004EF98: lh          $t0, 0x0($t2)
        ctx->r8 = MEM_H(ctx->r10, 0X0);
            goto L_8004F0BC;
    }
    // 0x8004EF98: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x8004EF9C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_8004EFA0:
    // 0x8004EFA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EFA4: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x8004EFA8: beq         $v0, $at, L_8004EFBC
    if (ctx->r2 == ctx->r1) {
        // 0x8004EFAC: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_8004EFBC;
    }
    // 0x8004EFAC: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8004EFB0: beq         $v0, $zero, L_8004EFBC
    if (ctx->r2 == 0) {
        // 0x8004EFB4: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_8004EFBC;
    }
    // 0x8004EFB4: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x8004EFB8: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
L_8004EFBC:
    // 0x8004EFBC: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x8004EFC0: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x8004EFC4: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x8004EFC8: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x8004EFCC: beq         $at, $zero, L_8004EFDC
    if (ctx->r1 == 0) {
        // 0x8004EFD0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8004EFDC;
    }
    // 0x8004EFD0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004EFD4: b           L_8004EFDC
    // 0x8004EFD8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_8004EFDC;
    // 0x8004EFD8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_8004EFDC:
    // 0x8004EFDC: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8004EFE0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8004EFE4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8004EFE8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8004EFEC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004EFF0: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8004EFF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004EFF8: jalr        $t9
    // 0x8004EFFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8004EFFC: nop

    after_1:
    // 0x8004F000: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8004F004: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x8004F008: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8004F00C: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x8004F010: beq         $v1, $zero, L_8004F024
    if (ctx->r3 == 0) {
        // 0x8004F014: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_8004F024;
    }
    // 0x8004F014: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x8004F018: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8004F01C: b           L_8004F028
    // 0x8004F020: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
        goto L_8004F028;
    // 0x8004F020: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
L_8004F024:
    // 0x8004F024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8004F028:
    // 0x8004F028: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x8004F02C: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x8004F030: subu        $t5, $a3, $t4
    ctx->r13 = SUB32(ctx->r7, ctx->r12);
    // 0x8004F034: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8004F038: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8004F03C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004F040: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x8004F044: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8004F048: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x8004F04C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8004F050: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004F054: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8004F058: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8004F05C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x8004F060: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x8004F064: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8004F068: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8004F06C: bne         $a1, $zero, L_8004F078
    if (ctx->r5 != 0) {
        // 0x8004F070: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8004F078;
    }
    // 0x8004F070: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8004F074: beq         $a2, $zero, L_8004F0B0
    if (ctx->r6 == 0) {
        // 0x8004F078: addu        $t3, $t0, $a1
        ctx->r11 = ADD32(ctx->r8, ctx->r5);
            goto L_8004F0B0;
    }
L_8004F078:
    // 0x8004F078: addu        $t3, $t0, $a1
    ctx->r11 = ADD32(ctx->r8, ctx->r5);
    // 0x8004F07C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F080: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F084: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8004F088: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8004F08C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8004F090: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x8004F094: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x8004F098: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8004F09C: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x8004F0A0: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x8004F0A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8004F0A8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8004F0AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8004F0B0:
    // 0x8004F0B0: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004F0B4: bnel        $at, $zero, L_8004EFA0
    if (ctx->r1 != 0) {
        // 0x8004F0B8: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_8004EFA0;
    }
    goto skip_2;
    // 0x8004F0B8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_8004F0BC:
    // 0x8004F0BC: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x8004F0C0: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8004F0C4: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x8004F0C8: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x8004F0CC: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004F0D0: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x8004F0D4: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x8004F0D8: b           L_8004F214
    // 0x8004F0DC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8004F214;
    // 0x8004F0DC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8004F0E0: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_8004F0E4:
    // 0x8004F0E4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x8004F0E8: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x8004F0EC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8004F0F0: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8004F0F4: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x8004F0F8: subu        $t3, $v1, $t8
    ctx->r11 = SUB32(ctx->r3, ctx->r24);
    // 0x8004F0FC: subu        $s2, $t3, $t4
    ctx->r18 = SUB32(ctx->r11, ctx->r12);
    // 0x8004F100: bgezl       $s2, L_8004F110
    if (SIGNED(ctx->r18) >= 0) {
        // 0x8004F104: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_8004F110;
    }
    goto skip_3;
    // 0x8004F104: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x8004F108: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004F10C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_8004F110:
    // 0x8004F110: beql        $at, $zero, L_8004F120
    if (ctx->r1 == 0) {
        // 0x8004F114: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_8004F120;
    }
    goto skip_4;
    // 0x8004F114: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x8004F118: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x8004F11C: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_8004F120:
    // 0x8004F120: beql        $at, $zero, L_8004F1D4
    if (ctx->r1 == 0) {
        // 0x8004F124: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_8004F1D4;
    }
    goto skip_5;
    // 0x8004F124: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x8004F128: blez        $s3, L_8004F1A8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8004F12C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8004F1A8;
    }
    // 0x8004F12C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004F130: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8004F134: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x8004F138: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8004F13C: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8004F140: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004F144: jalr        $t9
    // 0x8004F148: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8004F148: nop

    after_2:
    // 0x8004F14C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8004F150: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8004F154: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8004F158: lh          $t5, 0x0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X0);
    // 0x8004F15C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8004F160: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8004F164: andi        $t8, $a3, 0x7
    ctx->r24 = ctx->r7 & 0X7;
    // 0x8004F168: subu        $t3, $a3, $t8
    ctx->r11 = SUB32(ctx->r7, ctx->r24);
    // 0x8004F16C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8004F170: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8004F174: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8004F178: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8004F17C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8004F180: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x8004F184: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004F188: subu        $t6, $v0, $a2
    ctx->r14 = SUB32(ctx->r2, ctx->r6);
    // 0x8004F18C: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x8004F190: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8004F194: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8004F198: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8004F19C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8004F1A0: b           L_8004F1A8
    // 0x8004F1A4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8004F1A8;
    // 0x8004F1A4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8004F1A8:
    // 0x8004F1A8: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x8004F1AC: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8004F1B0: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x8004F1B4: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x8004F1B8: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8004F1BC: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x8004F1C0: addu        $t5, $t9, $s1
    ctx->r13 = ADD32(ctx->r25, ctx->r17);
    // 0x8004F1C4: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x8004F1C8: b           L_8004F1D4
    // 0x8004F1CC: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
        goto L_8004F1D4;
    // 0x8004F1CC: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x8004F1D0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_8004F1D4:
    // 0x8004F1D4: beq         $s2, $zero, L_8004F210
    if (ctx->r18 == 0) {
        // 0x8004F1D8: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_8004F210;
    }
    // 0x8004F1D8: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x8004F1DC: bgez        $v1, L_8004F1E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004F1E0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8004F1E8;
    }
    // 0x8004F1E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8004F1E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004F1E8:
    // 0x8004F1E8: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x8004F1EC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F1F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F1F4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8004F1F8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8004F1FC: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8004F200: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x8004F204: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8004F208: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8004F20C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8004F210:
    // 0x8004F210: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8004F214:
    // 0x8004F214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004F218: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004F21C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004F220: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F224: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004F228: jr          $ra
    // 0x8004F22C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8004F22C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80011610_12210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011610: beq         $a0, $zero, L_8001162C
    if (ctx->r4 == 0) {
        // 0x80011614: nop
    
            goto L_8001162C;
    }
    // 0x80011614: nop

    // 0x80011618: bne         $a1, $zero, L_80011628
    if (ctx->r5 != 0) {
        // 0x8001161C: addiu       $t6, $a1, 0x5C
        ctx->r14 = ADD32(ctx->r5, 0X5C);
            goto L_80011628;
    }
    // 0x8001161C: addiu       $t6, $a1, 0x5C
    ctx->r14 = ADD32(ctx->r5, 0X5C);
    // 0x80011620: jr          $ra
    // 0x80011624: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80011624: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
L_80011628:
    // 0x80011628: sw          $t6, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r14;
L_8001162C:
    // 0x8001162C: jr          $ra
    // 0x80011630: nop

    TRACE_RETURN()
    return;
    // 0x80011630: nop

;}
RECOMP_FUNC void func_80007B84_8784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80007B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007B8C: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x80007B90: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80007B94: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80007B98: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80007B9C: beql        $t7, $zero, L_80007C80
    if (ctx->r15 == 0) {
        // 0x80007BA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80007C80;
    }
    goto skip_0;
    // 0x80007BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80007BA4: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x80007BA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80007BAC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80007BB0: beql        $t9, $zero, L_80007BD8
    if (ctx->r25 == 0) {
        // 0x80007BB4: lbu         $v1, 0x4($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X4);
            goto L_80007BD8;
    }
    goto skip_1;
    // 0x80007BB4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    skip_1:
    // 0x80007BB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80007BBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80007BC0: jal         0x80007C90
    // 0x80007BC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80007C90_8890(rdram, ctx);
        goto after_0;
    // 0x80007BC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80007BC8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80007BCC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80007BD0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80007BD4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
L_80007BD8:
    // 0x80007BD8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80007BDC: andi        $t1, $v1, 0x18
    ctx->r9 = ctx->r3 & 0X18;
    // 0x80007BE0: beql        $t1, $zero, L_80007BFC
    if (ctx->r9 == 0) {
        // 0x80007BE4: lbu         $t2, 0xC($a2)
        ctx->r10 = MEM_BU(ctx->r6, 0XC);
            goto L_80007BFC;
    }
    goto skip_2;
    // 0x80007BE4: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
    skip_2:
    // 0x80007BE8: beql        $t1, $at, L_80007C5C
    if (ctx->r9 == ctx->r1) {
        // 0x80007BEC: lbu         $t5, 0xC($a2)
        ctx->r13 = MEM_BU(ctx->r6, 0XC);
            goto L_80007C5C;
    }
    goto skip_3;
    // 0x80007BEC: lbu         $t5, 0xC($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XC);
    skip_3:
    // 0x80007BF0: b           L_80007C80
    // 0x80007BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80007C80;
    // 0x80007BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80007BF8: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
L_80007BFC:
    // 0x80007BFC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80007C00: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x80007C04: sb          $t2, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r10;
    // 0x80007C08: lbu         $t3, 0xC($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0XC);
    // 0x80007C0C: lui         $t0, 0xC
    ctx->r8 = S32(0XC << 16);
    // 0x80007C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80007C14: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80007C18: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x80007C1C: addu        $a0, $t5, $t0
    ctx->r4 = ADD32(ctx->r13, ctx->r8);
    // 0x80007C20: lhu         $t6, 0x5F18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X5F18);
    // 0x80007C24: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80007C28: sh          $t7, 0x5F18($a0)
    MEM_H(0X5F18, ctx->r4) = ctx->r15;
    // 0x80007C2C: lbu         $t8, 0xC($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XC);
    // 0x80007C30: lw          $v1, 0x38($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X38);
    // 0x80007C34: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80007C38: addu        $t1, $a3, $t9
    ctx->r9 = ADD32(ctx->r7, ctx->r25);
    // 0x80007C3C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80007C40: sw          $v1, 0x5F38($t2)
    MEM_W(0X5F38, ctx->r10) = ctx->r3;
    // 0x80007C44: lhu         $t3, 0x18($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X18);
    // 0x80007C48: sw          $v1, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r3;
    // 0x80007C4C: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x80007C50: b           L_80007C80
    // 0x80007C54: sh          $t4, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r12;
        goto L_80007C80;
    // 0x80007C54: sh          $t4, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r12;
    // 0x80007C58: lbu         $t5, 0xC($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XC);
L_80007C5C:
    // 0x80007C5C: lhu         $t7, 0x18($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X18);
    // 0x80007C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80007C64: sb          $t5, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r13;
    // 0x80007C68: lw          $t6, 0x38($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X38);
    // 0x80007C6C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x80007C70: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80007C74: b           L_80007C80
    // 0x80007C78: sw          $t6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r14;
        goto L_80007C80;
    // 0x80007C78: sw          $t6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r14;
    // 0x80007C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007C80:
    // 0x80007C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007C84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80007C88: jr          $ra
    // 0x80007C8C: nop

    TRACE_RETURN()
    return;
    // 0x80007C8C: nop

;}
RECOMP_FUNC void func_8003B304_3BF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B308: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B30C: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B314: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8003B318: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003B31C: sb          $t6, 0x49($t7)
    MEM_B(0X49, ctx->r15) = ctx->r14;
    // 0x8003B320: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003B324: sh          $zero, 0x4A($t8)
    MEM_H(0X4A, ctx->r24) = 0;
    // 0x8003B328: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B32C: lhu         $t9, 0x56($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X56);
    // 0x8003B330: jal         0x8003AFB0
    // 0x8003B334: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003B334: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    after_0:
    // 0x8003B338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B33C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B340: jr          $ra
    // 0x8003B344: nop

    TRACE_RETURN()
    return;
    // 0x8003B344: nop

;}
RECOMP_FUNC void func_80027A7C_2867C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027A7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80027A80: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80027A84: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80027A88: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80027A8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80027A90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80027A94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80027A98: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x80027A9C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80027AA0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80027AA4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80027AA8: bc1f        L_80027AF4
    if (!c1cs) {
        // 0x80027AAC: lwc1        $f18, 0x40($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80027AF4;
    }
    // 0x80027AAC: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80027AB0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80027AB4: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80027AB8: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x80027ABC: nop

    // 0x80027AC0: bc1fl       L_80027AF8
    if (!c1cs) {
        // 0x80027AC4: lwc1        $f4, 0x44($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
            goto L_80027AF8;
    }
    goto skip_0;
    // 0x80027AC4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80027AC8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80027ACC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80027AD0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80027AD4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80027AD8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80027ADC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80027AE0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80027AE4: jal         0x800283E8
    // 0x80027AE8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_800283E8_28FE8(rdram, ctx);
        goto after_0;
    // 0x80027AE8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80027AEC: b           L_80027B2C
    // 0x80027AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80027B2C;
    // 0x80027AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80027AF4:
    // 0x80027AF4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
L_80027AF8:
    // 0x80027AF8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80027AFC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80027B00: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80027B04: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80027B08: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80027B0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80027B10: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80027B14: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80027B18: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80027B1C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80027B20: jal         0x80027B38
    // 0x80027B24: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_80027B38_28738(rdram, ctx);
        goto after_1;
    // 0x80027B24: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x80027B28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80027B2C:
    // 0x80027B2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80027B30: jr          $ra
    // 0x80027B34: nop

    TRACE_RETURN()
    return;
    // 0x80027B34: nop

;}
RECOMP_FUNC void func_800234D8_240D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800234D8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800234DC: addiu       $v0, $v0, -0x717C
    ctx->r2 = ADD32(ctx->r2, -0X717C);
    // 0x800234E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800234E4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800234E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800234EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800234F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800234F4: sw          $a0, 0x3F4($t7)
    MEM_W(0X3F4, ctx->r15) = ctx->r4;
    // 0x800234F8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800234FC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80023500: addiu       $t9, $zero, 0x500
    ctx->r25 = ADD32(0, 0X500);
    // 0x80023504: lw          $a1, 0x3F0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3F0);
    // 0x80023508: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8002350C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80023510: lw          $t0, 0x3F4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3F4);
    // 0x80023514: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x80023518: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x8002351C: addiu       $a3, $t8, 0x100
    ctx->r7 = ADD32(ctx->r24, 0X100);
    // 0x80023520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80023524: jal         0x8004525C
    // 0x80023528: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80023528: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x8002352C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80023530: jal         0x80023ADC
    // 0x80023534: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x80023534: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80023538: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002353C: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023540: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80023544: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80023548: sw          $t1, 0x3FC($t2)
    MEM_W(0X3FC, ctx->r10) = ctx->r9;
    // 0x8002354C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80023550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80023554: lw          $v0, 0x3FC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X3FC);
    // 0x80023558: jr          $ra
    // 0x8002355C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002355C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80004240_4E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004240: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80004244: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80004248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000424C: ori         $at, $at, 0xB168
    ctx->r1 = ctx->r1 | 0XB168;
    // 0x80004250: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80004254: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
L_80004258:
    // 0x80004258: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000425C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80004260: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80004264: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80004268: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8000426C: bne         $at, $zero, L_80004258
    if (ctx->r1 != 0) {
        // 0x80004270: sb          $zero, -0x10($v0)
        MEM_B(-0X10, ctx->r2) = 0;
            goto L_80004258;
    }
    // 0x80004270: sb          $zero, -0x10($v0)
    MEM_B(-0X10, ctx->r2) = 0;
    // 0x80004274: jr          $ra
    // 0x80004278: nop

    TRACE_RETURN()
    return;
    // 0x80004278: nop

;}
RECOMP_FUNC void func_8000C8D0_D4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C8D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C8D4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C8D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C8DC: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C8E0: beq         $v0, $zero, L_8000C8FC
    if (ctx->r2 == 0) {
        // 0x8000C8E4: nop
    
            goto L_8000C8FC;
    }
    // 0x8000C8E4: nop

    // 0x8000C8E8: sh          $a1, 0x64($v0)
    MEM_H(0X64, ctx->r2) = ctx->r5;
    // 0x8000C8EC: sh          $a2, 0x66($v0)
    MEM_H(0X66, ctx->r2) = ctx->r6;
    // 0x8000C8F0: sh          $a3, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r7;
    // 0x8000C8F4: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x8000C8F8: sh          $t7, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r15;
L_8000C8FC:
    // 0x8000C8FC: jr          $ra
    // 0x8000C900: nop

    TRACE_RETURN()
    return;
    // 0x8000C900: nop

;}
RECOMP_FUNC void func_8001E380_1EF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E380: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001E384: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8001E388: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001E38C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001E390: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8001E394: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8001E398: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x8001E39C: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x8001E3A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001E3A4: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x8001E3A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001E3AC: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8001E3B0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001E3B4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8001E3B8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8001E3BC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8001E3C0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8001E3C4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8001E3C8: jal         0x8001EC04
    // 0x8001E3CC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_8001EC04_1F804(rdram, ctx);
        goto after_0;
    // 0x8001E3CC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8001E3D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001E3D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8001E3D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001E3DC: jr          $ra
    // 0x8001E3E0: nop

    TRACE_RETURN()
    return;
    // 0x8001E3E0: nop

;}
RECOMP_FUNC void func_80034E68_35A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034E70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034E74: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80034E78: jal         0x80034C84
    // 0x80034E7C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80034C84_35884(rdram, ctx);
        goto after_0;
    // 0x80034E7C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x80034E80: jal         0x80034D24
    // 0x80034E84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80034E84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034E90: jr          $ra
    // 0x80034E94: nop

    TRACE_RETURN()
    return;
    // 0x80034E94: nop

;}
RECOMP_FUNC void func_80001328_1F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001328: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8000132C: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x80001330: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80001334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000133C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80001340: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80001344: lui         $t7, 0xE900
    ctx->r15 = S32(0XE900 << 16);
    // 0x80001348: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000134C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80001350: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80001354: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80001358: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000135C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80001360: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80001364: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80001368: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000136C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80001370: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x80001374: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80001378: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x8000137C: lh          $t2, -0x524E($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X524E);
    // 0x80001380: ori         $a1, $a1, 0xD6D8
    ctx->r5 = ctx->r5 | 0XD6D8;
    // 0x80001384: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80001388: mflo        $t3
    ctx->r11 = lo;
    // 0x8000138C: addu        $a0, $v1, $t3
    ctx->r4 = ADD32(ctx->r3, ctx->r11);
    // 0x80001390: jal         0x80040620
    // 0x80001394: nop

    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80001394: nop

    after_0:
    // 0x80001398: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8000139C: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x800013A0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800013A4: lui         $t1, 0x3
    ctx->r9 = S32(0X3 << 16);
    // 0x800013A8: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x800013AC: addu        $t4, $v1, $t1
    ctx->r12 = ADD32(ctx->r3, ctx->r9);
    // 0x800013B0: lh          $a0, 0x2DB2($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X2DB2);
    // 0x800013B4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800013B8: ori         $at, $at, 0xD6D8
    ctx->r1 = ctx->r1 | 0XD6D8;
    // 0x800013BC: multu       $a0, $at
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800013C0: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x800013C4: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800013C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800013CC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800013D0: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x800013D4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800013D8: addiu       $t6, $t6, -0x56E0
    ctx->r14 = ADD32(ctx->r14, -0X56E0);
    // 0x800013DC: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x800013E0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x800013E4: mflo        $t7
    ctx->r15 = lo;
    // 0x800013E8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x800013EC: sw          $t8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r24;
    // 0x800013F0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800013F4: ori         $at, $at, 0x2928
    ctx->r1 = ctx->r1 | 0X2928;
    // 0x800013F8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800013FC: addu        $t3, $v1, $t1
    ctx->r11 = ADD32(ctx->r3, ctx->r9);
    // 0x80001400: lh          $t4, 0x2DB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2DB2);
    // 0x80001404: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x80001408: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8000140C: multu       $t4, $at
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80001410: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80001414: subu        $t2, $t9, $v1
    ctx->r10 = SUB32(ctx->r25, ctx->r3);
    // 0x80001418: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000141C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80001420: addiu       $a1, $a1, -0x2210
    ctx->r5 = ADD32(ctx->r5, -0X2210);
    // 0x80001424: addiu       $t3, $t3, 0x25B0
    ctx->r11 = ADD32(ctx->r11, 0X25B0);
    // 0x80001428: addiu       $t9, $t9, 0x2680
    ctx->r25 = ADD32(ctx->r25, 0X2680);
    // 0x8000142C: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80001430: subu        $t4, $t9, $t3
    ctx->r12 = SUB32(ctx->r25, ctx->r11);
    // 0x80001434: mflo        $t5
    ctx->r13 = lo;
    // 0x80001438: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x8000143C: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80001440: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80001444: addiu       $t2, $a1, 0x2380
    ctx->r10 = ADD32(ctx->r5, 0X2380);
    // 0x80001448: addiu       $t5, $zero, 0x63
    ctx->r13 = ADD32(0, 0X63);
    // 0x8000144C: addiu       $a2, $a2, 0x48E4
    ctx->r6 = ADD32(ctx->r6, 0X48E4);
    // 0x80001450: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x80001454: sw          $t4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r12;
    // 0x80001458: sw          $a1, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r5;
    // 0x8000145C: sw          $t2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r10;
    // 0x80001460: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80001464: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80001468: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000146C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80001470: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80001474: lw          $t8, 0x48D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X48D8);
    // 0x80001478: bnel        $t8, $zero, L_8000148C
    if (ctx->r24 != 0) {
        // 0x8000147C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000148C;
    }
    goto skip_0;
    // 0x8000147C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80001480: jal         0x8000098C
    // 0x80001484: nop

    func_8000098C_158C(rdram, ctx);
        goto after_1;
    // 0x80001484: nop

    after_1:
    // 0x80001488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000148C:
    // 0x8000148C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001490: jr          $ra
    // 0x80001494: nop

    TRACE_RETURN()
    return;
    // 0x80001494: nop

;}
RECOMP_FUNC void alSynAddPlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800481C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800481C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800481C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800481CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800481D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800481D4: jal         0x800425C0
    // 0x800481D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800481D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800481DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800481E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800481E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800481E8: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x800481EC: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x800481F0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800481F4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800481F8: jal         0x800425C0
    // 0x800481FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x800481FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    after_1:
    // 0x80048200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048208: jr          $ra
    // 0x8004820C: nop

    TRACE_RETURN()
    return;
    // 0x8004820C: nop

;}
RECOMP_FUNC void func_80023F64_24B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023F64: bgez        $a0, L_80023F74
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023F68: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023F74;
    }
    // 0x80023F68: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023F6C: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023F70: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023F74:
    // 0x80023F74: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023F78: addiu       $t8, $t8, -0x7108
    ctx->r24 = ADD32(ctx->r24, -0X7108);
    // 0x80023F7C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023F80: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80023F84: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80023F88: bgez        $a0, L_80023F9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023F8C: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_80023F9C;
    }
    // 0x80023F8C: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x80023F90: beq         $t0, $zero, L_80023F9C
    if (ctx->r8 == 0) {
        // 0x80023F94: nop
    
            goto L_80023F9C;
    }
    // 0x80023F94: nop

    // 0x80023F98: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80023F9C:
    // 0x80023F9C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80023FA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80023FA4: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80023FA8: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x80023FAC: and         $t6, $t9, $t5
    ctx->r14 = ctx->r25 & ctx->r13;
    // 0x80023FB0: jr          $ra
    // 0x80023FB4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80023FB4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
;}
