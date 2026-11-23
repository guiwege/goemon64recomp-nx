#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80012518_13118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012518: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001251C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80012520: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80012524: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80012528: swc1        $f12, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f12.u32l;
    // 0x8001252C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80012530: swc1        $f14, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f14.u32l;
    // 0x80012534: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80012538: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001253C: bc1f        L_8001255C
    if (!c1cs) {
        // 0x80012540: swc1        $f4, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
            goto L_8001255C;
    }
    // 0x80012540: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x80012544: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012548: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8001254C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80012550: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80012554: b           L_80012568
    // 0x80012558: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012568;
    // 0x80012558: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8001255C:
    // 0x8001255C: lwc1        $f16, 0x3C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80012560: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80012564: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80012568:
    // 0x80012568: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001256C: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80012570: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80012574: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80012578: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8001257C: nop

    // 0x80012580: bc1f        L_80012594
    if (!c1cs) {
        // 0x80012584: swc1        $f4, 0x40($v0)
        MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
            goto L_80012594;
    }
    // 0x80012584: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x80012588: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8001258C: b           L_80012598
    // 0x80012590: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012598;
    // 0x80012590: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80012594:
    // 0x80012594: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80012598:
    // 0x80012598: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8001259C: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x800125A0: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800125A4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800125A8: nop

    // 0x800125AC: bc1f        L_800125C0
    if (!c1cs) {
        // 0x800125B0: swc1        $f6, 0x50($v0)
        MEM_W(0X50, ctx->r2) = ctx->f6.u32l;
            goto L_800125C0;
    }
    // 0x800125B0: swc1        $f6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f6.u32l;
    // 0x800125B4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800125B8: b           L_800125C4
    // 0x800125BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800125C4;
    // 0x800125BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800125C0:
    // 0x800125C0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800125C4:
    // 0x800125C4: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800125C8: jr          $ra
    // 0x800125CC: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x800125CC: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80012938_13538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012938: jr          $ra
    // 0x8001293C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    TRACE_RETURN()
    return;
    // 0x8001293C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void func_8003E680_3F280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E688: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8003E68C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E690: jal         0x8000C838
    // 0x8003E694: sh          $t6, 0x77F0($at)
    MEM_H(0X77F0, ctx->r1) = ctx->r14;
    func_8000C838_D438(rdram, ctx);
        goto after_0;
    // 0x8003E694: sh          $t6, 0x77F0($at)
    MEM_H(0X77F0, ctx->r1) = ctx->r14;
    after_0:
    // 0x8003E698: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x8003E69C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003E6A0: jal         0x8003D428
    // 0x8003E6A4: sw          $t7, 0x785C($at)
    MEM_W(0X785C, ctx->r1) = ctx->r15;
    func_8003D428_3E028(rdram, ctx);
        goto after_1;
    // 0x8003E6A4: sw          $t7, 0x785C($at)
    MEM_W(0X785C, ctx->r1) = ctx->r15;
    after_1:
    // 0x8003E6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E6AC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8003E6B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E6B4: sb          $t8, 0x7930($at)
    MEM_B(0X7930, ctx->r1) = ctx->r24;
    // 0x8003E6B8: jr          $ra
    // 0x8003E6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003E6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001ADBC_1B9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001ADBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ADC0: lwc1        $f0, -0x7AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7AF0);
    // 0x8001ADC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8001ADC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001ADCC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001ADD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001ADD4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001ADD8: lhu         $t1, 0xC($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XC);
    // 0x8001ADDC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8001ADE0: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001ADE4: sh          $t1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r9;
    // 0x8001ADE8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8001ADEC: lhu         $t7, 0xE($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XE);
    // 0x8001ADF0: andi        $t2, $t1, 0xBFFF
    ctx->r10 = ctx->r9 & 0XBFFF;
    // 0x8001ADF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001ADF8: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x8001ADFC: lhu         $t8, 0x10($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X10);
    // 0x8001AE00: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
    // 0x8001AE04: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001AE08: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001AE0C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8001AE10: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x8001AE14: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8001AE18: sh          $t8, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r24;
    // 0x8001AE1C: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8001AE20: bne         $at, $zero, L_8001AE40
    if (ctx->r1 != 0) {
        // 0x8001AE24: lwc1        $f2, 0x48($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
            goto L_8001AE40;
    }
    // 0x8001AE24: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001AE28: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001AE2C: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001AE30: addu        $t3, $v1, $at
    ctx->r11 = ADD32(ctx->r3, ctx->r1);
    // 0x8001AE34: sh          $t3, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r11;
    // 0x8001AE38: b           L_8001AF30
    // 0x8001AE3C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_8001AF30;
    // 0x8001AE3C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
L_8001AE40:
    // 0x8001AE40: andi        $t4, $v1, 0x8000
    ctx->r12 = ctx->r3 & 0X8000;
    // 0x8001AE44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001AE48: beq         $t4, $zero, L_8001AE5C
    if (ctx->r12 == 0) {
        // 0x8001AE4C: andi        $t5, $v1, 0x7FFF
        ctx->r13 = ctx->r3 & 0X7FFF;
            goto L_8001AE5C;
    }
    // 0x8001AE4C: andi        $t5, $v1, 0x7FFF
    ctx->r13 = ctx->r3 & 0X7FFF;
    // 0x8001AE50: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001AE54: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
    // 0x8001AE58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001AE5C:
    // 0x8001AE5C: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8001AE60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001AE64: lhu         $a0, 0x2C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2C);
    // 0x8001AE68: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001AE6C: bc1t        L_8001AE78
    if (c1cs) {
        // 0x8001AE70: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001AE78;
    }
    // 0x8001AE70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001AE78:
    // 0x8001AE78: bne         $v0, $zero, L_8001AEAC
    if (ctx->r2 != 0) {
        // 0x8001AE7C: lwc1        $f2, 0x48($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
            goto L_8001AEAC;
    }
    // 0x8001AE7C: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001AE80: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001AE84: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8001AE88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001AE8C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x8001AE90: jal         0x8001B2C8
    // 0x8001AE94: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_0;
    // 0x8001AE94: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8001AE98: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8001AE9C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001AEA0: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8001AEA4: b           L_8001AF30
    // 0x8001AEA8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8001AF30;
    // 0x8001AEA8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8001AEAC:
    // 0x8001AEAC: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x8001AEB0: lwc1        $f6, -0x7AE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001AEB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001AEB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001AEBC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001AEC0: lhu         $a0, 0x2C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2C);
    // 0x8001AEC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001AEC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8001AECC: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001AED0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8001AED4: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x8001AED8: nop

    // 0x8001AEDC: bc1fl       L_8001AF18
    if (!c1cs) {
        // 0x8001AEE0: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_8001AF18;
    }
    goto skip_0;
    // 0x8001AEE0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    skip_0:
    // 0x8001AEE4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001AEE8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8001AEEC: lhu         $a0, 0x2C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2C);
    // 0x8001AEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001AEF4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8001AEF8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x8001AEFC: jal         0x8001B2C8
    // 0x8001AF00: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_1;
    // 0x8001AF00: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8001AF04: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8001AF08: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001AF0C: b           L_8001AF30
    // 0x8001AF10: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8001AF30;
    // 0x8001AF10: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8001AF14: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_8001AF18:
    // 0x8001AF18: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x8001AF1C: jal         0x8001B2C8
    // 0x8001AF20: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_2;
    // 0x8001AF20: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8001AF24: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8001AF28: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001AF2C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
L_8001AF30:
    // 0x8001AF30: lhu         $t6, 0x2E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2E);
    // 0x8001AF34: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001AF38: andi        $t7, $t6, 0xBFFF
    ctx->r15 = ctx->r14 & 0XBFFF;
    // 0x8001AF3C: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001AF40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8001AF44: bne         $at, $zero, L_8001AF68
    if (ctx->r1 != 0) {
        // 0x8001AF48: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_8001AF68;
    }
    // 0x8001AF48: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8001AF4C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001AF50: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001AF54: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8001AF58: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x8001AF5C: sh          $t8, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r24;
    // 0x8001AF60: b           L_8001B044
    // 0x8001AF64: sh          $t8, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r24;
        goto L_8001B044;
    // 0x8001AF64: sh          $t8, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r24;
L_8001AF68:
    // 0x8001AF68: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x8001AF6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001AF70: beq         $t9, $zero, L_8001AF8C
    if (ctx->r25 == 0) {
        // 0x8001AF74: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001AF8C;
    }
    // 0x8001AF74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AF78: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001AF7C: andi        $t1, $a0, 0x7FFF
    ctx->r9 = ctx->r4 & 0X7FFF;
    // 0x8001AF80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001AF84: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001AF88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001AF8C:
    // 0x8001AF8C: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8001AF90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001AF94: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001AF98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001AF9C: bc1t        L_8001AFA8
    if (c1cs) {
        // 0x8001AFA0: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_8001AFA8;
    }
    // 0x8001AFA0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001AFA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001AFA8:
    // 0x8001AFA8: bne         $v0, $zero, L_8001AFD0
    if (ctx->r2 != 0) {
        // 0x8001AFAC: lwc1        $f2, 0x48($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
            goto L_8001AFD0;
    }
    // 0x8001AFAC: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001AFB0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8001AFB4: sh          $a0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r4;
    // 0x8001AFB8: jal         0x8001B2C8
    // 0x8001AFBC: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_3;
    // 0x8001AFBC: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8001AFC0: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001AFC4: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x8001AFC8: b           L_8001B044
    // 0x8001AFCC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8001B044;
    // 0x8001AFCC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8001AFD0:
    // 0x8001AFD0: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x8001AFD4: lwc1        $f8, -0x7AE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001AFD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001AFDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001AFE0: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001AFE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001AFE8: addiu       $a2, $s1, 0x2
    ctx->r6 = ADD32(ctx->r17, 0X2);
    // 0x8001AFEC: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001AFF0: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8001AFF4: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x8001AFF8: nop

    // 0x8001AFFC: bc1fl       L_8001B030
    if (!c1cs) {
        // 0x8001B000: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_8001B030;
    }
    goto skip_1;
    // 0x8001B000: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    skip_1:
    // 0x8001B004: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001B008: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8001B00C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001B010: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x8001B014: sh          $a0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r4;
    // 0x8001B018: jal         0x8001B2C8
    // 0x8001B01C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_4;
    // 0x8001B01C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x8001B020: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001B024: b           L_8001B044
    // 0x8001B028: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8001B044;
    // 0x8001B028: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8001B02C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_8001B030:
    // 0x8001B030: sh          $a0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r4;
    // 0x8001B034: jal         0x8001B2C8
    // 0x8001B038: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_5;
    // 0x8001B038: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x8001B03C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001B040: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
L_8001B044:
    // 0x8001B044: lhu         $t2, 0x30($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X30);
    // 0x8001B048: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001B04C: andi        $t3, $t2, 0xBFFF
    ctx->r11 = ctx->r10 & 0XBFFF;
    // 0x8001B050: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001B054: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8001B058: bne         $at, $zero, L_8001B07C
    if (ctx->r1 != 0) {
        // 0x8001B05C: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_8001B07C;
    }
    // 0x8001B05C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8001B060: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001B064: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001B068: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8001B06C: sh          $t3, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r11;
    // 0x8001B070: sh          $t4, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r12;
    // 0x8001B074: b           L_8001B128
    // 0x8001B078: sh          $t4, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r12;
        goto L_8001B128;
    // 0x8001B078: sh          $t4, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r12;
L_8001B07C:
    // 0x8001B07C: andi        $t5, $v1, 0x8000
    ctx->r13 = ctx->r3 & 0X8000;
    // 0x8001B080: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001B084: beq         $t5, $zero, L_8001B0A0
    if (ctx->r13 == 0) {
        // 0x8001B088: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001B0A0;
    }
    // 0x8001B088: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B08C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001B090: andi        $t6, $a0, 0x7FFF
    ctx->r14 = ctx->r4 & 0X7FFF;
    // 0x8001B094: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001B098: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001B09C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001B0A0:
    // 0x8001B0A0: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8001B0A4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001B0A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001B0AC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001B0B0: bc1fl       L_8001B0D0
    if (!c1cs) {
        // 0x8001B0B4: mtc1        $s0, $f18
        ctx->f18.u32l = ctx->r16;
            goto L_8001B0D0;
    }
    goto skip_2;
    // 0x8001B0B4: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    skip_2:
    // 0x8001B0B8: jal         0x8001B2C8
    // 0x8001B0BC: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_6;
    // 0x8001B0BC: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    after_6:
    // 0x8001B0C0: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x8001B0C4: b           L_8001B128
    // 0x8001B0C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8001B128;
    // 0x8001B0C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8001B0CC: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
L_8001B0D0:
    // 0x8001B0D0: lwc1        $f4, -0x7AE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001B0D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001B0D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001B0DC: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001B0E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001B0E4: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x8001B0E8: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001B0EC: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001B0F0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8001B0F4: nop

    // 0x8001B0F8: bc1f        L_8001B11C
    if (!c1cs) {
        // 0x8001B0FC: nop
    
            goto L_8001B11C;
    }
    // 0x8001B0FC: nop

    // 0x8001B100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001B104: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8001B108: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001B10C: jal         0x8001B2C8
    // 0x8001B110: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_7;
    // 0x8001B110: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    after_7:
    // 0x8001B114: b           L_8001B128
    // 0x8001B118: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8001B128;
    // 0x8001B118: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8001B11C:
    // 0x8001B11C: jal         0x8001B2C8
    // 0x8001B120: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_8;
    // 0x8001B120: sh          $a0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r4;
    after_8:
    // 0x8001B124: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_8001B128:
    // 0x8001B128: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001B12C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001B130: lhu         $a0, 0x34($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X34);
    // 0x8001B134: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8001B138: nop

    // 0x8001B13C: bc1tl       L_8001B2B8
    if (c1cs) {
        // 0x8001B140: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001B2B8;
    }
    goto skip_3;
    // 0x8001B140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8001B144: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8001B148: beq         $v1, $a0, L_8001B1E4
    if (ctx->r3 == ctx->r4) {
        // 0x8001B14C: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8001B1E4;
    }
    // 0x8001B14C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8001B150: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x8001B154: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8001B158: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001B15C: slti        $at, $t9, 0x199
    ctx->r1 = SIGNED(ctx->r25) < 0X199 ? 1 : 0;
    // 0x8001B160: bne         $at, $zero, L_8001B198
    if (ctx->r1 != 0) {
        // 0x8001B164: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8001B198;
    }
    // 0x8001B164: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8001B168: slti        $at, $t9, 0x268
    ctx->r1 = SIGNED(ctx->r25) < 0X268 ? 1 : 0;
    // 0x8001B16C: beq         $at, $zero, L_8001B198
    if (ctx->r1 == 0) {
        // 0x8001B170: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001B198;
    }
    // 0x8001B170: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001B174: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8001B178: jal         0x8001F878
    // 0x8001B17C: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    func_8001F878_20478(rdram, ctx);
        goto after_9;
    // 0x8001B17C: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    after_9:
    // 0x8001B180: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8001B184: lhu         $t1, 0x34($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X34);
    // 0x8001B188: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
    // 0x8001B18C: andi        $t2, $v0, 0x3FF
    ctx->r10 = ctx->r2 & 0X3FF;
    // 0x8001B190: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8001B194: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_8001B198:
    // 0x8001B198: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B19C: bnel        $at, $zero, L_8001B1C0
    if (ctx->r1 != 0) {
        // 0x8001B1A0: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_8001B1C0;
    }
    goto skip_4;
    // 0x8001B1A0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_4:
    // 0x8001B1A4: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8001B1A8:
    // 0x8001B1A8: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8001B1AC: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8001B1B0: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B1B4: beql        $at, $zero, L_8001B1A8
    if (ctx->r1 == 0) {
        // 0x8001B1B8: addiu       $v0, $v0, -0x400
        ctx->r2 = ADD32(ctx->r2, -0X400);
            goto L_8001B1A8;
    }
    goto skip_5;
    // 0x8001B1B8: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    skip_5:
    // 0x8001B1BC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_8001B1C0:
    // 0x8001B1C0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001B1C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001B1C8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001B1CC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8001B1D0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8001B1D4: nop

    // 0x8001B1D8: addu        $t6, $v1, $t1
    ctx->r14 = ADD32(ctx->r3, ctx->r9);
    // 0x8001B1DC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8001B1E0: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_8001B1E4:
    // 0x8001B1E4: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    // 0x8001B1E8: lhu         $v1, 0x36($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X36);
    // 0x8001B1EC: beq         $a0, $v1, L_8001B24C
    if (ctx->r4 == ctx->r3) {
        // 0x8001B1F0: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_8001B24C;
    }
    // 0x8001B1F0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8001B1F4: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x8001B1F8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8001B1FC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001B200: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B204: bnel        $at, $zero, L_8001B228
    if (ctx->r1 != 0) {
        // 0x8001B208: mtc1        $v0, $f18
        ctx->f18.u32l = ctx->r2;
            goto L_8001B228;
    }
    goto skip_6;
    // 0x8001B208: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    skip_6:
    // 0x8001B20C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8001B210:
    // 0x8001B210: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8001B214: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8001B218: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B21C: beql        $at, $zero, L_8001B210
    if (ctx->r1 == 0) {
        // 0x8001B220: addiu       $v0, $v0, -0x400
        ctx->r2 = ADD32(ctx->r2, -0X400);
            goto L_8001B210;
    }
    goto skip_7;
    // 0x8001B220: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    skip_7:
    // 0x8001B224: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
L_8001B228:
    // 0x8001B228: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001B22C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8001B230: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001B234: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8001B238: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8001B23C: nop

    // 0x8001B240: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x8001B244: andi        $t4, $t1, 0x3FF
    ctx->r12 = ctx->r9 & 0X3FF;
    // 0x8001B248: sh          $t4, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r12;
L_8001B24C:
    // 0x8001B24C: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    // 0x8001B250: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x8001B254: beq         $a0, $v1, L_8001B2B4
    if (ctx->r4 == ctx->r3) {
        // 0x8001B258: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_8001B2B4;
    }
    // 0x8001B258: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8001B25C: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x8001B260: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8001B264: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001B268: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B26C: bnel        $at, $zero, L_8001B290
    if (ctx->r1 != 0) {
        // 0x8001B270: mtc1        $v0, $f16
        ctx->f16.u32l = ctx->r2;
            goto L_8001B290;
    }
    goto skip_8;
    // 0x8001B270: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    skip_8:
    // 0x8001B274: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8001B278:
    // 0x8001B278: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8001B27C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001B280: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8001B284: beql        $at, $zero, L_8001B278
    if (ctx->r1 == 0) {
        // 0x8001B288: addiu       $v0, $v0, -0x400
        ctx->r2 = ADD32(ctx->r2, -0X400);
            goto L_8001B278;
    }
    goto skip_9;
    // 0x8001B288: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    skip_9:
    // 0x8001B28C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_8001B290:
    // 0x8001B290: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001B294: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001B298: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8001B29C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8001B2A0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8001B2A4: nop

    // 0x8001B2A8: addu        $t7, $a0, $t4
    ctx->r15 = ADD32(ctx->r4, ctx->r12);
    // 0x8001B2AC: andi        $t2, $t7, 0x3FF
    ctx->r10 = ctx->r15 & 0X3FF;
    // 0x8001B2B0: sh          $t2, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r10;
