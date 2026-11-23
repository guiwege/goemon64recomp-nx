#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80205D64_631144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205D64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205D68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80205D6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80205D70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80205D74: jal         0x8000DD58
    // 0x80205D78: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80205D78: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_0:
    // 0x80205D7C: addiu       $t6, $v0, -0x190
    ctx->r14 = ADD32(ctx->r2, -0X190);
    // 0x80205D80: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80205D84: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80205D88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80205D8C: jal         0x8000DD58
    // 0x80205D90: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x80205D90: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x80205D94: addiu       $t7, $v0, -0xC8
    ctx->r15 = ADD32(ctx->r2, -0XC8);
    // 0x80205D98: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80205D9C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80205DA0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80205DA4: jal         0x8000DD58
    // 0x80205DA8: swc1        $f10, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f10.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x80205DA8: swc1        $f10, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x80205DAC: addiu       $t8, $v0, -0x226
    ctx->r24 = ADD32(ctx->r2, -0X226);
    // 0x80205DB0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80205DB4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80205DB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80205DBC: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80205DC0: lwc1        $f14, 0x90($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X90);
    // 0x80205DC4: lw          $a2, 0x94($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X94);
    // 0x80205DC8: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x80205DCC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80205DD0: jal         0x8000E39C
    // 0x80205DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x80205DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80205DD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80205DDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80205DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205DE4: jr          $ra
    // 0x80205DE8: nop

    TRACE_RETURN()
    return;
    // 0x80205DE8: nop

;}
RECOMP_FUNC void func_801DABF4_605FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DABF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DABF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DABFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DAC00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAC04: jal         0x801D9030
    // 0x801DAC08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801DAC08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DAC0C: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x801DAC10: addiu       $t8, $zero, -0x32
    ctx->r24 = ADD32(0, -0X32);
    // 0x801DAC14: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAC18: addiu       $v0, $t6, -0x13
    ctx->r2 = ADD32(ctx->r14, -0X13);
    // 0x801DAC1C: slti        $at, $v0, -0x31
    ctx->r1 = SIGNED(ctx->r2) < -0X31 ? 1 : 0;
    // 0x801DAC20: beq         $at, $zero, L_801DAC38
    if (ctx->r1 == 0) {
        // 0x801DAC24: sw          $v0, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r2;
            goto L_801DAC38;
    }
    // 0x801DAC24: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x801DAC28: sw          $t8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r24;
    // 0x801DAC2C: jal         0x8003521C
    // 0x801DAC30: addiu       $a0, $a0, -0x5388
    ctx->r4 = ADD32(ctx->r4, -0X5388);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801DAC30: addiu       $a0, $a0, -0x5388
    ctx->r4 = ADD32(ctx->r4, -0X5388);
    after_1:
    // 0x801DAC34: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
L_801DAC38:
    // 0x801DAC38: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x801DAC3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801DAC40: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801DAC44: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x801DAC48: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x801DAC4C: beq         $a1, $zero, L_801DAC5C
    if (ctx->r5 == 0) {
        // 0x801DAC50: nop
    
            goto L_801DAC5C;
    }
    // 0x801DAC50: nop

    // 0x801DAC54: jal         0x801DAF10
    // 0x801DAC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAF10_6062F0(rdram, ctx);
        goto after_2;
    // 0x801DAC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_801DAC5C:
    // 0x801DAC5C: jal         0x801D36BC
    // 0x801DAC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_3;
    // 0x801DAC60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DAC64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAC68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DAC6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DAC70: jr          $ra
    // 0x801DAC74: nop

    TRACE_RETURN()
    return;
    // 0x801DAC74: nop

;}
RECOMP_FUNC void func_801D0260_5FB640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0260: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D0264: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D0268: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D026C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D0270: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801D0274: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801D0278: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x801D027C: lbu         $t6, 0x2C3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C3);
    // 0x801D0280: addiu       $t1, $v0, 0x130
    ctx->r9 = ADD32(ctx->r2, 0X130);
    // 0x801D0284: addiu       $v1, $v0, 0x100
    ctx->r3 = ADD32(ctx->r2, 0X100);
    // 0x801D0288: bne         $t6, $zero, L_801D0694
    if (ctx->r14 != 0) {
        // 0x801D028C: addiu       $t0, $v0, 0x118
        ctx->r8 = ADD32(ctx->r2, 0X118);
            goto L_801D0694;
    }
    // 0x801D028C: addiu       $t0, $v0, 0x118
    ctx->r8 = ADD32(ctx->r2, 0X118);
    // 0x801D0290: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D0294: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D0298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D029C: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801D02A0: ori         $at, $at, 0x4
    ctx->r1 = ctx->r1 | 0X4;
    // 0x801D02A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D02A8: addu        $a1, $t1, $at
    ctx->r5 = ADD32(ctx->r9, ctx->r1);
    // 0x801D02AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D02B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D02B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D02B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D02BC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D02C0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D02C4: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x801D02C8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x801D02CC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801D02D0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801D02D4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801D02D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D02DC: jal         0x8000DBF0
    // 0x801D02E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801D02E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D02E4: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x801D02E8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801D02EC: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801D02F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D02F4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D02F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D02FC: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801D0300: ori         $at, $at, 0xC
    ctx->r1 = ctx->r1 | 0XC;
    // 0x801D0304: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D0308: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D030C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D0310: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D0314: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D0318: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D031C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x801D0320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0324: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801D0328: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801D032C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801D0330: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801D0334: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D0338: jal         0x8000DBF0
    // 0x801D033C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801D033C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801D0340: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x801D0344: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801D0348: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801D034C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801D0350: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801D0354: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801D0358: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801D035C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801D0360: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x801D0364: lhu         $t2, -0x520C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X520C);
    // 0x801D0368: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x801D036C: beq         $at, $zero, L_801D05C4
    if (ctx->r1 == 0) {
        // 0x801D0370: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_801D05C4;
    }
    // 0x801D0370: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801D0374: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0378: addu        $at, $at, $t2
    gpr jr_addend_801D0380 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801D037C: lw          $t2, -0x2E6C($at)
    ctx->r10 = ADD32(ctx->r1, -0X2E6C);
    // 0x801D0380: jr          $t2
    // 0x801D0384: nop

    switch (jr_addend_801D0380 >> 2) {
        case 0: goto L_801D0388; break;
        case 1: goto L_801D03FC; break;
        case 2: goto L_801D0470; break;
        case 3: goto L_801D04E4; break;
        case 4: goto L_801D0558; break;
        default: switch_error(__func__, 0x801D0380, 0x8020D194);
    }
    // 0x801D0384: nop

L_801D0388:
    // 0x801D0388: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D038C: addiu       $t3, $t3, -0x5390
    ctx->r11 = ADD32(ctx->r11, -0X5390);
    // 0x801D0390: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D0394: addiu       $t4, $t4, -0x63E8
    ctx->r12 = ADD32(ctx->r12, -0X63E8);
    // 0x801D0398: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x801D039C: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D03A0: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x801D03A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D03A8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801D03AC: lhu         $at, 0x4($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X4);
    // 0x801D03B0: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x801D03B4: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x801D03B8: swl         $at, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r1);
    // 0x801D03BC: swr         $at, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r1);
    // 0x801D03C0: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D03C4: sb          $at, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r1;
    // 0x801D03C8: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x801D03CC: sb          $t8, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r24;
    // 0x801D03D0: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x801D03D4: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x801D03D8: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801D03DC: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801D03E0: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D03E4: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801D03E8: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x801D03EC: jal         0x801E33A4
    // 0x801D03F0: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    func_801E33A4_60E784(rdram, ctx);
        goto after_2;
    // 0x801D03F0: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    after_2:
    // 0x801D03F4: b           L_801D05C4
    // 0x801D03F8: nop

        goto L_801D05C4;
    // 0x801D03F8: nop

L_801D03FC:
    // 0x801D03FC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D0400: addiu       $t3, $t3, -0x5390
    ctx->r11 = ADD32(ctx->r11, -0X5390);
    // 0x801D0404: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D0408: addiu       $t5, $t5, -0x63E8
    ctx->r13 = ADD32(ctx->r13, -0X63E8);
    // 0x801D040C: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x801D0410: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801D0414: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x801D0418: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801D041C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801D0420: lhu         $at, 0x4($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X4);
    // 0x801D0424: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x801D0428: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x801D042C: swl         $at, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r1);
    // 0x801D0430: swr         $at, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r1);
    // 0x801D0434: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D0438: sb          $at, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r1;
    // 0x801D043C: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x801D0440: sb          $t8, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r24;
    // 0x801D0444: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x801D0448: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x801D044C: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801D0450: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801D0454: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D0458: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801D045C: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x801D0460: jal         0x801E33A4
    // 0x801D0464: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    func_801E33A4_60E784(rdram, ctx);
        goto after_3;
    // 0x801D0464: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    after_3:
    // 0x801D0468: b           L_801D05C4
    // 0x801D046C: nop

        goto L_801D05C4;
    // 0x801D046C: nop

L_801D0470:
    // 0x801D0470: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D0474: addiu       $t3, $t3, -0x5350
    ctx->r11 = ADD32(ctx->r11, -0X5350);
    // 0x801D0478: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D047C: addiu       $t4, $t4, -0x63E0
    ctx->r12 = ADD32(ctx->r12, -0X63E0);
    // 0x801D0480: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x801D0484: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D0488: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x801D048C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801D0490: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801D0494: lhu         $at, 0x4($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X4);
    // 0x801D0498: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x801D049C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x801D04A0: swl         $at, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r1);
    // 0x801D04A4: swr         $at, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r1);
    // 0x801D04A8: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D04AC: sb          $at, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r1;
    // 0x801D04B0: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x801D04B4: sb          $t8, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r24;
    // 0x801D04B8: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x801D04BC: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x801D04C0: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801D04C4: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801D04C8: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D04CC: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801D04D0: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x801D04D4: jal         0x801E33A4
    // 0x801D04D8: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    func_801E33A4_60E784(rdram, ctx);
        goto after_4;
    // 0x801D04D8: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    after_4:
    // 0x801D04DC: b           L_801D05C4
    // 0x801D04E0: nop

        goto L_801D05C4;
    // 0x801D04E0: nop

L_801D04E4:
    // 0x801D04E4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D04E8: addiu       $t3, $t3, -0x5330
    ctx->r11 = ADD32(ctx->r11, -0X5330);
    // 0x801D04EC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D04F0: addiu       $t5, $t5, -0x63D8
    ctx->r13 = ADD32(ctx->r13, -0X63D8);
    // 0x801D04F4: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x801D04F8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801D04FC: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x801D0500: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801D0504: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801D0508: lhu         $at, 0x4($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X4);
    // 0x801D050C: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x801D0510: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x801D0514: swl         $at, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r1);
    // 0x801D0518: swr         $at, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r1);
    // 0x801D051C: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D0520: sb          $at, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r1;
    // 0x801D0524: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x801D0528: sb          $t8, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r24;
    // 0x801D052C: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x801D0530: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x801D0534: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801D0538: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801D053C: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D0540: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801D0544: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x801D0548: jal         0x801E33A4
    // 0x801D054C: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    func_801E33A4_60E784(rdram, ctx);
        goto after_5;
    // 0x801D054C: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    after_5:
    // 0x801D0550: b           L_801D05C4
    // 0x801D0554: nop

        goto L_801D05C4;
    // 0x801D0554: nop

L_801D0558:
    // 0x801D0558: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D055C: addiu       $t3, $t3, -0x5310
    ctx->r11 = ADD32(ctx->r11, -0X5310);
    // 0x801D0560: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D0564: addiu       $t4, $t4, -0x63D8
    ctx->r12 = ADD32(ctx->r12, -0X63D8);
    // 0x801D0568: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x801D056C: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D0570: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x801D0574: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801D0578: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801D057C: lhu         $at, 0x4($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X4);
    // 0x801D0580: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x801D0584: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x801D0588: swl         $at, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r1);
    // 0x801D058C: swr         $at, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r1);
    // 0x801D0590: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D0594: sb          $at, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r1;
    // 0x801D0598: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x801D059C: sb          $t8, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r24;
    // 0x801D05A0: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x801D05A4: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x801D05A8: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801D05AC: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801D05B0: lbu         $at, 0x4($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0X4);
    // 0x801D05B4: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801D05B8: lbu         $t2, 0x5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5);
    // 0x801D05BC: jal         0x801E33A4
    // 0x801D05C0: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    func_801E33A4_60E784(rdram, ctx);
        goto after_6;
    // 0x801D05C0: sb          $t2, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r10;
    after_6:
L_801D05C4:
    // 0x801D05C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D05C8: addiu       $a0, $a0, 0x770
    ctx->r4 = ADD32(ctx->r4, 0X770);
    // 0x801D05CC: jal         0x80034DD8
    // 0x801D05D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_7;
    // 0x801D05D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x801D05D4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D05D8: addiu       $a0, $a0, 0x6E4
    ctx->r4 = ADD32(ctx->r4, 0X6E4);
    // 0x801D05DC: jal         0x80034DD8
    // 0x801D05E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_8;
    // 0x801D05E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x801D05E4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801D05E8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801D05EC: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x801D05F0: sw          $v0, 0x1C8($v1)
    MEM_W(0X1C8, ctx->r3) = ctx->r2;
    // 0x801D05F4: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801D05F8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x801D05FC: lhu         $t5, -0x520C($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X520C);
    // 0x801D0600: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x801D0604: beq         $at, $zero, L_801D0680
    if (ctx->r1 == 0) {
        // 0x801D0608: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_801D0680;
    }
    // 0x801D0608: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x801D060C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0610: addu        $at, $at, $t5
    gpr jr_addend_801D0618 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801D0614: lw          $t5, -0x2E58($at)
    ctx->r13 = ADD32(ctx->r1, -0X2E58);
    // 0x801D0618: jr          $t5
    // 0x801D061C: nop

    switch (jr_addend_801D0618 >> 2) {
        case 0: goto L_801D0620; break;
        case 1: goto L_801D0634; break;
        case 2: goto L_801D0644; break;
        case 3: goto L_801D0658; break;
        case 4: goto L_801D066C; break;
        default: switch_error(__func__, 0x801D0618, 0x8020D1A8);
    }
    // 0x801D061C: nop

L_801D0620:
    // 0x801D0620: jal         0x801E45B4
    // 0x801D0624: nop

    func_801E45B4_60F994(rdram, ctx);
        goto after_9;
    // 0x801D0624: nop

    after_9:
    // 0x801D0628: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x801D062C: b           L_801D0688
    // 0x801D0630: sw          $v0, 0x1D8($t4)
    MEM_W(0X1D8, ctx->r12) = ctx->r2;
        goto L_801D0688;
    // 0x801D0630: sw          $v0, 0x1D8($t4)
    MEM_W(0X1D8, ctx->r12) = ctx->r2;
L_801D0634:
    // 0x801D0634: jal         0x801EEB3C
    // 0x801D0638: nop

    func_801EEB3C_619F1C(rdram, ctx);
        goto after_10;
    // 0x801D0638: nop

    after_10:
    // 0x801D063C: b           L_801D0688
    // 0x801D0640: nop

        goto L_801D0688;
    // 0x801D0640: nop

L_801D0644:
    // 0x801D0644: jal         0x801F7088
    // 0x801D0648: nop

    func_801F7088_622468(rdram, ctx);
        goto after_11;
    // 0x801D0648: nop

    after_11:
    // 0x801D064C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x801D0650: b           L_801D0688
    // 0x801D0654: sw          $v0, 0x1D8($t6)
    MEM_W(0X1D8, ctx->r14) = ctx->r2;
        goto L_801D0688;
    // 0x801D0654: sw          $v0, 0x1D8($t6)
    MEM_W(0X1D8, ctx->r14) = ctx->r2;
L_801D0658:
    // 0x801D0658: jal         0x801FFE80
    // 0x801D065C: nop

    func_801FFE80_62B260(rdram, ctx);
        goto after_12;
    // 0x801D065C: nop

    after_12:
    // 0x801D0660: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x801D0664: b           L_801D0688
    // 0x801D0668: sw          $v0, 0x1D8($t7)
    MEM_W(0X1D8, ctx->r15) = ctx->r2;
        goto L_801D0688;
    // 0x801D0668: sw          $v0, 0x1D8($t7)
    MEM_W(0X1D8, ctx->r15) = ctx->r2;
L_801D066C:
    // 0x801D066C: jal         0x801FFF70
    // 0x801D0670: nop

    func_801FFF70_62B350(rdram, ctx);
        goto after_13;
    // 0x801D0670: nop

    after_13:
    // 0x801D0674: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x801D0678: b           L_801D0688
    // 0x801D067C: sw          $v0, 0x1D8($t8)
    MEM_W(0X1D8, ctx->r24) = ctx->r2;
        goto L_801D0688;
    // 0x801D067C: sw          $v0, 0x1D8($t8)
    MEM_W(0X1D8, ctx->r24) = ctx->r2;
L_801D0680:
    // 0x801D0680: sw          $zero, 0x1D8($v1)
    MEM_W(0X1D8, ctx->r3) = 0;
    // 0x801D0684: sw          $zero, 0x1E0($v1)
    MEM_W(0X1E0, ctx->r3) = 0;
L_801D0688:
    // 0x801D0688: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D068C: jal         0x8003521C
    // 0x801D0690: addiu       $a0, $a0, 0x6A4
    ctx->r4 = ADD32(ctx->r4, 0X6A4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x801D0690: addiu       $a0, $a0, 0x6A4
    ctx->r4 = ADD32(ctx->r4, 0X6A4);
    after_14:
L_801D0694:
    // 0x801D0694: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D0698: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D069C: jr          $ra
    // 0x801D06A0: nop

    TRACE_RETURN()
    return;
    // 0x801D06A0: nop

;}
RECOMP_FUNC void func_801DD5D8_6089B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD5D8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DD5DC: lw          $v1, -0x1130($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X1130);
    // 0x801DD5E0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801DD5E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DD5E8: bne         $a1, $zero, L_801DD610
    if (ctx->r5 != 0) {
        // 0x801DD5EC: lwc1        $f0, 0x4($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801DD610;
    }
    // 0x801DD5EC: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801DD5F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DD5F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801DD5F8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801DD5FC: nop

    // 0x801DD600: bc1f        L_801DD610
    if (!c1cs) {
        // 0x801DD604: nop
    
            goto L_801DD610;
    }
    // 0x801DD604: nop

    // 0x801DD608: b           L_801DD610
    // 0x801DD60C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_801DD610;
    // 0x801DD60C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_801DD610:
    // 0x801DD610: blez        $a1, L_801DD654
    if (SIGNED(ctx->r5) <= 0) {
        // 0x801DD614: lui         $at, 0xC170
        ctx->r1 = S32(0XC170 << 16);
            goto L_801DD654;
    }
    // 0x801DD614: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801DD618: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DD61C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD620: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801DD624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DD628: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DD62C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801DD630: addiu       $t6, $t6, 0x634
    ctx->r14 = ADD32(ctx->r14, 0X634);
    // 0x801DD634: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DD638: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DD63C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x801DD640: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x801DD644: addiu       $t0, $t0, 0x1F80
    ctx->r8 = ADD32(ctx->r8, 0X1F80);
    // 0x801DD648: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801DD64C: b           L_801DD678
    // 0x801DD650: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_801DD678;
    // 0x801DD650: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_801DD654:
    // 0x801DD654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DD658: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801DD65C: addiu       $t8, $t8, 0x7D8
    ctx->r24 = ADD32(ctx->r24, 0X7D8);
    // 0x801DD660: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DD664: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801DD668: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x801DD66C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x801DD670: addiu       $t0, $t0, 0x20DC
    ctx->r8 = ADD32(ctx->r8, 0X20DC);
    // 0x801DD674: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
