#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08003A40_6E2BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003A50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003A54: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08003A58: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003A5C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003A60: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003A64: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08003A68: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003A6C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3A8C) << 16);
    // 0x08003A70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003A74: jalr        $t9
    // 0x08003A78: addiu       $a0, $a0, 0x3A8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3A8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A78: addiu       $a0, $a0, 0x3A8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3A8C));
    after_0:
    // 0x08003A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003A84: jr          $ra
    // 0x08003A88: nop

    TRACE_RETURN()
    return;
    // 0x08003A88: nop

;}
RECOMP_FUNC void func_08001AAC_6E0C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001AB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001AB8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001ABC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AC4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001AC8: bne         $v0, $zero, L_08001ADC
    if (ctx->r2 != 0) {
        // 0x08001ACC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001ADC;
    }
    // 0x08001ACC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001AD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1640) << 16);
    // 0x08001AD4: jalr        $t9
    // 0x08001AD8: addiu       $a0, $a0, 0x1640
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1640));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AD8: addiu       $a0, $a0, 0x1640
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1640));
    after_0:
L_08001ADC:
    // 0x08001ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AE4: jr          $ra
    // 0x08001AE8: nop

    TRACE_RETURN()
    return;
    // 0x08001AE8: nop

;}
RECOMP_FUNC void func_08002444_6E15E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800244C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002450: lhu         $t8, 0x14($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X14);
    // 0x08002454: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002458: lhu         $t1, 0x18($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X18);
    // 0x0800245C: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x08002460: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08002464: andi        $t3, $t0, 0xFFFF
    ctx->r11 = ctx->r8 & 0XFFFF;
    // 0x08002468: slti        $at, $t3, 0x300
    ctx->r1 = SIGNED(ctx->r11) < 0X300 ? 1 : 0;
    // 0x0800246C: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x08002470: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002474: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002478: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x0800247C: sh          $t0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r8;
    // 0x08002480: beq         $at, $zero, L_08002490
    if (ctx->r1 == 0) {
        // 0x08002484: sh          $t2, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r10;
            goto L_08002490;
    }
    // 0x08002484: sh          $t2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r10;
    // 0x08002488: addiu       $t4, $zero, 0x300
    ctx->r12 = ADD32(0, 0X300);
    // 0x0800248C: sh          $t4, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r12;
L_08002490:
    // 0x08002490: lhu         $t5, 0x18($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X18);
    // 0x08002494: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x08002498: addiu       $a0, $zero, 0x247
    ctx->r4 = ADD32(0, 0X247);
    // 0x0800249C: slti        $at, $t5, 0x41
    ctx->r1 = SIGNED(ctx->r13) < 0X41 ? 1 : 0;
    // 0x080024A0: bne         $at, $zero, L_080024AC
    if (ctx->r1 != 0) {
        // 0x080024A4: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_080024AC;
    }
    // 0x080024A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080024A8: sh          $t6, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r14;
L_080024AC:
    // 0x080024AC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080024B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080024B4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080024B8: lhu         $v0, 0x8A($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X8A);
    // 0x080024BC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080024C0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x080024C4: bne         $v0, $zero, L_08002508
    if (ctx->r2 != 0) {
        // 0x080024C8: sh          $t8, 0x8A($t7)
        MEM_H(0X8A, ctx->r15) = ctx->r24;
            goto L_08002508;
    }
    // 0x080024C8: sh          $t8, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r24;
    // 0x080024CC: jalr        $t9
    // 0x080024D0: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024D0: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    after_0:
    // 0x080024D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024D8: addiu       $t9, $t9, -0x672C
    ctx->r25 = ADD32(ctx->r25, -0X672C);
    // 0x080024DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080024E0: jalr        $t9
    // 0x080024E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x080024E8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x080024EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024F0: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x080024F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2518) << 16);
    // 0x080024FC: addiu       $a0, $a0, 0x2518
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2518));
    // 0x08002500: jalr        $t9
    // 0x08002504: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002504: sh          $t0, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = ctx->r8;
    after_2:
L_08002508:
    // 0x08002508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002510: jr          $ra
    // 0x08002514: nop

    TRACE_RETURN()
    return;
    // 0x08002514: nop

;}
RECOMP_FUNC void func_08002BF8_6E1D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002BFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002C08: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002C10: jalr        $t9
    // 0x08002C14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002C18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C1C: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08002C20: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x08002C24: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08002C28: jalr        $t9
    // 0x08002C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002C30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C34: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002C38: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002C3C: jalr        $t9
    // 0x08002C40: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C40: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08002C44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002C48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C4C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002C5C: jalr        $t9
    // 0x08002C60: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002C60: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08002C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C70: jr          $ra
    // 0x08002C74: nop

    TRACE_RETURN()
    return;
    // 0x08002C74: nop

;}
RECOMP_FUNC void func_0800229C_6E143C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800229C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080022A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080022A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080022A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080022AC: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x080022B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080022B8: beq         $t6, $zero, L_080022DC
    if (ctx->r14 == 0) {
        // 0x080022BC: addiu       $t9, $t9, -0x48C4
        ctx->r25 = ADD32(ctx->r25, -0X48C4);
            goto L_080022DC;
    }
    // 0x080022BC: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080022C0: jalr        $t9
    // 0x080022C4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022C4: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_0:
    // 0x080022C8: beq         $v0, $zero, L_080022DC
    if (ctx->r2 == 0) {
        // 0x080022CC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_080022DC;
    }
    // 0x080022CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080022D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080022D4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080022D8: swc1        $f4, -0x3240($at)
    MEM_W(-0X3240, ctx->r1) = ctx->f4.u32l;
L_080022DC:
    // 0x080022DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080022E0: lwc1        $f8, -0x3240($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3240);
    // 0x080022E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080022E8: nop

    // 0x080022EC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x080022F0: nop

    // 0x080022F4: bc1tl       L_080023C0
    if (c1cs) {
        // 0x080022F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080023C0;
    }
    goto skip_0;
    // 0x080022F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080022FC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002300: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08002304: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x08002308: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800230C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002310: beq         $v1, $zero, L_080023BC
    if (ctx->r3 == 0) {
        // 0x08002314: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_080023BC;
    }
    // 0x08002314: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08002318: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x0800231C: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x08002320: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08002324: ori         $t0, $t8, 0x20
    ctx->r8 = ctx->r24 | 0X20;
    // 0x08002328: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x0800232C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DD4) << 16);
    // 0x08002330: lwc1        $f10, 0x4DD4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DD4));
    // 0x08002334: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002338: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800233C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002340: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x08002344: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08002348: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800234C: addiu       $a0, $zero, 0x247
    ctx->r4 = ADD32(0, 0X247);
    // 0x08002350: jalr        $t9
    // 0x08002354: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002354: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    after_1:
    // 0x08002358: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800235C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002364: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x08002368: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x0800236C: jalr        $t9
    // 0x08002370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002374: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002378: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800237C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002380: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x08002384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002388: jalr        $t9
    // 0x0800238C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800238C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08002390: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002394: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800239C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080023A0: jalr        $t9
    // 0x080023A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080023A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x080023A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X23D0) << 16);
    // 0x080023B4: jalr        $t9
    // 0x080023B8: addiu       $a0, $a0, 0x23D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X23D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080023B8: addiu       $a0, $a0, 0x23D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X23D0));
    after_5:
L_080023BC:
    // 0x080023BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080023C0:
    // 0x080023C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080023C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080023C8: jr          $ra
    // 0x080023CC: nop

    TRACE_RETURN()
    return;
    // 0x080023CC: nop

;}
RECOMP_FUNC void func_08003ADC_6E2C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003AE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003AE8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08003AEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003AF0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003AF4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08003AF8: bnel        $t7, $zero, L_08003B24
    if (ctx->r15 != 0) {
        // 0x08003AFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003B24;
    }
    goto skip_0;
    // 0x08003AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003B00: jalr        $t9
    // 0x08003B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003B08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B0C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003B10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003B18: jalr        $t9
    // 0x08003B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x08003B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003B24:
    // 0x08003B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003B28: jr          $ra
    // 0x08003B2C: nop

    TRACE_RETURN()
    return;
    // 0x08003B2C: nop

;}
RECOMP_FUNC void func_0800347C_6E261C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800347C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003484: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003488: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800348C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x08003490: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003494: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003498: bne         $v0, $zero, L_080034F4
    if (ctx->r2 != 0) {
        // 0x0800349C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080034F4;
    }
    // 0x0800349C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080034A0: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080034A4: jalr        $t9
    // 0x080034A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080034A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080034AC: beq         $v0, $zero, L_080034E0
    if (ctx->r2 == 0) {
        // 0x080034B0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080034E0;
    }
    // 0x080034B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080034B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034B8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080034BC: jalr        $t9
    // 0x080034C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080034C0: nop

    after_1:
    // 0x080034C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080034CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X317C) << 16);
    // 0x080034D0: jalr        $t9
    // 0x080034D4: addiu       $a0, $a0, 0x317C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X317C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080034D4: addiu       $a0, $a0, 0x317C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X317C));
    after_2:
    // 0x080034D8: b           L_080034F8
    // 0x080034DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080034F8;
    // 0x080034DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080034E0:
    // 0x080034E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080034E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3504) << 16);
    // 0x080034EC: jalr        $t9
    // 0x080034F0: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3504));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080034F0: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3504));
    after_3:
L_080034F4:
    // 0x080034F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080034F8:
    // 0x080034F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080034FC: jr          $ra
    // 0x08003500: nop

    TRACE_RETURN()
    return;
    // 0x08003500: nop

;}
RECOMP_FUNC void func_0800069C_6DF83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006A8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080006AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080006B0: jalr        $t9
    // 0x080006B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080006B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006BC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080006C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080006C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080006C8: jalr        $t9
    // 0x080006CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x080006D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080006D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006D8: jr          $ra
    // 0x080006DC: nop

    TRACE_RETURN()
    return;
    // 0x080006DC: nop

