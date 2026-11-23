#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021B938_685318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B938: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B93C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021B940: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B944: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x8021B948: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021B94C: nop

    // 0x8021B950: bc1fl       L_8021B974
    if (!c1cs) {
        // 0x8021B954: lwc1        $f10, 0x20($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
            goto L_8021B974;
    }
    goto skip_0;
    // 0x8021B954: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x8021B958: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B95C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B960: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021B964: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021B968: b           L_8021B97C
    // 0x8021B96C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B97C;
    // 0x8021B96C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021B970: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
L_8021B974:
    // 0x8021B974: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021B978: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021B97C:
    // 0x8021B97C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021B980: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021B984: jr          $ra
    // 0x8021B988: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B988: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80224B30_68E510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224B30: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80224B34: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80224B38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80224B3C: bgez        $t6, L_80224B54
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80224B40: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80224B54;
    }
    // 0x80224B40: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80224B44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80224B48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80224B4C: nop

    // 0x80224B50: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80224B54:
    // 0x80224B54: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80224B58: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x80224B5C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224B60: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80224B64: nop

    // 0x80224B68: bc1fl       L_80224B8C
    if (!c1cs) {
        // 0x80224B6C: lwc1        $f18, 0x8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80224B8C;
    }
    goto skip_0;
    // 0x80224B6C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80224B70: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224B74: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224B78: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224B7C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80224B80: b           L_80224B94
    // 0x80224B84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80224B94;
    // 0x80224B84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80224B88: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
L_80224B8C:
    // 0x80224B8C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224B90: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_80224B94:
    // 0x80224B94: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80224B98: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80224B9C: jr          $ra
    // 0x80224BA0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80224BA0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80216D74_680754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216D74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80216D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216D7C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80216D80: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80216D84: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80216D88: lwc1        $f18, 0x68($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80216D8C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80216D90: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80216D94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216D98: ldc1        $f6, -0x5628($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5628);
    // 0x80216D9C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80216DA0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80216DA4: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80216DA8: addiu       $t0, $a0, 0x5C
    ctx->r8 = ADD32(ctx->r4, 0X5C);
    // 0x80216DAC: bc1fl       L_80216E1C
    if (!c1cs) {
        // 0x80216DB0: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_80216E1C;
    }
    goto skip_0;
    // 0x80216DB0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x80216DB4: lwc1        $f2, 0x34($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X34);
    // 0x80216DB8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80216DBC: nop

    // 0x80216DC0: bc1fl       L_80216DD8
    if (!c1cs) {
        // 0x80216DC4: sub.s       $f0, $f2, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_80216DD8;
    }
    goto skip_1;
    // 0x80216DC4: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    skip_1:
    // 0x80216DC8: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x80216DCC: b           L_80216DD8
    // 0x80216DD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216DD8;
    // 0x80216DD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216DD4: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
L_80216DD8:
    // 0x80216DD8: lwc1        $f12, 0x38($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X38);
    // 0x80216DDC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80216DE0: nop

    // 0x80216DE4: bc1fl       L_80216E00
    if (!c1cs) {
        // 0x80216DE8: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_80216E00;
    }
    goto skip_2;
    // 0x80216DE8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_2:
    // 0x80216DEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80216DF0: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80216DF4: b           L_80216E18
    // 0x80216DF8: swc1        $f4, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f4.u32l;
        goto L_80216E18;
    // 0x80216DF8: swc1        $f4, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f4.u32l;
    // 0x80216DFC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_80216E00:
    // 0x80216E00: nop

    // 0x80216E04: bc1fl       L_80216E18
    if (!c1cs) {
        // 0x80216E08: add.s       $f16, $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
            goto L_80216E18;
    }
    goto skip_3;
    // 0x80216E08: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
    skip_3:
    // 0x80216E0C: b           L_80216E18
    // 0x80216E10: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
        goto L_80216E18;
    // 0x80216E10: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80216E14: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
L_80216E18:
    // 0x80216E18: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_80216E1C:
    // 0x80216E1C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216E20: ldc1        $f8, -0x5620($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5620);
    // 0x80216E24: lwc1        $f12, 0x9C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X9C);
    // 0x80216E28: addiu       $t0, $t0, 0x5C
    ctx->r8 = ADD32(ctx->r8, 0X5C);
    // 0x80216E2C: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80216E30: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x80216E34: nop

    // 0x80216E38: bc1fl       L_80216EA4
    if (!c1cs) {
        // 0x80216E3C: lwc1        $f12, 0x48($t0)
        ctx->f12.u32l = MEM_W(ctx->r8, 0X48);
            goto L_80216EA4;
    }
    goto skip_4;
    // 0x80216E3C: lwc1        $f12, 0x48($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X48);
    skip_4:
    // 0x80216E40: lwc1        $f2, 0x3C($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80216E44: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80216E48: nop

    // 0x80216E4C: bc1fl       L_80216E64
    if (!c1cs) {
        // 0x80216E50: sub.s       $f0, $f2, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
            goto L_80216E64;
    }
    goto skip_5;
    // 0x80216E50: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
    skip_5:
    // 0x80216E54: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80216E58: b           L_80216E64
    // 0x80216E5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216E64;
    // 0x80216E5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216E60: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80216E64:
    // 0x80216E64: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80216E68: nop

    // 0x80216E6C: bc1fl       L_80216E88
    if (!c1cs) {
        // 0x80216E70: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_80216E88;
    }
    goto skip_6;
    // 0x80216E70: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_6:
    // 0x80216E74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80216E78: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x80216E7C: b           L_80216EA0
    // 0x80216E80: swc1        $f10, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f10.u32l;
        goto L_80216EA0;
    // 0x80216E80: swc1        $f10, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f10.u32l;
    // 0x80216E84: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_80216E88:
    // 0x80216E88: nop

    // 0x80216E8C: bc1fl       L_80216EA0
    if (!c1cs) {
        // 0x80216E90: add.s       $f18, $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
            goto L_80216EA0;
    }
    goto skip_7;
    // 0x80216E90: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    skip_7:
    // 0x80216E94: b           L_80216EA0
    // 0x80216E98: sub.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f12.fl;
        goto L_80216EA0;
    // 0x80216E98: sub.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80216E9C: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
L_80216EA0:
    // 0x80216EA0: lwc1        $f12, 0x48($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X48);
L_80216EA4:
    // 0x80216EA4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216EA8: ldc1        $f4, -0x5618($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5618);
    // 0x80216EAC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80216EB0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216EB4: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80216EB8: nop

    // 0x80216EBC: bc1fl       L_80216F38
    if (!c1cs) {
        // 0x80216EC0: swc1        $f16, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
            goto L_80216F38;
    }
    goto skip_8;
    // 0x80216EC0: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
    skip_8:
    // 0x80216EC4: lwc1        $f2, 0x44($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80216EC8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216ECC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216ED0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80216ED4: nop

    // 0x80216ED8: bc1fl       L_80216EF0
    if (!c1cs) {
        // 0x80216EDC: sub.s       $f0, $f2, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
            goto L_80216EF0;
    }
    goto skip_9;
    // 0x80216EDC: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
    skip_9:
    // 0x80216EE0: sub.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80216EE4: b           L_80216EF0
    // 0x80216EE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216EF0;
    // 0x80216EE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216EEC: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
L_80216EF0:
    // 0x80216EF0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80216EF4: nop

    // 0x80216EF8: bc1fl       L_80216F14
    if (!c1cs) {
        // 0x80216EFC: c.lt.s      $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
            goto L_80216F14;
    }
    goto skip_10;
    // 0x80216EFC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    skip_10:
    // 0x80216F00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80216F04: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80216F08: b           L_80216F34
    // 0x80216F0C: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
        goto L_80216F34;
    // 0x80216F0C: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
    // 0x80216F10: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
L_80216F14:
    // 0x80216F14: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216F18: bc1fl       L_80216F30
    if (!c1cs) {
        // 0x80216F1C: add.s       $f4, $f10, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
            goto L_80216F30;
    }
    goto skip_11;
    // 0x80216F1C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    skip_11:
    // 0x80216F20: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x80216F24: b           L_80216F34
    // 0x80216F28: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_80216F34;
    // 0x80216F28: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80216F2C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
L_80216F30:
    // 0x80216F30: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_80216F34:
    // 0x80216F34: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
L_80216F38:
    // 0x80216F38: swc1        $f18, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f18.u32l;
    // 0x80216F3C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216F40: lwc1        $f14, 0x50($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X50);
    // 0x80216F44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216F48: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x80216F4C: ldc1        $f6, -0x5610($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5610);
    // 0x80216F50: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80216F54: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80216F58: nop

    // 0x80216F5C: bc1fl       L_80217004
    if (!c1cs) {
        // 0x80216F60: lwc1        $f0, 0x24($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
            goto L_80217004;
    }
    goto skip_12;
    // 0x80216F60: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    skip_12:
    // 0x80216F64: lwc1        $f12, 0x4C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x80216F68: lwc1        $f2, 0x24($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80216F6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80216F70: nop

    // 0x80216F74: bc1fl       L_80216F8C
    if (!c1cs) {
        // 0x80216F78: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80216F8C;
    }
    goto skip_13;
    // 0x80216F78: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x80216F7C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80216F80: b           L_80216F8C
    // 0x80216F84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216F8C;
    // 0x80216F84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216F88: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80216F8C:
    // 0x80216F8C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80216F90: nop

    // 0x80216F94: bc1fl       L_80216FB0
    if (!c1cs) {
        // 0x80216F98: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80216FB0;
    }
    goto skip_14;
    // 0x80216F98: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x80216F9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80216FA0: swc1        $f12, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f12.u32l;
    // 0x80216FA4: b           L_80216FD0
    // 0x80216FA8: swc1        $f4, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->f4.u32l;
        goto L_80216FD0;
    // 0x80216FA8: swc1        $f4, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->f4.u32l;
    // 0x80216FAC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80216FB0:
    // 0x80216FB0: nop

    // 0x80216FB4: bc1fl       L_80216FCC
    if (!c1cs) {
        // 0x80216FB8: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80216FCC;
    }
    goto skip_15;
    // 0x80216FB8: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x80216FBC: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80216FC0: b           L_80216FD0
    // 0x80216FC4: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
        goto L_80216FD0;
    // 0x80216FC4: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
    // 0x80216FC8: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80216FCC:
    // 0x80216FCC: swc1        $f6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f6.u32l;
L_80216FD0:
    // 0x80216FD0: lwc1        $f10, 0x24($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80216FD4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80216FD8: ldc1        $f8, -0x5608($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5608);
    // 0x80216FDC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80216FE0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80216FE4: nop

    // 0x80216FE8: bc1fl       L_80217004
    if (!c1cs) {
        // 0x80216FEC: lwc1        $f0, 0x24($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
            goto L_80217004;
    }
    goto skip_16;
    // 0x80216FEC: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    skip_16:
    // 0x80216FF0: jal         0x80034ED4
    // 0x80216FF4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80216FF4: nop

    after_0:
    // 0x80216FF8: b           L_802171E0
    // 0x80216FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802171E0;
    // 0x80216FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80217000: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
L_80217004:
    // 0x80217004: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217008: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021700C: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x80217010: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x80217014: lwc1        $f14, 0x5C($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X5C);
    // 0x80217018: ldc1        $f6, -0x5600($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5600);
    // 0x8021701C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80217020: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80217024: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80217028: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8021702C: nop

    // 0x80217030: bc1fl       L_802170D8
    if (!c1cs) {
        // 0x80217034: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_802170D8;
    }
    goto skip_17;
    // 0x80217034: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    skip_17:
    // 0x80217038: lwc1        $f12, 0x58($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X58);
    // 0x8021703C: lwc1        $f2, 0x54($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X54);
    // 0x80217040: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80217044: nop

    // 0x80217048: bc1fl       L_80217060
    if (!c1cs) {
        // 0x8021704C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80217060;
    }
    goto skip_18;
    // 0x8021704C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_18:
    // 0x80217050: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80217054: b           L_80217060
    // 0x80217058: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80217060;
    // 0x80217058: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021705C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80217060:
    // 0x80217060: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80217064: nop

    // 0x80217068: bc1fl       L_80217084
    if (!c1cs) {
        // 0x8021706C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80217084;
    }
    goto skip_19;
    // 0x8021706C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_19:
    // 0x80217070: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217074: swc1        $f12, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->f12.u32l;
    // 0x80217078: b           L_802170A4
    // 0x8021707C: swc1        $f4, 0x5C($t0)
    MEM_W(0X5C, ctx->r8) = ctx->f4.u32l;
        goto L_802170A4;
    // 0x8021707C: swc1        $f4, 0x5C($t0)
    MEM_W(0X5C, ctx->r8) = ctx->f4.u32l;
    // 0x80217080: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80217084:
    // 0x80217084: nop

    // 0x80217088: bc1fl       L_802170A0
    if (!c1cs) {
        // 0x8021708C: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802170A0;
    }
    goto skip_20;
    // 0x8021708C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_20:
    // 0x80217090: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80217094: b           L_802170A4
    // 0x80217098: swc1        $f8, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->f8.u32l;
        goto L_802170A4;
    // 0x80217098: swc1        $f8, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->f8.u32l;
    // 0x8021709C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_802170A0:
    // 0x802170A0: swc1        $f6, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->f6.u32l;
L_802170A4:
    // 0x802170A4: lwc1        $f10, 0x54($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X54);
    // 0x802170A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802170AC: ldc1        $f8, -0x55F8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X55F8);
    // 0x802170B0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802170B4: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x802170B8: nop

    // 0x802170BC: bc1fl       L_802170D8
    if (!c1cs) {
        // 0x802170C0: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_802170D8;
    }
    goto skip_21;
    // 0x802170C0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    skip_21:
    // 0x802170C4: jal         0x80034ED4
    // 0x802170C8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x802170C8: nop

    after_1:
    // 0x802170CC: b           L_802171E0
    // 0x802170D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802171E0;
    // 0x802170D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802170D4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
L_802170D8:
    // 0x802170D8: jal         0x80213F98
    // 0x802170DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80213F98_67D978(rdram, ctx);
        goto after_2;
    // 0x802170DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_2:
    // 0x802170E0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802170E4: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x802170E8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802170EC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x802170F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802170F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x802170F8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802170FC: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80217100: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80217104: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80217108: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x8021710C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80217110: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80217114: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80217118: lw          $t3, 0x60($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X60);
    // 0x8021711C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80217120: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80217124: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80217128: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8021712C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80217130: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80217134: addiu       $t4, $a2, 0x8
    ctx->r12 = ADD32(ctx->r6, 0X8);
    // 0x80217138: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8021713C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x80217140: lwc1        $f6, 0x54($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X54);
    // 0x80217144: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80217148: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021714C: nop

    // 0x80217150: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80217154: beql        $t7, $zero, L_802171A4
    if (ctx->r15 == 0) {
        // 0x80217158: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_802171A4;
    }
    goto skip_22;
    // 0x80217158: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_22:
    // 0x8021715C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80217160: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80217164: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80217168: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021716C: nop

    // 0x80217170: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80217174: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80217178: nop

    // 0x8021717C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80217180: bne         $t7, $zero, L_80217198
    if (ctx->r15 != 0) {
        // 0x80217184: nop
    
            goto L_80217198;
    }
    // 0x80217184: nop

    // 0x80217188: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8021718C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80217190: b           L_802171B0
    // 0x80217194: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_802171B0;
    // 0x80217194: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80217198:
    // 0x80217198: b           L_802171B0
    // 0x8021719C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_802171B0;
    // 0x8021719C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802171A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_802171A4:
    // 0x802171A4: nop

    // 0x802171A8: bltz        $t7, L_80217198
    if (SIGNED(ctx->r15) < 0) {
        // 0x802171AC: nop
    
            goto L_80217198;
    }
    // 0x802171AC: nop

L_802171B0:
    // 0x802171B0: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x802171B4: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x802171B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802171BC: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x802171C0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802171C4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802171C8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802171CC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802171D0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x802171D4: jal         0x80011760
    // 0x802171D8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x802171D8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x802171DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802171E0:
    // 0x802171E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802171E4: jr          $ra
    // 0x802171E8: nop

    TRACE_RETURN()
    return;
    // 0x802171E8: nop