L_8001B2B4:
    // 0x8001B2B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001B2B8:
    // 0x8001B2B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001B2BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001B2C0: jr          $ra
    // 0x8001B2C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8001B2C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8000E030_EC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000E034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000E038: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E03C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000E040: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8000E044: sw          $t6, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->r14;
    // 0x8000E048: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8000E04C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8000E050: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x8000E054: sw          $t7, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r15;
    // 0x8000E058: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8000E05C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8000E060: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8000E064: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8000E068: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x8000E06C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8000E070: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8000E074: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000E078: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8000E07C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000E080: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8000E084: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8000E088: sw          $t1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r9;
    // 0x8000E08C: sw          $t0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r8;
    // 0x8000E090: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8000E094: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E098: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8000E09C: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x8000E0A0: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8000E0A4: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x8000E0A8: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x8000E0AC: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x8000E0B0: sll         $t0, $t1, 8
    ctx->r8 = S32(ctx->r9 << 8);
    // 0x8000E0B4: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8000E0B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000E0BC: or          $t2, $t7, $t0
    ctx->r10 = ctx->r15 | ctx->r8;
    // 0x8000E0C0: andi        $t3, $t4, 0xFF
    ctx->r11 = ctx->r12 & 0XFF;
    // 0x8000E0C4: or          $t6, $t2, $t3
    ctx->r14 = ctx->r10 | ctx->r11;
    // 0x8000E0C8: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8000E0CC: sw          $t6, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r14;
    // 0x8000E0D0: sw          $t5, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r13;
    // 0x8000E0D4: sw          $zero, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = 0;
    // 0x8000E0D8: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8000E0DC: addiu       $a0, $a0, 0xC8
    ctx->r4 = ADD32(ctx->r4, 0XC8);
    // 0x8000E0E0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8000E0E4: jal         0x80040620
    // 0x8000E0E8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000E0E8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_0:
    // 0x8000E0EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E0F0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8000E0F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E0F8: jr          $ra
    // 0x8000E0FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8000E0FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80024848_25448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002484C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80024854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80024858: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x8002485C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80024860: bne         $t7, $zero, L_80024878
    if (ctx->r15 != 0) {
        // 0x80024864: sw          $t7, 0xDC($a0)
        MEM_W(0XDC, ctx->r4) = ctx->r15;
            goto L_80024878;
    }
    // 0x80024864: sw          $t7, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r15;
    // 0x80024868: jal         0x80024734
    // 0x8002486C: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    func_80024734_25334(rdram, ctx);
        goto after_0;
    // 0x8002486C: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    after_0:
    // 0x80024870: jal         0x80034ED4
    // 0x80024874: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80024874: nop

    after_1:
L_80024878:
    // 0x80024878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002487C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024880: jr          $ra
    // 0x80024884: nop

    TRACE_RETURN()
    return;
    // 0x80024884: nop

;}
RECOMP_FUNC void func_800102E0_10EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800102E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800102E4: beq         $a0, $at, L_80010310
    if (ctx->r4 == ctx->r1) {
        // 0x800102E8: sll         $t6, $a0, 4
        ctx->r14 = S32(ctx->r4 << 4);
            goto L_80010310;
    }
    // 0x800102E8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800102EC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800102F0: addiu       $t7, $t7, 0x7C78
    ctx->r15 = ADD32(ctx->r15, 0X7C78);
    // 0x800102F4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800102F8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x800102FC: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80010300: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80010304: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80010308: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8001030C: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
L_80010310:
    // 0x80010310: jr          $ra
    // 0x80010314: nop

    TRACE_RETURN()
    return;
    // 0x80010314: nop

;}
RECOMP_FUNC void strlen_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A4CC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8004A4D0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8004A4D4: beq         $t6, $zero, L_8004A4EC
    if (ctx->r14 == 0) {
        // 0x8004A4D8: nop
    
            goto L_8004A4EC;
    }
    // 0x8004A4D8: nop

    // 0x8004A4DC: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
L_8004A4E0:
    // 0x8004A4E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004A4E4: bnel        $t7, $zero, L_8004A4E0
    if (ctx->r15 != 0) {
        // 0x8004A4E8: lbu         $t7, 0x1($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X1);
            goto L_8004A4E0;
    }
    goto skip_0;
    // 0x8004A4E8: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    skip_0:
L_8004A4EC:
    // 0x8004A4EC: jr          $ra
    // 0x8004A4F0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    TRACE_RETURN()
    return;
    // 0x8004A4F0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void func_800115F8_121F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800115F8: beq         $a0, $zero, L_80011608
    if (ctx->r4 == 0) {
        // 0x800115FC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80011608;
    }
    // 0x800115FC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80011600: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x80011604: sw          $a2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r6;
L_80011608:
    // 0x80011608: jr          $ra
    // 0x8001160C: nop

    TRACE_RETURN()
    return;
    // 0x8001160C: nop

;}
RECOMP_FUNC void func_8003CFD0_3DBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CFD0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CFD4: addiu       $v1, $v1, 0x7930
    ctx->r3 = ADD32(ctx->r3, 0X7930);
    // 0x8003CFD8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003CFDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003CFE8: beq         $v0, $zero, L_8003CFFC
    if (ctx->r2 == 0) {
        // 0x8003CFEC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8003CFFC;
    }
    // 0x8003CFEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003CFF0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8003CFF4: b           L_8003D00C
    // 0x8003CFF8: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
        goto L_8003D00C;
    // 0x8003CFF8: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8003CFFC:
    // 0x8003CFFC: jal         0x8003D68C
    // 0x8003D000: nop

    func_8003D68C_3E28C(rdram, ctx);
        goto after_0;
    // 0x8003D000: nop

    after_0:
    // 0x8003D004: jal         0x8003D0B0
    // 0x8003D008: nop

    func_8003D0B0_3DCB0(rdram, ctx);
        goto after_1;
    // 0x8003D008: nop

    after_1:
L_8003D00C:
    // 0x8003D00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D014: jr          $ra
    // 0x8003D018: nop

    TRACE_RETURN()
    return;
    // 0x8003D018: nop

;}
RECOMP_FUNC void func_80006350_6F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80006358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000635C: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x80006360: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80006364: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80006368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000636C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80006370: bnel        $at, $zero, L_80006384
    if (ctx->r1 != 0) {
        // 0x80006374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80006384;
    }
    goto skip_0;
    // 0x80006374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80006378: jal         0x80040110
    // 0x8000637C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000637C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80006380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80006384:
    // 0x80006384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80006388: jal         0x80040110
    // 0x8000638C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8000638C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80006390: jal         0x80041ED0
    // 0x80006394: nop

    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x80006394: nop

    after_2:
    // 0x80006398: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8000639C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800063A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800063A4: jal         0x80040110
    // 0x800063A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800063A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800063AC: jal         0x80041ED0
    // 0x800063B0: nop

    osGetCount_recomp(rdram, ctx);
        goto after_4;
    // 0x800063B0: nop

    after_4:
    // 0x800063B4: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x800063B8: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x800063BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800063C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800063C4: bne         $t8, $zero, L_800063E0
    if (ctx->r24 != 0) {
        // 0x800063C8: subu        $t0, $v1, $t9
        ctx->r8 = SUB32(ctx->r3, ctx->r25);
            goto L_800063E0;
    }
    // 0x800063C8: subu        $t0, $v1, $t9
    ctx->r8 = SUB32(ctx->r3, ctx->r25);
    // 0x800063CC: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x800063D0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x800063D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800063D8: b           L_800063F4
    // 0x800063DC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
        goto L_800063F4;
    // 0x800063DC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
L_800063E0:
    // 0x800063E0: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x800063E4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x800063E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800063EC: nop

    // 0x800063F0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
L_800063F4:
    // 0x800063F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800063F8: bgez        $t0, L_80006410
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800063FC: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80006410;
    }
    // 0x800063FC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80006400: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80006404: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80006408: nop

    // 0x8000640C: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80006410:
    // 0x80006410: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80006414: jal         0x80006430
    // 0x80006418: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    func_80006430_7030(rdram, ctx);
        goto after_5;
    // 0x80006418: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x8000641C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80006420: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80006424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006428: jr          $ra
    // 0x8000642C: nop

    TRACE_RETURN()
    return;
    // 0x8000642C: nop

;}
RECOMP_FUNC void func_800364FC_370FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800364FC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80036500: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80036504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80036508: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003650C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80036510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036514: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80036518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003651C: bne         $a0, $zero, L_8003652C
    if (ctx->r4 != 0) {
        // 0x80036520: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8003652C;
    }
    // 0x80036520: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80036524: b           L_80036644
    // 0x80036528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036644;
    // 0x80036528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003652C:
    // 0x8003652C: addiu       $v0, $sp, 0x34
    ctx->r2 = ADD32(ctx->r29, 0X34);
    // 0x80036530: addiu       $v1, $sp, 0xB4
    ctx->r3 = ADD32(ctx->r29, 0XB4);
L_80036534:
    // 0x80036534: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80036538: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x8003653C: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x80036540: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x80036544: bne         $v0, $v1, L_80036534
    if (ctx->r2 != ctx->r3) {
        // 0x80036548: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80036534;
    }
    // 0x80036548: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8003654C: beq         $s3, $zero, L_80036640
    if (ctx->r19 == 0) {
        // 0x80036550: addiu       $s2, $sp, 0x34
        ctx->r18 = ADD32(ctx->r29, 0X34);
            goto L_80036640;
    }
    // 0x80036550: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
L_80036554:
    // 0x80036554: bltz        $s1, L_80036564
    if (SIGNED(ctx->r17) < 0) {
        // 0x80036558: slti        $at, $s1, 0x20
        ctx->r1 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
            goto L_80036564;
    }
    // 0x80036558: slti        $at, $s1, 0x20
    ctx->r1 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8003655C: bnel        $at, $zero, L_80036570
    if (ctx->r1 != 0) {
        // 0x80036560: lw          $v0, 0x78($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X78);
            goto L_80036570;
    }
    goto skip_0;
    // 0x80036560: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    skip_0:
L_80036564:
    // 0x80036564: b           L_80036644
    // 0x80036568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036644;
    // 0x80036568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003656C: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
L_80036570:
    // 0x80036570: lw          $v1, 0x74($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X74);
    // 0x80036574: bne         $v0, $zero, L_800365D4
    if (ctx->r2 != 0) {
        // 0x80036578: nop
    
            goto L_800365D4;
    }
    // 0x80036578: nop

    // 0x8003657C: bne         $v1, $zero, L_800365D4
    if (ctx->r3 != 0) {
        // 0x80036580: nop
    
            goto L_800365D4;
    }
    // 0x80036580: nop

    // 0x80036584: beql        $s0, $s3, L_80036644
    if (ctx->r16 == ctx->r19) {
        // 0x80036588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80036644;
    }
    goto skip_1;
    // 0x80036588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x8003658C: jal         0x800367E4
    // 0x80036590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800367E4_373E4(rdram, ctx);
        goto after_0;
    // 0x80036590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80036594: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x80036598: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8003659C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800365A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800365A4: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x800365A8: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
    // 0x800365AC: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x800365B0: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
    // 0x800365B4: bnel        $a0, $t8, L_800365C4
    if (ctx->r4 != ctx->r24) {
        // 0x800365B8: lw          $t9, 0x74($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X74);
            goto L_800365C4;
    }
    goto skip_2;
    // 0x800365B8: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    skip_2:
    // 0x800365BC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x800365C0: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
L_800365C4:
    // 0x800365C4: bne         $a0, $t9, L_80036638
    if (ctx->r4 != ctx->r25) {
        // 0x800365C8: nop
    
            goto L_80036638;
    }
    // 0x800365C8: nop

    // 0x800365CC: b           L_80036638
    // 0x800365D0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
        goto L_80036638;
    // 0x800365D0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
L_800365D4:
    // 0x800365D4: bne         $v1, $zero, L_800365F8
    if (ctx->r3 != 0) {
        // 0x800365D8: sll         $t0, $s1, 2
        ctx->r8 = S32(ctx->r17 << 2);
            goto L_800365F8;
    }
    // 0x800365D8: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x800365DC: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x800365E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800365E4: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x800365E8: sw          $s0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r16;
    // 0x800365EC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x800365F0: b           L_80036638
    // 0x800365F4: lw          $s0, 0x78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X78);
        goto L_80036638;
    // 0x800365F4: lw          $s0, 0x78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X78);
L_800365F8:
    // 0x800365F8: bne         $v0, $zero, L_80036620
    if (ctx->r2 != 0) {
        // 0x800365FC: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_80036620;
    }
    // 0x800365FC: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80036600: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80036604: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x80036608: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003660C: andi        $t5, $s1, 0xFFFF
    ctx->r13 = ctx->r17 & 0XFFFF;
    // 0x80036610: sw          $s0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r16;
    // 0x80036614: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80036618: b           L_80036638
    // 0x8003661C: lw          $s0, 0x74($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X74);
        goto L_80036638;
    // 0x8003661C: lw          $s0, 0x74($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X74);
L_80036620:
    // 0x80036620: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x80036624: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80036628: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8003662C: sw          $s0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r16;
    // 0x80036630: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80036634: lw          $s0, 0x78($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X78);
L_80036638:
    // 0x80036638: bne         $s0, $zero, L_80036554
    if (ctx->r16 != 0) {
        // 0x8003663C: nop
    
            goto L_80036554;
    }
    // 0x8003663C: nop

L_80036640:
    // 0x80036640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80036644:
    // 0x80036644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80036648: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003664C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80036650: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80036654: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80036658: jr          $ra
    // 0x8003665C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x8003665C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void alLoadNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E494: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004E498: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004E49C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8004E4A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004E4A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004E4A8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E4AC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E4B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004E4B4: addiu       $a1, $a1, -0xCA4
    ctx->r5 = ADD32(ctx->r5, -0XCA4);
    // 0x8004E4B8: addiu       $a2, $a2, -0x1350
    ctx->r6 = ADD32(ctx->r6, -0X1350);
    // 0x8004E4BC: jal         0x800518C0
    // 0x8004E4C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E4C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8004E4C4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8004E4C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E4CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E4D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E4D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8004E4D8: jal         0x800476B0
    // 0x8004E4DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8004E4DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8004E4E0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8004E4E4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x8004E4E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004E4EC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8004E4F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E4F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E4F8: jal         0x800476B0
    // 0x8004E4FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8004E4FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8004E500: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8004E504: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8004E508: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8004E50C: jalr        $t9
    // 0x8004E510: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8004E510: nop

    after_3:
    // 0x8004E514: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004E518: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8004E51C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x8004E520: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x8004E524: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8004E528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004E52C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004E530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8004E534: jr          $ra
    // 0x8004E538: nop

    TRACE_RETURN()
    return;
    // 0x8004E538: nop

;}
RECOMP_FUNC void func_80036CB4_378B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036CB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80036CB8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80036CBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036CC0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80036CC4: bltzl       $t6, L_80036CE8
    if (SIGNED(ctx->r14) < 0) {
        // 0x80036CC8: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_80036CE8;
    }
    goto skip_0;
    // 0x80036CC8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x80036CCC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80036CD0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80036CD4: jal         0x80036D2C
    // 0x80036CD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_80036D2C_3792C(rdram, ctx);
        goto after_0;
    // 0x80036CD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x80036CDC: b           L_80036D00
    // 0x80036CE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80036D00;
    // 0x80036CE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80036CE4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_80036CE8:
    // 0x80036CE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80036CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80036CF0: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80036CF4: jal         0x80036D2C
    // 0x80036CF8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80036D2C_3792C(rdram, ctx);
        goto after_1;
    // 0x80036CF8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_1:
    // 0x80036CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80036D00:
    // 0x80036D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80036D04: jr          $ra
    // 0x80036D08: nop

    TRACE_RETURN()
    return;
    // 0x80036D08: nop

;}
RECOMP_FUNC void func_80016950_17550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016950: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80016954: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80016958: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8001695C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80016960: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80016964: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80016968: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001696C: sh          $t6, -0x523C($at)
    MEM_H(-0X523C, ctx->r1) = ctx->r14;
    // 0x80016970: addiu       $a1, $a1, -0x7B08
    ctx->r5 = ADD32(ctx->r5, -0X7B08);
    // 0x80016974: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80016978: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001697C: sw          $zero, -0x7B04($at)
    MEM_W(-0X7B04, ctx->r1) = 0;
    // 0x80016980: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016984: sw          $zero, -0x7AD8($at)
    MEM_W(-0X7AD8, ctx->r1) = 0;
    // 0x80016988: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001698C: sw          $zero, -0x7B5C($at)
    MEM_W(-0X7B5C, ctx->r1) = 0;
    // 0x80016990: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016994: sb          $zero, -0x7B0C($at)
    MEM_B(-0X7B0C, ctx->r1) = 0;
    // 0x80016998: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8001699C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800169A0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800169A4: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x800169A8: lh          $t9, 0x2DB2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2DB2);
    // 0x800169AC: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x800169B0: ori         $a2, $a2, 0xD6D8
    ctx->r6 = ctx->r6 | 0XD6D8;
    // 0x800169B4: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800169B8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800169BC: ori         $at, $at, 0x4C80
    ctx->r1 = ctx->r1 | 0X4C80;
    // 0x800169C0: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x800169C4: addiu       $a3, $a3, -0x7B58
    ctx->r7 = ADD32(ctx->r7, -0X7B58);
    // 0x800169C8: mflo        $t0
    ctx->r8 = lo;
    // 0x800169CC: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x800169D0: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x800169D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800169D8: sw          $t2, -0x7AFC($at)
    MEM_W(-0X7AFC, ctx->r1) = ctx->r10;
    // 0x800169DC: lh          $t3, 0x2DB2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2DB2);
    // 0x800169E0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800169E4: ori         $at, $at, 0xD380
    ctx->r1 = ctx->r1 | 0XD380;
    // 0x800169E8: multu       $t3, $a2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800169EC: mflo        $t4
    ctx->r12 = lo;
    // 0x800169F0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x800169F4: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x800169F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800169FC: sw          $t6, -0x7B00($at)
    MEM_W(-0X7B00, ctx->r1) = ctx->r14;
    // 0x80016A00: lh          $t7, 0x2DB2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2DB2);
    // 0x80016A04: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80016A08: ori         $at, $at, 0xD3C0
    ctx->r1 = ctx->r1 | 0XD3C0;
    // 0x80016A0C: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016A10: mflo        $t8
    ctx->r24 = lo;
    // 0x80016A14: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80016A18: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80016A1C: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x80016A20: lh          $t1, 0x2DB2($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2DB2);
    // 0x80016A24: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80016A28: ori         $at, $at, 0xD618
    ctx->r1 = ctx->r1 | 0XD618;
    // 0x80016A2C: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016A30: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80016A34: addiu       $t0, $t0, -0x4958
    ctx->r8 = ADD32(ctx->r8, -0X4958);
    // 0x80016A38: mflo        $t2
    ctx->r10 = lo;
    // 0x80016A3C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x80016A40: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80016A44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016A48: sw          $t4, -0x7AF8($at)
    MEM_W(-0X7AF8, ctx->r1) = ctx->r12;
    // 0x80016A4C: lh          $t5, 0x2DB2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2DB2);
    // 0x80016A50: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80016A54: ori         $at, $at, 0xD698
    ctx->r1 = ctx->r1 | 0XD698;
    // 0x80016A58: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016A5C: addiu       $t3, $t0, 0x78
    ctx->r11 = ADD32(ctx->r8, 0X78);
    // 0x80016A60: mflo        $t6
    ctx->r14 = lo;
    // 0x80016A64: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80016A68: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80016A6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016A70: sw          $t8, -0x7AF4($at)
    MEM_W(-0X7AF4, ctx->r1) = ctx->r24;
    // 0x80016A74: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
L_80016A78:
    // 0x80016A78: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80016A7C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80016A80: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80016A84: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80016A88: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80016A8C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80016A90: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80016A94: bne         $t0, $t3, L_80016A78
    if (ctx->r8 != ctx->r11) {
        // 0x80016A98: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80016A78;
    }
    // 0x80016A98: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80016A9C: jr          $ra
    // 0x80016AA0: nop

    TRACE_RETURN()
    return;
    // 0x80016AA0: nop

;}
RECOMP_FUNC void guLookAtReflect(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004729C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800472A0: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800472A4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800472A8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800472AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800472B0: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x800472B4: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800472B8: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800472BC: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800472C0: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x800472C4: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800472C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800472CC: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x800472D0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800472D4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x800472D8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800472DC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800472E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800472E4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800472E8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x800472EC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800472F0: jal         0x80046E90
    // 0x800472F4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    guLookAtReflectF(rdram, ctx);
        goto after_0;
    // 0x800472F4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800472F8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800472FC: jal         0x80043AA0
    // 0x80047300: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80047300: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    after_1:
    // 0x80047304: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80047308: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8004730C: jr          $ra
    // 0x80047310: nop

    TRACE_RETURN()
    return;
    // 0x80047310: nop

;}
RECOMP_FUNC void func_8001E868_1F468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E868: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001E86C: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8001E870: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8001E874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E878: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8001E87C: bne         $v0, $at, L_8001E88C
    if (ctx->r2 != ctx->r1) {
        // 0x8001E880: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8001E88C;
    }
    // 0x8001E880: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001E884: b           L_8001E890
    // 0x8001E888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E890;
    // 0x8001E888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E88C:
    // 0x8001E88C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8001E890:
    // 0x8001E890: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x8001E894: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001E898: jal         0x80003F30
    // 0x8001E89C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001E89C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001E8A0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8001E8A4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E8A8: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8001E8AC: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x8001E8B0: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x8001E8B4: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8001E8B8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E8BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E8C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E8C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E8C8: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x8001E8CC: swc1        $f2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8D0: swc1        $f2, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8D4: swc1        $f2, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8D8: swc1        $f2, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8DC: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8E0: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8E4: swc1        $f2, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8E8: swc1        $f2, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8EC: swc1        $f2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8F0: swc1        $f2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f2.u32l;
    // 0x8001E8F4: swc1        $f12, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f12.u32l;
    // 0x8001E8F8: swc1        $f12, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f12.u32l;
    // 0x8001E8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E900: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8001E904: jr          $ra
    // 0x8001E908: nop

    TRACE_RETURN()
    return;
    // 0x8001E908: nop