;}
RECOMP_FUNC void func_0800057C_6DF71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800057C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000584: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000588: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800058C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000590: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000594: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000598: bne         $v0, $zero, L_080005AC
    if (ctx->r2 != 0) {
        // 0x0800059C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080005AC;
    }
    // 0x0800059C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080005A0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080005A4: jalr        $t9
    // 0x080005A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_080005AC:
    // 0x080005AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005B4: jr          $ra
    // 0x080005B8: nop

    TRACE_RETURN()
    return;
    // 0x080005B8: nop

;}
RECOMP_FUNC void func_08004098_6E3238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800409C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080040A0: lbu         $t6, 0xE4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE4);
    // 0x080040A4: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x080040A8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x080040AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080040B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080040B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080040B8: bgez        $t6, L_080040D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x080040BC: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_080040D4;
    }
    // 0x080040BC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080040C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080040C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080040C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080040CC: nop

    // 0x080040D0: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_080040D4:
    // 0x080040D4: lw          $t7, 0x84($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X84);
    // 0x080040D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080040DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x080040E0: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x080040E4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080040E8: sub.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d - ctx->f0.d;
    // 0x080040EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080040F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080040F4: add.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f6.d + ctx->f18.d;
    // 0x080040F8: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x080040FC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x08004100: lbu         $t9, 0xE5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XE5);
    // 0x08004104: lw          $t8, 0x84($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X84);
    // 0x08004108: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x0800410C: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08004110: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08004114: bgez        $t9, L_08004128
    if (SIGNED(ctx->r25) >= 0) {
        // 0x08004118: add.s       $f6, $f10, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
            goto L_08004128;
    }
    // 0x08004118: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800411C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004120: nop

    // 0x08004124: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_08004128:
    // 0x08004128: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800412C: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08004130: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08004134: addiu       $t9, $t9, 0x7DE8
    ctx->r25 = ADD32(ctx->r25, 0X7DE8);
    // 0x08004138: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x0800413C: lbu         $t1, 0xE6($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XE6);
    // 0x08004140: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x08004144: bgez        $t1, L_0800415C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08004148: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_0800415C;
    }
    // 0x08004148: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x0800414C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08004150: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08004154: nop

    // 0x08004158: add.d       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f18.d + ctx->f8.d;
L_0800415C:
    // 0x0800415C: lw          $t2, 0x84($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X84);
    // 0x08004160: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08004164: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08004168: sub.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f6.d - ctx->f0.d;
    // 0x0800416C: add.d       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f18.d + ctx->f10.d;
    // 0x08004170: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x08004174: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x08004178: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x0800417C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08004180: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08004184: beq         $v1, $zero, L_080041A8
    if (ctx->r3 == 0) {
        // 0x08004188: sh          $t3, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r11;
            goto L_080041A8;
    }
    // 0x08004188: sh          $t3, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r11;
    // 0x0800418C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004190: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004194: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X43C4) << 16);
    // 0x08004198: jalr        $t9
    // 0x0800419C: addiu       $a0, $a0, 0x43C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X43C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800419C: addiu       $a0, $a0, 0x43C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X43C4));
    after_0:
    // 0x080041A0: b           L_080043B8
    // 0x080041A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080043B8;
    // 0x080041A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080041A8:
    // 0x080041A8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x080041AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080041B0: jalr        $t9
    // 0x080041B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080041B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x080041B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080041BC: beq         $v0, $zero, L_080041E0
    if (ctx->r2 == 0) {
        // 0x080041C0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080041E0;
    }
    // 0x080041C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080041C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080041C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080041CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X43C4) << 16);
    // 0x080041D0: jalr        $t9
    // 0x080041D4: addiu       $a0, $a0, 0x43C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X43C4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080041D4: addiu       $a0, $a0, 0x43C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X43C4));
    after_2:
    // 0x080041D8: b           L_080043B8
    // 0x080041DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080043B8;
    // 0x080041DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080041E0:
    // 0x080041E0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x080041E4: lw          $t4, -0x3A1C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A1C);
    // 0x080041E8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x080041EC: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x080041F0: bnel        $t4, $zero, L_080042DC
    if (ctx->r12 != 0) {
        // 0x080041F4: lw          $t9, 0x0($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X0);
            goto L_080042DC;
    }
    goto skip_0;
    // 0x080041F4: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x080041F8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x080041FC: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x08004200: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x08004204: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x08004208: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x0800420C: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x08004210: lhu         $v0, 0x3092($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X3092);
    // 0x08004214: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x08004218: beq         $t7, $zero, L_08004284
    if (ctx->r15 == 0) {
        // 0x0800421C: andi        $t8, $v0, 0x10
        ctx->r24 = ctx->r2 & 0X10;
            goto L_08004284;
    }
    // 0x0800421C: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x08004220: beq         $t8, $zero, L_08004284
    if (ctx->r24 == 0) {
        // 0x08004224: andi        $t1, $v0, 0x20
        ctx->r9 = ctx->r2 & 0X20;
            goto L_08004284;
    }
    // 0x08004224: andi        $t1, $v0, 0x20
    ctx->r9 = ctx->r2 & 0X20;
    // 0x08004228: beql        $t1, $zero, L_08004288
    if (ctx->r9 == 0) {
        // 0x0800422C: lwc1        $f18, 0x1C($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
            goto L_08004288;
    }
    goto skip_1;
    // 0x0800422C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    skip_1:
    // 0x08004230: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08004234: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E08) << 16);
    // 0x08004238: ldc1        $f0, 0x4E08($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E08));
    // 0x0800423C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x08004240: lw          $t2, 0x84($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X84);
    // 0x08004244: add.d       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f18.d + ctx->f0.d;
    // 0x08004248: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800424C: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08004250: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08004254: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08004258: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x0800425C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x08004260: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x08004264: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08004268: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x0800426C: add.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f16.d + ctx->f0.d;
    // 0x08004270: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x08004274: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x08004278: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x0800427C: b           L_080043B4
    // 0x08004280: swc1        $f4, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f4.u32l;
        goto L_080043B4;
    // 0x08004280: swc1        $f4, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f4.u32l;
L_08004284:
    // 0x08004284: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
L_08004288:
    // 0x08004288: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E10) << 16);
    // 0x0800428C: ldc1        $f0, 0x4E10($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E10));
    // 0x08004290: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08004294: lw          $t3, 0x84($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X84);
    // 0x08004298: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x0800429C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x080042A0: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x080042A4: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x080042A8: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x080042AC: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x080042B0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080042B4: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    // 0x080042B8: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x080042BC: add.d       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f6.d + ctx->f0.d;
    // 0x080042C0: add.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f8.d + ctx->f0.d;
    // 0x080042C4: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x080042C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080042CC: swc1        $f10, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f10.u32l;
    // 0x080042D0: b           L_080043B4
    // 0x080042D4: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
        goto L_080043B4;
    // 0x080042D4: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x080042D8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
L_080042DC:
    // 0x080042DC: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x080042E0: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x080042E4: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x080042E8: lh          $t4, 0x307E($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X307E);
    // 0x080042EC: slti        $at, $t4, 0x3D
    ctx->r1 = SIGNED(ctx->r12) < 0X3D ? 1 : 0;
    // 0x080042F0: bnel        $at, $zero, L_08004320
    if (ctx->r1 != 0) {
        // 0x080042F4: lbu         $t5, 0xE1($a2)
        ctx->r13 = MEM_BU(ctx->r6, 0XE1);
            goto L_08004320;
    }
    goto skip_2;
    // 0x080042F4: lbu         $t5, 0xE1($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XE1);
    skip_2:
    // 0x080042F8: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x080042FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08004300: slti        $at, $v1, -0x1D
    ctx->r1 = SIGNED(ctx->r3) < -0X1D ? 1 : 0;
    // 0x08004304: beq         $at, $zero, L_08004314
    if (ctx->r1 == 0) {
        // 0x08004308: slti        $at, $v1, 0x1E
        ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
            goto L_08004314;
    }
    // 0x08004308: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x0800430C: beql        $at, $zero, L_08004320
    if (ctx->r1 == 0) {
        // 0x08004310: lbu         $t5, 0xE1($a2)
        ctx->r13 = MEM_BU(ctx->r6, 0XE1);
            goto L_08004320;
    }
    goto skip_3;
    // 0x08004310: lbu         $t5, 0xE1($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XE1);
    skip_3:
L_08004314:
    // 0x08004314: sb          $a0, 0xE0($a2)
    MEM_B(0XE0, ctx->r6) = ctx->r4;
    // 0x08004318: sb          $a0, 0xE1($a2)
    MEM_B(0XE1, ctx->r6) = ctx->r4;
    // 0x0800431C: lbu         $t5, 0xE1($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XE1);
L_08004320:
    // 0x08004320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08004324: beql        $t5, $zero, L_08004368
    if (ctx->r13 == 0) {
        // 0x08004328: lbu         $t8, 0xE3($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0XE3);
            goto L_08004368;
    }
    goto skip_4;
    // 0x08004328: lbu         $t8, 0xE3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE3);
    skip_4:
    // 0x0800432C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x08004330: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x08004334: lh          $t7, 0x307E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X307E);
    // 0x08004338: slti        $at, $t7, -0x3C
    ctx->r1 = SIGNED(ctx->r15) < -0X3C ? 1 : 0;
    // 0x0800433C: beql        $at, $zero, L_08004368
    if (ctx->r1 == 0) {
        // 0x08004340: lbu         $t8, 0xE3($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0XE3);
            goto L_08004368;
    }
    goto skip_5;
    // 0x08004340: lbu         $t8, 0xE3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE3);
    skip_5:
    // 0x08004344: lh          $v1, 0x3080($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3080);
    // 0x08004348: slti        $at, $v1, -0x1D
    ctx->r1 = SIGNED(ctx->r3) < -0X1D ? 1 : 0;
    // 0x0800434C: beq         $at, $zero, L_0800435C
    if (ctx->r1 == 0) {
        // 0x08004350: slti        $at, $v1, 0x1E
        ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
            goto L_0800435C;
    }
    // 0x08004350: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x08004354: beql        $at, $zero, L_08004368
    if (ctx->r1 == 0) {
        // 0x08004358: lbu         $t8, 0xE3($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0XE3);
            goto L_08004368;
    }
    goto skip_6;
    // 0x08004358: lbu         $t8, 0xE3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE3);
    skip_6:
L_0800435C:
    // 0x0800435C: sb          $a0, 0xE2($a2)
    MEM_B(0XE2, ctx->r6) = ctx->r4;
    // 0x08004360: sb          $a0, 0xE3($a2)
    MEM_B(0XE3, ctx->r6) = ctx->r4;
    // 0x08004364: lbu         $t8, 0xE3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE3);
L_08004368:
    // 0x08004368: beql        $t8, $zero, L_080043B8
    if (ctx->r24 == 0) {
        // 0x0800436C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080043B8;
    }
    goto skip_7;
    // 0x0800436C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x08004370: lbu         $t1, 0xDC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XDC);
    // 0x08004374: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08004378: sh          $zero, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = 0;
    // 0x0800437C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08004380: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x08004384: bne         $t3, $at, L_080043A8
    if (ctx->r11 != ctx->r1) {
        // 0x08004388: sb          $t2, 0xDC($a2)
        MEM_B(0XDC, ctx->r6) = ctx->r10;
            goto L_080043A8;
    }
    // 0x08004388: sb          $t2, 0xDC($a2)
    MEM_B(0XDC, ctx->r6) = ctx->r10;
    // 0x0800438C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004390: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004394: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X43C4) << 16);
    // 0x08004398: addiu       $a0, $a0, 0x43C4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X43C4));
    // 0x0800439C: jalr        $t9
    // 0x080043A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080043A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x080043A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_080043A8:
    // 0x080043A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080043AC: nop

    // 0x080043B0: swc1        $f18, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f18.u32l;
L_080043B4:
    // 0x080043B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080043B8:
    // 0x080043B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080043BC: jr          $ra
    // 0x080043C0: nop

    TRACE_RETURN()
    return;
    // 0x080043C0: nop

;}
RECOMP_FUNC void func_08000F14_6E00B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F14: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000F18: jr          $ra
    // 0x08000F1C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000F1C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004AA8_6E3C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004AB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004AB4: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08004AB8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E38) << 16);
    // 0x08004ABC: ldc1        $f0, 0x4E38($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E38));
    // 0x08004AC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08004AC4: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08004AC8: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08004ACC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AD0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004AD4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08004AD8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08004ADC: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08004AE0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004AE4: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08004AE8: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08004AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004AF0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004AF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004AF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004AFC: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08004B00: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08004B04: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08004B08: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08004B0C: lbu         $t6, 0xE0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE0);
    // 0x08004B10: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x08004B14: sb          $t7, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r15;
    // 0x08004B18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08004B1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004B20: jalr        $t9
    // 0x08004B24: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B24: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_0:
    // 0x08004B28: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08004B2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004B30: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004B34: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004B38: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08004B3C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x08004B40: bne         $a1, $zero, L_08004B80
    if (ctx->r5 != 0) {
        // 0x08004B44: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08004B80;
    }
    // 0x08004B44: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08004B48: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08004B4C: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08004B50: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x08004B54: jalr        $t9
    // 0x08004B58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x08004B5C: bne         $v0, $zero, L_08004B80
    if (ctx->r2 != 0) {
        // 0x08004B60: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_08004B80;
    }
    // 0x08004B60: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08004B64: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08004B68: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x08004B6C: bne         $t1, $zero, L_08004B80
    if (ctx->r9 != 0) {
        // 0x08004B70: nop
    
            goto L_08004B80;
    }
    // 0x08004B70: nop

    // 0x08004B74: lbu         $t2, 0xE0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XE0);
    // 0x08004B78: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x08004B7C: beq         $at, $zero, L_08004B90
    if (ctx->r1 == 0) {
        // 0x08004B80: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08004B90;
    }
L_08004B80:
    // 0x08004B80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004B84: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004B88: jalr        $t9
    // 0x08004B8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004B8C: nop

    after_2:
L_08004B90:
    // 0x08004B90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004B94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004B98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004B9C: jr          $ra
    // 0x08004BA0: nop

    TRACE_RETURN()
    return;
    // 0x08004BA0: nop

;}
RECOMP_FUNC void func_08003C54_6E2DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08003C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003C5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003C60: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08003C64: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08003C68: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08003C6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003C70: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x08003C74: beq         $t7, $zero, L_08003EF8
    if (ctx->r15 == 0) {
        // 0x08003C78: ori         $t8, $t8, 0x6E1
        ctx->r24 = ctx->r24 | 0X6E1;
            goto L_08003EF8;
    }
    // 0x08003C78: ori         $t8, $t8, 0x6E1
    ctx->r24 = ctx->r24 | 0X6E1;
    // 0x08003C7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C80: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003C84: jalr        $t9
    // 0x08003C88: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C88: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    after_0:
    // 0x08003C8C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08003C90: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x08003C94: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08003C98: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08003C9C: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08003CA0: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x08003CA4: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x08003CA8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08003CAC: jalr        $v1
    // 0x08003CB0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08003CB0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
    // 0x08003CB4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08003CB8: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08003CBC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003CC0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08003CC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08003CC8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08003CCC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08003CD0: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x08003CD4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08003CD8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08003CDC: nop

    // 0x08003CE0: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x08003CE4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08003CE8: nop

    // 0x08003CEC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08003CF0: beql        $t3, $zero, L_08003D44
    if (ctx->r11 == 0) {
        // 0x08003CF4: mfc1        $t3, $f16
        ctx->r11 = (int32_t)ctx->f16.u32l;
            goto L_08003D44;
    }
    goto skip_0;
    // 0x08003CF4: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x08003CF8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08003CFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08003D00: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08003D04: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x08003D08: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08003D0C: nop

    // 0x08003D10: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x08003D14: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08003D18: nop

    // 0x08003D1C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08003D20: bne         $t3, $zero, L_08003D38
    if (ctx->r11 != 0) {
        // 0x08003D24: nop
    
            goto L_08003D38;
    }
    // 0x08003D24: nop

    // 0x08003D28: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x08003D2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003D30: b           L_08003D50
    // 0x08003D34: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_08003D50;
    // 0x08003D34: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_08003D38:
    // 0x08003D38: b           L_08003D50
    // 0x08003D3C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_08003D50;
    // 0x08003D3C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x08003D40: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
L_08003D44:
    // 0x08003D44: nop

    // 0x08003D48: bltz        $t3, L_08003D38
    if (SIGNED(ctx->r11) < 0) {
        // 0x08003D4C: nop
    
            goto L_08003D38;
    }
    // 0x08003D4C: nop

L_08003D50:
    // 0x08003D50: sb          $t3, 0xE4($s0)
    MEM_B(0XE4, ctx->r16) = ctx->r11;
    // 0x08003D54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08003D58: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x08003D5C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08003D60: jalr        $t9
    // 0x08003D64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D64: nop

    after_2:
    // 0x08003D68: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08003D6C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08003D70: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08003D74: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x08003D78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003D7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08003D80: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08003D84: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x08003D88: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x08003D8C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08003D90: nop

    // 0x08003D94: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x08003D98: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08003D9C: nop

    // 0x08003DA0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08003DA4: beql        $t6, $zero, L_08003DF8
    if (ctx->r14 == 0) {
        // 0x08003DA8: mfc1        $t6, $f10
        ctx->r14 = (int32_t)ctx->f10.u32l;
            goto L_08003DF8;
    }
    goto skip_1;
    // 0x08003DA8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x08003DAC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08003DB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08003DB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08003DB8: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x08003DBC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08003DC0: nop

    // 0x08003DC4: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x08003DC8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08003DCC: nop

    // 0x08003DD0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08003DD4: bne         $t6, $zero, L_08003DEC
    if (ctx->r14 != 0) {
        // 0x08003DD8: nop
    
            goto L_08003DEC;
    }
    // 0x08003DD8: nop

    // 0x08003DDC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x08003DE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003DE4: b           L_08003E04
    // 0x08003DE8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08003E04;
    // 0x08003DE8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08003DEC:
    // 0x08003DEC: b           L_08003E04
    // 0x08003DF0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08003E04;
    // 0x08003DF0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08003DF4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
L_08003DF8:
    // 0x08003DF8: nop

    // 0x08003DFC: bltz        $t6, L_08003DEC
    if (SIGNED(ctx->r14) < 0) {
        // 0x08003E00: nop
    
            goto L_08003DEC;
    }
    // 0x08003E00: nop

L_08003E04:
    // 0x08003E04: sb          $t6, 0xE5($s0)
    MEM_B(0XE5, ctx->r16) = ctx->r14;
    // 0x08003E08: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08003E0C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x08003E10: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x08003E14: jalr        $t9
    // 0x08003E18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003E18: nop

    after_3:
    // 0x08003E1C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08003E20: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08003E24: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08003E28: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x08003E2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08003E30: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003E34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E38: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08003E3C: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x08003E40: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003E4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003E50: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08003E54: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08003E58: nop

    // 0x08003E5C: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x08003E60: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08003E64: nop

    // 0x08003E68: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08003E6C: beql        $t0, $zero, L_08003EC0
    if (ctx->r8 == 0) {
        // 0x08003E70: mfc1        $t0, $f8
        ctx->r8 = (int32_t)ctx->f8.u32l;
            goto L_08003EC0;
    }
    goto skip_2;
    // 0x08003E70: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x08003E74: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003E78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08003E7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003E80: sub.d       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f6.d - ctx->f8.d;
    // 0x08003E84: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08003E88: nop

    // 0x08003E8C: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x08003E90: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08003E94: nop

    // 0x08003E98: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08003E9C: bne         $t0, $zero, L_08003EB4
    if (ctx->r8 != 0) {
        // 0x08003EA0: nop
    
            goto L_08003EB4;
    }
    // 0x08003EA0: nop

    // 0x08003EA4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x08003EA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003EAC: b           L_08003ECC
    // 0x08003EB0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08003ECC;
    // 0x08003EB0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08003EB4:
    // 0x08003EB4: b           L_08003ECC
    // 0x08003EB8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08003ECC;
    // 0x08003EB8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08003EBC: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