;}
RECOMP_FUNC void func_80212BF4_67C5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212BF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80212BF8: nop

    // 0x80212BFC: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80212C00: jr          $ra
    // 0x80212C04: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80212C04: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802138C0_67D2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802138C0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x802138C4: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802138C8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x802138CC: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x802138D0: lwc1        $f6, 0xC($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC);
    // 0x802138D4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x802138D8: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x802138DC: lwc1        $f8, 0x10($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X10);
    // 0x802138E0: jr          $ra
    // 0x802138E4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802138E4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80214B34_67E514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214B40: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80214B44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80214B48: ldc1        $f16, -0x5678($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5678);
    // 0x80214B4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80214B50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80214B54: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80214B58: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
    // 0x80214B5C: bc1fl       L_80214BD8
    if (!c1cs) {
        // 0x80214B60: addiu       $t2, $a0, 0x5C
        ctx->r10 = ADD32(ctx->r4, 0X5C);
            goto L_80214BD8;
    }
    goto skip_0;
    // 0x80214B60: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80214B64: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80214B68: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80214B6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214B70: nop

    // 0x80214B74: bc1fl       L_80214B8C
    if (!c1cs) {
        // 0x80214B78: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214B8C;
    }
    goto skip_1;
    // 0x80214B78: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x80214B7C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214B80: b           L_80214B8C
    // 0x80214B84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214B8C;
    // 0x80214B84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214B88: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214B8C:
    // 0x80214B8C: lwc1        $f14, 0x8($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80214B90: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214B94: nop

    // 0x80214B98: bc1fl       L_80214BB4
    if (!c1cs) {
        // 0x80214B9C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214BB4;
    }
    goto skip_2;
    // 0x80214B9C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x80214BA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80214BA4: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
    // 0x80214BA8: b           L_80214BD4
    // 0x80214BAC: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
        goto L_80214BD4;
    // 0x80214BAC: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x80214BB0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214BB4:
    // 0x80214BB4: nop

    // 0x80214BB8: bc1fl       L_80214BD0
    if (!c1cs) {
        // 0x80214BBC: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214BD0;
    }
    goto skip_3;
    // 0x80214BBC: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x80214BC0: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214BC4: b           L_80214BD4
    // 0x80214BC8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_80214BD4;
    // 0x80214BC8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80214BCC: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80214BD0:
    // 0x80214BD0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_80214BD4:
    // 0x80214BD4: addiu       $t2, $a0, 0x5C
    ctx->r10 = ADD32(ctx->r4, 0X5C);
L_80214BD8:
    // 0x80214BD8: lwc1        $f14, 0x10($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X10);
    // 0x80214BDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80214BE0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80214BE4: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80214BE8: nop

    // 0x80214BEC: bc1fl       L_80214C60
    if (!c1cs) {
        // 0x80214BF0: lwc1        $f14, 0x18($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
            goto L_80214C60;
    }
    goto skip_4;
    // 0x80214BF0: lwc1        $f14, 0x18($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
    skip_4:
    // 0x80214BF4: lwc1        $f12, 0xC($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80214BF8: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214BFC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214C00: nop

    // 0x80214C04: bc1fl       L_80214C1C
    if (!c1cs) {
        // 0x80214C08: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214C1C;
    }
    goto skip_5;
    // 0x80214C08: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x80214C0C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214C10: b           L_80214C1C
    // 0x80214C14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214C1C;
    // 0x80214C14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214C18: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214C1C:
    // 0x80214C1C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214C20: nop

    // 0x80214C24: bc1fl       L_80214C3C
    if (!c1cs) {
        // 0x80214C28: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214C3C;
    }
    goto skip_6;
    // 0x80214C28: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x80214C2C: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    // 0x80214C30: b           L_80214C5C
    // 0x80214C34: swc1        $f18, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f18.u32l;
        goto L_80214C5C;
    // 0x80214C34: swc1        $f18, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f18.u32l;
    // 0x80214C38: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214C3C:
    // 0x80214C3C: nop

    // 0x80214C40: bc1fl       L_80214C58
    if (!c1cs) {
        // 0x80214C44: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214C58;
    }
    goto skip_7;
    // 0x80214C44: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80214C48: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214C4C: b           L_80214C5C
    // 0x80214C50: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
        goto L_80214C5C;
    // 0x80214C50: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80214C54: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80214C58:
    // 0x80214C58: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_80214C5C:
    // 0x80214C5C: lwc1        $f14, 0x18($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X18);
L_80214C60:
    // 0x80214C60: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80214C64: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80214C68: nop

    // 0x80214C6C: bc1fl       L_80214CE0
    if (!c1cs) {
        // 0x80214C70: lwc1        $f14, 0x20($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
            goto L_80214CE0;
    }
    goto skip_8;
    // 0x80214C70: lwc1        $f14, 0x20($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
    skip_8:
    // 0x80214C74: lwc1        $f12, 0x14($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80214C78: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214C7C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214C80: nop

    // 0x80214C84: bc1fl       L_80214C9C
    if (!c1cs) {
        // 0x80214C88: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214C9C;
    }
    goto skip_9;
    // 0x80214C88: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x80214C8C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214C90: b           L_80214C9C
    // 0x80214C94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214C9C;
    // 0x80214C94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214C98: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214C9C:
    // 0x80214C9C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214CA0: nop

    // 0x80214CA4: bc1fl       L_80214CBC
    if (!c1cs) {
        // 0x80214CA8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214CBC;
    }
    goto skip_10;
    // 0x80214CA8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x80214CAC: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
    // 0x80214CB0: b           L_80214CDC
    // 0x80214CB4: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
        goto L_80214CDC;
    // 0x80214CB4: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x80214CB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214CBC:
    // 0x80214CBC: nop

    // 0x80214CC0: bc1fl       L_80214CD8
    if (!c1cs) {
        // 0x80214CC4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214CD8;
    }
    goto skip_11;
    // 0x80214CC4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x80214CC8: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214CCC: b           L_80214CDC
    // 0x80214CD0: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
        goto L_80214CDC;
    // 0x80214CD0: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80214CD4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80214CD8:
    // 0x80214CD8: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
L_80214CDC:
    // 0x80214CDC: lwc1        $f14, 0x20($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
L_80214CE0:
    // 0x80214CE0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80214CE4: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x80214CE8: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80214CEC: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80214CF0: nop

    // 0x80214CF4: bc1fl       L_80214D90
    if (!c1cs) {
        // 0x80214CF8: lwc1        $f0, 0x24($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
            goto L_80214D90;
    }
    goto skip_12;
    // 0x80214CF8: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    skip_12:
    // 0x80214CFC: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80214D00: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80214D04: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214D08: nop

    // 0x80214D0C: bc1fl       L_80214D24
    if (!c1cs) {
        // 0x80214D10: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214D24;
    }
    goto skip_13;
    // 0x80214D10: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x80214D14: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214D18: b           L_80214D24
    // 0x80214D1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214D24;
    // 0x80214D1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214D20: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214D24:
    // 0x80214D24: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214D28: nop

    // 0x80214D2C: bc1fl       L_80214D44
    if (!c1cs) {
        // 0x80214D30: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214D44;
    }
    goto skip_14;
    // 0x80214D30: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x80214D34: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x80214D38: b           L_80214D64
    // 0x80214D3C: swc1        $f18, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f18.u32l;
        goto L_80214D64;
    // 0x80214D3C: swc1        $f18, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f18.u32l;
    // 0x80214D40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214D44:
    // 0x80214D44: nop

    // 0x80214D48: bc1fl       L_80214D60
    if (!c1cs) {
        // 0x80214D4C: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214D60;
    }
    goto skip_15;
    // 0x80214D4C: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x80214D50: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214D54: b           L_80214D64
    // 0x80214D58: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
        goto L_80214D64;
    // 0x80214D58: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x80214D5C: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80214D60:
    // 0x80214D60: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_80214D64:
    // 0x80214D64: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80214D68: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80214D6C: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x80214D70: nop

    // 0x80214D74: bc1fl       L_80214D90
    if (!c1cs) {
        // 0x80214D78: lwc1        $f0, 0x24($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
            goto L_80214D90;
    }
    goto skip_16;
    // 0x80214D78: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    skip_16:
    // 0x80214D7C: jal         0x80034ED4
    // 0x80214D80: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80214D80: nop

    after_0:
    // 0x80214D84: b           L_80215250
    // 0x80214D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80215250;
    // 0x80214D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214D8C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
L_80214D90:
    // 0x80214D90: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x80214D94: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80214D98: lwc1        $f14, 0x2C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80214D9C: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80214DA0: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80214DA4: nop

    // 0x80214DA8: bc1fl       L_80214E1C
    if (!c1cs) {
        // 0x80214DAC: lwc1        $f14, 0x38($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
            goto L_80214E1C;
    }
    goto skip_17;
    // 0x80214DAC: lwc1        $f14, 0x38($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
    skip_17:
    // 0x80214DB0: lwc1        $f12, 0x28($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80214DB4: lwc1        $f2, 0x24($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80214DB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214DBC: nop

    // 0x80214DC0: bc1fl       L_80214DD8
    if (!c1cs) {
        // 0x80214DC4: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214DD8;
    }
    goto skip_18;
    // 0x80214DC4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_18:
    // 0x80214DC8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214DCC: b           L_80214DD8
    // 0x80214DD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214DD8;
    // 0x80214DD0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214DD4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214DD8:
    // 0x80214DD8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214DDC: nop

    // 0x80214DE0: bc1fl       L_80214DF8
    if (!c1cs) {
        // 0x80214DE4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214DF8;
    }
    goto skip_19;
    // 0x80214DE4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_19:
    // 0x80214DE8: swc1        $f12, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f12.u32l;
    // 0x80214DEC: b           L_80214E18
    // 0x80214DF0: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
        goto L_80214E18;
    // 0x80214DF0: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
    // 0x80214DF4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214DF8:
    // 0x80214DF8: nop

    // 0x80214DFC: bc1fl       L_80214E14
    if (!c1cs) {
        // 0x80214E00: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214E14;
    }
    goto skip_20;
    // 0x80214E00: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_20:
    // 0x80214E04: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214E08: b           L_80214E18
    // 0x80214E0C: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
        goto L_80214E18;
    // 0x80214E0C: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
    // 0x80214E10: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80214E14:
    // 0x80214E14: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
L_80214E18:
    // 0x80214E18: lwc1        $f14, 0x38($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X38);
L_80214E1C:
    // 0x80214E1C: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80214E20: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80214E24: nop

    // 0x80214E28: bc1fl       L_80214E9C
    if (!c1cs) {
        // 0x80214E2C: lwc1        $f14, 0x44($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
            goto L_80214E9C;
    }
    goto skip_21;
    // 0x80214E2C: lwc1        $f14, 0x44($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
    skip_21:
    // 0x80214E30: lwc1        $f12, 0x34($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X34);
    // 0x80214E34: lwc1        $f2, 0x30($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X30);
    // 0x80214E38: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214E3C: nop

    // 0x80214E40: bc1fl       L_80214E58
    if (!c1cs) {
        // 0x80214E44: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214E58;
    }
    goto skip_22;
    // 0x80214E44: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_22:
    // 0x80214E48: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214E4C: b           L_80214E58
    // 0x80214E50: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214E58;
    // 0x80214E50: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214E54: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214E58:
    // 0x80214E58: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214E5C: nop

    // 0x80214E60: bc1fl       L_80214E78
    if (!c1cs) {
        // 0x80214E64: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214E78;
    }
    goto skip_23;
    // 0x80214E64: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_23:
    // 0x80214E68: swc1        $f12, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f12.u32l;
    // 0x80214E6C: b           L_80214E98
    // 0x80214E70: swc1        $f18, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f18.u32l;
        goto L_80214E98;
    // 0x80214E70: swc1        $f18, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->f18.u32l;
    // 0x80214E74: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214E78:
    // 0x80214E78: nop

    // 0x80214E7C: bc1fl       L_80214E94
    if (!c1cs) {
        // 0x80214E80: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214E94;
    }
    goto skip_24;
    // 0x80214E80: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_24:
    // 0x80214E84: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214E88: b           L_80214E98
    // 0x80214E8C: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
        goto L_80214E98;
    // 0x80214E8C: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
    // 0x80214E90: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80214E94:
    // 0x80214E94: swc1        $f4, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f4.u32l;
L_80214E98:
    // 0x80214E98: lwc1        $f14, 0x44($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X44);
L_80214E9C:
    // 0x80214E9C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80214EA0: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80214EA4: nop

    // 0x80214EA8: bc1fl       L_80214F1C
    if (!c1cs) {
        // 0x80214EAC: lwc1        $f14, 0x50($t2)
        ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
            goto L_80214F1C;
    }
    goto skip_25;
    // 0x80214EAC: lwc1        $f14, 0x50($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
    skip_25:
    // 0x80214EB0: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80214EB4: lwc1        $f2, 0x3C($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80214EB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214EBC: nop

    // 0x80214EC0: bc1fl       L_80214ED8
    if (!c1cs) {
        // 0x80214EC4: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214ED8;
    }
    goto skip_26;
    // 0x80214EC4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_26:
    // 0x80214EC8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214ECC: b           L_80214ED8
    // 0x80214ED0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214ED8;
    // 0x80214ED0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214ED4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214ED8:
    // 0x80214ED8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214EDC: nop

    // 0x80214EE0: bc1fl       L_80214EF8
    if (!c1cs) {
        // 0x80214EE4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214EF8;
    }
    goto skip_27;
    // 0x80214EE4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_27:
    // 0x80214EE8: swc1        $f12, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f12.u32l;
    // 0x80214EEC: b           L_80214F18
    // 0x80214EF0: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
        goto L_80214F18;
    // 0x80214EF0: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
    // 0x80214EF4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214EF8:
    // 0x80214EF8: nop

    // 0x80214EFC: bc1fl       L_80214F14
    if (!c1cs) {
        // 0x80214F00: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214F14;
    }
    goto skip_28;
    // 0x80214F00: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_28:
    // 0x80214F04: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214F08: b           L_80214F18
    // 0x80214F0C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
        goto L_80214F18;
    // 0x80214F0C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x80214F10: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80214F14:
    // 0x80214F14: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
L_80214F18:
    // 0x80214F18: lwc1        $f14, 0x50($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X50);
L_80214F1C:
    // 0x80214F1C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80214F20: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80214F24: nop

    // 0x80214F28: bc1fl       L_80214F9C
    if (!c1cs) {
        // 0x80214F2C: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_80214F9C;
    }
    goto skip_29;
    // 0x80214F2C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_29:
    // 0x80214F30: lwc1        $f12, 0x4C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4C);
    // 0x80214F34: lwc1        $f2, 0x48($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X48);
    // 0x80214F38: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80214F3C: nop

    // 0x80214F40: bc1fl       L_80214F58
    if (!c1cs) {
        // 0x80214F44: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80214F58;
    }
    goto skip_30;
    // 0x80214F44: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_30:
    // 0x80214F48: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80214F4C: b           L_80214F58
    // 0x80214F50: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214F58;
    // 0x80214F50: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214F54: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80214F58:
    // 0x80214F58: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214F5C: nop

    // 0x80214F60: bc1fl       L_80214F78
    if (!c1cs) {
        // 0x80214F64: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80214F78;
    }
    goto skip_31;
    // 0x80214F64: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_31:
    // 0x80214F68: swc1        $f12, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f12.u32l;
    // 0x80214F6C: b           L_80214F98
    // 0x80214F70: swc1        $f18, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->f18.u32l;
        goto L_80214F98;
    // 0x80214F70: swc1        $f18, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->f18.u32l;
    // 0x80214F74: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80214F78:
    // 0x80214F78: nop

    // 0x80214F7C: bc1fl       L_80214F94
    if (!c1cs) {
        // 0x80214F80: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80214F94;
    }
    goto skip_32;
    // 0x80214F80: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_32:
    // 0x80214F84: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80214F88: b           L_80214F98
    // 0x80214F8C: swc1        $f6, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f6.u32l;
        goto L_80214F98;
    // 0x80214F8C: swc1        $f6, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f6.u32l;
    // 0x80214F90: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80214F94:
    // 0x80214F94: swc1        $f8, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f8.u32l;
L_80214F98:
    // 0x80214F98: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_80214F9C:
    // 0x80214F9C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80214FA0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80214FA4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80214FA8: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x80214FAC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80214FB0: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x80214FB4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80214FB8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80214FBC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80214FC0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80214FC4: lw          $t4, 0x54($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X54);
    // 0x80214FC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214FCC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80214FD0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80214FD4: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x80214FD8: lui         $t3, 0x8FFF
    ctx->r11 = S32(0X8FFF << 16);
    // 0x80214FDC: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80214FE0: addiu       $t5, $a3, 0x8
    ctx->r13 = ADD32(ctx->r7, 0X8);
    // 0x80214FE4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80214FE8: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80214FEC: lwc1        $f10, 0x24($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80214FF0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80214FF4: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80214FF8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80214FFC: nop

    // 0x80215000: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80215004: beql        $t8, $zero, L_80215054
    if (ctx->r24 == 0) {
        // 0x80215008: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_80215054;
    }
    goto skip_33;
    // 0x80215008: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_33:
    // 0x8021500C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215010: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80215014: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80215018: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021501C: nop

    // 0x80215020: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80215024: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80215028: nop

    // 0x8021502C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80215030: bne         $t8, $zero, L_80215048
    if (ctx->r24 != 0) {
        // 0x80215034: nop
    
            goto L_80215048;
    }
    // 0x80215034: nop

    // 0x80215038: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8021503C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215040: b           L_80215060
    // 0x80215044: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80215060;
    // 0x80215044: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80215048:
    // 0x80215048: b           L_80215060
    // 0x8021504C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80215060;
    // 0x8021504C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80215050: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_80215054:
    // 0x80215054: nop

    // 0x80215058: bltz        $t8, L_80215048
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021505C: nop
    
            goto L_80215048;
    }
    // 0x8021505C: nop