;}
RECOMP_FUNC void func_8002B3B0_2BFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B3B0: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x8002B3B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002B3B8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002B3BC: lw          $v1, -0x70A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X70A0);
    // 0x8002B3C0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8002B3C4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8002B3C8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8002B3CC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8002B3D0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002B3D4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002B3D8: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8002B3DC: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8002B3E0: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8002B3E4: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8002B3E8: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8002B3EC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8002B3F0: sw          $a0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r4;
    // 0x8002B3F4: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x8002B3F8: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x8002B3FC: sw          $a3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r7;
    // 0x8002B400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002B404: sh          $zero, 0x114($sp)
    MEM_H(0X114, ctx->r29) = 0;
    // 0x8002B408: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x8002B40C: swc1        $f0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f0.u32l;
    // 0x8002B410: bne         $v1, $zero, L_8002B450
    if (ctx->r3 != 0) {
        // 0x8002B414: swc1        $f0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->f0.u32l;
            goto L_8002B450;
    }
    // 0x8002B414: swc1        $f0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f0.u32l;
    // 0x8002B418: addiu       $t7, $sp, 0xDC
    ctx->r15 = ADD32(ctx->r29, 0XDC);
    // 0x8002B41C: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x8002B420: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
L_8002B424:
    // 0x8002B424: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002B428: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002B42C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002B430: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8002B434: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002B438: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8002B43C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002B440: bne         $t7, $t9, L_8002B424
    if (ctx->r15 != ctx->r25) {
        // 0x8002B444: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8002B424;
    }
    // 0x8002B444: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8002B448: b           L_8002BDB4
    // 0x8002B44C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002BDB4;
    // 0x8002B44C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002B450:
    // 0x8002B450: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B454: lwc1        $f4, -0x3CB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3CB8);
    // 0x8002B458: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B45C: lwc1        $f6, -0x3CB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3CB4);
    // 0x8002B460: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002B464: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8002B468: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x8002B46C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8002B470: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8002B474: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8002B478: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x8002B47C: lw          $a2, -0x709C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X709C);
    // 0x8002B480: lwc1        $f30, 0x1AC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002B484: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x8002B488: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8002B48C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8002B490: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x8002B494: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x8002B498: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    // 0x8002B49C: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
L_8002B4A0:
    // 0x8002B4A0: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B4A4: lwc1        $f16, 0x1B8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002B4A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002B4AC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8002B4B0: mflo        $t8
    ctx->r24 = lo;
    // 0x8002B4B4: addu        $v1, $a2, $t8
    ctx->r3 = ADD32(ctx->r6, ctx->r24);
    // 0x8002B4B8: bc1f        L_8002B4EC
    if (!c1cs) {
        // 0x8002B4BC: lhu         $a1, 0x0($v1)
        ctx->r5 = MEM_HU(ctx->r3, 0X0);
            goto L_8002B4EC;
    }
    // 0x8002B4BC: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x8002B4C0: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B4C4: mflo        $t9
    ctx->r25 = lo;
    // 0x8002B4C8: addu        $t7, $a2, $t9
    ctx->r15 = ADD32(ctx->r6, ctx->r25);
    // 0x8002B4CC: lh          $t6, 0x6($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X6);
    // 0x8002B4D0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002B4D4: nop

    // 0x8002B4D8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B4DC: c.lt.s      $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f4.fl < ctx->f30.fl;
    // 0x8002B4E0: nop

    // 0x8002B4E4: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B4E8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_0;
    // 0x8002B4E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
L_8002B4EC:
    // 0x8002B4EC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8002B4F0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8002B4F4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x8002B4F8: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8002B4FC: bc1f        L_8002B524
    if (!c1cs) {
        // 0x8002B500: addu        $a0, $a2, $t8
        ctx->r4 = ADD32(ctx->r6, ctx->r24);
            goto L_8002B524;
    }
    // 0x8002B500: addu        $a0, $a2, $t8
    ctx->r4 = ADD32(ctx->r6, ctx->r24);
    // 0x8002B504: lh          $t9, 0xC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC);
    // 0x8002B508: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002B50C: nop

    // 0x8002B510: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B514: c.lt.s      $f30, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f30.fl < ctx->f8.fl;
    // 0x8002B518: nop

    // 0x8002B51C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B520: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_1;
    // 0x8002B520: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
L_8002B524:
    // 0x8002B524: lh          $t7, 0xC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XC);
    // 0x8002B528: lwc1        $f12, 0x1C4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8002B52C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002B530: nop

    // 0x8002B534: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B538: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8002B53C: c.lt.s      $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f30.fl < ctx->f6.fl;
    // 0x8002B540: nop

    // 0x8002B544: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B548: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_2;
    // 0x8002B548: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_2:
    // 0x8002B54C: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x8002B550: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002B554: nop

    // 0x8002B558: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002B55C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8002B560: c.lt.s      $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f4.fl < ctx->f30.fl;
    // 0x8002B564: nop

    // 0x8002B568: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B56C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_3;
    // 0x8002B56C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x8002B570: lh          $t8, 0x10($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X10);
    // 0x8002B574: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002B578: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002B57C: nop

    // 0x8002B580: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B584: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8002B588: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8002B58C: nop

    // 0x8002B590: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B594: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_4;
    // 0x8002B594: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_4:
    // 0x8002B598: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x8002B59C: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
    // 0x8002B5A0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002B5A4: nop

    // 0x8002B5A8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002B5AC: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8002B5B0: lwc1        $f12, 0x1C0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002B5B4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8002B5B8: nop

    // 0x8002B5BC: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B5C0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_5;
    // 0x8002B5C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_5:
    // 0x8002B5C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002B5C8: nop

    // 0x8002B5CC: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8002B5D0: nop

    // 0x8002B5D4: bc1fl       L_8002B5F0
    if (!c1cs) {
        // 0x8002B5D8: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_8002B5F0;
    }
    goto skip_6;
    // 0x8002B5D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_6:
    // 0x8002B5DC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8002B5E0: nop

    // 0x8002B5E4: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B5E8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_7;
    // 0x8002B5E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_7:
    // 0x8002B5EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_8002B5F0:
    // 0x8002B5F0: nop

    // 0x8002B5F4: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8002B5F8: nop

    // 0x8002B5FC: bc1fl       L_8002B618
    if (!c1cs) {
        // 0x8002B600: lh          $t7, 0x8($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X8);
            goto L_8002B618;
    }
    goto skip_8;
    // 0x8002B600: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    skip_8:
    // 0x8002B604: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8002B608: nop

    // 0x8002B60C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B610: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_9;
    // 0x8002B610: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_9:
    // 0x8002B614: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
L_8002B618:
    // 0x8002B618: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B61C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002B620: nop

    // 0x8002B624: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002B628: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8002B62C: nop

    // 0x8002B630: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B634: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_10;
    // 0x8002B634: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_10:
    // 0x8002B638: lh          $t6, 0xE($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE);
    // 0x8002B63C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002B640: nop

    // 0x8002B644: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002B648: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002B64C: nop

    // 0x8002B650: bc1fl       L_8002B868
    if (!c1cs) {
        // 0x8002B654: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002B868;
    }
    goto skip_11;
    // 0x8002B654: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_11:
    // 0x8002B658: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8002B65C:
    // 0x8002B65C: lwc1        $f12, 0x1C4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8002B660: bne         $t4, $a1, L_8002B6A0
    if (ctx->r12 != ctx->r5) {
        // 0x8002B664: lwc1        $f16, 0x1B8($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
            goto L_8002B6A0;
    }
    // 0x8002B664: lwc1        $f16, 0x1B8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002B668: addiu       $t9, $sp, 0xDC
    ctx->r25 = ADD32(ctx->r29, 0XDC);
    // 0x8002B66C: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x8002B670: lw          $t8, 0x1A8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A8);
L_8002B674:
    // 0x8002B674: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002B678: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002B67C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002B680: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002B684: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002B688: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002B68C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002B690: bne         $t9, $t6, L_8002B674
    if (ctx->r25 != ctx->r14) {
        // 0x8002B694: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002B674;
    }
    // 0x8002B694: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8002B698: b           L_8002BDB4
    // 0x8002B69C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002BDB4;
    // 0x8002B69C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002B6A0:
    // 0x8002B6A0: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B6A4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8002B6A8: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002B6AC: mflo        $t7
    ctx->r15 = lo;
    // 0x8002B6B0: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x8002B6B4: bc1f        L_8002B6E8
    if (!c1cs) {
        // 0x8002B6B8: lhu         $a1, 0x0($t6)
        ctx->r5 = MEM_HU(ctx->r14, 0X0);
            goto L_8002B6E8;
    }
    // 0x8002B6B8: lhu         $a1, 0x0($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X0);
    // 0x8002B6BC: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B6C0: mflo        $t9
    ctx->r25 = lo;
    // 0x8002B6C4: addu        $t8, $a2, $t9
    ctx->r24 = ADD32(ctx->r6, ctx->r25);
    // 0x8002B6C8: lh          $t7, 0x6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X6);
    // 0x8002B6CC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002B6D0: nop

    // 0x8002B6D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B6D8: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x8002B6DC: nop

    // 0x8002B6E0: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B6E4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_12;
    // 0x8002B6E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_12:
L_8002B6E8:
    // 0x8002B6E8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8002B6EC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002B6F0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002B6F4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002B6F8: addu        $a0, $a2, $t6
    ctx->r4 = ADD32(ctx->r6, ctx->r14);
    // 0x8002B6FC: bc1f        L_8002B724
    if (!c1cs) {
        // 0x8002B700: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8002B724;
    }
    // 0x8002B700: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002B704: lh          $t9, 0xC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC);
    // 0x8002B708: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002B70C: nop

    // 0x8002B710: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B714: c.lt.s      $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f30.fl < ctx->f4.fl;
    // 0x8002B718: nop

    // 0x8002B71C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B720: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_13;
    // 0x8002B720: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_13:
L_8002B724:
    // 0x8002B724: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    // 0x8002B728: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002B72C: nop

    // 0x8002B730: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B734: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8002B738: c.lt.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl < ctx->f10.fl;
    // 0x8002B73C: nop

    // 0x8002B740: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B744: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_14;
    // 0x8002B744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_14:
    // 0x8002B748: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8002B74C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002B750: nop

    // 0x8002B754: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002B758: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8002B75C: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x8002B760: nop

    // 0x8002B764: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B768: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_15;
    // 0x8002B768: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_15:
    // 0x8002B76C: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x8002B770: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002B774: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002B778: nop

    // 0x8002B77C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B780: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8002B784: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002B788: nop

    // 0x8002B78C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B790: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_16;
    // 0x8002B790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_16:
    // 0x8002B794: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x8002B798: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
    // 0x8002B79C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002B7A0: nop

    // 0x8002B7A4: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002B7A8: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8002B7AC: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002B7B0: nop

    // 0x8002B7B4: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B7B8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_17;
    // 0x8002B7B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_17:
    // 0x8002B7BC: lwc1        $f12, 0x1C0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002B7C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002B7C4: nop

    // 0x8002B7C8: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8002B7CC: nop

    // 0x8002B7D0: bc1fl       L_8002B7EC
    if (!c1cs) {
        // 0x8002B7D4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_8002B7EC;
    }
    goto skip_18;
    // 0x8002B7D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_18:
    // 0x8002B7D8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8002B7DC: nop

    // 0x8002B7E0: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B7E4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_19;
    // 0x8002B7E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_19:
    // 0x8002B7E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8002B7EC:
    // 0x8002B7EC: nop

    // 0x8002B7F0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002B7F4: nop

    // 0x8002B7F8: bc1fl       L_8002B814
    if (!c1cs) {
        // 0x8002B7FC: lh          $t8, 0x8($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X8);
            goto L_8002B814;
    }
    goto skip_20;
    // 0x8002B7FC: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    skip_20:
    // 0x8002B800: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8002B804: nop

    // 0x8002B808: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B80C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_21;
    // 0x8002B80C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_21:
    // 0x8002B810: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
L_8002B814:
    // 0x8002B814: lwc1        $f0, 0x1B0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B818: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002B81C: nop

    // 0x8002B820: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002B824: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8002B828: nop

    // 0x8002B82C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B830: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_22;
    // 0x8002B830: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_22:
    // 0x8002B834: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x8002B838: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002B83C: nop

    // 0x8002B840: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B844: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8002B848: nop

    // 0x8002B84C: bc1tl       L_8002B65C
    if (c1cs) {
        // 0x8002B850: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8002B65C;
    }
    goto skip_23;
    // 0x8002B850: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_23:
    // 0x8002B854: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002B858: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002B85C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002B860: addu        $v1, $a2, $t6
    ctx->r3 = ADD32(ctx->r6, ctx->r14);
    // 0x8002B864: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002B868:
    // 0x8002B868: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8002B86C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002B870: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x8002B874: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002B878: addiu       $v0, $s2, 0x3
    ctx->r2 = ADD32(ctx->r18, 0X3);
    // 0x8002B87C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8002B880: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8002B884: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x8002B888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002B88C: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8002B890: sh          $t9, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r25;
    // 0x8002B894: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