L_08003EC0:
    // 0x08003EC0: nop

    // 0x08003EC4: bltz        $t0, L_08003EB4
    if (SIGNED(ctx->r8) < 0) {
        // 0x08003EC8: nop
    
            goto L_08003EB4;
    }
    // 0x08003EC8: nop

L_08003ECC:
    // 0x08003ECC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08003ED0: jalr        $t9
    // 0x08003ED4: sb          $t0, 0xE6($s0)
    MEM_B(0XE6, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003ED4: sb          $t0, 0xE6($s0)
    MEM_B(0XE6, ctx->r16) = ctx->r8;
    after_4:
    // 0x08003ED8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003EDC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003EE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X4098) << 16);
    // 0x08003EE4: jalr        $t9
    // 0x08003EE8: addiu       $a0, $a0, 0x4098
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4098));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003EE8: addiu       $a0, $a0, 0x4098
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4098));
    after_5:
    // 0x08003EEC: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x08003EF0: b           L_08004084
    // 0x08003EF4: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
        goto L_08004084;
    // 0x08003EF4: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
L_08003EF8:
    // 0x08003EF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08003EFC: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003F04: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x08003F08: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x08003F0C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x08003F10: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x08003F14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08003F18: bc1t        L_08003F34
    if (c1cs) {
        // 0x08003F1C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08003F34;
    }
    // 0x08003F1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F20: addiu       $t9, $t9, -0x25E4
    ctx->r25 = ADD32(ctx->r25, -0X25E4);
    // 0x08003F24: jalr        $t9
    // 0x08003F28: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003F28: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
    // 0x08003F2C: bnel        $v0, $zero, L_08004088
    if (ctx->r2 != 0) {
        // 0x08003F30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08004088;
    }
    goto skip_3;
    // 0x08003F30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
L_08003F34:
    // 0x08003F34: lwc1        $f18, 0x7C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003F38: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08003F3C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08003F40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003F44: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08003F48: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E00) << 16);
    // 0x08003F4C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x08003F50: nop

    // 0x08003F54: bc1fl       L_08003F8C
    if (!c1cs) {
        // 0x08003F58: lhu         $v0, 0x8A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X8A);
            goto L_08003F8C;
    }
    goto skip_4;
    // 0x08003F58: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    skip_4:
    // 0x08003F5C: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003F60: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08003F64: ldc1        $f0, 0x4E00($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E00));
    // 0x08003F68: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003F6C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08003F70: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x08003F74: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08003F78: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003F7C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x08003F80: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08003F84: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08003F88: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
L_08003F8C:
    // 0x08003F8C: slti        $v1, $v0, 0x28
    ctx->r3 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x08003F90: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x08003F94: beq         $v1, $zero, L_08004084
    if (ctx->r3 == 0) {
        // 0x08003F98: sh          $t4, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r12;
            goto L_08004084;
    }
    // 0x08003F98: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08003F9C: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x08003FA0: bgez        $t5, L_08003FB4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08003FA4: andi        $t6, $t5, 0x3
        ctx->r14 = ctx->r13 & 0X3;
            goto L_08003FB4;
    }
    // 0x08003FA4: andi        $t6, $t5, 0x3
    ctx->r14 = ctx->r13 & 0X3;
    // 0x08003FA8: beq         $t6, $zero, L_08003FB4
    if (ctx->r14 == 0) {
        // 0x08003FAC: nop
    
            goto L_08003FB4;
    }
    // 0x08003FAC: nop

    // 0x08003FB0: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08003FB4:
    // 0x08003FB4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x08003FB8: beq         $at, $zero, L_08003FD4
    if (ctx->r1 == 0) {
        // 0x08003FBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003FD4;
    }
    // 0x08003FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003FC0: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x08003FC4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08003FC8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08003FCC: b           L_08003FE0
    // 0x08003FD0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
        goto L_08003FE0;
    // 0x08003FD0: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_08003FD4:
    // 0x08003FD4: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08003FD8: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08003FDC: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
L_08003FE0:
    // 0x08003FE0: lhu         $t2, 0x8A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8A);
    // 0x08003FE4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08003FE8: bnel        $t2, $zero, L_08004088
    if (ctx->r10 != 0) {
        // 0x08003FEC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08004088;
    }
    goto skip_5;
    // 0x08003FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x08003FF0: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x08003FF4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003FF8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08003FFC: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x08004000: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x08004004: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004008: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800400C: jalr        $t9
    // 0x08004010: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004010: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08004014: beq         $v0, $zero, L_08004084
    if (ctx->r2 == 0) {
        // 0x08004018: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08004084;
    }
    // 0x08004018: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800401C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004020: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004024: jalr        $t9
    // 0x08004028: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004028: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x0800402C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08004030: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004034: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08004038: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x0800403C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004040: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08004044: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08004048: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800404C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004050: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08004054: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004058: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x0800405C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004060: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08004064: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08004068: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x0800406C: jalr        $t9
    // 0x08004070: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004070: nop

    after_9:
    // 0x08004074: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004078: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800407C: jalr        $t9
    // 0x08004080: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08004080: nop

    after_10:
L_08004084:
    // 0x08004084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08004088:
    // 0x08004088: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800408C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08004090: jr          $ra
    // 0x08004094: nop

    TRACE_RETURN()
    return;
    // 0x08004094: nop

;}
RECOMP_FUNC void func_08002AC4_6E1C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002ACC: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002AD0: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08002AD4: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08002AD8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002ADC: beql        $t7, $zero, L_08002B10
    if (ctx->r15 == 0) {
        // 0x08002AE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002B10;
    }
    goto skip_0;
    // 0x08002AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002AE4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x08002AE8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002AEC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08002AF0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x08002AF4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08002AF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002AFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2B1C) << 16);
    // 0x08002B04: jalr        $t9
    // 0x08002B08: addiu       $a0, $a0, 0x2B1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2B1C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B08: addiu       $a0, $a0, 0x2B1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2B1C));
    after_0:
    // 0x08002B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002B10:
    // 0x08002B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B14: jr          $ra
    // 0x08002B18: nop

    TRACE_RETURN()
    return;
    // 0x08002B18: nop

;}
RECOMP_FUNC void func_08000850_6DF9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000858: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800085C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000860: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000864: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000868: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800086C: bne         $v1, $zero, L_0800089C
    if (ctx->r3 != 0) {
        // 0x08000870: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800089C;
    }
    // 0x08000870: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000874: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000878: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800087C: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08000880: jalr        $t9
    // 0x08000884: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000884: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000888: bne         $v0, $zero, L_0800089C
    if (ctx->r2 != 0) {
        // 0x0800088C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_0800089C;
    }
    // 0x0800088C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000890: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000894: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08000898: beq         $t8, $zero, L_08000920
    if (ctx->r24 == 0) {
        // 0x0800089C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000920;
    }
L_0800089C:
    // 0x0800089C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080008A0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080008A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080008A8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080008AC: jalr        $t9
    // 0x080008B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x080008B4: beq         $v0, $zero, L_08000910
    if (ctx->r2 == 0) {
        // 0x080008B8: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08000910;
    }
    // 0x080008B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080008BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008C0: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080008C4: jalr        $t9
    // 0x080008C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x080008CC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080008D0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080008D4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080008D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080008DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080008E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D78) << 16);
    // 0x080008E4: ldc1        $f18, 0x4D78($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D78));
    // 0x080008E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008EC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080008F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080008F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080008F8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080008FC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000900: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000904: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000908: jalr        $t9
    // 0x0800090C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800090C: nop

    after_3:
L_08000910:
    // 0x08000910: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000914: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000918: jalr        $t9
    // 0x0800091C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800091C: nop

    after_4:
L_08000920:
    // 0x08000920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000928: jr          $ra
    // 0x0800092C: nop

    TRACE_RETURN()
    return;
    // 0x0800092C: nop

;}
RECOMP_FUNC void func_08000E34_6DFFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E3C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000E40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E44: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000E48: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000E4C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000E50: bne         $v1, $zero, L_08000E80
    if (ctx->r3 != 0) {
        // 0x08000E54: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000E80;
    }
    // 0x08000E54: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000E58: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000E5C: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000E60: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08000E64: jalr        $t9
    // 0x08000E68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000E6C: bne         $v0, $zero, L_08000E80
    if (ctx->r2 != 0) {
        // 0x08000E70: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000E80;
    }
    // 0x08000E70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000E74: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000E78: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08000E7C: beq         $t8, $zero, L_08000F04
    if (ctx->r24 == 0) {
        // 0x08000E80: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000F04;
    }
L_08000E80:
    // 0x08000E80: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E84: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000E88: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000E8C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000E90: jalr        $t9
    // 0x08000E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08000E98: beq         $v0, $zero, L_08000EF4
    if (ctx->r2 == 0) {
        // 0x08000E9C: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08000EF4;
    }
    // 0x08000E9C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000EA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EA4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000EA8: jalr        $t9
    // 0x08000EAC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000EAC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000EB0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000EB4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000EB8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000EBC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000EC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000EC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D88) << 16);
    // 0x08000EC8: ldc1        $f18, 0x4D88($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D88));
    // 0x08000ECC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ED0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000ED4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000ED8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08000EDC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08000EE0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000EE4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000EE8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000EEC: jalr        $t9
    // 0x08000EF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000EF0: nop

    after_3:
L_08000EF4:
    // 0x08000EF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EF8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000EFC: jalr        $t9
    // 0x08000F00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000F00: nop

    after_4:
L_08000F04:
    // 0x08000F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F0C: jr          $ra
    // 0x08000F10: nop

    TRACE_RETURN()
    return;
    // 0x08000F10: nop