L_80215060:
    // 0x80215060: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80215064: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80215068: lwc1        $f6, 0x30($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X30);
    // 0x8021506C: sll         $t4, $t8, 24
    ctx->r12 = S32(ctx->r24 << 24);
    // 0x80215070: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80215074: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215078: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021507C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80215080: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80215084: nop

    // 0x80215088: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021508C: beql        $t6, $zero, L_802150DC
    if (ctx->r14 == 0) {
        // 0x80215090: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_802150DC;
    }
    goto skip_34;
    // 0x80215090: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_34:
    // 0x80215094: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80215098: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021509C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802150A0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802150A4: nop

    // 0x802150A8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802150AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802150B0: nop

    // 0x802150B4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802150B8: bne         $t6, $zero, L_802150D0
    if (ctx->r14 != 0) {
        // 0x802150BC: nop
    
            goto L_802150D0;
    }
    // 0x802150BC: nop

    // 0x802150C0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x802150C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802150C8: b           L_802150E8
    // 0x802150CC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_802150E8;
    // 0x802150CC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_802150D0:
    // 0x802150D0: b           L_802150E8
    // 0x802150D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_802150E8;
    // 0x802150D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802150D8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_802150DC:
    // 0x802150DC: nop

    // 0x802150E0: bltz        $t6, L_802150D0
    if (SIGNED(ctx->r14) < 0) {
        // 0x802150E4: nop
    
            goto L_802150D0;
    }
    // 0x802150E4: nop

L_802150E8:
    // 0x802150E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802150EC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802150F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802150F4: lwc1        $f10, 0x3C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x802150F8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802150FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215100: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80215104: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x80215108: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021510C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215110: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80215114: nop

    // 0x80215118: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021511C: beql        $t6, $zero, L_8021516C
    if (ctx->r14 == 0) {
        // 0x80215120: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8021516C;
    }
    goto skip_35;
    // 0x80215120: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_35:
    // 0x80215124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215128: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021512C: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80215130: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215134: nop

    // 0x80215138: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021513C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80215140: nop

    // 0x80215144: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80215148: bne         $t6, $zero, L_80215160
    if (ctx->r14 != 0) {
        // 0x8021514C: nop
    
            goto L_80215160;
    }
    // 0x8021514C: nop

    // 0x80215150: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80215154: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215158: b           L_80215178
    // 0x8021515C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80215178;
    // 0x8021515C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80215160:
    // 0x80215160: b           L_80215178
    // 0x80215164: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80215178;
    // 0x80215164: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80215168: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8021516C:
    // 0x8021516C: nop

    // 0x80215170: bltz        $t6, L_80215160
    if (SIGNED(ctx->r14) < 0) {
        // 0x80215174: nop
    
            goto L_80215160;
    }
    // 0x80215174: nop

L_80215178:
    // 0x80215178: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021517C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80215180: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80215184: lwc1        $f6, 0x48($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X48);
    // 0x80215188: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021518C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215190: sll         $t4, $t7, 8
    ctx->r12 = S32(ctx->r15 << 8);
    // 0x80215194: or          $t8, $t9, $t4
    ctx->r24 = ctx->r25 | ctx->r12;
    // 0x80215198: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021519C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802151A0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802151A4: nop

    // 0x802151A8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802151AC: beql        $t6, $zero, L_802151FC
    if (ctx->r14 == 0) {
        // 0x802151B0: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_802151FC;
    }
    goto skip_36;
    // 0x802151B0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_36:
    // 0x802151B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802151B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802151BC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802151C0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802151C4: nop

    // 0x802151C8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802151CC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802151D0: nop

    // 0x802151D4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802151D8: bne         $t6, $zero, L_802151F0
    if (ctx->r14 != 0) {
        // 0x802151DC: nop
    
            goto L_802151F0;
    }
    // 0x802151DC: nop

    // 0x802151E0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x802151E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802151E8: b           L_80215208
    // 0x802151EC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80215208;
    // 0x802151EC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_802151F0:
    // 0x802151F0: b           L_80215208
    // 0x802151F4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80215208;
    // 0x802151F4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802151F8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_802151FC:
    // 0x802151FC: nop

    // 0x80215200: bltz        $t6, L_802151F0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80215204: nop
    
            goto L_802151F0;
    }
    // 0x80215204: nop

L_80215208:
    // 0x80215208: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021520C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80215210: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x80215214: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80215218: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021521C: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x80215220: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80215224: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80215228: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021522C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80215230: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x80215234: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80215238: subu        $t8, $t3, $t1
    ctx->r24 = SUB32(ctx->r11, ctx->r9);
    // 0x8021523C: and         $t7, $t6, $t8
    ctx->r15 = ctx->r14 & ctx->r24;
    // 0x80215240: and         $a1, $t7, $t3
    ctx->r5 = ctx->r15 & ctx->r11;
    // 0x80215244: jal         0x80040620
    // 0x80215248: and         $a0, $t1, $t3
    ctx->r4 = ctx->r9 & ctx->r11;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80215248: and         $a0, $t1, $t3
    ctx->r4 = ctx->r9 & ctx->r11;
    after_1:
    // 0x8021524C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80215250:
    // 0x80215250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80215254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80215258: jr          $ra
    // 0x8021525C: nop

    TRACE_RETURN()
    return;
    // 0x8021525C: nop

;}
RECOMP_FUNC void func_80213464_67CE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213464: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80213468: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021346C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80213470: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80213474: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213478: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021347C: addiu       $a1, $a1, 0x33B4
    ctx->r5 = ADD32(ctx->r5, 0X33B4);
    // 0x80213480: jal         0x80034E08
    // 0x80213484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80213488: bne         $v0, $zero, L_80213498
    if (ctx->r2 != 0) {
        // 0x8021348C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80213498;
    }
    // 0x8021348C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213490: b           L_80213530
    // 0x80213494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213530;
    // 0x80213494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213498:
    // 0x80213498: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021349C: lwc1        $f2, -0x5748($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5748);
    // 0x802134A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802134A4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802134A8: addiu       $a1, $a1, 0xA68
    ctx->r5 = ADD32(ctx->r5, 0XA68);
    // 0x802134AC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802134B0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802134B4: addiu       $t6, $zero, 0x274
    ctx->r14 = ADD32(0, 0X274);
    // 0x802134B8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802134BC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802134C0: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802134C4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802134C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802134CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802134D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802134D4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802134D8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802134DC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802134E0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802134E4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802134E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802134EC: jal         0x8000DBF0
    // 0x802134F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802134F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802134F4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802134F8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802134FC: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80213500: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80213504: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80213508: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8021350C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80213510: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80213514: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80213518: addiu       $t9, $t9, 0x1DB0
    ctx->r25 = ADD32(ctx->r25, 0X1DB0);
    // 0x8021351C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80213520: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80213524: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
    // 0x80213528: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8021352C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80213530:
    // 0x80213530: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80213534: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80213538: jr          $ra
    // 0x8021353C: nop

    TRACE_RETURN()
    return;
    // 0x8021353C: nop

;}
RECOMP_FUNC void func_8021A3C8_683DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A3C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021A3CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021A3D0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021A3D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021A3D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021A3DC: addiu       $a1, $a1, -0x7D34
    ctx->r5 = ADD32(ctx->r5, -0X7D34);
    // 0x8021A3E0: jal         0x80034E08
    // 0x8021A3E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021A3E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021A3E8: bne         $v0, $zero, L_8021A3F8
    if (ctx->r2 != 0) {
        // 0x8021A3EC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8021A3F8;
    }
    // 0x8021A3EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8021A3F0: b           L_8021A4FC
    // 0x8021A3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A4FC;
    // 0x8021A3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021A3F8:
    // 0x8021A3F8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8021A3FC: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x8021A400: jal         0x80034DD8
    // 0x8021A404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x8021A404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8021A408: jal         0x8020D2E0
    // 0x8021A40C: nop

    func_8020D2E0_676CC0(rdram, ctx);
        goto after_2;
    // 0x8021A40C: nop

    after_2:
    // 0x8021A410: jal         0x801DC630
    // 0x8021A414: nop

    func_801DC630_598540(rdram, ctx);
        goto after_3;
    // 0x8021A414: nop

    after_3:
    // 0x8021A418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021A41C: jal         0x8001381C
    // 0x8021A420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001381C_1441C(rdram, ctx);
        goto after_4;
    // 0x8021A420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8021A424: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8021A428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021A42C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x8021A430: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8021A434: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021A438: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021A43C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021A440: jal         0x800133E0
    // 0x8021A444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800133E0_13FE0(rdram, ctx);
        goto after_5;
    // 0x8021A444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x8021A448: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x8021A44C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8021A450: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8021A454: jal         0x80013400
    // 0x8021A458: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_6;
    // 0x8021A458: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x8021A45C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x8021A460: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8021A464: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8021A468: jal         0x80013484
    // 0x8021A46C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_80013484_14084(rdram, ctx);
        goto after_7;
    // 0x8021A46C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_7:
    // 0x8021A470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021A474: jal         0x80012940
    // 0x8021A478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_8;
    // 0x8021A478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8021A47C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8021A480: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021A484: jal         0x80012500
    // 0x8021A488: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_9;
    // 0x8021A488: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_9:
    // 0x8021A48C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021A490: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x8021A494: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8021A498: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021A49C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021A4A0: jal         0x80012818
    // 0x8021A4A4: nop

    func_80012818_13418(rdram, ctx);
        goto after_10;
    // 0x8021A4A4: nop

    after_10:
    // 0x8021A4A8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x8021A4AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021A4B0: lui         $a2, 0x438C
    ctx->r6 = S32(0X438C << 16);
    // 0x8021A4B4: jal         0x800127B8
    // 0x8021A4B8: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_11;
    // 0x8021A4B8: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_11:
    // 0x8021A4BC: jal         0x80012938
    // 0x8021A4C0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    func_80012938_13538(rdram, ctx);
        goto after_12;
    // 0x8021A4C0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_12:
    // 0x8021A4C4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8021A4C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021A4CC: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x8021A4D0: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x8021A4D4: addiu       $t8, $zero, 0xBE
    ctx->r24 = ADD32(0, 0XBE);
    // 0x8021A4D8: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x8021A4DC: sh          $t6, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r14;
    // 0x8021A4E0: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x8021A4E4: sh          $t8, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r24;
    // 0x8021A4E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021A4EC: jal         0x8020D540
    // 0x8021A4F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    func_8020D540_676F20(rdram, ctx);
        goto after_13;
    // 0x8021A4F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    after_13:
    // 0x8021A4F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8021A4F8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8021A4FC:
    // 0x8021A4FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021A500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021A504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021A508: jr          $ra
    // 0x8021A50C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8021A50C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021F22C_688C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F22C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021F230: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8021F234: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021F238: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021F23C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021F240: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021F244: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8021F248: addiu       $a1, $a1, -0x1AA0
    ctx->r5 = ADD32(ctx->r5, -0X1AA0);
    // 0x8021F24C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021F250: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x8021F254: jal         0x80034E08
    // 0x8021F258: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021F258: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8021F25C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8021F260: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F264: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F268: bne         $v0, $zero, L_8021F278
    if (ctx->r2 != 0) {
        // 0x8021F26C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8021F278;
    }
    // 0x8021F26C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021F270: b           L_8021F31C
    // 0x8021F274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021F31C;
    // 0x8021F274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021F278:
    // 0x8021F278: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021F27C: lwc1        $f0, -0x51AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X51AC);
    // 0x8021F280: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021F284: swc1        $f14, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f14.u32l;
    // 0x8021F288: swc1        $f12, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f12.u32l;
    // 0x8021F28C: sb          $v1, 0x5C($s0)
    MEM_B(0X5C, ctx->r16) = ctx->r3;
    // 0x8021F290: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x8021F294: swc1        $f2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f2.u32l;
    // 0x8021F298: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8021F29C: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021F2A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8021F2A4: lhu         $t9, -0x5C80($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X5C80);
    // 0x8021F2A8: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x8021F2AC: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x8021F2B0: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x8021F2B4: addiu       $t7, $t7, -0x26E0
    ctx->r15 = ADD32(ctx->r15, -0X26E0);
    // 0x8021F2B8: addiu       $t6, $t6, 0x3930
    ctx->r14 = ADD32(ctx->r14, 0X3930);
    // 0x8021F2BC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8021F2C0: addu        $a1, $v0, $t6
    ctx->r5 = ADD32(ctx->r2, ctx->r14);
    // 0x8021F2C4: or          $a2, $t7, $v0
    ctx->r6 = ctx->r15 | ctx->r2;
    // 0x8021F2C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021F2CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F2D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021F2D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F2D8: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x8021F2DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021F2E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F2E4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021F2E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021F2EC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x8021F2F0: jal         0x8000DBF0
    // 0x8021F2F4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021F2F4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    after_1:
    // 0x8021F2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021F2FC: jal         0x80011A38
    // 0x8021F300: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x8021F300: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x8021F304: sw          $v0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r2;
    // 0x8021F308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021F30C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F310: jal         0x8021E8A0
    // 0x8021F314: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8021E8A0_688280(rdram, ctx);
        goto after_3;
    // 0x8021F314: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x8021F318: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8021F31C:
    // 0x8021F31C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021F320: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021F324: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021F328: jr          $ra
    // 0x8021F32C: nop

    TRACE_RETURN()
    return;
    // 0x8021F32C: nop

;}
RECOMP_FUNC void func_802265A0_68FF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802265A4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802265A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802265AC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802265B0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802265B4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802265B8: addiu       $a1, $a1, 0x5E58
    ctx->r5 = ADD32(ctx->r5, 0X5E58);
    // 0x802265BC: jal         0x80034E08
    // 0x802265C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802265C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802265C4: bne         $v0, $zero, L_802265D4
    if (ctx->r2 != 0) {
        // 0x802265C8: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_802265D4;
    }
    // 0x802265C8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x802265CC: b           L_8022668C
    // 0x802265D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022668C;
    // 0x802265D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802265D4:
    // 0x802265D4: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x802265D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802265DC: jal         0x80014840
    // 0x802265E0: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x802265E0: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    after_1:
    // 0x802265E4: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x802265E8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x802265EC: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x802265F0: jal         0x80014840
    // 0x802265F4: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x802265F4: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    after_2:
    // 0x802265F8: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x802265FC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80226600: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80226604: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80226608: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8022660C: bgez        $t6, L_80226620
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80226610: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80226620;
    }
    // 0x80226610: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80226614: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80226618: nop

    // 0x8022661C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80226620:
    // 0x80226620: swc1        $f6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->f6.u32l;
    // 0x80226624: jal         0x80225FBC
    // 0x80226628: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_80225FBC_68F99C(rdram, ctx);
        goto after_3;
    // 0x80226628: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x8022662C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80226630: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80226634: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80226638: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8022663C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80226640: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80226644: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80226648: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x8022664C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80226650: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80226654: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80226658: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022665C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80226660: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80226664: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80226668: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8022666C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80226670: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80226674: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80226678: jal         0x8000DBF0
    // 0x8022667C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x8022667C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80226680: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80226684: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x80226688: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_8022668C:
    // 0x8022668C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80226690: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80226694: jr          $ra
    // 0x80226698: nop

    TRACE_RETURN()
    return;
    // 0x80226698: nop

;}
RECOMP_FUNC void func_8020D870_677250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D878: jal         0x80013A24
    // 0x8020D87C: addiu       $a0, $zero, 0x4DD
    ctx->r4 = ADD32(0, 0X4DD);
    func_80013A24_14624(rdram, ctx);
        goto after_0;
    // 0x8020D87C: addiu       $a0, $zero, 0x4DD
    ctx->r4 = ADD32(0, 0X4DD);
    after_0:
    // 0x8020D880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D888: jr          $ra
    // 0x8020D88C: nop

    TRACE_RETURN()
    return;
    // 0x8020D88C: nop