L_8002B898:
    // 0x8002B898: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B89C: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002B8A0: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002B8A4: mflo        $t7
    ctx->r15 = lo;
    // 0x8002B8A8: addu        $v1, $a2, $t7
    ctx->r3 = ADD32(ctx->r6, ctx->r15);
    // 0x8002B8AC: lhu         $s2, 0x0($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X0);
    // 0x8002B8B0: multu       $s2, $s0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B8B4: mflo        $t6
    ctx->r14 = lo;
    // 0x8002B8B8: addu        $s3, $s1, $t6
    ctx->r19 = ADD32(ctx->r17, ctx->r14);
    // 0x8002B8BC: lwc1        $f26, 0x4($s3)
    ctx->f26.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8002B8C0: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8002B8C4: lwc1        $f16, 0x8($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8002B8C8: mul.s       $f22, $f10, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8002B8CC: lwc1        $f18, 0xC($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8002B8D0: lbu         $s4, 0x10($s3)
    ctx->r20 = MEM_BU(ctx->r19, 0X10);
    // 0x8002B8D4: mul.s       $f6, $f30, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f14.fl);
    // 0x8002B8D8: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x8002B8DC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8002B8E0: lwc1        $f8, 0x1B8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002B8E4: add.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8002B8E8: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8002B8EC: lwc1        $f10, 0x1C0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002B8F0: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x8002B8F4: beq         $s4, $zero, L_8002B910
    if (ctx->r20 == 0) {
        // 0x8002B8F8: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002B910;
    }
    // 0x8002B8F8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8002B8FC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002B900: c.lt.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d < ctx->f6.d;
    // 0x8002B904: nop

    // 0x8002B908: bc1fl       L_8002BA78
    if (!c1cs) {
        // 0x8002B90C: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_8002BA78;
    }
    goto skip_24;
    // 0x8002B90C: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_24:
L_8002B910:
    // 0x8002B910: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8002B914: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002B918: mul.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8002B91C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002B920: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002B924: c.eq.d      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.d == ctx->f8.d;
    // 0x8002B928: nop

    // 0x8002B92C: bc1fl       L_8002B944
    if (!c1cs) {
        // 0x8002B930: neg.s       $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
            goto L_8002B944;
    }
    goto skip_25;
    // 0x8002B930: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    skip_25:
    // 0x8002B934: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002B938: b           L_8002B94C
    // 0x8002B93C: nop

        goto L_8002B94C;
    // 0x8002B93C: nop

    // 0x8002B940: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
L_8002B944:
    // 0x8002B944: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x8002B948: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8002B94C:
    // 0x8002B94C: bne         $s5, $zero, L_8002BA34
    if (ctx->r21 != 0) {
        // 0x8002B950: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002BA34;
    }
    // 0x8002B950: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B954: ldc1        $f6, -0x3CB0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3CB0);
    // 0x8002B958: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002B95C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002B960: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x8002B964: nop

    // 0x8002B968: bc1f        L_8002B9B4
    if (!c1cs) {
        // 0x8002B96C: nop
    
            goto L_8002B9B4;
    }
    // 0x8002B96C: nop

    // 0x8002B970: ldc1        $f8, -0x3CA8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3CA8);
    // 0x8002B974: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002B978: lwc1        $f4, 0x1C0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002B97C: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8002B980: nop

    // 0x8002B984: bc1f        L_8002B9B4
    if (!c1cs) {
        // 0x8002B988: nop
    
            goto L_8002B9B4;
    }
    // 0x8002B988: nop

    // 0x8002B98C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002B990: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002B994: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002B998: add.s       $f4, $f30, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f30.fl + ctx->f10.fl;
    // 0x8002B99C: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8002B9A0: nop

    // 0x8002B9A4: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8002B9A8: add.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8002B9AC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8002B9B0: add.s       $f24, $f4, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f18.fl;
L_8002B9B4:
    // 0x8002B9B4: beql        $a3, $zero, L_8002BA38
    if (ctx->r7 == 0) {
        // 0x8002B9B8: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_26;
    // 0x8002B9B8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_26:
    // 0x8002B9BC: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8002B9C0: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002B9C4: c.eq.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d == ctx->f6.d;
    // 0x8002B9C8: nop

    // 0x8002B9CC: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002B9D0: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_27;
    // 0x8002B9D0: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_27:
    // 0x8002B9D4: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8002B9D8: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8002B9DC: c.le.d      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.d <= ctx->f20.d;
    // 0x8002B9E0: nop

    // 0x8002B9E4: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002B9E8: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_28;
    // 0x8002B9E8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_28:
    // 0x8002B9EC: c.eq.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl == ctx->f14.fl;
    // 0x8002B9F0: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8002B9F4: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002B9F8: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_29;
    // 0x8002B9F8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_29:
    // 0x8002B9FC: c.eq.s      $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f6.fl == ctx->f26.fl;
    // 0x8002BA00: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002BA04: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002BA08: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_30;
    // 0x8002BA08: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_30:
    // 0x8002BA0C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002BA10: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002BA14: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002BA18: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_31;
    // 0x8002BA18: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_31:
    // 0x8002BA1C: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x8002BA20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002BA24: bc1fl       L_8002BA38
    if (!c1cs) {
        // 0x8002BA28: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002BA38;
    }
    goto skip_32;
    // 0x8002BA28: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_32:
    // 0x8002BA2C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002BA30: nop

L_8002BA34:
    // 0x8002BA34: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_8002BA38:
    // 0x8002BA38: c.lt.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d < ctx->f4.d;
    // 0x8002BA3C: nop

    // 0x8002BA40: bc1fl       L_8002BA78
    if (!c1cs) {
        // 0x8002BA44: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_8002BA78;
    }
    goto skip_33;
    // 0x8002BA44: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_33:
    // 0x8002BA48: c.le.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl <= ctx->f28.fl;
    // 0x8002BA4C: nop

    // 0x8002BA50: bc1fl       L_8002BA78
    if (!c1cs) {
        // 0x8002BA54: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_8002BA78;
    }
    goto skip_34;
    // 0x8002BA54: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_34:
    // 0x8002BA58: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x8002BA5C: swc1        $f14, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f14.u32l;
    // 0x8002BA60: swc1        $f26, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f26.u32l;
    // 0x8002BA64: swc1        $f16, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f16.u32l;
    // 0x8002BA68: swc1        $f18, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f18.u32l;
    // 0x8002BA6C: swc1        $f24, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f24.u32l;
    // 0x8002BA70: andi        $t2, $s4, 0xFF
    ctx->r10 = ctx->r20 & 0XFF;
    // 0x8002BA74: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
L_8002BA78:
    // 0x8002BA78: c.lt.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d < ctx->f6.d;
    // 0x8002BA7C: nop

    // 0x8002BA80: bc1fl       L_8002BCA4
    if (!c1cs) {
        // 0x8002BA84: lh          $s2, 0x2($v1)
        ctx->r18 = MEM_H(ctx->r3, 0X2);
            goto L_8002BCA4;
    }
    goto skip_35;
    // 0x8002BA84: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    skip_35:
    // 0x8002BA88: lh          $s2, 0x4($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X4);
    // 0x8002BA8C: lwc1        $f10, 0x1C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8002BA90: lwc1        $f8, 0x1B8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002BA94: bne         $s2, $zero, L_8002BC98
    if (ctx->r18 != 0) {
        // 0x8002BA98: lwc1        $f4, 0x174($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
            goto L_8002BC98;
    }
    // 0x8002BA98: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x8002BA9C: c.lt.s      $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f28.fl < ctx->f10.fl;
    // 0x8002BAA0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x8002BAA4: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x8002BAA8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BAAC: bc1f        L_8002BC40
    if (!c1cs) {
        // 0x8002BAB0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8002BC40;
    }
    // 0x8002BAB0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002BAB4: mul.s       $f0, $f8, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002BAB8: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8002BABC: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x8002BAC0: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8002BAC4: swc1        $f6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f6.u32l;
    // 0x8002BAC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002BACC: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002BAD0: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002BAD4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002BAD8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8002BADC: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
    // 0x8002BAE0: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    // 0x8002BAE4: bc1f        L_8002BAF8
    if (!c1cs) {
        // 0x8002BAE8: swc1        $f10, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
            goto L_8002BAF8;
    }
    // 0x8002BAE8: swc1        $f10, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
    // 0x8002BAEC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8002BAF0: b           L_8002BB00
    // 0x8002BAF4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8002BB00;
    // 0x8002BAF4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8002BAF8:
    // 0x8002BAF8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8002BAFC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8002BB00:
    // 0x8002BB00: ldc1        $f8, -0x3CA0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3CA0);
    // 0x8002BB04: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8002BB08: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002BB0C: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x8002BB10: lwc1        $f8, 0x1C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002BB14: bc1f        L_8002BB58
    if (!c1cs) {
        // 0x8002BB18: nop
    
            goto L_8002BB58;
    }
    // 0x8002BB18: nop

    // 0x8002BB1C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002BB20: c.eq.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d == ctx->f6.d;
    // 0x8002BB24: nop

    // 0x8002BB28: bc1t        L_8002BB58
    if (c1cs) {
        // 0x8002BB2C: nop
    
            goto L_8002BB58;
    }
    // 0x8002BB2C: nop

    // 0x8002BB30: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8002BB34: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BB38: c.le.d      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.d <= ctx->f10.d;
    // 0x8002BB3C: nop

    // 0x8002BB40: bc1f        L_8002BB54
    if (!c1cs) {
        // 0x8002BB44: nop
    
            goto L_8002BB54;
    }
    // 0x8002BB44: nop

    // 0x8002BB48: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BB4C: b           L_8002BB58
    // 0x8002BB50: lwc1        $f14, -0x3C98($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C98);
        goto L_8002BB58;
    // 0x8002BB50: lwc1        $f14, -0x3C98($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C98);
L_8002BB54:
    // 0x8002BB54: lwc1        $f14, -0x3C94($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C94);
L_8002BB58:
    // 0x8002BB58: mul.s       $f0, $f8, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x8002BB5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002BB60: lwc1        $f8, 0x1C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8002BB64: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BB68: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8002BB6C: nop

    // 0x8002BB70: bc1fl       L_8002BB88
    if (!c1cs) {
        // 0x8002BB74: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8002BB88;
    }
    goto skip_36;
    // 0x8002BB74: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_36:
    // 0x8002BB78: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8002BB7C: b           L_8002BB8C
    // 0x8002BB80: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8002BB8C;
    // 0x8002BB80: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8002BB84: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8002BB88:
    // 0x8002BB88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8002BB8C:
    // 0x8002BB8C: ldc1        $f10, -0x3C90($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3C90);
    // 0x8002BB90: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8002BB94: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8002BB98: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8002BB9C: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002BBA0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8002BBA4: bc1fl       L_8002BBEC
    if (!c1cs) {
        // 0x8002BBA8: add.s       $f8, $f12, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
            goto L_8002BBEC;
    }
    goto skip_37;
    // 0x8002BBA8: add.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
    skip_37:
    // 0x8002BBAC: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8002BBB0: c.eq.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d == ctx->f4.d;
    // 0x8002BBB4: nop

    // 0x8002BBB8: bc1tl       L_8002BBEC
    if (c1cs) {
        // 0x8002BBBC: add.s       $f8, $f12, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
            goto L_8002BBEC;
    }
    goto skip_38;
    // 0x8002BBBC: add.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
    skip_38:
    // 0x8002BBC0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002BBC4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BBC8: c.le.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d <= ctx->f6.d;
    // 0x8002BBCC: nop

    // 0x8002BBD0: bc1f        L_8002BBE4
    if (!c1cs) {
        // 0x8002BBD4: nop
    
            goto L_8002BBE4;
    }
    // 0x8002BBD4: nop

    // 0x8002BBD8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BBDC: b           L_8002BBE8
    // 0x8002BBE0: lwc1        $f12, -0x3C88($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C88);
        goto L_8002BBE8;
    // 0x8002BBE0: lwc1        $f12, -0x3C88($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C88);
L_8002BBE4:
    // 0x8002BBE4: lwc1        $f12, -0x3C84($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C84);
L_8002BBE8:
    // 0x8002BBE8: add.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
L_8002BBEC:
    // 0x8002BBEC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002BBF0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8002BBF4: add.s       $f30, $f14, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = ctx->f14.fl + ctx->f30.fl;
    // 0x8002BBF8: bne         $t9, $zero, L_8002B898
    if (ctx->r25 != 0) {
        // 0x8002BBFC: swc1        $f8, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
            goto L_8002B898;
    }
    // 0x8002BBFC: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
    // 0x8002BC00: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002BC04: sh          $t8, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r24;
    // 0x8002BC08: addiu       $t6, $sp, 0xDC
    ctx->r14 = ADD32(ctx->r29, 0XDC);
    // 0x8002BC0C: addiu       $t8, $t6, 0x48
    ctx->r24 = ADD32(ctx->r14, 0X48);
    // 0x8002BC10: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
L_8002BC14:
    // 0x8002BC14: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002BC18: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002BC1C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002BC20: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002BC24: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002BC28: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002BC2C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002BC30: bne         $t6, $t8, L_8002BC14
    if (ctx->r14 != ctx->r24) {
        // 0x8002BC34: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002BC14;
    }
    // 0x8002BC34: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8002BC38: b           L_8002BDB4
    // 0x8002BC3C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002BDB4;
    // 0x8002BC3C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002BC40:
    // 0x8002BC40: bne         $t4, $a1, L_8002BC80
    if (ctx->r12 != ctx->r5) {
        // 0x8002BC44: lwc1        $f4, 0x1B4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
            goto L_8002BC80;
    }
    // 0x8002BC44: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002BC48: addiu       $t8, $sp, 0xDC
    ctx->r24 = ADD32(ctx->r29, 0XDC);
    // 0x8002BC4C: addiu       $t7, $t8, 0x48
    ctx->r15 = ADD32(ctx->r24, 0X48);
    // 0x8002BC50: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
L_8002BC54:
    // 0x8002BC54: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002BC58: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002BC5C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002BC60: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002BC64: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8002BC68: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002BC6C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8002BC70: bne         $t8, $t7, L_8002BC54
    if (ctx->r24 != ctx->r15) {
        // 0x8002BC74: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002BC54;
    }
    // 0x8002BC74: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002BC78: b           L_8002BDB4
    // 0x8002BC7C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002BDB4;
    // 0x8002BC7C: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002BC80:
    // 0x8002BC80: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002BC84: lwc1        $f30, 0x1AC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002BC88: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x8002BC8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002BC90: b           L_8002B4A0
    // 0x8002BC94: nop

        goto L_8002B4A0;
    // 0x8002BC94: nop

L_8002BC98:
    // 0x8002BC98: b           L_8002B898
    // 0x8002BC9C: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002B898;
    // 0x8002BC9C: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8002BCA0: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
L_8002BCA4:
    // 0x8002BCA4: bne         $s2, $zero, L_8002BDAC
    if (ctx->r18 != 0) {
        // 0x8002BCA8: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002BDAC;
    }
    // 0x8002BCA8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002BCAC: bne         $a3, $at, L_8002BD5C
    if (ctx->r7 != ctx->r1) {
        // 0x8002BCB0: andi        $v0, $a1, 0xFFFF
        ctx->r2 = ctx->r5 & 0XFFFF;
            goto L_8002BD5C;
    }
    // 0x8002BCB0: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002BCB4: bne         $t3, $zero, L_8002BCDC
    if (ctx->r11 != 0) {
        // 0x8002BCB8: lwc1        $f6, 0x174($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
            goto L_8002BCDC;
    }
    // 0x8002BCB8: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x8002BCBC: lwc1        $f10, 0x170($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8002BCC0: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002BCC4: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002BCC8: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    // 0x8002BCCC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8002BCD0: swc1        $f10, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f10.u32l;
    // 0x8002BCD4: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x8002BCD8: swc1        $f4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f4.u32l;
L_8002BCDC:
    // 0x8002BCDC: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002BCE0: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8002BCE4: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002BCE8: sub.s       $f0, $f30, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f6.fl;
    // 0x8002BCEC: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x8002BCF0: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8002BCF4: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8002BCF8: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002BCFC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8002BD00: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002BD04: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002BD08: nop

    // 0x8002BD0C: bc1f        L_8002BD5C
    if (!c1cs) {
        // 0x8002BD10: nop
    
            goto L_8002BD5C;
    }
    // 0x8002BD10: nop

    // 0x8002BD14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002BD18: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8002BD1C: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8002BD20: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x8002BD24: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002BD28: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002BD2C: lhu         $t7, 0x12E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X12E);
    // 0x8002BD30: sh          $t6, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r14;
    // 0x8002BD34: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x8002BD38: swc1        $f12, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f12.u32l;
    // 0x8002BD3C: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x8002BD40: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x8002BD44: sb          $t3, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r11;
    // 0x8002BD48: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x8002BD4C: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x8002BD50: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x8002BD54: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x8002BD58: sh          $t7, 0x112($sp)
    MEM_H(0X112, ctx->r29) = ctx->r15;
L_8002BD5C:
    // 0x8002BD5C: bne         $t4, $a1, L_8002BD9C
    if (ctx->r12 != ctx->r5) {
        // 0x8002BD60: lwc1        $f30, 0x1AC($sp)
        ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
            goto L_8002BD9C;
    }
    // 0x8002BD60: lwc1        $f30, 0x1AC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002BD64: addiu       $t9, $sp, 0xDC
    ctx->r25 = ADD32(ctx->r29, 0XDC);
    // 0x8002BD68: addiu       $t7, $t9, 0x48
    ctx->r15 = ADD32(ctx->r25, 0X48);
    // 0x8002BD6C: lw          $t8, 0x1A8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A8);
L_8002BD70:
    // 0x8002BD70: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002BD74: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002BD78: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002BD7C: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002BD80: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002BD84: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002BD88: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002BD8C: bne         $t9, $t7, L_8002BD70
    if (ctx->r25 != ctx->r15) {
        // 0x8002BD90: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002BD70;
    }
    // 0x8002BD90: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8002BD94: b           L_8002BDB4
    // 0x8002BD98: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_8002BDB4;
    // 0x8002BD98: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002BD9C:
    // 0x8002BD9C: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002BDA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8002BDA4: b           L_8002B4A0
    // 0x8002BDA8: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
        goto L_8002B4A0;
    // 0x8002BDA8: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
L_8002BDAC:
    // 0x8002BDAC: b           L_8002B898
    // 0x8002BDB0: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002B898;
    // 0x8002BDB0: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_8002BDB4:
    // 0x8002BDB4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002BDB8: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8002BDBC: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8002BDC0: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8002BDC4: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8002BDC8: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8002BDCC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002BDD0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002BDD4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002BDD8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8002BDDC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8002BDE0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8002BDE4: jr          $ra
    // 0x8002BDE8: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    TRACE_RETURN()
    return;
    // 0x8002BDE8: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_80020F10_21B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020F10: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80020F14: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80020F18: addiu       $t7, $t7, -0x2F78
    ctx->r15 = ADD32(ctx->r15, -0X2F78);
    // 0x80020F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020F20: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80020F24: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80020F28: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
L_80020F2C:
    // 0x80020F2C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80020F30: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80020F34: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80020F38: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80020F3C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80020F40: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80020F44: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80020F48: bne         $t7, $t9, L_80020F2C
    if (ctx->r15 != ctx->r25) {
        // 0x80020F4C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80020F2C;
    }
    // 0x80020F4C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80020F50: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80020F54: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80020F58: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x80020F5C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80020F60: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80020F64: addiu       $t9, $t9, -0x2F4C
    ctx->r25 = ADD32(ctx->r25, -0X2F4C);
    // 0x80020F68: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80020F6C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80020F70: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80020F74: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80020F78: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80020F7C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80020F80: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80020F84: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x80020F88: addiu       $t7, $t7, -0x2F34
    ctx->r15 = ADD32(ctx->r15, -0X2F34);
    // 0x80020F8C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80020F90: sw          $t6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r14;
    // 0x80020F94: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x80020F98: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x80020F9C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80020FA0: sw          $t6, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r14;
    // 0x80020FA4: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x80020FA8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80020FAC: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x80020FB0: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x80020FB4: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x80020FB8: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80020FBC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80020FC0: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x80020FC4: lw          $t6, 0xC($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XC);
    // 0x80020FC8: sw          $t6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r14;
    // 0x80020FCC: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80020FD0: sw          $at, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r1;
    // 0x80020FD4: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x80020FD8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80020FDC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80020FE0: sw          $t6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r14;
    // 0x80020FE4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80020FE8: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80020FEC: lhu         $t9, 0x3094($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3094);
    // 0x80020FF0: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x80020FF4: or          $a1, $t9, $t8
    ctx->r5 = ctx->r25 | ctx->r24;
    // 0x80020FF8: andi        $t7, $a1, 0x100
    ctx->r15 = ctx->r5 & 0X100;
    // 0x80020FFC: beql        $t7, $zero, L_80021040
    if (ctx->r15 == 0) {
        // 0x80021000: andi        $t7, $a1, 0x200
        ctx->r15 = ctx->r5 & 0X200;
            goto L_80021040;
    }
    goto skip_0;
    // 0x80021000: andi        $t7, $a1, 0x200
    ctx->r15 = ctx->r5 & 0X200;
    skip_0:
    // 0x80021004: lw          $v0, 0x3048($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3048);
    // 0x80021008: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8002100C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80021010: beq         $v0, $zero, L_8002103C
    if (ctx->r2 == 0) {
        // 0x80021014: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8002103C;
    }
    // 0x80021014: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80021018: sw          $t6, -0x4FB8($at)
    MEM_W(-0X4FB8, ctx->r1) = ctx->r14;
    // 0x8002101C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80021020: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80021024: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80021028: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8002102C: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80021030: lhu         $t9, 0x3094($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3094);
    // 0x80021034: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x80021038: or          $a1, $t9, $t8
    ctx->r5 = ctx->r25 | ctx->r24;
L_8002103C:
    // 0x8002103C: andi        $t7, $a1, 0x200
    ctx->r15 = ctx->r5 & 0X200;
L_80021040:
    // 0x80021040: beq         $t7, $zero, L_80021084
    if (ctx->r15 == 0) {
        // 0x80021044: lw          $v0, 0x3048($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X3048);
            goto L_80021084;
    }
    // 0x80021044: lw          $v0, 0x3048($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3048);
    // 0x80021048: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8002104C: beq         $at, $zero, L_80021084
    if (ctx->r1 == 0) {
        // 0x80021050: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_80021084;
    }
    // 0x80021050: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80021054: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80021058: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8002105C: sw          $t6, -0x4FB8($at)
    MEM_W(-0X4FB8, ctx->r1) = ctx->r14;
    // 0x80021060: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80021064: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80021068: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002106C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80021070: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80021074: lhu         $t9, 0x3094($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3094);
    // 0x80021078: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x8002107C: lw          $v0, 0x3048($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3048);
    // 0x80021080: or          $a1, $t9, $t8
    ctx->r5 = ctx->r25 | ctx->r24;
L_80021084:
    // 0x80021084: beq         $v0, $zero, L_800210A8
    if (ctx->r2 == 0) {
        // 0x80021088: andi        $t7, $a1, 0x800
        ctx->r15 = ctx->r5 & 0X800;
            goto L_800210A8;
    }
    // 0x80021088: andi        $t7, $a1, 0x800
    ctx->r15 = ctx->r5 & 0X800;
    // 0x8002108C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021090: beq         $v0, $at, L_800210B0
    if (ctx->r2 == ctx->r1) {
        // 0x80021094: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800210B0;
    }
    // 0x80021094: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80021098: beq         $v0, $at, L_800210B8
    if (ctx->r2 == ctx->r1) {
        // 0x8002109C: addiu       $v1, $zero, 0x64
        ctx->r3 = ADD32(0, 0X64);
            goto L_800210B8;
    }
    // 0x8002109C: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x800210A0: b           L_800210B8
    // 0x800210A4: lh          $v1, 0x8C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X8C);
        goto L_800210B8;
    // 0x800210A4: lh          $v1, 0x8C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X8C);
L_800210A8:
    // 0x800210A8: b           L_800210B8
    // 0x800210AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800210B8;
    // 0x800210AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800210B0:
    // 0x800210B0: b           L_800210B8
    // 0x800210B4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_800210B8;
    // 0x800210B4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_800210B8:
    // 0x800210B8: beq         $t7, $zero, L_800210E4
    if (ctx->r15 == 0) {
        // 0x800210BC: lh          $v0, 0x2DF4($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X2DF4);
            goto L_800210E4;
    }
    // 0x800210BC: lh          $v0, 0x2DF4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2DF4);
    // 0x800210C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800210C4: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x800210C8: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800210CC: bgezl       $v0, L_800210E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800210D0: andi        $t9, $a1, 0x400
        ctx->r25 = ctx->r5 & 0X400;
            goto L_800210E8;
    }
    goto skip_1;
    // 0x800210D0: andi        $t9, $a1, 0x400
    ctx->r25 = ctx->r5 & 0X400;
    skip_1:
    // 0x800210D4: lbu         $t8, 0x2DE4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2DE4);
    // 0x800210D8: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800210DC: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x800210E0: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
L_800210E4:
    // 0x800210E4: andi        $t9, $a1, 0x400
    ctx->r25 = ctx->r5 & 0X400;
L_800210E8:
    // 0x800210E8: beq         $t9, $zero, L_8002111C
    if (ctx->r25 == 0) {
        // 0x800210EC: lui         $a1, 0x8008
        ctx->r5 = S32(0X8008 << 16);
            goto L_8002111C;
    }
    // 0x800210EC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800210F0: lbu         $t6, 0x2DE4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2DE4);
    // 0x800210F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800210F8: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x800210FC: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80021100: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80021104: addu        $t8, $a2, $t9
    ctx->r24 = ADD32(ctx->r6, ctx->r25);
    // 0x80021108: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x8002110C: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80021110: bnel        $at, $zero, L_80021120
    if (ctx->r1 != 0) {
        // 0x80021114: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80021120;
    }
    goto skip_2;
    // 0x80021114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x80021118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002111C:
    // 0x8002111C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80021120:
    // 0x80021120: addiu       $a1, $a1, -0x43DC
    ctx->r5 = ADD32(ctx->r5, -0X43DC);
    // 0x80021124: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80021128: jal         0x800042AC
    // 0x8002112C: sh          $v0, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r2;
    func_800042AC_4EAC(rdram, ctx);
        goto after_0;
    // 0x8002112C: sh          $v0, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r2;
    after_0:
    // 0x80021130: lh          $v0, 0x8E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X8E);
    // 0x80021134: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x80021138: lui         $ra, 0x8016
    ctx->r31 = S32(0X8016 << 16);
    // 0x8002113C: div         $zero, $v0, $t4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r12)));
    // 0x80021140: addiu       $ra, $ra, -0x3A38
    ctx->r31 = ADD32(ctx->r31, -0X3A38);
    // 0x80021144: lw          $t6, 0x0($ra)
    ctx->r14 = MEM_W(ctx->r31, 0X0);
    // 0x80021148: mflo        $t3
    ctx->r11 = lo;
    // 0x8002114C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80021150: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80021154: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021158: sh          $v0, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r2;
    // 0x8002115C: lw          $v1, 0x0($ra)
    ctx->r3 = MEM_W(ctx->r31, 0X0);
    // 0x80021160: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x80021164: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80021168: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8002116C: lbu         $t9, -0x521C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X521C);
    // 0x80021170: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80021174: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80021178: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8002117C: mflo        $t9
    ctx->r25 = lo;
    // 0x80021180: subu        $t0, $v0, $t9
    ctx->r8 = SUB32(ctx->r2, ctx->r25);
    // 0x80021184: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x80021188: div         $zero, $t0, $t5
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r13)));
    // 0x8002118C: mflo        $t2
    ctx->r10 = lo;
    // 0x80021190: lhu         $t7, 0x48($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X48);
    // 0x80021194: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80021198: multu       $t2, $t5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002119C: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x800211A0: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    // 0x800211A4: bne         $t4, $zero, L_800211B0
    if (ctx->r12 != 0) {
        // 0x800211A8: nop
    
            goto L_800211B0;
    }
    // 0x800211A8: nop

    // 0x800211AC: break       7
    do_break(2147619244);