;}
RECOMP_FUNC void func_080045F4_6E3794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080045F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080045FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004604: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08004608: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800460C: jalr        $t9
    // 0x08004610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08004614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004618: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800461C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08004620: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004624: addiu       $a1, $a1, -0x33D0
    ctx->r5 = ADD32(ctx->r5, -0X33D0);
    // 0x08004628: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x0800462C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004630: bne         $v0, $zero, L_080046A4
    if (ctx->r2 != 0) {
        // 0x08004634: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080046A4;
    }
    // 0x08004634: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004638: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x0800463C: lbu         $v0, 0x13A($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13A);
    // 0x08004640: addiu       $a0, $zero, 0x25F
    ctx->r4 = ADD32(0, 0X25F);
    // 0x08004644: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08004648: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x0800464C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x08004650: beq         $v1, $zero, L_0800467C
    if (ctx->r3 == 0) {
        // 0x08004654: sb          $t8, 0x13A($a1)
        MEM_B(0X13A, ctx->r5) = ctx->r24;
            goto L_0800467C;
    }
    // 0x08004654: sb          $t8, 0x13A($a1)
    MEM_B(0X13A, ctx->r5) = ctx->r24;
    // 0x08004658: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800465C: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08004660: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004664: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004668: addiu       $a0, $zero, 0x25E
    ctx->r4 = ADD32(0, 0X25E);
    // 0x0800466C: jalr        $t9
    // 0x08004670: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004670: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08004674: b           L_08004690
    // 0x08004678: nop

        goto L_08004690;
    // 0x08004678: nop

L_0800467C:
    // 0x0800467C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004680: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08004684: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004688: jalr        $t9
    // 0x0800468C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800468C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_2:
L_08004690:
    // 0x08004690: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004694: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004698: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X46B4) << 16);
    // 0x0800469C: jalr        $t9
    // 0x080046A0: addiu       $a0, $a0, 0x46B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X46B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080046A0: addiu       $a0, $a0, 0x46B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X46B4));
    after_3:
L_080046A4:
    // 0x080046A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080046A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080046AC: jr          $ra
    // 0x080046B0: nop

    TRACE_RETURN()
    return;
    // 0x080046B0: nop

;}
RECOMP_FUNC void func_0800046C_6DF60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800046C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000478: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800047C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000480: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08000484: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000488: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800048C: bne         $v0, $zero, L_080004A8
    if (ctx->r2 != 0) {
        // 0x08000490: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080004A8;
    }
    // 0x08000490: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000494: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000498: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X4B8) << 16);
    // 0x0800049C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004A0: jalr        $t9
    // 0x080004A4: addiu       $a0, $a0, 0x4B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004A4: addiu       $a0, $a0, 0x4B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4B8));
    after_0:
L_080004A8:
    // 0x080004A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004B0: jr          $ra
    // 0x080004B4: nop

    TRACE_RETURN()
    return;
    // 0x080004B4: nop

;}
RECOMP_FUNC void func_080010A4_6E0244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080010B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080010B4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080010B8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080010BC: bne         $v0, $zero, L_080010E4
    if (ctx->r2 != 0) {
        // 0x080010C0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080010E4;
    }
    // 0x080010C0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080010C4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080010C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080010D0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080010D4: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080010D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XF20) << 16);
    // 0x080010DC: jalr        $t9
    // 0x080010E0: addiu       $a0, $a0, 0xF20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF20));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010E0: addiu       $a0, $a0, 0xF20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF20));
    after_0:
L_080010E4:
    // 0x080010E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080010E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080010EC: jr          $ra
    // 0x080010F0: nop

    TRACE_RETURN()
    return;
    // 0x080010F0: nop

;}
RECOMP_FUNC void func_08000FA8_6E0148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000FAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000FB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000FB4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000FB8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X11E8) << 16);
    // 0x08000FBC: addiu       $a1, $a1, 0x11E8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X11E8));
    // 0x08000FC0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000FC4: bne         $v0, $zero, L_08001038
    if (ctx->r2 != 0) {
        // 0x08000FC8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001038;
    }
    // 0x08000FC8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000FCC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000FD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000FD4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000FD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000FDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FE0: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000FE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000FE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000FEC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000FF0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000FF4: jalr        $t9
    // 0x08000FF8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FF8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08000FFC: beq         $v0, $zero, L_08001024
    if (ctx->r2 == 0) {
        // 0x08001000: addiu       $t7, $zero, 0x25
        ctx->r15 = ADD32(0, 0X25);
            goto L_08001024;
    }
    // 0x08001000: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08001004: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001008: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x0800100C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001010: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001014: jalr        $t9
    // 0x08001018: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001018: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_1:
    // 0x0800101C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001020: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001024:
    // 0x08001024: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001028: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800102C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1048) << 16);
    // 0x08001030: jalr        $t9
    // 0x08001034: addiu       $a0, $a0, 0x1048
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1048));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001034: addiu       $a0, $a0, 0x1048
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1048));
    after_2:
L_08001038:
    // 0x08001038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800103C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001040: jr          $ra
    // 0x08001044: nop

    TRACE_RETURN()
    return;
    // 0x08001044: nop

;}
RECOMP_FUNC void func_08000F5C_6E00FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000F68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000F6C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000F70: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x08000F74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000F7C: bne         $v0, $zero, L_08000F98
    if (ctx->r2 != 0) {
        // 0x08000F80: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000F98;
    }
    // 0x08000F80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000F84: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000F88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XFA8) << 16);
    // 0x08000F8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F90: jalr        $t9
    // 0x08000F94: addiu       $a0, $a0, 0xFA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XFA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F94: addiu       $a0, $a0, 0xFA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XFA8));
    after_0:
L_08000F98:
    // 0x08000F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000FA0: jr          $ra
    // 0x08000FA4: nop

    TRACE_RETURN()
    return;
    // 0x08000FA4: nop

;}
RECOMP_FUNC void func_08002284_6E6264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002284: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002288: jr          $ra
    // 0x0800228C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800228C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000FA8_6E4F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000FAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000FB4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x08000FB8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x08000FBC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000FC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000FC4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000FC8: jalr        $t9
    // 0x08000FCC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FCC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x08000FD0: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x08000FD4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FD8: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000FDC: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08000FE0: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x08000FE4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000FE8: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08000FEC: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000FF0: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08000FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FF8: jalr        $t9
    // 0x08000FFC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FFC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08001000: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32A8) << 16);
    // 0x08001004: lwc1        $f20, 0x32A8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(29, 0X32A8));
    // 0x08001008: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800100C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001010: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08001014: swc1        $f20, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f20.u32l;
    // 0x08001018: swc1        $f20, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f20.u32l;
    // 0x0800101C: jalr        $t9
    // 0x08001020: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001020: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    after_2:
    // 0x08001024: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08001028: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x0800102C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001030: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08001034: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001038: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x0800103C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001040: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001044: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001048: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    // 0x0800104C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001050: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x08001054: jalr        $t9
    // 0x08001058: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001058: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x0800105C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08001060: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001068: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x0800106C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001070: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x08001074: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800107C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001080: jalr        $t9
    // 0x08001084: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001084: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x08001088: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800108C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001094: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x08001098: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x0800109C: jalr        $t9
    // 0x080010A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080010A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x080010A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010A8: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080010B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080010B8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x080010BC: jalr        $t9
    // 0x080010C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080010C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x080010C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080010C8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080010CC: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x080010D0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080010D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080010D8: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x080010DC: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x080010E0: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080010EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x080010F0: beq         $v0, $zero, L_0800111C
    if (ctx->r2 == 0) {
        // 0x080010F4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X1144) << 16);
            goto L_0800111C;
    }
    // 0x080010F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1144) << 16);
    // 0x080010F8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080010FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001100: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001104: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001108: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
    // 0x0800110C: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08001110: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08001114: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08001118: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
L_0800111C:
    // 0x0800111C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001120: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001124: jalr        $t9
    // 0x08001128: addiu       $a0, $a0, 0x1144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1144));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001128: addiu       $a0, $a0, 0x1144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1144));
    after_8:
    // 0x0800112C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001130: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08001134: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x08001138: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x0800113C: jr          $ra
    // 0x08001140: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08001140: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08000E64_6E4E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000E74: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000E78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000E7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000E80: jalr        $t9
    // 0x08000E84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000E88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E8C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E98: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000E9C: jalr        $t9
    // 0x08000EA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000EA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000EA8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000EAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EB0: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08000EB4: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08000EB8: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08000EBC: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000EC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000EC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000EC8: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08000ECC: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08000ED0: jalr        $t9
    // 0x08000ED4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000ED4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x08000ED8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EDC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0XEFC) << 16);
    // 0x08000EE4: jalr        $t9
    // 0x08000EE8: addiu       $a0, $a0, 0xEFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XEFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000EE8: addiu       $a0, $a0, 0xEFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0XEFC));
    after_3:
    // 0x08000EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000EF4: jr          $ra
    // 0x08000EF8: nop

    TRACE_RETURN()
    return;
    // 0x08000EF8: nop

;}
RECOMP_FUNC void func_08001850_6E5830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001858: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800185C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001860: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08001864: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001868: beq         $t7, $zero, L_08001880
    if (ctx->r15 == 0) {
        // 0x0800186C: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08001880;
    }
    // 0x0800186C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001870: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08001874: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1890) << 16);
    // 0x08001878: jalr        $t9
    // 0x0800187C: addiu       $a0, $a0, 0x1890
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1890));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800187C: addiu       $a0, $a0, 0x1890
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1890));
    after_0:
L_08001880:
    // 0x08001880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001888: jr          $ra
    // 0x0800188C: nop

    TRACE_RETURN()
    return;
    // 0x0800188C: nop