L_801DD678:
    // 0x801DD678: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801DD67C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DD680: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x801DD684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DD688: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DD68C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD690: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DD694: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DD698: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801DD69C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD6A0: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801DD6A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DD6A8: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x801DD6AC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DD6B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801DD6B4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DD6B8: nop

    // 0x801DD6BC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801DD6C0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DD6C4: nop

    // 0x801DD6C8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DD6CC: beql        $a1, $zero, L_801DD71C
    if (ctx->r5 == 0) {
        // 0x801DD6D0: mfc1        $a1, $f18
        ctx->r5 = (int32_t)ctx->f18.u32l;
            goto L_801DD71C;
    }
    goto skip_0;
    // 0x801DD6D0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x801DD6D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DD6D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD6DC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801DD6E0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DD6E4: nop

    // 0x801DD6E8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801DD6EC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DD6F0: nop

    // 0x801DD6F4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DD6F8: bne         $a1, $zero, L_801DD710
    if (ctx->r5 != 0) {
        // 0x801DD6FC: nop
    
            goto L_801DD710;
    }
    // 0x801DD6FC: nop

    // 0x801DD700: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801DD704: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DD708: b           L_801DD728
    // 0x801DD70C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801DD728;
    // 0x801DD70C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801DD710:
    // 0x801DD710: b           L_801DD728
    // 0x801DD714: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801DD728;
    // 0x801DD714: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801DD718: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
L_801DD71C:
    // 0x801DD71C: nop

    // 0x801DD720: bltz        $a1, L_801DD710
    if (SIGNED(ctx->r5) < 0) {
        // 0x801DD724: nop
    
            goto L_801DD710;
    }
    // 0x801DD724: nop

L_801DD728:
    // 0x801DD728: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DD72C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD730: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801DD734: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801DD738: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x801DD73C: addiu       $t3, $t2, 0x200
    ctx->r11 = ADD32(ctx->r10, 0X200);
    // 0x801DD740: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DD744: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x801DD748: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x801DD74C: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x801DD750: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DD754: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x801DD758: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DD75C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DD760: swc1        $f12, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f12.u32l;
    // 0x801DD764: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801DD768: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD76C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DD770: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x801DD774: sub.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x801DD778: jal         0x8000E808
    // 0x801DD77C: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801DD77C: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801DD780: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801DD784: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DD788: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801DD78C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801DD790: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801DD794: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DD798: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801DD79C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD7A0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DD7A4: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801DD7A8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801DD7AC: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801DD7B0: addiu       $a0, $a0, -0x274C
    ctx->r4 = ADD32(ctx->r4, -0X274C);
    // 0x801DD7B4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801DD7B8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x801DD7BC: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x801DD7C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DD7C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DD7C8: beq         $t7, $zero, L_801DD818
    if (ctx->r15 == 0) {
        // 0x801DD7CC: swc1        $f6, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
            goto L_801DD818;
    }
    // 0x801DD7CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801DD7D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DD7D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DD7D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DD7DC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801DD7E0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801DD7E4: nop

    // 0x801DD7E8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801DD7EC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801DD7F0: nop

    // 0x801DD7F4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801DD7F8: bne         $t7, $zero, L_801DD810
    if (ctx->r15 != 0) {
        // 0x801DD7FC: nop
    
            goto L_801DD810;
    }
    // 0x801DD7FC: nop

    // 0x801DD800: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801DD804: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DD808: b           L_801DD828
    // 0x801DD80C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801DD828;
    // 0x801DD80C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801DD810:
    // 0x801DD810: b           L_801DD828
    // 0x801DD814: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801DD828;
    // 0x801DD814: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_801DD818:
    // 0x801DD818: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801DD81C: nop

    // 0x801DD820: bltz        $t7, L_801DD810
    if (SIGNED(ctx->r15) < 0) {
        // 0x801DD824: nop
    
            goto L_801DD810;
    }
    // 0x801DD824: nop

L_801DD828:
    // 0x801DD828: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801DD82C: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801DD830: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801DD834: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DD838: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DD83C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801DD840: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801DD844: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801DD848: jal         0x80035854
    // 0x801DD84C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801DD84C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_1:
    // 0x801DD850: beq         $v0, $zero, L_801DD8A0
    if (ctx->r2 == 0) {
        // 0x801DD854: lw          $t0, 0x44($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X44);
            goto L_801DD8A0;
    }
    // 0x801DD854: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801DD858: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD85C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801DD860: addiu       $t1, $zero, 0x46
    ctx->r9 = ADD32(0, 0X46);
    // 0x801DD864: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x801DD868: sb          $t9, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r25;
    // 0x801DD86C: sw          $t0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r8;
    // 0x801DD870: sb          $t1, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r9;
    // 0x801DD874: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD878: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801DD87C: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x801DD880: jal         0x80037C9C
    // 0x801DD884: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801DD884: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x801DD888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD88C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD890: jal         0x80037C20
    // 0x801DD894: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801DD894: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x801DD898: b           L_801DD8A4
    // 0x801DD89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD8A4;
    // 0x801DD89C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD8A0:
    // 0x801DD8A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD8A4:
    // 0x801DD8A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DD8A8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801DD8AC: jr          $ra
    // 0x801DD8B0: nop

    TRACE_RETURN()
    return;
    // 0x801DD8B0: nop

;}
RECOMP_FUNC void func_801F2644_61DA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F264C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2650: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F2654: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2658: jal         0x801D3018
    // 0x801F265C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F265C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2660: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2664: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F2668: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F266C: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F2670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2674: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F2678: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F267C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2680: jal         0x801D3B18
    // 0x801F2684: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801F2684: nop

    after_1:
    // 0x801F2688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F268C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F2690: jal         0x801D3F00
    // 0x801F2694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801F2694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x801F2698: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801F269C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F26A0: jal         0x801D6508
    // 0x801F26A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D6508_6018E8(rdram, ctx);
        goto after_3;
    // 0x801F26A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801F26A8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801F26AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F26B0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F26B4: lwc1        $f16, 0x74($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X74);
    // 0x801F26B8: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801F26BC: nop

    // 0x801F26C0: bc1fl       L_801F26D4
    if (!c1cs) {
        // 0x801F26C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F26D4;
    }
    goto skip_0;
    // 0x801F26C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F26C8: jal         0x8003521C
    // 0x801F26CC: addiu       $a0, $a0, 0x26E0
    ctx->r4 = ADD32(ctx->r4, 0X26E0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F26CC: addiu       $a0, $a0, 0x26E0
    ctx->r4 = ADD32(ctx->r4, 0X26E0);
    after_4:
    // 0x801F26D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F26D4:
    // 0x801F26D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F26D8: jr          $ra
    // 0x801F26DC: nop

    TRACE_RETURN()
    return;
    // 0x801F26DC: nop

;}
RECOMP_FUNC void func_80205FC8_6313A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205FC8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80205FCC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80205FD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80205FD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80205FD8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80205FDC: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x80205FE0: addiu       $a3, $a3, -0x10C0
    ctx->r7 = ADD32(ctx->r7, -0X10C0);
    // 0x80205FE4: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80205FE8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80205FEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80205FF0: lbu         $a0, 0x814($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X814);
    // 0x80205FF4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80205FF8: sll         $a2, $a0, 5
    ctx->r6 = S32(ctx->r4 << 5);
    // 0x80205FFC: addu        $t7, $a1, $a2
    ctx->r15 = ADD32(ctx->r5, ctx->r6);
    // 0x80206000: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x80206004: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80206008: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8020600C: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80206010: swc1        $f6, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f6.u32l;
    // 0x80206014: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80206018: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8020601C: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x80206020: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x80206024: lhu         $t2, 0x14($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X14);
    // 0x80206028: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020602C: bgez        $t2, L_80206040
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80206030: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80206040;
    }
    // 0x80206030: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80206034: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80206038: nop

    // 0x8020603C: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80206040:
    // 0x80206040: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80206044: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80206048: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8020604C: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
    // 0x80206050: lhu         $t5, 0x16($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X16);
    // 0x80206054: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80206058: bgez        $t5, L_8020606C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020605C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020606C;
    }
    // 0x8020605C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80206060: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80206064: nop

    // 0x80206068: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020606C:
    // 0x8020606C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80206070: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80206074: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x80206078: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x8020607C: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x80206080: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80206084: bgez        $t8, L_80206098
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80206088: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80206098;
    }
    // 0x80206088: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020608C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80206090: nop

    // 0x80206094: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_80206098:
    // 0x80206098: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x8020609C: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x802060A0: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x802060A4: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x802060A8: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
    // 0x802060AC: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x802060B0: lw          $t1, 0x2C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X2C);
    // 0x802060B4: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x802060B8: sw          $t1, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r9;
    // 0x802060BC: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x802060C0: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802060C4: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x802060C8: swc1        $f4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->f4.u32l;
    // 0x802060CC: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x802060D0: jr          $ra
    // 0x802060D4: sb          $t7, 0x814($t8)
    MEM_B(0X814, ctx->r24) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x802060D4: sb          $t7, 0x814($t8)
    MEM_B(0X814, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_801D66AC_601A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D66AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D66B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D66B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D66B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D66BC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D66C0: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D66C4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801D66C8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D66CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D66D0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D66D4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D66D8: nop

    // 0x801D66DC: bc1fl       L_801D66FC
    if (!c1cs) {
        // 0x801D66E0: c.lt.s      $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
            goto L_801D66FC;
    }
    goto skip_0;
    // 0x801D66E0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    skip_0:
    // 0x801D66E4: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D66E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D66EC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D66F0: b           L_801D67A8
    // 0x801D66F4: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
        goto L_801D67A8;
    // 0x801D66F4: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    // 0x801D66F8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
L_801D66FC:
    // 0x801D66FC: nop

    // 0x801D6700: bc1fl       L_801D6720
    if (!c1cs) {
        // 0x801D6704: lwc1        $f0, 0x74($a2)
        ctx->f0.u32l = MEM_W(ctx->r6, 0X74);
            goto L_801D6720;
    }
    goto skip_1;
    // 0x801D6704: lwc1        $f0, 0x74($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X74);
    skip_1:
    // 0x801D6708: lwc1        $f10, 0x74($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801D670C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D6710: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x801D6714: b           L_801D67A8
    // 0x801D6718: swc1        $f16, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f16.u32l;
        goto L_801D67A8;
    // 0x801D6718: swc1        $f16, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f16.u32l;
    // 0x801D671C: lwc1        $f0, 0x74($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X74);
L_801D6720:
    // 0x801D6720: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D6724: nop

    // 0x801D6728: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801D672C: nop

    // 0x801D6730: bc1fl       L_801D6748
    if (!c1cs) {
        // 0x801D6734: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_801D6748;
    }
    goto skip_2;
    // 0x801D6734: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_2:
    // 0x801D6738: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D673C: b           L_801D67A4
    // 0x801D6740: swc1        $f4, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f4.u32l;
        goto L_801D67A4;
    // 0x801D6740: swc1        $f4, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f4.u32l;
    // 0x801D6744: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_801D6748:
    // 0x801D6748: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x801D674C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801D6750: nop

    // 0x801D6754: bc1f        L_801D6768
    if (!c1cs) {
        // 0x801D6758: nop
    
            goto L_801D6768;
    }
    // 0x801D6758: nop

    // 0x801D675C: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D6760: b           L_801D67A4
    // 0x801D6764: swc1        $f8, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f8.u32l;
        goto L_801D67A4;
    // 0x801D6764: swc1        $f8, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f8.u32l;
L_801D6768:
    // 0x801D6768: jal         0x8000DD58
    // 0x801D676C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D676C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D6770: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D6774: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D6778: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D677C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D6780: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D6784: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D6788: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D678C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D6790: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801D6794: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D6798: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801D679C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D67A0: swc1        $f10, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f10.u32l;
L_801D67A4:
    // 0x801D67A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D67A8:
    // 0x801D67A8: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D67AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D67B0: addiu       $a0, $a2, 0x74
    ctx->r4 = ADD32(ctx->r6, 0X74);
    // 0x801D67B4: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D67B8: nop

    // 0x801D67BC: bc1fl       L_801D67D0
    if (!c1cs) {
        // 0x801D67C0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D67D0;
    }
    goto skip_3;
    // 0x801D67C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801D67C4: b           L_801D67D0
    // 0x801D67C8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801D67D0;
    // 0x801D67C8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D67CC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D67D0:
    // 0x801D67D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801D67D4: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x801D67D8: jal         0x801D725C
    // 0x801D67DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801D67DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801D67E0: jal         0x801D60B4
    // 0x801D67E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D60B4_601494(rdram, ctx);
        goto after_2;
    // 0x801D67E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801D67E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D67EC: lbu         $v0, 0x1B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D67F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D67F4: jr          $ra
    // 0x801D67F8: nop

    TRACE_RETURN()
    return;
    // 0x801D67F8: nop

;}
RECOMP_FUNC void func_802006BC_62BA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802006BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802006C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802006C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802006C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802006CC: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x802006D0: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802006D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802006D8: jal         0x8003521C
    // 0x802006DC: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802006DC: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_0:
    // 0x802006E0: jal         0x8020407C
    // 0x802006E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_1;
    // 0x802006E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802006E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802006EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802006F0: jr          $ra
    // 0x802006F4: nop

    TRACE_RETURN()
    return;
    // 0x802006F4: nop

;}
RECOMP_FUNC void func_801F3E24_61F204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3E24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3E28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3E2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F3E34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F3E38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F3E3C: jal         0x801D3018
    // 0x801F3E40: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F3E40: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F3E44: jal         0x801F76D0
    // 0x801F3E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F3E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F3E4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3E50: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801F3E54: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F3E58: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F3E5C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F3E60: jal         0x8000E28C
    // 0x801F3E64: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x801F3E64: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    after_2:
    // 0x801F3E68: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x801F3E6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F3E70: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F3E74: addiu       $a2, $s0, 0x90
    ctx->r6 = ADD32(ctx->r16, 0X90);
    // 0x801F3E78: jal         0x8000E630
    // 0x801F3E7C: addiu       $a3, $s0, 0x94
    ctx->r7 = ADD32(ctx->r16, 0X94);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801F3E7C: addiu       $a3, $s0, 0x94
    ctx->r7 = ADD32(ctx->r16, 0X94);
    after_3:
    // 0x801F3E80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3E84: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801F3E88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3E8C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3E90: addiu       $a0, $a0, 0x3EB8
    ctx->r4 = ADD32(ctx->r4, 0X3EB8);
    // 0x801F3E94: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F3E98: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801F3E9C: jal         0x8003521C
    // 0x801F3EA0: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F3EA0: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x801F3EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3EA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3EB0: jr          $ra
    // 0x801F3EB4: nop

    TRACE_RETURN()
    return;
    // 0x801F3EB4: nop

;}
RECOMP_FUNC void func_801EF8C8_61ACA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF8C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF8D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF8D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF8D8: jal         0x801D31F0
    // 0x801EF8DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801EF8DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801EF8E0: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x801EF8E4: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801EF8E8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801EF8EC: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x801EF8F0: jal         0x801F72B4
    // 0x801EF8F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F72B4_622694(rdram, ctx);
        goto after_1;
    // 0x801EF8F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801EF8F8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EF8FC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EF900: lbu         $t7, 0x2C0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C0);
    // 0x801EF904: bnel        $t7, $zero, L_801EF918
    if (ctx->r15 != 0) {
        // 0x801EF908: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF918;
    }
    goto skip_0;
    // 0x801EF908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EF90C: jal         0x801F0540
    // 0x801EF910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F0540_61B920(rdram, ctx);
        goto after_2;
    // 0x801EF910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801EF914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EF918:
    // 0x801EF918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF91C: jr          $ra
    // 0x801EF920: nop

    TRACE_RETURN()
    return;
    // 0x801EF920: nop

;}
RECOMP_FUNC void func_8020386C_62EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020386C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80203870: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80203874: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x80203878: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020387C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80203880: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80203884: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80203888: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020388C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80203890: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203894: addiu       $t9, $t9, -0x4A60
    ctx->r25 = ADD32(ctx->r25, -0X4A60);
    // 0x80203898: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8020389C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802038A0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802038A4: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802038A8: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x802038AC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802038B0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802038B4: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x802038B8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802038BC: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x802038C0: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802038C4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802038C8: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x802038CC: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802038D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802038D4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x802038D8: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x802038DC: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x802038E0: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x802038E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802038E8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802038EC: jal         0x8000E808
    // 0x802038F0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x802038F0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802038F4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x802038F8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802038FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80203900: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80203904: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80203908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020390C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80203910: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80203914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203918: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020391C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x80203920: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80203924: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80203928: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8020392C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80203930: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80203934: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80203938: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020393C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80203940: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80203944: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80203948: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8020394C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80203950: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80203954: jal         0x801E006C
    // 0x80203958: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_1;
    // 0x80203958: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8020395C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80203960: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80203964: jr          $ra
    // 0x80203968: nop

    TRACE_RETURN()
    return;
    // 0x80203968: nop