L_800211B0:
    // 0x800211B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800211B4: bne         $t4, $at, L_800211C8
    if (ctx->r12 != ctx->r1) {
        // 0x800211B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800211C8;
    }
    // 0x800211B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800211BC: bne         $v0, $at, L_800211C8
    if (ctx->r2 != ctx->r1) {
        // 0x800211C0: nop
    
            goto L_800211C8;
    }
    // 0x800211C0: nop

    // 0x800211C4: break       6
    do_break(2147619268);
L_800211C8:
    // 0x800211C8: mflo        $t8
    ctx->r24 = lo;
    // 0x800211CC: subu        $t7, $t0, $t8
    ctx->r15 = SUB32(ctx->r8, ctx->r24);
    // 0x800211D0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800211D4: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x800211D8: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x800211DC: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    // 0x800211E0: bne         $t5, $zero, L_800211EC
    if (ctx->r13 != 0) {
        // 0x800211E4: nop
    
            goto L_800211EC;
    }
    // 0x800211E4: nop

    // 0x800211E8: break       7
    do_break(2147619304);
L_800211EC:
    // 0x800211EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800211F0: bne         $t5, $at, L_80021204
    if (ctx->r13 != ctx->r1) {
        // 0x800211F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80021204;
    }
    // 0x800211F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800211F8: bne         $t0, $at, L_80021204
    if (ctx->r8 != ctx->r1) {
        // 0x800211FC: nop
    
            goto L_80021204;
    }
    // 0x800211FC: nop

    // 0x80021200: break       6
    do_break(2147619328);
L_80021204:
    // 0x80021204: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80021208: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8002120C: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x80021210: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x80021214: jal         0x800042AC
    // 0x80021218: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_800042AC_4EAC(rdram, ctx);
        goto after_1;
    // 0x80021218: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_1:
    // 0x8002121C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80021220: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80021224: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80021228: bne         $t3, $zero, L_8002123C
    if (ctx->r11 != 0) {
        // 0x8002122C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8002123C;
    }
    // 0x8002122C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80021230: bnel        $t2, $zero, L_80021240
    if (ctx->r10 != 0) {
        // 0x80021234: sll         $t9, $t1, 2
        ctx->r25 = S32(ctx->r9 << 2);
            goto L_80021240;
    }
    goto skip_3;
    // 0x80021234: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    skip_3:
    // 0x80021238: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
L_8002123C:
    // 0x8002123C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
L_80021240:
    // 0x80021240: addu        $a1, $sp, $t9
    ctx->r5 = ADD32(ctx->r29, ctx->r25);
    // 0x80021244: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    // 0x80021248: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8002124C: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x80021250: jal         0x800042AC
    // 0x80021254: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x80021254: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_2:
    // 0x80021258: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8002125C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80021260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80021264: bnel        $t3, $zero, L_80021274
    if (ctx->r11 != 0) {
        // 0x80021268: lw          $t7, 0x98($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X98);
            goto L_80021274;
    }
    goto skip_4;
    // 0x80021268: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    skip_4:
    // 0x8002126C: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x80021270: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
L_80021274:
    // 0x80021274: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x80021278: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8002127C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80021280: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x80021284: jal         0x800042AC
    // 0x80021288: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    func_800042AC_4EAC(rdram, ctx);
        goto after_3;
    // 0x80021288: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    after_3:
    // 0x8002128C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80021290: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x80021294: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80021298: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8002129C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800212A0: lhu         $v0, -0x520E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X520E);
    // 0x800212A4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x800212A8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800212AC: div         $zero, $v0, $t2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r10)));
    // 0x800212B0: mflo        $t0
    ctx->r8 = lo;
    // 0x800212B4: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x800212B8: bne         $t2, $zero, L_800212C4
    if (ctx->r10 != 0) {
        // 0x800212BC: nop
    
            goto L_800212C4;
    }
    // 0x800212BC: nop

    // 0x800212C0: break       7
    do_break(2147619520);
L_800212C4:
    // 0x800212C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800212C8: bne         $t2, $at, L_800212DC
    if (ctx->r10 != ctx->r1) {
        // 0x800212CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800212DC;
    }
    // 0x800212CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800212D0: bne         $v0, $at, L_800212DC
    if (ctx->r2 != ctx->r1) {
        // 0x800212D4: nop
    
            goto L_800212DC;
    }
    // 0x800212D4: nop

    // 0x800212D8: break       6
    do_break(2147619544);
L_800212DC:
    // 0x800212DC: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800212E0: addiu       $a1, $a1, -0x43D0
    ctx->r5 = ADD32(ctx->r5, -0X43D0);
    // 0x800212E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800212E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800212EC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x800212F0: mflo        $t8
    ctx->r24 = lo;
    // 0x800212F4: subu        $v1, $v0, $t8
    ctx->r3 = SUB32(ctx->r2, ctx->r24);
    // 0x800212F8: nop

    // 0x800212FC: div         $zero, $v1, $t3
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r11)));
    // 0x80021300: mflo        $t1
    ctx->r9 = lo;
    // 0x80021304: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x80021308: bne         $t3, $zero, L_80021314
    if (ctx->r11 != 0) {
        // 0x8002130C: nop
    
            goto L_80021314;
    }
    // 0x8002130C: nop

    // 0x80021310: break       7
    do_break(2147619600);
L_80021314:
    // 0x80021314: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021318: bne         $t3, $at, L_8002132C
    if (ctx->r11 != ctx->r1) {
        // 0x8002131C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002132C;
    }
    // 0x8002131C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80021320: bne         $v1, $at, L_8002132C
    if (ctx->r3 != ctx->r1) {
        // 0x80021324: nop
    
            goto L_8002132C;
    }
    // 0x80021324: nop

    // 0x80021328: break       6
    do_break(2147619624);
L_8002132C:
    // 0x8002132C: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021330: mflo        $t7
    ctx->r15 = lo;
    // 0x80021334: subu        $t6, $v1, $t7
    ctx->r14 = SUB32(ctx->r3, ctx->r15);
    // 0x80021338: jal         0x800042AC
    // 0x8002133C: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    func_800042AC_4EAC(rdram, ctx);
        goto after_4;
    // 0x8002133C: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    after_4:
    // 0x80021340: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80021344: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80021348: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x8002134C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80021350: addu        $a1, $sp, $t8
    ctx->r5 = ADD32(ctx->r29, ctx->r24);
    // 0x80021354: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    // 0x80021358: jal         0x800042AC
    // 0x8002135C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_800042AC_4EAC(rdram, ctx);
        goto after_5;
    // 0x8002135C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_5:
    // 0x80021360: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x80021364: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80021368: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8002136C: bne         $t7, $zero, L_80021380
    if (ctx->r15 != 0) {
        // 0x80021370: addiu       $a2, $zero, 0x98
        ctx->r6 = ADD32(0, 0X98);
            goto L_80021380;
    }
    // 0x80021370: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x80021374: bnel        $t1, $zero, L_80021384
    if (ctx->r9 != 0) {
        // 0x80021378: sll         $t6, $t1, 2
        ctx->r14 = S32(ctx->r9 << 2);
            goto L_80021384;
    }
    goto skip_5;
    // 0x80021378: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    skip_5:
    // 0x8002137C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
L_80021380:
    // 0x80021380: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
L_80021384:
    // 0x80021384: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x80021388: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    // 0x8002138C: jal         0x800042AC
    // 0x80021390: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_800042AC_4EAC(rdram, ctx);
        goto after_6;
    // 0x80021390: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_6:
    // 0x80021394: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x80021398: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8002139C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800213A0: bnel        $t9, $zero, L_800213B0
    if (ctx->r25 != 0) {
        // 0x800213A4: lw          $t7, 0x98($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X98);
            goto L_800213B0;
    }
    goto skip_6;
    // 0x800213A4: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    skip_6:
    // 0x800213A8: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x800213AC: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
L_800213B0:
    // 0x800213B0: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x800213B4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x800213B8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800213BC: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x800213C0: jal         0x800042AC
    // 0x800213C4: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    func_800042AC_4EAC(rdram, ctx);
        goto after_7;
    // 0x800213C4: lw          $a1, 0x60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X60);
    after_7:
    // 0x800213C8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800213CC: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x800213D0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800213D4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800213D8: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x800213DC: lhu         $t9, 0x3094($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3094);
    // 0x800213E0: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x800213E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800213E8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800213EC: or          $a1, $t9, $t8
    ctx->r5 = ctx->r25 | ctx->r24;
    // 0x800213F0: andi        $t7, $a1, 0x4000
    ctx->r15 = ctx->r5 & 0X4000;
    // 0x800213F4: beq         $t7, $zero, L_80021420
    if (ctx->r15 == 0) {
        // 0x800213F8: addu        $at, $at, $v1
        ctx->r1 = ADD32(ctx->r1, ctx->r3);
            goto L_80021420;
    }
    // 0x800213F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800213FC: sb          $t6, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r14;
    // 0x80021400: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80021404: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80021408: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8002140C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80021410: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80021414: lhu         $t9, 0x3094($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X3094);
    // 0x80021418: lhu         $t8, 0x307C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X307C);
    // 0x8002141C: or          $a1, $t9, $t8
    ctx->r5 = ctx->r25 | ctx->r24;
L_80021420:
    // 0x80021420: andi        $t7, $a1, 0x9000
    ctx->r15 = ctx->r5 & 0X9000;
    // 0x80021424: beql        $t7, $zero, L_80021438
    if (ctx->r15 == 0) {
        // 0x80021428: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80021438;
    }
    goto skip_7;
    // 0x80021428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x8002142C: jal         0x80021444
    // 0x80021430: nop

    func_80021444_22044(rdram, ctx);
        goto after_8;
    // 0x80021430: nop

    after_8:
    // 0x80021434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80021438:
    // 0x80021438: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8002143C: jr          $ra
    // 0x80021440: nop

    TRACE_RETURN()
    return;
    // 0x80021440: nop

;}
RECOMP_FUNC void func_8000E9F4_F5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E9F8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000E9FC: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EA04: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8000EA08: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EA0C: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8000EA10: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EA14: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EA18: jal         0x800040A8
    // 0x8000EA1C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000EA1C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8000EA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EA24: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8000EA28: andi        $v0, $t6, 0x3FF
    ctx->r2 = ctx->r14 & 0X3FF;
    // 0x8000EA2C: jr          $ra
    // 0x8000EA30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000EA30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003454C_3514C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003454C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80034550: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80034554: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80034558: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8003455C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80034560: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80034564: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034568: bltz        $a1, L_8003457C
    if (SIGNED(ctx->r5) < 0) {
        // 0x8003456C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8003457C;
    }
    // 0x8003456C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80034570: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x80034574: bnel        $at, $zero, L_80034588
    if (ctx->r1 != 0) {
        // 0x80034578: sltiu       $at, $a1, 0x7
        ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
            goto L_80034588;
    }
    goto skip_0;
    // 0x80034578: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    skip_0:
L_8003457C:
    // 0x8003457C: jr          $ra
    // 0x80034580: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80034580: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80034584: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
L_80034588:
    // 0x80034588: beq         $at, $zero, L_800345D8
    if (ctx->r1 == 0) {
        // 0x8003458C: sll         $t1, $a1, 2
        ctx->r9 = S32(ctx->r5 << 2);
            goto L_800345D8;
    }
    // 0x8003458C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80034590: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80034594: addu        $at, $at, $t1
    gpr jr_addend_8003459C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80034598: lw          $t1, -0x3900($at)
    ctx->r9 = ADD32(ctx->r1, -0X3900);
    // 0x8003459C: jr          $t1
    // 0x800345A0: nop

    switch (jr_addend_8003459C >> 2) {
        case 0: goto L_800345A4; break;
        case 1: goto L_800345AC; break;
        case 2: goto L_800345B4; break;
        case 3: goto L_800345BC; break;
        case 4: goto L_800345C4; break;
        case 5: goto L_800345CC; break;
        case 6: goto L_800345D4; break;
        default: switch_error(__func__, 0x8003459C, 0x8007C700);
    }
    // 0x800345A0: nop

L_800345A4:
    // 0x800345A4: b           L_800345D8
    // 0x800345A8: addiu       $v1, $a0, 0x3C
    ctx->r3 = ADD32(ctx->r4, 0X3C);
        goto L_800345D8;
    // 0x800345A8: addiu       $v1, $a0, 0x3C
    ctx->r3 = ADD32(ctx->r4, 0X3C);
L_800345AC:
    // 0x800345AC: b           L_800345D8
    // 0x800345B0: addiu       $v1, $a0, 0x3E
    ctx->r3 = ADD32(ctx->r4, 0X3E);
        goto L_800345D8;
    // 0x800345B0: addiu       $v1, $a0, 0x3E
    ctx->r3 = ADD32(ctx->r4, 0X3E);
L_800345B4:
    // 0x800345B4: b           L_800345D8
    // 0x800345B8: addiu       $t0, $a0, 0x40
    ctx->r8 = ADD32(ctx->r4, 0X40);
        goto L_800345D8;
    // 0x800345B8: addiu       $t0, $a0, 0x40
    ctx->r8 = ADD32(ctx->r4, 0X40);
L_800345BC:
    // 0x800345BC: b           L_800345D8
    // 0x800345C0: addiu       $t0, $a0, 0x42
    ctx->r8 = ADD32(ctx->r4, 0X42);
        goto L_800345D8;
    // 0x800345C0: addiu       $t0, $a0, 0x42
    ctx->r8 = ADD32(ctx->r4, 0X42);
L_800345C4:
    // 0x800345C4: b           L_800345D8
    // 0x800345C8: addiu       $v1, $a0, 0x4E
    ctx->r3 = ADD32(ctx->r4, 0X4E);
        goto L_800345D8;
    // 0x800345C8: addiu       $v1, $a0, 0x4E
    ctx->r3 = ADD32(ctx->r4, 0X4E);
L_800345CC:
    // 0x800345CC: b           L_800345D8
    // 0x800345D0: addiu       $t0, $a0, 0x50
    ctx->r8 = ADD32(ctx->r4, 0X50);
        goto L_800345D8;
    // 0x800345D0: addiu       $t0, $a0, 0x50
    ctx->r8 = ADD32(ctx->r4, 0X50);
L_800345D4:
    // 0x800345D4: addiu       $t0, $a0, 0x52
    ctx->r8 = ADD32(ctx->r4, 0X52);
L_800345D8:
    // 0x800345D8: beql        $v1, $zero, L_80034628
    if (ctx->r3 == 0) {
        // 0x800345DC: lh          $t6, 0x0($t0)
        ctx->r14 = MEM_H(ctx->r8, 0X0);
            goto L_80034628;
    }
    goto skip_1;
    // 0x800345DC: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    skip_1:
    // 0x800345E0: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x800345E4: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x800345E8: blez        $a2, L_80034608
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800345EC: sh          $t3, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r11;
            goto L_80034608;
    }
    // 0x800345EC: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x800345F0: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x800345F4: slt         $at, $a3, $t4
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800345F8: beq         $at, $zero, L_8003466C
    if (ctx->r1 == 0) {
        // 0x800345FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003466C;
    }
    // 0x800345FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034600: jr          $ra
    // 0x80034604: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80034604: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
L_80034608:
    // 0x80034608: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x8003460C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034610: slt         $at, $t5, $a3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80034614: beql        $at, $zero, L_80034670
    if (ctx->r1 == 0) {
        // 0x80034618: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80034670;
    }
    goto skip_2;
    // 0x80034618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8003461C: jr          $ra
    // 0x80034620: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80034620: sh          $a3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r7;
    // 0x80034624: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
L_80034628:
    // 0x80034628: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x8003462C: blez        $a2, L_80034650
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80034630: sh          $t7, 0x0($t0)
        MEM_H(0X0, ctx->r8) = ctx->r15;
            goto L_80034650;
    }
    // 0x80034630: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x80034634: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x80034638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003463C: slt         $at, $a3, $t8
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80034640: beql        $at, $zero, L_80034670
    if (ctx->r1 == 0) {
        // 0x80034644: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80034670;
    }
    goto skip_3;
    // 0x80034644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x80034648: jr          $ra
    // 0x8003464C: sh          $a3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x8003464C: sh          $a3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r7;
L_80034650:
    // 0x80034650: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x80034654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034658: slt         $at, $t9, $a3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8003465C: beql        $at, $zero, L_80034670
    if (ctx->r1 == 0) {
        // 0x80034660: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80034670;
    }
    goto skip_4;
    // 0x80034660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x80034664: jr          $ra
    // 0x80034668: sh          $a3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80034668: sh          $a3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r7;
L_8003466C:
    // 0x8003466C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034670:
    // 0x80034670: jr          $ra
    // 0x80034674: nop

    TRACE_RETURN()
    return;
    // 0x80034674: nop

;}
RECOMP_FUNC void func_80012900_13500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012900: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80012904: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80012908: addiu       $t9, $t6, 0x60
    ctx->r25 = ADD32(ctx->r14, 0X60);
L_8001290C:
    // 0x8001290C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80012910: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80012914: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80012918: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8001291C: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80012920: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x80012924: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80012928: bne         $t6, $t9, L_8001290C
    if (ctx->r14 != ctx->r25) {
        // 0x8001292C: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8001290C;
    }
    // 0x8001292C: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x80012930: jr          $ra
    // 0x80012934: nop

    TRACE_RETURN()
    return;
    // 0x80012934: nop

;}
RECOMP_FUNC void __osClearPage(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044BE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80044BEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80044BF0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80044BF4: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x80044BF8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80044BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80044C00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80044C04: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80044C08: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80044C0C: sb          $t6, 0x65($t7)
    MEM_B(0X65, ctx->r15) = ctx->r14;
    // 0x80044C10: jal         0x8004CF0C
    // 0x80044C14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x80044C14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x80044C18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80044C1C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80044C20: beq         $t8, $zero, L_80044C30
    if (ctx->r24 == 0) {
        // 0x80044C24: nop
    
            goto L_80044C30;
    }
    // 0x80044C24: nop

    // 0x80044C28: b           L_80044C98
    // 0x80044C2C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80044C98;
    // 0x80044C2C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80044C30:
    // 0x80044C30: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80044C34:
    // 0x80044C34: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80044C38: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80044C3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80044C40: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80044C44: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x80044C48: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80044C4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80044C50: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80044C54: jal         0x8004DD40
    // 0x80044C58: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_1;
    // 0x80044C58: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    after_1:
    // 0x80044C5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80044C60: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80044C64: bne         $t3, $zero, L_80044C80
    if (ctx->r11 != 0) {
        // 0x80044C68: nop
    
            goto L_80044C80;
    }
    // 0x80044C68: nop

    // 0x80044C6C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80044C70: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80044C74: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x80044C78: bne         $at, $zero, L_80044C34
    if (ctx->r1 != 0) {
        // 0x80044C7C: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80044C34;
    }
    // 0x80044C7C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80044C80:
    // 0x80044C80: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80044C84: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x80044C88: jal         0x8004CF0C
    // 0x80044C8C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_2;
    // 0x80044C8C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80044C90: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80044C94: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_80044C98:
    // 0x80044C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80044C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80044CA0: jr          $ra
    // 0x80044CA4: nop

    TRACE_RETURN()
    return;
    // 0x80044CA4: nop

;}
RECOMP_FUNC void func_8001654C_1714C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001654C: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x80016550: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80016554: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80016558: addiu       $a3, $a3, -0x48F4
    ctx->r7 = ADD32(ctx->r7, -0X48F4);
    // 0x8001655C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80016560: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80016564: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_80016568:
    // 0x80016568: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001656C: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x80016570: addu        $t6, $a3, $a0
    ctx->r14 = ADD32(ctx->r7, ctx->r4);