;}
RECOMP_FUNC void func_802139C4_67D3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802139C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802139C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802139CC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x802139D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802139D4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802139D8: bnel        $t6, $zero, L_80213AF4
    if (ctx->r14 != 0) {
        // 0x802139DC: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_80213AF4;
    }
    goto skip_0;
    // 0x802139DC: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x802139E0: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802139E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802139E8: ldc1        $f16, -0x5730($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5730);
    // 0x802139EC: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802139F0: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802139F4: nop

    // 0x802139F8: bc1fl       L_80213A70
    if (!c1cs) {
        // 0x802139FC: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_80213A70;
    }
    goto skip_1;
    // 0x802139FC: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x80213A00: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80213A04: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80213A08: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80213A0C: nop

    // 0x80213A10: bc1fl       L_80213A28
    if (!c1cs) {
        // 0x80213A14: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80213A28;
    }
    goto skip_2;
    // 0x80213A14: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x80213A18: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80213A1C: b           L_80213A28
    // 0x80213A20: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80213A28;
    // 0x80213A20: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80213A24: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80213A28:
    // 0x80213A28: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80213A2C: nop

    // 0x80213A30: bc1fl       L_80213A4C
    if (!c1cs) {
        // 0x80213A34: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80213A4C;
    }
    goto skip_3;
    // 0x80213A34: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x80213A38: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80213A3C: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x80213A40: b           L_80213A6C
    // 0x80213A44: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_80213A6C;
    // 0x80213A44: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80213A48: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80213A4C:
    // 0x80213A4C: nop

    // 0x80213A50: bc1fl       L_80213A68
    if (!c1cs) {
        // 0x80213A54: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80213A68;
    }
    goto skip_4;
    // 0x80213A54: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_4:
    // 0x80213A58: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80213A5C: b           L_80213A6C
    // 0x80213A60: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_80213A6C;
    // 0x80213A60: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80213A64: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_80213A68:
    // 0x80213A68: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_80213A6C:
    // 0x80213A6C: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_80213A70:
    // 0x80213A70: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80213A74: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80213A78: nop

    // 0x80213A7C: bc1fl       L_80213AF4
    if (!c1cs) {
        // 0x80213A80: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_80213AF4;
    }
    goto skip_5;
    // 0x80213A80: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_5:
    // 0x80213A84: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80213A88: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80213A8C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80213A90: nop

    // 0x80213A94: bc1fl       L_80213AAC
    if (!c1cs) {
        // 0x80213A98: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80213AAC;
    }
    goto skip_6;
    // 0x80213A98: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_6:
    // 0x80213A9C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80213AA0: b           L_80213AAC
    // 0x80213AA4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80213AAC;
    // 0x80213AA4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80213AA8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80213AAC:
    // 0x80213AAC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80213AB0: nop

    // 0x80213AB4: bc1fl       L_80213AD0
    if (!c1cs) {
        // 0x80213AB8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80213AD0;
    }
    goto skip_7;
    // 0x80213AB8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_7:
    // 0x80213ABC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80213AC0: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x80213AC4: b           L_80213AF0
    // 0x80213AC8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
        goto L_80213AF0;
    // 0x80213AC8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x80213ACC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80213AD0:
    // 0x80213AD0: nop

    // 0x80213AD4: bc1fl       L_80213AEC
    if (!c1cs) {
        // 0x80213AD8: add.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80213AEC;
    }
    goto skip_8;
    // 0x80213AD8: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
    skip_8:
    // 0x80213ADC: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80213AE0: b           L_80213AF0
    // 0x80213AE4: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_80213AF0;
    // 0x80213AE4: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x80213AE8: add.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f14.fl;
L_80213AEC:
    // 0x80213AEC: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_80213AF0:
    // 0x80213AF0: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
L_80213AF4:
    // 0x80213AF4: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80213AF8: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80213AFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213B00: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80213B04: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x80213B08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80213B0C: jal         0x8001B5AC
    // 0x80213B10: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80213B10: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80213B14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80213B18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80213B1C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80213B20: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80213B24: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80213B28: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80213B2C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80213B30: nop

    // 0x80213B34: bc1fl       L_80213B60
    if (!c1cs) {
        // 0x80213B38: lhu         $t8, 0x2($v0)
        ctx->r24 = MEM_HU(ctx->r2, 0X2);
            goto L_80213B60;
    }
    goto skip_9;
    // 0x80213B38: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    skip_9:
    // 0x80213B3C: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x80213B40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213B44: bnel        $t7, $at, L_80213B5C
    if (ctx->r15 != ctx->r1) {
        // 0x80213B48: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80213B5C;
    }
    goto skip_10;
    // 0x80213B48: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_10:
    // 0x80213B4C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80213B50: b           L_80213B5C
    // 0x80213B54: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
        goto L_80213B5C;
    // 0x80213B54: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80213B58: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80213B5C:
    // 0x80213B5C: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
L_80213B60:
    // 0x80213B60: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x80213B64: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80213B68: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x80213B6C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80213B70: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x80213B74: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80213B78: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x80213B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213B84: jr          $ra
    // 0x80213B88: nop

    TRACE_RETURN()
    return;
    // 0x80213B88: nop

;}
RECOMP_FUNC void func_80227494_690E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227494: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80227498: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8022749C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802274A0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802274A4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802274A8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802274AC: addiu       $a1, $a1, 0x6E40
    ctx->r5 = ADD32(ctx->r5, 0X6E40);
    // 0x802274B0: jal         0x80034E08
    // 0x802274B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802274B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802274B8: bne         $v0, $zero, L_802274C8
    if (ctx->r2 != 0) {
        // 0x802274BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802274C8;
    }
    // 0x802274BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802274C0: b           L_80227570
    // 0x802274C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80227570;
    // 0x802274C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802274C8:
    // 0x802274C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274CC: lwc1        $f0, -0x4E54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E54);
    // 0x802274D0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802274D4: addiu       $a1, $a1, 0x758
    ctx->r5 = ADD32(ctx->r5, 0X758);
    // 0x802274D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802274DC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802274E0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802274E4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802274E8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802274EC: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802274F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802274F4: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x802274F8: addiu       $t7, $zero, 0x2C1
    ctx->r15 = ADD32(0, 0X2C1);
    // 0x802274FC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80227500: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80227504: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80227508: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8022750C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80227510: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227514: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80227518: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x8022751C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80227520: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80227524: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227528: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8022752C: jal         0x8000DBF0
    // 0x80227530: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80227530: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80227534: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80227538: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8022753C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80227540: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80227544: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80227548: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8022754C: swc1        $f10, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f10.u32l;
    // 0x80227550: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80227554: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x80227558: jal         0x80011A38
    // 0x8022755C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x8022755C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_2:
    // 0x80227560: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80227564: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80227568: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8022756C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80227570:
    // 0x80227570: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80227574: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80227578: jr          $ra
    // 0x8022757C: nop

    TRACE_RETURN()
    return;
    // 0x8022757C: nop

;}
RECOMP_FUNC void func_80212DA4_67C784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212DA4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80212DA8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80212DAC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80212DB0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80212DB4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212DB8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80212DBC: addiu       $a1, $a1, 0x26FC
    ctx->r5 = ADD32(ctx->r5, 0X26FC);
    // 0x80212DC0: jal         0x80034E08
    // 0x80212DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80212DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80212DC8: bne         $v0, $zero, L_80212DD8
    if (ctx->r2 != 0) {
        // 0x80212DCC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80212DD8;
    }
    // 0x80212DCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80212DD0: b           L_80212E80
    // 0x80212DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212E80;
    // 0x80212DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212DD8:
    // 0x80212DD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80212DDC: lwc1        $f0, -0x5758($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5758);
    // 0x80212DE0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80212DE4: addiu       $a1, $a1, 0xB0C
    ctx->r5 = ADD32(ctx->r5, 0XB0C);
    // 0x80212DE8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80212DEC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80212DF0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80212DF4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80212DF8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212DFC: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80212E00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80212E04: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80212E08: addiu       $t7, $zero, 0x4D9
    ctx->r15 = ADD32(0, 0X4D9);
    // 0x80212E0C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80212E10: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80212E14: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80212E18: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212E1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212E20: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80212E24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80212E28: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x80212E2C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80212E30: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80212E34: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80212E38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80212E3C: jal         0x8000DBF0
    // 0x80212E40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80212E40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80212E44: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80212E48: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80212E4C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80212E50: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212E54: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80212E58: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80212E5C: swc1        $f10, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f10.u32l;
    // 0x80212E60: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212E64: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x80212E68: jal         0x80011A38
    // 0x80212E6C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x80212E6C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_2:
    // 0x80212E70: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80212E74: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80212E78: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x80212E7C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80212E80:
    // 0x80212E80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80212E84: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80212E88: jr          $ra
    // 0x80212E8C: nop

    TRACE_RETURN()
    return;
    // 0x80212E8C: nop

;}
RECOMP_FUNC void func_8021E8A0_688280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E8A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021E8A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021E8A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021E8AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021E8B0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021E8B4: lbu         $v0, 0x5C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5C);
    // 0x8021E8B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021E8BC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8021E8C0: beq         $v0, $zero, L_8021E8F4
    if (ctx->r2 == 0) {
        // 0x8021E8C4: addiu       $t6, $a1, -0x7
        ctx->r14 = ADD32(ctx->r5, -0X7);
            goto L_8021E8F4;
    }
    // 0x8021E8C4: addiu       $t6, $a1, -0x7
    ctx->r14 = ADD32(ctx->r5, -0X7);
    // 0x8021E8C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021E8CC: beq         $v0, $at, L_8021EACC
    if (ctx->r2 == ctx->r1) {
        // 0x8021E8D0: addiu       $t7, $a1, -0x7
        ctx->r15 = ADD32(ctx->r5, -0X7);
            goto L_8021EACC;
    }
    // 0x8021E8D0: addiu       $t7, $a1, -0x7
    ctx->r15 = ADD32(ctx->r5, -0X7);
    // 0x8021E8D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021E8D8: beq         $v0, $at, L_8021EC00
    if (ctx->r2 == ctx->r1) {
        // 0x8021E8DC: addiu       $t3, $a1, -0x7
        ctx->r11 = ADD32(ctx->r5, -0X7);
            goto L_8021EC00;
    }
    // 0x8021E8DC: addiu       $t3, $a1, -0x7
    ctx->r11 = ADD32(ctx->r5, -0X7);
    // 0x8021E8E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8021E8E4: beq         $v0, $at, L_8021ED30
    if (ctx->r2 == ctx->r1) {
        // 0x8021E8E8: addiu       $t8, $a1, -0x7
        ctx->r24 = ADD32(ctx->r5, -0X7);
            goto L_8021ED30;
    }
    // 0x8021E8E8: addiu       $t8, $a1, -0x7
    ctx->r24 = ADD32(ctx->r5, -0X7);
    // 0x8021E8EC: b           L_8021EE60
    // 0x8021E8F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
        goto L_8021EE60;
    // 0x8021E8F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8021E8F4:
    // 0x8021E8F4: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8021E8F8: beq         $at, $zero, L_8021E914
    if (ctx->r1 == 0) {
        // 0x8021E8FC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8021E914;
    }
    // 0x8021E8FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021E900: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E904: addu        $at, $at, $t6
    gpr jr_addend_8021E90C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8021E908: lw          $t6, -0x5298($at)
    ctx->r14 = ADD32(ctx->r1, -0X5298);
    // 0x8021E90C: jr          $t6
    // 0x8021E910: nop

    switch (jr_addend_8021E90C >> 2) {
        case 0: goto L_8021E914; break;
        case 1: goto L_8021E960; break;
        case 2: goto L_8021E914; break;
        case 3: goto L_8021E914; break;
        case 4: goto L_8021E914; break;
        case 5: goto L_8021E914; break;
        case 6: goto L_8021EA3C; break;
        case 7: goto L_8021E9AC; break;
        case 8: goto L_8021E9F4; break;
        case 9: goto L_8021EA84; break;
        default: switch_error(__func__, 0x8021E90C, 0x8022AD68);
    }
    // 0x8021E910: nop

L_8021E914:
    // 0x8021E914: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021E918: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021E91C: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x8021E920: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E924: lwc1        $f4, -0x5270($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5270);
    // 0x8021E928: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021E92C: addiu       $t8, $t8, 0xBDC
    ctx->r24 = ADD32(ctx->r24, 0XBDC);
    // 0x8021E930: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021E934: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8021E938: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021E93C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8021E940: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x8021E944: addiu       $a1, $a1, -0x5C78
    ctx->r5 = ADD32(ctx->r5, -0X5C78);
    // 0x8021E948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021E94C: jal         0x80213E30
    // 0x8021E950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_0;
    // 0x8021E950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021E954: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8021E958: b           L_8021EE5C
    // 0x8021E95C: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
        goto L_8021EE5C;
    // 0x8021E95C: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
L_8021E960:
    // 0x8021E960: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021E964: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8021E968: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x8021E96C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E970: lwc1        $f6, -0x526C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X526C);
    // 0x8021E974: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x8021E978: addiu       $t2, $t2, 0x2EE8
    ctx->r10 = ADD32(ctx->r10, 0X2EE8);
    // 0x8021E97C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021E980: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8021E984: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021E988: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8021E98C: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
    // 0x8021E990: addiu       $a1, $a1, -0x5C78
    ctx->r5 = ADD32(ctx->r5, -0X5C78);
    // 0x8021E994: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021E998: jal         0x80213E30
    // 0x8021E99C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_1;
    // 0x8021E99C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8021E9A0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8021E9A4: b           L_8021EE5C
    // 0x8021E9A8: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
        goto L_8021EE5C;
    // 0x8021E9A8: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
L_8021E9AC:
    // 0x8021E9AC: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021E9B0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021E9B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E9B8: lwc1        $f8, -0x5268($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5268);
    // 0x8021E9BC: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x8021E9C0: addiu       $t5, $t5, 0x1338
    ctx->r13 = ADD32(ctx->r13, 0X1338);
    // 0x8021E9C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021E9C8: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8021E9CC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021E9D0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021E9D4: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
    // 0x8021E9D8: addiu       $a1, $a1, -0x5C78
    ctx->r5 = ADD32(ctx->r5, -0X5C78);
    // 0x8021E9DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021E9E0: jal         0x80213E30
    // 0x8021E9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_2;
    // 0x8021E9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8021E9E8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8021E9EC: b           L_8021EE5C
    // 0x8021E9F0: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
        goto L_8021EE5C;
    // 0x8021E9F0: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
L_8021E9F4:
    // 0x8021E9F4: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021E9F8: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021E9FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EA00: lwc1        $f10, -0x5264($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5264);
    // 0x8021EA04: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021EA08: addiu       $t8, $t8, 0x17A8
    ctx->r24 = ADD32(ctx->r24, 0X17A8);
    // 0x8021EA0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EA10: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8021EA14: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021EA18: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x8021EA1C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x8021EA20: addiu       $a1, $a1, -0x5C78
    ctx->r5 = ADD32(ctx->r5, -0X5C78);
    // 0x8021EA24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EA28: jal         0x80213E30
    // 0x8021EA2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_3;
    // 0x8021EA2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8021EA30: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8021EA34: b           L_8021EE5C
    // 0x8021EA38: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
        goto L_8021EE5C;
    // 0x8021EA38: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
L_8021EA3C:
    // 0x8021EA3C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8021EA40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021EA44: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EA48: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8021EA4C: addiu       $t1, $t1, 0x272C
    ctx->r9 = ADD32(ctx->r9, 0X272C);
    // 0x8021EA50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EA54: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EA58: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8021EA5C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021EA60: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8021EA64: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
    // 0x8021EA68: addiu       $a1, $a1, -0x5C68
    ctx->r5 = ADD32(ctx->r5, -0X5C68);
    // 0x8021EA6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EA70: jal         0x80213E30
    // 0x8021EA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_4;
    // 0x8021EA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8021EA78: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x8021EA7C: b           L_8021EE5C
    // 0x8021EA80: sh          $t3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r11;
        goto L_8021EE5C;
    // 0x8021EA80: sh          $t3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r11;
L_8021EA84:
    // 0x8021EA84: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EA88: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EA8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EA90: lwc1        $f18, -0x5260($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5260);
    // 0x8021EA94: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8021EA98: addiu       $t4, $t4, 0x2894
    ctx->r12 = ADD32(ctx->r12, 0X2894);
    // 0x8021EA9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EAA0: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x8021EAA4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8021EAA8: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021EAAC: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
    // 0x8021EAB0: addiu       $a1, $a1, -0x5C78
    ctx->r5 = ADD32(ctx->r5, -0X5C78);
    // 0x8021EAB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021EAB8: jal         0x80213E30
    // 0x8021EABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_5;
    // 0x8021EABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8021EAC0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8021EAC4: b           L_8021EE5C
    // 0x8021EAC8: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
        goto L_8021EE5C;
    // 0x8021EAC8: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