;}
RECOMP_FUNC void func_801E2324_60D704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2324: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2328: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E232C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E2330: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E2334: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E2338: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E233C: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E2340: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2344: addiu       $a2, $a2, -0x3D60
    ctx->r6 = ADD32(ctx->r6, -0X3D60);
    // 0x801E2348: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E234C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2350: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E2354: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2358: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E235C: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E2360: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E2364: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E2368: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E236C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E2370: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E2374: addiu       $a1, $a1, 0x2934
    ctx->r5 = ADD32(ctx->r5, 0X2934);
    // 0x801E2378: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E237C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E2380: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2384: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2388: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E238C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E2390: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E2394: jal         0x800358E8
    // 0x801E2398: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E2398: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E239C: beq         $v0, $zero, L_801E23FC
    if (ctx->r2 == 0) {
        // 0x801E23A0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E23FC;
    }
    // 0x801E23A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E23A4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E23A8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E23AC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E23B0: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E23B4: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E23B8: addiu       $t0, $t0, -0x5018
    ctx->r8 = ADD32(ctx->r8, -0X5018);
    // 0x801E23BC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E23C0: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E23C4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E23C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E23CC: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E23D0: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E23D4: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E23D8: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E23DC: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E23E0: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E23E4: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E23E8: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E23EC: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E23F0: jal         0x801E18E4
    // 0x801E23F4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E23F4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E23F8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E23FC:
    // 0x801E23FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2400: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2404: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E2408: jr          $ra
    // 0x801E240C: nop

    TRACE_RETURN()
    return;
    // 0x801E240C: nop

;}
RECOMP_FUNC void func_801E45B4_60F994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E45B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E45B8: sw          $zero, -0x10F0($at)
    MEM_W(-0X10F0, ctx->r1) = 0;
    // 0x801E45BC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801E45C0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801E45C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E45C8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801E45CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E45D0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801E45D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801E45D8: jal         0x800148F0
    // 0x801E45DC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801E45DC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801E45E0: bne         $v0, $zero, L_801E45F0
    if (ctx->r2 != 0) {
        // 0x801E45E4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E45F0;
    }
    // 0x801E45E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E45E8: b           L_801E4618
    // 0x801E45EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E4618;
    // 0x801E45EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E45F0:
    // 0x801E45F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E45F4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E45F8: sw          $v1, -0x10F0($at)
    MEM_W(-0X10F0, ctx->r1) = ctx->r3;
    // 0x801E45FC: addiu       $a0, $a0, 0x41F0
    ctx->r4 = ADD32(ctx->r4, 0X41F0);
    // 0x801E4600: jal         0x80034DD8
    // 0x801E4604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801E4604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E4608: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801E460C: jal         0x80038BC8
    // 0x801E4610: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E4610: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_2:
    // 0x801E4614: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_801E4618:
    // 0x801E4618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E461C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E4620: jr          $ra
    // 0x801E4624: nop

    TRACE_RETURN()
    return;
    // 0x801E4624: nop

;}
RECOMP_FUNC void func_801D4BF4_5FFFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4BF4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x801D4BF8: lw          $t6, 0x48DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X48DC);
    // 0x801D4BFC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D4C00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D4C04: bne         $t6, $at, L_801D4C50
    if (ctx->r14 != ctx->r1) {
        // 0x801D4C08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801D4C50;
    }
    // 0x801D4C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D4C0C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D4C10: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D4C14: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801D4C18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D4C1C: lh          $t8, -0x524E($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X524E);
    // 0x801D4C20: beql        $t8, $zero, L_801D4C40
    if (ctx->r24 == 0) {
        // 0x801D4C24: lwc1        $f8, 0x0($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
            goto L_801D4C40;
    }
    goto skip_0;
    // 0x801D4C24: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x801D4C28: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D4C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4C30: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D4C34: jr          $ra
    // 0x801D4C38: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801D4C38: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x801D4C3C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
L_801D4C40:
    // 0x801D4C40: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x801D4C44: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x801D4C48: jr          $ra
    // 0x801D4C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D4C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4C50:
    // 0x801D4C50: jr          $ra
    // 0x801D4C54: nop

    TRACE_RETURN()
    return;
    // 0x801D4C54: nop

;}
RECOMP_FUNC void func_801F9EAC_62528C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9EB0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F9EB4: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x801F9EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9EBC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x801F9EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9EC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9EC8: lw          $a1, 0x1D8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1D8);
    // 0x801F9ECC: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x801F9ED0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801F9ED4: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x801F9ED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9EDC: lui         $at, 0xC228
    ctx->r1 = S32(0XC228 << 16);
    // 0x801F9EE0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F9EE4: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x801F9EE8: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801F9EEC: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F9EF0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F9EF4: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801F9EF8: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F9EFC: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x801F9F00: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801F9F04: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801F9F08: beql        $t7, $zero, L_801F9F64
    if (ctx->r15 == 0) {
        // 0x801F9F0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F9F64;
    }
    goto skip_0;
    // 0x801F9F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F9F10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F9F14: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F9F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9F1C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x801F9F20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9F24: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801F9F28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F9F2C: lui         $at, 0xC3B9
    ctx->r1 = S32(0XC3B9 << 16);
    // 0x801F9F30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F9F34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F9F38: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x801F9F3C: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x801F9F40: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x801F9F44: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x801F9F48: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801F9F4C: jal         0x80038BC8
    // 0x801F9F50: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F9F50: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    after_0:
    // 0x801F9F54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9F58: jal         0x8003521C
    // 0x801F9F5C: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F9F5C: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    after_1:
    // 0x801F9F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9F64:
    // 0x801F9F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9F68: jr          $ra
    // 0x801F9F6C: nop

    TRACE_RETURN()
    return;
    // 0x801F9F6C: nop

;}
RECOMP_FUNC void func_801EE904_619CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EE908: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EE90C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EE910: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801EE914: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801EE918: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE91C: bnel        $v0, $zero, L_801EE94C
    if (ctx->r2 != 0) {
        // 0x801EE920: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_801EE94C;
    }
    goto skip_0;
    // 0x801EE920: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x801EE924: jal         0x80038BC8
    // 0x801EE928: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EE928: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x801EE92C: jal         0x80038BC8
    // 0x801EE930: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EE930: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x801EE934: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EE938: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EE93C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801EE940: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801EE944: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801EE948: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_801EE94C:
    // 0x801EE94C: bgez        $t8, L_801EEA58
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801EE950: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801EEA58;
    }
    // 0x801EE950: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801EE954: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801EE958: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EE95C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EE960: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EE964: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EE968: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EE96C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE970: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EE974: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x801EE978: swc1        $f8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f8.u32l;
    // 0x801EE97C: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EE980: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801EE984: nop

    // 0x801EE988: bc1fl       L_801EE99C
    if (!c1cs) {
        // 0x801EE98C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801EE99C;
    }
    goto skip_1;
    // 0x801EE98C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x801EE990: b           L_801EE99C
    // 0x801EE994: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801EE99C;
    // 0x801EE994: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801EE998: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801EE99C:
    // 0x801EE99C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801EE9A0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE9A4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801EE9A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801EE9AC: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801EE9B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EE9B4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE9B8: nop

    // 0x801EE9BC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE9C0: beql        $a3, $zero, L_801EEA10
    if (ctx->r7 == 0) {
        // 0x801EE9C4: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801EEA10;
    }
    goto skip_2;
    // 0x801EE9C4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x801EE9C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EE9CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE9D0: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801EE9D4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE9D8: nop

    // 0x801EE9DC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801EE9E0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE9E4: nop

    // 0x801EE9E8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE9EC: bne         $a3, $zero, L_801EEA04
    if (ctx->r7 != 0) {
        // 0x801EE9F0: nop
    
            goto L_801EEA04;
    }
    // 0x801EE9F0: nop

    // 0x801EE9F4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801EE9F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EE9FC: b           L_801EEA1C
    // 0x801EEA00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801EEA1C;
    // 0x801EEA00: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801EEA04:
    // 0x801EEA04: b           L_801EEA1C
    // 0x801EEA08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801EEA1C;
    // 0x801EEA08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801EEA0C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801EEA10:
    // 0x801EEA10: nop

    // 0x801EEA14: bltz        $a3, L_801EEA04
    if (SIGNED(ctx->r7) < 0) {
        // 0x801EEA18: nop
    
            goto L_801EEA04;
    }
    // 0x801EEA18: nop

L_801EEA1C:
    // 0x801EEA1C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801EEA20: andi        $t1, $a3, 0xFFFF
    ctx->r9 = ctx->r7 & 0XFFFF;
    // 0x801EEA24: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x801EEA28: jal         0x801D15BC
    // 0x801EEA2C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_2;
    // 0x801EEA2C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x801EEA30: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801EEA34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EEA38: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EEA3C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EEA40: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801EEA44: nop

    // 0x801EEA48: bc1fl       L_801EEA5C
    if (!c1cs) {
        // 0x801EEA4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801EEA5C;
    }
    goto skip_3;
    // 0x801EEA4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801EEA50: jal         0x8003521C
    // 0x801EEA54: addiu       $a0, $a0, -0x1594
    ctx->r4 = ADD32(ctx->r4, -0X1594);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801EEA54: addiu       $a0, $a0, -0x1594
    ctx->r4 = ADD32(ctx->r4, -0X1594);
    after_3:
L_801EEA58:
    // 0x801EEA58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EEA5C:
    // 0x801EEA5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EEA60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EEA64: jr          $ra
    // 0x801EEA68: nop

    TRACE_RETURN()
    return;
    // 0x801EEA68: nop

;}
RECOMP_FUNC void func_801F26E0_61DAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F26E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F26E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F26E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F26EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F26F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F26F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F26F8: jal         0x801D3018
    // 0x801F26FC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F26FC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F2708: jal         0x801D3F00
    // 0x801F270C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801F270C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801F2710: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801F2714: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F2718: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F271C: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F2720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2724: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F2728: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F272C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2730: jal         0x801D3B18
    // 0x801F2734: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_2;
    // 0x801F2734: nop

    after_2:
    // 0x801F2738: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x801F273C: jal         0x801F732C
    // 0x801F2740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_3;
    // 0x801F2740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F2744: beq         $v0, $zero, L_801F2774
    if (ctx->r2 == 0) {
        // 0x801F2748: lbu         $t7, 0x27($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X27);
            goto L_801F2774;
    }
    // 0x801F2748: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x801F274C: beq         $t7, $zero, L_801F2774
    if (ctx->r15 == 0) {
        // 0x801F2750: addiu       $t8, $zero, 0xC8
        ctx->r24 = ADD32(0, 0XC8);
            goto L_801F2774;
    }
    // 0x801F2750: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801F2754: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F2758: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801F275C: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x801F2760: jal         0x801D31CC
    // 0x801F2764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801F2764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F2768: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F276C: jal         0x8003521C
    // 0x801F2770: addiu       $a0, $a0, 0x2788
    ctx->r4 = ADD32(ctx->r4, 0X2788);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F2770: addiu       $a0, $a0, 0x2788
    ctx->r4 = ADD32(ctx->r4, 0X2788);
    after_5:
L_801F2774:
    // 0x801F2774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2778: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F277C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F2780: jr          $ra
    // 0x801F2784: nop

    TRACE_RETURN()
    return;
    // 0x801F2784: nop

;}
RECOMP_FUNC void func_801D7380_602760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D7384: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D7388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D738C: lui         $a1, 0xBD4C
    ctx->r5 = S32(0XBD4C << 16);
    // 0x801D7390: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D7394: jal         0x801D6508
    // 0x801D7398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801D7398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D739C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801D73A0: addiu       $a0, $a2, 0x74
    ctx->r4 = ADD32(ctx->r6, 0X74);
    // 0x801D73A4: jal         0x801D725C
    // 0x801D73A8: lw          $a1, 0x94($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X94);
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801D73A8: lw          $a1, 0x94($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X94);
    after_1:
    // 0x801D73AC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D73B0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801D73B4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D73B8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D73BC: lwc1        $f0, 0x90($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X90);
    // 0x801D73C0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801D73C4: nop

    // 0x801D73C8: bc1fl       L_801D7420
    if (!c1cs) {
        // 0x801D73CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D7420;
    }
    goto skip_0;
    // 0x801D73CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D73D0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801D73D4: lwc1        $f6, 0x74($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801D73D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D73DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D73E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D73E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D73E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D73EC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D73F0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D73F4: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
    // 0x801D73F8: lwc1        $f4, 0x74($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801D73FC: ldc1        $f8, -0x29B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X29B0);
    // 0x801D7400: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D7404: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801D7408: nop

    // 0x801D740C: bc1fl       L_801D7420
    if (!c1cs) {
        // 0x801D7410: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D7420;
    }
    goto skip_1;
    // 0x801D7410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D7414: jal         0x8003521C
    // 0x801D7418: addiu       $a0, $a0, 0x742C
    ctx->r4 = ADD32(ctx->r4, 0X742C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801D7418: addiu       $a0, $a0, 0x742C
    ctx->r4 = ADD32(ctx->r4, 0X742C);
    after_2:
    // 0x801D741C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D7420:
    // 0x801D7420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D7424: jr          $ra
    // 0x801D7428: nop

    TRACE_RETURN()
    return;
    // 0x801D7428: nop

;}
RECOMP_FUNC void func_801D3EC8_5FF2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D3ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D3ED8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D3EDC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801D3EE0: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x801D3EE4: lhu         $a2, 0x1E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X1E);
    // 0x801D3EE8: jal         0x801D3F38
    // 0x801D3EEC: addiu       $a1, $a0, 0x16
    ctx->r5 = ADD32(ctx->r4, 0X16);
    func_801D3F38_5FF318(rdram, ctx);
        goto after_0;
    // 0x801D3EEC: addiu       $a1, $a0, 0x16
    ctx->r5 = ADD32(ctx->r4, 0X16);
    after_0:
    // 0x801D3EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3EF8: jr          $ra
    // 0x801D3EFC: nop

    TRACE_RETURN()
    return;
    // 0x801D3EFC: nop

;}
RECOMP_FUNC void func_801DAC78_606058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAC78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAC7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAC80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DAC84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAC88: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801DAC8C: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801DAC90: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DAC94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DAC98: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DAC9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DACA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DACA4: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801DACA8: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x801DACAC: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801DACB0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x801DACB4: nop

    // 0x801DACB8: bc1fl       L_801DACFC
    if (!c1cs) {
        // 0x801DACBC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801DACFC;
    }
    goto skip_0;
    // 0x801DACBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x801DACC0: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801DACC4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x801DACC8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DACCC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DACD0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801DACD4: addiu       $a0, $a0, -0x629C
    ctx->r4 = ADD32(ctx->r4, -0X629C);
    // 0x801DACD8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DACDC: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801DACE0: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x801DACE4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DACE8: jal         0x8003521C
    // 0x801DACEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801DACEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DACF0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801DACF4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DACF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_801DACFC:
    // 0x801DACFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DAD00: jal         0x801D9030
    // 0x801DAD04: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D9030_604410(rdram, ctx);
        goto after_1;
    // 0x801DAD04: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801DAD08: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DAD0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAD10: lw          $t7, 0x98($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X98);
    // 0x801DAD14: lw          $t8, 0x9C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X9C);
    // 0x801DAD18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801DAD1C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DAD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DAD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAD28: jr          $ra
    // 0x801DAD2C: nop

    TRACE_RETURN()
    return;
    // 0x801DAD2C: nop

;}
RECOMP_FUNC void func_801E2794_60DB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2794: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2798: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E279C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801E27A0: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E27A4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E27A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E27AC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801E27B0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E27B4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E27B8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E27BC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E27C0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E27C4: addiu       $t9, $zero, 0x4AC
    ctx->r25 = ADD32(0, 0X4AC);
    // 0x801E27C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E27CC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E27D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E27D4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E27D8: addiu       $a1, $a1, 0x2AD8
    ctx->r5 = ADD32(ctx->r5, 0X2AD8);
    // 0x801E27DC: addiu       $a3, $a3, -0x51C0
    ctx->r7 = ADD32(ctx->r7, -0X51C0);
    // 0x801E27E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E27E4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E27E8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E27EC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E27F0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E27F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E27F8: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E27FC: jal         0x800358E8
    // 0x801E2800: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E2800: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E2804: beq         $v0, $zero, L_801E2860
    if (ctx->r2 == 0) {
        // 0x801E2808: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2860;
    }
    // 0x801E2808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E280C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E2810: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x801E2814: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x801E2818: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x801E281C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E2820: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801E2824: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E2828: swc1        $f10, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f10.u32l;
    // 0x801E282C: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E2830: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x801E2834: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x801E2838: sw          $t0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r8;
    // 0x801E283C: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x801E2840: sw          $t1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r9;
    // 0x801E2844: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x801E2848: lbu         $t2, 0x5B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5B);
    // 0x801E284C: addiu       $a1, $a1, -0x5DE8
    ctx->r5 = ADD32(ctx->r5, -0X5DE8);
    // 0x801E2850: sw          $t2, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r10;
    // 0x801E2854: jal         0x801D31CC
    // 0x801E2858: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E2858: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E285C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E2860:
    // 0x801E2860: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2864: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2868: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E286C: jr          $ra
    // 0x801E2870: nop

    TRACE_RETURN()
    return;
    // 0x801E2870: nop

;}
RECOMP_FUNC void func_801CD2B8_5F8698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD2BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD2C4: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x801CD2C8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD2CC: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CD2D0: jal         0x8003521C
    // 0x801CD2D4: addiu       $a0, $a0, -0x2D18
    ctx->r4 = ADD32(ctx->r4, -0X2D18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CD2D4: addiu       $a0, $a0, -0x2D18
    ctx->r4 = ADD32(ctx->r4, -0X2D18);
    after_0:
    // 0x801CD2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD2DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD2E0: jr          $ra
    // 0x801CD2E4: nop

    TRACE_RETURN()
    return;
    // 0x801CD2E4: nop

;}
RECOMP_FUNC void func_80208704_633AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020870C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80208710: jal         0x8003767C
    // 0x80208714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003767C_3827C(rdram, ctx);
        goto after_0;
    // 0x80208714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80208718: beq         $v0, $zero, L_80208758
    if (ctx->r2 == 0) {
        // 0x8020871C: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_80208758;
    }
    // 0x8020871C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80208720: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80208724: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80208728: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8020872C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80208730: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x80208734: bnel        $t7, $at, L_8020875C
    if (ctx->r15 != ctx->r1) {
        // 0x80208738: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8020875C;
    }
    goto skip_0;
    // 0x80208738: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x8020873C: jal         0x80038BC8
    // 0x80208740: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80208740: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_1:
    // 0x80208744: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208748: jal         0x8003521C
    // 0x8020874C: addiu       $a0, $a0, -0x7768
    ctx->r4 = ADD32(ctx->r4, -0X7768);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x8020874C: addiu       $a0, $a0, -0x7768
    ctx->r4 = ADD32(ctx->r4, -0X7768);
    after_2:
    // 0x80208750: b           L_80208780
    // 0x80208754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80208780;
    // 0x80208754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208758:
    // 0x80208758: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8020875C:
    // 0x8020875C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208760: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80208764: jal         0x801D5064
    // 0x80208768: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x80208768: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    after_3:
    // 0x8020876C: beq         $v0, $zero, L_8020877C
    if (ctx->r2 == 0) {
        // 0x80208770: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_8020877C;
    }
    // 0x80208770: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208774: jal         0x8003521C
    // 0x80208778: addiu       $a0, $a0, -0x7874
    ctx->r4 = ADD32(ctx->r4, -0X7874);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80208778: addiu       $a0, $a0, -0x7874
    ctx->r4 = ADD32(ctx->r4, -0X7874);
    after_4:
L_8020877C:
    // 0x8020877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208780:
    // 0x80208780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208784: jr          $ra
    // 0x80208788: nop

    TRACE_RETURN()
    return;
    // 0x80208788: nop

;}
RECOMP_FUNC void func_801D1A78_5FCE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1A78: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1A7C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D1A80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D1A84: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D1A88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1A8C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D1A90: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D1A94: addiu       $t6, $v0, 0xA0
    ctx->r14 = ADD32(ctx->r2, 0XA0);
    // 0x801D1A98: addiu       $t7, $v0, 0x100
    ctx->r15 = ADD32(ctx->r2, 0X100);
    // 0x801D1A9C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801D1AA0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801D1AA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801D1AA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801D1AAC: jal         0x801D6D40
    // 0x801D1AB0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_801D6D40_602120(rdram, ctx);
        goto after_0;
    // 0x801D1AB0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D1AB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D1AB8: jal         0x801D7084
    // 0x801D1ABC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801D7084_602464(rdram, ctx);
        goto after_1;
    // 0x801D1ABC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x801D1AC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x801D1AC4: jal         0x801D6EE0
    // 0x801D1AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801D6EE0_6022C0(rdram, ctx);
        goto after_2;
    // 0x801D1AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x801D1ACC: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801D1AD0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801D1AD4: bgtz        $t9, L_801D1D3C
    if (SIGNED(ctx->r25) > 0) {
        // 0x801D1AD8: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_801D1D3C;
    }
    // 0x801D1AD8: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801D1ADC: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801D1AE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1AE4: ldc1        $f8, -0x2DB0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2DB0);
    // 0x801D1AE8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D1AEC: lui         $at, 0x404F
    ctx->r1 = S32(0X404F << 16);
    // 0x801D1AF0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D1AF4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D1AF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D1AFC: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x801D1B00: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D1B04: swc1        $f16, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f16.u32l;
    // 0x801D1B08: lwc1        $f0, 0x90($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801D1B0C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801D1B10: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x801D1B14: nop

    // 0x801D1B18: bc1fl       L_801D1B34
    if (!c1cs) {
        // 0x801D1B1C: lw          $t1, 0x38($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X38);
            goto L_801D1B34;
    }
    goto skip_0;
    // 0x801D1B1C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x801D1B20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1B24: nop

    // 0x801D1B28: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x801D1B2C: lwc1        $f0, 0x90($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801D1B30: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
L_801D1B34:
    // 0x801D1B34: lui         $at, 0x3FD8
    ctx->r1 = S32(0X3FD8 << 16);
    // 0x801D1B38: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D1B3C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x801D1B40: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801D1B44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D1B48: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801D1B4C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D1B50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D1B54: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801D1B58: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D1B5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D1B60: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D1B64: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    // 0x801D1B68: lwc1        $f2, 0x94($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801D1B6C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801D1B70: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D1B74: nop

    // 0x801D1B78: bc1fl       L_801D1B94
    if (!c1cs) {
        // 0x801D1B7C: trunc.w.s   $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
            goto L_801D1B94;
    }
    goto skip_1;
    // 0x801D1B7C: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    skip_1:
    // 0x801D1B80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1B84: nop

    // 0x801D1B88: swc1        $f10, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f10.u32l;
    // 0x801D1B8C: lwc1        $f2, 0x94($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801D1B90: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
L_801D1B94:
    // 0x801D1B94: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801D1B98: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D1B9C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D1BA0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x801D1BA4: addiu       $at, $zero, -0x78
    ctx->r1 = ADD32(0, -0X78);
    // 0x801D1BA8: sb          $t3, 0xC($t4)
    MEM_B(0XC, ctx->r12) = ctx->r11;
    // 0x801D1BAC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D1BB0: sb          $t5, 0x2C1($t6)
    MEM_B(0X2C1, ctx->r14) = ctx->r13;
    // 0x801D1BB4: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801D1BB8: bnel        $v1, $at, L_801D1C10
    if (ctx->r3 != ctx->r1) {
        // 0x801D1BBC: slti        $at, $v1, -0xC7
        ctx->r1 = SIGNED(ctx->r3) < -0XC7 ? 1 : 0;
            goto L_801D1C10;
    }
    goto skip_2;
    // 0x801D1BBC: slti        $at, $v1, -0xC7
    ctx->r1 = SIGNED(ctx->r3) < -0XC7 ? 1 : 0;
    skip_2:
    // 0x801D1BC0: jal         0x80038BC8
    // 0x801D1BC4: addiu       $a0, $zero, 0x274
    ctx->r4 = ADD32(0, 0X274);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801D1BC4: addiu       $a0, $zero, 0x274
    ctx->r4 = ADD32(0, 0X274);
    after_3:
    // 0x801D1BC8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801D1BCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D1BD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D1BD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D1BD8: lui         $a3, 0xC106
    ctx->r7 = S32(0XC106 << 16);
    // 0x801D1BDC: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x801D1BE0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801D1BE4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801D1BE8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801D1BEC: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x801D1BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1BF4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x801D1BF8: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x801D1BFC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D1C00: jal         0x8000EEAC
    // 0x801D1C04: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000EEAC_FAAC(rdram, ctx);
        goto after_4;
    // 0x801D1C04: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801D1C08: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801D1C0C: slti        $at, $v1, -0xC7
    ctx->r1 = SIGNED(ctx->r3) < -0XC7 ? 1 : 0;
L_801D1C10:
    // 0x801D1C10: beq         $at, $zero, L_801D1C50
    if (ctx->r1 == 0) {
        // 0x801D1C14: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_801D1C50;
    }
    // 0x801D1C14: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x801D1C18: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x801D1C1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801D1C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1C24: addiu       $v0, $t9, 0x4
    ctx->r2 = ADD32(ctx->r25, 0X4);
    // 0x801D1C28: sltiu       $at, $v0, 0xC0
    ctx->r1 = ctx->r2 < 0XC0 ? 1 : 0;
    // 0x801D1C2C: bne         $at, $zero, L_801D1C3C
    if (ctx->r1 != 0) {
        // 0x801D1C30: sw          $v0, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r2;
            goto L_801D1C3C;
    }
    // 0x801D1C30: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x801D1C34: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x801D1C38: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
L_801D1C3C:
    // 0x801D1C3C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x801D1C40: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D1C44: jal         0x801D15BC
    // 0x801D1C48: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_5;
    // 0x801D1C48: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_5:
    // 0x801D1C4C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801D1C50:
    // 0x801D1C50: addiu       $at, $zero, -0xC8
    ctx->r1 = ADD32(0, -0XC8);
    // 0x801D1C54: bnel        $v1, $at, L_801D1CB0
    if (ctx->r3 != ctx->r1) {
        // 0x801D1C58: slti        $at, $v1, -0x1A3
        ctx->r1 = SIGNED(ctx->r3) < -0X1A3 ? 1 : 0;
            goto L_801D1CB0;
    }
    goto skip_3;
    // 0x801D1C58: slti        $at, $v1, -0x1A3
    ctx->r1 = SIGNED(ctx->r3) < -0X1A3 ? 1 : 0;
    skip_3:
    // 0x801D1C5C: jal         0x80038BC8
    // 0x801D1C60: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801D1C60: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
    // 0x801D1C64: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801D1C68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1C6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D1C70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1C74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1C78: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801D1C7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1C80: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801D1C84: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D1C88: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D1C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1C90: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x801D1C94: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801D1C98: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D1C9C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D1CA0: jal         0x801D72C0
    // 0x801D1CA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801D72C0_6026A0(rdram, ctx);
        goto after_7;
    // 0x801D1CA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801D1CA8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801D1CAC: slti        $at, $v1, -0x1A3
    ctx->r1 = SIGNED(ctx->r3) < -0X1A3 ? 1 : 0;
L_801D1CB0:
    // 0x801D1CB0: beq         $at, $zero, L_801D1D3C
    if (ctx->r1 == 0) {
        // 0x801D1CB4: addiu       $a1, $zero, 0x8B
        ctx->r5 = ADD32(0, 0X8B);
            goto L_801D1D3C;
    }
    // 0x801D1CB4: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    // 0x801D1CB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1CBC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D1CC0: jal         0x801D5064
    // 0x801D1CC4: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_801D5064_600444(rdram, ctx);
        goto after_8;
    // 0x801D1CC4: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_8:
    // 0x801D1CC8: beq         $v0, $zero, L_801D1D3C
    if (ctx->r2 == 0) {
        // 0x801D1CCC: lui         $t3, 0x8016
        ctx->r11 = S32(0X8016 << 16);
            goto L_801D1D3C;
    }
    // 0x801D1CCC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801D1CD0: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801D1CD4: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x801D1CD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801D1CDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801D1CE0: lbu         $t4, -0x521C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X521C);
    // 0x801D1CE4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D1CE8: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801D1CEC: bne         $t4, $at, L_801D1D18
    if (ctx->r12 != ctx->r1) {
        // 0x801D1CF0: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_801D1D18;
    }
    // 0x801D1CF0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1CF4: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x801D1CF8: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x801D1CFC: sw          $t5, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r13;
    // 0x801D1D00: jal         0x80037548
    // 0x801D1D04: sw          $t6, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r14;
    func_80037548_38148(rdram, ctx);
        goto after_9;
    // 0x801D1D04: sw          $t6, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r14;
    after_9:
    // 0x801D1D08: jal         0x80038BC8
    // 0x801D1D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_10;
    // 0x801D1D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x801D1D10: b           L_801D1D40
    // 0x801D1D14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D1D40;
    // 0x801D1D14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D1D18:
    // 0x801D1D18: lw          $t7, 0x68($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X68);
    // 0x801D1D1C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D1D20: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801D1D24: sw          $t7, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r15;
    // 0x801D1D28: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
    // 0x801D1D2C: jal         0x80037000
    // 0x801D1D30: sw          $t8, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r24;
    func_80037000_37C00(rdram, ctx);
        goto after_11;
    // 0x801D1D30: sw          $t8, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r24;
    after_11:
    // 0x801D1D34: jal         0x80038BC8
    // 0x801D1D38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_12;
    // 0x801D1D38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
L_801D1D3C:
    // 0x801D1D3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D1D40:
    // 0x801D1D40: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D1D44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D1D48: jr          $ra
    // 0x801D1D4C: nop

    TRACE_RETURN()
    return;
    // 0x801D1D4C: nop

;}
RECOMP_FUNC void func_801EF580_61A960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF584: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EF588: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EF58C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF594: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF598: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801EF59C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EF5A0: bnel        $t7, $at, L_801EF624
    if (ctx->r15 != ctx->r1) {
        // 0x801EF5A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF624;
    }
    goto skip_0;
    // 0x801EF5A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EF5A8: jal         0x801D326C
    // 0x801EF5AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_0;
    // 0x801EF5AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801EF5B0: jal         0x801D603C
    // 0x801EF5B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801EF5B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801EF5B8: jal         0x801F7168
    // 0x801EF5BC: nop

    func_801F7168_622548(rdram, ctx);
        goto after_2;
    // 0x801EF5BC: nop

    after_2:
    // 0x801EF5C0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF5C4: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801EF5C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF5CC: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801EF5D0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EF5D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EF5D8: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801EF5DC: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x801EF5E0: nop

    // 0x801EF5E4: bc1fl       L_801EF624
    if (!c1cs) {
        // 0x801EF5E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF624;
    }
    goto skip_1;
    // 0x801EF5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801EF5EC: jal         0x80038BC8
    // 0x801EF5F0: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801EF5F0: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_3:
    // 0x801EF5F4: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x801EF5F8: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801EF5FC: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801EF600: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801EF604: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801EF608: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801EF60C: jal         0x801F74E4
    // 0x801EF610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801EF610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x801EF614: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF618: jal         0x8003521C
    // 0x801EF61C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801EF61C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    after_5:
    // 0x801EF620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EF624:
    // 0x801EF624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF628: jr          $ra
    // 0x801EF62C: nop

    TRACE_RETURN()
    return;
    // 0x801EF62C: nop

;}
RECOMP_FUNC void func_801EB220_616600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB220: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EB224: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801EB228: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x801EB22C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EB230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EB234: bne         $t6, $at, L_801EB280
    if (ctx->r14 != ctx->r1) {
        // 0x801EB238: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_801EB280;
    }
    // 0x801EB238: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EB23C: lui         $at, 0xC326
    ctx->r1 = S32(0XC326 << 16);
    // 0x801EB240: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EB244: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EB248: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801EB24C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EB250: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EB254: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x801EB258: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EB25C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x801EB260: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x801EB264: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EB268: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EB26C: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x801EB270: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EB274: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EB278: b           L_801EB2C0
    // 0x801EB27C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
        goto L_801EB2C0;
    // 0x801EB27C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
L_801EB280:
    // 0x801EB280: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801EB284: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EB288: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EB28C: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x801EB290: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EB294: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EB298: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x801EB29C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EB2A0: addiu       $t0, $zero, 0x46
    ctx->r8 = ADD32(0, 0X46);
    // 0x801EB2A4: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x801EB2A8: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EB2AC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EB2B0: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801EB2B4: lwc1        $f10, 0x24($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EB2B8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EB2BC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
L_801EB2C0:
    // 0x801EB2C0: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801EB2C4: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801EB2C8: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801EB2CC: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x801EB2D0: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x801EB2D4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801EB2D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EB2DC: sb          $t0, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r8;
    // 0x801EB2E0: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x801EB2E4: jal         0x8000E808
    // 0x801EB2E8: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801EB2E8: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x801EB2EC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801EB2F0: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801EB2F4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EB2F8: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EB2FC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EB300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EB304: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EB308: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EB30C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EB310: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EB314: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801EB318: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EB31C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EB320: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801EB324: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801EB328: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EB32C: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x801EB330: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801EB334: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801EB338: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801EB33C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801EB340: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801EB344: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EB348: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EB34C: addiu       $a0, $a0, -0x4C44
    ctx->r4 = ADD32(ctx->r4, -0X4C44);
    // 0x801EB350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EB354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB358: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801EB35C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801EB360: jal         0x80035854
    // 0x801EB364: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EB364: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801EB368: lbu         $t0, 0x53($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X53);
    // 0x801EB36C: beq         $v0, $zero, L_801EB3A8
    if (ctx->r2 == 0) {
        // 0x801EB370: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801EB3A8;
    }
    // 0x801EB370: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801EB374: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x801EB378: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801EB37C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801EB380: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x801EB384: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801EB388: sb          $t4, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r12;
    // 0x801EB38C: sw          $t5, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r13;
    // 0x801EB390: sb          $t0, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r8;
    // 0x801EB394: sh          $t6, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r14;
    // 0x801EB398: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x801EB39C: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x801EB3A0: sw          $t7, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r15;
    // 0x801EB3A4: sw          $t3, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r11;
L_801EB3A8:
    // 0x801EB3A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EB3AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801EB3B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801EB3B4: jr          $ra
    // 0x801EB3B8: nop

    TRACE_RETURN()
    return;
    // 0x801EB3B8: nop

;}
RECOMP_FUNC void func_801FF730_62AB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FF734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FF738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FF73C: jal         0x801FFE6C
    // 0x801FF740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FF740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FF744: jal         0x801FFE34
    // 0x801FF748: nop

    func_801FFE34_62B214(rdram, ctx);
        goto after_1;
    // 0x801FF748: nop

    after_1:
    // 0x801FF74C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FF750: addiu       $a1, $a1, -0x4BD0
    ctx->r5 = ADD32(ctx->r5, -0X4BD0);
    // 0x801FF754: jal         0x801D2EE4
    // 0x801FF758: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801FF758: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801FF75C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FF760: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FF764: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801FF768: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FF76C: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    // 0x801FF770: lw          $t8, 0xEC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XEC);
    // 0x801FF774: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF778: addiu       $a0, $a0, -0x868
    ctx->r4 = ADD32(ctx->r4, -0X868);
    // 0x801FF77C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801FF780: jal         0x8003521C
    // 0x801FF784: sw          $t9, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FF784: sw          $t9, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r25;
    after_3:
    // 0x801FF788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FF78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FF790: jr          $ra
    // 0x801FF794: nop

    TRACE_RETURN()
    return;
    // 0x801FF794: nop

;}
RECOMP_FUNC void func_80207B54_632F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207B54: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80207B58: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80207B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80207B68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207B6C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80207B70: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x80207B74: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80207B78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80207B7C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207B80: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80207B84: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80207B88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80207B8C: addiu       $a0, $a0, 0x7C08
    ctx->r4 = ADD32(ctx->r4, 0X7C08);
    // 0x80207B90: bc1fl       L_80207BB8
    if (!c1cs) {
        // 0x80207B94: sb          $t6, 0x2C1($v1)
        MEM_B(0X2C1, ctx->r3) = ctx->r14;
            goto L_80207BB8;
    }
    goto skip_0;
    // 0x80207B94: sb          $t6, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = ctx->r14;
    skip_0:
    // 0x80207B98: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80207B9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80207BA0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80207BA4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80207BA8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80207BAC: b           L_80207BD4
    // 0x80207BB0: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
        goto L_80207BD4;
    // 0x80207BB0: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80207BB4: sb          $t6, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = ctx->r14;
L_80207BB8:
    // 0x80207BB8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80207BBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80207BC0: ldc1        $f6, -0x1160($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1160);
    // 0x80207BC4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80207BC8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80207BCC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80207BD0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_80207BD4:
    // 0x80207BD4: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80207BD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80207BDC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80207BE0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80207BE4: nop

    // 0x80207BE8: bc1fl       L_80207BFC
    if (!c1cs) {
        // 0x80207BEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207BFC;
    }
    goto skip_1;
    // 0x80207BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80207BF0: jal         0x8003521C
    // 0x80207BF4: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80207BF4: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    after_0:
    // 0x80207BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207BFC:
    // 0x80207BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207C00: jr          $ra
    // 0x80207C04: nop

    TRACE_RETURN()
    return;
    // 0x80207C04: nop

