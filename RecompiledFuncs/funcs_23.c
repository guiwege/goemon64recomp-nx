#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F6FE8_5B2EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6FF0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F6FF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F6FF8: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x801F6FFC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F7000: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7004: lwc1        $f4, 0x48($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X48);
    // 0x801F7008: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F700C: swc1        $f8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f8.u32l;
    // 0x801F7010: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801F7014: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x801F7018: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801F701C: jal         0x801E8178
    // 0x801F7020: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    func_801E8178_5A4088(rdram, ctx);
        goto after_0;
    // 0x801F7020: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    after_0:
    // 0x801F7024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F702C: jr          $ra
    // 0x801F7030: nop

    TRACE_RETURN()
    return;
    // 0x801F7030: nop

;}
RECOMP_FUNC void func_801E1928_59D838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E192C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E1930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E1934: lbu         $t6, 0xCC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E1938: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E193C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E1940: bnel        $t6, $at, L_801E195C
    if (ctx->r14 != ctx->r1) {
        // 0x801E1944: lbu         $t8, 0xD4($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XD4);
            goto L_801E195C;
    }
    goto skip_0;
    // 0x801E1944: lbu         $t8, 0xD4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD4);
    skip_0:
    // 0x801E1948: lw          $t7, 0x58($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X58);
    // 0x801E194C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E1950: jal         0x801DD720
    // 0x801E1954: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E1954: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E1958: lbu         $t8, 0xD4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD4);
L_801E195C:
    // 0x801E195C: bnel        $t8, $zero, L_801E1970
    if (ctx->r24 != 0) {
        // 0x801E1960: lhu         $t0, 0x98($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X98);
            goto L_801E1970;
    }
    goto skip_1;
    // 0x801E1960: lhu         $t0, 0x98($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X98);
    skip_1:
    // 0x801E1964: jal         0x801CC454
    // 0x801E1968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_1;
    // 0x801E1968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E196C: lhu         $t0, 0x98($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X98);
L_801E1970:
    // 0x801E1970: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801E1974: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E1978: bne         $t0, $zero, L_801E19A4
    if (ctx->r8 != 0) {
        // 0x801E197C: sw          $t9, 0x58($s0)
        MEM_W(0X58, ctx->r16) = ctx->r25;
            goto L_801E19A4;
    }
    // 0x801E197C: sw          $t9, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r25;
    // 0x801E1980: jal         0x801E3324
    // 0x801E1984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_2;
    // 0x801E1984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E1988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E198C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E1990: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E1994: jal         0x801DAC7C
    // 0x801E1998: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_3;
    // 0x801E1998: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_3:
    // 0x801E199C: b           L_801E1AB4
    // 0x801E19A0: nop

        goto L_801E1AB4;
    // 0x801E19A0: nop

L_801E19A4:
    // 0x801E19A4: lw          $a1, -0x3AA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3AA4);
    // 0x801E19A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E19AC: beq         $a1, $zero, L_801E19C4
    if (ctx->r5 == 0) {
        // 0x801E19B0: nop
    
            goto L_801E19C4;
    }
    // 0x801E19B0: nop

    // 0x801E19B4: jal         0x801E3750
    // 0x801E19B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E3750_59F660(rdram, ctx);
        goto after_4;
    // 0x801E19B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801E19BC: b           L_801E1AB4
    // 0x801E19C0: nop

        goto L_801E1AB4;
    // 0x801E19C0: nop

L_801E19C4:
    // 0x801E19C4: jal         0x801E1C90
    // 0x801E19C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_5;
    // 0x801E19C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E19CC: beq         $v0, $zero, L_801E19EC
    if (ctx->r2 == 0) {
        // 0x801E19D0: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_801E19EC;
    }
    // 0x801E19D0: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801E19D4: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E19D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E19DC: jal         0x801DACDC
    // 0x801E19E0: sb          $zero, 0x85($t1)
    MEM_B(0X85, ctx->r9) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801E19E0: sb          $zero, 0x85($t1)
    MEM_B(0X85, ctx->r9) = 0;
    after_6:
    // 0x801E19E4: b           L_801E1AB4
    // 0x801E19E8: nop

        goto L_801E1AB4;
    // 0x801E19E8: nop

L_801E19EC:
    // 0x801E19EC: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    // 0x801E19F0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x801E19F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E19F8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E19FC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801E1A00: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801E1A04: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E1A08: lhu         $t4, 0x7DB4($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X7DB4);
    // 0x801E1A0C: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x801E1A10: bne         $t5, $zero, L_801E1A2C
    if (ctx->r13 != 0) {
        // 0x801E1A14: nop
    
            goto L_801E1A2C;
    }
    // 0x801E1A14: nop

    // 0x801E1A18: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1A1C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E1A20: lbu         $t7, 0x68($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X68);
    // 0x801E1A24: bne         $t7, $at, L_801E1A3C
    if (ctx->r15 != ctx->r1) {
        // 0x801E1A28: nop
    
            goto L_801E1A3C;
    }
    // 0x801E1A28: nop

L_801E1A2C:
    // 0x801E1A2C: jal         0x801E4624
    // 0x801E1A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E4624_5A0534(rdram, ctx);
        goto after_7;
    // 0x801E1A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x801E1A34: b           L_801E1AB4
    // 0x801E1A38: nop

        goto L_801E1AB4;
    // 0x801E1A38: nop

L_801E1A3C:
    // 0x801E1A3C: jal         0x801E79F4
    // 0x801E1A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E79F4_5A3904(rdram, ctx);
        goto after_8;
    // 0x801E1A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E1A44: bne         $v0, $zero, L_801E1AB4
    if (ctx->r2 != 0) {
        // 0x801E1A48: nop
    
            goto L_801E1AB4;
    }
    // 0x801E1A48: nop

    // 0x801E1A4C: jal         0x801E5328
    // 0x801E1A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5328_5A1238(rdram, ctx);
        goto after_9;
    // 0x801E1A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E1A54: beql        $v0, $zero, L_801E1A7C
    if (ctx->r2 == 0) {
        // 0x801E1A58: lbu         $t8, 0x90($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X90);
            goto L_801E1A7C;
    }
    goto skip_2;
    // 0x801E1A58: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    skip_2:
    // 0x801E1A5C: jal         0x801E20A0
    // 0x801E1A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_10;
    // 0x801E1A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801E1A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1A68: jal         0x801DACDC
    // 0x801E1A6C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_11;
    // 0x801E1A6C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_11:
    // 0x801E1A70: b           L_801E1AB4
    // 0x801E1A74: nop

        goto L_801E1AB4;
    // 0x801E1A74: nop

    // 0x801E1A78: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E1A7C:
    // 0x801E1A7C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E1A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1A84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E1A88: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E1A8C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E1A90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E1A94: lhu         $t0, 0x7DB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB4);
    // 0x801E1A98: andi        $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 & 0X2000;
    // 0x801E1A9C: beq         $t1, $zero, L_801E1AB4
    if (ctx->r9 == 0) {
        // 0x801E1AA0: nop
    
            goto L_801E1AB4;
    }
    // 0x801E1AA0: nop

    // 0x801E1AA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E1AA8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x801E1AAC: jal         0x801DACDC
    // 0x801E1AB0: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_12;
    // 0x801E1AB0: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    after_12:
L_801E1AB4:
    // 0x801E1AB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801E1AB8: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801E1ABC: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x801E1AC0: lbu         $t2, 0x2E24($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2E24);
    // 0x801E1AC4: addiu       $t3, $v0, 0x7FFF
    ctx->r11 = ADD32(ctx->r2, 0X7FFF);
    // 0x801E1AC8: bnel        $t2, $zero, L_801E1B50
    if (ctx->r10 != 0) {
        // 0x801E1ACC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E1B50;
    }
    goto skip_3;
    // 0x801E1ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801E1AD0: lbu         $t3, 0x2E23($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X2E23);
    // 0x801E1AD4: addiu       $t4, $v0, 0x7FFF
    ctx->r12 = ADD32(ctx->r2, 0X7FFF);
    // 0x801E1AD8: bnel        $t3, $zero, L_801E1B50
    if (ctx->r11 != 0) {
        // 0x801E1ADC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E1B50;
    }
    goto skip_4;
    // 0x801E1ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x801E1AE0: lbu         $t4, 0x2E21($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2E21);
    // 0x801E1AE4: bnel        $t4, $zero, L_801E1B50
    if (ctx->r12 != 0) {
        // 0x801E1AE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E1B50;
    }
    goto skip_5;
    // 0x801E1AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x801E1AEC: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E1AF0: lhu         $t6, 0x36($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X36);
    // 0x801E1AF4: bnel        $t6, $zero, L_801E1B50
    if (ctx->r14 != 0) {
        // 0x801E1AF8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E1B50;
    }
    goto skip_6;
    // 0x801E1AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x801E1AFC: lhu         $t7, 0xEE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XEE);
    // 0x801E1B00: addiu       $at, $zero, 0x258
    ctx->r1 = ADD32(0, 0X258);
    // 0x801E1B04: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801E1B08: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E1B0C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E1B10: bne         $t9, $at, L_801E1B4C
    if (ctx->r25 != ctx->r1) {
        // 0x801E1B14: sh          $t8, 0xEE($s0)
        MEM_H(0XEE, ctx->r16) = ctx->r24;
            goto L_801E1B4C;
    }
    // 0x801E1B14: sh          $t8, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r24;
    // 0x801E1B18: lw          $t0, -0x39DC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39DC);
    // 0x801E1B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1B20: jal         0x801E1C04
    // 0x801E1B24: sh          $zero, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = 0;
    func_801E1C04_59DB14(rdram, ctx);
        goto after_13;
    // 0x801E1B24: sh          $zero, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = 0;
    after_13:
    // 0x801E1B28: lbu         $t1, 0x60($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X60);
    // 0x801E1B2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E1B30: bnel        $t1, $at, L_801E1B50
    if (ctx->r9 != ctx->r1) {
        // 0x801E1B34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E1B50;
    }
    goto skip_7;
    // 0x801E1B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x801E1B38: jal         0x8001DA08
    // 0x801E1B3C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001DA08_1E608(rdram, ctx);
        goto after_14;
    // 0x801E1B3C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_14:
    // 0x801E1B40: lhu         $t2, 0xEE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XEE);
    // 0x801E1B44: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x801E1B48: sh          $t3, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r11;
L_801E1B4C:
    // 0x801E1B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E1B50:
    // 0x801E1B50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E1B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E1B58: jr          $ra
    // 0x801E1B5C: nop

    TRACE_RETURN()
    return;
    // 0x801E1B5C: nop

;}
RECOMP_FUNC void func_801F6404_5B2314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F640C: jal         0x801F65A4
    // 0x801F6410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F65A4_5B24B4(rdram, ctx);
        goto after_0;
    // 0x801F6410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F641C: jr          $ra
    // 0x801F6420: nop

    TRACE_RETURN()
    return;
    // 0x801F6420: nop

;}
RECOMP_FUNC void func_801F6A5C_5B296C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6A68: jal         0x801E7F50
    // 0x801F6A6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6A6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6A70: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6A74: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6A78: jalr        $t9
    // 0x801F6A7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6A7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6A80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6A84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6A88: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6A8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6A90: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6A94: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F6A9C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6AA0: nop

    // 0x801F6AA4: bc1fl       L_801F6AC4
    if (!c1cs) {
        // 0x801F6AA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6AC4;
    }
    goto skip_0;
    // 0x801F6AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6AAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F6AB0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801F6AB4: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x801F6AB8: jal         0x801DACDC
    // 0x801F6ABC: swc1        $f10, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->f10.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6ABC: swc1        $f10, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->f10.u32l;
    after_2:
    // 0x801F6AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6AC4:
    // 0x801F6AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6AC8: jr          $ra
    // 0x801F6ACC: nop

    TRACE_RETURN()
    return;
    // 0x801F6ACC: nop

;}
RECOMP_FUNC void func_801EAD38_5A6C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAD38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EAD3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EAD40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EAD44: jal         0x801EAE88
    // 0x801EAD48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EAE88_5A6D98(rdram, ctx);
        goto after_0;
    // 0x801EAD48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EAD4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801EAD50: jal         0x801E8858
    // 0x801EAD54: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_1;
    // 0x801EAD54: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x801EAD58: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801EAD5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAD60: lwc1        $f6, -0x4774($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4774);
    // 0x801EAD64: lwc1        $f4, 0x1C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801EAD68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAD6C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EAD70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAD74: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801EAD78: addiu       $a0, $a0, -0x5244
    ctx->r4 = ADD32(ctx->r4, -0X5244);
    // 0x801EAD7C: swc1        $f8, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f8.u32l;
    // 0x801EAD80: lwc1        $f2, 0x1C($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801EAD84: swc1        $f2, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f2.u32l;
    // 0x801EAD88: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
    // 0x801EAD8C: lwc1        $f10, -0x4770($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4770);
    // 0x801EAD90: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801EAD94: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x801EAD98: nop

    // 0x801EAD9C: bc1fl       L_801EADB0
    if (!c1cs) {
        // 0x801EADA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EADB0;
    }
    goto skip_0;
    // 0x801EADA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EADA4: jal         0x8003521C
    // 0x801EADA8: sb          $t6, 0x60($t7)
    MEM_B(0X60, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EADA8: sb          $t6, 0x60($t7)
    MEM_B(0X60, ctx->r15) = ctx->r14;
    after_2:
    // 0x801EADAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EADB0:
    // 0x801EADB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EADB4: jr          $ra
    // 0x801EADB8: nop

    TRACE_RETURN()
    return;
    // 0x801EADB8: nop

;}
RECOMP_FUNC void func_801F0408_5AC318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0408: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801F040C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F0410: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x801F0414: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x801F0418: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801F041C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801F0420: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801F0424: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801F0428: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801F042C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801F0430: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F0434: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801F0438: lw          $fp, 0x5C($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X5C);
    // 0x801F043C: addiu       $at, $zero, 0x98
    ctx->r1 = ADD32(0, 0X98);
    // 0x801F0440: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F0444: lbu         $v0, 0xCC($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XCC);
    // 0x801F0448: bnel        $v0, $at, L_801F045C
    if (ctx->r2 != ctx->r1) {
        // 0x801F044C: addiu       $at, $zero, 0x99
        ctx->r1 = ADD32(0, 0X99);
            goto L_801F045C;
    }
    goto skip_0;
    // 0x801F044C: addiu       $at, $zero, 0x99
    ctx->r1 = ADD32(0, 0X99);
    skip_0:
    // 0x801F0450: b           L_801F046C
    // 0x801F0454: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
        goto L_801F046C;
    // 0x801F0454: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x801F0458: addiu       $at, $zero, 0x99
    ctx->r1 = ADD32(0, 0X99);
L_801F045C:
    // 0x801F045C: bne         $v0, $at, L_801F046C
    if (ctx->r2 != ctx->r1) {
        // 0x801F0460: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_801F046C;
    }
    // 0x801F0460: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x801F0464: b           L_801F046C
    // 0x801F0468: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
        goto L_801F046C;
    // 0x801F0468: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_801F046C:
    // 0x801F046C: jal         0x801F05D0
    // 0x801F0470: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801F05D0_5AC4E0(rdram, ctx);
        goto after_0;
    // 0x801F0470: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x801F0474: bne         $v0, $zero, L_801F05A0
    if (ctx->r2 != 0) {
        // 0x801F0478: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_801F05A0;
    }
    // 0x801F0478: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x801F047C: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x801F0480: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F0484: addiu       $t8, $t8, 0x4868
    ctx->r24 = ADD32(ctx->r24, 0X4868);
    // 0x801F0488: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F048C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x801F0490: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801F0494: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x801F0498: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_801F049C:
    // 0x801F049C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F04A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F04A4: jal         0x80034E08
    // 0x801F04A8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F04A8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x801F04AC: beq         $v0, $zero, L_801F05A0
    if (ctx->r2 == 0) {
        // 0x801F04B0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_801F05A0;
    }
    // 0x801F04B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801F04B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F04B8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801F04BC: jal         0x801EE4AC
    // 0x801F04C0: lbu         $a2, 0x7F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X7F);
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F04C0: lbu         $a2, 0x7F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X7F);
    after_2:
    // 0x801F04C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F04C8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x801F04CC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x801F04D0: jal         0x801F05F4
    // 0x801F04D4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_801F05F4_5AC504(rdram, ctx);
        goto after_3;
    // 0x801F04D4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_3:
    // 0x801F04D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F04DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F04E0: jal         0x80035EEC
    // 0x801F04E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801F04E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x801F04E8: bne         $v0, $zero, L_801F04FC
    if (ctx->r2 != 0) {
        // 0x801F04EC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801F04FC;
    }
    // 0x801F04EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F04F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F04F4: b           L_801F05A0
    // 0x801F04F8: sb          $t9, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r25;
        goto L_801F05A0;
    // 0x801F04F8: sb          $t9, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r25;
L_801F04FC:
    // 0x801F04FC: lui         $s3, 0x801F
    ctx->r19 = S32(0X801F << 16);
    // 0x801F0500: addiu       $s3, $s3, 0x320
    ctx->r19 = ADD32(ctx->r19, 0X320);
    // 0x801F0504: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x801F0508: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x801F050C: jal         0x801F06AC
    // 0x801F0510: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_801F06AC_5AC5BC(rdram, ctx);
        goto after_5;
    // 0x801F0510: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_5:
    // 0x801F0514: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x801F0518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F051C: addiu       $a1, $s2, 0x6C
    ctx->r5 = ADD32(ctx->r18, 0X6C);
    // 0x801F0520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F0524: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x801F0528: jal         0x8001DB04
    // 0x801F052C: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801F052C: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    after_6:
    // 0x801F0530: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801F0534: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801F0538:
    // 0x801F0538: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801F053C: jal         0x80034E08
    // 0x801F0540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_7;
    // 0x801F0540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801F0544: beq         $v0, $zero, L_801F05A0
    if (ctx->r2 == 0) {
        // 0x801F0548: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F05A0;
    }
    // 0x801F0548: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F054C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F0550: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801F0554: jal         0x801EE4AC
    // 0x801F0558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_8;
    // 0x801F0558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x801F055C: sw          $s2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r18;
    // 0x801F0560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0564: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F0568: jal         0x80035EEC
    // 0x801F056C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_9;
    // 0x801F056C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x801F0570: bne         $v0, $zero, L_801F0584
    if (ctx->r2 != 0) {
        // 0x801F0574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_801F0584;
    }
    // 0x801F0574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801F0578: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F057C: b           L_801F05A0
    // 0x801F0580: sb          $t0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r8;
        goto L_801F05A0;
    // 0x801F0580: sb          $t0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r8;
L_801F0584:
    // 0x801F0584: bnel        $s1, $s4, L_801F0538
    if (ctx->r17 != ctx->r20) {
        // 0x801F0588: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801F0538;
    }
    goto skip_1;
    // 0x801F0588: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x801F058C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x801F0590: bnel        $s6, $s4, L_801F049C
    if (ctx->r22 != ctx->r20) {
        // 0x801F0594: lw          $v0, 0x4C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4C);
            goto L_801F049C;
    }
    goto skip_2;
    // 0x801F0594: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    skip_2:
    // 0x801F0598: jal         0x801DCCF0
    // 0x801F059C: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    func_801DCCF0_598C00(rdram, ctx);
        goto after_10;
    // 0x801F059C: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    after_10:
L_801F05A0:
    // 0x801F05A0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F05A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F05A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801F05AC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801F05B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x801F05B4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x801F05B8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x801F05BC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x801F05C0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x801F05C4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x801F05C8: jr          $ra
    // 0x801F05CC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801F05CC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801EE228_5AA138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE228: beq         $a0, $zero, L_801EE254
    if (ctx->r4 == 0) {
        // 0x801EE22C: nop
    
            goto L_801EE254;
    }
    // 0x801EE22C: nop

    // 0x801EE230: sb          $a1, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r5;
    // 0x801EE234: sw          $a2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r6;
    // 0x801EE238: sb          $a3, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r7;
    // 0x801EE23C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x801EE240: sh          $t6, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r14;
    // 0x801EE244: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x801EE248: sh          $t7, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r15;
    // 0x801EE24C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801EE250: sh          $t8, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r24;
L_801EE254:
    // 0x801EE254: jr          $ra
    // 0x801EE258: nop

    TRACE_RETURN()
    return;
    // 0x801EE258: nop

;}
RECOMP_FUNC void func_801F6970_5B2880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6978: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F697C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F6980: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F6984: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F6988: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F698C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F6990: nop

    // 0x801F6994: bc1fl       L_801F69E0
    if (!c1cs) {
        // 0x801F6998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F69E0;
    }
    goto skip_0;
    // 0x801F6998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F699C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801F69A0: lbu         $t9, 0x59($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X59);
    // 0x801F69A4: beq         $t9, $zero, L_801F69C8
    if (ctx->r25 == 0) {
        // 0x801F69A8: nop
    
            goto L_801F69C8;
    }
    // 0x801F69A8: nop

    // 0x801F69AC: jal         0x801F7034
    // 0x801F69B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F7034_5B2F44(rdram, ctx);
        goto after_0;
    // 0x801F69B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F69B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F69B8: jal         0x801DACDC
    // 0x801F69BC: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F69BC: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_1:
    // 0x801F69C0: b           L_801F69E0
    // 0x801F69C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F69E0;
    // 0x801F69C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F69C8:
    // 0x801F69C8: jal         0x801F706C
    // 0x801F69CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F706C_5B2F7C(rdram, ctx);
        goto after_2;
    // 0x801F69CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x801F69D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F69D4: jal         0x801DACDC
    // 0x801F69D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F69D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801F69DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F69E0:
    // 0x801F69E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F69E4: jr          $ra
    // 0x801F69E8: nop

    TRACE_RETURN()
    return;
    // 0x801F69E8: nop

;}
RECOMP_FUNC void func_801F45C0_5B04D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F45C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F45C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F45C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F45CC: jal         0x801F4984
    // 0x801F45D0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_801F4984_5B0894(rdram, ctx);
        goto after_0;
    // 0x801F45D0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_0:
    // 0x801F45D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F45D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F45DC: jr          $ra
    // 0x801F45E0: nop

    TRACE_RETURN()
    return;
    // 0x801F45E0: nop