L_8021EACC:
    // 0x8021EACC: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x8021EAD0: beq         $at, $zero, L_8021EAEC
    if (ctx->r1 == 0) {
        // 0x8021EAD4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8021EAEC;
    }
    // 0x8021EAD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021EAD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EADC: addu        $at, $at, $t7
    gpr jr_addend_8021EAE4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8021EAE0: lw          $t7, -0x525C($at)
    ctx->r15 = ADD32(ctx->r1, -0X525C);
    // 0x8021EAE4: jr          $t7
    // 0x8021EAE8: nop

    switch (jr_addend_8021EAE4 >> 2) {
        case 0: goto L_8021EAEC; break;
        case 1: goto L_8021EB1C; break;
        case 2: goto L_8021EAEC; break;
        case 3: goto L_8021EAEC; break;
        case 4: goto L_8021EAEC; break;
        case 5: goto L_8021EAEC; break;
        case 6: goto L_8021EBA8; break;
        case 7: goto L_8021EB4C; break;
        case 8: goto L_8021EB78; break;
        case 9: goto L_8021EBD4; break;
        default: switch_error(__func__, 0x8021EAE4, 0x8022ADA4);
    }
    // 0x8021EAE8: nop

L_8021EAEC:
    // 0x8021EAEC: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EAF0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021EAF4: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
    // 0x8021EAF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EAFC: lwc1        $f4, -0x5234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5234);
    // 0x8021EB00: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x8021EB04: addiu       $t9, $t9, 0x4B4
    ctx->r25 = ADD32(ctx->r25, 0X4B4);
    // 0x8021EB08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EB0C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8021EB10: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8021EB14: b           L_8021EE5C
    // 0x8021EB18: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
        goto L_8021EE5C;
    // 0x8021EB18: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
L_8021EB1C:
    // 0x8021EB1C: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EB20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8021EB24: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x8021EB28: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EB2C: lwc1        $f6, -0x5230($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5230);
    // 0x8021EB30: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x8021EB34: addiu       $t2, $t2, 0x37C8
    ctx->r10 = ADD32(ctx->r10, 0X37C8);
    // 0x8021EB38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EB3C: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8021EB40: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8021EB44: b           L_8021EE5C
    // 0x8021EB48: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
        goto L_8021EE5C;
    // 0x8021EB48: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
L_8021EB4C:
    // 0x8021EB4C: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EB50: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EB54: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EB58: lwc1        $f8, -0x522C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X522C);
    // 0x8021EB5C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8021EB60: addiu       $t4, $t4, 0x2FF8
    ctx->r12 = ADD32(ctx->r12, 0X2FF8);
    // 0x8021EB64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EB68: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x8021EB6C: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021EB70: b           L_8021EE5C
    // 0x8021EB74: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
        goto L_8021EE5C;
    // 0x8021EB74: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
L_8021EB78:
    // 0x8021EB78: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8021EB7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021EB80: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EB84: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8021EB88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021EB8C: addiu       $t7, $t7, 0x32FC
    ctx->r15 = ADD32(ctx->r15, 0X32FC);
    // 0x8021EB90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EB94: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
    // 0x8021EB98: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8021EB9C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x8021EBA0: b           L_8021EE5C
    // 0x8021EBA4: sw          $t8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r24;
        goto L_8021EE5C;
    // 0x8021EBA4: sw          $t8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r24;
L_8021EBA8:
    // 0x8021EBA8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8021EBAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021EBB0: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EBB4: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x8021EBB8: addiu       $t9, $t9, 0x2C30
    ctx->r25 = ADD32(ctx->r25, 0X2C30);
    // 0x8021EBBC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EBC0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EBC4: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8021EBC8: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8021EBCC: b           L_8021EE5C
    // 0x8021EBD0: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
        goto L_8021EE5C;
    // 0x8021EBD0: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
L_8021EBD4:
    // 0x8021EBD4: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EBD8: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EBDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EBE0: lwc1        $f18, -0x5228($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5228);
    // 0x8021EBE4: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8021EBE8: addiu       $t1, $t1, 0x4EAC
    ctx->r9 = ADD32(ctx->r9, 0X4EAC);
    // 0x8021EBEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EBF0: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8021EBF4: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021EBF8: b           L_8021EE5C
    // 0x8021EBFC: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
        goto L_8021EE5C;
    // 0x8021EBFC: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
L_8021EC00:
    // 0x8021EC00: sltiu       $at, $t3, 0xA
    ctx->r1 = ctx->r11 < 0XA ? 1 : 0;
    // 0x8021EC04: beq         $at, $zero, L_8021EC20
    if (ctx->r1 == 0) {
        // 0x8021EC08: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_8021EC20;
    }
    // 0x8021EC08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8021EC0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EC10: addu        $at, $at, $t3
    gpr jr_addend_8021EC18 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8021EC14: lw          $t3, -0x5224($at)
    ctx->r11 = ADD32(ctx->r1, -0X5224);
    // 0x8021EC18: jr          $t3
    // 0x8021EC1C: nop

    switch (jr_addend_8021EC18 >> 2) {
        case 0: goto L_8021EC20; break;
        case 1: goto L_8021EC50; break;
        case 2: goto L_8021EC20; break;
        case 3: goto L_8021EC20; break;
        case 4: goto L_8021EC20; break;
        case 5: goto L_8021EC20; break;
        case 6: goto L_8021ECD8; break;
        case 7: goto L_8021EC80; break;
        case 8: goto L_8021ECAC; break;
        case 9: goto L_8021ED04; break;
        default: switch_error(__func__, 0x8021EC18, 0x8022ADDC);
    }
    // 0x8021EC1C: nop

L_8021EC20:
    // 0x8021EC20: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EC24: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021EC28: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x8021EC2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EC30: lwc1        $f4, -0x51FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X51FC);
    // 0x8021EC34: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x8021EC38: addiu       $t5, $t5, 0x758
    ctx->r13 = ADD32(ctx->r13, 0X758);
    // 0x8021EC3C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EC40: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8021EC44: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8021EC48: b           L_8021EE5C
    // 0x8021EC4C: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
        goto L_8021EE5C;
    // 0x8021EC4C: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
L_8021EC50:
    // 0x8021EC50: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EC54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021EC58: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x8021EC5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EC60: lwc1        $f6, -0x51F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X51F8);
    // 0x8021EC64: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021EC68: addiu       $t8, $t8, 0x5C80
    ctx->r24 = ADD32(ctx->r24, 0X5C80);
    // 0x8021EC6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EC70: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8021EC74: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8021EC78: b           L_8021EE5C
    // 0x8021EC7C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
        goto L_8021EE5C;
    // 0x8021EC7C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
L_8021EC80:
    // 0x8021EC80: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EC84: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EC88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EC8C: lwc1        $f8, -0x51F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X51F4);
    // 0x8021EC90: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8021EC94: addiu       $t0, $t0, 0x3AF4
    ctx->r8 = ADD32(ctx->r8, 0X3AF4);
    // 0x8021EC98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EC9C: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8021ECA0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021ECA4: b           L_8021EE5C
    // 0x8021ECA8: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
        goto L_8021EE5C;
    // 0x8021ECA8: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
L_8021ECAC:
    // 0x8021ECAC: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021ECB0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021ECB4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021ECB8: lwc1        $f10, -0x51F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X51F0);
    // 0x8021ECBC: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x8021ECC0: addiu       $t2, $t2, 0x43B4
    ctx->r10 = ADD32(ctx->r10, 0X43B4);
    // 0x8021ECC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021ECC8: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8021ECCC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x8021ECD0: b           L_8021EE5C
    // 0x8021ECD4: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
        goto L_8021EE5C;
    // 0x8021ECD4: sw          $t3, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r11;
L_8021ECD8:
    // 0x8021ECD8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8021ECDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021ECE0: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021ECE4: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8021ECE8: addiu       $t4, $t4, 0x5520
    ctx->r12 = ADD32(ctx->r12, 0X5520);
    // 0x8021ECEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021ECF0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021ECF4: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x8021ECF8: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8021ECFC: b           L_8021EE5C
    // 0x8021ED00: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
        goto L_8021EE5C;
    // 0x8021ED00: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
L_8021ED04:
    // 0x8021ED04: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021ED08: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021ED0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021ED10: lwc1        $f18, -0x51EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X51EC);
    // 0x8021ED14: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021ED18: addiu       $t6, $t6, 0x6BD4
    ctx->r14 = ADD32(ctx->r14, 0X6BD4);
    // 0x8021ED1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021ED20: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8021ED24: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021ED28: b           L_8021EE5C
    // 0x8021ED2C: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
        goto L_8021EE5C;
    // 0x8021ED2C: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
L_8021ED30:
    // 0x8021ED30: sltiu       $at, $t8, 0xA
    ctx->r1 = ctx->r24 < 0XA ? 1 : 0;
    // 0x8021ED34: beq         $at, $zero, L_8021EE5C
    if (ctx->r1 == 0) {
        // 0x8021ED38: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8021EE5C;
    }
    // 0x8021ED38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021ED3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021ED40: addu        $at, $at, $t8
    gpr jr_addend_8021ED48 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8021ED44: lw          $t8, -0x51E8($at)
    ctx->r24 = ADD32(ctx->r1, -0X51E8);
    // 0x8021ED48: jr          $t8
    // 0x8021ED4C: nop

    switch (jr_addend_8021ED48 >> 2) {
        case 0: goto L_8021ED50; break;
        case 1: goto L_8021ED80; break;
        case 2: goto L_8021EE5C; break;
        case 3: goto L_8021EE5C; break;
        case 4: goto L_8021EE5C; break;
        case 5: goto L_8021EE5C; break;
        case 6: goto L_8021EE08; break;
        case 7: goto L_8021EDB0; break;
        case 8: goto L_8021EDDC; break;
        case 9: goto L_8021EE34; break;
        default: switch_error(__func__, 0x8021ED48, 0x8022AE18);
    }
    // 0x8021ED4C: nop

L_8021ED50:
    // 0x8021ED50: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021ED54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021ED58: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x8021ED5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021ED60: lwc1        $f4, -0x51C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X51C0);
    // 0x8021ED64: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8021ED68: addiu       $t0, $t0, 0xCFC
    ctx->r8 = ADD32(ctx->r8, 0XCFC);
    // 0x8021ED6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021ED70: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8021ED74: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8021ED78: b           L_8021EE5C
    // 0x8021ED7C: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
        goto L_8021EE5C;
    // 0x8021ED7C: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
L_8021ED80:
    // 0x8021ED80: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021ED84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8021ED88: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x8021ED8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021ED90: lwc1        $f6, -0x51BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X51BC);
    // 0x8021ED94: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x8021ED98: addiu       $t3, $t3, 0x5980
    ctx->r11 = ADD32(ctx->r11, 0X5980);
    // 0x8021ED9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EDA0: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8021EDA4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8021EDA8: b           L_8021EE5C
    // 0x8021EDAC: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
        goto L_8021EE5C;
    // 0x8021EDAC: sw          $t4, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r12;
L_8021EDB0:
    // 0x8021EDB0: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EDB4: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EDB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EDBC: lwc1        $f8, -0x51B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X51B8);
    // 0x8021EDC0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x8021EDC4: addiu       $t5, $t5, 0x4038
    ctx->r13 = ADD32(ctx->r13, 0X4038);
    // 0x8021EDC8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EDCC: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x8021EDD0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021EDD4: b           L_8021EE5C
    // 0x8021EDD8: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
        goto L_8021EE5C;
    // 0x8021EDD8: sw          $t6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r14;
L_8021EDDC:
    // 0x8021EDDC: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EDE0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EDE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EDE8: lwc1        $f10, -0x51B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X51B4);
    // 0x8021EDEC: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x8021EDF0: addiu       $t7, $t7, 0x1090
    ctx->r15 = ADD32(ctx->r15, 0X1090);
    // 0x8021EDF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EDF8: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8021EDFC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x8021EE00: b           L_8021EE5C
    // 0x8021EE04: sw          $t8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r24;
        goto L_8021EE5C;
    // 0x8021EE04: sw          $t8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r24;
L_8021EE08:
    // 0x8021EE08: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8021EE0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021EE10: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EE14: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x8021EE18: addiu       $t9, $t9, 0x5470
    ctx->r25 = ADD32(ctx->r25, 0X5470);
    // 0x8021EE1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EE20: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EE24: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8021EE28: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8021EE2C: b           L_8021EE5C
    // 0x8021EE30: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
        goto L_8021EE5C;
    // 0x8021EE30: sw          $t0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r8;
L_8021EE34:
    // 0x8021EE34: addiu       $s0, $a3, 0x5C
    ctx->r16 = ADD32(ctx->r7, 0X5C);
    // 0x8021EE38: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8021EE3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021EE40: lwc1        $f18, -0x51B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X51B0);
    // 0x8021EE44: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8021EE48: addiu       $t1, $t1, 0x7434
    ctx->r9 = ADD32(ctx->r9, 0X7434);
    // 0x8021EE4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8021EE50: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8021EE54: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8021EE58: sw          $t2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r10;
L_8021EE5C:
    // 0x8021EE5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8021EE60:
    // 0x8021EE60: nop

    // 0x8021EE64: swc1        $f4, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f4.u32l;
    // 0x8021EE68: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021EE6C: swc1        $f6, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f6.u32l;
    // 0x8021EE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EE74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021EE78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021EE7C: jr          $ra
    // 0x8021EE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8021EE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80213C84_67D664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213C84: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80213C88: jr          $ra
    // 0x80213C8C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80213C8C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021F200_688BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F200: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021F204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8021F208: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    // 0x8021F20C: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x8021F210: jr          $ra
    // 0x8021F214: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8021F214: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
;}
RECOMP_FUNC void func_80211EA0_67B880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211EA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211EA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211EAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211EB0: lbu         $v0, 0x5C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5C);
    // 0x80211EB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211EB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211EBC: beq         $v0, $zero, L_80211ED4
    if (ctx->r2 == 0) {
        // 0x80211EC0: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_80211ED4;
    }
    // 0x80211EC0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80211EC4: beql        $v0, $at, L_80211F44
    if (ctx->r2 == ctx->r1) {
        // 0x80211EC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211F44;
    }
    goto skip_0;
    // 0x80211EC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80211ECC: b           L_80211F44
    // 0x80211ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80211F44;
    // 0x80211ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211ED4:
    // 0x80211ED4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80211ED8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80211EDC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80211EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80211EE4: lhu         $v0, -0x520C($t7)
    ctx->r2 = MEM_HU(ctx->r15, -0X520C);
    // 0x80211EE8: addiu       $v1, $v1, -0x4CE0
    ctx->r3 = ADD32(ctx->r3, -0X4CE0);
    // 0x80211EEC: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80211EF0: beq         $at, $zero, L_80211F08
    if (ctx->r1 == 0) {
        // 0x80211EF4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80211F08;
    }
    // 0x80211EF4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80211EF8: jal         0x80211D7C
    // 0x80211EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80211D7C_67B75C(rdram, ctx);
        goto after_0;
    // 0x80211EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80211F00: b           L_80211F3C
    // 0x80211F04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
        goto L_80211F3C;
    // 0x80211F04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80211F08:
    // 0x80211F08: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x80211F0C: beql        $at, $zero, L_80211F28
    if (ctx->r1 == 0) {
        // 0x80211F10: slti        $at, $v0, 0x1C
        ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
            goto L_80211F28;
    }
    goto skip_1;
    // 0x80211F10: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    skip_1:
    // 0x80211F14: jal         0x8021A3C8
    // 0x80211F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A3C8_683DA8(rdram, ctx);
        goto after_1;
    // 0x80211F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80211F1C: b           L_80211F3C
    // 0x80211F20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
        goto L_80211F3C;
    // 0x80211F20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211F24: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
L_80211F28:
    // 0x80211F28: beql        $at, $zero, L_80211F3C
    if (ctx->r1 == 0) {
        // 0x80211F2C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80211F3C;
    }
    goto skip_2;
    // 0x80211F2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_2:
    // 0x80211F30: jal         0x80223B84
    // 0x80211F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80223B84_68D564(rdram, ctx);
        goto after_2;
    // 0x80211F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80211F38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80211F3C:
    // 0x80211F3C: sb          $t8, 0x5C($s0)
    MEM_B(0X5C, ctx->r16) = ctx->r24;
    // 0x80211F40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211F44:
    // 0x80211F44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80211F48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211F4C: jr          $ra
    // 0x80211F50: nop

    TRACE_RETURN()
    return;
    // 0x80211F50: nop