;}
RECOMP_FUNC void func_801DF960_60AD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DF96C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801DF970: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DF974: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801DF978: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x801DF97C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x801DF980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DF984: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x801DF988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DF98C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DF990: jal         0x8000DF10
    // 0x801DF994: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801DF994: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x801DF998: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF99C: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801DF9A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801DF9A4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DF9A8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801DF9AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801DF9B0: jal         0x801D2F40
    // 0x801DF9B4: sw          $t0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r8;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801DF9B4: sw          $t0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r8;
    after_1:
    // 0x801DF9B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DF9BC: nop

    // 0x801DF9C0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801DF9C4: nop

    // 0x801DF9C8: bc1fl       L_801DF9DC
    if (!c1cs) {
        // 0x801DF9CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF9DC;
    }
    goto skip_0;
    // 0x801DF9CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DF9D0: jal         0x80034ED4
    // 0x801DF9D4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x801DF9D4: nop

    after_2:
    // 0x801DF9D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF9DC:
    // 0x801DF9DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF9E0: jr          $ra
    // 0x801DF9E4: nop

    TRACE_RETURN()
    return;
    // 0x801DF9E4: nop

;}
RECOMP_FUNC void func_801DCE24_608204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCE24: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DCE28: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DCE2C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DCE30: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DCE34: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801DCE38: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801DCE3C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DCE40: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801DCE44: bne         $a0, $at, L_801DCE54
    if (ctx->r4 != ctx->r1) {
        // 0x801DCE48: sw          $t7, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r15;
            goto L_801DCE54;
    }
    // 0x801DCE48: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x801DCE4C: b           L_801DCE58
    // 0x801DCE50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_801DCE58;
    // 0x801DCE50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801DCE54:
    // 0x801DCE54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801DCE58:
    // 0x801DCE58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCE5C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801DCE60: addiu       $a1, $a1, 0x154
    ctx->r5 = ADD32(ctx->r5, 0X154);
    // 0x801DCE64: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DCE68: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DCE6C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DCE70: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801DCE74: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801DCE78: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801DCE7C: addiu       $a2, $a2, -0x59F0
    ctx->r6 = ADD32(ctx->r6, -0X59F0);
    // 0x801DCE80: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DCE84: addiu       $a0, $a0, -0x30E8
    ctx->r4 = ADD32(ctx->r4, -0X30E8);
    // 0x801DCE88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DCE8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801DCE90: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DCE94: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801DCE98: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801DCE9C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801DCEA0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DCEA4: sb          $v1, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r3;
    // 0x801DCEA8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DCEAC: jal         0x80035854
    // 0x801DCEB0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801DCEB0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DCEB4: lbu         $v1, 0x47($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X47);
    // 0x801DCEB8: beq         $v0, $zero, L_801DCF04
    if (ctx->r2 == 0) {
        // 0x801DCEBC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801DCF04;
    }
    // 0x801DCEBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801DCEC0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x801DCEC4: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
    // 0x801DCEC8: sw          $v1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r3;
    // 0x801DCECC: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801DCED0: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
    // 0x801DCED4: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
    // 0x801DCED8: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x801DCEDC: sw          $t9, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r25;
    // 0x801DCEE0: jal         0x801DD3DC
    // 0x801DCEE4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x801DCEE4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x801DCEE8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801DCEEC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x801DCEF0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x801DCEF4: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x801DCEF8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DCEFC: b           L_801DCF08
    // 0x801DCF00: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
        goto L_801DCF08;
    // 0x801DCF00: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
L_801DCF04:
    // 0x801DCF04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCF08:
    // 0x801DCF08: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DCF0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801DCF10: jr          $ra
    // 0x801DCF14: nop

    TRACE_RETURN()
    return;
    // 0x801DCF14: nop

;}
RECOMP_FUNC void func_801EEEA0_61A280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EEEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEEA8: jal         0x801D4408
    // 0x801EEEAC: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_0;
    // 0x801EEEAC: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    after_0:
    // 0x801EEEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EEEB8: jr          $ra
    // 0x801EEEBC: nop

    TRACE_RETURN()
    return;
    // 0x801EEEBC: nop

;}
RECOMP_FUNC void func_801CC10C_5F74EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC10C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CC110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CC114: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC118: lw          $s0, -0x1130($v0)
    ctx->r16 = MEM_W(ctx->r2, -0X1130);
    // 0x801CC11C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CC120: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CC124: addiu       $t6, $s0, 0x140
    ctx->r14 = ADD32(ctx->r16, 0X140);
    // 0x801CC128: addiu       $a2, $s0, 0xA0
    ctx->r6 = ADD32(ctx->r16, 0XA0);
    // 0x801CC12C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801CC130: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CC134: jal         0x801D1F58
    // 0x801CC138: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    func_801D1F58_5FD338(rdram, ctx);
        goto after_0;
    // 0x801CC138: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    after_0:
    // 0x801CC13C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC140: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CC144: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801CC148: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CC14C: lbu         $t7, 0x2C0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2C0);
    // 0x801CC150: bnel        $t7, $zero, L_801CC88C
    if (ctx->r15 != 0) {
        // 0x801CC154: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CC88C;
    }
    goto skip_0;
    // 0x801CC154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801CC158: lw          $t8, -0x112C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X112C);
    // 0x801CC15C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801CC160: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801CC164: bne         $t8, $zero, L_801CC664
    if (ctx->r24 != 0) {
        // 0x801CC168: addiu       $t6, $zero, 0xA00
        ctx->r14 = ADD32(0, 0XA00);
            goto L_801CC664;
    }
    // 0x801CC168: addiu       $t6, $zero, 0xA00
    ctx->r14 = ADD32(0, 0XA00);
    // 0x801CC16C: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x801CC170: beq         $a1, $zero, L_801CC198
    if (ctx->r5 == 0) {
        // 0x801CC174: lui         $t9, 0x801
        ctx->r25 = S32(0X801 << 16);
            goto L_801CC198;
    }
    // 0x801CC174: lui         $t9, 0x801
    ctx->r25 = S32(0X801 << 16);
    // 0x801CC178: addiu       $t9, $t9, -0x70B0
    ctx->r25 = ADD32(ctx->r25, -0X70B0);
    // 0x801CC17C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC180: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x801CC184: sw          $t0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r8;
    // 0x801CC188: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801CC18C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC190: sb          $zero, 0x2C2($t1)
    MEM_B(0X2C2, ctx->r9) = 0;
    // 0x801CC194: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
L_801CC198:
    // 0x801CC198: lw          $a0, 0x1E0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1E0);
    // 0x801CC19C: beql        $a0, $zero, L_801CC1C8
    if (ctx->r4 == 0) {
        // 0x801CC1A0: lui         $at, 0x43DC
        ctx->r1 = S32(0X43DC << 16);
            goto L_801CC1C8;
    }
    goto skip_1;
    // 0x801CC1A0: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    skip_1:
    // 0x801CC1A4: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x801CC1A8: beql        $a1, $zero, L_801CC1C8
    if (ctx->r5 == 0) {
        // 0x801CC1AC: lui         $at, 0x43DC
        ctx->r1 = S32(0X43DC << 16);
            goto L_801CC1C8;
    }
    goto skip_2;
    // 0x801CC1AC: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    skip_2:
    // 0x801CC1B0: jal         0x8000EDB0
    // 0x801CC1B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000EDB0_F9B0(rdram, ctx);
        goto after_1;
    // 0x801CC1B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801CC1B8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801CC1BC: b           L_801CC1D0
    // 0x801CC1C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_801CC1D0;
    // 0x801CC1C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CC1C4: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
L_801CC1C8:
    // 0x801CC1C8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC1CC: nop

L_801CC1D0:
    // 0x801CC1D0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801CC1D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CC1D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801CC1DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CC1E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801CC1E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CC1E8: bc1fl       L_801CC1F8
    if (!c1cs) {
        // 0x801CC1EC: sub.s       $f4, $f2, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_801CC1F8;
    }
    goto skip_3;
    // 0x801CC1EC: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    skip_3:
    // 0x801CC1F0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801CC1F4: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
L_801CC1F8:
    // 0x801CC1F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC1FC: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CC200: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CC204: add.s       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801CC208: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CC20C: nop

    // 0x801CC210: bc1f        L_801CC24C
    if (!c1cs) {
        // 0x801CC214: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CC24C;
    }
    // 0x801CC214: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC218: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC21C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC220: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801CC224: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x801CC228: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CC22C: swc1        $f8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
    // 0x801CC230: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CC234: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801CC238: nop

    // 0x801CC23C: bc1fl       L_801CC250
    if (!c1cs) {
        // 0x801CC240: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801CC250;
    }
    goto skip_4;
    // 0x801CC240: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_4:
    // 0x801CC244: swc1        $f2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f2.u32l;
    // 0x801CC248: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
L_801CC24C:
    // 0x801CC24C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801CC250:
    // 0x801CC250: nop

    // 0x801CC254: bc1f        L_801CC290
    if (!c1cs) {
        // 0x801CC258: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CC290;
    }
    // 0x801CC258: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC25C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC260: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC264: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801CC268: sub.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d - ctx->f4.d;
    // 0x801CC26C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CC270: swc1        $f8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
    // 0x801CC274: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CC278: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801CC27C: nop

    // 0x801CC280: bc1fl       L_801CC294
    if (!c1cs) {
        // 0x801CC284: lui         $at, 0x429C
        ctx->r1 = S32(0X429C << 16);
            goto L_801CC294;
    }
    goto skip_5;
    // 0x801CC284: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    skip_5:
    // 0x801CC288: swc1        $f2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f2.u32l;
    // 0x801CC28C: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
L_801CC290:
    // 0x801CC290: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
L_801CC294:
    // 0x801CC294: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC298: nop

    // 0x801CC29C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CC2A0: nop

    // 0x801CC2A4: bc1fl       L_801CC2B8
    if (!c1cs) {
        // 0x801CC2A8: c.lt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
            goto L_801CC2B8;
    }
    goto skip_6;
    // 0x801CC2A8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    skip_6:
    // 0x801CC2AC: swc1        $f2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f2.u32l;
    // 0x801CC2B0: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CC2B4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
L_801CC2B8:
    // 0x801CC2B8: nop

    // 0x801CC2BC: bc1fl       L_801CC2D0
    if (!c1cs) {
        // 0x801CC2C0: lwc1        $f10, 0x8C($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
            goto L_801CC2D0;
    }
    goto skip_7;
    // 0x801CC2C0: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
    skip_7:
    // 0x801CC2C4: swc1        $f14, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f14.u32l;
    // 0x801CC2C8: lwc1        $f0, 0x88($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CC2CC: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
L_801CC2D0:
    // 0x801CC2D0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x801CC2D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC2D8: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x801CC2DC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CC2E0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x801CC2E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CC2E8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CC2EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CC2F0: nop

    // 0x801CC2F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CC2F8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CC2FC: nop

    // 0x801CC300: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CC304: beq         $t3, $zero, L_801CC350
    if (ctx->r11 == 0) {
        // 0x801CC308: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_801CC350;
    }
    // 0x801CC308: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CC30C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CC310: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CC314: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CC318: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CC31C: nop

    // 0x801CC320: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CC324: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CC328: nop

    // 0x801CC32C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CC330: bne         $t3, $zero, L_801CC348
    if (ctx->r11 != 0) {
        // 0x801CC334: nop
    
            goto L_801CC348;
    }
    // 0x801CC334: nop

    // 0x801CC338: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x801CC33C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC340: b           L_801CC360
    // 0x801CC344: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801CC360;
    // 0x801CC344: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801CC348:
    // 0x801CC348: b           L_801CC360
    // 0x801CC34C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801CC360;
    // 0x801CC34C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_801CC350:
    // 0x801CC350: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x801CC354: nop

    // 0x801CC358: bltz        $t3, L_801CC348
    if (SIGNED(ctx->r11) < 0) {
        // 0x801CC35C: nop
    
            goto L_801CC348;
    }
    // 0x801CC35C: nop

L_801CC360:
    // 0x801CC360: sh          $t3, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r11;
    // 0x801CC364: lbu         $t5, 0xB($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XB);
    // 0x801CC368: lbu         $t4, 0xF($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XF);
    // 0x801CC36C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CC370: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x801CC374: bnel        $t6, $zero, L_801CC434
    if (ctx->r14 != 0) {
        // 0x801CC378: lwc1        $f2, 0x74($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801CC434;
    }
    goto skip_8;
    // 0x801CC378: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    skip_8:
    // 0x801CC37C: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801CC380: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801CC384: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC388: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC38C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CC390: c.lt.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d < ctx->f2.d;
    // 0x801CC394: nop

    // 0x801CC398: bc1fl       L_801CC3E8
    if (!c1cs) {
        // 0x801CC39C: c.lt.d      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
            goto L_801CC3E8;
    }
    goto skip_9;
    // 0x801CC39C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    skip_9:
    // 0x801CC3A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CC3A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CC3A8: nop

    // 0x801CC3AC: add.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d + ctx->f6.d;
    // 0x801CC3B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CC3B4: swc1        $f10, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f10.u32l;
    // 0x801CC3B8: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801CC3BC: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC3C0: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x801CC3C4: nop

    // 0x801CC3C8: bc1fl       L_801CC3E8
    if (!c1cs) {
        // 0x801CC3CC: c.lt.d      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
            goto L_801CC3E8;
    }
    goto skip_10;
    // 0x801CC3CC: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    skip_10:
    // 0x801CC3D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CC3D4: nop

    // 0x801CC3D8: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
    // 0x801CC3DC: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801CC3E0: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC3E4: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
L_801CC3E8:
    // 0x801CC3E8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CC3EC: bc1fl       L_801CC434
    if (!c1cs) {
        // 0x801CC3F0: lwc1        $f2, 0x74($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801CC434;
    }
    goto skip_11;
    // 0x801CC3F0: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    skip_11:
    // 0x801CC3F4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CC3F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CC3FC: nop

    // 0x801CC400: sub.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f0.d - ctx->f10.d;
    // 0x801CC404: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC408: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
    // 0x801CC40C: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801CC410: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC414: c.le.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d <= ctx->f2.d;
    // 0x801CC418: nop

    // 0x801CC41C: bc1fl       L_801CC434
    if (!c1cs) {
        // 0x801CC420: lwc1        $f2, 0x74($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801CC434;
    }
    goto skip_12;
    // 0x801CC420: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    skip_12:
    // 0x801CC424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC428: nop

    // 0x801CC42C: swc1        $f4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f4.u32l;
    // 0x801CC430: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
L_801CC434:
    // 0x801CC434: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CC438: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801CC43C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801CC440: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x801CC444: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CC448: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CC44C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC450: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC454: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC458: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x801CC45C: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x801CC460: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC464: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC468: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x801CC46C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x801CC470: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801CC474: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC478: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x801CC47C: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC480: add.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801CC484: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801CC488: ldc1        $f4, -0x3150($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3150);
    // 0x801CC48C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801CC490: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801CC494: nop

    // 0x801CC498: bc1f        L_801CC4B4
    if (!c1cs) {
        // 0x801CC49C: nop
    
            goto L_801CC4B4;
    }
    // 0x801CC49C: nop

    // 0x801CC4A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC4A4: nop

    // 0x801CC4A8: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801CC4AC: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC4B0: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_801CC4B4:
    // 0x801CC4B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC4B8: ldc1        $f10, -0x3148($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3148);
    // 0x801CC4BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC4C0: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CC4C4: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x801CC4C8: nop

    // 0x801CC4CC: bc1fl       L_801CC4E4
    if (!c1cs) {
        // 0x801CC4D0: lwc1        $f6, 0x78($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
            goto L_801CC4E4;
    }
    goto skip_13;
    // 0x801CC4D0: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    skip_13:
    // 0x801CC4D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC4D8: nop

    // 0x801CC4DC: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801CC4E0: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
L_801CC4E4:
    // 0x801CC4E4: lui         $at, 0x4033
    ctx->r1 = S32(0X4033 << 16);
    // 0x801CC4E8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC4EC: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x801CC4F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CC4F4: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x801CC4F8: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x801CC4FC: bc1fl       L_801CC51C
    if (!c1cs) {
        // 0x801CC500: lui         $at, 0xC030
        ctx->r1 = S32(0XC030 << 16);
            goto L_801CC51C;
    }
    goto skip_14;
    // 0x801CC500: lui         $at, 0xC030
    ctx->r1 = S32(0XC030 << 16);
    skip_14:
    // 0x801CC504: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CC508: nop

    // 0x801CC50C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x801CC510: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC514: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC518: lui         $at, 0xC030
    ctx->r1 = S32(0XC030 << 16);
L_801CC51C:
    // 0x801CC51C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CC520: lui         $at, 0xC180
    ctx->r1 = S32(0XC180 << 16);
    // 0x801CC524: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801CC528: nop

    // 0x801CC52C: bc1f        L_801CC548
    if (!c1cs) {
        // 0x801CC530: nop
    
            goto L_801CC548;
    }
    // 0x801CC530: nop

    // 0x801CC534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CC538: nop

    // 0x801CC53C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801CC540: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC544: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
L_801CC548:
    // 0x801CC548: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC54C: ldc1        $f4, -0x3140($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3140);
    // 0x801CC550: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC554: ldc1        $f8, -0x3138($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3138);
    // 0x801CC558: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x801CC55C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CC560: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801CC564: jal         0x800417F0
    // 0x801CC568: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x801CC568: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x801CC56C: lui         $at, 0xC059
    ctx->r1 = S32(0XC059 << 16);
    // 0x801CC570: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CC574: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CC578: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801CC57C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC580: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CC584: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC588: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC58C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CC590: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x801CC594: ldc1        $f8, -0x3130($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3130);
    // 0x801CC598: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC59C: ldc1        $f4, -0x3128($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3128);
    // 0x801CC5A0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CC5A4: div.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f4.d);
    // 0x801CC5A8: jal         0x800419B0
    // 0x801CC5AC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x801CC5AC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x801CC5B0: lui         $at, 0xC059
    ctx->r1 = S32(0XC059 << 16);
    // 0x801CC5B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CC5B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CC5BC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CC5C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC5C4: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CC5C8: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC5CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC5D0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC5D4: swc1        $f6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f6.u32l;
    // 0x801CC5D8: ldc1        $f4, -0x3120($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3120);
    // 0x801CC5DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC5E0: ldc1        $f8, -0x3118($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3118);
    // 0x801CC5E4: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801CC5E8: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801CC5EC: jal         0x800417F0
    // 0x801CC5F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x801CC5F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x801CC5F4: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC5F8: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC5FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC600: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CC604: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC608: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
    // 0x801CC60C: ldc1        $f4, -0x3110($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3110);
    // 0x801CC610: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC614: ldc1        $f8, -0x3108($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3108);
    // 0x801CC618: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801CC61C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801CC620: jal         0x800419B0
    // 0x801CC624: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x801CC624: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x801CC628: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC62C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801CC630: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801CC634: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CC638: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC63C: swc1        $f6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f6.u32l;
    // 0x801CC640: swc1        $f8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f8.u32l;
    // 0x801CC644: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801CC648: swc1        $f10, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f10.u32l;
    // 0x801CC64C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC650: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    // 0x801CC654: swc1        $f2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f2.u32l;
    // 0x801CC658: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x801CC65C: b           L_801CC888
    // 0x801CC660: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
        goto L_801CC888;
    // 0x801CC660: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