;}
RECOMP_FUNC void func_801FACF0_5B6C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FACF0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FACF4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x801FACF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FACFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FAD00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FAD04: sw          $zero, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = 0;
    // 0x801FAD08: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801FAD0C: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801FAD10: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x801FAD14: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
    // 0x801FAD18: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    // 0x801FAD1C: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x801FAD20: jal         0x801CBCE4
    // 0x801FAD24: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    func_801CBCE4_587BF4(rdram, ctx);
        goto after_0;
    // 0x801FAD24: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    after_0:
    // 0x801FAD28: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FAD2C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801FAD30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801FAD34: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAD38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FAD3C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FAD40: sb          $t6, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r14;
    // 0x801FAD44: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801FAD48: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAD4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FAD50: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FAD54: sb          $zero, -0x774($at)
    MEM_B(-0X774, ctx->r1) = 0;
    // 0x801FAD58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801FAD5C: jal         0x801CBD14
    // 0x801FAD60: sw          $t9, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r25;
    func_801CBD14_587C24(rdram, ctx);
        goto after_1;
    // 0x801FAD60: sw          $t9, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r25;
    after_1:
    // 0x801FAD64: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801FAD68: addiu       $a1, $a1, -0x4A30
    ctx->r5 = ADD32(ctx->r5, -0X4A30);
    // 0x801FAD6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FAD70: jal         0x80034E08
    // 0x801FAD74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801FAD74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801FAD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FAD7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801FAD80: sw          $v0, -0x3A00($at)
    MEM_W(-0X3A00, ctx->r1) = ctx->r2;
    // 0x801FAD84: jr          $ra
    // 0x801FAD88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801FAD88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E14A0_59D3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14A4: jr          $ra
    // 0x801E14A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FC584_5B8494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC584: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FC588: jr          $ra
    // 0x801FC58C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801FC58C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E29A0_59E8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E29A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E29A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E29A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E29AC: jal         0x801DD830
    // 0x801E29B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801E29B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x801E29B4: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x801E29B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E29BC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E29C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E29C4: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E29C8: addiu       $a2, $zero, 0x196
    ctx->r6 = ADD32(0, 0X196);
    // 0x801E29CC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x801E29D0: jal         0x801DB494
    // 0x801E29D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DB494_5973A4(rdram, ctx);
        goto after_1;
    // 0x801E29D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E29D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E29DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E29E0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E29E4: sw          $v0, 0x88($t6)
    MEM_W(0X88, ctx->r14) = ctx->r2;
    // 0x801E29E8: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E29EC: sh          $zero, 0x34($t7)
    MEM_H(0X34, ctx->r15) = 0;
    // 0x801E29F0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E29F4: lw          $t8, 0x88($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X88);
    // 0x801E29F8: beql        $t8, $zero, L_801E2A24
    if (ctx->r24 == 0) {
        // 0x801E29FC: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_801E2A24;
    }
    goto skip_0;
    // 0x801E29FC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    skip_0:
    // 0x801E2A00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2A04: nop

    // 0x801E2A08: swc1        $f16, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A0C: swc1        $f16, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A10: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A14: swc1        $f16, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A18: b           L_801E2A90
    // 0x801E2A1C: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
        goto L_801E2A90;
    // 0x801E2A1C: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A20: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_801E2A24:
    // 0x801E2A24: lwc1        $f12, 0x68($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X68);
    // 0x801E2A28: lwc1        $f14, 0x6C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801E2A2C: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E2A30: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E2A34: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2A38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2A3C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E2A40: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2A44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2A48: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E2A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2A50: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E2A54: add.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801E2A58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2A5C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E2A60: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801E2A64: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x801E2A68: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2A6C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E2A70: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A74: swc1        $f16, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A78: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x801E2A7C: swc1        $f18, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f18.u32l;
    // 0x801E2A80: swc1        $f8, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f8.u32l;
    // 0x801E2A84: lhu         $t1, 0x1A($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X1A);
    // 0x801E2A88: ori         $t2, $t1, 0x400
    ctx->r10 = ctx->r9 | 0X400;
    // 0x801E2A8C: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
L_801E2A90:
    // 0x801E2A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2A94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2A98: jr          $ra
    // 0x801E2A9C: nop

    TRACE_RETURN()
    return;
    // 0x801E2A9C: nop

;}
RECOMP_FUNC void func_801DCFB0_598EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCFB0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801DCFB4: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x801DCFB8: lbu         $t7, 0xD2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD2);
    // 0x801DCFBC: beql        $t7, $zero, L_801DCFD0
    if (ctx->r15 == 0) {
        // 0x801DCFC0: lbu         $v1, 0x60($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X60);
            goto L_801DCFD0;
    }
    goto skip_0;
    // 0x801DCFC0: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
    skip_0:
    // 0x801DCFC4: jr          $ra
    // 0x801DCFC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DCFC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DCFCC: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
L_801DCFD0:
    // 0x801DCFD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DCFD4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801DCFD8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801DCFDC: beq         $v1, $zero, L_801DD098
    if (ctx->r3 == 0) {
        // 0x801DCFE0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801DD098;
    }
    // 0x801DCFE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801DCFE4: beq         $v0, $at, L_801DD050
    if (ctx->r2 == ctx->r1) {
        // 0x801DCFE8: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_801DD050;
    }
    // 0x801DCFE8: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801DCFEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DCFF0: beq         $v0, $at, L_801DD098
    if (ctx->r2 == ctx->r1) {
        // 0x801DCFF4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801DD098;
    }
    // 0x801DCFF4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DCFF8: bne         $v0, $at, L_801DD10C
    if (ctx->r2 != ctx->r1) {
        // 0x801DCFFC: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_801DD10C;
    }
    // 0x801DCFFC: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x801DD000: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DD004: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801DD008: lw          $v0, -0x3914($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3914);
    // 0x801DD00C: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x801DD010: beq         $t9, $zero, L_801DD10C
    if (ctx->r25 == 0) {
        // 0x801DD014: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_801DD10C;
    }
    // 0x801DD014: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801DD018: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD01C: lbu         $v0, 0x59($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X59);
    // 0x801DD020: sltu        $t1, $zero, $v0
    ctx->r9 = 0 < ctx->r2 ? 1 : 0;
    // 0x801DD024: beq         $t1, $zero, L_801DD10C
    if (ctx->r9 == 0) {
        // 0x801DD028: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_801DD10C;
    }
    // 0x801DD028: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x801DD02C: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD030: xori        $t2, $v0, 0x42
    ctx->r10 = ctx->r2 ^ 0X42;
    // 0x801DD034: sltiu       $v0, $t2, 0x1
    ctx->r2 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x801DD038: beq         $v0, $zero, L_801DD10C
    if (ctx->r2 == 0) {
        // 0x801DD03C: nop
    
            goto L_801DD10C;
    }
    // 0x801DD03C: nop

    // 0x801DD040: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801DD044: sltiu       $t3, $v0, 0x1
    ctx->r11 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801DD048: jr          $ra
    // 0x801DD04C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    TRACE_RETURN()
    return;
    // 0x801DD04C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_801DD050:
    // 0x801DD050: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801DD054: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801DD058: lw          $t5, -0x3914($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3914);
    // 0x801DD05C: beql        $t5, $zero, L_801DD09C
    if (ctx->r13 == 0) {
        // 0x801DD060: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_801DD09C;
    }
    goto skip_1;
    // 0x801DD060: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    skip_1:
    // 0x801DD064: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD068: lhu         $t7, 0x86($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X86);
    // 0x801DD06C: bnel        $t7, $zero, L_801DD09C
    if (ctx->r15 != 0) {
        // 0x801DD070: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_801DD09C;
    }
    goto skip_2;
    // 0x801DD070: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    skip_2:
    // 0x801DD074: lbu         $t8, 0xCC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD078: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x801DD07C: bnel        $t8, $at, L_801DD09C
    if (ctx->r24 != ctx->r1) {
        // 0x801DD080: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_801DD09C;
    }
    goto skip_3;
    // 0x801DD080: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    skip_3:
    // 0x801DD084: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x801DD088: bnel        $t9, $zero, L_801DD09C
    if (ctx->r25 != 0) {
        // 0x801DD08C: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_801DD09C;
    }
    goto skip_4;
    // 0x801DD08C: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    skip_4:
    // 0x801DD090: jr          $ra
    // 0x801DD094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DD094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD098:
    // 0x801DD098: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
L_801DD09C:
    // 0x801DD09C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801DD0A0: lw          $t1, -0x3914($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3914);
    // 0x801DD0A4: beql        $t1, $zero, L_801DD10C
    if (ctx->r9 == 0) {
        // 0x801DD0A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD10C;
    }
    goto skip_5;
    // 0x801DD0A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x801DD0AC: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD0B0: bltz        $v0, L_801DD108
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DD0B4: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_801DD108;
    }
    // 0x801DD0B4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801DD0B8: beql        $at, $zero, L_801DD10C
    if (ctx->r1 == 0) {
        // 0x801DD0BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD10C;
    }
    goto skip_6;
    // 0x801DD0BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x801DD0C0: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD0C4: lhu         $t3, 0x86($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X86);
    // 0x801DD0C8: bnel        $t3, $zero, L_801DD10C
    if (ctx->r11 != 0) {
        // 0x801DD0CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD10C;
    }
    goto skip_7;
    // 0x801DD0CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x801DD0D0: lhu         $t4, 0x98($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X98);
    // 0x801DD0D4: beql        $t4, $zero, L_801DD10C
    if (ctx->r12 == 0) {
        // 0x801DD0D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD10C;
    }
    goto skip_8;
    // 0x801DD0D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x801DD0DC: lw          $t5, 0x38($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X38);
    // 0x801DD0E0: bnel        $t5, $zero, L_801DD10C
    if (ctx->r13 != 0) {
        // 0x801DD0E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD10C;
    }
    goto skip_9;
    // 0x801DD0E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_9:
    // 0x801DD0E8: bne         $a1, $zero, L_801DD100
    if (ctx->r5 != 0) {
        // 0x801DD0EC: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_801DD100;
    }
    // 0x801DD0EC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DD0F0: lw          $v0, -0x3A18($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A18);
    // 0x801DD0F4: slti        $t6, $v0, 0xA
    ctx->r14 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x801DD0F8: jr          $ra
    // 0x801DD0FC: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    TRACE_RETURN()
    return;
    // 0x801DD0FC: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
L_801DD100:
    // 0x801DD100: jr          $ra
    // 0x801DD104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DD104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD108:
    // 0x801DD108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD10C:
    // 0x801DD10C: jr          $ra
    // 0x801DD110: nop

    TRACE_RETURN()
    return;
    // 0x801DD110: nop

;}
RECOMP_FUNC void func_801F611C_5B202C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F611C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6124: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6128: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x801F612C: jal         0x801F519C
    // 0x801F6130: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_801F519C_5B10AC(rdram, ctx);
        goto after_0;
    // 0x801F6130: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x801F6134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F613C: jr          $ra
    // 0x801F6140: nop

    TRACE_RETURN()
    return;
    // 0x801F6140: nop

;}
RECOMP_FUNC void func_801F6718_5B2628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F671C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6724: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F6728: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801F672C: jal         0x801F6770
    // 0x801F6730: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F6730: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_0:
    // 0x801F6734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F673C: jr          $ra
    // 0x801F6740: nop

    TRACE_RETURN()
    return;
    // 0x801F6740: nop

;}
RECOMP_FUNC void func_801F56EC_5B15FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F56EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F56F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F56F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F56F8: lui         $a1, 0x3A99
    ctx->r5 = S32(0X3A99 << 16);
    // 0x801F56FC: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801F5700: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F5704: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F5708: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F570C: jal         0x801F5734
    // 0x801F5710: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_801F5734_5B1644(rdram, ctx);
        goto after_0;
    // 0x801F5710: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_0:
    // 0x801F5714: beq         $v0, $zero, L_801F5724
    if (ctx->r2 == 0) {
        // 0x801F5718: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_801F5724;
    }
    // 0x801F5718: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F571C: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x801F5720: sh          $zero, 0x86($t7)
    MEM_H(0X86, ctx->r15) = 0;
L_801F5724:
    // 0x801F5724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F572C: jr          $ra
    // 0x801F5730: nop

    TRACE_RETURN()
    return;
    // 0x801F5730: nop

;}
RECOMP_FUNC void func_801F4FFC_5B0F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5004: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5008: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F500C: jal         0x801F519C
    // 0x801F5010: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    func_801F519C_5B10AC(rdram, ctx);
        goto after_0;
    // 0x801F5010: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    after_0:
    // 0x801F5014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F501C: jr          $ra
    // 0x801F5020: nop

    TRACE_RETURN()
    return;
    // 0x801F5020: nop

;}
RECOMP_FUNC void func_801E1F5C_59DE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1F5C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1F60: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1F68: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801E1F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1F70: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801E1F74: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801E1F78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E1F7C: jal         0x801E3DE0
    // 0x801E1F80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3DE0_59FCF0(rdram, ctx);
        goto after_0;
    // 0x801E1F80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x801E1F84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E1F88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1F8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E1F90: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E1F94: nop

    // 0x801E1F98: bc1tl       L_801E2084
    if (c1cs) {
        // 0x801E1F9C: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_801E2084;
    }
    goto skip_0;
    // 0x801E1F9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x801E1FA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E1FA4: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x801E1FA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E1FAC: lwc1        $f18, 0xD0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x801E1FB0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E1FB4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801E1FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E1FBC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E1FC0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801E1FC4: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x801E1FC8: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x801E1FCC: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x801E1FD0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E1FD4: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x801E1FD8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E1FDC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801E1FE0: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x801E1FE4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E1FE8: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801E1FEC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801E1FF0: nop

    // 0x801E1FF4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801E1FF8: beql        $a1, $zero, L_801E2048
    if (ctx->r5 == 0) {
        // 0x801E1FFC: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_801E2048;
    }
    goto skip_1;
    // 0x801E1FFC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801E2000: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E2008: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801E200C: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801E2010: nop

    // 0x801E2014: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801E2018: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801E201C: nop

    // 0x801E2020: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801E2024: bne         $a1, $zero, L_801E203C
    if (ctx->r5 != 0) {
        // 0x801E2028: nop
    
            goto L_801E203C;
    }
    // 0x801E2028: nop

    // 0x801E202C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801E2030: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E2034: b           L_801E2054
    // 0x801E2038: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801E2054;
    // 0x801E2038: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801E203C:
    // 0x801E203C: b           L_801E2054
    // 0x801E2040: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801E2054;
    // 0x801E2040: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801E2044: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_801E2048:
    // 0x801E2048: nop

    // 0x801E204C: bltz        $a1, L_801E203C
    if (SIGNED(ctx->r5) < 0) {
        // 0x801E2050: nop
    
            goto L_801E203C;
    }
    // 0x801E2050: nop

L_801E2054:
    // 0x801E2054: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E2058: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x801E205C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x801E2060: jal         0x801E3D04
    // 0x801E2064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3D04_59FC14(rdram, ctx);
        goto after_1;
    // 0x801E2064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E2068: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E206C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E2070: lhu         $t0, 0x94($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X94);
    // 0x801E2074: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2078: b           L_801E2090
    // 0x801E207C: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
        goto L_801E2090;
    // 0x801E207C: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x801E2080: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801E2084:
    // 0x801E2084: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E208C: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
L_801E2090:
    // 0x801E2090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2098: jr          $ra
    // 0x801E209C: nop

    TRACE_RETURN()
    return;
    // 0x801E209C: nop

;}
RECOMP_FUNC void func_801D7F20_593E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7F20: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D7F24: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D7F28: lhu         $t6, -0x2E2C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2E2C);
    // 0x801D7F2C: lhu         $a2, -0x2E60($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2E60);
    // 0x801D7F30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D7F34: addiu       $t7, $t6, 0x4000
    ctx->r15 = ADD32(ctx->r14, 0X4000);
    // 0x801D7F38: addiu       $t9, $a2, 0x4000
    ctx->r25 = ADD32(ctx->r6, 0X4000);
    // 0x801D7F3C: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801D7F40: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801D7F44: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801D7F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7F4C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801D7F50: beq         $at, $zero, L_801D7FD8
    if (ctx->r1 == 0) {
        // 0x801D7F54: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_801D7FD8;
    }
    // 0x801D7F54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D7F58: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x801D7F5C: jal         0x80003D88
    // 0x801D7F60: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80003D88_4988(rdram, ctx);
        goto after_0;
    // 0x801D7F60: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x801D7F64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7F68: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D7F6C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D7F70: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7F74: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D7F78: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D7F7C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D7F80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7F84: lwc1        $f16, -0x2E30($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7F88: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D7F8C: addiu       $t1, $zero, 0x3F00
    ctx->r9 = ADD32(0, 0X3F00);
    // 0x801D7F90: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D7F94: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x801D7F98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D7F9C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7FA0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D7FA4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D7FA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D7FAC: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801D7FB0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D7FB4: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x801D7FB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D7FBC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801D7FC0: mul.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x801D7FC4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801D7FC8: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D7FCC: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D7FD0: jal         0x801D56D0
    // 0x801D7FD4: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_1;
    // 0x801D7FD4: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801D7FD8:
    // 0x801D7FD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7FDC: lwc1        $f8, -0x2E18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D7FE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7FE4: lwc1        $f10, -0x2E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7FE8: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x801D7FEC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D7FF0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801D7FF4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7FF8: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x801D7FFC: bc1f        L_801D801C
    if (!c1cs) {
        // 0x801D8000: nop
    
            goto L_801D801C;
    }
    // 0x801D8000: nop

    // 0x801D8004: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D8008: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D800C: jal         0x801D8034
    // 0x801D8010: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_801D8034_593F44(rdram, ctx);
        goto after_2;
    // 0x801D8010: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x801D8014: b           L_801D8028
    // 0x801D8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8028;
    // 0x801D8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D801C:
    // 0x801D801C: jal         0x801D8034
    // 0x801D8020: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    func_801D8034_593F44(rdram, ctx);
        goto after_3;
    // 0x801D8020: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    after_3:
    // 0x801D8024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D8028:
    // 0x801D8028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D802C: jr          $ra
    // 0x801D8030: nop

    TRACE_RETURN()
    return;
    // 0x801D8030: nop

;}
RECOMP_FUNC void func_801E14E8_59D3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14EC: jr          $ra
    // 0x801E14F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EF86C_5AB77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF86C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801EF870: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EF874: jr          $ra
    // 0x801EF878: sb          $t6, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF878: sb          $t6, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801F093C_5AC84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F093C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0940: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F0944: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x801F0948: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F094C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0950: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F0954: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801F0958: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F095C: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F0960: jal         0x80034E08
    // 0x801F0964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801F0964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F0968: beq         $v0, $zero, L_801F09A0
    if (ctx->r2 == 0) {
        // 0x801F096C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F09A0;
    }
    // 0x801F096C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F0970: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F0974: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801F0978: jal         0x801EE4AC
    // 0x801F097C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_1;
    // 0x801F097C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801F0980: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F0984: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F0988: jal         0x80035EEC
    // 0x801F098C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801F098C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x801F0990: bne         $v0, $zero, L_801F09A0
    if (ctx->r2 != 0) {
        // 0x801F0994: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_801F09A0;
    }
    // 0x801F0994: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801F0998: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F099C: sb          $t8, 0x65($t9)
    MEM_B(0X65, ctx->r25) = ctx->r24;
L_801F09A0:
    // 0x801F09A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F09A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F09A8: jr          $ra
    // 0x801F09AC: nop

    TRACE_RETURN()
    return;
    // 0x801F09AC: nop

;}
RECOMP_FUNC void func_801EEBBC_5AAACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEBBC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801EEBC0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801EEBC4: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x801EEBC8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x801EEBCC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801EEBD0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801EEBD4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801EEBD8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801EEBDC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801EEBE0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801EEBE4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801EEBE8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801EEBEC: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x801EEBF0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EEBF4: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EEBF8: addiu       $t8, $t8, 0x4F28
    ctx->r24 = ADD32(ctx->r24, 0X4F28);
    // 0x801EEBFC: addiu       $t1, $t8, 0x24
    ctx->r9 = ADD32(ctx->r24, 0X24);
    // 0x801EEC00: addiu       $t7, $sp, 0x94
    ctx->r15 = ADD32(ctx->r29, 0X94);
    // 0x801EEC04: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
L_801EEC08:
    // 0x801EEC08: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EEC0C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801EEC10: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801EEC14: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801EEC18: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801EEC1C: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801EEC20: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801EEC24: bne         $t8, $t1, L_801EEC08
    if (ctx->r24 != ctx->r9) {
        // 0x801EEC28: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801EEC08;
    }
    // 0x801EEC28: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x801EEC2C: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x801EEC30: subu        $t2, $t2, $a2
    ctx->r10 = SUB32(ctx->r10, ctx->r6);
    // 0x801EEC34: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801EEC38: addiu       $t3, $t3, 0x4E78
    ctx->r11 = ADD32(ctx->r11, 0X4E78);
    // 0x801EEC3C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801EEC40: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x801EEC44: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801EEC48: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x801EEC4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EEC50: lwc1        $f20, -0x414C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X414C);
    // 0x801EEC54: addiu       $s3, $s3, 0x4EA4
    ctx->r19 = ADD32(ctx->r19, 0X4EA4);
    // 0x801EEC58: addiu       $s7, $s7, 0x4EA0
    ctx->r23 = ADD32(ctx->r23, 0X4EA0);
    // 0x801EEC5C: addiu       $s6, $s6, 0x4E9C
    ctx->r22 = ADD32(ctx->r22, 0X4E9C);
    // 0x801EEC60: addu        $s5, $t2, $t3
    ctx->r21 = ADD32(ctx->r10, ctx->r11);
    // 0x801EEC64: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x801EEC68: addiu       $s4, $a0, 0x9C
    ctx->r20 = ADD32(ctx->r4, 0X9C);
    // 0x801EEC6C: addiu       $fp, $a0, 0xA0
    ctx->r30 = ADD32(ctx->r4, 0XA0);
L_801EEC70:
    // 0x801EEC70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EEC74: addiu       $s2, $s0, 0x80
    ctx->r18 = ADD32(ctx->r16, 0X80);
    // 0x801EEC78: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801EEC7C: addiu       $a1, $a1, 0x4DA0
    ctx->r5 = ADD32(ctx->r5, 0X4DA0);
    // 0x801EEC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEC84: jal         0x801EE750
    // 0x801EEC88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EE750_5AA660(rdram, ctx);
        goto after_0;
    // 0x801EEC88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801EEC8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEC90: jal         0x801EF684
    // 0x801EEC94: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_801EF684_5AB594(rdram, ctx);
        goto after_1;
    // 0x801EEC94: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x801EEC98: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801EEC9C: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801EECA0: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801EECA4: lwc1        $f16, 0x4($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X4);
    // 0x801EECA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EECAC: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x801EECB0: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EECB4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EECB8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801EECBC: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x801EECC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EECC4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801EECC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EECCC: jal         0x801EE530
    // 0x801EECD0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_2;
    // 0x801EECD0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801EECD4: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x801EECD8: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x801EECDC: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x801EECE0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801EECE4: sb          $t4, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r12;
    // 0x801EECE8: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    // 0x801EECEC: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x801EECF0: lbu         $t5, 0x0($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X0);
    // 0x801EECF4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EECF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EECFC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801EED00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801EED04: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801EED08: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x801EED0C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EED10: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EED14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EED18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EED1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EED20: jal         0x801DC554
    // 0x801EED24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801EED24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_3:
    // 0x801EED28: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801EED2C: addiu       $t1, $t1, 0x4EA7
    ctx->r9 = ADD32(ctx->r9, 0X4EA7);
    // 0x801EED30: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x801EED34: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x801EED38: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x801EED3C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x801EED40: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801EED44: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x801EED48: bne         $s3, $t1, L_801EEC70
    if (ctx->r19 != ctx->r9) {
        // 0x801EED4C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EEC70;
    }
    // 0x801EED4C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801EED50: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x801EED54: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801EED58: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801EED5C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801EED60: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801EED64: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801EED68: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801EED6C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801EED70: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801EED74: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x801EED78: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x801EED7C: jr          $ra
    // 0x801EED80: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x801EED80: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_801EAE58_5A6D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAE58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EAE5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EAE60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EAE64: jal         0x801EAE88
    // 0x801EAE68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EAE88_5A6D98(rdram, ctx);
        goto after_0;
    // 0x801EAE68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EAE6C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801EAE70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EAE74: sb          $t6, 0x65($t7)
    MEM_B(0X65, ctx->r15) = ctx->r14;
    // 0x801EAE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EAE7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EAE80: jr          $ra
    // 0x801EAE84: nop

    TRACE_RETURN()
    return;
    // 0x801EAE84: nop