;}
RECOMP_FUNC void func_80225E58_68F838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E58: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80225E5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E60: ldc1        $f4, -0x4EE8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4EE8);
    // 0x80225E64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80225E68: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x80225E6C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80225E70: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80225E74: addiu       $a3, $a3, -0x4CDC
    ctx->r7 = ADD32(ctx->r7, -0X4CDC);
    // 0x80225E78: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80225E7C: bc1fl       L_80225EF8
    if (!c1cs) {
        // 0x80225E80: lw          $t6, 0x0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0X0);
            goto L_80225EF8;
    }
    goto skip_0;
    // 0x80225E80: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80225E84: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80225E88: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80225E8C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80225E90: nop

    // 0x80225E94: bc1fl       L_80225EAC
    if (!c1cs) {
        // 0x80225E98: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80225EAC;
    }
    goto skip_1;
    // 0x80225E98: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x80225E9C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80225EA0: b           L_80225EAC
    // 0x80225EA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80225EAC;
    // 0x80225EA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80225EA8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80225EAC:
    // 0x80225EAC: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80225EB0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80225EB4: nop

    // 0x80225EB8: bc1fl       L_80225ED4
    if (!c1cs) {
        // 0x80225EBC: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80225ED4;
    }
    goto skip_2;
    // 0x80225EBC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80225EC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80225EC4: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80225EC8: b           L_80225EF4
    // 0x80225ECC: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80225EF4;
    // 0x80225ECC: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80225ED0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80225ED4:
    // 0x80225ED4: nop

    // 0x80225ED8: bc1fl       L_80225EF0
    if (!c1cs) {
        // 0x80225EDC: add.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80225EF0;
    }
    goto skip_3;
    // 0x80225EDC: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x80225EE0: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80225EE4: b           L_80225EF4
    // 0x80225EE8: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80225EF4;
    // 0x80225EE8: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80225EEC: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
L_80225EF0:
    // 0x80225EF0: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_80225EF4:
    // 0x80225EF4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
L_80225EF8:
    // 0x80225EF8: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x80225EFC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80225F00: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80225F04: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x80225F08: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80225F0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80225F10: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80225F14: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80225F18: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80225F1C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80225F20: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80225F24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80225F28: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80225F2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80225F30: nop

    // 0x80225F34: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80225F38: beql        $t1, $zero, L_80225F88
    if (ctx->r9 == 0) {
        // 0x80225F3C: mfc1        $t1, $f4
        ctx->r9 = (int32_t)ctx->f4.u32l;
            goto L_80225F88;
    }
    goto skip_4;
    // 0x80225F3C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80225F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80225F44: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80225F48: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80225F4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80225F50: nop

    // 0x80225F54: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80225F58: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80225F5C: nop

    // 0x80225F60: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80225F64: bne         $t1, $zero, L_80225F7C
    if (ctx->r9 != 0) {
        // 0x80225F68: nop
    
            goto L_80225F7C;
    }
    // 0x80225F68: nop

    // 0x80225F6C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x80225F70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80225F74: b           L_80225F94
    // 0x80225F78: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80225F94;
    // 0x80225F78: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80225F7C:
    // 0x80225F7C: b           L_80225F94
    // 0x80225F80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80225F94;
    // 0x80225F80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80225F84: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
L_80225F88:
    // 0x80225F88: nop

    // 0x80225F8C: bltz        $t1, L_80225F7C
    if (SIGNED(ctx->r9) < 0) {
        // 0x80225F90: nop
    
            goto L_80225F7C;
    }
    // 0x80225F90: nop

L_80225F94:
    // 0x80225F94: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x80225F98: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80225F9C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80225FA0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80225FA4: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x80225FA8: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80225FAC: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x80225FB0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80225FB4: jr          $ra
    // 0x80225FB8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x80225FB8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_80228794_692174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228794: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228798: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8022879C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802287A0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802287A4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802287A8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802287AC: addiu       $a1, $a1, -0x7BAC
    ctx->r5 = ADD32(ctx->r5, -0X7BAC);
    // 0x802287B0: jal         0x80034E08
    // 0x802287B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802287B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802287B8: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802287BC: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802287C0: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802287C4: bne         $v0, $zero, L_802287D4
    if (ctx->r2 != 0) {
        // 0x802287C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802287D4;
    }
    // 0x802287C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802287CC: b           L_80228844
    // 0x802287D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80228844;
    // 0x802287D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802287D4:
    // 0x802287D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802287D8: lwc1        $f0, -0x4DA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4DA0);
    // 0x802287DC: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x802287E0: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x802287E4: swc1        $f2, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f2.u32l;
    // 0x802287E8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802287EC: addiu       $a1, $a1, 0x8D8
    ctx->r5 = ADD32(ctx->r5, 0X8D8);
    // 0x802287F0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802287F4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802287F8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802287FC: addiu       $t6, $zero, 0x4E3
    ctx->r14 = ADD32(0, 0X4E3);
    // 0x80228800: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80228804: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80228808: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8022880C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80228810: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80228814: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80228818: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022881C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80228820: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80228824: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80228828: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8022882C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80228830: jal         0x8000DBF0
    // 0x80228834: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80228834: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80228838: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8022883C: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x80228840: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80228844:
    // 0x80228844: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8022884C: jr          $ra
    // 0x80228850: nop

    TRACE_RETURN()
    return;
    // 0x80228850: nop

;}
RECOMP_FUNC void func_8021689C_68027C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021689C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802168A0: jr          $ra
    // 0x802168A4: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802168A4: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80228124_691B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228124: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228128: jr          $ra
    // 0x8022812C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8022812C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802168F8_6802D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802168F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802168FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80216900: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80216904: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x80216908: swc1        $f14, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f14.u32l;
    // 0x8021690C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80216910: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80216914: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80216918: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
    // 0x8021691C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80216920: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80216924: nop

    // 0x80216928: bc1fl       L_80216948
    if (!c1cs) {
        // 0x8021692C: lwc1        $f8, 0x4($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80216948;
    }
    goto skip_0;
    // 0x8021692C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x80216930: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80216934: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80216938: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8021693C: b           L_8021694C
    // 0x80216940: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021694C;
    // 0x80216940: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80216944: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
L_80216948:
    // 0x80216948: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
L_8021694C:
    // 0x8021694C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80216950: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80216954: div.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80216958: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8021695C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80216960: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80216964: nop

    // 0x80216968: bc1fl       L_80216980
    if (!c1cs) {
        // 0x8021696C: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80216980;
    }
    goto skip_1;
    // 0x8021696C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x80216970: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80216974: b           L_80216980
    // 0x80216978: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80216980;
    // 0x80216978: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021697C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80216980:
    // 0x80216980: div.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80216984: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80216988: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x8021698C: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80216990: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80216994: nop

    // 0x80216998: bc1fl       L_802169B0
    if (!c1cs) {
        // 0x8021699C: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_802169B0;
    }
    goto skip_2;
    // 0x8021699C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x802169A0: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802169A4: b           L_802169B0
    // 0x802169A8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802169B0;
    // 0x802169A8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802169AC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_802169B0:
    // 0x802169B0: div.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802169B4: jr          $ra
    // 0x802169B8: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x802169B8: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80228354_691D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228354: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80228358: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x8022835C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80228360: jr          $ra
    // 0x80228364: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x80228364: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
;}
RECOMP_FUNC void func_8020D7B4_677194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D7B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D7B8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D7BC: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x8020D7C0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020D7C4: lw          $v0, -0x71C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71C);
    // 0x8020D7C8: beq         $v0, $zero, L_8020D7E0
    if (ctx->r2 == 0) {
        // 0x8020D7CC: nop
    
            goto L_8020D7E0;
    }
    // 0x8020D7CC: nop

    // 0x8020D7D0: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8020D7D4: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x8020D7D8: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x8020D7DC: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
L_8020D7E0:
    // 0x8020D7E0: jr          $ra
    // 0x8020D7E4: nop

    TRACE_RETURN()
    return;
    // 0x8020D7E4: nop

;}
RECOMP_FUNC void func_8021A510_683EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A510: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x8021A514: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x8021A518: beq         $v0, $zero, L_8021A570
    if (ctx->r2 == 0) {
        // 0x8021A51C: nop
    
            goto L_8021A570;
    }
    // 0x8021A51C: nop

    // 0x8021A520: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A524: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x8021A528: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A52C: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x8021A530: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A534: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x8021A538: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x8021A53C: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x8021A540: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x8021A544: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x8021A548: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x8021A54C: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    // 0x8021A550: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021A554: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x8021A558: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021A55C: swc1        $f16, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f16.u32l;
    // 0x8021A560: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021A564: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x8021A568: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021A56C: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
L_8021A570:
    // 0x8021A570: jr          $ra
    // 0x8021A574: nop

    TRACE_RETURN()
    return;
    // 0x8021A574: nop

;}
RECOMP_FUNC void func_80227870_691250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227870: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x80227874: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80227878: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x8022787C: beq         $at, $zero, L_80227978
    if (ctx->r1 == 0) {
        // 0x80227880: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80227978;
    }
    // 0x80227880: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80227884: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80227888: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022788C: addu        $at, $at, $t6
    gpr jr_addend_80227894 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80227890: lw          $t6, -0x4E40($at)
    ctx->r14 = ADD32(ctx->r1, -0X4E40);
    // 0x80227894: jr          $t6
    // 0x80227898: nop

    switch (jr_addend_80227894 >> 2) {
        case 0: goto L_8022794C; break;
        case 1: goto L_80227978; break;
        case 2: goto L_802278F4; break;
        case 3: goto L_8022789C; break;
        case 4: goto L_80227978; break;
        case 5: goto L_802278CC; break;
        case 6: goto L_80227920; break;
        default: switch_error(__func__, 0x80227894, 0x8022B1C0);
    }
    // 0x80227898: nop

L_8022789C:
    // 0x8022789C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802278A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802278A4: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x802278A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802278AC: lwc1        $f4, -0x4E24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E24);
    // 0x802278B0: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x802278B4: addiu       $t8, $t8, 0xCFC
    ctx->r24 = ADD32(ctx->r24, 0XCFC);
    // 0x802278B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802278BC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802278C0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x802278C4: b           L_80227978
    // 0x802278C8: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
        goto L_80227978;
    // 0x802278C8: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_802278CC:
    // 0x802278CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802278D0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802278D4: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x802278D8: addiu       $t0, $t0, 0x2768
    ctx->r8 = ADD32(ctx->r8, 0X2768);
    // 0x802278DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802278E0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802278E4: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802278E8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x802278EC: b           L_80227978
    // 0x802278F0: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_80227978;
    // 0x802278F0: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_802278F4:
    // 0x802278F4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802278F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802278FC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227900: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x80227904: addiu       $t2, $t2, 0x2768
    ctx->r10 = ADD32(ctx->r10, 0X2768);
    // 0x80227908: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8022790C: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80227910: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80227914: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80227918: b           L_80227978
    // 0x8022791C: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
        goto L_80227978;
    // 0x8022791C: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
L_80227920:
    // 0x80227920: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80227924: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80227928: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022792C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80227930: addiu       $t4, $t4, 0x31DC
    ctx->r12 = ADD32(ctx->r12, 0X31DC);
    // 0x80227934: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227938: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8022793C: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80227940: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80227944: b           L_80227978
    // 0x80227948: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
        goto L_80227978;
    // 0x80227948: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
L_8022794C:
    // 0x8022794C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227950: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80227954: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80227958: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022795C: lwc1        $f16, -0x4E20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E20);
    // 0x80227960: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80227964: addiu       $t7, $t7, 0x2B80
    ctx->r15 = ADD32(ctx->r15, 0X2B80);
    // 0x80227968: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8022796C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80227970: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80227974: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80227978:
    // 0x80227978: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022797C: swc1        $f12, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f12.u32l;
    // 0x80227980: jr          $ra
    // 0x80227984: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80227984: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80229948_693328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229948: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022994C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80229950: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80229954: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x80229958: swc1        $f14, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f14.u32l;
    // 0x8022995C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80229960: jr          $ra
    // 0x80229964: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80229964: swc1        $f4, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021BF70_685950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BF70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021BF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BF78: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021BF7C: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021BF80: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021BF84: ldc1        $f4, -0x5330($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5330);
    // 0x8021BF88: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021BF8C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021BF90: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021BF94: addiu       $a2, $a0, 0x5C
    ctx->r6 = ADD32(ctx->r4, 0X5C);
    // 0x8021BF98: bc1fl       L_8021C014
    if (!c1cs) {
        // 0x8021BF9C: addiu       $a2, $a3, 0x5C
        ctx->r6 = ADD32(ctx->r7, 0X5C);
            goto L_8021C014;
    }
    goto skip_0;
    // 0x8021BF9C: addiu       $a2, $a3, 0x5C
    ctx->r6 = ADD32(ctx->r7, 0X5C);
    skip_0:
    // 0x8021BFA0: lwc1        $f2, 0x18($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X18);
    // 0x8021BFA4: lwc1        $f0, 0x10($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8021BFA8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8021BFAC: nop

    // 0x8021BFB0: bc1fl       L_8021BFC8
    if (!c1cs) {
        // 0x8021BFB4: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8021BFC8;
    }
    goto skip_1;
    // 0x8021BFB4: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x8021BFB8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8021BFBC: b           L_8021BFC8
    // 0x8021BFC0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_8021BFC8;
    // 0x8021BFC0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8021BFC4: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_8021BFC8:
    // 0x8021BFC8: lwc1        $f12, 0x1C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x8021BFCC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021BFD0: nop

    // 0x8021BFD4: bc1fl       L_8021BFF0
    if (!c1cs) {
        // 0x8021BFD8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8021BFF0;
    }
    goto skip_2;
    // 0x8021BFD8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x8021BFDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021BFE0: swc1        $f2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f2.u32l;
    // 0x8021BFE4: b           L_8021C010
    // 0x8021BFE8: swc1        $f10, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f10.u32l;
        goto L_8021C010;
    // 0x8021BFE8: swc1        $f10, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f10.u32l;
    // 0x8021BFEC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8021BFF0:
    // 0x8021BFF0: nop

    // 0x8021BFF4: bc1fl       L_8021C00C
    if (!c1cs) {
        // 0x8021BFF8: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_8021C00C;
    }
    goto skip_3;
    // 0x8021BFF8: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x8021BFFC: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8021C000: b           L_8021C010
    // 0x8021C004: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
        goto L_8021C010;
    // 0x8021C004: swc1        $f16, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f16.u32l;
    // 0x8021C008: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_8021C00C:
    // 0x8021C00C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_8021C010:
    // 0x8021C010: addiu       $a2, $a3, 0x5C
    ctx->r6 = ADD32(ctx->r7, 0X5C);
L_8021C014:
    // 0x8021C014: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8021C018: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x8021C01C: swc1        $f6, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f6.u32l;
    // 0x8021C020: lw          $t7, 0x20($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X20);
    // 0x8021C024: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8021C028: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x8021C02C: lw          $t8, 0x20($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X20);
    // 0x8021C030: lwc1        $f8, 0x14($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X14);
    // 0x8021C034: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x8021C038: lw          $a1, 0x20($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X20);
    // 0x8021C03C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8021C040: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021C044: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021C048: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x8021C04C: lw          $a0, 0x20($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X20);
    // 0x8021C050: jal         0x8001B5AC
    // 0x8021C054: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021C054: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8021C058: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8021C05C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021C060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C064: lw          $a1, 0x20($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X20);
    // 0x8021C068: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021C06C: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8021C070: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021C074: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021C078: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8021C07C: nop

    // 0x8021C080: bc1fl       L_8021C0B8
    if (!c1cs) {
        // 0x8021C084: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8021C0B8;
    }
    goto skip_4;
    // 0x8021C084: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x8021C088: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x8021C08C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021C090: bnel        $t9, $at, L_8021C0B0
    if (ctx->r25 != ctx->r1) {
        // 0x8021C094: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_8021C0B0;
    }
    goto skip_5;
    // 0x8021C094: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_5:
    // 0x8021C098: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021C09C: nop

    // 0x8021C0A0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x8021C0A4: b           L_8021C0B4
    // 0x8021C0A8: lw          $a1, 0x20($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X20);
        goto L_8021C0B4;
    // 0x8021C0A8: lw          $a1, 0x20($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X20);
    // 0x8021C0AC: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_8021C0B0:
    // 0x8021C0B0: lw          $a1, 0x20($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X20);