L_801CC664:
    // 0x801CC664: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801CC668: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801CC66C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801CC670: addu        $v0, $t7, $a3
    ctx->r2 = ADD32(ctx->r15, ctx->r7);
    // 0x801CC674: lhu         $v1, 0x30C2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30C2);
    // 0x801CC678: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CC67C: addiu       $a0, $a0, -0x1128
    ctx->r4 = ADD32(ctx->r4, -0X1128);
    // 0x801CC680: andi        $t8, $v1, 0x800
    ctx->r24 = ctx->r3 & 0X800;
    // 0x801CC684: beq         $t8, $zero, L_801CC6B4
    if (ctx->r24 == 0) {
        // 0x801CC688: nop
    
            goto L_801CC6B4;
    }
    // 0x801CC688: nop

    // 0x801CC68C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x801CC690: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC694: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CC698: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801CC69C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CC6A0: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CC6A4: sub.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d - ctx->f10.d;
    // 0x801CC6A8: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x801CC6AC: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x801CC6B0: lhu         $v1, 0x30C2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30C2);
L_801CC6B4:
    // 0x801CC6B4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CC6B8: andi        $t1, $v1, 0x400
    ctx->r9 = ctx->r3 & 0X400;
    // 0x801CC6BC: beq         $t1, $zero, L_801CC6E8
    if (ctx->r9 == 0) {
        // 0x801CC6C0: addiu       $a0, $a0, -0x1128
        ctx->r4 = ADD32(ctx->r4, -0X1128);
            goto L_801CC6E8;
    }
    // 0x801CC6C0: addiu       $a0, $a0, -0x1128
    ctx->r4 = ADD32(ctx->r4, -0X1128);
    // 0x801CC6C4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x801CC6C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC6CC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC6D0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801CC6D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC6D8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801CC6DC: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x801CC6E0: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801CC6E4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_801CC6E8:
    // 0x801CC6E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CC6EC: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x801CC6F0: slti        $at, $v0, 0x7D1
    ctx->r1 = SIGNED(ctx->r2) < 0X7D1 ? 1 : 0;
    // 0x801CC6F4: bnel        $at, $zero, L_801CC708
    if (ctx->r1 != 0) {
        // 0x801CC6F8: slti        $at, $v0, 0x64
        ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
            goto L_801CC708;
    }
    goto skip_15;
    // 0x801CC6F8: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    skip_15:
    // 0x801CC6FC: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x801CC700: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x801CC704: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
L_801CC708:
    // 0x801CC708: beql        $at, $zero, L_801CC718
    if (ctx->r1 == 0) {
        // 0x801CC70C: sh          $t6, 0x1A($a2)
        MEM_H(0X1A, ctx->r6) = ctx->r14;
            goto L_801CC718;
    }
    goto skip_16;
    // 0x801CC70C: sh          $t6, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r14;
    skip_16:
    // 0x801CC710: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801CC714: sh          $t6, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r14;
L_801CC718:
    // 0x801CC718: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801CC71C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801CC720: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CC724: addu        $v0, $t7, $a3
    ctx->r2 = ADD32(ctx->r15, ctx->r7);
    // 0x801CC728: lh          $t9, 0x30C8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X30C8);
    // 0x801CC72C: lh          $t8, 0x30C6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X30C6);
    // 0x801CC730: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC734: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801CC738: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801CC73C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CC740: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC744: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CC748: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC74C: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801CC750: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801CC754: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801CC758: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x801CC75C: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801CC760: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC764: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801CC768: ldc1        $f6, -0x3100($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3100);
    // 0x801CC76C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801CC770: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC774: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CC778: ldc1        $f10, -0x30F8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X30F8);
    // 0x801CC77C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CC780: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801CC784: jal         0x800417F0
    // 0x801CC788: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    __sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x801CC788: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x801CC78C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CC790: addiu       $a0, $a0, -0x1128
    ctx->r4 = ADD32(ctx->r4, -0X1128);
    // 0x801CC794: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x801CC798: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801CC79C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC7A0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x801CC7A4: nop

    // 0x801CC7A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CC7AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC7B0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801CC7B4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x801CC7B8: ldc1        $f8, -0x30F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X30F0);
    // 0x801CC7BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC7C0: ldc1        $f4, -0x30E8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X30E8);
    // 0x801CC7C4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CC7C8: div.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f4.d);
    // 0x801CC7CC: jal         0x800419B0
    // 0x801CC7D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    __cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x801CC7D0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_7:
    // 0x801CC7D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CC7D8: addiu       $a0, $a0, -0x1128
    ctx->r4 = ADD32(ctx->r4, -0X1128);
    // 0x801CC7DC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x801CC7E0: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC7E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC7E8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801CC7EC: nop

    // 0x801CC7F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CC7F4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CC7F8: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CC7FC: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x801CC800: ldc1        $f10, -0x30E0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X30E0);
    // 0x801CC804: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC808: ldc1        $f6, -0x30D8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X30D8);
    // 0x801CC80C: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CC810: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801CC814: jal         0x800417F0
    // 0x801CC818: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x801CC818: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_8:
    // 0x801CC81C: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC820: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801CC824: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC828: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CC82C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CC830: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x801CC834: ldc1        $f10, -0x30D0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X30D0);
    // 0x801CC838: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC83C: ldc1        $f6, -0x30C8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X30C8);
    // 0x801CC840: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CC844: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801CC848: jal         0x800419B0
    // 0x801CC84C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __cosf_recomp(rdram, ctx);
        goto after_9;
    // 0x801CC84C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x801CC850: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC854: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801CC858: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC85C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CC860: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x801CC864: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x801CC868: swc1        $f2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f2.u32l;
    // 0x801CC86C: swc1        $f2, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f2.u32l;
    // 0x801CC870: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801CC874: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x801CC878: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801CC87C: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x801CC880: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CC884: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
L_801CC888:
    // 0x801CC888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CC88C:
    // 0x801CC88C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CC890: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CC894: jr          $ra
    // 0x801CC898: nop

    TRACE_RETURN()
    return;
    // 0x801CC898: nop

;}
RECOMP_FUNC void func_801D326C_5FE64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D326C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3270: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D3274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3278: bne         $a0, $zero, L_801D328C
    if (ctx->r4 != 0) {
        // 0x801D327C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801D328C;
    }
    // 0x801D327C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D3280: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3284: b           L_801D329C
    // 0x801D3288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D329C;
    // 0x801D3288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D328C:
    // 0x801D328C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D3290: jal         0x801D3018
    // 0x801D3294: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801D3294: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    after_0:
    // 0x801D3298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D329C:
    // 0x801D329C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D32A0: jr          $ra
    // 0x801D32A4: nop

    TRACE_RETURN()
    return;
    // 0x801D32A4: nop

;}
RECOMP_FUNC void func_80207FFC_6333DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207FFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80208000: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80208004: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80208008: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8020800C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80208010: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80208014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80208018: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x8020801C: bne         $v0, $at, L_80208038
    if (ctx->r2 != ctx->r1) {
        // 0x80208020: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_80208038;
    }
    // 0x80208020: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x80208024: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80208028: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x8020802C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80208030: sb          $t8, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = ctx->r24;
    // 0x80208034: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_80208038:
    // 0x80208038: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8020803C: bne         $v0, $at, L_80208054
    if (ctx->r2 != ctx->r1) {
        // 0x80208040: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_80208054;
    }
    // 0x80208040: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80208044: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x80208048: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8020804C: sb          $t0, 0x2C1($t1)
    MEM_B(0X2C1, ctx->r9) = ctx->r8;
    // 0x80208050: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_80208054:
    // 0x80208054: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80208058: bne         $at, $zero, L_80208098
    if (ctx->r1 != 0) {
        // 0x8020805C: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80208098;
    }
    // 0x8020805C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80208060: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x80208064: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80208068: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020806C: addiu       $v0, $t2, 0x4
    ctx->r2 = ADD32(ctx->r10, 0X4);
    // 0x80208070: sltiu       $at, $v0, 0xFF
    ctx->r1 = ctx->r2 < 0XFF ? 1 : 0;
    // 0x80208074: bne         $at, $zero, L_80208084
    if (ctx->r1 != 0) {
        // 0x80208078: sw          $v0, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r2;
            goto L_80208084;
    }
    // 0x80208078: sw          $v0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r2;
    // 0x8020807C: b           L_80208088
    // 0x80208080: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_80208088;
    // 0x80208080: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_80208084:
    // 0x80208084: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80208088:
    // 0x80208088: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8020808C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80208090: jal         0x801D15BC
    // 0x80208094: andi        $a3, $v1, 0xFFFF
    ctx->r7 = ctx->r3 & 0XFFFF;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x80208094: andi        $a3, $v1, 0xFFFF
    ctx->r7 = ctx->r3 & 0XFFFF;
    after_0:
L_80208098:
    // 0x80208098: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x8020809C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802080A0: sltiu       $at, $t5, 0x227
    ctx->r1 = ctx->r13 < 0X227 ? 1 : 0;
    // 0x802080A4: bnel        $at, $zero, L_8020813C
    if (ctx->r1 != 0) {
        // 0x802080A8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8020813C;
    }
    goto skip_0;
    // 0x802080A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802080AC: jal         0x80037C9C
    // 0x802080B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x802080B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802080B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802080B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802080BC: jal         0x80037C20
    // 0x802080C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x802080C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802080C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802080C8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x802080CC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x802080D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802080D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802080D8: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x802080DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802080E0: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802080E4: bne         $t7, $at, L_802080FC
    if (ctx->r15 != ctx->r1) {
        // 0x802080E8: nop
    
            goto L_802080FC;
    }
    // 0x802080E8: nop

    // 0x802080EC: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x802080F0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x802080F4: b           L_80208108
    // 0x802080F8: sb          $t8, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = ctx->r24;
        goto L_80208108;
    // 0x802080F8: sb          $t8, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = ctx->r24;
L_802080FC:
    // 0x802080FC: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x80208100: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80208104: sb          $t0, 0x2C1($t1)
    MEM_B(0X2C1, ctx->r9) = ctx->r8;
L_80208108:
    // 0x80208108: jal         0x80034ED4
    // 0x8020810C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x8020810C: nop

    after_3:
    // 0x80208110: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80208114: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x80208118: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8020811C: addiu       $a1, $a1, -0x3F94
    ctx->r5 = ADD32(ctx->r5, -0X3F94);
    // 0x80208120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80208124: jal         0x80034E08
    // 0x80208128: lw          $a0, 0x1BC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1BC);
    func_80034E08_35A08(rdram, ctx);
        goto after_4;
    // 0x80208128: lw          $a0, 0x1BC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1BC);
    after_4:
    // 0x8020812C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80208130: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x80208134: sw          $v0, 0x1D4($t3)
    MEM_W(0X1D4, ctx->r11) = ctx->r2;
    // 0x80208138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8020813C:
    // 0x8020813C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80208140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80208144: jr          $ra
    // 0x80208148: nop

    TRACE_RETURN()
    return;
    // 0x80208148: nop

;}
RECOMP_FUNC void func_801FD46C_62884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD46C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FD470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FD474: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FD478: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FD47C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FD480: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FD484: jal         0x801D3018
    // 0x801FD488: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FD488: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FD48C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FD490: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FD494: lwc1        $f14, 0x10($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FD498: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FD49C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801FD4A0: jal         0x8000E28C
    // 0x801FD4A4: nop

    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x801FD4A4: nop

    after_1:
    // 0x801FD4A8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801FD4AC: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x801FD4B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD4B4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801FD4B8: addiu       $a2, $v1, 0x90
    ctx->r6 = ADD32(ctx->r3, 0X90);
    // 0x801FD4BC: jal         0x8000E630
    // 0x801FD4C0: addiu       $a3, $v1, 0x94
    ctx->r7 = ADD32(ctx->r3, 0X94);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801FD4C0: addiu       $a3, $v1, 0x94
    ctx->r7 = ADD32(ctx->r3, 0X94);
    after_2:
    // 0x801FD4C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FD4C8: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801FD4CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801FD4D0: jal         0x8000E9F4
    // 0x801FD4D4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_3;
    // 0x801FD4D4: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_3:
    // 0x801FD4D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD4DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801FD4E0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801FD4E4: jal         0x8003521C
    // 0x801FD4E8: addiu       $a0, $a0, -0x2B00
    ctx->r4 = ADD32(ctx->r4, -0X2B00);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FD4E8: addiu       $a0, $a0, -0x2B00
    ctx->r4 = ADD32(ctx->r4, -0X2B00);
    after_4:
    // 0x801FD4EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD4F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FD4F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FD4F8: jr          $ra
    // 0x801FD4FC: nop

    TRACE_RETURN()
    return;
    // 0x801FD4FC: nop

;}
RECOMP_FUNC void func_801FC3FC_6277DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FC400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FC404: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FC408: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801FC40C: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x801FC410: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x801FC414: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801FC418: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x801FC41C: jal         0x801FFDFC
    // 0x801FC420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_0;
    // 0x801FC420: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801FC424: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC428: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FC42C: jal         0x801D31CC
    // 0x801FC430: addiu       $a1, $a1, -0x4C10
    ctx->r5 = ADD32(ctx->r5, -0X4C10);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801FC430: addiu       $a1, $a1, -0x4C10
    ctx->r5 = ADD32(ctx->r5, -0X4C10);
    after_1:
    // 0x801FC434: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FC438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FC43C: jal         0x8003522C
    // 0x801FC440: addiu       $a1, $a1, -0x4294
    ctx->r5 = ADD32(ctx->r5, -0X4294);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801FC440: addiu       $a1, $a1, -0x4294
    ctx->r5 = ADD32(ctx->r5, -0X4294);
    after_2:
    // 0x801FC444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FC448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FC44C: jr          $ra
    // 0x801FC450: nop

    TRACE_RETURN()
    return;
    // 0x801FC450: nop

;}
RECOMP_FUNC void func_801ED5D8_6189B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED5E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED5E4: jal         0x8003767C
    // 0x801ED5E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003767C_3827C(rdram, ctx);
        goto after_0;
    // 0x801ED5E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801ED5EC: beq         $v0, $zero, L_801ED630
    if (ctx->r2 == 0) {
        // 0x801ED5F0: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_801ED630;
    }
    // 0x801ED5F0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801ED5F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801ED5F8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801ED5FC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801ED600: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801ED604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801ED608: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x801ED60C: bnel        $t7, $at, L_801ED634
    if (ctx->r15 != ctx->r1) {
        // 0x801ED610: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801ED634;
    }
    goto skip_0;
    // 0x801ED610: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x801ED614: jal         0x80038BC8
    // 0x801ED618: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801ED618: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x801ED61C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED620: jal         0x8003521C
    // 0x801ED624: addiu       $a0, $a0, -0x2618
    ctx->r4 = ADD32(ctx->r4, -0X2618);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801ED624: addiu       $a0, $a0, -0x2618
    ctx->r4 = ADD32(ctx->r4, -0X2618);
    after_2:
    // 0x801ED628: b           L_801ED6B8
    // 0x801ED62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801ED6B8;
    // 0x801ED62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED630:
    // 0x801ED630: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801ED634:
    // 0x801ED634: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED638: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801ED63C: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x801ED640: jal         0x801D5064
    // 0x801ED644: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x801ED644: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x801ED648: beq         $v0, $zero, L_801ED6AC
    if (ctx->r2 == 0) {
        // 0x801ED64C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_801ED6AC;
    }
    // 0x801ED64C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801ED650: lw          $t8, 0x7C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X7C);
    // 0x801ED654: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801ED658: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801ED65C: bne         $t9, $zero, L_801ED6B4
    if (ctx->r25 != 0) {
        // 0x801ED660: sw          $t9, 0x7C($a3)
        MEM_W(0X7C, ctx->r7) = ctx->r25;
            goto L_801ED6B4;
    }
    // 0x801ED660: sw          $t9, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r25;
    // 0x801ED664: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801ED668: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801ED66C: addiu       $a1, $a1, 0x4978
    ctx->r5 = ADD32(ctx->r5, 0X4978);
    // 0x801ED670: lw          $a0, 0x1D8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D8);
    // 0x801ED674: jal         0x8003522C
    // 0x801ED678: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801ED678: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_4:
    // 0x801ED67C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801ED680: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801ED684: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801ED688: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801ED68C: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x801ED690: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED694: sb          $t2, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = ctx->r10;
    // 0x801ED698: addiu       $a0, $a0, -0x293C
    ctx->r4 = ADD32(ctx->r4, -0X293C);
    // 0x801ED69C: jal         0x8003521C
    // 0x801ED6A0: sw          $t4, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801ED6A0: sw          $t4, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r12;
    after_5:
    // 0x801ED6A4: b           L_801ED6B8
    // 0x801ED6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801ED6B8;
    // 0x801ED6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED6AC:
    // 0x801ED6AC: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x801ED6B0: sw          $t5, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r13;
L_801ED6B4:
    // 0x801ED6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED6B8:
    // 0x801ED6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED6BC: jr          $ra
    // 0x801ED6C0: nop

    TRACE_RETURN()
    return;
    // 0x801ED6C0: nop