L_80016574:
    // 0x80016574: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80016578: bnel        $a2, $t7, L_80016594
    if (ctx->r6 != ctx->r15) {
        // 0x8001657C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80016594;
    }
    goto skip_0;
    // 0x8001657C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80016580: negu        $a2, $v0
    ctx->r6 = SUB32(0, ctx->r2);
    // 0x80016584: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80016588: b           L_800165A4
    // 0x8001658C: addiu       $a2, $t8, 0xC
    ctx->r6 = ADD32(ctx->r24, 0XC);
        goto L_800165A4;
    // 0x8001658C: addiu       $a2, $t8, 0xC
    ctx->r6 = ADD32(ctx->r24, 0XC);
    // 0x80016590: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80016594:
    // 0x80016594: bnel        $a0, $t1, L_80016574
    if (ctx->r4 != ctx->r9) {
        // 0x80016598: addu        $t6, $a3, $a0
        ctx->r14 = ADD32(ctx->r7, ctx->r4);
            goto L_80016574;
    }
    goto skip_1;
    // 0x80016598: addu        $t6, $a3, $a0
    ctx->r14 = ADD32(ctx->r7, ctx->r4);
    skip_1:
    // 0x8001659C: jr          $ra
    // 0x800165A0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    TRACE_RETURN()
    return;
    // 0x800165A0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_800165A4:
    // 0x800165A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800165A8: sllv        $t9, $a0, $a2
    ctx->r25 = S32(ctx->r4 << (ctx->r6 & 31));
    // 0x800165AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800165B0: bne         $v0, $t0, L_80016568
    if (ctx->r2 != ctx->r8) {
        // 0x800165B4: addu        $v1, $v1, $t9
        ctx->r3 = ADD32(ctx->r3, ctx->r25);
            goto L_80016568;
    }
    // 0x800165B4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x800165B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800165BC: jr          $ra
    // 0x800165C0: nop

    TRACE_RETURN()
    return;
    // 0x800165C0: nop

;}
RECOMP_FUNC void func_80014840_15440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80014844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014848: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001484C: blez        $a0, L_800148AC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80014850: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800148AC;
    }
    // 0x80014850: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80014854: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80014858: jal         0x800141C4
    // 0x8001485C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8001485C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80014860: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014864: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80014868: bne         $v0, $at, L_80014878
    if (ctx->r2 != ctx->r1) {
        // 0x8001486C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80014878;
    }
    // 0x8001486C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80014870: swl         $zero, -0x1($zero)
    do_swl(rdram, -0X1, 0, 0);
    // 0x80014874: swr         $zero, 0x2($zero)
    do_swr(rdram, 0X2, 0, 0);
L_80014878:
    // 0x80014878: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x8001487C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80014880: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x80014884: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80014888: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8001488C: jal         0x80001E50
    // 0x80014890: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80001E50_2A50(rdram, ctx);
        goto after_1;
    // 0x80014890: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80014894: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80014898: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8001489C: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x800148A0: subu        $t8, $a2, $t7
    ctx->r24 = SUB32(ctx->r6, ctx->r15);
    // 0x800148A4: b           L_800148B0
    // 0x800148A8: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
        goto L_800148B0;
    // 0x800148A8: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
L_800148AC:
    // 0x800148AC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_800148B0:
    // 0x800148B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800148B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800148B8: jr          $ra
    // 0x800148BC: nop

    TRACE_RETURN()
    return;
    // 0x800148BC: nop

;}
RECOMP_FUNC void func_80006220_6E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000622C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80006230: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80006234: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x80006238: jal         0x80006274
    // 0x8000623C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80006274_6E74(rdram, ctx);
        goto after_0;
    // 0x8000623C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80006240: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80006244: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80006248: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x8000624C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80006250: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80006254: addiu       $t7, $t6, 0x220
    ctx->r15 = ADD32(ctx->r14, 0X220);
    // 0x80006258: sh          $t7, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r15;
    // 0x8000625C: jal         0x80003728
    // 0x80006260: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_1;
    // 0x80006260: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
    // 0x80006264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000626C: jr          $ra
    // 0x80006270: nop

    TRACE_RETURN()
    return;
    // 0x80006270: nop

;}
RECOMP_FUNC void func_8003E9E8_3F5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E9E8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E9EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E9F0: addiu       $v0, $v0, 0x77E8
    ctx->r2 = ADD32(ctx->r2, 0X77E8);
    // 0x8003E9F4: sw          $a0, 0x7800($at)
    MEM_W(0X7800, ctx->r1) = ctx->r4;
    // 0x8003E9F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003E9FC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x8003EA00: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8003EA04: jr          $ra
    // 0x8003EA08: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8003EA08: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800016E4_22E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800016E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800016E8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x800016EC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x800016F0: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x800016F4: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x800016F8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x800016FC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80001700: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x80001704: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x80001708: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8000170C: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80001710: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80001714: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80001718: addiu       $t2, $t2, 0x25B0
    ctx->r10 = ADD32(ctx->r10, 0X25B0);
    // 0x8000171C: addiu       $t5, $t5, 0x7450
    ctx->r13 = ADD32(ctx->r13, 0X7450);
    // 0x80001720: addiu       $v1, $v1, 0x1000
    ctx->r3 = ADD32(ctx->r3, 0X1000);
    // 0x80001724: addiu       $s4, $s4, -0x5778
    ctx->r20 = ADD32(ctx->r20, -0X5778);
    // 0x80001728: addiu       $s2, $s2, -0x3210
    ctx->r18 = ADD32(ctx->r18, -0X3210);
    // 0x8000172C: addiu       $s1, $s1, -0x2210
    ctx->r17 = ADD32(ctx->r17, -0X2210);
    // 0x80001730: addiu       $s0, $zero, 0x400
    ctx->r16 = ADD32(0, 0X400);
    // 0x80001734: addiu       $s3, $zero, 0xC00
    ctx->r19 = ADD32(0, 0XC00);
    // 0x80001738: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8000173C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80001740: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x80001744: addiu       $t3, $zero, 0x1000
    ctx->r11 = ADD32(0, 0X1000);
    // 0x80001748: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8000174C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_80001750:
    // 0x80001750: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x80001754: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80001758: ori         $at, $at, 0x5800
    ctx->r1 = ctx->r1 | 0X5800;
    // 0x8000175C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80001760: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x80001764: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80001768: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8000176C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80001770: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80001774: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80001778: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x8000177C: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x80001780: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x80001784: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80001788: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x8000178C: sw          $t3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r11;
    // 0x80001790: sw          $a3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r7;
    // 0x80001794: sw          $t4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r12;
    // 0x80001798: sw          $t5, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r13;
    // 0x8000179C: sw          $s0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r16;
    // 0x800017A0: sw          $s1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r17;
    // 0x800017A4: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x800017A8: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x800017AC: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x800017B0: sw          $s2, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r18;
    // 0x800017B4: sw          $s3, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r19;
    // 0x800017B8: sw          $s4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r20;
    // 0x800017BC: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x800017C0: bne         $v0, $s5, L_80001750
    if (ctx->r2 != ctx->r21) {
        // 0x800017C4: addiu       $a0, $a0, 0x68
        ctx->r4 = ADD32(ctx->r4, 0X68);
            goto L_80001750;
    }
    // 0x800017C4: addiu       $a0, $a0, 0x68
    ctx->r4 = ADD32(ctx->r4, 0X68);
    // 0x800017C8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800017CC: beql        $t8, $zero, L_800017E4
    if (ctx->r24 == 0) {
        // 0x800017D0: sh          $zero, 0x0($a1)
        MEM_H(0X0, ctx->r5) = 0;
            goto L_800017E4;
    }
    goto skip_0;
    // 0x800017D0: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    skip_0:
    // 0x800017D4: sh          $s5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r21;
    // 0x800017D8: b           L_800017E8
    // 0x800017DC: sh          $s5, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r21;
        goto L_800017E8;
    // 0x800017DC: sh          $s5, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r21;
    // 0x800017E0: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_800017E4:
    // 0x800017E4: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
L_800017E8:
    // 0x800017E8: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x800017EC: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x800017F0: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x800017F4: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x800017F8: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x800017FC: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x80001800: jr          $ra
    // 0x80001804: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80001804: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003CE2C_3DA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CE2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CE30: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CE34: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003CE38: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003CE3C: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003CE40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CE44: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003CE48: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8003CE4C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003CE50: sb          $t7, 0x21($t8)
    MEM_B(0X21, ctx->r24) = ctx->r15;
    // 0x8003CE54: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003CE58: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003CE5C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003CE60: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8003CE64: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003CE68: sb          $t2, 0x22($t3)
    MEM_B(0X22, ctx->r11) = ctx->r10;
    // 0x8003CE6C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8003CE70: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CE74: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003CE78: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8003CE7C: lbu         $a1, 0x22($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X22);
    // 0x8003CE80: bnel        $a1, $zero, L_8003CE98
    if (ctx->r5 != 0) {
        // 0x8003CE84: lbu         $t6, 0x21($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X21);
            goto L_8003CE98;
    }
    goto skip_0;
    // 0x8003CE84: lbu         $t6, 0x21($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X21);
    skip_0:
    // 0x8003CE88: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x8003CE8C: b           L_8003CEC4
    // 0x8003CE90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
        goto L_8003CEC4;
    // 0x8003CE90: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CE94: lbu         $t6, 0x21($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X21);
L_8003CE98:
    // 0x8003CE98: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003CE9C: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CEA0: mflo        $t7
    ctx->r15 = lo;
    // 0x8003CEA4: sra         $t8, $t7, 7
    ctx->r24 = S32(SIGNED(ctx->r15) >> 7);
    // 0x8003CEA8: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
    // 0x8003CEAC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003CEB0: lbu         $t9, 0x24($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X24);
    // 0x8003CEB4: bnel        $t9, $zero, L_8003CEC8
    if (ctx->r25 != 0) {
        // 0x8003CEB8: lw          $t1, 0x0($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X0);
            goto L_8003CEC8;
    }
    goto skip_1;
    // 0x8003CEB8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8003CEBC: sb          $t0, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r8;
    // 0x8003CEC0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_8003CEC4:
    // 0x8003CEC4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_8003CEC8:
    // 0x8003CEC8: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x8003CECC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8003CED0: lhu         $t3, 0x4C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4C);
    // 0x8003CED4: beq         $t3, $zero, L_8003CF0C
    if (ctx->r11 == 0) {
        // 0x8003CED8: nop
    
            goto L_8003CF0C;
    }
    // 0x8003CED8: nop

    // 0x8003CEDC: jal         0x8003B394
    // 0x8003CEE0: nop

    func_8003B394_3BF94(rdram, ctx);
        goto after_0;
    // 0x8003CEE0: nop

    after_0:
    // 0x8003CEE4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003CEE8: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003CEEC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8003CEF0: lhu         $t5, 0x4C($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X4C);
    // 0x8003CEF4: beql        $t5, $zero, L_8003CF18
    if (ctx->r13 == 0) {
        // 0x8003CEF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003CF18;
    }
    goto skip_2;
    // 0x8003CEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8003CEFC: jal         0x8003AFB0
    // 0x8003CF00: nop

    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_1;
    // 0x8003CF00: nop

    after_1:
    // 0x8003CF04: b           L_8003CF18
    // 0x8003CF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003CF18;
    // 0x8003CF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003CF0C:
    // 0x8003CF0C: jal         0x8003AD28
    // 0x8003CF10: nop

    func_8003AD28_3B928(rdram, ctx);
        goto after_2;
    // 0x8003CF10: nop

    after_2:
    // 0x8003CF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003CF18:
    // 0x8003CF18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003CF1C: jr          $ra
    // 0x8003CF20: nop

    TRACE_RETURN()
    return;
    // 0x8003CF20: nop

;}
RECOMP_FUNC void func_800214E4_220E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800214E4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800214E8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x800214EC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800214F0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x800214F4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800214F8: lhu         $t6, 0x2DF2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x800214FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80021500: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80021504: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021508: addiu       $a1, $a1, -0x4880
    ctx->r5 = ADD32(ctx->r5, -0X4880);
    // 0x8002150C: mflo        $t7
    ctx->r15 = lo;
    // 0x80021510: addu        $v1, $a1, $t7
    ctx->r3 = ADD32(ctx->r5, ctx->r15);
    // 0x80021514: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x80021518: bne         $a0, $zero, L_80021534
    if (ctx->r4 != 0) {
        // 0x8002151C: nop
    
            goto L_80021534;
    }
    // 0x8002151C: nop

    // 0x80021520: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x80021524: bne         $t8, $zero, L_80021534
    if (ctx->r24 != 0) {
        // 0x80021528: nop
    
            goto L_80021534;
    }
    // 0x80021528: nop

    // 0x8002152C: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x80021530: beq         $t9, $zero, L_800215A4
    if (ctx->r25 == 0) {
        // 0x80021534: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_800215A4;
    }
L_80021534:
    // 0x80021534: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80021538: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8002153C: sh          $a0, 0x20A($v1)
    MEM_H(0X20A, ctx->r3) = ctx->r4;
    // 0x80021540: lhu         $t0, 0x2DF2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x80021544: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021548: mflo        $t1
    ctx->r9 = lo;
    // 0x8002154C: addu        $t2, $a1, $t1
    ctx->r10 = ADD32(ctx->r5, ctx->r9);
    // 0x80021550: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x80021554: sh          $t3, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = ctx->r11;
    // 0x80021558: lhu         $t4, 0x2DF2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x8002155C: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021560: mflo        $t5
    ctx->r13 = lo;
    // 0x80021564: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x80021568: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x8002156C: sh          $t7, 0x20E($v1)
    MEM_H(0X20E, ctx->r3) = ctx->r15;
    // 0x80021570: lhu         $t8, 0x2DF2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x80021574: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021578: mflo        $t9
    ctx->r25 = lo;
    // 0x8002157C: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x80021580: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x80021584: sh          $t1, 0x210($v1)
    MEM_H(0X210, ctx->r3) = ctx->r9;
    // 0x80021588: lhu         $t2, 0x2DF2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2DF2);
    // 0x8002158C: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021590: mflo        $t3
    ctx->r11 = lo;
    // 0x80021594: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x80021598: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x8002159C: jr          $ra
    // 0x800215A0: sh          $t5, 0x208($v1)
    MEM_H(0X208, ctx->r3) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x800215A0: sh          $t5, 0x208($v1)
    MEM_H(0X208, ctx->r3) = ctx->r13;
L_800215A4:
    // 0x800215A4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800215A8: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x800215AC: sh          $zero, 0x20A($v1)
    MEM_H(0X20A, ctx->r3) = 0;
    // 0x800215B0: sh          $zero, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = 0;
    // 0x800215B4: sh          $zero, 0x20E($v1)
    MEM_H(0X20E, ctx->r3) = 0;
    // 0x800215B8: sh          $zero, 0x210($v1)
    MEM_H(0X210, ctx->r3) = 0;
    // 0x800215BC: sh          $zero, 0x208($v1)
    MEM_H(0X208, ctx->r3) = 0;
    // 0x800215C0: jr          $ra
    // 0x800215C4: nop

    TRACE_RETURN()
    return;
    // 0x800215C4: nop

;}
RECOMP_FUNC void func_800004AC_10AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800004AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800004B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800004B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800004B8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800004BC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800004C0: addiu       $a2, $a2, -0x5AB8
    ctx->r6 = ADD32(ctx->r6, -0X5AB8);
    // 0x800004C4: addiu       $a1, $a1, -0x5AD0
    ctx->r5 = ADD32(ctx->r5, -0X5AD0);
    // 0x800004C8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x800004CC: jal         0x8003FC50
    // 0x800004D0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x800004D0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x800004D4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800004D8: addiu       $t6, $t6, -0x7C80
    ctx->r14 = ADD32(ctx->r14, -0X7C80);
    // 0x800004DC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800004E0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x800004E4: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800004E8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800004EC: addiu       $a2, $a2, 0x580
    ctx->r6 = ADD32(ctx->r6, 0X580);
    // 0x800004F0: addiu       $a0, $a0, 0x41D0
    ctx->r4 = ADD32(ctx->r4, 0X41D0);
    // 0x800004F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800004F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800004FC: jal         0x8003F9B0
    // 0x80000500: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80000500: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80000504: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80000508: jal         0x8003FB00
    // 0x8000050C: addiu       $a0, $a0, 0x41D0
    ctx->r4 = ADD32(ctx->r4, 0X41D0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8000050C: addiu       $a0, $a0, 0x41D0
    ctx->r4 = ADD32(ctx->r4, 0X41D0);
    after_2:
    // 0x80000510: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80000514: addiu       $t8, $t8, -0x5AD0
    ctx->r24 = ADD32(ctx->r24, -0X5AD0);
    // 0x80000518: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000051C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80000520: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80000524: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80000528: addiu       $a2, $a2, 0xAD8
    ctx->r6 = ADD32(ctx->r6, 0XAD8);
    // 0x8000052C: addiu       $a0, $a0, -0x7C80
    ctx->r4 = ADD32(ctx->r4, -0X7C80);
    // 0x80000530: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80000534: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80000538: jal         0x8003F9B0
    // 0x8000053C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x8000053C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80000540: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000544: jal         0x8003FB00
    // 0x80000548: addiu       $a0, $a0, -0x7C80
    ctx->r4 = ADD32(ctx->r4, -0X7C80);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x80000548: addiu       $a0, $a0, -0x7C80
    ctx->r4 = ADD32(ctx->r4, -0X7C80);
    after_4:
    // 0x8000054C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80000550: jal         0x8003FDE0
    // 0x80000554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_5;
    // 0x80000554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80000558:
    // 0x80000558: b           L_80000558
    pause_self(rdram);
    // 0x8000055C: nop

    // 0x80000560: nop

    // 0x80000564: nop

    // 0x80000568: nop

    // 0x8000056C: nop

    // 0x80000570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80000574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000578: jr          $ra
    // 0x8000057C: nop

    TRACE_RETURN()
    return;
    // 0x8000057C: nop

;}
RECOMP_FUNC void func_80008258_8E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008258: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8000825C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80008260: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80008264: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80008268: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x8000826C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80008270: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80008274: andi        $t0, $a2, 0xF0
    ctx->r8 = ctx->r6 & 0XF0;
    // 0x80008278: lw          $t9, -0x4950($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4950);
    // 0x8000827C: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80008280: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x80008284: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80008288: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x8000828C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80008290: lhu         $t2, 0x18($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X18);
    // 0x80008294: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80008298: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8000829C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x800082A0: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x800082A4: ori         $t9, $t2, 0x8000
    ctx->r25 = ctx->r10 | 0X8000;
    // 0x800082A8: sw          $t1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r9;
    // 0x800082AC: jr          $ra
    // 0x800082B0: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x800082B0: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_800237F0_243F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800237F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800237F4: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x800237F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800237FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023800: addiu       $a1, $a0, 0x400
    ctx->r5 = ADD32(ctx->r4, 0X400);
    // 0x80023804: jal         0x800457D0
    // 0x80023808: addiu       $a2, $a0, 0x404
    ctx->r6 = ADD32(ctx->r4, 0X404);
    osPfsNumFiles_recomp(rdram, ctx);
        goto after_0;
    // 0x80023808: addiu       $a2, $a0, 0x404
    ctx->r6 = ADD32(ctx->r4, 0X404);
    after_0:
    // 0x8002380C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80023810: jal         0x80023ADC
    // 0x80023814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x80023814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80023818: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002381C: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023820: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80023824: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80023828: sw          $t6, 0x3FC($t7)
    MEM_W(0X3FC, ctx->r15) = ctx->r14;
    // 0x8002382C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80023830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023834: lw          $v0, 0x3FC($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X3FC);
    // 0x80023838: jr          $ra
    // 0x8002383C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002383C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003C540_3D140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C544: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C548: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003C54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C550: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8003C554: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003C558: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003C55C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8003C560: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x8003C564: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8003C568: xori        $t6, $v0, 0xE4
    ctx->r14 = ctx->r2 ^ 0XE4;
    // 0x8003C56C: bnel        $t6, $zero, L_8003C614
    if (ctx->r14 != 0) {
        // 0x8003C570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003C614;
    }
    goto skip_0;
    // 0x8003C570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003C574: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C578: lh          $t8, 0x8A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8A);
    // 0x8003C57C: bnel        $t8, $zero, L_8003C600
    if (ctx->r24 != 0) {
        // 0x8003C580: lw          $t4, 0x0($a0)
        ctx->r12 = MEM_W(ctx->r4, 0X0);
            goto L_8003C600;
    }
    goto skip_1;
    // 0x8003C580: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x8003C584: sb          $zero, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = 0;
    // 0x8003C588: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8003C58C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x8003C590: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x8003C594: sb          $t0, 0x7C($t1)
    MEM_B(0X7C, ctx->r9) = ctx->r8;
    // 0x8003C598: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8003C59C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003C5A0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003C5A4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8003C5A8: lbu         $t5, 0x0($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X0);
    // 0x8003C5AC: sb          $t5, 0x7D($t6)
    MEM_B(0X7D, ctx->r14) = ctx->r13;
    // 0x8003C5B0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8003C5B4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C5B8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003C5BC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8003C5C0: lbu         $v1, 0x0($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X0);
    // 0x8003C5C4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003C5C8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8003C5CC: lbu         $t0, 0x25($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X25);
    // 0x8003C5D0: lw          $t2, 0x28($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X28);
    // 0x8003C5D4: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x8003C5D8: sll         $t1, $v1, 8
    ctx->r9 = S32(ctx->r3 << 8);
    // 0x8003C5DC: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8003C5E0: jal         0x8003C498
    // 0x8003C5E4: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    func_8003C498_3D098(rdram, ctx);
        goto after_0;
    // 0x8003C5E4: sw          $t3, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r11;
    after_0:
    // 0x8003C5E8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C5EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C5F0: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003C5F4: b           L_8003C608
    // 0x8003C5F8: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
        goto L_8003C608;
    // 0x8003C5F8: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003C5FC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