L_8021C0B4:
    // 0x8021C0B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_8021C0B8:
    // 0x8021C0B8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021C0BC: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8021C0C0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021C0C4: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x8021C0C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C0CC: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x8021C0D0: addiu       $t6, $t6, -0x5D90
    ctx->r14 = ADD32(ctx->r14, -0X5D90);
    // 0x8021C0D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021C0D8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021C0DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021C0E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021C0E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C0E8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8021C0EC: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8021C0F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021C0F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021C0F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021C0FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021C100: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C104: lui         $t7, 0x801
    ctx->r15 = S32(0X801 << 16);
    // 0x8021C108: addiu       $t7, $t7, 0x78D0
    ctx->r15 = ADD32(ctx->r15, 0X78D0);
    // 0x8021C10C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021C110: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021C114: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021C118: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021C11C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C120: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x8021C124: ori         $t6, $t6, 0x4060
    ctx->r14 = ctx->r14 | 0X4060;
    // 0x8021C128: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021C12C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021C130: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8021C134: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021C138: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021C13C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C140: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8021C144: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8021C148: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021C14C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021C150: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021C154: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021C158: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C15C: lui         $t7, 0x77F
    ctx->r15 = S32(0X77F << 16);
    // 0x8021C160: ori         $t7, $t7, 0xF080
    ctx->r15 = ctx->r15 | 0XF080;
    // 0x8021C164: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021C168: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021C16C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021C170: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021C174: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C178: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8021C17C: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8021C180: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021C184: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021C188: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021C18C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021C190: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C194: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x8021C198: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x8021C19C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021C1A0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021C1A4: ori         $t7, $t7, 0x2000
    ctx->r15 = ctx->r15 | 0X2000;
    // 0x8021C1A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021C1AC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021C1B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C1B4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8021C1B8: lui         $t2, 0x8FFF
    ctx->r10 = S32(0X8FFF << 16);
    // 0x8021C1BC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021C1C0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021C1C4: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x8021C1C8: lui         $t9, 0xF
    ctx->r25 = S32(0XF << 16);
    // 0x8021C1CC: ori         $t9, $t9, 0xC07C
    ctx->r25 = ctx->r25 | 0XC07C;
    // 0x8021C1D0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8021C1D4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8021C1D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021C1DC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021C1E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C1E4: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x8021C1E8: lui         $t7, 0xBB00
    ctx->r15 = S32(0XBB00 << 16);
    // 0x8021C1EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021C1F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021C1F4: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x8021C1F8: ori         $t8, $t8, 0x800
    ctx->r24 = ctx->r24 | 0X800;
    // 0x8021C1FC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021C200: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021C204: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C208: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8021C20C: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8021C210: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021C214: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021C218: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021C21C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021C220: lw          $t7, 0x20($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X20);
    // 0x8021C224: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8021C228: lw          $t1, 0x30($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X30);
    // 0x8021C22C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8021C230: subu        $t9, $t2, $t1
    ctx->r25 = SUB32(ctx->r10, ctx->r9);
    // 0x8021C234: and         $t6, $t8, $t9
    ctx->r14 = ctx->r24 & ctx->r25;
    // 0x8021C238: and         $a1, $t6, $t2
    ctx->r5 = ctx->r14 & ctx->r10;
    // 0x8021C23C: jal         0x80040620
    // 0x8021C240: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8021C240: and         $a0, $t1, $t2
    ctx->r4 = ctx->r9 & ctx->r10;
    after_1:
    // 0x8021C244: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8021C248: lw          $t7, 0x68($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X68);
    // 0x8021C24C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8021C250: sw          $t8, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r24;
    // 0x8021C254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021C258: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021C25C: jr          $ra
    // 0x8021C260: nop

    TRACE_RETURN()
    return;
    // 0x8021C260: nop

;}
RECOMP_FUNC void func_8021F368_688D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F368: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021F36C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8021F370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021F374: beql        $v1, $zero, L_8021F384
    if (ctx->r3 == 0) {
        // 0x8021F378: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8021F384;
    }
    goto skip_0;
    // 0x8021F378: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x8021F37C: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
    // 0x8021F380: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8021F384:
    // 0x8021F384: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021F388: beql        $v1, $zero, L_8021F398
    if (ctx->r3 == 0) {
        // 0x8021F38C: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_8021F398;
    }
    goto skip_1;
    // 0x8021F38C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x8021F390: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
    // 0x8021F394: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_8021F398:
    // 0x8021F398: beql        $v1, $zero, L_8021F3A8
    if (ctx->r3 == 0) {
        // 0x8021F39C: lw          $v1, 0x10($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X10);
            goto L_8021F3A8;
    }
    goto skip_2;
    // 0x8021F39C: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x8021F3A0: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
    // 0x8021F3A4: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
L_8021F3A8:
    // 0x8021F3A8: beq         $v1, $zero, L_8021F3B4
    if (ctx->r3 == 0) {
        // 0x8021F3AC: nop
    
            goto L_8021F3B4;
    }
    // 0x8021F3AC: nop

    // 0x8021F3B0: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
L_8021F3B4:
    // 0x8021F3B4: jr          $ra
    // 0x8021F3B8: nop

    TRACE_RETURN()
    return;
    // 0x8021F3B8: nop

;}
RECOMP_FUNC void func_8021C730_686110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C730: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C734: jr          $ra
    // 0x8021C738: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C738: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021C78C_68616C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C78C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C790: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021C794: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8021C798: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x8021C79C: jr          $ra
    // 0x8021C7A0: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C7A0: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021EF00_6888E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021EF04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021EF08: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021EF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021EF10: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021EF14: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021EF18: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021EF1C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021EF20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021EF24: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021EF28: jal         0x800040A8
    // 0x8021EF2C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021EF2C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8021EF30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021EF34: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8021EF38: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021EF3C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021EF40: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021EF44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021EF48: lhu         $t0, 0x3C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X3C);
    // 0x8021EF4C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021EF50: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x8021EF54: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8021EF58: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8021EF5C: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8021EF60: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x8021EF64: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8021EF68: nop

    // 0x8021EF6C: sh          $t7, 0x3E($v1)
    MEM_H(0X3E, ctx->r3) = ctx->r15;
    // 0x8021EF70: lh          $t2, 0x3E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X3E);
    // 0x8021EF74: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x8021EF78: mflo        $t3
    ctx->r11 = lo;
    // 0x8021EF7C: sh          $t3, 0x40($v1)
    MEM_H(0X40, ctx->r3) = ctx->r11;
    // 0x8021EF80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021EF84: bne         $t2, $zero, L_8021EF90
    if (ctx->r10 != 0) {
        // 0x8021EF88: nop
    
            goto L_8021EF90;
    }
    // 0x8021EF88: nop

    // 0x8021EF8C: break       7
    do_break(2149707660);
L_8021EF90:
    // 0x8021EF90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021EF94: bne         $t2, $at, L_8021EFA8
    if (ctx->r10 != ctx->r1) {
        // 0x8021EF98: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8021EFA8;
    }
    // 0x8021EF98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021EF9C: bne         $t1, $at, L_8021EFA8
    if (ctx->r9 != ctx->r1) {
        // 0x8021EFA0: nop
    
            goto L_8021EFA8;
    }
    // 0x8021EFA0: nop

    // 0x8021EFA4: break       6
    do_break(2149707684);
L_8021EFA8:
    // 0x8021EFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021EFAC: jr          $ra
    // 0x8021EFB0: nop

    TRACE_RETURN()
    return;
    // 0x8021EFB0: nop

;}
RECOMP_FUNC void func_80227A30_691410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80227A38: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80227A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A40: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80227A44: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80227A48: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80227A4C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80227A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80227A54: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80227A58: jal         0x800040A8
    // 0x80227A5C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80227A5C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80227A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80227A64: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80227A68: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80227A6C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80227A70: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80227A74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80227A78: lhu         $t0, 0x30($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X30);
    // 0x80227A7C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80227A80: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80227A84: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80227A88: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80227A8C: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80227A90: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80227A94: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80227A98: nop

    // 0x80227A9C: sh          $t7, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r15;
    // 0x80227AA0: lh          $t2, 0x32($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X32);
    // 0x80227AA4: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x80227AA8: mflo        $t3
    ctx->r11 = lo;
    // 0x80227AAC: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
    // 0x80227AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AB4: bne         $t2, $zero, L_80227AC0
    if (ctx->r10 != 0) {
        // 0x80227AB8: nop
    
            goto L_80227AC0;
    }
    // 0x80227AB8: nop

    // 0x80227ABC: break       7
    do_break(2149743292);
L_80227AC0:
    // 0x80227AC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227AC4: bne         $t2, $at, L_80227AD8
    if (ctx->r10 != ctx->r1) {
        // 0x80227AC8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227AD8;
    }
    // 0x80227AC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227ACC: bne         $t1, $at, L_80227AD8
    if (ctx->r9 != ctx->r1) {
        // 0x80227AD0: nop
    
            goto L_80227AD8;
    }
    // 0x80227AD0: nop

    // 0x80227AD4: break       6
    do_break(2149743316);
L_80227AD8:
    // 0x80227AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227ADC: jr          $ra
    // 0x80227AE0: nop

    TRACE_RETURN()
    return;
    // 0x80227AE0: nop

;}
RECOMP_FUNC void func_80223B84_68D564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80223B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80223B8C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80223B90: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223B94: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223B98: addiu       $a1, $a1, -0x634
    ctx->r5 = ADD32(ctx->r5, -0X634);
    // 0x80223B9C: jal         0x80034E08
    // 0x80223BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80223BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80223BA4: bne         $v0, $zero, L_80223BB4
    if (ctx->r2 != 0) {
        // 0x80223BA8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80223BB4;
    }
    // 0x80223BA8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80223BAC: b           L_80223CF8
    // 0x80223BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223CF8;
    // 0x80223BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223BB4:
    // 0x80223BB4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80223BB8: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x80223BBC: jal         0x80034DD8
    // 0x80223BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80223BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80223BC4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80223BC8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80223BCC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80223BD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80223BD4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223BD8: jal         0x8020D2E0
    // 0x80223BDC: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    func_8020D2E0_676CC0(rdram, ctx);
        goto after_2;
    // 0x80223BDC: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    after_2:
    // 0x80223BE0: jal         0x801DC630
    // 0x80223BE4: nop

    func_801DC630_598540(rdram, ctx);
        goto after_3;
    // 0x80223BE4: nop

    after_3:
    // 0x80223BE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80223BEC: jal         0x8001381C
    // 0x80223BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001381C_1441C(rdram, ctx);
        goto after_4;
    // 0x80223BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80223BF4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80223BF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80223BFC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80223C00: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80223C04: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80223C08: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80223C0C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80223C10: jal         0x800133E0
    // 0x80223C14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800133E0_13FE0(rdram, ctx);
        goto after_5;
    // 0x80223C14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80223C18: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80223C1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80223C20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80223C24: jal         0x80013400
    // 0x80223C28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_6;
    // 0x80223C28: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x80223C2C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80223C30: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80223C34: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80223C38: jal         0x80013484
    // 0x80223C3C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_80013484_14084(rdram, ctx);
        goto after_7;
    // 0x80223C3C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_7:
    // 0x80223C40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80223C44: jal         0x80012940
    // 0x80223C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_8;
    // 0x80223C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80223C4C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80223C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80223C54: jal         0x80012500
    // 0x80223C58: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_9;
    // 0x80223C58: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_9:
    // 0x80223C5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223C60: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80223C64: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80223C68: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80223C6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80223C70: jal         0x80012818
    // 0x80223C74: nop

    func_80012818_13418(rdram, ctx);
        goto after_10;
    // 0x80223C74: nop

    after_10:
    // 0x80223C78: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80223C7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80223C80: lui         $a2, 0x438C
    ctx->r6 = S32(0X438C << 16);
    // 0x80223C84: jal         0x800127B8
    // 0x80223C88: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_11;
    // 0x80223C88: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_11:
    // 0x80223C8C: jal         0x80012938
    // 0x80223C90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_80012938_13538(rdram, ctx);
        goto after_12;
    // 0x80223C90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_12:
    // 0x80223C94: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80223C98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80223C9C: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80223CA0: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x80223CA4: addiu       $t0, $zero, 0xBE
    ctx->r8 = ADD32(0, 0XBE);
    // 0x80223CA8: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x80223CAC: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x80223CB0: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    // 0x80223CB4: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x80223CB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80223CBC: jal         0x8020D540
    // 0x80223CC0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    func_8020D540_676F20(rdram, ctx);
        goto after_13;
    // 0x80223CC0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    after_13:
    // 0x80223CC4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80223CC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80223CCC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80223CD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80223CD4: jal         0x8020D4D0
    // 0x80223CD8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_14;
    // 0x80223CD8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_14:
    // 0x80223CDC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80223CE0: jal         0x8020D4B8
    // 0x80223CE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_15;
    // 0x80223CE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_15:
    // 0x80223CE8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80223CEC: jal         0x8020D4EC
    // 0x80223CF0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_16;
    // 0x80223CF0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_16:
    // 0x80223CF4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80223CF8:
    // 0x80223CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223CFC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223D00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223D04: jr          $ra
    // 0x80223D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80223D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021BE14_6857F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BE14: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021BE18: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021BE1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021BE20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021BE24: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x8021BE28: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x8021BE2C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021BE30: jr          $ra
    // 0x8021BE34: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021BE34: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021DE78_687858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DE78: andi        $t6, $a1, 0x3FF
    ctx->r14 = ctx->r5 & 0X3FF;
    // 0x8021DE7C: jr          $ra
    // 0x8021DE80: sh          $t6, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8021DE80: sh          $t6, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80227988_691368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227988: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022798C: jr          $ra
    // 0x80227990: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80227990: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80217394_680D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217394: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80217398: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8021739C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802173A0: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x802173A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802173A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802173AC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802173B0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x802173B4: addiu       $a1, $a1, 0x6D74
    ctx->r5 = ADD32(ctx->r5, 0X6D74);
    // 0x802173B8: jal         0x80034E08
    // 0x802173BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802173BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802173C0: bne         $v0, $zero, L_802173D0
    if (ctx->r2 != 0) {
        // 0x802173C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802173D0;
    }
    // 0x802173C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802173C8: b           L_80217544
    // 0x802173CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217544;
    // 0x802173CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802173D0:
    // 0x802173D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802173D4: jal         0x80011968
    // 0x802173D8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x802173D8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x802173DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802173E0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802173E4: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x802173E8: jal         0x80011908
    // 0x802173EC: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x802173EC: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    after_2:
    // 0x802173F0: jal         0x80011760
    // 0x802173F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x802173F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802173F8: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x802173FC: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x80217400: addiu       $t0, $s0, 0x5C
    ctx->r8 = ADD32(ctx->r16, 0X5C);
    // 0x80217404: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80217408: addiu       $t3, $t3, -0x4CDC
    ctx->r11 = ADD32(ctx->r11, -0X4CDC);
    // 0x8021740C: bgez        $t6, L_80217424
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80217410: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80217424;
    }
    // 0x80217410: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80217414: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80217418: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021741C: nop

    // 0x80217420: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80217424:
    // 0x80217424: swc1        $f6, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->f6.u32l;
    // 0x80217428: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8021742C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217434: bne         $t7, $at, L_8021744C
    if (ctx->r15 != ctx->r1) {
        // 0x80217438: lui         $a1, 0x800
        ctx->r5 = S32(0X800 << 16);
            goto L_8021744C;
    }
    // 0x80217438: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021743C: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80217440: addiu       $t8, $t8, -0x6098
    ctx->r24 = ADD32(ctx->r24, -0X6098);
    // 0x80217444: b           L_80217458
    // 0x80217448: sw          $t8, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r24;
        goto L_80217458;
    // 0x80217448: sw          $t8, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r24;
L_8021744C:
    // 0x8021744C: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x80217450: addiu       $t9, $t9, -0x60E0
    ctx->r25 = ADD32(ctx->r25, -0X60E0);
    // 0x80217454: sw          $t9, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r25;