;}
RECOMP_FUNC void func_8020396C_62ED4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020396C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80203970: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203974: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80203978: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8020397C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80203980: jal         0x801D614C
    // 0x80203984: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x80203984: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x80203988: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x8020398C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80203990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80203994: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80203998: bgez        $v0, L_80203A38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8020399C: sw          $t6, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->r14;
            goto L_80203A38;
    }
    // 0x8020399C: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x802039A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802039A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802039A8: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x802039AC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802039B0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x802039B4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x802039B8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802039BC: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x802039C0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802039C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802039C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802039CC: jal         0x8000E808
    // 0x802039D0: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x802039D0: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x802039D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802039D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802039DC: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802039E0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802039E4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x802039E8: jal         0x8000E39C
    // 0x802039EC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x802039EC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_2:
    // 0x802039F0: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802039F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802039F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802039FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80203A00: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80203A04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203A08: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80203A0C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80203A10: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80203A14: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80203A18: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80203A1C: jal         0x801E006C
    // 0x80203A20: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x80203A20: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80203A24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80203A28: jal         0x8003521C
    // 0x80203A2C: addiu       $a0, $a0, 0x3A54
    ctx->r4 = ADD32(ctx->r4, 0X3A54);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80203A2C: addiu       $a0, $a0, 0x3A54
    ctx->r4 = ADD32(ctx->r4, 0X3A54);
    after_4:
    // 0x80203A30: b           L_80203A44
    // 0x80203A34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80203A44;
    // 0x80203A34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203A38:
    // 0x80203A38: jal         0x80203AE4
    // 0x80203A3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80203AE4_62EEC4(rdram, ctx);
        goto after_5;
    // 0x80203A3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80203A40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203A44:
    // 0x80203A44: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80203A48: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80203A4C: jr          $ra
    // 0x80203A50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80203A50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801FC0F0_6274D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FC0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FC0F8: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801FC0FC: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801FC100: beq         $at, $zero, L_801FC11C
    if (ctx->r1 == 0) {
        // 0x801FC104: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801FC11C;
    }
    // 0x801FC104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801FC108: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FC10C: addu        $at, $at, $t6
    gpr jr_addend_801FC114 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FC110: lw          $t6, -0x15F4($at)
    ctx->r14 = ADD32(ctx->r1, -0X15F4);
    // 0x801FC114: jr          $t6
    // 0x801FC118: nop

    switch (jr_addend_801FC114 >> 2) {
        case 0: goto L_801FC11C; break;
        case 1: goto L_801FC130; break;
        case 2: goto L_801FC144; break;
        case 3: goto L_801FC158; break;
        case 4: goto L_801FC16C; break;
        case 5: goto L_801FC180; break;
        case 6: goto L_801FC194; break;
        case 7: goto L_801FC1A8; break;
        case 8: goto L_801FC1BC; break;
        case 9: goto L_801FC1D0; break;
        case 10: goto L_801FC1E4; break;
        default: switch_error(__func__, 0x801FC114, 0x8020EA0C);
    }
    // 0x801FC118: nop

L_801FC11C:
    // 0x801FC11C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC120: jal         0x801FC328
    // 0x801FC124: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801FC328_627708(rdram, ctx);
        goto after_0;
    // 0x801FC124: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_0:
    // 0x801FC128: b           L_801FC200
    // 0x801FC12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC130:
    // 0x801FC130: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC134: jal         0x801FC328
    // 0x801FC138: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801FC328_627708(rdram, ctx);
        goto after_1;
    // 0x801FC138: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x801FC13C: b           L_801FC200
    // 0x801FC140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC144:
    // 0x801FC144: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC148: jal         0x801FC328
    // 0x801FC14C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_2;
    // 0x801FC14C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x801FC150: b           L_801FC200
    // 0x801FC154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC158:
    // 0x801FC158: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801FC15C: jal         0x801FC328
    // 0x801FC160: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_3;
    // 0x801FC160: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_3:
    // 0x801FC164: b           L_801FC200
    // 0x801FC168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC16C:
    // 0x801FC16C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC170: jal         0x801FC328
    // 0x801FC174: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_4;
    // 0x801FC174: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_4:
    // 0x801FC178: b           L_801FC200
    // 0x801FC17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC180:
    // 0x801FC180: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC184: jal         0x801FC328
    // 0x801FC188: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_5;
    // 0x801FC188: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
    // 0x801FC18C: b           L_801FC200
    // 0x801FC190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC194:
    // 0x801FC194: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC198: jal         0x801FC328
    // 0x801FC19C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801FC328_627708(rdram, ctx);
        goto after_6;
    // 0x801FC19C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_6:
    // 0x801FC1A0: b           L_801FC200
    // 0x801FC1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC1A8:
    // 0x801FC1A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801FC1AC: jal         0x801FC328
    // 0x801FC1B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801FC328_627708(rdram, ctx);
        goto after_7;
    // 0x801FC1B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_7:
    // 0x801FC1B4: b           L_801FC200
    // 0x801FC1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC1B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC1BC:
    // 0x801FC1BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC1C0: jal         0x801FC328
    // 0x801FC1C4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_8;
    // 0x801FC1C4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_8:
    // 0x801FC1C8: b           L_801FC200
    // 0x801FC1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC1D0:
    // 0x801FC1D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FC1D4: jal         0x801FC328
    // 0x801FC1D8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_9;
    // 0x801FC1D8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_9:
    // 0x801FC1DC: b           L_801FC200
    // 0x801FC1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC200;
    // 0x801FC1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC1E4:
    // 0x801FC1E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC1E8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x801FC1EC: jal         0x801FC328
    // 0x801FC1F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801FC328_627708(rdram, ctx);
        goto after_10;
    // 0x801FC1F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801FC1F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FC1F8: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FC1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC200:
    // 0x801FC200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FC204: jr          $ra
    // 0x801FC208: nop

    TRACE_RETURN()
    return;
    // 0x801FC208: nop

;}
RECOMP_FUNC void func_801F12F8_61C6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F12F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F12FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1300: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F1304: jal         0x801F7074
    // 0x801F1308: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F1308: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F130C: jal         0x801F76D0
    // 0x801F1310: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F1310: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F1314: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F1318: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x801F131C: jal         0x801D31CC
    // 0x801F1320: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F1320: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F1324: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F1328: jal         0x8003521C
    // 0x801F132C: addiu       $a0, $a0, 0x1340
    ctx->r4 = ADD32(ctx->r4, 0X1340);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F132C: addiu       $a0, $a0, 0x1340
    ctx->r4 = ADD32(ctx->r4, 0X1340);
    after_3:
    // 0x801F1330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1338: jr          $ra
    // 0x801F133C: nop

    TRACE_RETURN()
    return;
    // 0x801F133C: nop

;}
RECOMP_FUNC void func_801DF868_60AC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF868: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801DF86C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801DF870: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801DF874: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801DF878: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801DF87C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801DF880: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DF884: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801DF888: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DF88C: addiu       $a2, $a2, 0x1C50
    ctx->r6 = ADD32(ctx->r6, 0X1C50);
    // 0x801DF890: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DF894: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DF898: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801DF89C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801DF8A0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801DF8A4: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801DF8A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801DF8AC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801DF8B0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801DF8B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DF8B8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801DF8BC: addiu       $a1, $a1, -0x6A0
    ctx->r5 = ADD32(ctx->r5, -0X6A0);
    // 0x801DF8C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DF8C4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801DF8C8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801DF8CC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801DF8D0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801DF8D4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801DF8D8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DF8DC: jal         0x800357BC
    // 0x801DF8E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800357BC_363BC(rdram, ctx);
        goto after_0;
    // 0x801DF8E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DF8E4: beq         $v0, $zero, L_801DF950
    if (ctx->r2 == 0) {
        // 0x801DF8E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DF950;
    }
    // 0x801DF8E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DF8EC: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x801DF8F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801DF8F4: sw          $t0, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r8;
    // 0x801DF8F8: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801DF8FC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DF900: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
    // 0x801DF904: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x801DF908: addiu       $a1, $a1, -0x6040
    ctx->r5 = ADD32(ctx->r5, -0X6040);
    // 0x801DF90C: jal         0x801D2EE4
    // 0x801DF910: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801DF910: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_1:
    // 0x801DF914: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DF918: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801DF91C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DF920: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801DF924: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801DF928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DF92C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DF930: jal         0x8000DF10
    // 0x801DF934: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801DF934: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x801DF938: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF93C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x801DF940: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x801DF944: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DF948: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x801DF94C: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
L_801DF950:
    // 0x801DF950: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801DF954: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801DF958: jr          $ra
    // 0x801DF95C: nop

    TRACE_RETURN()
    return;
    // 0x801DF95C: nop

;}
RECOMP_FUNC void func_80207CC4_6330A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207CCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207CD0: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80207CD4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80207CD8: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80207CDC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207CE0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80207CE4: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80207CE8: bgtz        $t7, L_80207D74
    if (SIGNED(ctx->r15) > 0) {
        // 0x80207CEC: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_80207D74;
    }
    // 0x80207CEC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80207CF0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80207CF4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80207CF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207CFC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80207D00: jal         0x801D4EB8
    // 0x80207D04: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    func_801D4EB8_600298(rdram, ctx);
        goto after_0;
    // 0x80207D04: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    after_0:
    // 0x80207D08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80207D0C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80207D10: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207D14: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80207D18: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80207D1C: jal         0x801D4D0C
    // 0x80207D20: nop

    func_801D4D0C_6000EC(rdram, ctx);
        goto after_1;
    // 0x80207D20: nop

    after_1:
    // 0x80207D24: beq         $v0, $zero, L_80207D74
    if (ctx->r2 == 0) {
        // 0x80207D28: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80207D74;
    }
    // 0x80207D28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80207D2C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207D30: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80207D34: jal         0x801D5064
    // 0x80207D38: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_801D5064_600444(rdram, ctx);
        goto after_2;
    // 0x80207D38: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_2:
    // 0x80207D3C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80207D40: beq         $v0, $zero, L_80207D74
    if (ctx->r2 == 0) {
        // 0x80207D44: addiu       $v1, $v1, -0x1130
        ctx->r3 = ADD32(ctx->r3, -0X1130);
            goto L_80207D74;
    }
    // 0x80207D44: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80207D48: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80207D4C: sb          $zero, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = 0;
    // 0x80207D50: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80207D54: sb          $zero, 0x2C2($t0)
    MEM_B(0X2C2, ctx->r8) = 0;
    // 0x80207D58: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80207D5C: sb          $zero, 0x2C3($t1)
    MEM_B(0X2C3, ctx->r9) = 0;
    // 0x80207D60: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80207D64: jal         0x80200684
    // 0x80207D68: lw          $a0, 0x1D8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1D8);
    func_80200684_62BA64(rdram, ctx);
        goto after_3;
    // 0x80207D68: lw          $a0, 0x1D8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1D8);
    after_3:
    // 0x80207D6C: jal         0x80034ED4
    // 0x80207D70: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x80207D70: nop

    after_4:
L_80207D74:
    // 0x80207D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207D7C: jr          $ra
    // 0x80207D80: nop

    TRACE_RETURN()
    return;
    // 0x80207D80: nop

;}
RECOMP_FUNC void func_801F0414_61B7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0418: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F041C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0420: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F0424: jal         0x801D3018
    // 0x801F0428: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F0428: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F042C: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x801F0430: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F0434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0438: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F043C: jal         0x801F72B4
    // 0x801F0440: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_801F72B4_622694(rdram, ctx);
        goto after_1;
    // 0x801F0440: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_1:
    // 0x801F0444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0448: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F044C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F0450: bgtz        $t7, L_801F046C
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F0454: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801F046C;
    }
    // 0x801F0454: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801F0458: jal         0x801F703C
    // 0x801F045C: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_2;
    // 0x801F045C: nop

    after_2:
    // 0x801F0460: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0464: jal         0x8003521C
    // 0x801F0468: addiu       $a0, $a0, 0xAD4
    ctx->r4 = ADD32(ctx->r4, 0XAD4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F0468: addiu       $a0, $a0, 0xAD4
    ctx->r4 = ADD32(ctx->r4, 0XAD4);
    after_3:
L_801F046C:
    // 0x801F046C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0474: jr          $ra
    // 0x801F0478: nop

    TRACE_RETURN()
    return;
    // 0x801F0478: nop

;}
RECOMP_FUNC void func_801D8E08_6041E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8E08: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8E0C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8E10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D8E14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D8E18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D8E1C: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801D8E20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8E24: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    // 0x801D8E28: bnel        $a1, $t6, L_801D8E98
    if (ctx->r5 != ctx->r14) {
        // 0x801D8E2C: lw          $t8, 0x64($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X64);
            goto L_801D8E98;
    }
    goto skip_0;
    // 0x801D8E2C: lw          $t8, 0x64($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X64);
    skip_0:
    // 0x801D8E30: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x801D8E34: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8E38: lw          $a3, 0xD4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8E3C: addiu       $a1, $v0, 0xA0
    ctx->r5 = ADD32(ctx->r2, 0XA0);
    // 0x801D8E40: jal         0x8000F280
    // 0x801D8E44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F280_FE80(rdram, ctx);
        goto after_0;
    // 0x801D8E44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D8E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8E4C: jal         0x80037C9C
    // 0x801D8E50: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x801D8E50: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x801D8E54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8E58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D8E5C: jal         0x80037C20
    // 0x801D8E60: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x801D8E60: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x801D8E64: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D8E68: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801D8E6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8E70: lwc1        $f6, -0x2708($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2708);
    // 0x801D8E74: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8E78: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8E7C: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801D8E80: lw          $a0, 0x1C8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C8);
    // 0x801D8E84: jal         0x801DF868
    // 0x801D8E88: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_3;
    // 0x801D8E88: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801D8E8C: b           L_801D8F08
    // 0x801D8E90: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
        goto L_801D8F08;
    // 0x801D8E90: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x801D8E94: lw          $t8, 0x64($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X64);
L_801D8E98:
    // 0x801D8E98: addiu       $a1, $v0, 0xA0
    ctx->r5 = ADD32(ctx->r2, 0XA0);
    // 0x801D8E9C: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    // 0x801D8EA0: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x801D8EA4: beql        $t9, $zero, L_801D8EC4
    if (ctx->r25 == 0) {
        // 0x801D8EA8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801D8EC4;
    }
    goto skip_1;
    // 0x801D8EA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_1:
    // 0x801D8EAC: lwc1        $f8, 0xD8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x801D8EB0: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8EB4: lw          $a3, 0xD4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8EB8: jal         0x8000F280
    // 0x801D8EBC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000F280_FE80(rdram, ctx);
        goto after_4;
    // 0x801D8EBC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801D8EC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801D8EC4:
    // 0x801D8EC4: jal         0x80037C9C
    // 0x801D8EC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801D8EC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x801D8ECC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D8ED4: jal         0x80037C20
    // 0x801D8ED8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801D8ED8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x801D8EDC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D8EE0: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801D8EE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8EE8: lwc1        $f10, -0x2704($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2704);
    // 0x801D8EEC: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8EF0: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8EF4: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801D8EF8: lw          $a0, 0x1C8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C8);
    // 0x801D8EFC: jal         0x801DF868
    // 0x801D8F00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_7;
    // 0x801D8F00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801D8F04: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
L_801D8F08:
    // 0x801D8F08: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801D8F0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D8F10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D8F14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D8F18: jr          $ra
    // 0x801D8F1C: nop

    TRACE_RETURN()
    return;
    // 0x801D8F1C: nop

;}
RECOMP_FUNC void func_80207F4C_63332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207F4C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80207F50: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80207F54: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80207F58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80207F5C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207F60: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80207F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207F68: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80207F6C: addiu       $t7, $t6, 0x178
    ctx->r15 = ADD32(ctx->r14, 0X178);
    // 0x80207F70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80207F74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80207F78: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80207F7C: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x80207F80: jal         0x801D4D0C
    // 0x80207F84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_801D4D0C_6000EC(rdram, ctx);
        goto after_0;
    // 0x80207F84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x80207F88: beql        $v0, $zero, L_80207FF0
    if (ctx->r2 == 0) {
        // 0x80207F8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207FF0;
    }
    goto skip_0;
    // 0x80207F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80207F90: jal         0x80038BC8
    // 0x80207F94: addiu       $a0, $zero, 0x17B
    ctx->r4 = ADD32(0, 0X17B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80207F94: addiu       $a0, $zero, 0x17B
    ctx->r4 = ADD32(0, 0X17B);
    after_1:
    // 0x80207F98: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80207F9C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80207FA0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80207FA4: jal         0x801E4194
    // 0x80207FA8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801E4194_60F574(rdram, ctx);
        goto after_2;
    // 0x80207FA8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x80207FAC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80207FB0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80207FB4: addiu       $a1, $a1, 0x2A10
    ctx->r5 = ADD32(ctx->r5, 0X2A10);
    // 0x80207FB8: jal         0x8003522C
    // 0x80207FBC: lw          $a0, 0x20($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X20);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x80207FBC: lw          $a0, 0x20($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X20);
    after_3:
    // 0x80207FC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80207FC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80207FC8: addiu       $a1, $a1, 0x2CF0
    ctx->r5 = ADD32(ctx->r5, 0X2CF0);
    // 0x80207FCC: jal         0x8003522C
    // 0x80207FD0: lw          $a0, 0x24($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X24);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x80207FD0: lw          $a0, 0x24($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X24);
    after_4:
    // 0x80207FD4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80207FD8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207FDC: addiu       $a0, $a0, 0x7FFC
    ctx->r4 = ADD32(ctx->r4, 0X7FFC);
    // 0x80207FE0: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x80207FE4: jal         0x8003521C
    // 0x80207FE8: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80207FE8: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    after_5:
    // 0x80207FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207FF0:
    // 0x80207FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80207FF4: jr          $ra
    // 0x80207FF8: nop

    TRACE_RETURN()
    return;
    // 0x80207FF8: nop

;}
RECOMP_FUNC void func_801D8878_603C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8878: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D887C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8880: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8884: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D8888: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801D888C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801D8890: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801D8894: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801D8898: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801D889C: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801D88A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D88A4: bne         $a0, $at, L_801D88C0
    if (ctx->r4 != ctx->r1) {
        // 0x801D88A8: addiu       $a1, $v0, 0x140
        ctx->r5 = ADD32(ctx->r2, 0X140);
            goto L_801D88C0;
    }
    // 0x801D88A8: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
    // 0x801D88AC: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801D88B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D88B4: addiu       $t1, $a1, 0x9
    ctx->r9 = ADD32(ctx->r5, 0X9);
    // 0x801D88B8: b           L_801D88D0
    // 0x801D88BC: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
        goto L_801D88D0;
    // 0x801D88BC: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
L_801D88C0:
    // 0x801D88C0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801D88C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D88C8: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x801D88CC: lw          $t0, 0x20($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X20);