;}
RECOMP_FUNC void func_801EE3FC_5AA30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE3FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801EE400: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801EE404: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801EE408: jr          $ra
    // 0x801EE40C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x801EE40C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_801D7720_593630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7720: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D7724: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7728: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D772C: jal         0x801D7818
    // 0x801D7730: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_801D7818_593728(rdram, ctx);
        goto after_0;
    // 0x801D7730: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D7734: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D7738: addiu       $v1, $v1, -0x2E28
    ctx->r3 = ADD32(ctx->r3, -0X2E28);
    // 0x801D773C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x801D7740: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D7744: lhu         $t6, -0x2E20($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2E20);
    // 0x801D7748: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D774C: lhu         $t9, -0x2E1E($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E1E);
    // 0x801D7750: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D7754: lhu         $t1, -0x2E2A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E2A);
    // 0x801D7758: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x801D775C: subu        $a0, $t8, $t9
    ctx->r4 = SUB32(ctx->r24, ctx->r25);
    // 0x801D7760: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x801D7764: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x801D7768: addiu       $t3, $t2, 0x20
    ctx->r11 = ADD32(ctx->r10, 0X20);
    // 0x801D776C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801D7770: slti        $at, $t4, 0x41
    ctx->r1 = SIGNED(ctx->r12) < 0X41 ? 1 : 0;
    // 0x801D7774: beq         $at, $zero, L_801D7784
    if (ctx->r1 == 0) {
        // 0x801D7778: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_801D7784;
    }
    // 0x801D7778: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x801D777C: b           L_801D7808
    // 0x801D7780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D7808;
    // 0x801D7780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D7784:
    // 0x801D7784: jal         0x80003D88
    // 0x801D7788: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80003D88_4988(rdram, ctx);
        goto after_1;
    // 0x801D7788: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x801D778C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7790: lwc1        $f2, -0x2E30($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7794: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D7798: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D779C: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D77A0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D77A4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D77A8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D77AC: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D77B0: addiu       $t5, $zero, 0x3F00
    ctx->r13 = ADD32(0, 0X3F00);
    // 0x801D77B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D77B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D77BC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801D77C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D77C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D77C8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D77CC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801D77D0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801D77D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D77D8: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x801D77DC: jal         0x801D56D0
    // 0x801D77E0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_2;
    // 0x801D77E0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801D77E4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x801D77E8: beq         $t6, $zero, L_801D7804
    if (ctx->r14 == 0) {
        // 0x801D77EC: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_801D7804;
    }
    // 0x801D77EC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801D77F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D77F4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801D77F8: jal         0x801D72D4
    // 0x801D77FC: sb          $v1, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r3;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_3;
    // 0x801D77FC: sb          $v1, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r3;
    after_3:
    // 0x801D7800: lbu         $v1, 0x29($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X29);
L_801D7804:
    // 0x801D7804: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801D7808:
    // 0x801D7808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D780C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D7810: jr          $ra
    // 0x801D7814: nop

    TRACE_RETURN()
    return;
    // 0x801D7814: nop

;}
RECOMP_FUNC void func_801DD2C4_5991D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD2C4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DD2C8: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x801DD2CC: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x801DD2D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD2D4: beq         $v0, $zero, L_801DD2FC
    if (ctx->r2 == 0) {
        // 0x801DD2D8: nop
    
            goto L_801DD2FC;
    }
    // 0x801DD2D8: nop

    // 0x801DD2DC: beq         $v0, $a1, L_801DD304
    if (ctx->r2 == ctx->r5) {
        // 0x801DD2E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801DD304;
    }
    // 0x801DD2E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DD2E4: beq         $v0, $at, L_801DD360
    if (ctx->r2 == ctx->r1) {
        // 0x801DD2E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801DD360;
    }
    // 0x801DD2E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DD2EC: beql        $v0, $at, L_801DD3A8
    if (ctx->r2 == ctx->r1) {
        // 0x801DD2F0: lw          $t1, 0x5C($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X5C);
            goto L_801DD3A8;
    }
    goto skip_0;
    // 0x801DD2F0: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    skip_0:
    // 0x801DD2F4: jr          $ra
    // 0x801DD2F8: nop

    TRACE_RETURN()
    return;
    // 0x801DD2F8: nop

L_801DD2FC:
    // 0x801DD2FC: jr          $ra
    // 0x801DD300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DD300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD304:
    // 0x801DD304: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD308: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801DD30C: addiu       $t0, $t0, -0x39F8
    ctx->r8 = ADD32(ctx->r8, -0X39F8);
    // 0x801DD310: sh          $zero, 0x36($t6)
    MEM_H(0X36, ctx->r14) = 0;
    // 0x801DD314: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD318: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801DD31C: sb          $zero, 0x68($t7)
    MEM_B(0X68, ctx->r15) = 0;
    // 0x801DD320: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD324: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DD328: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801DD32C: lw          $t1, 0xB4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XB4);
    // 0x801DD330: beql        $t1, $zero, L_801DD348
    if (ctx->r9 == 0) {
        // 0x801DD334: lw          $t3, 0xC4($v0)
        ctx->r11 = MEM_W(ctx->r2, 0XC4);
            goto L_801DD348;
    }
    goto skip_1;
    // 0x801DD334: lw          $t3, 0xC4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC4);
    skip_1:
    // 0x801DD338: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
    // 0x801DD33C: jr          $ra
    // 0x801DD340: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801DD340: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801DD344: lw          $t3, 0xC4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC4);
L_801DD348:
    // 0x801DD348: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x801DD34C: beq         $t3, $zero, L_801DD3BC
    if (ctx->r11 == 0) {
        // 0x801DD350: nop
    
            goto L_801DD3BC;
    }
    // 0x801DD350: nop

    // 0x801DD354: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
    // 0x801DD358: jr          $ra
    // 0x801DD35C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801DD35C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801DD360:
    // 0x801DD360: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD364: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801DD368: sh          $zero, 0x36($t5)
    MEM_H(0X36, ctx->r13) = 0;
    // 0x801DD36C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD370: sb          $zero, 0x68($t6)
    MEM_B(0X68, ctx->r14) = 0;
    // 0x801DD374: lbu         $t7, 0x60($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD378: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DD37C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DD380: lw          $t9, -0x3934($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3934);
    // 0x801DD384: beq         $t9, $zero, L_801DD398
    if (ctx->r25 == 0) {
        // 0x801DD388: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_801DD398;
    }
    // 0x801DD388: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x801DD38C: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    // 0x801DD390: jr          $ra
    // 0x801DD394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801DD394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801DD398:
    // 0x801DD398: sw          $a1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r5;
    // 0x801DD39C: jr          $ra
    // 0x801DD3A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801DD3A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801DD3A4: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
L_801DD3A8:
    // 0x801DD3A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801DD3AC: sh          $zero, 0x36($t1)
    MEM_H(0X36, ctx->r9) = 0;
    // 0x801DD3B0: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD3B4: sb          $zero, 0x68($t2)
    MEM_B(0X68, ctx->r10) = 0;
    // 0x801DD3B8: sw          $a1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r5;
L_801DD3BC:
    // 0x801DD3BC: jr          $ra
    // 0x801DD3C0: nop

    TRACE_RETURN()
    return;
    // 0x801DD3C0: nop

;}
RECOMP_FUNC void func_801F0CE4_5ACBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0CEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F0CF0: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    // 0x801F0CF4: jal         0x801E8C44
    // 0x801F0CF8: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F0CF8: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_0:
    // 0x801F0CFC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x801F0D00: bne         $t7, $zero, L_801F0D3C
    if (ctx->r15 != 0) {
        // 0x801F0D04: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_801F0D3C;
    }
    // 0x801F0D04: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801F0D08: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801F0D0C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x801F0D10: jal         0x801E8C44
    // 0x801F0D14: lw          $a0, 0x84($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X84);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_1;
    // 0x801F0D14: lw          $a0, 0x84($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X84);
    after_1:
    // 0x801F0D18: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x801F0D1C: bne         $t9, $zero, L_801F0D3C
    if (ctx->r25 != 0) {
        // 0x801F0D20: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_801F0D3C;
    }
    // 0x801F0D20: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801F0D24: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x801F0D28: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x801F0D2C: jal         0x801E8C44
    // 0x801F0D30: lw          $a0, 0x84($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X84);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_2;
    // 0x801F0D30: lw          $a0, 0x84($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X84);
    after_2:
    // 0x801F0D34: sltu        $t1, $zero, $v0
    ctx->r9 = 0 < ctx->r2 ? 1 : 0;
    // 0x801F0D38: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_801F0D3C:
    // 0x801F0D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0D44: jr          $ra
    // 0x801F0D48: nop

    TRACE_RETURN()
    return;
    // 0x801F0D48: nop

;}
RECOMP_FUNC void func_801DF3D8_59B2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF3D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF3DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF3E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF3E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF3E8: jal         0x801E8390
    // 0x801DF3EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E8390_5A42A0(rdram, ctx);
        goto after_0;
    // 0x801DF3EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF3F0: bnel        $v0, $zero, L_801DF594
    if (ctx->r2 != 0) {
        // 0x801DF3F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF594;
    }
    goto skip_0;
    // 0x801DF3F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DF3F8: jal         0x801E5328
    // 0x801DF3FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5328_5A1238(rdram, ctx);
        goto after_1;
    // 0x801DF3FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF400: beql        $v0, $zero, L_801DF428
    if (ctx->r2 == 0) {
        // 0x801DF404: lbu         $t6, 0x90($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X90);
            goto L_801DF428;
    }
    goto skip_1;
    // 0x801DF404: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    skip_1:
    // 0x801DF408: jal         0x801E20A0
    // 0x801DF40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_2;
    // 0x801DF40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF414: jal         0x801DACDC
    // 0x801DF418: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DF418: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x801DF41C: b           L_801DF594
    // 0x801DF420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF594;
    // 0x801DF420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF424: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
L_801DF428:
    // 0x801DF428: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DF42C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF430: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DF434: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DF438: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DF43C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DF440: lhu         $t8, 0x7DB4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB4);
    // 0x801DF444: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801DF448: bne         $t9, $zero, L_801DF464
    if (ctx->r25 != 0) {
        // 0x801DF44C: nop
    
            goto L_801DF464;
    }
    // 0x801DF44C: nop

    // 0x801DF450: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF454: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DF458: lbu         $t1, 0x68($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X68);
    // 0x801DF45C: bne         $t1, $at, L_801DF474
    if (ctx->r9 != ctx->r1) {
        // 0x801DF460: nop
    
            goto L_801DF474;
    }
    // 0x801DF460: nop

L_801DF464:
    // 0x801DF464: jal         0x801E4624
    // 0x801DF468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E4624_5A0534(rdram, ctx);
        goto after_4;
    // 0x801DF468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x801DF46C: b           L_801DF594
    // 0x801DF470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF594;
    // 0x801DF470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF474:
    // 0x801DF474: jal         0x801E79F4
    // 0x801DF478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E79F4_5A3904(rdram, ctx);
        goto after_5;
    // 0x801DF478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DF47C: bne         $v0, $zero, L_801DF590
    if (ctx->r2 != 0) {
        // 0x801DF480: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_801DF590;
    }
    // 0x801DF480: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801DF484: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    // 0x801DF488: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DF48C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x801DF490: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801DF494: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801DF498: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801DF49C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x801DF4A0: addiu       $t5, $t5, -0x3340
    ctx->r13 = ADD32(ctx->r13, -0X3340);
    // 0x801DF4A4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x801DF4A8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DF4AC: lwc1        $f0, 0x30FC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
    // 0x801DF4B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF4B8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801DF4BC: nop

    // 0x801DF4C0: bc1fl       L_801DF4D4
    if (!c1cs) {
        // 0x801DF4C4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801DF4D4;
    }
    goto skip_2;
    // 0x801DF4C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801DF4C8: b           L_801DF4D4
    // 0x801DF4CC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801DF4D4;
    // 0x801DF4CC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801DF4D0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801DF4D4:
    // 0x801DF4D4: ldc1        $f6, -0x4E50($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4E50);
    // 0x801DF4D8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801DF4DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF4E0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801DF4E4: nop

    // 0x801DF4E8: bc1tl       L_801DF50C
    if (c1cs) {
        // 0x801DF4EC: lhu         $t6, 0x30F4($v0)
        ctx->r14 = MEM_HU(ctx->r2, 0X30F4);
            goto L_801DF50C;
    }
    goto skip_3;
    // 0x801DF4EC: lhu         $t6, 0x30F4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X30F4);
    skip_3:
    // 0x801DF4F0: lwc1        $f8, -0x4E48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4E48);
    // 0x801DF4F4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x801DF4F8: jal         0x801DACDC
    // 0x801DF4FC: swc1        $f8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f8.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801DF4FC: swc1        $f8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f8.u32l;
    after_6:
    // 0x801DF500: b           L_801DF594
    // 0x801DF504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF594;
    // 0x801DF504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF508: lhu         $t6, 0x30F4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X30F4);
L_801DF50C:
    // 0x801DF50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF510: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x801DF514: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x801DF518: bne         $t7, $zero, L_801DF530
    if (ctx->r15 != 0) {
        // 0x801DF51C: nop
    
            goto L_801DF530;
    }
    // 0x801DF51C: nop

    // 0x801DF520: lhu         $t8, 0x30F2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X30F2);
    // 0x801DF524: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x801DF528: beq         $t9, $zero, L_801DF540
    if (ctx->r25 == 0) {
        // 0x801DF52C: nop
    
            goto L_801DF540;
    }
    // 0x801DF52C: nop

L_801DF530:
    // 0x801DF530: jal         0x801DACDC
    // 0x801DF534: swc1        $f12, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f12.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801DF534: swc1        $f12, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f12.u32l;
    after_7:
    // 0x801DF538: b           L_801DF594
    // 0x801DF53C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF594;
    // 0x801DF53C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF540:
    // 0x801DF540: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DF544: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DF548: jalr        $t9
    // 0x801DF54C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x801DF54C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x801DF550: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF554: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DF558: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801DF55C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DF560: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801DF564: lwc1        $f10, 0x28($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801DF568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF56C: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801DF570: nop

    // 0x801DF574: bc1fl       L_801DF590
    if (!c1cs) {
        // 0x801DF578: swc1        $f12, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->f12.u32l;
            goto L_801DF590;
    }
    goto skip_4;
    // 0x801DF578: swc1        $f12, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f12.u32l;
    skip_4:
    // 0x801DF57C: jal         0x801DACDC
    // 0x801DF580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801DF580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x801DF584: b           L_801DF594
    // 0x801DF588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF594;
    // 0x801DF588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF58C: swc1        $f12, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f12.u32l;
L_801DF590:
    // 0x801DF590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF594:
    // 0x801DF594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF59C: jr          $ra
    // 0x801DF5A0: nop

    TRACE_RETURN()
    return;
    // 0x801DF5A0: nop

;}
RECOMP_FUNC void func_801FB934_5B7844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB934: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x801FB938: addiu       $a2, $a2, -0x3340
    ctx->r6 = ADD32(ctx->r6, -0X3340);
    // 0x801FB93C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FB940: addiu       $at, $a2, 0x7FFF
    ctx->r1 = ADD32(ctx->r6, 0X7FFF);
    // 0x801FB944: addiu       $t0, $t0, -0x62DC
    ctx->r8 = ADD32(ctx->r8, -0X62DC);
    // 0x801FB948: sb          $zero, 0x3011($at)
    MEM_B(0X3011, ctx->r1) = 0;
    // 0x801FB94C: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x801FB950: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x801FB954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801FB958: beq         $a3, $t6, L_801FB9A4
    if (ctx->r7 == ctx->r14) {
        // 0x801FB95C: addiu       $v1, $a2, 0x7FFF
        ctx->r3 = ADD32(ctx->r6, 0X7FFF);
            goto L_801FB9A4;
    }
    // 0x801FB95C: addiu       $v1, $a2, 0x7FFF
    ctx->r3 = ADD32(ctx->r6, 0X7FFF);
    // 0x801FB960: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FB964: addiu       $a0, $t7, -0x62DC
    ctx->r4 = ADD32(ctx->r15, -0X62DC);
    // 0x801FB968: lhu         $a1, 0x0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X0);
    // 0x801FB96C: lhu         $v1, 0x2DF3($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2DF3);
L_801FB970:
    // 0x801FB970: bne         $v1, $a1, L_801FB988
    if (ctx->r3 != ctx->r5) {
        // 0x801FB974: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801FB988;
    }
    // 0x801FB974: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801FB978: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x801FB97C: addiu       $at, $a2, 0x7FFF
    ctx->r1 = ADD32(ctx->r6, 0X7FFF);
    // 0x801FB980: jr          $ra
    // 0x801FB984: sb          $t8, 0x3011($at)
    MEM_B(0X3011, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801FB984: sb          $t8, 0x3011($at)
    MEM_B(0X3011, ctx->r1) = ctx->r24;
L_801FB988:
    // 0x801FB988: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x801FB98C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801FB990: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x801FB994: lhu         $a1, 0x0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X0);
    // 0x801FB998: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801FB99C: bne         $a3, $a1, L_801FB970
    if (ctx->r7 != ctx->r5) {
        // 0x801FB9A0: nop
    
            goto L_801FB970;
    }
    // 0x801FB9A0: nop

L_801FB9A4:
    // 0x801FB9A4: jr          $ra
    // 0x801FB9A8: nop

    TRACE_RETURN()
    return;
    // 0x801FB9A8: nop

;}
RECOMP_FUNC void func_801DEF18_59AE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEF18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DEF1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DEF20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DEF24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DEF28: lhu         $t6, 0x98($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X98);
    // 0x801DEF2C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DEF30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DEF34: bne         $t6, $zero, L_801DEF60
    if (ctx->r14 != 0) {
        // 0x801DEF38: addiu       $t9, $t9, -0x4A54
        ctx->r25 = ADD32(ctx->r25, -0X4A54);
            goto L_801DEF60;
    }
    // 0x801DEF38: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DEF3C: jal         0x801E3324
    // 0x801DEF40: nop

    func_801E3324_59F234(rdram, ctx);
        goto after_0;
    // 0x801DEF40: nop

    after_0:
    // 0x801DEF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEF48: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DEF4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DEF50: jal         0x801DAC7C
    // 0x801DEF54: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_1;
    // 0x801DEF54: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_1:
    // 0x801DEF58: b           L_801DEFAC
    // 0x801DEF5C: nop

        goto L_801DEFAC;
    // 0x801DEF5C: nop

L_801DEF60:
    // 0x801DEF60: jalr        $t9
    // 0x801DEF64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801DEF64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801DEF68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEF6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEF70: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801DEF74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEF78: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DEF7C: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801DEF80: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DEF84: nop

    // 0x801DEF88: bc1fl       L_801DEFA4
    if (!c1cs) {
        // 0x801DEF8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DEFA4;
    }
    goto skip_0;
    // 0x801DEF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801DEF90: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801DEF94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEF98: jal         0x801DACDC
    // 0x801DEF9C: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DEF9C: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    after_3:
    // 0x801DEFA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801DEFA4:
    // 0x801DEFA4: jal         0x801E3D04
    // 0x801DEFA8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_801E3D04_59FC14(rdram, ctx);
        goto after_4;
    // 0x801DEFA8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_4:
L_801DEFAC:
    // 0x801DEFAC: jal         0x801E84A4
    // 0x801DEFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E84A4_5A43B4(rdram, ctx);
        goto after_5;
    // 0x801DEFB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DEFB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEFB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DEFBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DEFC0: jr          $ra
    // 0x801DEFC4: nop

    TRACE_RETURN()
    return;
    // 0x801DEFC4: nop

;}
RECOMP_FUNC void func_801DB768_597678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB76C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x801DB770: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801DB774: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801DB778: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801DB77C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801DB780: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801DB784: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB788: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801DB78C: lhu         $v0, 0x20($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X20);
    // 0x801DB790: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DB794: beq         $t0, $zero, L_801DB87C
    if (ctx->r8 == 0) {
        // 0x801DB798: lw          $a3, 0x18($a0)
        ctx->r7 = MEM_W(ctx->r4, 0X18);
            goto L_801DB87C;
    }
    // 0x801DB798: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x801DB79C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801DB7A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801DB7A4: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801DB7A8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DB7AC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DB7B0: lhu         $t7, 0x20($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X20);
L_801DB7B4:
    // 0x801DB7B4: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801DB7B8: beql        $at, $zero, L_801DB880
    if (ctx->r1 == 0) {
        // 0x801DB7BC: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_801DB880;
    }
    goto skip_0;
    // 0x801DB7BC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_0:
    // 0x801DB7C0: lhu         $t8, 0x5C($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X5C);
    // 0x801DB7C4: bnel        $a2, $t8, L_801DB874
    if (ctx->r6 != ctx->r24) {
        // 0x801DB7C8: lw          $t0, 0x0($t0)
        ctx->r8 = MEM_W(ctx->r8, 0X0);
            goto L_801DB874;
    }
    goto skip_1;
    // 0x801DB7C8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    skip_1:
    // 0x801DB7CC: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x801DB7D0: lwc1        $f14, 0xC($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801DB7D4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DB7D8: add.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x801DB7DC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801DB7E0: nop

    // 0x801DB7E4: bc1fl       L_801DB7FC
    if (!c1cs) {
        // 0x801DB7E8: sub.s       $f16, $f12, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_801DB7FC;
    }
    goto skip_2;
    // 0x801DB7E8: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    skip_2:
    // 0x801DB7EC: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801DB7F0: b           L_801DB7FC
    // 0x801DB7F4: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
        goto L_801DB7FC;
    // 0x801DB7F4: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x801DB7F8: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
L_801DB7FC:
    // 0x801DB7FC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x801DB800: nop

    // 0x801DB804: bc1tl       L_801DB874
    if (c1cs) {
        // 0x801DB808: lw          $t0, 0x0($t0)
        ctx->r8 = MEM_W(ctx->r8, 0X0);
            goto L_801DB874;
    }
    goto skip_3;
    // 0x801DB808: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    skip_3:
    // 0x801DB80C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DB810: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801DB814: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DB818: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801DB81C: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801DB820: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801DB824: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801DB828: nop

    // 0x801DB82C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801DB830: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DB834: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801DB838: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x801DB83C: nop

    // 0x801DB840: bc1t        L_801DB870
    if (c1cs) {
        // 0x801DB844: nop
    
            goto L_801DB870;
    }
    // 0x801DB844: nop

    // 0x801DB848: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x801DB84C: nop

    // 0x801DB850: bc1tl       L_801DB86C
    if (c1cs) {
        // 0x801DB854: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801DB86C;
    }
    goto skip_4;
    // 0x801DB854: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_4:
    // 0x801DB858: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801DB85C: nop

    // 0x801DB860: bc1fl       L_801DB874
    if (!c1cs) {
        // 0x801DB864: lw          $t0, 0x0($t0)
        ctx->r8 = MEM_W(ctx->r8, 0X0);
            goto L_801DB874;
    }
    goto skip_5;
    // 0x801DB864: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    skip_5:
    // 0x801DB868: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801DB86C:
    // 0x801DB86C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_801DB870:
    // 0x801DB870: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
L_801DB874:
    // 0x801DB874: bnel        $t0, $zero, L_801DB7B4
    if (ctx->r8 != 0) {
        // 0x801DB878: lhu         $t7, 0x20($t0)
        ctx->r15 = MEM_HU(ctx->r8, 0X20);
            goto L_801DB7B4;
    }
    goto skip_6;
    // 0x801DB878: lhu         $t7, 0x20($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X20);
    skip_6:
L_801DB87C:
    // 0x801DB87C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_801DB880:
    // 0x801DB880: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x801DB884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB888: jr          $ra
    // 0x801DB88C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801DB88C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801CF960_58B870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF960: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x801CF964: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CF968: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CF96C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801CF970: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801CF974: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CF978: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801CF97C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF980: addiu       $v0, $v0, -0x3548
    ctx->r2 = ADD32(ctx->r2, -0X3548);
    // 0x801CF984: sw          $zero, -0x34A4($at)
    MEM_W(-0X34A4, ctx->r1) = 0;
    // 0x801CF988: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x801CF98C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801CF990: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF994: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801CF998: swc1        $f6, -0x3550($at)
    MEM_W(-0X3550, ctx->r1) = ctx->f6.u32l;
    // 0x801CF99C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CF9A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF9A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF9A8: swc1        $f8, -0x354C($at)
    MEM_W(-0X354C, ctx->r1) = ctx->f8.u32l;
    // 0x801CF9AC: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CF9B0: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x801CF9B4: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CF9B8: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x801CF9BC: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CF9C0: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x801CF9C4: lhu         $t6, 0x94($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X94);
    // 0x801CF9C8: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x801CF9CC: jal         0x801CFE24
    // 0x801CF9D0: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    func_801CFE24_58BD34(rdram, ctx);
        goto after_0;
    // 0x801CF9D0: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    after_0:
    // 0x801CF9D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CF9D8: lhu         $v1, -0x3598($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3598);
    // 0x801CF9DC: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x801CF9E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF9E4: beql        $v1, $zero, L_801CFAB0
    if (ctx->r3 == 0) {
        // 0x801CF9E8: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801CFAB0;
    }
    goto skip_0;
    // 0x801CF9E8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x801CF9EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CF9F0: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CF9F4: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x801CF9F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CF9FC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x801CFA00: nop

    // 0x801CFA04: bc1fl       L_801CFA18
    if (!c1cs) {
        // 0x801CFA08: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801CFA18;
    }
    goto skip_1;
    // 0x801CFA08: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_1:
    // 0x801CFA0C: b           L_801CFA18
    // 0x801CFA10: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801CFA18;
    // 0x801CFA10: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801CFA14: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801CFA18:
    // 0x801CFA18: ldc1        $f12, -0x5560($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0X5560);
    // 0x801CFA1C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801CFA20: c.lt.d      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.d < ctx->f12.d;
    // 0x801CFA24: nop

    // 0x801CFA28: bc1f        L_801CFA98
    if (!c1cs) {
        // 0x801CFA2C: nop
    
            goto L_801CFA98;
    }
    // 0x801CFA2C: nop

    // 0x801CFA30: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CFA34: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CFA38: nop

    // 0x801CFA3C: bc1fl       L_801CFA50
    if (!c1cs) {
        // 0x801CFA40: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CFA50;
    }
    goto skip_2;
    // 0x801CFA40: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801CFA44: b           L_801CFA50
    // 0x801CFA48: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CFA50;
    // 0x801CFA48: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CFA4C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CFA50:
    // 0x801CFA50: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801CFA54: c.lt.d      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.d < ctx->f12.d;
    // 0x801CFA58: nop

    // 0x801CFA5C: bc1f        L_801CFA98
    if (!c1cs) {
        // 0x801CFA60: nop
    
            goto L_801CFA98;
    }
    // 0x801CFA60: nop

    // 0x801CFA64: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CFA68: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CFA6C: nop

    // 0x801CFA70: bc1fl       L_801CFA84
    if (!c1cs) {
        // 0x801CFA74: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CFA84;
    }
    goto skip_3;
    // 0x801CFA74: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x801CFA78: b           L_801CFA84
    // 0x801CFA7C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CFA84;
    // 0x801CFA7C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CFA80: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CFA84:
    // 0x801CFA84: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801CFA88: c.lt.d      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.d < ctx->f12.d;
    // 0x801CFA8C: nop

    // 0x801CFA90: bc1tl       L_801CFAB0
    if (c1cs) {
        // 0x801CFA94: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801CFAB0;
    }
    goto skip_4;
    // 0x801CFA94: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_4:
L_801CFA98:
    // 0x801CFA98: jal         0x801CFE24
    // 0x801CFA9C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_801CFE24_58BD34(rdram, ctx);
        goto after_1;
    // 0x801CFA9C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_1:
    // 0x801CFAA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CFAA4: lhu         $v1, -0x3598($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3598);
    // 0x801CFAA8: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x801CFAAC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_801CFAB0:
    // 0x801CFAB0: beq         $v1, $zero, L_801CFC48
    if (ctx->r3 == 0) {
        // 0x801CFAB4: addiu       $a1, $sp, 0x70
        ctx->r5 = ADD32(ctx->r29, 0X70);
            goto L_801CFC48;
    }
    // 0x801CFAB4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x801CFAB8: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x801CFABC: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x801CFAC0: jal         0x80003F30
    // 0x801CFAC4: lhu         $a0, 0x94($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X94);
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x801CFAC4: lhu         $a0, 0x94($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X94);
    after_2:
    // 0x801CFAC8: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x801CFACC: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x801CFAD0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CFAD4: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801CFAD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CFADC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFAE0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801CFAE4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801CFAE8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801CFAEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801CFAF0: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801CFAF4: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801CFAF8: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801CFAFC: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801CFB00: mul.s       $f18, $f2, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801CFB04: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801CFB08: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801CFB0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFB10: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x801CFB14: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x801CFB18: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801CFB1C: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801CFB20: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801CFB24: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CFB28: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801CFB2C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFB30: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801CFB34: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x801CFB38: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CFB3C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801CFB40: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CFB44: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801CFB48: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CFB4C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x801CFB50: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CFB54: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801CFB58: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CFB5C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801CFB60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFB64: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801CFB68: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801CFB6C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801CFB70: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801CFB74: jal         0x80029E08
    // 0x801CFB78: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_3;
    // 0x801CFB78: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801CFB7C: bne         $v0, $zero, L_801CFC40
    if (ctx->r2 != 0) {
        // 0x801CFB80: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFC40;
    }
    // 0x801CFB80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFB84: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801CFB88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFB8C: lwc1        $f0, 0x20($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801CFB90: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x801CFB94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFB98: mul.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CFB9C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801CFBA0: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x801CFBA4: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801CFBA8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801CFBAC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801CFBB0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CFBB4: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801CFBB8: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFBBC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801CFBC0: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801CFBC4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801CFBC8: jal         0x8002EB10
    // 0x801CFBCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8002EB10_2F710(rdram, ctx);
        goto after_4;
    // 0x801CFBCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801CFBD0: lh          $t8, 0xB8($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XB8);
    // 0x801CFBD4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801CFBD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFBDC: bne         $t8, $zero, L_801CFC30
    if (ctx->r24 != 0) {
        // 0x801CFBE0: nop
    
            goto L_801CFC30;
    }
    // 0x801CFBE0: nop

    // 0x801CFBE4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CFBE8: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CFBEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CFBF0: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFBF4: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CFBF8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801CFBFC: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x801CFC00: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801CFC04: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801CFC08: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x801CFC0C: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801CFC10: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801CFC14: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x801CFC18: jal         0x801E7398
    // 0x801CFC1C: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_5;
    // 0x801CFC1C: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    after_5:
    // 0x801CFC20: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CFC24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFC28: b           L_801CFC34
    // 0x801CFC2C: sh          $t9, -0x359A($at)
    MEM_H(-0X359A, ctx->r1) = ctx->r25;
        goto L_801CFC34;
    // 0x801CFC2C: sh          $t9, -0x359A($at)
    MEM_H(-0X359A, ctx->r1) = ctx->r25;
L_801CFC30:
    // 0x801CFC30: sh          $zero, -0x3598($at)
    MEM_H(-0X3598, ctx->r1) = 0;
L_801CFC34:
    // 0x801CFC34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CFC38: b           L_801CFC48
    // 0x801CFC3C: lhu         $v1, -0x3598($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3598);
        goto L_801CFC48;
    // 0x801CFC3C: lhu         $v1, -0x3598($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3598);
L_801CFC40:
    // 0x801CFC40: sh          $zero, -0x3598($at)
    MEM_H(-0X3598, ctx->r1) = 0;
    // 0x801CFC44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CFC48:
    // 0x801CFC48: bne         $v1, $zero, L_801CFC88
    if (ctx->r3 != 0) {
        // 0x801CFC4C: lhu         $t0, 0x4E($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X4E);
            goto L_801CFC88;
    }
    // 0x801CFC4C: lhu         $t0, 0x4E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4E);
    // 0x801CFC50: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x801CFC54: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CFC58: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CFC5C: sh          $t0, 0x94($t1)
    MEM_H(0X94, ctx->r9) = ctx->r8;
    // 0x801CFC60: lw          $t2, -0x34A4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X34A4);
    // 0x801CFC64: addiu       $v0, $v0, -0x34B0
    ctx->r2 = ADD32(ctx->r2, -0X34B0);
    // 0x801CFC68: beql        $t2, $zero, L_801CFC8C
    if (ctx->r10 == 0) {
        // 0x801CFC6C: lwc1        $f18, 0x0($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
            goto L_801CFC8C;
    }
    goto skip_5;
    // 0x801CFC6C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x801CFC70: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801CFC74: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x801CFC78: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801CFC7C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x801CFC80: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CFC84: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_801CFC88:
    // 0x801CFC88: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
L_801CFC8C:
    // 0x801CFC8C: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801CFC90: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CFC94: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801CFC98: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801CFC9C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CFCA0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CFCA4: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFCA8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801CFCAC: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801CFCB0: addiu       $a0, $a0, -0x3510
    ctx->r4 = ADD32(ctx->r4, -0X3510);
    // 0x801CFCB4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801CFCB8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801CFCBC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801CFCC0: jal         0x80032850
    // 0x801CFCC4: nop

    func_80032850_33450(rdram, ctx);
        goto after_6;
    // 0x801CFCC4: nop

    after_6:
    // 0x801CFCC8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CFCCC: addiu       $a1, $a1, -0x3510
    ctx->r5 = ADD32(ctx->r5, -0X3510);
    // 0x801CFCD0: lh          $v1, 0x38($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X38);
    // 0x801CFCD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFCD8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CFCDC: sb          $v1, -0x3594($at)
    MEM_B(-0X3594, ctx->r1) = ctx->r3;
    // 0x801CFCE0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801CFCE4: bne         $v1, $at, L_801CFE04
    if (ctx->r3 != ctx->r1) {
        // 0x801CFCE8: addiu       $a0, $a0, -0x3550
        ctx->r4 = ADD32(ctx->r4, -0X3550);
            goto L_801CFE04;
    }
    // 0x801CFCE8: addiu       $a0, $a0, -0x3550
    ctx->r4 = ADD32(ctx->r4, -0X3550);
    // 0x801CFCEC: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801CFCF0: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CFCF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFCF8: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x801CFCFC: swc1        $f18, -0x354C($at)
    MEM_W(-0X354C, ctx->r1) = ctx->f18.u32l;
    // 0x801CFD00: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x801CFD04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFD08: jal         0x8001D394
    // 0x801CFD0C: swc1        $f10, -0x3548($at)
    MEM_W(-0X3548, ctx->r1) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_7;
    // 0x801CFD0C: swc1        $f10, -0x3548($at)
    MEM_W(-0X3548, ctx->r1) = ctx->f10.u32l;
    after_7:
    // 0x801CFD10: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x801CFD14: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CFD18: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CFD1C: lw          $t4, 0x5C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X5C);
    // 0x801CFD20: addiu       $a1, $a1, -0x3510
    ctx->r5 = ADD32(ctx->r5, -0X3510);
    // 0x801CFD24: addiu       $v1, $v1, -0x3524
    ctx->r3 = ADD32(ctx->r3, -0X3524);
    // 0x801CFD28: lbu         $t5, 0x58($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X58);
    // 0x801CFD2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CFD30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CFD34: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801CFD38: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CFD3C: bgez        $t5, L_801CFD50
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801CFD40: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801CFD50;
    }
    // 0x801CFD40: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CFD44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFD48: nop

    // 0x801CFD4C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801CFD50:
    // 0x801CFD50: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CFD54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFD58: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801CFD5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFD60: sub.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801CFD64: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801CFD68: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801CFD6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CFD70: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CFD74: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x801CFD78: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CFD7C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x801CFD80: nop

    // 0x801CFD84: bc1f        L_801CFDFC
    if (!c1cs) {
        // 0x801CFD88: nop
    
            goto L_801CFDFC;
    }
    // 0x801CFD88: nop

    // 0x801CFD8C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFD90: lhu         $t8, -0x359A($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X359A);
    // 0x801CFD94: sh          $t6, -0x3596($at)
    MEM_H(-0X3596, ctx->r1) = ctx->r14;
    // 0x801CFD98: lw          $t7, 0x44($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X44);
    // 0x801CFD9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFDA0: bne         $t8, $zero, L_801CFE0C
    if (ctx->r24 != 0) {
        // 0x801CFDA4: sw          $t7, -0x35A0($at)
        MEM_W(-0X35A0, ctx->r1) = ctx->r15;
            goto L_801CFE0C;
    }
    // 0x801CFDA4: sw          $t7, -0x35A0($at)
    MEM_W(-0X35A0, ctx->r1) = ctx->r15;
    // 0x801CFDA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CFDAC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CFDB0: addiu       $a0, $a0, -0x356C
    ctx->r4 = ADD32(ctx->r4, -0X356C);
    // 0x801CFDB4: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x801CFDB8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801CFDBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CFDC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFDC4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CFDC8: addiu       $a1, $a1, -0x3574
    ctx->r5 = ADD32(ctx->r5, -0X3574);
    // 0x801CFDCC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CFDD0: addiu       $v1, $v1, -0x3570
    ctx->r3 = ADD32(ctx->r3, -0X3570);
    // 0x801CFDD4: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x801CFDD8: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801CFDDC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CFDE0: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801CFDE4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CFDE8: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x801CFDEC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801CFDF0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801CFDF4: b           L_801CFE0C
    // 0x801CFDF8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
        goto L_801CFE0C;
    // 0x801CFDF8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
L_801CFDFC:
    // 0x801CFDFC: b           L_801CFE0C
    // 0x801CFE00: sh          $zero, -0x3596($at)
    MEM_H(-0X3596, ctx->r1) = 0;
        goto L_801CFE0C;
    // 0x801CFE00: sh          $zero, -0x3596($at)
    MEM_H(-0X3596, ctx->r1) = 0;
L_801CFE04:
    // 0x801CFE04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE08: sh          $zero, -0x3596($at)
    MEM_H(-0X3596, ctx->r1) = 0;
L_801CFE0C:
    // 0x801CFE0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CFE10: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
    // 0x801CFE14: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801CFE18: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801CFE1C: jr          $ra
    // 0x801CFE20: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x801CFE20: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_801E7DC0_5A3CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7DC0: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7DC4: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801E7DC8: beq         $t6, $zero, L_801E7DE0
    if (ctx->r14 == 0) {
        // 0x801E7DCC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_801E7DE0;
    }
    // 0x801E7DCC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801E7DD0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7DD4: lhu         $v0, 0x86($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X86);
    // 0x801E7DD8: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x801E7DDC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_801E7DE0:
    // 0x801E7DE0: jr          $ra
    // 0x801E7DE4: nop

    TRACE_RETURN()
    return;
    // 0x801E7DE4: nop

;}
RECOMP_FUNC void func_801F87F8_5B4708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F87F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F87FC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801F8800: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801F8804: addiu       $t2, $t2, -0x3A38
    ctx->r10 = ADD32(ctx->r10, -0X3A38);
    // 0x801F8808: sw          $zero, 0x7ADC($at)
    MEM_W(0X7ADC, ctx->r1) = 0;
    // 0x801F880C: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x801F8810: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801F8814: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F8818: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x801F881C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8820: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801F8824: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    // 0x801F8828: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x801F882C: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x801F8830: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x801F8834: addu        $a1, $t7, $a3
    ctx->r5 = ADD32(ctx->r15, ctx->r7);
    // 0x801F8838: lbu         $t8, 0x2DF6($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F883C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F8840: addiu       $t3, $t3, -0x66F4
    ctx->r11 = ADD32(ctx->r11, -0X66F4);
    // 0x801F8844: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F8848: lhu         $t6, 0x2DF8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F884C: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x801F8850: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x801F8854: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801F8858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F885C: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x801F8860: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x801F8864: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x801F8868: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F886C: beq         $v1, $zero, L_801F8898
    if (ctx->r3 == 0) {
        // 0x801F8870: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801F8898;
    }
    // 0x801F8870: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801F8874: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    // 0x801F8878: lbu         $t8, 0x2DF6($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F887C: lhu         $t5, 0x2DF8($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F8880: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801F8884: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801F8888: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x801F888C: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x801F8890: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x801F8894: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_801F8898:
    // 0x801F8898: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    // 0x801F889C: beq         $v1, $zero, L_801F88D8
    if (ctx->r3 == 0) {
        // 0x801F88A0: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_801F88D8;
    }
    // 0x801F88A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801F88A4: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x801F88A8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801F88AC: sh          $v1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r3;
    // 0x801F88B0: lbu         $t5, 0x2DF6($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F88B4: lhu         $t9, 0x2DF8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F88B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x801F88BC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801F88C0: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x801F88C4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x801F88C8: andi        $t4, $t0, 0xFFFF
    ctx->r12 = ctx->r8 & 0XFFFF;
    // 0x801F88CC: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x801F88D0: sll         $t4, $t9, 3
    ctx->r12 = S32(ctx->r25 << 3);
    // 0x801F88D4: addu        $v0, $t8, $t4
    ctx->r2 = ADD32(ctx->r24, ctx->r12);
L_801F88D8:
    // 0x801F88D8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x801F88DC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801F88E0: beq         $v1, $zero, L_801F8918
    if (ctx->r3 == 0) {
        // 0x801F88E4: sll         $t5, $t0, 1
        ctx->r13 = S32(ctx->r8 << 1);
            goto L_801F8918;
    }
    // 0x801F88E4: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x801F88E8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x801F88EC: sh          $v1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r3;
    // 0x801F88F0: lbu         $t9, 0x2DF6($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F88F4: lhu         $t6, 0x2DF8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F88F8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x801F88FC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x801F8900: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x801F8904: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x801F8908: andi        $t7, $t0, 0xFFFF
    ctx->r15 = ctx->r8 & 0XFFFF;
    // 0x801F890C: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x801F8910: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801F8914: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
L_801F8918:
    // 0x801F8918: lhu         $v1, 0x6($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6);
    // 0x801F891C: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x801F8920: addu        $t8, $a0, $t9
    ctx->r24 = ADD32(ctx->r4, ctx->r25);
    // 0x801F8924: beql        $v1, $zero, L_801F8940
    if (ctx->r3 == 0) {
        // 0x801F8928: lhu         $t6, 0x30($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X30);
            goto L_801F8940;
    }
    goto skip_0;
    // 0x801F8928: lhu         $t6, 0x30($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X30);
    skip_0:
    // 0x801F892C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x801F8930: andi        $t4, $t0, 0xFFFF
    ctx->r12 = ctx->r8 & 0XFFFF;
    // 0x801F8934: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x801F8938: sh          $v1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r3;
    // 0x801F893C: lhu         $t6, 0x30($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X30);
L_801F8940:
    // 0x801F8940: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801F8944: beql        $t6, $zero, L_801F8970
    if (ctx->r14 == 0) {
        // 0x801F8948: lhu         $v1, 0x301E($a1)
        ctx->r3 = MEM_HU(ctx->r5, 0X301E);
            goto L_801F8970;
    }
    goto skip_1;
    // 0x801F8948: lhu         $v1, 0x301E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X301E);
    skip_1:
    // 0x801F894C: lhu         $t5, 0x301E($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X301E);
    // 0x801F8950: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801F8954: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x801F8958: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801F895C: lhu         $t9, 0x7FE0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7FE0);
    // 0x801F8960: beql        $t9, $t6, L_801F8970
    if (ctx->r25 == ctx->r14) {
        // 0x801F8964: lhu         $v1, 0x301E($a1)
        ctx->r3 = MEM_HU(ctx->r5, 0X301E);
            goto L_801F8970;
    }
    goto skip_2;
    // 0x801F8964: lhu         $v1, 0x301E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X301E);
    skip_2:
    // 0x801F8968: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801F896C: lhu         $v1, 0x301E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X301E);
L_801F8970:
    // 0x801F8970: lhu         $t5, 0x2E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2E);
    // 0x801F8974: addiu       $t4, $t4, 0x7FC0
    ctx->r12 = ADD32(ctx->r12, 0X7FC0);
    // 0x801F8978: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x801F897C: beq         $t5, $zero, L_801F8994
    if (ctx->r13 == 0) {
        // 0x801F8980: addu        $v0, $t8, $t4
        ctx->r2 = ADD32(ctx->r24, ctx->r12);
            goto L_801F8994;
    }
    // 0x801F8980: addu        $v0, $t8, $t4
    ctx->r2 = ADD32(ctx->r24, ctx->r12);
    // 0x801F8984: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x801F8988: beql        $t7, $t5, L_801F8998
    if (ctx->r15 == ctx->r13) {
        // 0x801F898C: lhu         $t9, 0x10($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0X10);
            goto L_801F8998;
    }
    goto skip_3;
    // 0x801F898C: lhu         $t9, 0x10($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X10);
    skip_3:
    // 0x801F8990: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
L_801F8994:
    // 0x801F8994: lhu         $t9, 0x10($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X10);
L_801F8998:
    // 0x801F8998: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x801F899C: lhu         $t4, 0x2A($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2A);
    // 0x801F89A0: lhu         $t5, 0x28($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X28);
    // 0x801F89A4: beql        $t9, $t6, L_801F89B4
    if (ctx->r25 == ctx->r14) {
        // 0x801F89A8: lhu         $t8, 0x8($v0)
        ctx->r24 = MEM_HU(ctx->r2, 0X8);
            goto L_801F89B4;
    }
    goto skip_4;
    // 0x801F89A8: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    skip_4:
    // 0x801F89AC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801F89B0: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
L_801F89B4:
    // 0x801F89B4: beql        $t8, $t4, L_801F89C4
    if (ctx->r24 == ctx->r12) {
        // 0x801F89B8: lhu         $t7, 0x0($v0)
        ctx->r15 = MEM_HU(ctx->r2, 0X0);
            goto L_801F89C4;
    }
    goto skip_5;
    // 0x801F89B8: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    skip_5:
    // 0x801F89BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F89C0: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
L_801F89C4:
    // 0x801F89C4: beq         $t7, $t5, L_801F89D0
    if (ctx->r15 == ctx->r13) {
        // 0x801F89C8: nop
    
            goto L_801F89D0;
    }
    // 0x801F89C8: nop

    // 0x801F89CC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_801F89D0:
    // 0x801F89D0: beq         $t1, $at, L_801F8A18
    if (ctx->r9 == ctx->r1) {
        // 0x801F89D4: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_801F8A18;
    }
    // 0x801F89D4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x801F89D8: addu        $a0, $v1, $t1
    ctx->r4 = ADD32(ctx->r3, ctx->r9);
    // 0x801F89DC: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x801F89E0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x801F89E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801F89E8: sh          $a2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r6;
    // 0x801F89EC: jal         0x800139A4
    // 0x801F89F0: sh          $t0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r8;
    func_800139A4_145A4(rdram, ctx);
        goto after_0;
    // 0x801F89F0: sh          $t0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r8;
    after_0:
    // 0x801F89F4: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801F89F8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801F89FC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F8A00: addiu       $t3, $t3, -0x66F4
    ctx->r11 = ADD32(ctx->r11, -0X66F4);
    // 0x801F8A04: addiu       $t2, $t2, -0x3A38
    ctx->r10 = ADD32(ctx->r10, -0X3A38);
    // 0x801F8A08: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F8A0C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801F8A10: lhu         $a2, 0x36($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X36);
    // 0x801F8A14: lhu         $t0, 0x34($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X34);
L_801F8A18:
    // 0x801F8A18: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x801F8A1C: beq         $at, $zero, L_801F8C38
    if (ctx->r1 == 0) {
        // 0x801F8A20: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_801F8C38;
    }
    // 0x801F8A20: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801F8A24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F8A28: addu        $at, $at, $t6
    gpr jr_addend_801F8A30 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F8A2C: lw          $t6, -0x3974($at)
    ctx->r14 = ADD32(ctx->r1, -0X3974);
    // 0x801F8A30: jr          $t6
    // 0x801F8A34: nop

    switch (jr_addend_801F8A30 >> 2) {
        case 0: goto L_801F8A38; break;
        case 1: goto L_801F8A4C; break;
        case 2: goto L_801F8AA8; break;
        case 3: goto L_801F8B04; break;
        case 4: goto L_801F8B60; break;
        default: switch_error(__func__, 0x801F8A30, 0x8020C68C);
    }
    // 0x801F8A34: nop