L_80217458:
    // 0x80217458: lwc1        $f10, 0x20($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8021745C: lw          $a3, 0x1C($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X1C);
    // 0x80217460: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80217464: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80217468: lwc1        $f16, 0x24($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8021746C: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80217470: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80217474: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217478: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021747C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80217480: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x80217484: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80217488: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8021748C: addiu       $t8, $zero, 0x4A9
    ctx->r24 = ADD32(0, 0X4A9);
    // 0x80217490: or          $t4, $a2, $at
    ctx->r12 = ctx->r6 | ctx->r1;
    // 0x80217494: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80217498: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021749C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802174A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802174A4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802174A8: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x802174AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802174B0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802174B4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802174B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802174BC: jal         0x8000DBF0
    // 0x802174C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x802174C0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x802174C4: lbu         $t9, 0x5($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5);
    // 0x802174C8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x802174CC: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x802174D0: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x802174D4: addiu       $t3, $t3, -0x4CDC
    ctx->r11 = ADD32(ctx->r11, -0X4CDC);
    // 0x802174D8: sb          $t4, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r12;
    // 0x802174DC: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x802174E0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x802174E4: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x802174E8: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x802174EC: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x802174F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802174F4: lw          $t7, 0x60($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X60);
    // 0x802174F8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802174FC: addiu       $a1, $a1, -0x5F24
    ctx->r5 = ADD32(ctx->r5, -0X5F24);
    // 0x80217500: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80217504: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x80217508: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x8021750C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217510: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80217514: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80217518: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021751C: lbu         $t5, 0x7F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7F);
    // 0x80217520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80217524: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80217528: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x8021752C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80217530: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80217534: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80217538: jal         0x80213E30
    // 0x8021753C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    func_80213E30_67D810(rdram, ctx);
        goto after_5;
    // 0x8021753C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_5:
    // 0x80217540: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80217544:
    // 0x80217544: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80217548: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021754C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80217550: jr          $ra
    // 0x80217554: nop

    TRACE_RETURN()
    return;
    // 0x80217554: nop

;}
RECOMP_FUNC void func_802152BC_67EC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802152BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802152C0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802152C4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802152C8: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x802152CC: swc1        $f14, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f14.u32l;
    // 0x802152D0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802152D4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802152D8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802152DC: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
    // 0x802152E0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802152E4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802152E8: nop

    // 0x802152EC: bc1fl       L_8021530C
    if (!c1cs) {
        // 0x802152F0: lwc1        $f8, 0x4($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8021530C;
    }
    goto skip_0;
    // 0x802152F0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x802152F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802152F8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802152FC: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80215300: b           L_80215310
    // 0x80215304: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80215310;
    // 0x80215304: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80215308: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
L_8021530C:
    // 0x8021530C: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
L_80215310:
    // 0x80215310: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80215314: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80215318: div.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021531C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80215320: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80215324: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80215328: nop

    // 0x8021532C: bc1fl       L_80215344
    if (!c1cs) {
        // 0x80215330: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80215344;
    }
    goto skip_1;
    // 0x80215330: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x80215334: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80215338: b           L_80215344
    // 0x8021533C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80215344;
    // 0x8021533C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80215340: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80215344:
    // 0x80215344: div.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80215348: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021534C: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x80215350: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80215354: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80215358: nop

    // 0x8021535C: bc1fl       L_80215374
    if (!c1cs) {
        // 0x80215360: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80215374;
    }
    goto skip_2;
    // 0x80215360: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_2:
    // 0x80215364: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80215368: b           L_80215374
    // 0x8021536C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80215374;
    // 0x8021536C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80215370: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80215374:
    // 0x80215374: div.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80215378: jr          $ra
    // 0x8021537C: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8021537C: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80227FA8_691988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FA8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80227FAC: sltiu       $at, $a1, 0x12
    ctx->r1 = ctx->r5 < 0X12 ? 1 : 0;
    // 0x80227FB0: beq         $at, $zero, L_80228114
    if (ctx->r1 == 0) {
        // 0x80227FB4: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80228114;
    }
    // 0x80227FB4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80227FB8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80227FBC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227FC0: addu        $at, $at, $t6
    gpr jr_addend_80227FC8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80227FC4: lw          $t6, -0x4E08($at)
    ctx->r14 = ADD32(ctx->r1, -0X4E08);
    // 0x80227FC8: jr          $t6
    // 0x80227FCC: nop

    switch (jr_addend_80227FC8 >> 2) {
        case 0: goto L_802280B8; break;
        case 1: goto L_80228114; break;
        case 2: goto L_80228114; break;
        case 3: goto L_80228114; break;
        case 4: goto L_80228000; break;
        case 5: goto L_80228114; break;
        case 6: goto L_80228114; break;
        case 7: goto L_80227FD0; break;
        case 8: goto L_80228114; break;
        case 9: goto L_80228114; break;
        case 10: goto L_8022808C; break;
        case 11: goto L_80228030; break;
        case 12: goto L_802280E8; break;
        case 13: goto L_80228114; break;
        case 14: goto L_80228114; break;
        case 15: goto L_80228114; break;
        case 16: goto L_80228114; break;
        case 17: goto L_80228060; break;
        default: switch_error(__func__, 0x80227FC8, 0x8022B1F8);
    }
    // 0x80227FCC: nop

L_80227FD0:
    // 0x80227FD0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80227FD4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80227FD8: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x80227FDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227FE0: lwc1        $f4, -0x4DC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4DC0);
    // 0x80227FE4: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80227FE8: addiu       $t8, $t8, 0x4B4
    ctx->r24 = ADD32(ctx->r24, 0X4B4);
    // 0x80227FEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227FF0: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80227FF4: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80227FF8: b           L_80228114
    // 0x80227FFC: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
        goto L_80228114;
    // 0x80227FFC: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_80228000:
    // 0x80228000: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228004: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80228008: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x8022800C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228010: lwc1        $f6, -0x4DBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4DBC);
    // 0x80228014: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80228018: addiu       $t1, $t1, 0x834
    ctx->r9 = ADD32(ctx->r9, 0X834);
    // 0x8022801C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80228020: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80228024: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80228028: b           L_80228114
    // 0x8022802C: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
        goto L_80228114;
    // 0x8022802C: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
L_80228030:
    // 0x80228030: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80228034: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80228038: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022803C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80228040: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80228044: addiu       $t4, $t4, 0xB84
    ctx->r12 = ADD32(ctx->r12, 0XB84);
    // 0x80228048: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8022804C: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x80228050: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80228054: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80228058: b           L_80228114
    // 0x8022805C: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
        goto L_80228114;
    // 0x8022805C: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
L_80228060:
    // 0x80228060: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80228064: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80228068: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022806C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80228070: addiu       $t6, $t6, 0xB84
    ctx->r14 = ADD32(ctx->r14, 0XB84);
    // 0x80228074: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80228078: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8022807C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80228080: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80228084: b           L_80228114
    // 0x80228088: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
        goto L_80228114;
    // 0x80228088: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
L_8022808C:
    // 0x8022808C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80228090: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80228094: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228098: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8022809C: addiu       $t8, $t8, 0x1D88
    ctx->r24 = ADD32(ctx->r24, 0X1D88);
    // 0x802280A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802280A4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802280A8: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802280AC: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x802280B0: b           L_80228114
    // 0x802280B4: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
        goto L_80228114;
    // 0x802280B4: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_802280B8:
    // 0x802280B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802280BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802280C0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802280C4: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x802280C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802280CC: addiu       $t1, $t1, 0x1200
    ctx->r9 = ADD32(ctx->r9, 0X1200);
    // 0x802280D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802280D4: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x802280D8: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802280DC: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x802280E0: b           L_80228114
    // 0x802280E4: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
        goto L_80228114;
    // 0x802280E4: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
L_802280E8:
    // 0x802280E8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802280EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802280F0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802280F4: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x802280F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802280FC: addiu       $t4, $t4, 0x1660
    ctx->r12 = ADD32(ctx->r12, 0X1660);
    // 0x80228100: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80228104: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x80228108: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x8022810C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80228110: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
L_80228114:
    // 0x80228114: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80228118: swc1        $f12, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f12.u32l;
    // 0x8022811C: jr          $ra
    // 0x80228120: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80228120: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802122B0_67BC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802122B4: sb          $t6, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r14;
    // 0x802122B8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x802122BC: lw          $t7, -0x39F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39F4);
    // 0x802122C0: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x802122C4: jr          $ra
    // 0x802122C8: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802122C8: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80216B30_680510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216B30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80216B34: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80216B38: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80216B3C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80216B40: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80216B44: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80216B48: addiu       $a1, $a1, 0x6130
    ctx->r5 = ADD32(ctx->r5, 0X6130);
    // 0x80216B4C: jal         0x80034E08
    // 0x80216B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80216B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80216B54: bne         $v0, $zero, L_80216B64
    if (ctx->r2 != 0) {
        // 0x80216B58: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80216B64;
    }
    // 0x80216B58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80216B5C: b           L_80216D64
    // 0x80216B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216D64;
    // 0x80216B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216B64:
    // 0x80216B64: lbu         $t6, 0x5F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5F);
    // 0x80216B68: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80216B6C: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80216B70: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80216B74: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80216B78: bgez        $t6, L_80216B90
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80216B7C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80216B90;
    }
    // 0x80216B7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80216B80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216B84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80216B88: nop

    // 0x80216B8C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80216B90:
    // 0x80216B90: swc1        $f6, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f6.u32l;
    // 0x80216B94: lbu         $t7, 0x63($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X63);
    // 0x80216B98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216B9C: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80216BA0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80216BA4: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80216BA8: bgez        $t7, L_80216BBC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80216BAC: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80216BBC;
    }
    // 0x80216BAC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80216BB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80216BB4: nop

    // 0x80216BB8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80216BBC:
    // 0x80216BBC: swc1        $f16, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f16.u32l;
    // 0x80216BC0: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x80216BC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216BC8: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x80216BCC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80216BD0: addiu       $t6, $t6, -0x60E0
    ctx->r14 = ADD32(ctx->r14, -0X60E0);
    // 0x80216BD4: bgez        $t8, L_80216BE8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80216BD8: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80216BE8;
    }
    // 0x80216BD8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80216BDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80216BE0: nop

    // 0x80216BE4: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80216BE8:
    // 0x80216BE8: swc1        $f8, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f8.u32l;
    // 0x80216BEC: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x80216BF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216BF4: addiu       $t5, $t5, -0x6098
    ctx->r13 = ADD32(ctx->r13, -0X6098);
    // 0x80216BF8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80216BFC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80216C00: bgez        $t9, L_80216C14
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80216C04: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80216C14;
    }
    // 0x80216C04: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80216C08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80216C0C: nop

    // 0x80216C10: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_80216C14:
    // 0x80216C14: swc1        $f18, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f18.u32l;
    // 0x80216C18: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x80216C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80216C20: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80216C24: bnel        $t4, $at, L_80216C38
    if (ctx->r12 != ctx->r1) {
        // 0x80216C28: sw          $t6, 0xB0($v0)
        MEM_W(0XB0, ctx->r2) = ctx->r14;
            goto L_80216C38;
    }
    goto skip_0;
    // 0x80216C28: sw          $t6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r14;
    skip_0:
    // 0x80216C2C: b           L_80216C38
    // 0x80216C30: sw          $t5, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r13;
        goto L_80216C38;
    // 0x80216C30: sw          $t5, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r13;
    // 0x80216C34: sw          $t6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r14;
L_80216C38:
    // 0x80216C38: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80216C3C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80216C40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216C44: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80216C48: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80216C4C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80216C50: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80216C54: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x80216C58: addiu       $t5, $zero, 0x4AB
    ctx->r13 = ADD32(0, 0X4AB);
    // 0x80216C5C: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x80216C60: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80216C64: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80216C68: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80216C6C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80216C70: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80216C74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80216C78: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80216C7C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80216C80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80216C84: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80216C88: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80216C8C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80216C90: jal         0x8000DBF0
    // 0x80216C94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80216C94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80216C98: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80216C9C: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x80216CA0: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80216CA4: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80216CA8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80216CAC: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x80216CB0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80216CB4: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80216CB8: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x80216CBC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80216CC0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80216CC4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80216CC8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80216CCC: lui         $t3, 0x8FFF
    ctx->r11 = S32(0X8FFF << 16);
    // 0x80216CD0: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80216CD4: lw          $t5, 0xB0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB0);
    // 0x80216CD8: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80216CDC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80216CE0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80216CE4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80216CE8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80216CEC: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x80216CF0: lbu         $t9, 0x5F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5F);
    // 0x80216CF4: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x80216CF8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80216CFC: sll         $t4, $t9, 24
    ctx->r12 = S32(ctx->r25 << 24);
    // 0x80216D00: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x80216D04: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80216D08: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80216D0C: or          $t4, $t8, $t6
    ctx->r12 = ctx->r24 | ctx->r14;
    // 0x80216D10: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80216D14: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80216D18: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80216D1C: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x80216D20: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80216D24: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80216D28: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80216D2C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80216D30: lw          $t2, 0x30($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X30);
    // 0x80216D34: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80216D38: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x80216D3C: and         $t9, $t7, $t4
    ctx->r25 = ctx->r15 & ctx->r12;
    // 0x80216D40: and         $a1, $t9, $t3
    ctx->r5 = ctx->r25 & ctx->r11;
    // 0x80216D44: jal         0x80040620
    // 0x80216D48: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80216D48: and         $a0, $t2, $t3
    ctx->r4 = ctx->r10 & ctx->r11;
    after_2:
    // 0x80216D4C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80216D50: addiu       $a1, $a1, -0x5FAC
    ctx->r5 = ADD32(ctx->r5, -0X5FAC);
    // 0x80216D54: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80216D58: jal         0x80213E30
    // 0x80216D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80213E30_67D810(rdram, ctx);
        goto after_3;
    // 0x80216D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80216D60: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80216D64:
    // 0x80216D64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80216D68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80216D6C: jr          $ra
    // 0x80216D70: nop

    TRACE_RETURN()
    return;
    // 0x80216D70: nop

;}
RECOMP_FUNC void func_80229CC4_6936A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CC4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80229CC8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80229CCC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80229CD0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80229CD4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80229CD8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80229CDC: addiu       $a1, $a1, -0x63F8
    ctx->r5 = ADD32(ctx->r5, -0X63F8);
    // 0x80229CE0: jal         0x80034E08
    // 0x80229CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80229CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80229CE8: bne         $v0, $zero, L_80229CF8
    if (ctx->r2 != 0) {
        // 0x80229CEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80229CF8;
    }
    // 0x80229CEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80229CF0: b           L_80229D74
    // 0x80229CF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80229D74;
    // 0x80229CF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80229CF8:
    // 0x80229CF8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80229CFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229D00: lwc1        $f0, -0x4D50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D50);
    // 0x80229D04: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    // 0x80229D08: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80229D0C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80229D10: addiu       $a1, $a1, 0x7700
    ctx->r5 = ADD32(ctx->r5, 0X7700);
    // 0x80229D14: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    // 0x80229D18: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80229D1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80229D20: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80229D24: swc1        $f8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f8.u32l;
    // 0x80229D28: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80229D2C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80229D30: addiu       $t6, $zero, 0x4E4
    ctx->r14 = ADD32(0, 0X4E4);
    // 0x80229D34: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80229D38: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80229D3C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80229D40: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229D44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229D48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80229D4C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80229D50: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80229D54: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80229D58: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80229D5C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80229D60: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80229D64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80229D68: jal         0x8000DBF0
    // 0x80229D6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80229D6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80229D70: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80229D74:
    // 0x80229D74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80229D78: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80229D7C: jr          $ra
    // 0x80229D80: nop

    TRACE_RETURN()
    return;
    // 0x80229D80: nop

;}
RECOMP_FUNC void func_80212BB8_67C598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212BB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212BBC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212BC0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80212BC4: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80212BC8: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80212BCC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80212BD0: jr          $ra
    // 0x80212BD4: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80212BD4: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021EEEC_6888CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EEEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021EEF0: nop

    // 0x8021EEF4: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x8021EEF8: jr          $ra
    // 0x8021EEFC: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021EEFC: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80224EEC_68E8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224EEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224EF0: jr          $ra
    // 0x80224EF4: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80224EF4: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021B1FC_684BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B1FC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021B200: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021B204: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B208: bgez        $t6, L_8021B220
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021B20C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B220;
    }
    // 0x8021B20C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B210: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B218: nop

    // 0x8021B21C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021B220:
    // 0x8021B220: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x8021B224: swc1        $f0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f0.u32l;
    // 0x8021B228: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B22C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021B230: nop

    // 0x8021B234: bc1fl       L_8021B258
    if (!c1cs) {
        // 0x8021B238: lwc1        $f18, 0x38($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
            goto L_8021B258;
    }
    goto skip_0;
    // 0x8021B238: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    skip_0:
    // 0x8021B23C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B240: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021B244: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021B248: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021B24C: b           L_8021B260
    // 0x8021B250: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B260;
    // 0x8021B250: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021B254: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
L_8021B258:
    // 0x8021B258: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021B25C: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021B260:
    // 0x8021B260: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B264: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021B268: jr          $ra
    // 0x8021B26C: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B26C: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80217BA0_681580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217BA0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80217BA4: jr          $ra
    // 0x80217BA8: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80217BA8: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021B8D8_6852B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B8D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B8DC: jr          $ra
    // 0x8021B8E0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B8E0: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