;}
RECOMP_FUNC void func_08001D38_6E5D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001D3C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001D40: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001D44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08001D48: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08001D4C: addiu       $v0, $v0, -0x7284
    ctx->r2 = ADD32(ctx->r2, -0X7284);
    // 0x08001D50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001D54: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001D60: jalr        $v0
    // 0x08001D64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001D64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001D68: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001D6C: addiu       $v0, $v0, -0x7258
    ctx->r2 = ADD32(ctx->r2, -0X7258);
    // 0x08001D70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001D78: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x08001D7C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08001D80: jalr        $v0
    // 0x08001D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08001D88: lhu         $t6, 0x8A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8A);
    // 0x08001D8C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X2290) << 16);
    // 0x08001D90: addiu       $a1, $a1, 0x2290
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X2290));
    // 0x08001D94: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x08001D98: bne         $t7, $zero, L_08001DEC
    if (ctx->r15 != 0) {
        // 0x08001D9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001DEC;
    }
    // 0x08001D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001DA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001DA8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001DAC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001DB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001DB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001DB8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08001DBC: jalr        $t9
    // 0x08001DC0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001DC0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x08001DC4: beq         $v0, $zero, L_08001DEC
    if (ctx->r2 == 0) {
        // 0x08001DC8: addiu       $t8, $zero, 0x26
        ctx->r24 = ADD32(0, 0X26);
            goto L_08001DEC;
    }
    // 0x08001DC8: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x08001DCC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DD0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08001DD4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001DD8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x08001DDC: jalr        $t9
    // 0x08001DE0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001DE0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_3:
    // 0x08001DE4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08001DE8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08001DEC:
    // 0x08001DEC: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08001DF0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x08001DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001DF8: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08001DFC: bne         $v0, $zero, L_08001E48
    if (ctx->r2 != 0) {
        // 0x08001E00: sh          $t0, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r8;
            goto L_08001E48;
    }
    // 0x08001E00: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08001E04: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08001E08: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001E0C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08001E10: addiu       $a2, $zero, 0x10E
    ctx->r6 = ADD32(0, 0X10E);
    // 0x08001E14: jalr        $t9
    // 0x08001E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08001E1C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001E24: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x08001E28: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08001E2C: jalr        $t9
    // 0x08001E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08001E34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E38: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1E5C) << 16);
    // 0x08001E40: jalr        $t9
    // 0x08001E44: addiu       $a0, $a0, 0x1E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1E5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001E44: addiu       $a0, $a0, 0x1E5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1E5C));
    after_6:
L_08001E48:
    // 0x08001E48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001E4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001E50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001E54: jr          $ra
    // 0x08001E58: nop

    TRACE_RETURN()
    return;
    // 0x08001E58: nop

;}
RECOMP_FUNC void func_08001560_6E5540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001560: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001564: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001568: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800156C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001570: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x08001574: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x08001578: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x0800157C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001580: addiu       $t6, $zero, 0xFD
    ctx->r14 = ADD32(0, 0XFD);
    // 0x08001584: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08001588: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x0800158C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08001590: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08001594: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800159C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080015A0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080015A4: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x080015A8: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x080015AC: jalr        $t9
    // 0x080015B0: sb          $t1, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015B0: sb          $t1, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r9;
    after_0:
    // 0x080015B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015B8: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080015BC: jalr        $t9
    // 0x080015C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080015C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080015C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015C8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080015CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080015D4: jalr        $t9
    // 0x080015D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080015D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080015DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015E0: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015E8: jalr        $t9
    // 0x080015EC: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015EC: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_3:
    // 0x080015F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015F4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080015F8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080015FC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001608: jalr        $t9
    // 0x0800160C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800160C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08001610: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001614: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001618: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x0800161C: addiu       $a1, $a1, 0x5520
    ctx->r5 = ADD32(ctx->r5, 0X5520);
    // 0x08001620: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001624: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08001628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800162C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001630: jalr        $v0
    // 0x08001634: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08001634: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x08001638: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800163C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08001640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001644: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001648: jalr        $v0
    // 0x0800164C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x0800164C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08001650: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001654: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001658: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1678) << 16);
    // 0x0800165C: jalr        $t9
    // 0x08001660: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1678));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001660: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1678));
    after_7:
    // 0x08001664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800166C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001670: jr          $ra
    // 0x08001674: nop

    TRACE_RETURN()
    return;
    // 0x08001674: nop

;}
RECOMP_FUNC void func_0800060C_6E45EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800060C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000610: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000618: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800061C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000620: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000624: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000628: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800062C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000630: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000634: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000638: jalr        $t9
    // 0x0800063C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800063C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08000640: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000644: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000648: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X664) << 16);
    // 0x0800064C: jalr        $t9
    // 0x08000650: addiu       $a0, $a0, 0x664
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X664));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000650: addiu       $a0, $a0, 0x664
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X664));
    after_1:
    // 0x08000654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800065C: jr          $ra
    // 0x08000660: nop

    TRACE_RETURN()
    return;
    // 0x08000660: nop

;}
RECOMP_FUNC void func_08001890_6E5870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001898: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800189C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080018A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080018A4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080018A8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080018AC: bne         $v0, $zero, L_08001924
    if (ctx->r2 != 0) {
        // 0x080018B0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001924;
    }
    // 0x080018B0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080018B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080018B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080018BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080018C0: jalr        $t9
    // 0x080018C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080018C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018CC: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080018D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080018D4: jalr        $t9
    // 0x080018D8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018D8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_1:
    // 0x080018DC: beq         $v0, $zero, L_08001910
    if (ctx->r2 == 0) {
        // 0x080018E0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001910;
    }
    // 0x080018E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080018E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080018E8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080018EC: jalr        $t9
    // 0x080018F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018F0: nop

    after_2:
    // 0x080018F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1708) << 16);
    // 0x08001900: jalr        $t9
    // 0x08001904: addiu       $a0, $a0, 0x1708
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1708));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001904: addiu       $a0, $a0, 0x1708
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1708));
    after_3:
    // 0x08001908: b           L_08001928
    // 0x0800190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001928;
    // 0x0800190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001910:
    // 0x08001910: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001914: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001918: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1934) << 16);
    // 0x0800191C: jalr        $t9
    // 0x08001920: addiu       $a0, $a0, 0x1934
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1934));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001920: addiu       $a0, $a0, 0x1934
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1934));
    after_4:
L_08001924:
    // 0x08001924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001928:
    // 0x08001928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800192C: jr          $ra
    // 0x08001930: nop

    TRACE_RETURN()
    return;
    // 0x08001930: nop

;}
RECOMP_FUNC void func_080025C8_6E65A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080025C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080025CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080025D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080025D4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080025D8: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x080025DC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080025E0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080025E4: jalr        $t9
    // 0x080025E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080025EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080025F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080025F4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080025F8: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x080025FC: jalr        $t9
    // 0x08002600: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002600: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    after_1:
    // 0x08002604: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002608: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32D0) << 16);
    // 0x0800260C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002610: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x08002614: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x08002618: ldc1        $f8, 0x32D0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32D0));
    // 0x0800261C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002620: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32D8) << 16);
    // 0x08002624: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002628: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800262C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X266C) << 16);
    // 0x08002630: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002634: swc1        $f16, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f16.u32l;
    // 0x08002638: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x0800263C: ldc1        $f6, 0x32D8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32D8));
    // 0x08002640: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08002644: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x08002648: nop

    // 0x0800264C: bc1tl       L_08002660
    if (c1cs) {
        // 0x08002650: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002660;
    }
    goto skip_0;
    // 0x08002650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08002654: jalr        $t9
    // 0x08002658: addiu       $a0, $a0, 0x266C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X266C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002658: addiu       $a0, $a0, 0x266C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X266C));
    after_2:
    // 0x0800265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002660:
    // 0x08002660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002664: jr          $ra
    // 0x08002668: nop

    TRACE_RETURN()
    return;
    // 0x08002668: nop

;}
RECOMP_FUNC void func_080007C0_6E47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080007C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080007CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080007D0: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x080007D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007D8: jalr        $t9
    // 0x080007DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080007E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007E4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080007E8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080007EC: jalr        $t9
    // 0x080007F0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007F0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x080007F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080007F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007FC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000804: jalr        $t9
    // 0x08000808: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000808: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x0800080C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000810: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800081C: jalr        $t9
    // 0x08000820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000828: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800082C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000830: jr          $ra
    // 0x08000834: nop

    TRACE_RETURN()
    return;
    // 0x08000834: nop

;}
RECOMP_FUNC void func_08002038_6E6018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800203C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002040: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002044: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002048: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800204C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002050: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002054: jalr        $t9
    // 0x08002058: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002058: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x0800205C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002060: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002064: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002068: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800206C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002074: jalr        $t9
    // 0x08002078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800207C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002080: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08002084: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002088: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x0800208C: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08002090: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08002094: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08002098: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x0800209C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080020A0: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x080020A4: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x080020A8: jalr        $t9
    // 0x080020AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080020AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x080020B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X20D4) << 16);
    // 0x080020BC: jalr        $t9
    // 0x080020C0: addiu       $a0, $a0, 0x20D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X20D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080020C0: addiu       $a0, $a0, 0x20D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X20D4));
    after_3:
    // 0x080020C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080020C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080020CC: jr          $ra
    // 0x080020D0: nop

    TRACE_RETURN()
    return;
    // 0x080020D0: nop

;}
RECOMP_FUNC void func_0800295C_6E693C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800295C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002964: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002968: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x0800296C: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x08002970: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002974: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08002978: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x0800297C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002980: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002984: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X29A0) << 16);
    // 0x08002988: jalr        $t9
    // 0x0800298C: addiu       $a0, $a0, 0x29A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X29A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800298C: addiu       $a0, $a0, 0x29A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X29A0));
    after_0:
    // 0x08002990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002998: jr          $ra
    // 0x0800299C: nop

    TRACE_RETURN()
    return;
    // 0x0800299C: nop

;}
RECOMP_FUNC void func_08000208_6E41E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800020C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000214: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000218: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800021C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000220: jalr        $t9
    // 0x08000224: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000224: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000228: bne         $v0, $zero, L_08000250
    if (ctx->r2 != 0) {
        // 0x0800022C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000250;
    }
    // 0x0800022C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000230: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08000234: jalr        $t9
    // 0x08000238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800023C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000240: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000244: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X260) << 16);
    // 0x08000248: jalr        $t9
    // 0x0800024C: addiu       $a0, $a0, 0x260
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X260));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800024C: addiu       $a0, $a0, 0x260
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X260));
    after_2:
L_08000250:
    // 0x08000250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000258: jr          $ra
    // 0x0800025C: nop

    TRACE_RETURN()
    return;
    // 0x0800025C: nop