L_801F8A38:
    // 0x801F8A38: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x801F8A3C: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x801F8A40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801F8A44: addu        $t7, $t4, $a3
    ctx->r15 = ADD32(ctx->r12, ctx->r7);
    // 0x801F8A48: sh          $t8, 0x3022($t7)
    MEM_H(0X3022, ctx->r15) = ctx->r24;
L_801F8A4C:
    // 0x801F8A4C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x801F8A50: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x801F8A54: addu        $a1, $v0, $a3
    ctx->r5 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8A58: lbu         $t5, 0x2DF6($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F8A5C: lhu         $t8, 0x2DF8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F8A60: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x801F8A64: addu        $t6, $t3, $t9
    ctx->r14 = ADD32(ctx->r11, ctx->r25);
    // 0x801F8A68: lw          $t4, 0x0($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X0);
    // 0x801F8A6C: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x801F8A70: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x801F8A74: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x801F8A78: lhu         $t9, 0x2($t5)
    ctx->r25 = MEM_HU(ctx->r13, 0X2);
    // 0x801F8A7C: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x801F8A80: sh          $t9, 0x3022($t8)
    MEM_H(0X3022, ctx->r24) = ctx->r25;
    // 0x801F8A84: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x801F8A88: addu        $t7, $t4, $v1
    ctx->r15 = ADD32(ctx->r12, ctx->r3);
    // 0x801F8A8C: addu        $t5, $t7, $a3
    ctx->r13 = ADD32(ctx->r15, ctx->r7);
    // 0x801F8A90: lhu         $t6, 0x3022($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X3022);
    // 0x801F8A94: beql        $t6, $zero, L_801F8AAC
    if (ctx->r14 == 0) {
        // 0x801F8A98: lw          $v0, 0x0($t2)
        ctx->r2 = MEM_W(ctx->r10, 0X0);
            goto L_801F8AAC;
    }
    goto skip_6;
    // 0x801F8A98: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    skip_6:
    // 0x801F8A9C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x801F8AA0: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x801F8AA4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
L_801F8AA8:
    // 0x801F8AA8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
L_801F8AAC:
    // 0x801F8AAC: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x801F8AB0: addu        $a1, $v0, $a3
    ctx->r5 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8AB4: lbu         $t8, 0x2DF6($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F8AB8: lhu         $t6, 0x2DF8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F8ABC: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x801F8AC0: addu        $t7, $t3, $t4
    ctx->r15 = ADD32(ctx->r11, ctx->r12);
    // 0x801F8AC4: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
    // 0x801F8AC8: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x801F8ACC: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x801F8AD0: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x801F8AD4: lhu         $t4, 0x4($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X4);
    // 0x801F8AD8: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x801F8ADC: sh          $t4, 0x3022($t6)
    MEM_H(0X3022, ctx->r14) = ctx->r12;
    // 0x801F8AE0: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x801F8AE4: addu        $t9, $t5, $v1
    ctx->r25 = ADD32(ctx->r13, ctx->r3);
    // 0x801F8AE8: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x801F8AEC: lhu         $t7, 0x3022($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X3022);
    // 0x801F8AF0: beql        $t7, $zero, L_801F8B08
    if (ctx->r15 == 0) {
        // 0x801F8AF4: lw          $v0, 0x0($t2)
        ctx->r2 = MEM_W(ctx->r10, 0X0);
            goto L_801F8B08;
    }
    goto skip_7;
    // 0x801F8AF4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    skip_7:
    // 0x801F8AF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x801F8AFC: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x801F8B00: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
L_801F8B04:
    // 0x801F8B04: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
L_801F8B08:
    // 0x801F8B08: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x801F8B0C: addu        $a1, $v0, $a3
    ctx->r5 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8B10: lbu         $t6, 0x2DF6($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F8B14: lhu         $t7, 0x2DF8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F8B18: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x801F8B1C: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x801F8B20: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x801F8B24: sll         $t4, $t7, 3
    ctx->r12 = S32(ctx->r15 << 3);
    // 0x801F8B28: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801F8B2C: addu        $t6, $t8, $t4
    ctx->r14 = ADD32(ctx->r24, ctx->r12);
    // 0x801F8B30: lhu         $t5, 0x0($t6)
    ctx->r13 = MEM_HU(ctx->r14, 0X0);
    // 0x801F8B34: addu        $t7, $t9, $a3
    ctx->r15 = ADD32(ctx->r25, ctx->r7);
    // 0x801F8B38: sh          $t5, 0x3022($t7)
    MEM_H(0X3022, ctx->r15) = ctx->r13;
    // 0x801F8B3C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x801F8B40: addu        $t4, $t8, $v1
    ctx->r12 = ADD32(ctx->r24, ctx->r3);
    // 0x801F8B44: addu        $t6, $t4, $a3
    ctx->r14 = ADD32(ctx->r12, ctx->r7);
    // 0x801F8B48: lhu         $t9, 0x3022($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X3022);
    // 0x801F8B4C: beql        $t9, $zero, L_801F8B64
    if (ctx->r25 == 0) {
        // 0x801F8B50: lw          $v0, 0x0($t2)
        ctx->r2 = MEM_W(ctx->r10, 0X0);
            goto L_801F8B64;
    }
    goto skip_8;
    // 0x801F8B50: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    skip_8:
    // 0x801F8B54: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x801F8B58: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x801F8B5C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
L_801F8B60:
    // 0x801F8B60: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
L_801F8B64:
    // 0x801F8B64: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x801F8B68: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x801F8B6C: addu        $a1, $v0, $a3
    ctx->r5 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8B70: lbu         $t7, 0x2DF6($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2DF6);
    // 0x801F8B74: lhu         $t9, 0x2DF8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2DF8);
    // 0x801F8B78: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F8B7C: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x801F8B80: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x801F8B84: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x801F8B88: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x801F8B8C: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x801F8B90: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x801F8B94: addu        $t9, $t4, $a3
    ctx->r25 = ADD32(ctx->r12, ctx->r7);
    // 0x801F8B98: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x801F8B9C: sh          $t8, 0x3022($t9)
    MEM_H(0X3022, ctx->r25) = ctx->r24;
    // 0x801F8BA0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x801F8BA4: sll         $t4, $t7, 1
    ctx->r12 = S32(ctx->r15 << 1);
    // 0x801F8BA8: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x801F8BAC: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    // 0x801F8BB0: lhu         $t5, 0x3022($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X3022);
    // 0x801F8BB4: addu        $t8, $v0, $t4
    ctx->r24 = ADD32(ctx->r2, ctx->r12);
    // 0x801F8BB8: beql        $t5, $zero, L_801F8BC8
    if (ctx->r13 == 0) {
        // 0x801F8BBC: sh          $zero, 0x3022($a0)
        MEM_H(0X3022, ctx->r4) = 0;
            goto L_801F8BC8;
    }
    goto skip_9;
    // 0x801F8BBC: sh          $zero, 0x3022($a0)
    MEM_H(0X3022, ctx->r4) = 0;
    skip_9:
    // 0x801F8BC0: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    // 0x801F8BC4: sh          $zero, 0x3022($a0)
    MEM_H(0X3022, ctx->r4) = 0;
L_801F8BC8:
    // 0x801F8BC8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x801F8BCC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8BD0: addu        $t9, $v0, $a3
    ctx->r25 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8BD4: lhu         $t6, 0x301E($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X301E);
    // 0x801F8BD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8BDC: addu        $t5, $t6, $t0
    ctx->r13 = ADD32(ctx->r14, ctx->r8);
    // 0x801F8BE0: sh          $t5, -0x4FE0($at)
    MEM_H(-0X4FE0, ctx->r1) = ctx->r13;
    // 0x801F8BE4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x801F8BE8: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x801F8BEC: addu        $t7, $v0, $a3
    ctx->r15 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8BF0: lhu         $t4, 0x3022($t7)
    ctx->r12 = MEM_HU(ctx->r15, 0X3022);
    // 0x801F8BF4: bne         $t4, $zero, L_801F8C04
    if (ctx->r12 != 0) {
        // 0x801F8BF8: nop
    
            goto L_801F8C04;
    }
    // 0x801F8BF8: nop

    // 0x801F8BFC: b           L_801F8C3C
    // 0x801F8C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F8C3C;
    // 0x801F8C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F8C04:
    // 0x801F8C04: bne         $t8, $zero, L_801F8C24
    if (ctx->r24 != 0) {
        // 0x801F8C08: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_801F8C24;
    }
    // 0x801F8C08: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F8C0C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F8C10: ori         $at, $at, 0xB022
    ctx->r1 = ctx->r1 | 0XB022;
    // 0x801F8C14: jal         0x80013AC4
    // 0x801F8C18: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    func_80013AC4_146C4(rdram, ctx);
        goto after_1;
    // 0x801F8C18: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    after_1:
    // 0x801F8C1C: b           L_801F8C3C
    // 0x801F8C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F8C3C;
    // 0x801F8C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F8C24:
    // 0x801F8C24: ori         $at, $at, 0xB022
    ctx->r1 = ctx->r1 | 0XB022;
    // 0x801F8C28: jal         0x80013C70
    // 0x801F8C2C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    func_80013C70_14870(rdram, ctx);
        goto after_2;
    // 0x801F8C2C: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    after_2:
    // 0x801F8C30: b           L_801F8C40
    // 0x801F8C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F8C40;
    // 0x801F8C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F8C38:
    // 0x801F8C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F8C3C:
    // 0x801F8C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F8C40:
    // 0x801F8C40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801F8C44: jr          $ra
    // 0x801F8C48: nop

    TRACE_RETURN()
    return;
    // 0x801F8C48: nop

;}
RECOMP_FUNC void func_801CC4C0_5883D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC4C0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801CC4C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC4C8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801CC4CC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801CC4D0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801CC4D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801CC4D8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801CC4DC: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x801CC4E0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x801CC4E4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CC4E8: lw          $t0, 0x64($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X64);
    // 0x801CC4EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC4F0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x801CC4F4: swc1        $f4, -0x35E0($at)
    MEM_W(-0X35E0, ctx->r1) = ctx->f4.u32l;
    // 0x801CC4F8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CC4FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC500: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801CC504: swc1        $f6, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f6.u32l;
    // 0x801CC508: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CC50C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC510: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801CC514: swc1        $f8, -0x35D8($at)
    MEM_W(-0X35D8, ctx->r1) = ctx->f8.u32l;
    // 0x801CC518: lhu         $t8, 0x5C($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X5C);
    // 0x801CC51C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC520: bnel        $t8, $zero, L_801CC534
    if (ctx->r24 != 0) {
        // 0x801CC524: lw          $t1, 0x84($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X84);
            goto L_801CC534;
    }
    goto skip_0;
    // 0x801CC524: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x801CC528: lw          $t0, -0x39DC($t9)
    ctx->r8 = MEM_W(ctx->r25, -0X39DC);
    // 0x801CC52C: sw          $t0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r8;
    // 0x801CC530: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
L_801CC534:
    // 0x801CC534: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CC538: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x801CC53C: lwc1        $f12, 0x8($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801CC540: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801CC544: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x801CC548: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CC54C: nop

    // 0x801CC550: bc1fl       L_801CC568
    if (!c1cs) {
        // 0x801CC554: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_801CC568;
    }
    goto skip_1;
    // 0x801CC554: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x801CC558: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801CC55C: b           L_801CC568
    // 0x801CC560: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801CC568;
    // 0x801CC560: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801CC564: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_801CC568:
    // 0x801CC568: ldc1        $f16, -0x57C8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X57C8);
    // 0x801CC56C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801CC570: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x801CC574: nop

    // 0x801CC578: bc1fl       L_801CC630
    if (!c1cs) {
        // 0x801CC57C: sw          $v1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r3;
            goto L_801CC630;
    }
    goto skip_2;
    // 0x801CC57C: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
    skip_2:
    // 0x801CC580: lwc1        $f2, 0x10($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X10);
    // 0x801CC584: lwc1        $f0, 0x10($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801CC588: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CC58C: nop

    // 0x801CC590: bc1fl       L_801CC5A8
    if (!c1cs) {
        // 0x801CC594: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_801CC5A8;
    }
    goto skip_3;
    // 0x801CC594: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_3:
    // 0x801CC598: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x801CC59C: b           L_801CC5A8
    // 0x801CC5A0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CC5A8;
    // 0x801CC5A0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CC5A4: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_801CC5A8:
    // 0x801CC5A8: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x801CC5AC: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x801CC5B0: nop

    // 0x801CC5B4: bc1fl       L_801CC630
    if (!c1cs) {
        // 0x801CC5B8: sw          $v1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r3;
            goto L_801CC630;
    }
    goto skip_4;
    // 0x801CC5B8: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
    skip_4:
    // 0x801CC5BC: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CC5C0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CC5C4: nop

    // 0x801CC5C8: bc1fl       L_801CC5E0
    if (!c1cs) {
        // 0x801CC5CC: sub.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_801CC5E0;
    }
    goto skip_5;
    // 0x801CC5CC: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    skip_5:
    // 0x801CC5D0: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CC5D4: b           L_801CC5E0
    // 0x801CC5D8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CC5E0;
    // 0x801CC5D8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CC5DC: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
L_801CC5E0:
    // 0x801CC5E0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x801CC5E4: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x801CC5E8: nop

    // 0x801CC5EC: bc1fl       L_801CC630
    if (!c1cs) {
        // 0x801CC5F0: sw          $v1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r3;
            goto L_801CC630;
    }
    goto skip_6;
    // 0x801CC5F0: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
    skip_6:
    // 0x801CC5F4: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801CC5F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CC5FC: nop

    // 0x801CC600: bc1fl       L_801CC618
    if (!c1cs) {
        // 0x801CC604: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_801CC618;
    }
    goto skip_7;
    // 0x801CC604: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_7:
    // 0x801CC608: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x801CC60C: b           L_801CC618
    // 0x801CC610: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CC618;
    // 0x801CC610: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CC614: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_801CC618:
    // 0x801CC618: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x801CC61C: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x801CC620: nop

    // 0x801CC624: bc1tl       L_801CC66C
    if (c1cs) {
        // 0x801CC628: lwc1        $f10, 0xC0($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0XC0);
            goto L_801CC66C;
    }
    goto skip_8;
    // 0x801CC628: lwc1        $f10, 0xC0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC0);
    skip_8:
    // 0x801CC62C: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
L_801CC630:
    // 0x801CC630: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x801CC634: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801CC638: jal         0x8001C970
    // 0x801CC63C: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    func_8001C970_1D570(rdram, ctx);
        goto after_0;
    // 0x801CC63C: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    after_0:
    // 0x801CC640: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x801CC644: jal         0x8001C970
    // 0x801CC648: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    func_8001C970_1D570(rdram, ctx);
        goto after_1;
    // 0x801CC648: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_1:
    // 0x801CC64C: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x801CC650: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x801CC654: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CC658: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x801CC65C: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x801CC660: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CC664: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CC668: lwc1        $f10, 0xC0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC0);
L_801CC66C:
    // 0x801CC66C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x801CC670: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CC674: add.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x801CC678: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x801CC67C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CC680: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC684: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x801CC688: lwc1        $f8, 0xC4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC4);
    // 0x801CC68C: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x801CC690: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x801CC694: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CC698: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC69C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC6A0: addiu       $v0, $v0, -0x35D4
    ctx->r2 = ADD32(ctx->r2, -0X35D4);
    // 0x801CC6A4: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x801CC6A8: lwc1        $f4, 0xC8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x801CC6AC: addiu       $t9, $t9, -0x3340
    ctx->r25 = ADD32(ctx->r25, -0X3340);
    // 0x801CC6B0: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x801CC6B4: swc1        $f6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f6.u32l;
    // 0x801CC6B8: lwc1        $f10, 0xC0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC0);
    // 0x801CC6BC: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CC6C0: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801CC6C4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CC6C8: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x801CC6CC: lwc1        $f8, 0xC8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x801CC6D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CC6D4: swc1        $f10, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f10.u32l;
    // 0x801CC6D8: lwc1        $f6, 0xC0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC0);
    // 0x801CC6DC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CC6E0: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801CC6E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CC6E8: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x801CC6EC: lwc1        $f4, 0xC8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x801CC6F0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CC6F4: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x801CC6F8: swc1        $f16, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->f16.u32l;
    // 0x801CC6FC: swc1        $f16, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->f16.u32l;
    // 0x801CC700: bc1f        L_801CC730
    if (!c1cs) {
        // 0x801CC704: swc1        $f16, 0xC8($a3)
        MEM_W(0XC8, ctx->r7) = ctx->f16.u32l;
            goto L_801CC730;
    }
    // 0x801CC704: swc1        $f16, 0xC8($a3)
    MEM_W(0XC8, ctx->r7) = ctx->f16.u32l;
    // 0x801CC708: lwc1        $f8, 0xC4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC4);
    // 0x801CC70C: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x801CC710: nop

    // 0x801CC714: bc1f        L_801CC730
    if (!c1cs) {
        // 0x801CC718: nop
    
            goto L_801CC730;
    }
    // 0x801CC718: nop

    // 0x801CC71C: lwc1        $f10, 0xC8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x801CC720: c.eq.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl == ctx->f10.fl;
    // 0x801CC724: nop

    // 0x801CC728: bc1tl       L_801CC73C
    if (c1cs) {
        // 0x801CC72C: sb          $zero, 0x62($a3)
        MEM_B(0X62, ctx->r7) = 0;
            goto L_801CC73C;
    }
    goto skip_9;
    // 0x801CC72C: sb          $zero, 0x62($a3)
    MEM_B(0X62, ctx->r7) = 0;
    skip_9:
L_801CC730:
    // 0x801CC730: b           L_801CC73C
    // 0x801CC734: sb          $t4, 0x62($a3)
    MEM_B(0X62, ctx->r7) = ctx->r12;
        goto L_801CC73C;
    // 0x801CC734: sb          $t4, 0x62($a3)
    MEM_B(0X62, ctx->r7) = ctx->r12;
    // 0x801CC738: sb          $zero, 0x62($a3)
    MEM_B(0X62, ctx->r7) = 0;
L_801CC73C:
    // 0x801CC73C: sh          $zero, -0x35B6($at)
    MEM_H(-0X35B6, ctx->r1) = 0;
    // 0x801CC740: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC744: sb          $zero, -0x3520($at)
    MEM_B(-0X3520, ctx->r1) = 0;
    // 0x801CC748: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC74C: sb          $zero, -0x3594($at)
    MEM_B(-0X3594, ctx->r1) = 0;
    // 0x801CC750: lbu         $t5, 0x61($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X61);
    // 0x801CC754: beql        $t5, $zero, L_801CC780
    if (ctx->r13 == 0) {
        // 0x801CC758: lbu         $t6, 0x90($a3)
        ctx->r14 = MEM_BU(ctx->r7, 0X90);
            goto L_801CC780;
    }
    goto skip_10;
    // 0x801CC758: lbu         $t6, 0x90($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X90);
    skip_10:
    // 0x801CC75C: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CC760: swc1        $f16, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f16.u32l;
    // 0x801CC764: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CC768: swc1        $f16, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f16.u32l;
    // 0x801CC76C: swc1        $f16, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f16.u32l;
    // 0x801CC770: swc1        $f16, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f16.u32l;
    // 0x801CC774: b           L_801CD074
    // 0x801CC778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CD074;
    // 0x801CC778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CC77C: lbu         $t6, 0x90($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X90);
L_801CC780:
    // 0x801CC780: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CC784: ori         $at, $at, 0xB0F0
    ctx->r1 = ctx->r1 | 0XB0F0;
    // 0x801CC788: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CC78C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801CC790: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CC794: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801CC798: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x801CC79C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801CC7A0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801CC7A4: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CC7A8: addiu       $t2, $t2, -0x35D0
    ctx->r10 = ADD32(ctx->r10, -0X35D0);
    // 0x801CC7AC: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801CC7B0: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x801CC7B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CC7B8: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x801CC7BC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x801CC7C0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x801CC7C4: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x801CC7C8: sw          $t5, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r13;
    // 0x801CC7CC: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x801CC7D0: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x801CC7D4: lw          $t5, 0x14($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X14);
    // 0x801CC7D8: sw          $t5, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r13;
    // 0x801CC7DC: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801CC7E0: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x801CC7E4: jal         0x801CD310
    // 0x801CC7E8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_801CD310_589220(rdram, ctx);
        goto after_2;
    // 0x801CC7E8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_2:
    // 0x801CC7EC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CC7F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CC7F4: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801CC7F8: lhu         $t6, 0x9A($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X9A);
    // 0x801CC7FC: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x801CC800: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC804: beq         $t6, $zero, L_801CC828
    if (ctx->r14 == 0) {
        // 0x801CC808: nop
    
            goto L_801CC828;
    }
    // 0x801CC808: nop

    // 0x801CC80C: swc1        $f16, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f16.u32l;
    // 0x801CC810: swc1        $f16, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f16.u32l;
    // 0x801CC814: swc1        $f16, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f16.u32l;
    // 0x801CC818: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CC81C: swc1        $f16, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f16.u32l;
    // 0x801CC820: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CC824: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
L_801CC828:
    // 0x801CC828: beql        $v1, $at, L_801CC838
    if (ctx->r3 == ctx->r1) {
        // 0x801CC82C: lw          $v0, 0x5C($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X5C);
            goto L_801CC838;
    }
    goto skip_11;
    // 0x801CC82C: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    skip_11:
    // 0x801CC830: sh          $v1, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r3;
    // 0x801CC834: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
L_801CC838:
    // 0x801CC838: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC83C: lbu         $t7, 0x59($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X59);
    // 0x801CC840: beql        $t7, $zero, L_801CC888
    if (ctx->r15 == 0) {
        // 0x801CC844: lwc1        $f6, 0xA4($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
            goto L_801CC888;
    }
    goto skip_12;
    // 0x801CC844: lwc1        $f6, 0xA4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
    skip_12:
    // 0x801CC848: lw          $t8, 0x4C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4C);
    // 0x801CC84C: lwc1        $f4, 0x68($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CC850: lwc1        $f10, 0x6C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CC854: lwc1        $f6, 0x98($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X98);
    // 0x801CC858: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CC85C: swc1        $f8, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f8.u32l;
    // 0x801CC860: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x801CC864: lwc1        $f8, 0x70($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CC868: lwc1        $f4, 0x9C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X9C);
    // 0x801CC86C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CC870: swc1        $f6, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f6.u32l;
    // 0x801CC874: lw          $t1, 0x4C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4C);
    // 0x801CC878: lwc1        $f10, 0xA0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XA0);
    // 0x801CC87C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CC880: swc1        $f4, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f4.u32l;
    // 0x801CC884: lwc1        $f6, 0xA4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
L_801CC888:
    // 0x801CC888: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x801CC88C: nop

    // 0x801CC890: bc1f        L_801CC8B0
    if (!c1cs) {
        // 0x801CC894: nop
    
            goto L_801CC8B0;
    }
    // 0x801CC894: nop

    // 0x801CC898: lwc1        $f8, 0x88($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X88);
    // 0x801CC89C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x801CC8A0: nop

    // 0x801CC8A4: bc1f        L_801CC8B0
    if (!c1cs) {
        // 0x801CC8A8: nop
    
            goto L_801CC8B0;
    }
    // 0x801CC8A8: nop

    // 0x801CC8AC: swc1        $f16, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f16.u32l;
L_801CC8B0:
    // 0x801CC8B0: sh          $zero, -0x359A($at)
    MEM_H(-0X359A, ctx->r1) = 0;
    // 0x801CC8B4: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CC8B8: addiu       $a2, $a2, -0x3530
    ctx->r6 = ADD32(ctx->r6, -0X3530);
    // 0x801CC8BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CC8C0: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x801CC8C4: lwc1        $f4, 0x6C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CC8C8: addiu       $a1, $a1, -0x3540
    ctx->r5 = ADD32(ctx->r5, -0X3540);
    // 0x801CC8CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CC8D0: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
    // 0x801CC8D4: lwc1        $f6, 0x70($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CC8D8: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801CC8DC: jal         0x801CF960
    // 0x801CC8E0: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    func_801CF960_58B870(rdram, ctx);
        goto after_3;
    // 0x801CC8E0: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    after_3:
    // 0x801CC8E4: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CC8E8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC8EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CC8F0: lbu         $t4, 0x61($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X61);
    // 0x801CC8F4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CC8F8: addiu       $a2, $a2, -0x3540
    ctx->r6 = ADD32(ctx->r6, -0X3540);
    // 0x801CC8FC: beq         $t4, $zero, L_801CC9F0
    if (ctx->r12 == 0) {
        // 0x801CC900: addiu       $v1, $v1, -0x3596
        ctx->r3 = ADD32(ctx->r3, -0X3596);
            goto L_801CC9F0;
    }
    // 0x801CC900: addiu       $v1, $v1, -0x3596
    ctx->r3 = ADD32(ctx->r3, -0X3596);
    // 0x801CC904: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x801CC908: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CC90C: bne         $t2, $zero, L_801CC9F0
    if (ctx->r10 != 0) {
        // 0x801CC910: nop
    
            goto L_801CC9F0;
    }
    // 0x801CC910: nop

    // 0x801CC914: lbu         $t3, -0x3594($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3594);
    // 0x801CC918: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC91C: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x801CC920: beq         $t3, $zero, L_801CC948
    if (ctx->r11 == 0) {
        // 0x801CC924: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801CC948;
    }
    // 0x801CC924: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CC928: lw          $t5, 0x5C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X5C);
    // 0x801CC92C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC930: lwc1        $f8, -0x3524($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3524);
    // 0x801CC934: lwc1        $f10, 0x54($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X54);
    // 0x801CC938: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801CC93C: nop

    // 0x801CC940: bc1f        L_801CC9F0
    if (!c1cs) {
        // 0x801CC944: nop
    
            goto L_801CC9F0;
    }
    // 0x801CC944: nop

L_801CC948:
    // 0x801CC948: swc1        $f18, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f18.u32l;
    // 0x801CC94C: swc1        $f18, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f18.u32l;
    // 0x801CC950: swc1        $f18, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f18.u32l;
    // 0x801CC954: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC958: addiu       $a2, $a2, -0x3530
    ctx->r6 = ADD32(ctx->r6, -0X3530);
    // 0x801CC95C: addiu       $a1, $a1, -0x3540
    ctx->r5 = ADD32(ctx->r5, -0X3540);
    // 0x801CC960: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x801CC964: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x801CC968: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x801CC96C: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    // 0x801CC970: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x801CC974: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x801CC978: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x801CC97C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x801CC980: lw          $t6, 0x5C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5C);
    // 0x801CC984: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CC988: swc1        $f18, 0xAC($t6)
    MEM_W(0XAC, ctx->r14) = ctx->f18.u32l;
    // 0x801CC98C: jal         0x801CF960
    // 0x801CC990: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    func_801CF960_58B870(rdram, ctx);
        goto after_4;
    // 0x801CC990: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    after_4:
    // 0x801CC994: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CC998: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC99C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC9A0: lhu         $t7, 0x98($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X98);
    // 0x801CC9A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CC9A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CC9AC: beq         $t7, $zero, L_801CC9DC
    if (ctx->r15 == 0) {
        // 0x801CC9B0: addiu       $a2, $a2, -0x3540
        ctx->r6 = ADD32(ctx->r6, -0X3540);
            goto L_801CC9DC;
    }
    // 0x801CC9B0: addiu       $a2, $a2, -0x3540
    ctx->r6 = ADD32(ctx->r6, -0X3540);
    // 0x801CC9B4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CC9B8: lhu         $t8, -0x359A($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X359A);
    // 0x801CC9BC: bnel        $t8, $zero, L_801CC9E0
    if (ctx->r24 != 0) {
        // 0x801CC9C0: swc1        $f0, 0x88($a3)
        MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
            goto L_801CC9E0;
    }
    goto skip_13;
    // 0x801CC9C0: swc1        $f0, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
    skip_13:
    // 0x801CC9C4: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CC9C8: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x801CC9CC: nop

    // 0x801CC9D0: bc1fl       L_801CC9E0
    if (!c1cs) {
        // 0x801CC9D4: swc1        $f0, 0x88($a3)
        MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
            goto L_801CC9E0;
    }
    goto skip_14;
    // 0x801CC9D4: swc1        $f0, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
    skip_14:
    // 0x801CC9D8: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
L_801CC9DC:
    // 0x801CC9DC: swc1        $f0, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
L_801CC9E0:
    // 0x801CC9E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC9E4: swc1        $f0, -0x358C($at)
    MEM_W(-0X358C, ctx->r1) = ctx->f0.u32l;
    // 0x801CC9E8: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CC9EC: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_801CC9F0:
    // 0x801CC9F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CC9F4: addiu       $a1, $a1, -0x3530
    ctx->r5 = ADD32(ctx->r5, -0X3530);
    // 0x801CC9F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CC9FC: jal         0x801CEEA8
    // 0x801CCA00: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    func_801CEEA8_58ADB8(rdram, ctx);
        goto after_5;
    // 0x801CCA00: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CCA04: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCA08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCA0C: sh          $v0, -0x35B6($at)
    MEM_H(-0X35B6, ctx->r1) = ctx->r2;
    // 0x801CCA10: addiu       $a2, $a2, -0x3540
    ctx->r6 = ADD32(ctx->r6, -0X3540);
    // 0x801CCA14: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CCA18: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CCA1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCA20: lw          $t1, 0x5C($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCA24: swc1        $f6, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f6.u32l;
    // 0x801CCA28: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CCA2C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CCA30: addiu       $v1, $v1, -0x3596
    ctx->r3 = ADD32(ctx->r3, -0X3596);
    // 0x801CCA34: swc1        $f8, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f8.u32l;
    // 0x801CCA38: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CCA3C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CCA40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CCA44: swc1        $f10, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f10.u32l;
    // 0x801CCA48: lwc1        $f4, -0x3530($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3530);
    // 0x801CCA4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CCA50: addiu       $a0, $a0, -0x3590
    ctx->r4 = ADD32(ctx->r4, -0X3590);
    // 0x801CCA54: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x801CCA58: lwc1        $f6, -0x352C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X352C);
    // 0x801CCA5C: lw          $t4, 0x5C($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCA60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCA64: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCA68: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x801CCA6C: lwc1        $f8, -0x3528($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3528);
    // 0x801CCA70: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCA74: swc1        $f8, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f8.u32l;
    // 0x801CCA78: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x801CCA7C: beq         $t3, $zero, L_801CCAB8
    if (ctx->r11 == 0) {
        // 0x801CCA80: nop
    
            goto L_801CCAB8;
    }
    // 0x801CCA80: nop

    // 0x801CCA84: lbu         $t5, 0x61($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X61);
    // 0x801CCA88: bne         $t5, $zero, L_801CCAB8
    if (ctx->r13 != 0) {
        // 0x801CCA8C: nop
    
            goto L_801CCAB8;
    }
    // 0x801CCA8C: nop

    // 0x801CCA90: lwc1        $f14, 0x8($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CCA94: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CCA98: lw          $t6, 0x5C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCA9C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CCAA0: nop

    // 0x801CCAA4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CCAA8: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CCAAC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CCAB0: b           L_801CCB24
    // 0x801CCAB4: swc1        $f0, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = ctx->f0.u32l;
        goto L_801CCB24;
    // 0x801CCAB4: swc1        $f0, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = ctx->f0.u32l;
L_801CCAB8:
    // 0x801CCAB8: lbu         $v0, -0x3520($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3520);
    // 0x801CCABC: bnel        $v0, $zero, L_801CCAF8
    if (ctx->r2 != 0) {
        // 0x801CCAC0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801CCAF8;
    }
    goto skip_15;
    // 0x801CCAC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_15:
    // 0x801CCAC4: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CCAC8: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CCACC: lwc1        $f14, 0x8($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CCAD0: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CCAD4: lw          $t7, 0x5C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCAD8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CCADC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CCAE0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CCAE4: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CCAE8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CCAEC: b           L_801CCB24
    // 0x801CCAF0: swc1        $f0, 0xB0($t7)
    MEM_W(0XB0, ctx->r15) = ctx->f0.u32l;
        goto L_801CCB24;
    // 0x801CCAF0: swc1        $f0, 0xB0($t7)
    MEM_W(0XB0, ctx->r15) = ctx->f0.u32l;
    // 0x801CCAF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_801CCAF8:
    // 0x801CCAF8: bne         $v0, $at, L_801CCB24
    if (ctx->r2 != ctx->r1) {
        // 0x801CCAFC: nop
    
            goto L_801CCB24;
    }
    // 0x801CCAFC: nop

    // 0x801CCB00: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCB04: lbu         $t8, 0x18($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X18);
    // 0x801CCB08: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x801CCB0C: bne         $t9, $zero, L_801CCB24
    if (ctx->r25 != 0) {
        // 0x801CCB10: nop
    
            goto L_801CCB24;
    }
    // 0x801CCB10: nop

    // 0x801CCB14: lwc1        $f6, 0x6C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CCB18: swc1        $f6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f6.u32l;
    // 0x801CCB1C: swc1        $f18, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f18.u32l;
    // 0x801CCB20: swc1        $f18, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f18.u32l;
L_801CCB24:
    // 0x801CCB24: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCB28: addiu       $a2, $a2, -0x359A
    ctx->r6 = ADD32(ctx->r6, -0X359A);
    // 0x801CCB2C: lhu         $t1, 0x0($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X0);
    // 0x801CCB30: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCB34: bnel        $t1, $zero, L_801CCB58
    if (ctx->r9 != 0) {
        // 0x801CCB38: lwc1        $f8, 0x0($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
            goto L_801CCB58;
    }
    goto skip_16;
    // 0x801CCB38: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    skip_16:
    // 0x801CCB3C: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x801CCB40: beq         $t4, $zero, L_801CCB6C
    if (ctx->r12 == 0) {
        // 0x801CCB44: nop
    
            goto L_801CCB6C;
    }
    // 0x801CCB44: nop

    // 0x801CCB48: lbu         $t2, 0x61($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X61);
    // 0x801CCB4C: bne         $t2, $zero, L_801CCB6C
    if (ctx->r10 != 0) {
        // 0x801CCB50: nop
    
            goto L_801CCB6C;
    }
    // 0x801CCB50: nop

    // 0x801CCB54: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
L_801CCB58:
    // 0x801CCB58: swc1        $f8, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f8.u32l;
    // 0x801CCB5C: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801CCB60: swc1        $f4, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f4.u32l;
    // 0x801CCB64: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801CCB68: swc1        $f10, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f10.u32l;
L_801CCB6C:
    // 0x801CCB6C: lhu         $v0, -0x3598($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3598);
    // 0x801CCB70: bnel        $v0, $zero, L_801CCBA4
    if (ctx->r2 != 0) {
        // 0x801CCB74: swc1        $f16, 0xA4($a3)
        MEM_W(0XA4, ctx->r7) = ctx->f16.u32l;
            goto L_801CCBA4;
    }
    goto skip_17;
    // 0x801CCB74: swc1        $f16, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f16.u32l;
    skip_17:
    // 0x801CCB78: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
    // 0x801CCB7C: bnel        $t3, $zero, L_801CCB90
    if (ctx->r11 != 0) {
        // 0x801CCB80: lwc1        $f6, 0xA4($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
            goto L_801CCB90;
    }
    goto skip_18;
    // 0x801CCB80: lwc1        $f6, 0xA4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
    skip_18:
    // 0x801CCB84: beql        $v0, $zero, L_801CCBA8
    if (ctx->r2 == 0) {
        // 0x801CCB88: lbu         $t5, 0x61($a3)
        ctx->r13 = MEM_BU(ctx->r7, 0X61);
            goto L_801CCBA8;
    }
    goto skip_19;
    // 0x801CCB88: lbu         $t5, 0x61($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X61);
    skip_19:
    // 0x801CCB8C: lwc1        $f6, 0xA4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
L_801CCB90:
    // 0x801CCB90: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x801CCB94: nop

    // 0x801CCB98: bc1fl       L_801CCBA8
    if (!c1cs) {
        // 0x801CCB9C: lbu         $t5, 0x61($a3)
        ctx->r13 = MEM_BU(ctx->r7, 0X61);
            goto L_801CCBA8;
    }
    goto skip_20;
    // 0x801CCB9C: lbu         $t5, 0x61($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X61);
    skip_20:
    // 0x801CCBA0: swc1        $f16, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f16.u32l;
L_801CCBA4:
    // 0x801CCBA4: lbu         $t5, 0x61($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X61);
L_801CCBA8:
    // 0x801CCBA8: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCBAC: bnel        $t5, $zero, L_801CCC18
    if (ctx->r13 != 0) {
        // 0x801CCBB0: lhu         $t8, 0x0($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCC18;
    }
    goto skip_21;
    // 0x801CCBB0: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    skip_21:
    // 0x801CCBB4: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x801CCBB8: lwc1        $f0, 0xA4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CCBBC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CCBC0: bnel        $t6, $zero, L_801CCBD8
    if (ctx->r14 != 0) {
        // 0x801CCBC4: c.lt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
            goto L_801CCBD8;
    }
    goto skip_22;
    // 0x801CCBC4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    skip_22:
    // 0x801CCBC8: lhu         $t7, -0x3598($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X3598);
    // 0x801CCBCC: beql        $t7, $zero, L_801CCBE8
    if (ctx->r15 == 0) {
        // 0x801CCBD0: lwc1        $f8, 0x48($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
            goto L_801CCBE8;
    }
    goto skip_23;
    // 0x801CCBD0: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    skip_23:
    // 0x801CCBD4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
L_801CCBD8:
    // 0x801CCBD8: nop

    // 0x801CCBDC: bc1fl       L_801CCC18
    if (!c1cs) {
        // 0x801CCBE0: lhu         $t8, 0x0($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCC18;
    }
    goto skip_24;
    // 0x801CCBE0: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    skip_24:
    // 0x801CCBE4: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
L_801CCBE8:
    // 0x801CCBE8: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801CCBEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CCBF0: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801CCBF4: swc1        $f4, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f4.u32l;
    // 0x801CCBF8: lwc1        $f10, 0xA4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CCBFC: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x801CCC00: nop

    // 0x801CCC04: bc1fl       L_801CCC18
    if (!c1cs) {
        // 0x801CCC08: lhu         $t8, 0x0($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCC18;
    }
    goto skip_25;
    // 0x801CCC08: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    skip_25:
    // 0x801CCC0C: swc1        $f2, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f2.u32l;
    // 0x801CCC10: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCC14: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
L_801CCC18:
    // 0x801CCC18: beql        $t8, $zero, L_801CCE24
    if (ctx->r24 == 0) {
        // 0x801CCC1C: lbu         $t4, 0x59($v0)
        ctx->r12 = MEM_BU(ctx->r2, 0X59);
            goto L_801CCE24;
    }
    goto skip_26;
    // 0x801CCC1C: lbu         $t4, 0x59($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X59);
    skip_26:
    // 0x801CCC20: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x801CCC24: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCC28: lbu         $t1, 0x59($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X59);
    // 0x801CCC2C: andi        $t4, $t1, 0x80
    ctx->r12 = ctx->r9 & 0X80;
    // 0x801CCC30: bnel        $t4, $zero, L_801CCC50
    if (ctx->r12 != 0) {
        // 0x801CCC34: lhu         $t2, 0x0($v1)
        ctx->r10 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCC50;
    }
    goto skip_27;
    // 0x801CCC34: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    skip_27:
    // 0x801CCC38: lwc1        $f6, 0xA4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CCC3C: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x801CCC40: nop

    // 0x801CCC44: bc1fl       L_801CCC5C
    if (!c1cs) {
        // 0x801CCC48: lhu         $v0, 0x0($v1)
        ctx->r2 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCC5C;
    }
    goto skip_28;
    // 0x801CCC48: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    skip_28:
    // 0x801CCC4C: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
L_801CCC50:
    // 0x801CCC50: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x801CCC54: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x801CCC58: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
L_801CCC5C:
    // 0x801CCC5C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x801CCC60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CCC64: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x801CCC68: beql        $t5, $zero, L_801CCC98
    if (ctx->r13 == 0) {
        // 0x801CCC6C: lbu         $v0, 0x61($a3)
        ctx->r2 = MEM_BU(ctx->r7, 0X61);
            goto L_801CCC98;
    }
    goto skip_29;
    // 0x801CCC6C: lbu         $v0, 0x61($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X61);
    skip_29:
    // 0x801CCC70: lwc1        $f8, 0x20($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801CCC74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCC78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCC7C: lwc1        $f6, -0x3524($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3524);
    // 0x801CCC80: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801CCC84: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x801CCC88: nop

    // 0x801CCC8C: bc1fl       L_801CCD64
    if (!c1cs) {
        // 0x801CCC90: lhu         $t3, 0x0($a2)
        ctx->r11 = MEM_HU(ctx->r6, 0X0);
            goto L_801CCD64;
    }
    goto skip_30;
    // 0x801CCC90: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
    skip_30:
    // 0x801CCC94: lbu         $v0, 0x61($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X61);
L_801CCC98:
    // 0x801CCC98: lwc1        $f0, 0xA4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CCC9C: bne         $v0, $zero, L_801CCCD0
    if (ctx->r2 != 0) {
        // 0x801CCCA0: nop
    
            goto L_801CCCD0;
    }
    // 0x801CCCA0: nop

    // 0x801CCCA4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801CCCA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCCAC: bc1f        L_801CCCD0
    if (!c1cs) {
        // 0x801CCCB0: nop
    
            goto L_801CCCD0;
    }
    // 0x801CCCB0: nop

    // 0x801CCCB4: ldc1        $f4, -0x57C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X57C0);
    // 0x801CCCB8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CCCBC: lbu         $v0, 0x61($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X61);
    // 0x801CCCC0: mul.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x801CCCC4: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x801CCCC8: swc1        $f6, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f6.u32l;
    // 0x801CCCCC: lwc1        $f0, 0xA4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XA4);
L_801CCCD0:
    // 0x801CCCD0: bne         $v0, $zero, L_801CCCEC
    if (ctx->r2 != 0) {
        // 0x801CCCD4: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CCCEC;
    }
    // 0x801CCCD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCCD8: lw          $t7, 0x5C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCCDC: lwc1        $f8, 0x50($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X50);
    // 0x801CCCE0: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801CCCE4: swc1        $f4, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f4.u32l;
    // 0x801CCCE8: lwc1        $f0, 0xA4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XA4);
L_801CCCEC:
    // 0x801CCCEC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CCCF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CCCF4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801CCCF8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCCFC: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x801CCD00: nop

    // 0x801CCD04: bc1fl       L_801CCD1C
    if (!c1cs) {
        // 0x801CCD08: lbu         $t8, 0x61($a3)
        ctx->r24 = MEM_BU(ctx->r7, 0X61);
            goto L_801CCD1C;
    }
    goto skip_31;
    // 0x801CCD08: lbu         $t8, 0x61($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X61);
    skip_31:
    // 0x801CCD0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CCD10: nop

    // 0x801CCD14: swc1        $f8, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f8.u32l;
    // 0x801CCD18: lbu         $t8, 0x61($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X61);
L_801CCD1C:
    // 0x801CCD1C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x801CCD20: beq         $t8, $zero, L_801CCD50
    if (ctx->r24 == 0) {
        // 0x801CCD24: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_801CCD50;
    }
    // 0x801CCD24: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CCD28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCD2C: lwc1        $f10, 0x20($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X20);
    // 0x801CCD30: lw          $t1, 0x5C($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCD34: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801CCD38: lwc1        $f8, 0x54($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X54);
    // 0x801CCD3C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801CCD40: nop

    // 0x801CCD44: bc1fl       L_801CCD54
    if (!c1cs) {
        // 0x801CCD48: lhu         $t4, 0x0($v1)
        ctx->r12 = MEM_HU(ctx->r3, 0X0);
            goto L_801CCD54;
    }
    goto skip_32;
    // 0x801CCD48: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    skip_32:
    // 0x801CCD4C: swc1        $f18, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f18.u32l;
L_801CCD50:
    // 0x801CCD50: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
L_801CCD54:
    // 0x801CCD54: andi        $t2, $t4, 0xFF7F
    ctx->r10 = ctx->r12 & 0XFF7F;
    // 0x801CCD58: b           L_801CCE08
    // 0x801CCD5C: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
        goto L_801CCE08;
    // 0x801CCD5C: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x801CCD60: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
L_801CCD64:
    // 0x801CCD64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801CCD68: bnel        $t3, $zero, L_801CCE04
    if (ctx->r11 != 0) {
        // 0x801CCD6C: ori         $t8, $v0, 0x80
        ctx->r24 = ctx->r2 | 0X80;
            goto L_801CCE04;
    }
    goto skip_33;
    // 0x801CCD6C: ori         $t8, $v0, 0x80
    ctx->r24 = ctx->r2 | 0X80;
    skip_33:
    // 0x801CCD70: lhu         $a0, 0x7A8E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7A8E);
    // 0x801CCD74: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801CCD78: sll         $t5, $a0, 5
    ctx->r13 = S32(ctx->r4 << 5);
    // 0x801CCD7C: jal         0x80003E10
    // 0x801CCD80: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x801CCD80: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    after_6:
    // 0x801CCD84: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801CCD88: lw          $t7, -0x39F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39F4);
    // 0x801CCD8C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CCD90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCD94: lwc1        $f2, 0x20($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X20);
    // 0x801CCD98: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801CCD9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CCDA0: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801CCDA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CCDA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCDAC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CCDB0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CCDB4: addiu       $v1, $v1, -0x3596
    ctx->r3 = ADD32(ctx->r3, -0X3596);
    // 0x801CCDB8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCDBC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801CCDC0: lwc1        $f10, -0x3524($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3524);
    // 0x801CCDC4: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CCDC8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801CCDCC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801CCDD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CCDD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CCDD8: addiu       $a2, $a2, -0x359A
    ctx->r6 = ADD32(ctx->r6, -0X359A);
    // 0x801CCDDC: sub.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d - ctx->f4.d;
    // 0x801CCDE0: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CCDE4: nop

    // 0x801CCDE8: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801CCDEC: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801CCDF0: add.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d + ctx->f8.d;
    // 0x801CCDF4: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801CCDF8: swc1        $f4, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f4.u32l;
    // 0x801CCDFC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x801CCE00: ori         $t8, $v0, 0x80
    ctx->r24 = ctx->r2 | 0X80;
L_801CCE04:
    // 0x801CCE04: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_801CCE08:
    // 0x801CCE08: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801CCE0C: lw          $t9, -0x35A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X35A0);
    // 0x801CCE10: lw          $t1, 0x5C($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE14: sw          $t9, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r25;
    // 0x801CCE18: b           L_801CCE5C
    // 0x801CCE1C: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
        goto L_801CCE5C;
    // 0x801CCE1C: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE20: lbu         $t4, 0x59($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X59);
L_801CCE24:
    // 0x801CCE24: beq         $t4, $zero, L_801CCE5C
    if (ctx->r12 == 0) {
        // 0x801CCE28: nop
    
            goto L_801CCE5C;
    }
    // 0x801CCE28: nop

    // 0x801CCE2C: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x801CCE30: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801CCE34: bne         $t2, $zero, L_801CCE5C
    if (ctx->r10 != 0) {
        // 0x801CCE38: nop
    
            goto L_801CCE5C;
    }
    // 0x801CCE38: nop

    // 0x801CCE3C: lwc1        $f10, 0xA4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CCE40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CCE44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CCE48: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801CCE4C: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE50: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x801CCE54: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801CCE58: swc1        $f10, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->f10.u32l;
L_801CCE5C:
    // 0x801CCE5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCE60: lwc1        $f8, -0x3524($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3524);
    // 0x801CCE64: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CCE68: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CCE6C: swc1        $f8, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f8.u32l;
    // 0x801CCE70: lhu         $t3, -0x359C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X359C);
    // 0x801CCE74: beq         $t3, $zero, L_801CCE98
    if (ctx->r11 == 0) {
        // 0x801CCE78: nop
    
            goto L_801CCE98;
    }
    // 0x801CCE78: nop

    // 0x801CCE7C: lw          $t5, 0x5C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE80: swc1        $f16, 0x74($t5)
    MEM_W(0X74, ctx->r13) = ctx->f16.u32l;
    // 0x801CCE84: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE88: lwc1        $f0, 0x74($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X74);
    // 0x801CCE8C: swc1        $f0, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f0.u32l;
    // 0x801CCE90: lw          $t6, 0x5C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCE94: swc1        $f0, 0x6C($t6)
    MEM_W(0X6C, ctx->r14) = ctx->f0.u32l;
L_801CCE98:
    // 0x801CCE98: lbu         $t7, -0x3594($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3594);
    // 0x801CCE9C: beq         $t7, $zero, L_801CCED0
    if (ctx->r15 == 0) {
        // 0x801CCEA0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_801CCED0;
    }
    // 0x801CCEA0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CCEA4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801CCEA8: jal         0x801E8964
    // 0x801CCEAC: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    func_801E8964_5A4874(rdram, ctx);
        goto after_7;
    // 0x801CCEAC: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    after_7:
    // 0x801CCEB0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801CCEB4: jal         0x801E8964
    // 0x801CCEB8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_801E8964_5A4874(rdram, ctx);
        goto after_8;
    // 0x801CCEB8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_8:
    // 0x801CCEBC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CCEC0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCEC4: addiu       $a2, $a2, -0x359A
    ctx->r6 = ADD32(ctx->r6, -0X359A);
    // 0x801CCEC8: addiu       $v1, $v1, -0x3596
    ctx->r3 = ADD32(ctx->r3, -0X3596);
    // 0x801CCECC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
L_801CCED0:
    // 0x801CCED0: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x801CCED4: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCED8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801CCEDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCEE0: sb          $t8, 0x59($t9)
    MEM_B(0X59, ctx->r25) = ctx->r24;
    // 0x801CCEE4: lw          $t4, 0x5C($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCEE8: lbu         $t1, -0x3594($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3594);
    // 0x801CCEEC: sb          $t1, 0xAA($t4)
    MEM_B(0XAA, ctx->r12) = ctx->r9;
    // 0x801CCEF0: lwc1        $f6, -0x3574($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3574);
    // 0x801CCEF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCEF8: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCEFC: swc1        $f6, 0xB4($a3)
    MEM_W(0XB4, ctx->r7) = ctx->f6.u32l;
    // 0x801CCF00: lwc1        $f4, -0x3570($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3570);
    // 0x801CCF04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF08: swc1        $f4, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->f4.u32l;
    // 0x801CCF0C: lwc1        $f10, -0x356C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X356C);
    // 0x801CCF10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF14: swc1        $f10, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->f10.u32l;
    // 0x801CCF18: lwc1        $f8, -0x3568($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3568);
    // 0x801CCF1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF20: swc1        $f8, 0x5C($t2)
    MEM_W(0X5C, ctx->r10) = ctx->f8.u32l;
    // 0x801CCF24: lw          $t3, 0x5C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCF28: lwc1        $f6, -0x3564($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3564);
    // 0x801CCF2C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF30: swc1        $f6, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->f6.u32l;
    // 0x801CCF34: lw          $t5, 0x5C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCF38: lwc1        $f4, -0x3560($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3560);
    // 0x801CCF3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF40: swc1        $f4, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->f4.u32l;
    // 0x801CCF44: lwc1        $f10, -0x355C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X355C);
    // 0x801CCF48: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF4C: lw          $t6, 0x5C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCF50: swc1        $f10, 0xA8($a3)
    MEM_W(0XA8, ctx->r7) = ctx->f10.u32l;
    // 0x801CCF54: lwc1        $f8, -0x3558($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3558);
    // 0x801CCF58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF5C: swc1        $f8, 0xAC($a3)
    MEM_W(0XAC, ctx->r7) = ctx->f8.u32l;
    // 0x801CCF60: lwc1        $f6, -0x3554($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3554);
    // 0x801CCF64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF68: swc1        $f6, 0xB0($a3)
    MEM_W(0XB0, ctx->r7) = ctx->f6.u32l;
    // 0x801CCF6C: lwc1        $f4, -0x3550($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3550);
    // 0x801CCF70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF74: swc1        $f4, 0xB8($t6)
    MEM_W(0XB8, ctx->r14) = ctx->f4.u32l;
    // 0x801CCF78: lw          $t7, 0x5C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCF7C: lwc1        $f10, -0x354C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X354C);
    // 0x801CCF80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCF84: swc1        $f10, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f10.u32l;
    // 0x801CCF88: lw          $t8, 0x5C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCF8C: lwc1        $f8, -0x3548($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3548);
    // 0x801CCF90: swc1        $f8, 0xC0($t8)
    MEM_W(0XC0, ctx->r24) = ctx->f8.u32l;
    // 0x801CCF94: lbu         $t9, 0x61($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X61);
    // 0x801CCF98: bne         $t9, $zero, L_801CD01C
    if (ctx->r25 != 0) {
        // 0x801CCF9C: nop
    
            goto L_801CD01C;
    }
    // 0x801CCF9C: nop

    // 0x801CCFA0: lhu         $t1, 0x94($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X94);
    // 0x801CCFA4: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCFA8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801CCFAC: sll         $t4, $t1, 6
    ctx->r12 = S32(ctx->r9 << 6);
    // 0x801CCFB0: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x801CCFB4: lw          $t3, 0x5C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X5C);
    // 0x801CCFB8: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x801CCFBC: lhu         $a0, 0x94($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X94);
    // 0x801CCFC0: jal         0x80003F30
    // 0x801CCFC4: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    func_80003F30_4B30(rdram, ctx);
        goto after_9;
    // 0x801CCFC4: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    after_9:
    // 0x801CCFC8: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CCFCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CCFD0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x801CCFD4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x801CCFD8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x801CCFDC: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CCFE0: jal         0x8001D718
    // 0x801CCFE4: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_10;
    // 0x801CCFE4: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x801CCFE8: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801CCFEC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801CCFF0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CCFF4: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x801CCFF8: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801CCFFC: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801CD000: jal         0x80003A94
    // 0x801CD004: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_80003A94_4694(rdram, ctx);
        goto after_11;
    // 0x801CD004: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_11:
    // 0x801CD008: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CD00C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CD010: addiu       $a2, $a2, -0x359A
    ctx->r6 = ADD32(ctx->r6, -0X359A);
    // 0x801CD014: lw          $t5, 0x5C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD018: sh          $v0, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r2;
L_801CD01C:
    // 0x801CD01C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CD020: lhu         $t6, -0x359C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X359C);
    // 0x801CD024: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CD028: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CD02C: sh          $t6, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r14;
    // 0x801CD030: lw          $t7, -0x35B4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X35B4);
    // 0x801CD034: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD038: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801CD03C: sw          $t7, 0x9C($a3)
    MEM_W(0X9C, ctx->r7) = ctx->r15;
    // 0x801CD040: lw          $t8, -0x35A8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X35A8);
    // 0x801CD044: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CD048: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801CD04C: sw          $t8, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->r24;
    // 0x801CD050: lhu         $t1, 0x0($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X0);
    // 0x801CD054: lw          $t3, 0x5C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD058: sh          $t1, 0x98($a3)
    MEM_H(0X98, ctx->r7) = ctx->r9;
    // 0x801CD05C: lw          $t4, -0x35B0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X35B0);
    // 0x801CD060: sw          $t4, 0xA0($a3)
    MEM_W(0XA0, ctx->r7) = ctx->r12;
    // 0x801CD064: lw          $t2, -0x35A4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X35A4);
    // 0x801CD068: sw          $t2, 0x80($t3)
    MEM_W(0X80, ctx->r11) = ctx->r10;
    // 0x801CD06C: lhu         $t5, -0x3598($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3598);
    // 0x801CD070: sh          $t5, 0x9A($a3)
    MEM_H(0X9A, ctx->r7) = ctx->r13;
L_801CD074:
    // 0x801CD074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD078: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x801CD07C: jr          $ra
    // 0x801CD080: nop

    TRACE_RETURN()
    return;
    // 0x801CD080: nop

;}
RECOMP_FUNC void func_801DD654_599564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD658: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801DD65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD660: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD664: sb          $a2, 0x60($a0)
    MEM_B(0X60, ctx->r4) = ctx->r6;
    // 0x801DD668: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801DD66C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801DD670: sw          $t6, -0x3A24($at)
    MEM_W(-0X3A24, ctx->r1) = ctx->r14;
    // 0x801DD674: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DD67C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD680: sb          $v0, 0x69($t7)
    MEM_B(0X69, ctx->r15) = ctx->r2;
    // 0x801DD684: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD688: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
    // 0x801DD68C: addiu       $t2, $zero, 0xBB
    ctx->r10 = ADD32(0, 0XBB);
    // 0x801DD690: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801DD694: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD698: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801DD69C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801DD6A0: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801DD6A4: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801DD6A8: sh          $v0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r2;
    // 0x801DD6AC: lbu         $t0, 0x30($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X30);
    // 0x801DD6B0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DD6B4: sb          $t2, 0xCC($a0)
    MEM_B(0XCC, ctx->r4) = ctx->r10;
    // 0x801DD6B8: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x801DD6BC: sb          $t1, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r9;
    // 0x801DD6C0: jal         0x8003522C
    // 0x801DD6C4: addiu       $a1, $a1, 0xBF8
    ctx->r5 = ADD32(ctx->r5, 0XBF8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801DD6C4: addiu       $a1, $a1, 0xBF8
    ctx->r5 = ADD32(ctx->r5, 0XBF8);
    after_0:
    // 0x801DD6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD6D0: jr          $ra
    // 0x801DD6D4: nop

    TRACE_RETURN()
    return;
    // 0x801DD6D4: nop

;}
RECOMP_FUNC void func_801F59FC_5B190C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F59FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5A04: jal         0x801E3AC0
    // 0x801F5A08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5A08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5A14: jr          $ra
    // 0x801F5A18: nop

    TRACE_RETURN()
    return;
    // 0x801F5A18: nop

;}
RECOMP_FUNC void func_801DFC70_59BB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFC70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DFC74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DFC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DFC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DFC80: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DFC84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DFC88: jalr        $t9
    // 0x801DFC8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DFC8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DFC90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DFC94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DFC98: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFC9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DFCA0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DFCA4: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DFCA8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DFCAC: nop

    // 0x801DFCB0: bc1fl       L_801DFCCC
    if (!c1cs) {
        // 0x801DFCB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DFCCC;
    }
    goto skip_0;
    // 0x801DFCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DFCB8: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DFCBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DFCC0: jal         0x801DACDC
    // 0x801DFCC4: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DFCC4: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_1:
    // 0x801DFCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DFCCC:
    // 0x801DFCCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DFCD0: jr          $ra
    // 0x801DFCD4: nop

    TRACE_RETURN()
    return;
    // 0x801DFCD4: nop