L_8003C600:
    // 0x8003C600: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x8003C604: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
L_8003C608:
    // 0x8003C608: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003C60C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x8003C610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003C614:
    // 0x8003C614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C618: jr          $ra
    // 0x8003C61C: nop

    TRACE_RETURN()
    return;
    // 0x8003C61C: nop

;}
RECOMP_FUNC void func_80018908_19508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80018908: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001890C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80018910: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80018914: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80018918: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001891C: lui         $s3, 0x8FFF
    ctx->r19 = S32(0X8FFF << 16);
    // 0x80018920: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x80018924: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80018928: lui         $s6, 0x80FF
    ctx->r22 = S32(0X80FF << 16);
    // 0x8001892C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80018930: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80018934: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80018938: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x8001893C: ori         $s6, $s6, 0xFFFF
    ctx->r22 = ctx->r22 | 0XFFFF;
    // 0x80018940: addiu       $s5, $s5, -0x7B60
    ctx->r21 = ADD32(ctx->r21, -0X7B60);
    // 0x80018944: addiu       $s4, $s4, -0x7B10
    ctx->r20 = ADD32(ctx->r20, -0X7B10);
    // 0x80018948: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x8001894C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80018950: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80018954: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80018958:
    // 0x80018958: jal         0x800192D0
    // 0x8001895C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800192D0_19ED0(rdram, ctx);
        goto after_0;
    // 0x8001895C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80018960: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80018964: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80018968: bltz        $t6, L_8001898C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001896C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8001898C;
    }
    // 0x8001896C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80018970: and         $v0, $v1, $s3
    ctx->r2 = ctx->r3 & ctx->r19;
    // 0x80018974: beql        $v0, $zero, L_80018A54
    if (ctx->r2 == 0) {
        // 0x80018978: lhu         $t8, 0xC($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0XC);
            goto L_80018A54;
    }
    goto skip_0;
    // 0x80018978: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
    skip_0:
    // 0x8001897C: jal         0x800196F0
    // 0x80018980: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_1;
    // 0x80018980: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80018984: b           L_80018A54
    // 0x80018988: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
        goto L_80018A54;
    // 0x80018988: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
L_8001898C:
    // 0x8001898C: beq         $v1, $zero, L_800189F4
    if (ctx->r3 == 0) {
        // 0x80018990: sw          $v1, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r3;
            goto L_800189F4;
    }
    // 0x80018990: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    // 0x80018994: sll         $t7, $v1, 0
    ctx->r15 = S32(ctx->r3 << 0);
    // 0x80018998: bgez        $t7, L_800189A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8001899C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_800189A8;
    }
    // 0x8001899C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800189A0: b           L_800189F8
    // 0x800189A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800189F8;
    // 0x800189A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800189A8:
    // 0x800189A8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x800189AC: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x800189B0: bne         $at, $zero, L_800189D8
    if (ctx->r1 != 0) {
        // 0x800189B4: srl         $t9, $v0, 24
        ctx->r25 = S32(U32(ctx->r2) >> 24);
            goto L_800189D8;
    }
    // 0x800189B4: srl         $t9, $v0, 24
    ctx->r25 = S32(U32(ctx->r2) >> 24);
    // 0x800189B8: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x800189BC: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x800189C0: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800189C4: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800189C8: lw          $t3, -0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, -0X8);
    // 0x800189CC: and         $t4, $v0, $s6
    ctx->r12 = ctx->r2 & ctx->r22;
    // 0x800189D0: b           L_800189E8
    // 0x800189D4: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
        goto L_800189E8;
    // 0x800189D4: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
L_800189D8:
    // 0x800189D8: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x800189DC: and         $t7, $v0, $s6
    ctx->r15 = ctx->r2 & ctx->r22;
    // 0x800189E0: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    // 0x800189E4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
L_800189E8:
    // 0x800189E8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800189EC: b           L_800189F8
    // 0x800189F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800189F8;
    // 0x800189F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800189F4:
    // 0x800189F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800189F8:
    // 0x800189F8: and         $s0, $v0, $s3
    ctx->r16 = ctx->r2 & ctx->r19;
    // 0x800189FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80018A00: beql        $a0, $zero, L_80018A14
    if (ctx->r4 == 0) {
        // 0x80018A04: lb          $v0, 0x4($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X4);
            goto L_80018A14;
    }
    goto skip_1;
    // 0x80018A04: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    skip_1:
    // 0x80018A08: jal         0x800196F0
    // 0x80018A0C: nop

    func_800196F0_1A2F0(rdram, ctx);
        goto after_2;
    // 0x80018A0C: nop

    after_2:
    // 0x80018A10: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
L_80018A14:
    // 0x80018A14: beql        $v0, $zero, L_80018A34
    if (ctx->r2 == 0) {
        // 0x80018A18: lb          $v0, 0x5($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X5);
            goto L_80018A34;
    }
    goto skip_2;
    // 0x80018A18: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    skip_2:
    // 0x80018A1C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018A20: mflo        $t9
    ctx->r25 = lo;
    // 0x80018A24: addu        $a0, $s0, $t9
    ctx->r4 = ADD32(ctx->r16, ctx->r25);
    // 0x80018A28: jal         0x80018908
    // 0x80018A2C: nop

    func_80018908_19508(rdram, ctx);
        goto after_3;
    // 0x80018A2C: nop

    after_3:
    // 0x80018A30: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
L_80018A34:
    // 0x80018A34: beql        $v0, $zero, L_80018A54
    if (ctx->r2 == 0) {
        // 0x80018A38: lhu         $t8, 0xC($s1)
        ctx->r24 = MEM_HU(ctx->r17, 0XC);
            goto L_80018A54;
    }
    goto skip_3;
    // 0x80018A38: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
    skip_3:
    // 0x80018A3C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018A40: mflo        $t0
    ctx->r8 = lo;
    // 0x80018A44: addu        $a0, $s0, $t0
    ctx->r4 = ADD32(ctx->r16, ctx->r8);
    // 0x80018A48: jal         0x80018908
    // 0x80018A4C: nop

    func_80018908_19508(rdram, ctx);
        goto after_4;
    // 0x80018A4C: nop

    after_4:
    // 0x80018A50: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
L_80018A54:
    // 0x80018A54: lhu         $t1, 0xE($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0XE);
    // 0x80018A58: lhu         $t3, 0x10($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X10);
    // 0x80018A5C: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x80018A60: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80018A64: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x80018A68: beq         $t5, $zero, L_80018A78
    if (ctx->r13 == 0) {
        // 0x80018A6C: nop
    
            goto L_80018A78;
    }
    // 0x80018A6C: nop

    // 0x80018A70: jal         0x800196A4
    // 0x80018A74: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_5;
    // 0x80018A74: nop

    after_5:
L_80018A78:
    // 0x80018A78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018A7C: lw          $t6, -0x7AE4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7AE4);
    // 0x80018A80: beq         $t6, $zero, L_80018AB8
    if (ctx->r14 == 0) {
        // 0x80018A84: nop
    
            goto L_80018AB8;
    }
    // 0x80018A84: nop

    // 0x80018A88: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x80018A8C: beq         $v0, $zero, L_80018AA8
    if (ctx->r2 == 0) {
        // 0x80018A90: nop
    
            goto L_80018AA8;
    }
    // 0x80018A90: nop

    // 0x80018A94: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018A98: mflo        $t7
    ctx->r15 = lo;
    // 0x80018A9C: addu        $a0, $s1, $t7
    ctx->r4 = ADD32(ctx->r17, ctx->r15);
    // 0x80018AA0: jal         0x80018908
    // 0x80018AA4: nop

    func_80018908_19508(rdram, ctx);
        goto after_6;
    // 0x80018AA4: nop

    after_6:
L_80018AA8:
    // 0x80018AA8: jal         0x800196A4
    // 0x80018AAC: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_7;
    // 0x80018AAC: nop

    after_7:
    // 0x80018AB0: b           L_80018AE4
    // 0x80018AB4: lb          $v0, 0x5($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5);
        goto L_80018AE4;
    // 0x80018AB4: lb          $v0, 0x5($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5);
L_80018AB8:
    // 0x80018AB8: jal         0x800196A4
    // 0x80018ABC: nop

    func_800196A4_1A2A4(rdram, ctx);
        goto after_8;
    // 0x80018ABC: nop

    after_8:
    // 0x80018AC0: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x80018AC4: beql        $v0, $zero, L_80018AE4
    if (ctx->r2 == 0) {
        // 0x80018AC8: lb          $v0, 0x5($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X5);
            goto L_80018AE4;
    }
    goto skip_4;
    // 0x80018AC8: lb          $v0, 0x5($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5);
    skip_4:
    // 0x80018ACC: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018AD0: mflo        $t9
    ctx->r25 = lo;
    // 0x80018AD4: addu        $a0, $s1, $t9
    ctx->r4 = ADD32(ctx->r17, ctx->r25);
    // 0x80018AD8: jal         0x80018908
    // 0x80018ADC: nop

    func_80018908_19508(rdram, ctx);
        goto after_9;
    // 0x80018ADC: nop

    after_9:
    // 0x80018AE0: lb          $v0, 0x5($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X5);
L_80018AE4:
    // 0x80018AE4: beql        $v0, $zero, L_80018B04
    if (ctx->r2 == 0) {
        // 0x80018AE8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80018B04;
    }
    goto skip_5;
    // 0x80018AE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
    // 0x80018AEC: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018AF0: mflo        $t0
    ctx->r8 = lo;
    // 0x80018AF4: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
    // 0x80018AF8: b           L_80018958
    // 0x80018AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_80018958;
    // 0x80018AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80018B00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80018B04:
    // 0x80018B04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80018B08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80018B0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80018B10: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80018B14: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80018B18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80018B1C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80018B20: jr          $ra
    // 0x80018B24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80018B24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003AEB0_3BAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AEB4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003AEB8: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003AEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AEC0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003AEC4: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x8003AEC8: addiu       $t5, $t5, -0x1930
    ctx->r13 = ADD32(ctx->r13, -0X1930);
    // 0x8003AECC: lbu         $t6, 0x6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X6);
    // 0x8003AED0: andi        $t7, $t6, 0xFD
    ctx->r15 = ctx->r14 & 0XFD;
    // 0x8003AED4: sb          $t7, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r15;
    // 0x8003AED8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003AEDC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003AEE0: lw          $t8, 0x28($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X28);
    // 0x8003AEE4: lhu         $t9, 0x38($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X38);
    // 0x8003AEE8: lh          $t1, 0x36($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X36);
    // 0x8003AEEC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003AEF0: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8003AEF4: bgez        $v0, L_8003AF04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8003AEF8: slti        $at, $v0, 0x4801
        ctx->r1 = SIGNED(ctx->r2) < 0X4801 ? 1 : 0;
            goto L_8003AF04;
    }
    // 0x8003AEF8: slti        $at, $v0, 0x4801
    ctx->r1 = SIGNED(ctx->r2) < 0X4801 ? 1 : 0;
    // 0x8003AEFC: b           L_8003AF10
    // 0x8003AF00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003AF10;
    // 0x8003AF00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003AF04:
    // 0x8003AF04: bnel        $at, $zero, L_8003AF14
    if (ctx->r1 != 0) {
        // 0x8003AF08: sra         $t3, $v0, 8
        ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
            goto L_8003AF14;
    }
    goto skip_0;
    // 0x8003AF08: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
    skip_0:
    // 0x8003AF0C: addiu       $v0, $zero, 0x4800
    ctx->r2 = ADD32(0, 0X4800);
L_8003AF10:
    // 0x8003AF10: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
L_8003AF14:
    // 0x8003AF14: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8003AF18: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x8003AF1C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8003AF20: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8003AF24: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8003AF28: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8003AF2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003AF30: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8003AF34: bgez        $t2, L_8003AF48
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8003AF38: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8003AF48;
    }
    // 0x8003AF38: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003AF3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003AF40: nop

    // 0x8003AF44: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8003AF48:
    // 0x8003AF48: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8003AF4C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8003AF50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003AF54: lwc1        $f4, 0xA4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x8003AF58: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003AF5C: addiu       $t8, $t8, 0xA68
    ctx->r24 = ADD32(ctx->r24, 0XA68);
    // 0x8003AF60: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003AF64: div.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8003AF68: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8003AF6C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8003AF70: nop

    // 0x8003AF74: bc1tl       L_8003AFA4
    if (c1cs) {
        // 0x8003AF78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003AFA4;
    }
    goto skip_1;
    // 0x8003AF78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8003AF7C: swc1        $f0, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f0.u32l;
    // 0x8003AF80: lbu         $t6, 0x9CC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9CC);
    // 0x8003AF84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8003AF88: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003AF8C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8003AF90: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003AF94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003AF98: jal         0x80048890
    // 0x8003AF9C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    alSynSetPitch(rdram, ctx);
        goto after_0;
    // 0x8003AF9C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x8003AFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003AFA4:
    // 0x8003AFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AFA8: jr          $ra
    // 0x8003AFAC: nop

    TRACE_RETURN()
    return;
    // 0x8003AFAC: nop

;}
RECOMP_FUNC void func_8000D180_DD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D180: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000D184: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000D188: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000D18C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000D190: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8000D194: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D198: beq         $v0, $zero, L_8000D218
    if (ctx->r2 == 0) {
        // 0x8000D19C: subu        $t7, $t7, $a1
        ctx->r15 = SUB32(ctx->r15, ctx->r5);
            goto L_8000D218;
    }
    // 0x8000D19C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8000D1A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8000D1A4: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8000D1A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000D1AC: sh          $t8, 0x19C($v1)
    MEM_H(0X19C, ctx->r3) = ctx->r24;
    // 0x8000D1B0: sw          $a2, 0x198($v1)
    MEM_W(0X198, ctx->r3) = ctx->r6;
    // 0x8000D1B4: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8000D1B8: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x8000D1BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D1C0: sw          $t1, 0x1C4($v1)
    MEM_W(0X1C4, ctx->r3) = ctx->r9;
    // 0x8000D1C4: sw          $t0, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r8;
    // 0x8000D1C8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000D1CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D1D0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8000D1D4: sh          $t9, 0x19E($v1)
    MEM_H(0X19E, ctx->r3) = ctx->r25;
    // 0x8000D1D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D1DC: addiu       $v1, $v1, 0x198
    ctx->r3 = ADD32(ctx->r3, 0X198);
    // 0x8000D1E0: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x8000D1E4: sh          $t3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r11;
    // 0x8000D1E8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8000D1EC: sh          $t6, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r14;
    // 0x8000D1F0: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x8000D1F4: addiu       $t5, $t4, 0x6
    ctx->r13 = ADD32(ctx->r12, 0X6);
    // 0x8000D1F8: sh          $t5, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r13;
    // 0x8000D1FC: sh          $zero, 0x10($v1)
    MEM_H(0X10, ctx->r3) = 0;
    // 0x8000D200: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x8000D204: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8000D208: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x8000D20C: sh          $zero, 0x20($v1)
    MEM_H(0X20, ctx->r3) = 0;
    // 0x8000D210: sh          $zero, 0x22($v1)
    MEM_H(0X22, ctx->r3) = 0;
    // 0x8000D214: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
L_8000D218:
    // 0x8000D218: jr          $ra
    // 0x8000D21C: nop

    TRACE_RETURN()
    return;
    // 0x8000D21C: nop

;}
RECOMP_FUNC void func_800383C4_38FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800383C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800383C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800383CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800383D0: jal         0x80047840
    // 0x800383D4: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_0;
    // 0x800383D4: nop

    after_0:
    // 0x800383D8: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x800383DC: bne         $t6, $zero, L_800383F8
    if (ctx->r14 != 0) {
        // 0x800383E0: lui         $t7, 0x8007
        ctx->r15 = S32(0X8007 << 16);
            goto L_800383F8;
    }
    // 0x800383E0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x800383E4: lw          $t7, -0x1DC4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1DC4);
    // 0x800383E8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800383EC: bnel        $t7, $zero, L_800383FC
    if (ctx->r15 != 0) {
        // 0x800383F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800383FC;
    }
    goto skip_0;
    // 0x800383F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800383F4: sw          $zero, -0x1DC4($at)
    MEM_W(-0X1DC4, ctx->r1) = 0;
L_800383F8:
    // 0x800383F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800383FC:
    // 0x800383FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038400: jr          $ra
    // 0x80038404: nop

    TRACE_RETURN()
    return;
    // 0x80038404: nop