;}
RECOMP_FUNC void func_08000000_6E3FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000004: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000010: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000014: addiu       $t6, $zero, 0xFB
    ctx->r14 = ADD32(0, 0XFB);
    // 0x08000018: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000020: jalr        $t9
    // 0x08000024: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000024: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_0:
    // 0x08000028: lw          $t1, 0xD0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD0);
    // 0x0800002C: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x08000030: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(29, 0X2D68) << 16);
    // 0x08000034: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000038: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x0800003C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08000040: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08000044: addiu       $t2, $zero, 0xF3
    ctx->r10 = ADD32(0, 0XF3);
    // 0x08000048: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800004C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08000050: addiu       $t5, $t5, 0x2D68
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(29, 0X2D68));
    // 0x08000054: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000058: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x0800005C: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08000060: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08000064: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x08000068: sb          $t3, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r11;
    // 0x0800006C: sb          $t4, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r12;
    // 0x08000070: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
    // 0x08000074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000078: jalr        $t9
    // 0x0800007C: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800007C: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    after_1:
    // 0x08000080: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000084: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800008C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08000090: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08000094: jalr        $t9
    // 0x08000098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800009C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000A0: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080000AC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x080000B0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x080000B4: jalr        $t9
    // 0x080000B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x080000BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000C8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x080000CC: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080000D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000DC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080000E0: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080000E4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000F0: jalr        $t9
    // 0x080000F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x080000F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000FC: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000100: jalr        $t9
    // 0x08000104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08000108: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800010C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000114: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000118: jalr        $t9
    // 0x0800011C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800011C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000120: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000124: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08000128: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800012C: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x08000130: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000138: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0800013C: jalr        $v0
    // 0x08000140: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08000140: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x08000144: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000148: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800014C: addiu       $a1, $a1, 0x5B10
    ctx->r5 = ADD32(ctx->r5, 0X5B10);
    // 0x08000150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000154: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000158: jalr        $v0
    // 0x0800015C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x0800015C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08000160: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000164: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000168: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X30F0) << 16);
    // 0x0800016C: addiu       $a1, $a1, 0x30F0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X30F0));
    // 0x08000170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000174: jalr        $t9
    // 0x08000178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x0800017C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000180: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800018C: jalr        $t9
    // 0x08000190: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000190: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x08000194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000198: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800019C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080001A0: jr          $ra
    // 0x080001A4: nop

    TRACE_RETURN()
    return;
    // 0x080001A4: nop

;}
RECOMP_FUNC void func_08002584_6E6564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002588: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800258C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002590: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002594: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002598: jalr        $t9
    // 0x0800259C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800259C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080025A0: bne         $v0, $zero, L_080025B8
    if (ctx->r2 != 0) {
        // 0x080025A4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X25C8) << 16);
            goto L_080025B8;
    }
    // 0x080025A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X25C8) << 16);
    // 0x080025A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025B0: jalr        $t9
    // 0x080025B4: addiu       $a0, $a0, 0x25C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X25C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025B4: addiu       $a0, $a0, 0x25C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X25C8));
    after_1:
L_080025B8:
    // 0x080025B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080025BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080025C0: jr          $ra
    // 0x080025C4: nop

    TRACE_RETURN()
    return;
    // 0x080025C4: nop

;}
RECOMP_FUNC void func_08001BF0_6E5BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001C00: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001C0C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001C10: jalr        $t9
    // 0x08001C14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001C18: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001C1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C20: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08001C24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1C48) << 16);
    // 0x08001C2C: addiu       $a0, $a0, 0x1C48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1C48));
    // 0x08001C30: jalr        $t9
    // 0x08001C34: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C34: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08001C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C40: jr          $ra
    // 0x08001C44: nop

    TRACE_RETURN()
    return;
    // 0x08001C44: nop

;}
RECOMP_FUNC void func_080021A4_6E6184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080021A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080021A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080021AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080021B0: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x080021B4: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x080021B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021BC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080021C0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080021C4: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080021C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080021CC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x080021D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080021D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080021D8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080021DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x080021E0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080021E4: jalr        $t9
    // 0x080021E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021E8: nop

    after_0:
    // 0x080021EC: bne         $v0, $zero, L_08002204
    if (ctx->r2 != 0) {
        // 0x080021F0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(29, 0X2214) << 16);
            goto L_08002204;
    }
    // 0x080021F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2214) << 16);
    // 0x080021F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080021FC: jalr        $t9
    // 0x08002200: addiu       $a0, $a0, 0x2214
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2214));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002200: addiu       $a0, $a0, 0x2214
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2214));
    after_1:
L_08002204:
    // 0x08002204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800220C: jr          $ra
    // 0x08002210: nop

    TRACE_RETURN()
    return;
    // 0x08002210: nop

;}
RECOMP_FUNC void func_08000EFC_6E4EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000F10: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x08000F14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000F18: jalr        $t9
    // 0x08000F1C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F1C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08000F20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F24: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000F28: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000F2C: jalr        $t9
    // 0x08000F30: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F30: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08000F34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000F38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F3C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F44: jalr        $t9
    // 0x08000F48: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F48: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08000F4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F50: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000F6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000F70: jr          $ra
    // 0x08000F74: nop

    TRACE_RETURN()
    return;
    // 0x08000F74: nop

;}
RECOMP_FUNC void func_08001FBC_6E5F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001FC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001FC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001FCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001FD0: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08001FD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001FD8: jalr        $t9
    // 0x08001FDC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001FDC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08001FE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FE4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001FE8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001FEC: jalr        $t9
    // 0x08001FF0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FF0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08001FF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08001FF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FFC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002004: jalr        $t9
    // 0x08002008: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002008: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x0800200C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002010: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800201C: jalr        $t9
    // 0x08002020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800202C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002030: jr          $ra
    // 0x08002034: nop

    TRACE_RETURN()
    return;
    // 0x08002034: nop

;}
RECOMP_FUNC void func_08002214_6E61F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800221C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002220: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08002224: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08002228: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800222C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002230: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002234: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002238: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800223C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002240: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x08002244: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002248: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0800224C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002250: jalr        $t9
    // 0x08002254: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002254: nop

    after_0:
    // 0x08002258: bne         $v0, $zero, L_08002274
    if (ctx->r2 != 0) {
        // 0x0800225C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002274;
    }
    // 0x0800225C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002260: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002264: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800226C: jalr        $t9
    // 0x08002270: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002270: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08002274:
    // 0x08002274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800227C: jr          $ra
    // 0x08002280: nop

    TRACE_RETURN()
    return;
    // 0x08002280: nop

;}
RECOMP_FUNC void func_080006A8_6E4688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080006AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080006B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080006B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080006BC: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x080006C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080006C4: jalr        $t9
    // 0x080006C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x080006CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006D0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080006D4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080006D8: jalr        $t9
    // 0x080006DC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006DC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x080006E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080006E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006E8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006F0: jalr        $t9
    // 0x080006F4: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006F4: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x080006F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006FC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000708: jalr        $t9
    // 0x0800070C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800070C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000714: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800071C: jr          $ra
    // 0x08000720: nop

    TRACE_RETURN()
    return;
    // 0x08000720: nop

;}
RECOMP_FUNC void func_08001BBC_6E5B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BC4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1BF0) << 16);
    // 0x08001BD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001BD8: jalr        $t9
    // 0x08001BDC: addiu       $a0, $a0, 0x1BF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1BF0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001BDC: addiu       $a0, $a0, 0x1BF0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1BF0));
    after_0:
    // 0x08001BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BE8: jr          $ra
    // 0x08001BEC: nop

    TRACE_RETURN()
    return;
    // 0x08001BEC: nop

;}
RECOMP_FUNC void func_08001678_6E5658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800167C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001684: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001688: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x0800168C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001690: jalr        $t9
    // 0x08001694: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001694: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_0:
    // 0x08001698: beq         $v0, $zero, L_080016E8
    if (ctx->r2 == 0) {
        // 0x0800169C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_080016E8;
    }
    // 0x0800169C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080016A0: lw          $t6, 0x68($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X68);
    // 0x080016A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1708) << 16);
    // 0x080016A8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080016AC: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x080016B0: beq         $t7, $zero, L_080016E8
    if (ctx->r15 == 0) {
        // 0x080016B4: addiu       $a0, $a0, 0x1708
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1708));
            goto L_080016E8;
    }
    // 0x080016B4: addiu       $a0, $a0, 0x1708
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1708));
    // 0x080016B8: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x080016BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080016C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080016C4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x080016C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080016CC: bgez        $t0, L_080016E0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x080016D0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_080016E0;
    }
    // 0x080016D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080016D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080016D8: nop

    // 0x080016DC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_080016E0:
    // 0x080016E0: jalr        $t9
    // 0x080016E4: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080016E4: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    after_1:
L_080016E8:
    // 0x080016E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016EC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080016F0: jalr        $t9
    // 0x080016F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080016F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x080016F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080016FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001700: jr          $ra
    // 0x08001704: nop

    TRACE_RETURN()
    return;
    // 0x08001704: nop

;}
RECOMP_FUNC void func_08002FE4_6E6FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002FEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002FF0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002FF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FF8: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08002FFC: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08003000: bne         $t7, $zero, L_08003040
    if (ctx->r15 != 0) {
        // 0x08003004: lui         $a1, 0x4040
        ctx->r5 = S32(0X4040 << 16);
            goto L_08003040;
    }
    // 0x08003004: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x08003008: jalr        $t9
    // 0x0800300C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800300C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003010: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08003014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003018: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800301C: sh          $zero, 0x14($t8)
    MEM_H(0X14, ctx->r24) = 0;
    // 0x08003020: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08003024: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003028: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800302C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08003030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08003038: jalr        $t9
    // 0x0800303C: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800303C: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    after_1:
L_08003040:
    // 0x08003040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003048: jr          $ra
    // 0x0800304C: nop

    TRACE_RETURN()
    return;
    // 0x0800304C: nop

    // 0x08003050: jr          $ra
    // 0x08003054: nop

    TRACE_RETURN()
    return;
    // 0x08003054: nop