;}
RECOMP_FUNC void func_801F45E4_5B04F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F45E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F45E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F45EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F45F0: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x801F45F4: jal         0x801F4AA4
    // 0x801F45F8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_801F4AA4_5B09B4(rdram, ctx);
        goto after_0;
    // 0x801F45F8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_0:
    // 0x801F45FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4604: jr          $ra
    // 0x801F4608: nop

    TRACE_RETURN()
    return;
    // 0x801F4608: nop

;}
RECOMP_FUNC void func_801ED724_5A9634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED724: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801ED728: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801ED72C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801ED730: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801ED734: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801ED738: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x801ED73C: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x801ED740: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x801ED744: addiu       $t7, $t7, 0x4D24
    ctx->r15 = ADD32(ctx->r15, 0X4D24);
    // 0x801ED748: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801ED74C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801ED750: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801ED754: addiu       $t0, $sp, 0x80
    ctx->r8 = ADD32(ctx->r29, 0X80);
    // 0x801ED758: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801ED75C: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x801ED760: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801ED764: addiu       $t3, $t3, 0x4D2C
    ctx->r11 = ADD32(ctx->r11, 0X4D2C);
    // 0x801ED768: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x801ED76C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801ED770: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x801ED774: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x801ED778: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801ED77C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x801ED780: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x801ED784: lw          $t6, 0xC($t3)
    ctx->r14 = MEM_W(ctx->r11, 0XC);
    // 0x801ED788: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x801ED78C: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x801ED790: sw          $t6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r14;
    // 0x801ED794: lw          $t6, 0x14($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X14);
    // 0x801ED798: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x801ED79C: lw          $at, 0x18($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X18);
    // 0x801ED7A0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801ED7A4: sw          $t6, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r14;
    // 0x801ED7A8: sw          $at, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r1;
    // 0x801ED7AC: sb          $t9, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r25;
    // 0x801ED7B0: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x801ED7B4: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801ED7B8: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x801ED7BC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x801ED7C0: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x801ED7C4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x801ED7C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801ED7CC: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801ED7D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ED7D4: addiu       $v1, $s0, 0x9C
    ctx->r3 = ADD32(ctx->r16, 0X9C);
    // 0x801ED7D8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801ED7DC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801ED7E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED7E4: or          $a2, $v1, $at
    ctx->r6 = ctx->r3 | ctx->r1;
    // 0x801ED7E8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801ED7EC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801ED7F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED7F4: or          $t5, $a2, $at
    ctx->r13 = ctx->r6 | ctx->r1;
    // 0x801ED7F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801ED7FC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801ED800: addiu       $t9, $zero, 0x152
    ctx->r25 = ADD32(0, 0X152);
    // 0x801ED804: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801ED808: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801ED80C: lhu         $t4, 0x14($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X14);
    // 0x801ED810: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x801ED814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ED818: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801ED81C: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801ED820: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x801ED824: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801ED828: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x801ED82C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x801ED830: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801ED834: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801ED838: jal         0x80034680
    // 0x801ED83C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801ED83C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    after_0:
    // 0x801ED840: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x801ED844: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ED848: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801ED84C: bne         $t8, $at, L_801ED860
    if (ctx->r24 != ctx->r1) {
        // 0x801ED850: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_801ED860;
    }
    // 0x801ED850: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x801ED854: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ED858: jal         0x801E8820
    // 0x801ED85C: addiu       $a2, $a2, 0x4AC0
    ctx->r6 = ADD32(ctx->r6, 0X4AC0);
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801ED85C: addiu       $a2, $a2, 0x4AC0
    ctx->r6 = ADD32(ctx->r6, 0X4AC0);
    after_1:
L_801ED860:
    // 0x801ED860: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x801ED864: sh          $t7, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r15;
    // 0x801ED868: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x801ED86C: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801ED870: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x801ED874: lbu         $t5, 0x90($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X90);
    // 0x801ED878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED87C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x801ED880: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x801ED884: lw          $t2, -0x2DE0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2DE0);
    // 0x801ED888: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x801ED88C: sw          $t2, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r10;
    // 0x801ED890: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x801ED894: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x801ED898: sltiu       $t6, $t3, 0x1
    ctx->r14 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x801ED89C: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x801ED8A0: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x801ED8A4: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x801ED8A8: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x801ED8AC: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x801ED8B0: addu        $t1, $t9, $t7
    ctx->r9 = ADD32(ctx->r25, ctx->r15);
    // 0x801ED8B4: jal         0x801EE3AC
    // 0x801ED8B8: addu        $a1, $t1, $t5
    ctx->r5 = ADD32(ctx->r9, ctx->r13);
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_2;
    // 0x801ED8B8: addu        $a1, $t1, $t5
    ctx->r5 = ADD32(ctx->r9, ctx->r13);
    after_2:
    // 0x801ED8BC: lbu         $t3, 0x2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2);
    // 0x801ED8C0: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801ED8C4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ED8C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801ED8CC: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x801ED8D0: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801ED8D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED8D8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801ED8DC: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x801ED8E0: or          $t4, $a2, $at
    ctx->r12 = ctx->r6 | ctx->r1;
    // 0x801ED8E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED8E8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801ED8EC: lbu         $t9, 0x5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5);
    // 0x801ED8F0: or          $a2, $t4, $at
    ctx->r6 = ctx->r12 | ctx->r1;
    // 0x801ED8F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801ED8F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801ED8FC: lbu         $t7, 0x6($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X6);
    // 0x801ED900: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801ED904: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801ED908: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x801ED90C: jal         0x801DC554
    // 0x801ED910: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_3;
    // 0x801ED910: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_3:
    // 0x801ED914: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801ED918: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801ED91C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801ED920: jr          $ra
    // 0x801ED924: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801ED924: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801DABFC_596B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DABFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DAC00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DAC04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DAC08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801DAC0C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801DAC10: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801DAC14: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801DAC18: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801DAC1C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801DAC20: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801DAC24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DAC28: jalr        $v0
    // 0x801DAC2C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801DAC2C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DAC30: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DAC34: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801DAC38: jal         0x801DACDC
    // 0x801DAC3C: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DAC3C: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    after_1:
    // 0x801DAC40: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801DAC44: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x801DAC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DAC4C: jalr        $t9
    // 0x801DAC50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801DAC50: nop

    after_2:
    // 0x801DAC54: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DAC58: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DAC5C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DAC60: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DAC64: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x801DAC68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAC6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DAC70: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x801DAC74: jr          $ra
    // 0x801DAC78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DAC78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801D9B78_595A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9B78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D9B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9B80: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801D9B84: sh          $t6, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r14;
    // 0x801D9B88: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D9B8C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D9B90: lui         $t8, 0xC
    ctx->r24 = S32(0XC << 16);
    // 0x801D9B94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D9B98: lhu         $t8, 0x2D90($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2D90);
    // 0x801D9B9C: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x801D9BA0: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x801D9BA4: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    // 0x801D9BA8: sh          $t8, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r24;
    // 0x801D9BAC: jal         0x80014218
    // 0x801D9BB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801D9BB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D9BB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D9BB8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D9BBC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801D9BC0: addiu       $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
    // 0x801D9BC4: addiu       $v1, $v1, -0x39E4
    ctx->r3 = ADD32(ctx->r3, -0X39E4);
    // 0x801D9BC8: sb          $zero, 0x93($a0)
    MEM_B(0X93, ctx->r4) = 0;
    // 0x801D9BCC: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    // 0x801D9BD0: sb          $t0, 0x84($a0)
    MEM_B(0X84, ctx->r4) = ctx->r8;
    // 0x801D9BD4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801D9BD8: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x801D9BDC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801D9BE0: bne         $a0, $t1, L_801D9BF4
    if (ctx->r4 != ctx->r9) {
        // 0x801D9BE4: lui         $t7, 0x8007
        ctx->r15 = S32(0X8007 << 16);
            goto L_801D9BF4;
    }
    // 0x801D9BE4: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x801D9BE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9BEC: addiu       $v0, $v0, 0x3F48
    ctx->r2 = ADD32(ctx->r2, 0X3F48);
    // 0x801D9BF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_801D9BF4:
    // 0x801D9BF4: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x801D9BF8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9BFC: addiu       $t7, $t7, -0x2218
    ctx->r15 = ADD32(ctx->r15, -0X2218);
    // 0x801D9C00: bne         $a0, $t2, L_801D9C10
    if (ctx->r4 != ctx->r10) {
        // 0x801D9C04: lui         $t8, 0xB800
        ctx->r24 = S32(0XB800 << 16);
            goto L_801D9C10;
    }
    // 0x801D9C04: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x801D9C08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9C0C: addiu       $v0, $v0, 0x3F88
    ctx->r2 = ADD32(ctx->r2, 0X3F88);
L_801D9C10:
    // 0x801D9C10: sw          $v0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r2;
    // 0x801D9C14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D9C18: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801D9C1C: lbu         $t5, 0x84($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X84);
    // 0x801D9C20: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x801D9C24: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x801D9C28: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x801D9C2C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x801D9C30: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801D9C34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801D9C38: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801D9C3C: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x801D9C40: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x801D9C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D9C4C: jr          $ra
    // 0x801D9C50: nop

    TRACE_RETURN()
    return;
    // 0x801D9C50: nop

;}
RECOMP_FUNC void func_801E8194_5A40A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E8198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E819C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E81A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E81A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E81A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E81AC: jal         0x801E1C90
    // 0x801E81B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_0;
    // 0x801E81B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801E81B4: lhu         $t6, 0x9A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X9A);
    // 0x801E81B8: beql        $t6, $zero, L_801E81E0
    if (ctx->r14 == 0) {
        // 0x801E81BC: lhu         $t7, 0x98($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X98);
            goto L_801E81E0;
    }
    goto skip_0;
    // 0x801E81BC: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    skip_0:
    // 0x801E81C0: jal         0x801E3358
    // 0x801E81C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3358_59F268(rdram, ctx);
        goto after_1;
    // 0x801E81C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E81C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E81CC: jal         0x801DACDC
    // 0x801E81D0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E81D0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_2:
    // 0x801E81D4: b           L_801E8290
    // 0x801E81D8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
        goto L_801E8290;
    // 0x801E81D8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E81DC: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
L_801E81E0:
    // 0x801E81E0: beql        $t7, $zero, L_801E8208
    if (ctx->r15 == 0) {
        // 0x801E81E4: lbu         $t8, 0x90($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X90);
            goto L_801E8208;
    }
    goto skip_1;
    // 0x801E81E4: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    skip_1:
    // 0x801E81E8: jal         0x801E2264
    // 0x801E81EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_3;
    // 0x801E81EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E81F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E81F4: jal         0x801DACDC
    // 0x801E81F8: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E81F8: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_4:
    // 0x801E81FC: b           L_801E8290
    // 0x801E8200: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
        goto L_801E8290;
    // 0x801E8200: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E8204: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
L_801E8208:
    // 0x801E8208: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E820C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E8210: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E8214: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E8218: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E821C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E8220: lhu         $t0, 0x7DB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB4);
    // 0x801E8224: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801E8228: bne         $t1, $zero, L_801E8244
    if (ctx->r9 != 0) {
        // 0x801E822C: nop
    
            goto L_801E8244;
    }
    // 0x801E822C: nop

    // 0x801E8230: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E8234: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E8238: lbu         $t2, 0x68($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X68);
    // 0x801E823C: bnel        $t2, $at, L_801E8258
    if (ctx->r10 != ctx->r1) {
        // 0x801E8240: lwc1        $f4, 0xA4($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
            goto L_801E8258;
    }
    goto skip_2;
    // 0x801E8240: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    skip_2:
L_801E8244:
    // 0x801E8244: jal         0x801E4624
    // 0x801E8248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E4624_5A0534(rdram, ctx);
        goto after_5;
    // 0x801E8248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801E824C: b           L_801E8380
    // 0x801E8250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E8380;
    // 0x801E8250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8254: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
L_801E8258:
    // 0x801E8258: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E825C: nop

    // 0x801E8260: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801E8264: nop

    // 0x801E8268: bc1fl       L_801E8294
    if (!c1cs) {
        // 0x801E826C: lhu         $t3, 0x30($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30);
            goto L_801E8294;
    }
    goto skip_3;
    // 0x801E826C: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
    skip_3:
    // 0x801E8270: jal         0x801E3324
    // 0x801E8274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_6;
    // 0x801E8274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E8278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E827C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E8280: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E8284: jal         0x801DAC7C
    // 0x801E8288: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_7;
    // 0x801E8288: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_7:
    // 0x801E828C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801E8290:
    // 0x801E8290: lhu         $t3, 0x30($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30);