L_801D88D0:
    // 0x801D88D0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D88D4: addiu       $a1, $a1, 0xB4
    ctx->r5 = ADD32(ctx->r5, 0XB4);
    // 0x801D88D8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D88DC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D88E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D88E4: ldc1        $f6, -0x2710($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2710);
    // 0x801D88E8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801D88EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D88F0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801D88F4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D88F8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D88FC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801D8900: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x801D8904: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801D8908: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801D890C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801D8910: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D8914: addiu       $a2, $a2, -0x5AA0
    ctx->r6 = ADD32(ctx->r6, -0X5AA0);
    // 0x801D8918: addiu       $a0, $a0, -0x74B8
    ctx->r4 = ADD32(ctx->r4, -0X74B8);
    // 0x801D891C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x801D8920: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x801D8924: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D8928: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D892C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801D8930: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801D8934: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D8938: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D893C: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x801D8940: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x801D8944: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D8948: jal         0x80035854
    // 0x801D894C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801D894C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D8950: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D8954: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x801D8958: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x801D895C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x801D8960: beq         $v0, $zero, L_801D8B30
    if (ctx->r2 == 0) {
        // 0x801D8964: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D8B30;
    }
    // 0x801D8964: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D8968: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x801D896C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801D8970: addiu       $t2, $t2, 0x1D5C
    ctx->r10 = ADD32(ctx->r10, 0X1D5C);
    // 0x801D8974: sb          $t9, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r25;
    // 0x801D8978: sw          $t2, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r10;
    // 0x801D897C: lbu         $t3, 0x87($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X87);
    // 0x801D8980: addiu       $t4, $v0, 0xD0
    ctx->r12 = ADD32(ctx->r2, 0XD0);
    // 0x801D8984: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801D8988: sw          $t4, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r12;
    // 0x801D898C: sb          $t3, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r11;
    // 0x801D8990: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x801D8994: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x801D8998: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D899C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801D89A0: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    // 0x801D89A4: jal         0x8000E100
    // 0x801D89A8: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    func_8000E100_ED00(rdram, ctx);
        goto after_1;
    // 0x801D89A8: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D89AC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x801D89B0: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x801D89B4: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D89B8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x801D89BC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x801D89C0: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x801D89C4: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801D89C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801D89CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D89D0: swc1        $f16, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f16.u32l;
    // 0x801D89D4: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D89D8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801D89DC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801D89E0: swc1        $f18, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f18.u32l;
    // 0x801D89E4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D89E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D89EC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801D89F0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801D89F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D89F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D89FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D8A00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801D8A04: nop

    // 0x801D8A08: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801D8A0C: beql        $t6, $zero, L_801D8A5C
    if (ctx->r14 == 0) {
        // 0x801D8A10: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_801D8A5C;
    }
    goto skip_0;
    // 0x801D8A10: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x801D8A14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D8A18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D8A1C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D8A20: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801D8A24: nop

    // 0x801D8A28: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D8A2C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801D8A30: nop

    // 0x801D8A34: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801D8A38: bne         $t6, $zero, L_801D8A50
    if (ctx->r14 != 0) {
        // 0x801D8A3C: nop
    
            goto L_801D8A50;
    }
    // 0x801D8A3C: nop

    // 0x801D8A40: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x801D8A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D8A48: b           L_801D8A68
    // 0x801D8A4C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801D8A68;
    // 0x801D8A4C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801D8A50:
    // 0x801D8A50: b           L_801D8A68
    // 0x801D8A54: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801D8A68;
    // 0x801D8A54: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801D8A58: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_801D8A5C:
    // 0x801D8A5C: nop

    // 0x801D8A60: bltz        $t6, L_801D8A50
    if (SIGNED(ctx->r14) < 0) {
        // 0x801D8A64: nop
    
            goto L_801D8A50;
    }
    // 0x801D8A64: nop

L_801D8A68:
    // 0x801D8A68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801D8A6C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D8A70: sw          $t6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r14;
    // 0x801D8A74: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801D8A78: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D8A7C: sw          $t1, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r9;
    // 0x801D8A80: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D8A84: addiu       $t5, $zero, 0x23
    ctx->r13 = ADD32(0, 0X23);
    // 0x801D8A88: addiu       $t6, $zero, -0xC
    ctx->r14 = ADD32(0, -0XC);
    // 0x801D8A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8A90: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D8A94: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801D8A98: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801D8A9C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D8AA0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x801D8AA4: nop

    // 0x801D8AA8: sw          $t8, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r24;
    // 0x801D8AAC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D8AB0: div.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D8AB4: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x801D8AB8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801D8ABC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x801D8AC0: nop

    // 0x801D8AC4: sw          $t2, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r10;
    // 0x801D8AC8: lhu         $t3, 0x16($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X16);
    // 0x801D8ACC: sw          $t3, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r11;
    // 0x801D8AD0: lhu         $t4, 0x14($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X14);
    // 0x801D8AD4: sw          $t0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r8;
    // 0x801D8AD8: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x801D8ADC: sw          $t5, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r13;
    // 0x801D8AE0: sw          $t6, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r14;
    // 0x801D8AE4: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x801D8AE8: swc1        $f0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f0.u32l;
    // 0x801D8AEC: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x801D8AF0: swc1        $f0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f0.u32l;
    // 0x801D8AF4: jal         0x801D9030
    // 0x801D8AF8: sw          $t4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r12;
    func_801D9030_604410(rdram, ctx);
        goto after_2;
    // 0x801D8AF8: sw          $t4, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r12;
    after_2:
    // 0x801D8AFC: lbu         $t7, 0x4C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4C);
    // 0x801D8B00: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x801D8B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8B08: bne         $t7, $at, L_801D8B28
    if (ctx->r15 != ctx->r1) {
        // 0x801D8B0C: nop
    
            goto L_801D8B28;
    }
    // 0x801D8B0C: nop

    // 0x801D8B10: jal         0x80037C9C
    // 0x801D8B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801D8B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x801D8B18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D8B20: jal         0x80037C20
    // 0x801D8B24: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801D8B24: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
L_801D8B28:
    // 0x801D8B28: b           L_801D8B34
    // 0x801D8B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D8B34;
    // 0x801D8B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D8B30:
    // 0x801D8B30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D8B34:
    // 0x801D8B34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801D8B38: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801D8B3C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801D8B40: jr          $ra
    // 0x801D8B44: nop

    TRACE_RETURN()
    return;
    // 0x801D8B44: nop

;}
RECOMP_FUNC void func_801D322C_5FE60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D322C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3230: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D3234: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D3238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D323C: bne         $a0, $zero, L_801D324C
    if (ctx->r4 != 0) {
        // 0x801D3240: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801D324C;
    }
    // 0x801D3240: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D3244: b           L_801D325C
    // 0x801D3248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D325C;
    // 0x801D3248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D324C:
    // 0x801D324C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D3250: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801D3254: jal         0x801D3118
    // 0x801D3258: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_0;
    // 0x801D3258: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    after_0:
L_801D325C:
    // 0x801D325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3264: jr          $ra
    // 0x801D3268: nop

    TRACE_RETURN()
    return;
    // 0x801D3268: nop

;}
RECOMP_FUNC void func_801D2178_5FD558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2178: beq         $a0, $zero, L_801D237C
    if (ctx->r4 == 0) {
        // 0x801D217C: nop
    
            goto L_801D237C;
    }
    // 0x801D217C: nop

    // 0x801D2180: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D2184: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2188: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x801D218C: beq         $v0, $zero, L_801D237C
    if (ctx->r2 == 0) {
        // 0x801D2190: nop
    
            goto L_801D237C;
    }
    // 0x801D2190: nop

    // 0x801D2194: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D2198: lbu         $t6, 0x2C0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2C0);
    // 0x801D219C: addiu       $t0, $v1, 0x280
    ctx->r8 = ADD32(ctx->r3, 0X280);
    // 0x801D21A0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D21A4: beq         $t6, $zero, L_801D21C0
    if (ctx->r14 == 0) {
        // 0x801D21A8: or          $t2, $t0, $zero
        ctx->r10 = ctx->r8 | 0;
            goto L_801D21C0;
    }
    // 0x801D21A8: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x801D21AC: lw          $a0, 0x1EC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1EC);
    // 0x801D21B0: lw          $a1, 0x1F0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X1F0);
    // 0x801D21B4: lw          $a2, 0x1F4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1F4);
    // 0x801D21B8: b           L_801D21D0
    // 0x801D21BC: lw          $a3, 0x1F8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1F8);
        goto L_801D21D0;
    // 0x801D21BC: lw          $a3, 0x1F8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1F8);
L_801D21C0:
    // 0x801D21C0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x801D21C4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801D21C8: addiu       $a2, $zero, 0x136
    ctx->r6 = ADD32(0, 0X136);
    // 0x801D21CC: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
L_801D21D0:
    // 0x801D21D0: sltiu       $at, $a0, 0xA
    ctx->r1 = ctx->r4 < 0XA ? 1 : 0;
    // 0x801D21D4: beq         $at, $zero, L_801D21E0
    if (ctx->r1 == 0) {
        // 0x801D21D8: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_801D21E0;
    }
    // 0x801D21D8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x801D21DC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_801D21E0:
    // 0x801D21E0: sltiu       $at, $a0, 0x137
    ctx->r1 = ctx->r4 < 0X137 ? 1 : 0;
    // 0x801D21E4: bne         $at, $zero, L_801D21F0
    if (ctx->r1 != 0) {
        // 0x801D21E8: or          $t3, $t0, $zero
        ctx->r11 = ctx->r8 | 0;
            goto L_801D21F0;
    }
    // 0x801D21E8: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x801D21EC: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
L_801D21F0:
    // 0x801D21F0: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
    // 0x801D21F4: beq         $at, $zero, L_801D2200
    if (ctx->r1 == 0) {
        // 0x801D21F8: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_801D2200;
    }
    // 0x801D21F8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x801D21FC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
L_801D2200:
    // 0x801D2200: sltiu       $at, $a1, 0xE1
    ctx->r1 = ctx->r5 < 0XE1 ? 1 : 0;
    // 0x801D2204: bnel        $at, $zero, L_801D2214
    if (ctx->r1 != 0) {
        // 0x801D2208: sltiu       $at, $a2, 0xA
        ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
            goto L_801D2214;
    }
    goto skip_0;
    // 0x801D2208: sltiu       $at, $a2, 0xA
    ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
    skip_0:
    // 0x801D220C: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801D2210: sltiu       $at, $a2, 0xA
    ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
L_801D2214:
    // 0x801D2214: beql        $at, $zero, L_801D2224
    if (ctx->r1 == 0) {
        // 0x801D2218: sltiu       $at, $a2, 0x137
        ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
            goto L_801D2224;
    }
    goto skip_1;
    // 0x801D2218: sltiu       $at, $a2, 0x137
    ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
    skip_1:
    // 0x801D221C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801D2220: sltiu       $at, $a2, 0x137
    ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
L_801D2224:
    // 0x801D2224: bnel        $at, $zero, L_801D2234
    if (ctx->r1 != 0) {
        // 0x801D2228: sltiu       $at, $a3, 0xE
        ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
            goto L_801D2234;
    }
    goto skip_2;
    // 0x801D2228: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
    skip_2:
    // 0x801D222C: addiu       $a2, $zero, 0x136
    ctx->r6 = ADD32(0, 0X136);
    // 0x801D2230: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
L_801D2234:
    // 0x801D2234: beql        $at, $zero, L_801D2244
    if (ctx->r1 == 0) {
        // 0x801D2238: sltiu       $at, $a3, 0xE1
        ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
            goto L_801D2244;
    }
    goto skip_3;
    // 0x801D2238: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
    skip_3:
    // 0x801D223C: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x801D2240: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
L_801D2244:
    // 0x801D2244: bnel        $at, $zero, L_801D2254
    if (ctx->r1 != 0) {
        // 0x801D2248: mtc1        $a0, $f4
        ctx->f4.u32l = ctx->r4;
            goto L_801D2254;
    }
    goto skip_4;
    // 0x801D2248: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    skip_4:
    // 0x801D224C: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    // 0x801D2250: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
L_801D2254:
    // 0x801D2254: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D2258: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D225C: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x801D2260: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x801D2264: bgez        $a0, L_801D227C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801D2268: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D227C;
    }
    // 0x801D2268: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D226C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D2270: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2274: nop

    // 0x801D2278: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801D227C:
    // 0x801D227C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D2280: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x801D2284: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x801D2288: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D228C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801D2290: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x801D2294: nop

    // 0x801D2298: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801D229C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801D22A0: bgez        $a1, L_801D22B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D22A4: or          $t8, $t7, $at
        ctx->r24 = ctx->r15 | ctx->r1;
            goto L_801D22B8;
    }
    // 0x801D22A4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801D22A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D22AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D22B0: nop

    // 0x801D22B4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801D22B8:
    // 0x801D22B8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D22BC: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x801D22C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D22C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D22C8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D22CC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x801D22D0: nop

    // 0x801D22D4: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801D22D8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x801D22DC: bgez        $a2, L_801D22F0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D22E0: sw          $t9, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r25;
            goto L_801D22F0;
    }
    // 0x801D22E0: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x801D22E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D22E8: nop

    // 0x801D22EC: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_801D22F0:
    // 0x801D22F0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801D22F4: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x801D22F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D22FC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D2300: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801D2304: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x801D2308: nop

    // 0x801D230C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x801D2310: bgez        $a3, L_801D2324
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801D2314: sll         $t9, $t7, 12
        ctx->r25 = S32(ctx->r15 << 12);
            goto L_801D2324;
    }
    // 0x801D2314: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x801D2318: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D231C: nop

    // 0x801D2320: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_801D2324:
    // 0x801D2324: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801D2328: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
    // 0x801D232C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D2330: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x801D2334: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801D2338: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x801D233C: nop

    // 0x801D2340: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x801D2344: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x801D2348: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x801D234C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D2350: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x801D2354: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x801D2358: addiu       $t9, $t9, -0x5B90
    ctx->r25 = ADD32(ctx->r25, -0X5B90);
    // 0x801D235C: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x801D2360: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x801D2364: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x801D2368: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D236C: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x801D2370: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x801D2374: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x801D2378: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
L_801D237C:
    // 0x801D237C: jr          $ra
    // 0x801D2380: nop

    TRACE_RETURN()
    return;
    // 0x801D2380: nop

;}
RECOMP_FUNC void func_80200818_62BBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200818: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8020081C: addiu       $a3, $a3, -0x1130
    ctx->r7 = ADD32(ctx->r7, -0X1130);
    // 0x80200820: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80200824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020082C: lw          $t6, 0x2C8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C8);
    // 0x80200830: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x80200834: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80200838: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8020083C: beq         $t7, $zero, L_8020084C
    if (ctx->r15 == 0) {
        // 0x80200840: addiu       $v0, $zero, -0x3
        ctx->r2 = ADD32(0, -0X3);
            goto L_8020084C;
    }
    // 0x80200840: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x80200844: b           L_8020084C
    // 0x80200848: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8020084C;
    // 0x80200848: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8020084C:
    // 0x8020084C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80200850: lwc1        $f6, 0x90($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X90);
    // 0x80200854: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80200858: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020085C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80200860: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80200864: addiu       $t1, $t1, -0x5198
    ctx->r9 = ADD32(ctx->r9, -0X5198);
    // 0x80200868: addiu       $t2, $t2, -0x50D0
    ctx->r10 = ADD32(ctx->r10, -0X50D0);
    // 0x8020086C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80200870: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80200874: addiu       $a0, $a0, 0x8D0
    ctx->r4 = ADD32(ctx->r4, 0X8D0);
    // 0x80200878: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x8020087C: lwc1        $f10, 0x94($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X94);
    // 0x80200880: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80200884: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x80200888: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x8020088C: lw          $t9, 0x2C8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C8);
    // 0x80200890: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80200894: beql        $t0, $zero, L_802008A8
    if (ctx->r8 == 0) {
        // 0x80200898: sw          $t2, 0x30($a1)
        MEM_W(0X30, ctx->r5) = ctx->r10;
            goto L_802008A8;
    }
    goto skip_0;
    // 0x80200898: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
    skip_0:
    // 0x8020089C: b           L_802008A8
    // 0x802008A0: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
        goto L_802008A8;
    // 0x802008A0: sw          $t1, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r9;
    // 0x802008A4: sw          $t2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r10;
L_802008A8:
    // 0x802008A8: lbu         $t3, 0xE($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XE);
    // 0x802008AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802008B0: bnel        $t3, $at, L_802008C4
    if (ctx->r11 != ctx->r1) {
        // 0x802008B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802008C4;
    }
    goto skip_1;
    // 0x802008B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802008B8: jal         0x8003521C
    // 0x802008BC: sw          $t4, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802008BC: sw          $t4, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r12;
    after_0:
    // 0x802008C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802008C4:
    // 0x802008C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802008C8: jr          $ra
    // 0x802008CC: nop

    TRACE_RETURN()
    return;
    // 0x802008CC: nop

;}
RECOMP_FUNC void func_801EEC1C_619FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEC1C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EEC20: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801EEC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EEC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEC2C: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x801EEC30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EEC34: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EEC38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EEC3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801EEC40: addiu       $a3, $zero, 0x77
    ctx->r7 = ADD32(0, 0X77);
    // 0x801EEC44: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801EEC48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EEC4C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801EEC50: addiu       $t7, $zero, 0x136
    ctx->r15 = ADD32(0, 0X136);
    // 0x801EEC54: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x801EEC58: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x801EEC5C: sb          $a2, 0x2C0($a1)
    MEM_B(0X2C0, ctx->r5) = ctx->r6;
    // 0x801EEC60: sb          $zero, 0x2C1($a1)
    MEM_B(0X2C1, ctx->r5) = 0;
    // 0x801EEC64: sb          $a2, 0x2C2($a1)
    MEM_B(0X2C2, ctx->r5) = ctx->r6;
    // 0x801EEC68: sb          $zero, 0x2C3($a1)
    MEM_B(0X2C3, ctx->r5) = 0;
    // 0x801EEC6C: sw          $t6, 0x1EC($a1)
    MEM_W(0X1EC, ctx->r5) = ctx->r14;
    // 0x801EEC70: sw          $a3, 0x1F0($a1)
    MEM_W(0X1F0, ctx->r5) = ctx->r7;
    // 0x801EEC74: sw          $t7, 0x1F4($a1)
    MEM_W(0X1F4, ctx->r5) = ctx->r15;
    // 0x801EEC78: sw          $a3, 0x1F8($a1)
    MEM_W(0X1F8, ctx->r5) = ctx->r7;
    // 0x801EEC7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EEC80: lui         $at, 0xC3D2
    ctx->r1 = S32(0XC3D2 << 16);
    // 0x801EEC84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EEC88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EEC8C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    // 0x801EEC90: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x801EEC94: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x801EEC98: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x801EEC9C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x801EECA0: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x801EECA4: jal         0x80038BC8
    // 0x801EECA8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EECA8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    after_0:
    // 0x801EECAC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EECB0: addiu       $a0, $a0, -0x2A28
    ctx->r4 = ADD32(ctx->r4, -0X2A28);
    // 0x801EECB4: jal         0x80034DD8
    // 0x801EECB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801EECB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801EECBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EECC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EECC4: jr          $ra
    // 0x801EECC8: nop

    TRACE_RETURN()
    return;
    // 0x801EECC8: nop

;}