;}
RECOMP_FUNC void func_08000AE4_6E4AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000AE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000AEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000AF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000AF4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x08000AF8: sb          $t9, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r25;
    // 0x08000AFC: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    // 0x08000B00: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x08000B04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x08000B0C: addiu       $t6, $zero, 0xFD
    ctx->r14 = ADD32(0, 0XFD);
    // 0x08000B10: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08000B14: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08000B18: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B20: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000B24: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000B28: sb          $t8, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r24;
    // 0x08000B2C: sb          $v0, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r2;
    // 0x08000B30: sb          $v0, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r2;
    // 0x08000B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B38: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000B3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000B40: jalr        $t9
    // 0x08000B44: sw          $t0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B44: sw          $t0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r8;
    after_0:
    // 0x08000B48: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(29, 0X2D68) << 16);
    // 0x08000B4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B50: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x08000B54: addiu       $t2, $t2, 0x2D68
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(29, 0X2D68));
    // 0x08000B58: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000B5C: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x08000B60: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x08000B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B68: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08000B6C: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08000B70: jalr        $t9
    // 0x08000B74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000B78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B7C: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08000B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B84: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000B88: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08000B8C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x08000B90: jalr        $t9
    // 0x08000B94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000B98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B9C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BA4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x08000BA8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08000BAC: jalr        $t9
    // 0x08000BB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000BB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BB8: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000BBC: jalr        $t9
    // 0x08000BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08000BC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BC8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BD0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000BD4: jalr        $t9
    // 0x08000BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000BDC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08000BE0: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08000BE4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000BE8: addiu       $a1, $a1, 0x5520
    ctx->r5 = ADD32(ctx->r5, 0X5520);
    // 0x08000BEC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000BF8: jalr        $v0
    // 0x08000BFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08000BFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08000C00: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000C04: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000C08: addiu       $a1, $a1, 0x7520
    ctx->r5 = ADD32(ctx->r5, 0X7520);
    // 0x08000C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08000C14: jalr        $v0
    // 0x08000C18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08000C18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08000C1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C20: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000C24: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X3110) << 16);
    // 0x08000C28: addiu       $a1, $a1, 0x3110
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X3110));
    // 0x08000C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C30: jalr        $t9
    // 0x08000C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x08000C38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C3C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000C4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x08000C50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000C54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000C58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000C5C: jr          $ra
    // 0x08000C60: nop

    TRACE_RETURN()
    return;
    // 0x08000C60: nop

;}
RECOMP_FUNC void func_080011A0_6E5180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x080011A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080011A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080011AC: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x080011B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080011B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080011B8: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x080011BC: mfhi        $t7
    ctx->r15 = hi;
    // 0x080011C0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080011C4: bne         $t7, $zero, L_080012A4
    if (ctx->r15 != 0) {
        // 0x080011C8: addiu       $a0, $zero, 0x263
        ctx->r4 = ADD32(0, 0X263);
            goto L_080012A4;
    }
    // 0x080011C8: addiu       $a0, $zero, 0x263
    ctx->r4 = ADD32(0, 0X263);
    // 0x080011CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011D0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080011D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080011D8: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080011DC: jalr        $t9
    // 0x080011E0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011E0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x080011E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080011E8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0X12EC) << 16);
    // 0x080011EC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080011F0: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x080011F4: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0X12EC));
    // 0x080011F8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080011FC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x08001200: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001208: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x0800120C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001210: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08001214: jalr        $v0
    // 0x08001218: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001218: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0800121C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001220: beq         $v0, $zero, L_08001250
    if (ctx->r2 == 0) {
        // 0x08001224: addiu       $t8, $zero, 0x26
        ctx->r24 = ADD32(0, 0X26);
            goto L_08001250;
    }
    // 0x08001224: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x08001228: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800122C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08001230: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001234: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08001238: jalr        $t9
    // 0x0800123C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800123C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_2:
    // 0x08001240: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001244: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001248: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800124C: sb          $zero, 0xED($v1)
    MEM_B(0XED, ctx->r3) = 0;
L_08001250:
    // 0x08001250: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001254: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800125C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x08001260: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08001264: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08001268: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x0800126C: jalr        $t9
    // 0x08001270: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001270: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x08001274: beq         $v0, $zero, L_080012A4
    if (ctx->r2 == 0) {
        // 0x08001278: addiu       $t0, $zero, 0x26
        ctx->r8 = ADD32(0, 0X26);
            goto L_080012A4;
    }
    // 0x08001278: addiu       $t0, $zero, 0x26
    ctx->r8 = ADD32(0, 0X26);
    // 0x0800127C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001280: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08001284: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001288: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x0800128C: jalr        $t9
    // 0x08001290: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001290: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_4:
    // 0x08001294: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001298: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800129C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080012A0: sb          $t1, 0xED($v1)
    MEM_B(0XED, ctx->r3) = ctx->r9;
L_080012A4:
    // 0x080012A4: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080012A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012AC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080012B0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x080012B4: bne         $v0, $zero, L_080012C4
    if (ctx->r2 != 0) {
        // 0x080012B8: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_080012C4;
    }
    // 0x080012B8: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080012BC: jalr        $t9
    // 0x080012C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080012C0: nop

    after_5:
L_080012C4:
    // 0x080012C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080012C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080012CC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x080012D0: jr          $ra
    // 0x080012D4: nop

    TRACE_RETURN()
    return;
    // 0x080012D4: nop

    // 0x080012D8: jr          $ra
    // 0x080012DC: nop

    TRACE_RETURN()
    return;
    // 0x080012DC: nop

;}
RECOMP_FUNC void func_0800178C_6E576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800178C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001790: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001794: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08001798: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800179C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080017A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080017A4: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080017A8: bne         $v0, $zero, L_08001840
    if (ctx->r2 != 0) {
        // 0x080017AC: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08001840;
    }
    // 0x080017AC: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080017B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080017B4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080017B8: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x080017BC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080017C0: jalr        $t9
    // 0x080017C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x080017C8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x080017CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080017D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080017D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080017D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017DC: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080017E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(29, 0XFA8) << 16);
    // 0x080017E4: addiu       $a1, $a1, 0xFA8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(29, 0XFA8));
    // 0x080017E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080017EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080017F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080017F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080017F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080017FC: jalr        $t9
    // 0x08001800: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001800: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08001804: beq         $v0, $zero, L_0800182C
    if (ctx->r2 == 0) {
        // 0x08001808: addiu       $t8, $zero, 0x26
        ctx->r24 = ADD32(0, 0X26);
            goto L_0800182C;
    }
    // 0x08001808: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x0800180C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001810: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08001814: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001818: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800181C: jalr        $t9
    // 0x08001820: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001820: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_2:
    // 0x08001824: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001828: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800182C:
    // 0x0800182C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001830: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001834: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1850) << 16);
    // 0x08001838: jalr        $t9
    // 0x0800183C: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1850));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800183C: addiu       $a0, $a0, 0x1850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1850));
    after_3:
L_08001840:
    // 0x08001840: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001844: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001848: jr          $ra
    // 0x0800184C: nop

    TRACE_RETURN()
    return;
    // 0x0800184C: nop

;}
RECOMP_FUNC void func_08001934_6E5914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001938: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800193C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001944: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001948: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x0800194C: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08001950: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001954: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08001958: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x0800195C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08001960: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001964: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08001968: nop

    // 0x0800196C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08001970: beql        $a1, $zero, L_080019C0
    if (ctx->r5 == 0) {
        // 0x08001974: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_080019C0;
    }
    goto skip_0;
    // 0x08001974: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08001978: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800197C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001980: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001984: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08001988: nop

    // 0x0800198C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08001990: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08001994: nop

    // 0x08001998: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x0800199C: bne         $a1, $zero, L_080019B4
    if (ctx->r5 != 0) {
        // 0x080019A0: nop
    
            goto L_080019B4;
    }
    // 0x080019A0: nop

    // 0x080019A4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080019A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080019AC: b           L_080019CC
    // 0x080019B0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_080019CC;
    // 0x080019B0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_080019B4:
    // 0x080019B4: b           L_080019CC
    // 0x080019B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_080019CC;
    // 0x080019B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x080019BC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_080019C0:
    // 0x080019C0: nop

    // 0x080019C4: bltz        $a1, L_080019B4
    if (SIGNED(ctx->r5) < 0) {
        // 0x080019C8: nop
    
            goto L_080019B4;
    }
    // 0x080019C8: nop

L_080019CC:
    // 0x080019CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080019D0: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x080019D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x080019D8: jalr        $t9
    // 0x080019DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080019E0: beq         $v0, $zero, L_08001A0C
    if (ctx->r2 == 0) {
        // 0x080019E4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001A0C;
    }
    // 0x080019E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080019E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019EC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080019F0: jalr        $t9
    // 0x080019F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019F4: nop

    after_1:
    // 0x080019F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1678) << 16);
    // 0x08001A04: jalr        $t9
    // 0x08001A08: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1678));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A08: addiu       $a0, $a0, 0x1678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1678));
    after_2:
L_08001A0C:
    // 0x08001A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A14: jr          $ra
    // 0x08001A18: nop

    TRACE_RETURN()
    return;
    // 0x08001A18: nop

;}
RECOMP_FUNC void func_08001C48_6E5C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001C54: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001C58: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08001C5C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x08001C60: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001C64: bne         $v0, $zero, L_08001CC4
    if (ctx->r2 != 0) {
        // 0x08001C68: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001CC4;
    }
    // 0x08001C68: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001C6C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08001C70: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08001C74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C78: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001C7C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08001C80: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08001C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C88: jalr        $t9
    // 0x08001C8C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C8C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_0:
    // 0x08001C90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001C94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C98: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001C9C: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08001CA0: jalr        $t9
    // 0x08001CA4: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CA4: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    after_1:
    // 0x08001CA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CAC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CB0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CB4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X1CD4) << 16);
    // 0x08001CB8: addiu       $a0, $a0, 0x1CD4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X1CD4));
    // 0x08001CBC: jalr        $t9
    // 0x08001CC0: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CC0: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    after_2:
L_08001CC4:
    // 0x08001CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001CCC: jr          $ra
    // 0x08001CD0: nop

    TRACE_RETURN()
    return;
    // 0x08001CD0: nop

;}