L_801E8294:
    // 0x801E8294: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801E8298: sh          $t4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r12;
    // 0x801E829C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x801E82A0: bnel        $t5, $zero, L_801E82B4
    if (ctx->r13 != 0) {
        // 0x801E82A4: lwc1        $f8, 0x24($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
            goto L_801E82B4;
    }
    goto skip_4;
    // 0x801E82A4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801E82A8: jal         0x801E2458
    // 0x801E82AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2458_59E368(rdram, ctx);
        goto after_8;
    // 0x801E82AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E82B0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
L_801E82B4:
    // 0x801E82B4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E82B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E82BC: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E82C0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E82C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E82C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E82CC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x801E82D0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E82D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E82D8: lhu         $t6, 0x30($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X30);
    // 0x801E82DC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E82E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E82E4: nop

    // 0x801E82E8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801E82EC: beql        $t8, $zero, L_801E833C
    if (ctx->r24 == 0) {
        // 0x801E82F0: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_801E833C;
    }
    goto skip_5;
    // 0x801E82F0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801E82F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E82F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E82FC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E8300: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E8304: nop

    // 0x801E8308: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801E830C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E8310: nop

    // 0x801E8314: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801E8318: bne         $t8, $zero, L_801E8330
    if (ctx->r24 != 0) {
        // 0x801E831C: nop
    
            goto L_801E8330;
    }
    // 0x801E831C: nop

    // 0x801E8320: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801E8324: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E8328: b           L_801E8348
    // 0x801E832C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801E8348;
    // 0x801E832C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801E8330:
    // 0x801E8330: b           L_801E8348
    // 0x801E8334: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801E8348;
    // 0x801E8334: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801E8338: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_801E833C:
    // 0x801E833C: nop

    // 0x801E8340: bltz        $t8, L_801E8330
    if (SIGNED(ctx->r24) < 0) {
        // 0x801E8344: nop
    
            goto L_801E8330;
    }
    // 0x801E8344: nop

L_801E8348:
    // 0x801E8348: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E834C: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801E8350: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E8354: bnel        $at, $zero, L_801E8380
    if (ctx->r1 != 0) {
        // 0x801E8358: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E8380;
    }
    goto skip_6;
    // 0x801E8358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x801E835C: jal         0x801DACDC
    // 0x801E8360: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801E8360: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    after_9:
    // 0x801E8364: lbu         $t0, 0x60($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X60);
    // 0x801E8368: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E836C: bnel        $t0, $at, L_801E8380
    if (ctx->r8 != ctx->r1) {
        // 0x801E8370: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E8380;
    }
    goto skip_7;
    // 0x801E8370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x801E8374: jal         0x80038BC8
    // 0x801E8378: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_80038BC8_397C8(rdram, ctx);
        goto after_10;
    // 0x801E8378: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_10:
    // 0x801E837C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E8380:
    // 0x801E8380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E8388: jr          $ra
    // 0x801E838C: nop

    TRACE_RETURN()
    return;
    // 0x801E838C: nop

;}
RECOMP_FUNC void func_801F3314_5AF224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F3318: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F331C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F3320: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F3324: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801F3328: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801F332C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3330: beq         $v0, $zero, L_801F334C
    if (ctx->r2 == 0) {
        // 0x801F3334: lw          $v1, 0x18($t0)
        ctx->r3 = MEM_W(ctx->r8, 0X18);
            goto L_801F334C;
    }
    // 0x801F3334: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x801F3338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F333C: beq         $v0, $at, L_801F346C
    if (ctx->r2 == ctx->r1) {
        // 0x801F3340: nop
    
            goto L_801F346C;
    }
    // 0x801F3340: nop

    // 0x801F3344: b           L_801F3484
    // 0x801F3348: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F3484;
    // 0x801F3348: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F334C:
    // 0x801F334C: lw          $v0, 0x8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8C);
    // 0x801F3350: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801F3354: beql        $at, $zero, L_801F3440
    if (ctx->r1 == 0) {
        // 0x801F3358: lbu         $t3, 0xCC($t0)
        ctx->r11 = MEM_BU(ctx->r8, 0XCC);
            goto L_801F3440;
    }
    goto skip_0;
    // 0x801F3358: lbu         $t3, 0xCC($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XCC);
    skip_0:
    // 0x801F335C: lw          $t7, 0x88($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X88);
    // 0x801F3360: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801F3364: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F3368: bltz        $t7, L_801F337C
    if (SIGNED(ctx->r15) < 0) {
        // 0x801F336C: sw          $t6, 0x8C($s0)
        MEM_W(0X8C, ctx->r16) = ctx->r14;
            goto L_801F337C;
    }
    // 0x801F336C: sw          $t6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r14;
    // 0x801F3370: addiu       $t8, $zero, -0x1E
    ctx->r24 = ADD32(0, -0X1E);
    // 0x801F3374: b           L_801F3384
    // 0x801F3378: sw          $t8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r24;
        goto L_801F3384;
    // 0x801F3378: sw          $t8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r24;
L_801F337C:
    // 0x801F337C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x801F3380: sw          $t9, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r25;
L_801F3384:
    // 0x801F3384: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3388: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801F338C: ldc1        $f2, -0x3F20($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3F20);
    // 0x801F3390: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801F3394: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3398: ldc1        $f6, -0x3F18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3F18);
    // 0x801F339C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801F33A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F33A4: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x801F33A8: ldc1        $f18, -0x3F10($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3F10);
    // 0x801F33AC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F33B0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801F33B4: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x801F33B8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801F33BC: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x801F33C0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F33C4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801F33C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801F33CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F33D0: div.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f2.d);
    // 0x801F33D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F33D8: div.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x801F33DC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F33E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F33E4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801F33E8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801F33EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F33F0: jal         0x801F2CD0
    // 0x801F33F4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_801F2CD0_5AEBE0(rdram, ctx);
        goto after_0;
    // 0x801F33F4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801F33F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F33FC: beq         $v0, $zero, L_801F343C
    if (ctx->r2 == 0) {
        // 0x801F3400: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_801F343C;
    }
    // 0x801F3400: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801F3404: lw          $t2, 0x88($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X88);
    // 0x801F3408: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F340C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F3410: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x801F3414: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801F3418: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801F341C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F3420: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801F3424: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F3428: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801F342C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801F3430: jal         0x801EE530
    // 0x801F3434: nop

    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801F3434: nop

    after_1:
    // 0x801F3438: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_801F343C:
    // 0x801F343C: lbu         $t3, 0xCC($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XCC);
L_801F3440:
    // 0x801F3440: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801F3444: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F3448: bnel        $t3, $at, L_801F3460
    if (ctx->r11 != ctx->r1) {
        // 0x801F344C: lbu         $t5, 0x60($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X60);
            goto L_801F3460;
    }
    goto skip_1;
    // 0x801F344C: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
    skip_1:
    // 0x801F3450: lbu         $t4, -0x3594($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3594);
    // 0x801F3454: beql        $t4, $zero, L_801F3484
    if (ctx->r12 == 0) {
        // 0x801F3458: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3484;
    }
    goto skip_2;
    // 0x801F3458: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x801F345C: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
L_801F3460:
    // 0x801F3460: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801F3464: b           L_801F3480
    // 0x801F3468: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
        goto L_801F3480;
    // 0x801F3468: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
L_801F346C:
    // 0x801F346C: jal         0x801F3AF0
    // 0x801F3470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F3AF0_5AFA00(rdram, ctx);
        goto after_2;
    // 0x801F3470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F3474: bne         $v0, $zero, L_801F3480
    if (ctx->r2 != 0) {
        // 0x801F3478: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_801F3480;
    }
    // 0x801F3478: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F347C: sb          $t7, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r15;
L_801F3480:
    // 0x801F3480: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3484:
    // 0x801F3484: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F3488: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F348C: jr          $ra
    // 0x801F3490: nop

    TRACE_RETURN()
    return;
    // 0x801F3490: nop

;}
RECOMP_FUNC void func_801D55E0_5914F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D55E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D55E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D55E8: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D55EC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D55F0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D55F4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D55F8: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D55FC: addiu       $v1, $v1, -0x2E40
    ctx->r3 = ADD32(ctx->r3, -0X2E40);
    // 0x801D5600: addiu       $v0, $v0, -0x2E50
    ctx->r2 = ADD32(ctx->r2, -0X2E50);
    // 0x801D5604: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5608: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x801D560C: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x801D5610: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D5614: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801D5618: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D561C: addiu       $a1, $a1, -0x2E30
    ctx->r5 = ADD32(ctx->r5, -0X2E30);
    // 0x801D5620: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D5624: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D5628: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    // 0x801D562C: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801D5630: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x801D5634: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D5638: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x801D563C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D5640: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D5644: lwc1        $f12, 0x4($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D5648: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x801D564C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D5650: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801D5654: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5658: nop

    // 0x801D565C: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D5660: nop

    // 0x801D5664: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D5668: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801D566C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5670: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801D5674: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5678: swc1        $f0, -0x2E34($at)
    MEM_W(-0X2E34, ctx->r1) = ctx->f0.u32l;
    // 0x801D567C: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D5680: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5684: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x801D5688: jal         0x80003A94
    // 0x801D568C: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    func_80003A94_4694(rdram, ctx);
        goto after_0;
    // 0x801D568C: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    after_0:
    // 0x801D5690: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D5694: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5698: sh          $v0, -0x2E2C($at)
    MEM_H(-0X2E2C, ctx->r1) = ctx->r2;
    // 0x801D569C: addiu       $v1, $v1, -0x2E40
    ctx->r3 = ADD32(ctx->r3, -0X2E40);
    // 0x801D56A0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D56A4: jal         0x80003A94
    // 0x801D56A8: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    func_80003A94_4694(rdram, ctx);
        goto after_1;
    // 0x801D56A8: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x801D56AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D56B0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D56B4: sh          $v0, -0x2E2A($at)
    MEM_H(-0X2E2A, ctx->r1) = ctx->r2;
    // 0x801D56B8: jal         0x8001D394
    // 0x801D56BC: addiu       $a0, $a0, -0x2E50
    ctx->r4 = ADD32(ctx->r4, -0X2E50);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D56BC: addiu       $a0, $a0, -0x2E50
    ctx->r4 = ADD32(ctx->r4, -0X2E50);
    after_2:
    // 0x801D56C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D56C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D56C8: jr          $ra
    // 0x801D56CC: nop

    TRACE_RETURN()
    return;
    // 0x801D56CC: nop

;}
RECOMP_FUNC void func_801CB800_587710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB80C: jal         0x801D98E0
    // 0x801CB810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D98E0_5957F0(rdram, ctx);
        goto after_0;
    // 0x801CB810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB81C: jr          $ra
    // 0x801CB820: nop

    TRACE_RETURN()
    return;
    // 0x801CB820: nop

;}
RECOMP_FUNC void func_801E6A64_5A2974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6A64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E6A68: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E6A6C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801E6A70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E6A74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E6A78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6A7C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801E6A80: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801E6A84: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801E6A88: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801E6A8C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E6A90: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801E6A94: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801E6A98: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801E6A9C: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x801E6AA0: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x801E6AA4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E6AA8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E6AAC: jal         0x80033898
    // 0x801E6AB0: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E6AB0: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x801E6AB4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6AB8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6ABC: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E6AC0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E6AC4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E6AC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E6ACC: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801E6AD0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6AD4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6AD8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E6ADC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E6AE0: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x801E6AE4: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6AE8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6AEC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801E6AF0: jal         0x80029E08
    // 0x801E6AF4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_1;
    // 0x801E6AF4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E6AF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E6AFC: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801E6B00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E6B04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E6B08: jr          $ra
    // 0x801E6B0C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x801E6B0C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_801DCA64_598974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCA64: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DCA68: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DCA6C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x801DCA70: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x801DCA74: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x801DCA78: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x801DCA7C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801DCA80: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801DCA84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801DCA88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801DCA8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DCA90: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801DCA94: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801DCA98: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DCA9C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x801DCAA0: addiu       $t2, $t2, 0x4910
    ctx->r10 = ADD32(ctx->r10, 0X4910);
    // 0x801DCAA4: lhu         $t0, 0x3C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X3C);
    // 0x801DCAA8: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x801DCAAC: lhu         $t5, 0x0($t2)
    ctx->r13 = MEM_HU(ctx->r10, 0X0);
    // 0x801DCAB0: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x801DCAB4: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x801DCAB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801DCABC: lw          $t4, -0x66E4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X66E4);
    // 0x801DCAC0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DCAC4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DCAC8: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801DCACC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DCAD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DCAD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801DCAD8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x801DCADC: lw          $t1, 0x40($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X40);
    // 0x801DCAE0: bne         $at, $zero, L_801DCB14
    if (ctx->r1 != 0) {
        // 0x801DCAE4: addu        $s2, $t9, $t4
        ctx->r18 = ADD32(ctx->r25, ctx->r12);
            goto L_801DCB14;
    }
    // 0x801DCAE4: addu        $s2, $t9, $t4
    ctx->r18 = ADD32(ctx->r25, ctx->r12);
    // 0x801DCAE8: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x801DCAEC: addiu       $v0, $v0, 0x4910
    ctx->r2 = ADD32(ctx->r2, 0X4910);
    // 0x801DCAF0: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
L_801DCAF4:
    // 0x801DCAF4: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x801DCAF8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801DCAFC: bne         $v1, $zero, L_801DCB0C
    if (ctx->r3 != 0) {
        // 0x801DCB00: slt         $at, $t0, $v1
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_801DCB0C;
    }
    // 0x801DCB00: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801DCB04: b           L_801DCCC0
    // 0x801DCB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCCC0;
    // 0x801DCB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCB0C:
    // 0x801DCB0C: beql        $at, $zero, L_801DCAF4
    if (ctx->r1 == 0) {
        // 0x801DCB10: lhu         $v1, 0x4($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X4);
            goto L_801DCAF4;
    }
    goto skip_0;
    // 0x801DCB10: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    skip_0:
L_801DCB14:
    // 0x801DCB14: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x801DCB18: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x801DCB1C: lhu         $t8, 0x2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2);
    // 0x801DCB20: sll         $t3, $t8, 24
    ctx->r11 = S32(ctx->r24 << 24);
    // 0x801DCB24: subu        $t9, $t1, $t3
    ctx->r25 = SUB32(ctx->r9, ctx->r11);
    // 0x801DCB28: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x801DCB2C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x801DCB30: beq         $a0, $zero, L_801DCC60
    if (ctx->r4 == 0) {
        // 0x801DCB34: nop
    
            goto L_801DCC60;
    }
    // 0x801DCB34: nop

    // 0x801DCB38: beq         $a1, $zero, L_801DCB44
    if (ctx->r5 == 0) {
        // 0x801DCB3C: or          $s7, $a1, $zero
        ctx->r23 = ctx->r5 | 0;
            goto L_801DCB44;
    }
    // 0x801DCB3C: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x801DCB40: blez        $a1, L_801DCC60
    if (SIGNED(ctx->r5) <= 0) {
        // 0x801DCB44: lui         $s1, 0x8016
        ctx->r17 = S32(0X8016 << 16);
            goto L_801DCC60;
    }
L_801DCB44:
    // 0x801DCB44: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x801DCB48: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x801DCB4C: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x801DCB50: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x801DCB54: lui         $fp, 0xC
    ctx->r30 = S32(0XC << 16);
    // 0x801DCB58: ori         $fp, $fp, 0x7FA4
    ctx->r30 = ctx->r30 | 0X7FA4;
    // 0x801DCB5C: ori         $s5, $s5, 0x5800
    ctx->r21 = ctx->r21 | 0X5800;
    // 0x801DCB60: ori         $s4, $s4, 0x8000
    ctx->r20 = ctx->r20 | 0X8000;
    // 0x801DCB64: addiu       $s3, $s3, 0x1000
    ctx->r19 = ADD32(ctx->r19, 0X1000);
    // 0x801DCB68: addiu       $s1, $s1, -0x3A38
    ctx->r17 = ADD32(ctx->r17, -0X3A38);
    // 0x801DCB6C: jal         0x80014698
    // 0x801DCB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014698_15298(rdram, ctx);
        goto after_0;
    // 0x801DCB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801DCB74: sltiu       $at, $v0, 0x2001
    ctx->r1 = ctx->r2 < 0X2001 ? 1 : 0;
    // 0x801DCB78: beq         $at, $zero, L_801DCBC0
    if (ctx->r1 == 0) {
        // 0x801DCB7C: nop
    
            goto L_801DCBC0;
    }
    // 0x801DCB7C: nop

    // 0x801DCB80: beql        $s0, $zero, L_801DCBAC
    if (ctx->r16 == 0) {
        // 0x801DCB84: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_801DCBAC;
    }
    goto skip_1;
    // 0x801DCB84: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x801DCB88: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x801DCB8C: addu        $t5, $t4, $s4
    ctx->r13 = ADD32(ctx->r12, ctx->r20);
    // 0x801DCB90: lh          $t6, 0x2DB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2DB0);
    // 0x801DCB94: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DCB98: mflo        $t7
    ctx->r15 = lo;
    // 0x801DCB9C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x801DCBA0: bnel        $s0, $t8, L_801DCC14
    if (ctx->r16 != ctx->r24) {
        // 0x801DCBA4: lw          $t4, 0x4($s2)
        ctx->r12 = MEM_W(ctx->r18, 0X4);
            goto L_801DCC14;
    }
    goto skip_2;
    // 0x801DCBA4: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    skip_2:
    // 0x801DCBA8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
L_801DCBAC:
    // 0x801DCBAC: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x801DCBB0: jal         0x800148F0
    // 0x801DCBB4: addu        $a0, $t3, $fp
    ctx->r4 = ADD32(ctx->r11, ctx->r30);
    func_800148F0_154F0(rdram, ctx);
        goto after_1;
    // 0x801DCBB4: addu        $a0, $t3, $fp
    ctx->r4 = ADD32(ctx->r11, ctx->r30);
    after_1:
    // 0x801DCBB8: b           L_801DCC10
    // 0x801DCBBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801DCC10;
    // 0x801DCBBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801DCBC0:
    // 0x801DCBC0: beql        $s0, $zero, L_801DCBF8
    if (ctx->r16 == 0) {
        // 0x801DCBC4: lw          $t7, 0x0($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X0);
            goto L_801DCBF8;
    }
    goto skip_3;
    // 0x801DCBC4: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x801DCBC8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x801DCBCC: addu        $t9, $v0, $s4
    ctx->r25 = ADD32(ctx->r2, ctx->r20);
    // 0x801DCBD0: lh          $t4, 0x2DB0($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2DB0);
    // 0x801DCBD4: addu        $a0, $v0, $fp
    ctx->r4 = ADD32(ctx->r2, ctx->r30);
    // 0x801DCBD8: multu       $t4, $s5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DCBDC: mflo        $t5
    ctx->r13 = lo;
    // 0x801DCBE0: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x801DCBE4: beql        $s0, $t6, L_801DCBF8
    if (ctx->r16 == ctx->r14) {
        // 0x801DCBE8: lw          $t7, 0x0($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X0);
            goto L_801DCBF8;
    }
    goto skip_4;
    // 0x801DCBE8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    skip_4:
    // 0x801DCBEC: jal         0x80014B74
    // 0x801DCBF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x801DCBF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x801DCBF4: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
L_801DCBF8:
    // 0x801DCBF8: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x801DCBFC: lh          $t3, 0x2DB0($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X2DB0);
    // 0x801DCC00: multu       $t3, $s5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DCC04: mflo        $t9
    ctx->r25 = lo;
    // 0x801DCC08: addu        $s0, $s3, $t9
    ctx->r16 = ADD32(ctx->r19, ctx->r25);
    // 0x801DCC0C: nop

L_801DCC10:
    // 0x801DCC10: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
L_801DCC14:
    // 0x801DCC14: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x801DCC18: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x801DCC1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DCC20: jal         0x800144E8
    // 0x801DCC24: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    func_800144E8_150E8(rdram, ctx);
        goto after_3;
    // 0x801DCC24: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    after_3:
    // 0x801DCC28: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x801DCC2C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x801DCC30: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x801DCC34: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x801DCC38: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x801DCC3C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x801DCC40: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x801DCC44: beq         $a0, $zero, L_801DCC60
    if (ctx->r4 == 0) {
        // 0x801DCC48: nop
    
            goto L_801DCC60;
    }
    // 0x801DCC48: nop

    // 0x801DCC4C: beq         $s7, $zero, L_801DCB44
    if (ctx->r23 == 0) {
        // 0x801DCC50: nop
    
            goto L_801DCB44;
    }
    // 0x801DCC50: nop

    // 0x801DCC54: slt         $at, $s6, $s7
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x801DCC58: bne         $at, $zero, L_801DCB44
    if (ctx->r1 != 0) {
        // 0x801DCC5C: nop
    
            goto L_801DCB44;
    }
    // 0x801DCC5C: nop

L_801DCC60:
    // 0x801DCC60: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x801DCC64: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x801DCC68: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x801DCC6C: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x801DCC70: lui         $fp, 0xC
    ctx->r30 = S32(0XC << 16);
    // 0x801DCC74: ori         $fp, $fp, 0x7FA4
    ctx->r30 = ctx->r30 | 0X7FA4;
    // 0x801DCC78: ori         $s5, $s5, 0x5800
    ctx->r21 = ctx->r21 | 0X5800;
    // 0x801DCC7C: ori         $s4, $s4, 0x8000
    ctx->r20 = ctx->r20 | 0X8000;
    // 0x801DCC80: addiu       $s3, $s3, 0x1000
    ctx->r19 = ADD32(ctx->r19, 0X1000);
    // 0x801DCC84: beq         $s0, $zero, L_801DCCBC
    if (ctx->r16 == 0) {
        // 0x801DCC88: addiu       $s1, $s1, -0x3A38
        ctx->r17 = ADD32(ctx->r17, -0X3A38);
            goto L_801DCCBC;
    }
    // 0x801DCC88: addiu       $s1, $s1, -0x3A38
    ctx->r17 = ADD32(ctx->r17, -0X3A38);
    // 0x801DCC8C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x801DCC90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DCC94: addu        $t8, $v0, $s4
    ctx->r24 = ADD32(ctx->r2, ctx->r20);
    // 0x801DCC98: lh          $t3, 0x2DB0($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X2DB0);
    // 0x801DCC9C: multu       $t3, $s5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801DCCA0: mflo        $t9
    ctx->r25 = lo;
    // 0x801DCCA4: addu        $t4, $s3, $t9
    ctx->r12 = ADD32(ctx->r19, ctx->r25);
    // 0x801DCCA8: beql        $s0, $t4, L_801DCCC0
    if (ctx->r16 == ctx->r12) {
        // 0x801DCCAC: sltiu       $v0, $a0, 0x1
        ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
            goto L_801DCCC0;
    }
    goto skip_5;
    // 0x801DCCAC: sltiu       $v0, $a0, 0x1
    ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
    skip_5:
    // 0x801DCCB0: jal         0x80014B74
    // 0x801DCCB4: addu        $a0, $v0, $fp
    ctx->r4 = ADD32(ctx->r2, ctx->r30);
    func_80014B74_15774(rdram, ctx);
        goto after_4;
    // 0x801DCCB4: addu        $a0, $v0, $fp
    ctx->r4 = ADD32(ctx->r2, ctx->r30);
    after_4:
    // 0x801DCCB8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_801DCCBC:
    // 0x801DCCBC: sltiu       $v0, $a0, 0x1
    ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
L_801DCCC0:
    // 0x801DCCC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DCCC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DCCC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801DCCCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801DCCD0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801DCCD4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801DCCD8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x801DCCDC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x801DCCE0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x801DCCE4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x801DCCE8: jr          $ra
    // 0x801DCCEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801DCCEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