;}
RECOMP_FUNC void func_80037C9C_3889C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037C9C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80037CA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80037CA4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80037CA8: jr          $ra
    // 0x80037CAC: sw          $a1, -0x250C($at)
    MEM_W(-0X250C, ctx->r1) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80037CAC: sw          $a1, -0x250C($at)
    MEM_W(-0X250C, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_80013940_14540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013940: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80013944: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80013948: addiu       $v0, $v0, -0x7EC0
    ctx->r2 = ADD32(ctx->r2, -0X7EC0);
    // 0x8001394C: addiu       $v1, $v1, 0x7FC0
    ctx->r3 = ADD32(ctx->r3, 0X7FC0);
L_80013950:
    // 0x80013950: andi        $t6, $zero, 0xFFFF
    ctx->r14 = 0 & 0XFFFF;
    // 0x80013954: andi        $t7, $zero, 0xFFFF
    ctx->r15 = 0 & 0XFFFF;
    // 0x80013958: andi        $t8, $zero, 0xFFFF
    ctx->r24 = 0 & 0XFFFF;
    // 0x8001395C: andi        $t9, $zero, 0xFFFF
    ctx->r25 = 0 & 0XFFFF;
    // 0x80013960: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80013964: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x80013968: sw          $t8, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r24;
    // 0x8001396C: sw          $t7, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r15;
    // 0x80013970: sw          $t6, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r14;
    // 0x80013974: sh          $zero, -0x20($v1)
    MEM_H(-0X20, ctx->r3) = 0;
    // 0x80013978: sh          $zero, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = 0;
    // 0x8001397C: sh          $zero, -0x10($v1)
    MEM_H(-0X10, ctx->r3) = 0;
    // 0x80013980: bne         $v1, $v0, L_80013950
    if (ctx->r3 != ctx->r2) {
        // 0x80013984: sh          $zero, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = 0;
            goto L_80013950;
    }
    // 0x80013984: sh          $zero, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = 0;
    // 0x80013988: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8001398C: lui         $t0, 0x8030
    ctx->r8 = S32(0X8030 << 16);
    // 0x80013990: addiu       $v0, $v0, 0x7FC0
    ctx->r2 = ADD32(ctx->r2, 0X7FC0);
    // 0x80013994: addiu       $t0, $t0, 0x4000
    ctx->r8 = ADD32(ctx->r8, 0X4000);
    // 0x80013998: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8001399C: jr          $ra
    // 0x800139A0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x800139A0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void lldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051720: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80051724: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80051728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005172C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80051730: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80051734: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80051738: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8005173C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80051740: jal         0x80042E6C
    // 0x80051744: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    __ll_div_recomp(rdram, ctx);
        goto after_0;
    // 0x80051744: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x80051748: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8005174C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80051750: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80051754: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80051758: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8005175C: jal         0x80042EC8
    // 0x80051760: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_1;
    // 0x80051760: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x80051764: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80051768: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005176C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80051770: subu        $t8, $t6, $v0
    ctx->r24 = SUB32(ctx->r14, ctx->r2);
    // 0x80051774: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x80051778: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x8005177C: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x80051780: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80051784: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80051788: bgtz        $t0, L_800517E8
    if (SIGNED(ctx->r8) > 0) {
        // 0x8005178C: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_800517E8;
    }
    // 0x8005178C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80051790: bltz        $t0, L_800517A0
    if (SIGNED(ctx->r8) < 0) {
        // 0x80051794: nop
    
            goto L_800517A0;
    }
    // 0x80051794: nop

    // 0x80051798: b           L_800517EC
    // 0x8005179C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
        goto L_800517EC;
    // 0x8005179C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_800517A0:
    // 0x800517A0: bltzl       $t8, L_800517EC
    if (SIGNED(ctx->r24) < 0) {
        // 0x800517A4: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_800517EC;
    }
    goto skip_0;
    // 0x800517A4: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_0:
    // 0x800517A8: bgtz        $t8, L_800517B8
    if (SIGNED(ctx->r24) > 0) {
        // 0x800517AC: addiu       $t3, $t1, 0x1
        ctx->r11 = ADD32(ctx->r9, 0X1);
            goto L_800517B8;
    }
    // 0x800517AC: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800517B0: beql        $t9, $zero, L_800517EC
    if (ctx->r25 == 0) {
        // 0x800517B4: addiu       $t0, $sp, 0x20
        ctx->r8 = ADD32(ctx->r29, 0X20);
            goto L_800517EC;
    }
    goto skip_1;
    // 0x800517B4: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    skip_1:
L_800517B8:
    // 0x800517B8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800517BC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800517C0: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x800517C4: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x800517C8: subu        $t6, $t8, $t4
    ctx->r14 = SUB32(ctx->r24, ctx->r12);
    // 0x800517CC: sltu        $at, $t9, $t5
    ctx->r1 = ctx->r25 < ctx->r13 ? 1 : 0;
    // 0x800517D0: subu        $t6, $t6, $at
    ctx->r14 = SUB32(ctx->r14, ctx->r1);
    // 0x800517D4: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x800517D8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800517DC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800517E0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800517E4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_800517E8:
    // 0x800517E8: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
L_800517EC:
    // 0x800517EC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800517F0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x800517F4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x800517F8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x800517FC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80051800: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x80051804: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80051808: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8005180C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80051810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051814: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80051818: jr          $ra
    // 0x8005181C: nop

    TRACE_RETURN()
    return;
    // 0x8005181C: nop

;}
RECOMP_FUNC void alEnvmixerNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E53C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E540: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004E544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004E548: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E54C: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E550: addiu       $a2, $a2, -0x3EC
    ctx->r6 = ADD32(ctx->r6, -0X3EC);
    // 0x8004E554: addiu       $a1, $a1, 0x20C
    ctx->r5 = ADD32(ctx->r5, 0X20C);
    // 0x8004E558: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004E55C: jal         0x800518C0
    // 0x8004E560: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E560: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8004E564: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8004E568: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E56C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E574: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8004E578: jal         0x800476B0
    // 0x8004E57C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8004E57C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8004E580: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8004E584: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004E588: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x8004E58C: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x8004E590: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x8004E594: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x8004E598: sh          $v1, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r3;
    // 0x8004E59C: sh          $v1, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r3;
    // 0x8004E5A0: sh          $v1, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r3;
    // 0x8004E5A4: sh          $v1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r3;
    // 0x8004E5A8: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x8004E5AC: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    // 0x8004E5B0: sh          $v1, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r3;
    // 0x8004E5B4: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x8004E5B8: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x8004E5BC: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x8004E5C0: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x8004E5C4: sw          $zero, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = 0;
    // 0x8004E5C8: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x8004E5CC: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x8004E5D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004E5D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004E5D8: jr          $ra
    // 0x8004E5DC: nop

    TRACE_RETURN()
    return;
    // 0x8004E5DC: nop

;}
RECOMP_FUNC void func_8001E0BC_1ECBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E0BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001E0C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8001E0C4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8001E0C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001E0CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001E0D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001E0D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001E0D8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8001E0DC: jal         0x800040A8
    // 0x8001E0E0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8001E0E0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x8001E0E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001E0E8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8001E0EC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8001E0F0: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x8001E0F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001E0F8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8001E0FC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8001E100: bc1f        L_8001E110
    if (!c1cs) {
        // 0x8001E104: lwc1        $f2, 0x54($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
            goto L_8001E110;
    }
    // 0x8001E104: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8001E108: b           L_8001E114
    // 0x8001E10C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_8001E114;
    // 0x8001E10C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
L_8001E110:
    // 0x8001E110: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8001E114:
    // 0x8001E114: ldc1        $f6, -0x46A8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X46A8);
    // 0x8001E118: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8001E11C: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x8001E120: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001E124: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8001E128: bc1f        L_8001E1EC
    if (!c1cs) {
        // 0x8001E12C: nop
    
            goto L_8001E1EC;
    }
    // 0x8001E12C: nop

    // 0x8001E130: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8001E134: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001E138: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001E13C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8001E140: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8001E144: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8001E148: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8001E14C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001E150: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8001E154: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001E158: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001E15C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001E160: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001E164: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8001E168: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001E16C: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8001E170: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001E174: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001E178: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001E17C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8001E180: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001E184: nop

    // 0x8001E188: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001E18C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001E190: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8001E194: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001E198: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001E19C: nop

    // 0x8001E1A0: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8001E1A4: add.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001E1A8: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x8001E1AC: neg.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = -ctx->f20.fl;
    // 0x8001E1B0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001E1B4: nop

    // 0x8001E1B8: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001E1BC: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001E1C0: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001E1C4: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001E1C8: nop

    // 0x8001E1CC: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8001E1D0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001E1D4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8001E1D8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8001E1DC: jal         0x800040A8
    // 0x8001E1E0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001E1E0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x8001E1E4: b           L_8001E2A8
    // 0x8001E1E8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8001E2A8;
    // 0x8001E1E8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8001E1EC:
    // 0x8001E1EC: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8001E1F0: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8001E1F4: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001E1F8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001E1FC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8001E200: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8001E204: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001E208: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8001E20C: mul.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8001E210: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8001E214: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8001E218: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001E21C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8001E220: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001E224: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8001E228: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8001E22C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8001E230: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8001E234: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001E238: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8001E23C: nop

    // 0x8001E240: mul.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001E244: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001E248: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001E24C: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001E250: nop

    // 0x8001E254: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001E258: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001E25C: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8001E260: sub.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8001E264: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8001E268: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001E26C: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001E270: div.s       $f12, $f16, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8001E274: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001E278: nop

    // 0x8001E27C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001E280: add.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8001E284: jal         0x800040A8
    // 0x8001E288: div.s       $f14, $f18, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8001E288: div.s       $f14, $f18, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    after_2:
    // 0x8001E28C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8001E290: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E294: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001E298: div.s       $f14, $f8, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8001E29C: jal         0x800040A8
    // 0x8001E2A0: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x8001E2A0: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    after_3:
    // 0x8001E2A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8001E2A8:
    // 0x8001E2A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001E2AC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8001E2B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001E2B4: jr          $ra
    // 0x8001E2B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8001E2B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80028B28_29728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028B28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028B2C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80028B30: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80028B34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80028B38: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80028B3C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80028B40: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x80028B44: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80028B48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80028B4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80028B50: bc1f        L_80028B88
    if (!c1cs) {
        // 0x80028B54: lwc1        $f8, 0x40($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80028B88;
    }
    // 0x80028B54: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80028B58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80028B5C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80028B60: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x80028B64: nop

    // 0x80028B68: bc1fl       L_80028B8C
    if (!c1cs) {
        // 0x80028B6C: lwc1        $f18, 0x38($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80028B8C;
    }
    goto skip_0;
    // 0x80028B6C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x80028B70: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80028B74: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80028B78: jal         0x80029560
    // 0x80028B7C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029560_2A160(rdram, ctx);
        goto after_0;
    // 0x80028B7C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80028B80: b           L_80028BB4
    // 0x80028B84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80028BB4;
    // 0x80028B84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80028B88:
    // 0x80028B88: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
L_80028B8C:
    // 0x80028B8C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80028B90: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80028B94: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80028B98: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80028B9C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80028BA0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80028BA4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80028BA8: jal         0x80028BC0
    // 0x80028BAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_80028BC0_297C0(rdram, ctx);
        goto after_1;
    // 0x80028BAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80028BB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80028BB4:
    // 0x80028BB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80028BB8: jr          $ra
    // 0x80028BBC: nop

    TRACE_RETURN()
    return;
    // 0x80028BBC: nop

;}
RECOMP_FUNC void func_800358E8_364E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800358E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800358EC: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800358F0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800358F4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800358F8: lhu         $t6, 0x66($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X66);
    // 0x800358FC: lhu         $t7, 0x6A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6A);
    // 0x80035900: lhu         $t8, 0x6E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6E);
    // 0x80035904: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80035908: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8003590C: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80035910: lhu         $t9, 0x7E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7E);
    // 0x80035914: lhu         $t0, 0x82($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X82);
    // 0x80035918: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003591C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80035920: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80035924: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80035928: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8003592C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80035930: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80035934: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80035938: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8003593C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80035940: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80035944: jal         0x800357BC
    // 0x80035948: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_800357BC_363BC(rdram, ctx);
        goto after_0;
    // 0x80035948: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x8003594C: jal         0x80034D24
    // 0x80035950: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80035950: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80035954: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80035958: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8003595C: jr          $ra
    // 0x80035960: nop

    TRACE_RETURN()
    return;
    // 0x80035960: nop

;}
RECOMP_FUNC void func_80011BB4_127B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011BB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80011BB8: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
    // 0x80011BBC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80011BC0: addiu       $a0, $a0, -0x39D8
    ctx->r4 = ADD32(ctx->r4, -0X39D8);
    // 0x80011BC4: beq         $v0, $zero, L_80011BFC
    if (ctx->r2 == 0) {
        // 0x80011BC8: nop
    
            goto L_80011BFC;
    }
    // 0x80011BC8: nop

    // 0x80011BCC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80011BD0: beq         $t6, $zero, L_80011BFC
    if (ctx->r14 == 0) {
        // 0x80011BD4: nop
    
            goto L_80011BFC;
    }
    // 0x80011BD4: nop

    // 0x80011BD8: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x80011BDC: andi        $t8, $t7, 0xFFEB
    ctx->r24 = ctx->r15 & 0XFFEB;
    // 0x80011BE0: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
    // 0x80011BE4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80011BE8: sb          $zero, 0x64($t9)
    MEM_B(0X64, ctx->r25) = 0;
    // 0x80011BEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80011BF0: lbu         $t0, 0x4($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X4);
    // 0x80011BF4: andi        $t1, $t0, 0xFF7F
    ctx->r9 = ctx->r8 & 0XFF7F;
    // 0x80011BF8: sb          $t1, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r9;
L_80011BFC:
    // 0x80011BFC: jr          $ra
    // 0x80011C00: nop

    TRACE_RETURN()
    return;
    // 0x80011C00: nop

;}
RECOMP_FUNC void alSeqFileNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048178: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8004817C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80048180: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80048184: blez        $t6, L_800481B0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80048188: nop
    
            goto L_800481B0;
    }
    // 0x80048188: nop

    // 0x8004818C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_80048190:
    // 0x80048190: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80048194: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80048198: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8004819C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x800481A0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x800481A4: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800481A8: bnel        $at, $zero, L_80048190
    if (ctx->r1 != 0) {
        // 0x800481AC: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_80048190;
    }
    goto skip_0;
    // 0x800481AC: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_800481B0:
    // 0x800481B0: jr          $ra
    // 0x800481B4: nop

    TRACE_RETURN()
    return;
    // 0x800481B4: nop

;}
RECOMP_FUNC void func_80021740_22340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80021740: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80021744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80021748: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002174C: lhu         $t6, 0xE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE);
    // 0x80021750: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80021754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80021758: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x8002175C: bne         $t7, $zero, L_80021798
    if (ctx->r15 != 0) {
        // 0x80021760: addiu       $a1, $a1, -0x3A34
        ctx->r5 = ADD32(ctx->r5, -0X3A34);
            goto L_80021798;
    }
    // 0x80021760: addiu       $a1, $a1, -0x3A34
    ctx->r5 = ADD32(ctx->r5, -0X3A34);
    // 0x80021764: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80021768: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8002176C: ori         $t9, $t9, 0x2006
    ctx->r25 = ctx->r25 | 0X2006;
    // 0x80021770: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80021774: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80021778: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002177C: lhu         $a0, 0xC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XC);
    // 0x80021780: jal         0x800141C4
    // 0x80021784: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80021784: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x80021788: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8002178C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80021790: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80021794: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
L_80021798:
    // 0x80021798: lw          $t1, 0x38($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X38);
    // 0x8002179C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800217A0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800217A4: bnel        $t1, $at, L_800217B8
    if (ctx->r9 != ctx->r1) {
        // 0x800217A8: lhu         $v0, 0xE($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XE);
            goto L_800217B8;
    }
    goto skip_0;
    // 0x800217A8: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    skip_0:
    // 0x800217AC: swl         $zero, -0x1($zero)
    do_swl(rdram, -0X1, 0, 0);
    // 0x800217B0: swr         $zero, 0x2($zero)
    do_swr(rdram, 0X2, 0, 0);
    // 0x800217B4: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
L_800217B8:
    // 0x800217B8: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x800217BC: sh          $t2, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r10;
    // 0x800217C0: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x800217C4: beq         $t3, $zero, L_800217D8
    if (ctx->r11 == 0) {
        // 0x800217C8: andi        $t5, $v0, 0x8
        ctx->r13 = ctx->r2 & 0X8;
            goto L_800217D8;
    }
    // 0x800217C8: andi        $t5, $v0, 0x8
    ctx->r13 = ctx->r2 & 0X8;
    // 0x800217CC: sh          $t4, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r12;
    // 0x800217D0: b           L_800217E8
    // 0x800217D4: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
        goto L_800217E8;
    // 0x800217D4: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
L_800217D8:
    // 0x800217D8: bne         $t5, $zero, L_800217E8
    if (ctx->r13 != 0) {
        // 0x800217DC: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_800217E8;
    }
    // 0x800217DC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x800217E0: sh          $t6, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r14;
    // 0x800217E4: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
L_800217E8:
    // 0x800217E8: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x800217EC: bnel        $t7, $zero, L_8002183C
    if (ctx->r15 != 0) {
        // 0x800217F0: andi        $t6, $v0, 0x8000
        ctx->r14 = ctx->r2 & 0X8000;
            goto L_8002183C;
    }
    goto skip_1;
    // 0x800217F0: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    skip_1:
    // 0x800217F4: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x800217F8: lh          $t9, 0x12($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X12);
    // 0x800217FC: lhu         $t1, 0x40($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X40);
    // 0x80021800: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x80021804: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021808: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8002180C: mflo        $t0
    ctx->r8 = lo;
    // 0x80021810: nop

    // 0x80021814: nop

    // 0x80021818: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002181C: mflo        $t2
    ctx->r10 = lo;
    // 0x80021820: bgez        $t2, L_80021830
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80021824: sra         $t3, $t2, 3
        ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
            goto L_80021830;
    }
    // 0x80021824: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80021828: addiu       $at, $t2, 0x7
    ctx->r1 = ADD32(ctx->r10, 0X7);
    // 0x8002182C: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_80021830:
    // 0x80021830: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x80021834: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x80021838: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
L_8002183C:
    // 0x8002183C: beq         $t6, $zero, L_80021860
    if (ctx->r14 == 0) {
        // 0x80021840: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_80021860;
    }
    // 0x80021840: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80021844: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80021848: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x8002184C: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x80021850: jal         0x80021894
    // 0x80021854: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    func_80021894_22494(rdram, ctx);
        goto after_1;
    // 0x80021854: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x80021858: b           L_80021884
    // 0x8002185C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80021884;
    // 0x8002185C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021860:
    // 0x80021860: beq         $t7, $zero, L_80021878
    if (ctx->r15 == 0) {
        // 0x80021864: nop
    
            goto L_80021878;
    }
    // 0x80021864: nop

    // 0x80021868: jal         0x80022214
    // 0x8002186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80022214_22E14(rdram, ctx);
        goto after_2;
    // 0x8002186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80021870: b           L_80021884
    // 0x80021874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80021884;
    // 0x80021874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021878:
    // 0x80021878: jal         0x80022A74
    // 0x8002187C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80022A74_23674(rdram, ctx);
        goto after_3;
    // 0x8002187C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80021880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80021884:
    // 0x80021884: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80021888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002188C: jr          $ra
    // 0x80021890: nop

    TRACE_RETURN()
    return;
    // 0x80021890: nop

;}
RECOMP_FUNC void func_80003478_4078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003478: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000347C: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80003480: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80003484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003488: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x8000348C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003490: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80003494: lbu         $t6, -0x5222($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5222);
    // 0x80003498: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000349C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800034A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800034A4: sb          $t7, -0x5222($at)
    MEM_B(-0X5222, ctx->r1) = ctx->r15;
    // 0x800034A8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800034AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800034B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800034B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800034B8: jal         0x80003380
    // 0x800034BC: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    func_80003380_3F80(rdram, ctx);
        goto after_0;
    // 0x800034BC: sb          $zero, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = 0;
    after_0:
    // 0x800034C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800034C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800034C8: jr          $ra
    // 0x800034CC: nop

    TRACE_RETURN()
    return;
    // 0x800034CC: nop

;}
RECOMP_FUNC void func_80007550_8150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007550: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80007554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80007558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000755C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80007560: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80007564: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80007568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000756C: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80007570: bne         $t7, $zero, L_80007620
    if (ctx->r15 != 0) {
        // 0x80007574: nop
    
            goto L_80007620;
    }
    // 0x80007574: nop

    // 0x80007578: jal         0x80041EE0
    // 0x8000757C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x8000757C: nop

    after_0:
    // 0x80007580: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x80007584: lw          $t8, 0x58($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X58);
    // 0x80007588: addiu       $a3, $s0, 0x60
    ctx->r7 = ADD32(ctx->r16, 0X60);
    // 0x8000758C: lw          $t3, 0x4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X4);
    // 0x80007590: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x80007594: subu        $t1, $v1, $t9
    ctx->r9 = SUB32(ctx->r3, ctx->r25);
    // 0x80007598: subu        $t0, $v0, $t8
    ctx->r8 = SUB32(ctx->r2, ctx->r24);
    // 0x8000759C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x800075A0: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x800075A4: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x800075A8: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x800075AC: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x800075B0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800075B4: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x800075B8: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x800075BC: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x800075C0: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x800075C4: jal         0x80040250
    // 0x800075C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800075C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800075CC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x800075D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800075D4: bne         $t6, $at, L_80007618
    if (ctx->r14 != ctx->r1) {
        // 0x800075D8: nop
    
            goto L_80007618;
    }
    // 0x800075D8: nop

    // 0x800075DC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800075E0: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x800075E4: beq         $t7, $zero, L_80007618
    if (ctx->r15 == 0) {
        // 0x800075E8: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_80007618;
    }
    // 0x800075E8: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x800075EC: beq         $t8, $zero, L_80007618
    if (ctx->r24 == 0) {
        // 0x800075F0: lui         $t9, 0x8006
        ctx->r25 = S32(0X8006 << 16);
            goto L_80007618;
    }
    // 0x800075F0: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x800075F4: lw          $t9, -0x4C14($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C14);
    // 0x800075F8: beq         $t9, $zero, L_80007610
    if (ctx->r25 == 0) {
        // 0x800075FC: nop
    
            goto L_80007610;
    }
    // 0x800075FC: nop

    // 0x80007600: jal         0x80041770
    // 0x80007604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_2;
    // 0x80007604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80007608: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x8000760C: sw          $zero, -0x4C14($at)
    MEM_W(-0X4C14, ctx->r1) = 0;
L_80007610:
    // 0x80007610: jal         0x80042760
    // 0x80007614: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x80007614: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_3:
L_80007618:
    // 0x80007618: b           L_80007620
    // 0x8000761C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80007620;
    // 0x8000761C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80007620:
    // 0x80007620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80007624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000762C: jr          $ra
    // 0x80007630: nop

    TRACE_RETURN()
    return;
    // 0x80007630: nop

;}
