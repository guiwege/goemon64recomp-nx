#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80219330_5D4800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219330: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80219334: lhu         $t9, 0x56($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X56);
    // 0x80219338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021933C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80219340: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80219344: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80219348: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021934C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80219350: sh          $t0, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r8;
    // 0x80219354: sb          $a1, 0xD6($a0)
    MEM_B(0XD6, ctx->r4) = ctx->r5;
    // 0x80219358: sb          $a2, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = ctx->r6;
    // 0x8021935C: sb          $a3, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = ctx->r7;
    // 0x80219360: lhu         $t1, 0x52($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X52);
    // 0x80219364: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80219368: sh          $t1, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r9;
    // 0x8021936C: jal         0x80003EA0
    // 0x80219370: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x80219370: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x80219374: lbu         $t2, 0xD4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD4);
    // 0x80219378: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021937C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80219380: bgez        $t2, L_80219394
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80219384: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80219394;
    }
    // 0x80219384: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80219388: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021938C: nop

    // 0x80219390: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80219394:
    // 0x80219394: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80219398: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8021939C: jal         0x80003E10
    // 0x802193A0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x802193A0: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_1:
    // 0x802193A4: lbu         $t3, 0xD5($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD5);
    // 0x802193A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802193AC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x802193B0: bgez        $t3, L_802193C4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802193B4: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802193C4;
    }
    // 0x802193B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802193B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802193BC: nop

    // 0x802193C0: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_802193C4:
    // 0x802193C4: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802193C8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x802193CC: jal         0x80003EA0
    // 0x802193D0: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x802193D0: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_2:
    // 0x802193D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802193D8: jal         0x80003E10
    // 0x802193DC: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x802193DC: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_3:
    // 0x802193E0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802193E4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802193E8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802193EC: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    // 0x802193F0: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802193F4: nop

    // 0x802193F8: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802193FC: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80219400: jal         0x80003E10
    // 0x80219404: swc1        $f8, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_4;
    // 0x80219404: swc1        $f8, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x80219408: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021940C: jal         0x80003EA0
    // 0x80219410: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_5;
    // 0x80219410: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_5:
    // 0x80219414: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219418: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021941C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80219420: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80219424: nop

    // 0x80219428: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021942C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80219430: swc1        $f8, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f8.u32l;
    // 0x80219434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80219438: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021943C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80219440: jr          $ra
    // 0x80219444: nop

    TRACE_RETURN()
    return;
    // 0x80219444: nop

;}
RECOMP_FUNC void func_8020FE74_5CB344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE7C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FE80: jal         0x80013AC4
    // 0x8020FE84: addiu       $a0, $a0, -0x2630
    ctx->r4 = ADD32(ctx->r4, -0X2630);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FE84: addiu       $a0, $a0, -0x2630
    ctx->r4 = ADD32(ctx->r4, -0X2630);
    after_0:
    // 0x8020FE88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE90: jr          $ra
    // 0x8020FE94: nop

    TRACE_RETURN()
    return;
    // 0x8020FE94: nop

;}
RECOMP_FUNC void func_80224B44_5E0014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224B44: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80224B48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224B4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80224B50: addiu       $t6, $a0, 0xB6
    ctx->r14 = ADD32(ctx->r4, 0XB6);
    // 0x80224B54: addiu       $t7, $a0, 0xB5
    ctx->r15 = ADD32(ctx->r4, 0XB5);
    // 0x80224B58: addiu       $t8, $a0, 0xB4
    ctx->r24 = ADD32(ctx->r4, 0XB4);
    // 0x80224B5C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80224B60: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80224B64: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80224B68: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80224B6C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80224B70: jal         0x80224560
    // 0x80224B74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80224560_5DFA30(rdram, ctx);
        goto after_0;
    // 0x80224B74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80224B78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80224B7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224B80: jr          $ra
    // 0x80224B84: nop

    TRACE_RETURN()
    return;
    // 0x80224B84: nop

;}
RECOMP_FUNC void func_8021B868_5D6D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B868: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B86C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021B870: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021B874: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8021B878: lwc1        $f14, 0x10($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8021B87C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021B880: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021B884: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B888: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8021B88C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B890: add.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8021B894: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8021B898: nop

    // 0x8021B89C: bc1tl       L_8021B8BC
    if (c1cs) {
        // 0x8021B8A0: lwc1        $f10, 0x78($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
            goto L_8021B8BC;
    }
    goto skip_0;
    // 0x8021B8A0: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    skip_0:
    // 0x8021B8A4: sub.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x8021B8A8: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8021B8AC: nop

    // 0x8021B8B0: bc1fl       L_8021B8C8
    if (!c1cs) {
        // 0x8021B8B4: lwc1        $f4, 0x8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
            goto L_8021B8C8;
    }
    goto skip_1;
    // 0x8021B8B4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    skip_1:
    // 0x8021B8B8: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
L_8021B8BC:
    // 0x8021B8BC: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x8021B8C0: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x8021B8C4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
L_8021B8C8:
    // 0x8021B8C8: lwc1        $f2, 0x14($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8021B8CC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021B8D0: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021B8D4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8021B8D8: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8021B8DC: nop

    // 0x8021B8E0: bc1tl       L_8021B900
    if (c1cs) {
        // 0x8021B8E4: lwc1        $f10, 0x7C($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
            goto L_8021B900;
    }
    goto skip_2;
    // 0x8021B8E4: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
    skip_2:
    // 0x8021B8E8: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021B8EC: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8021B8F0: nop

    // 0x8021B8F4: bc1fl       L_8021B90C
    if (!c1cs) {
        // 0x8021B8F8: div.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
            goto L_8021B90C;
    }
    goto skip_3;
    // 0x8021B8F8: div.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    skip_3:
    // 0x8021B8FC: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
L_8021B900:
    // 0x8021B900: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x8021B904: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x8021B908: div.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
L_8021B90C:
    // 0x8021B90C: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8021B910: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B914: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8021B918: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x8021B91C: nop

    // 0x8021B920: bc1tl       L_8021B940
    if (c1cs) {
        // 0x8021B924: lwc1        $f8, 0x80($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
            goto L_8021B940;
    }
    goto skip_4;
    // 0x8021B924: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    skip_4:
    // 0x8021B928: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021B92C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x8021B930: nop

    // 0x8021B934: bc1f        L_8021B948
    if (!c1cs) {
        // 0x8021B938: nop
    
            goto L_8021B948;
    }
    // 0x8021B938: nop

    // 0x8021B93C: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
L_8021B940:
    // 0x8021B940: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8021B944: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
L_8021B948:
    // 0x8021B948: jr          $ra
    // 0x8021B94C: nop

    TRACE_RETURN()
    return;
    // 0x8021B94C: nop

;}
RECOMP_FUNC void func_8020FD30_5CB200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FD34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FD38: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FD3C: jal         0x80013AC4
    // 0x8020FD40: addiu       $a0, $a0, -0x27A0
    ctx->r4 = ADD32(ctx->r4, -0X27A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FD40: addiu       $a0, $a0, -0x27A0
    ctx->r4 = ADD32(ctx->r4, -0X27A0);
    after_0:
    // 0x8020FD44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FD48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FD4C: jr          $ra
    // 0x8020FD50: nop

    TRACE_RETURN()
    return;
    // 0x8020FD50: nop

;}
RECOMP_FUNC void func_80214F20_5D03F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214F24: jr          $ra
    // 0x80214F28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214F28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020E6B0_5C9B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E6B8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E6BC: jal         0x80013AC4
    // 0x8020E6C0: addiu       $a0, $a0, -0x385C
    ctx->r4 = ADD32(ctx->r4, -0X385C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E6C0: addiu       $a0, $a0, -0x385C
    ctx->r4 = ADD32(ctx->r4, -0X385C);
    after_0:
    // 0x8020E6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E6C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E6CC: jr          $ra
    // 0x8020E6D0: nop

    TRACE_RETURN()
    return;
    // 0x8020E6D0: nop

;}
RECOMP_FUNC void func_8020E3E0_5C98B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E3E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E3EC: jal         0x80013AC4
    // 0x8020E3F0: addiu       $a0, $a0, -0x3A3C
    ctx->r4 = ADD32(ctx->r4, -0X3A3C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E3F0: addiu       $a0, $a0, -0x3A3C
    ctx->r4 = ADD32(ctx->r4, -0X3A3C);
    after_0:
    // 0x8020E3F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E3F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E3FC: jr          $ra
    // 0x8020E400: nop

    TRACE_RETURN()
    return;
    // 0x8020E400: nop

;}
RECOMP_FUNC void func_8021B7AC_5D6C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B7AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B7B0: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021B7B4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8021B7B8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B7BC: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B7C0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B7C4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B7C8: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B7CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B7D0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B7D4: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B7D8: nop

    // 0x8021B7DC: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021B7E0: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021B7E4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021B7E8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021B7EC: nop

    // 0x8021B7F0: bc1f        L_8021B800
    if (!c1cs) {
        // 0x8021B7F4: nop
    
            goto L_8021B800;
    }
    // 0x8021B7F4: nop

    // 0x8021B7F8: jr          $ra
    // 0x8021B7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8021B7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021B800:
    // 0x8021B800: jr          $ra
    // 0x8021B804: nop

    TRACE_RETURN()
    return;
    // 0x8021B804: nop

;}
RECOMP_FUNC void func_8020EDB8_5CA288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EDB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EDBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EDC0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EDC4: jal         0x80013AC4
    // 0x8020EDC8: addiu       $a0, $a0, -0x3344
    ctx->r4 = ADD32(ctx->r4, -0X3344);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EDC8: addiu       $a0, $a0, -0x3344
    ctx->r4 = ADD32(ctx->r4, -0X3344);
    after_0:
    // 0x8020EDCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EDD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EDD4: jr          $ra
    // 0x8020EDD8: nop

    TRACE_RETURN()
    return;
    // 0x8020EDD8: nop

;}
RECOMP_FUNC void func_8020FCA0_5CB170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FCA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FCA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FCA8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FCAC: jal         0x80013AC4
    // 0x8020FCB0: addiu       $a0, $a0, -0x284C
    ctx->r4 = ADD32(ctx->r4, -0X284C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FCB0: addiu       $a0, $a0, -0x284C
    ctx->r4 = ADD32(ctx->r4, -0X284C);
    after_0:
    // 0x8020FCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FCB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FCBC: jr          $ra
    // 0x8020FCC0: nop

    TRACE_RETURN()
    return;
    // 0x8020FCC0: nop

;}
RECOMP_FUNC void func_8021A67C_5D5B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A67C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021A680: lw          $v0, -0x3344($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3344);
    // 0x8021A684: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021A688: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021A68C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8021A690: bnel        $v0, $zero, L_8021A6A4
    if (ctx->r2 != 0) {
        // 0x8021A694: lw          $v1, 0x0($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X0);
            goto L_8021A6A4;
    }
    goto skip_0;
    // 0x8021A694: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x8021A698: b           L_8021A758
    // 0x8021A69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A758;
    // 0x8021A69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A6A0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_8021A6A4:
    // 0x8021A6A4: lhu         $a0, 0x20($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X20);
    // 0x8021A6A8: beql        $v1, $zero, L_8021A758
    if (ctx->r3 == 0) {
        // 0x8021A6AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021A758;
    }
    goto skip_1;
    // 0x8021A6AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8021A6B0: lhu         $t6, 0x20($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X20);
    // 0x8021A6B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021A6B8: lui         $a2, 0x1000
    ctx->r6 = S32(0X1000 << 16);
    // 0x8021A6BC: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021A6C0: beql        $at, $zero, L_8021A758
    if (ctx->r1 == 0) {
        // 0x8021A6C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021A758;
    }
    goto skip_2;
    // 0x8021A6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8021A6C8: lw          $t7, 0x60($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X60);
L_8021A6CC:
    // 0x8021A6CC: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x8021A6D0: beql        $t8, $zero, L_8021A73C
    if (ctx->r24 == 0) {
        // 0x8021A6D4: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8021A73C;
    }
    goto skip_3;
    // 0x8021A6D4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x8021A6D8: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x8021A6DC: lbu         $a1, 0x99($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X99);
    // 0x8021A6E0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8021A6E4: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8021A6E8: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021A6EC: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021A6F0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8021A6F4: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x8021A6F8: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021A6FC: sub.s       $f16, $f20, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x8021A700: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021A704: mflo        $t9
    ctx->r25 = lo;
    // 0x8021A708: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021A70C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021A710: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8021A714: nop

    // 0x8021A718: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021A71C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021A720: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8021A724: nop

    // 0x8021A728: bc1fl       L_8021A73C
    if (!c1cs) {
        // 0x8021A72C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8021A73C;
    }
    goto skip_4;
    // 0x8021A72C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x8021A730: b           L_8021A758
    // 0x8021A734: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8021A758;
    // 0x8021A734: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021A738: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8021A73C:
    // 0x8021A73C: beql        $v1, $zero, L_8021A758
    if (ctx->r3 == 0) {
        // 0x8021A740: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021A758;
    }
    goto skip_5;
    // 0x8021A740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x8021A744: lhu         $t0, 0x20($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X20);
    // 0x8021A748: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8021A74C: bnel        $at, $zero, L_8021A6CC
    if (ctx->r1 != 0) {
        // 0x8021A750: lw          $t7, 0x60($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X60);
            goto L_8021A6CC;
    }
    goto skip_6;
    // 0x8021A750: lw          $t7, 0x60($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X60);
    skip_6:
    // 0x8021A754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021A758:
    // 0x8021A758: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021A75C: jr          $ra
    // 0x8021A760: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8021A760: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8020E5FC_5C9ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E5FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E604: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E608: jal         0x80013AC4
    // 0x8020E60C: addiu       $a0, $a0, -0x38D8
    ctx->r4 = ADD32(ctx->r4, -0X38D8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E60C: addiu       $a0, $a0, -0x38D8
    ctx->r4 = ADD32(ctx->r4, -0X38D8);
    after_0:
    // 0x8020E610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E618: jr          $ra
    // 0x8020E61C: nop

    TRACE_RETURN()
    return;
    // 0x8020E61C: nop

;}
RECOMP_FUNC void func_8021FBD8_5DB0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FBD8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021FBDC: lui         $t6, 0x8024
    ctx->r14 = S32(0X8024 << 16);
    // 0x8021FBE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021FBE4: addiu       $t6, $t6, -0x7854
    ctx->r14 = ADD32(ctx->r14, -0X7854);
    // 0x8021FBE8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8021FBEC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8021FBF0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021FBF4: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x8021FBF8: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x8021FBFC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021FC00: sh          $at, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r1;
    // 0x8021FC04: bne         $a2, $zero, L_8021FC34
    if (ctx->r6 != 0) {
        // 0x8021FC08: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_8021FC34;
    }
    // 0x8021FC08: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021FC0C: lw          $t0, 0x84($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X84);
    // 0x8021FC10: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021FC14: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8021FC18: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021FC1C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8021FC20: lw          $t1, 0x84($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X84);
    // 0x8021FC24: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021FC28: lwc1        $f10, 0x10($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X10);
    // 0x8021FC2C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021FC30: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_8021FC34:
    // 0x8021FC34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021FC38: bnel        $a2, $at, L_8021FC6C
    if (ctx->r6 != ctx->r1) {
        // 0x8021FC3C: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_8021FC6C;
    }
    goto skip_0;
    // 0x8021FC3C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    skip_0:
    // 0x8021FC40: lw          $t2, 0x84($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X84);
    // 0x8021FC44: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021FC48: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8021FC4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021FC50: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8021FC54: lw          $t3, 0x84($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X84);
    // 0x8021FC58: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021FC5C: lwc1        $f16, 0x10($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X10);
    // 0x8021FC60: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021FC64: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x8021FC68: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
L_8021FC6C:
    // 0x8021FC6C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8021FC70: jal         0x8021FB44
    // 0x8021FC74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8021FB44_5DB014(rdram, ctx);
        goto after_0;
    // 0x8021FC74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021FC78: lhu         $t4, 0x1C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1C);
    // 0x8021FC7C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021FC80: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x8021FC84: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
    // 0x8021FC88: lhu         $t8, 0x20($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X20);
    // 0x8021FC8C: andi        $t7, $t8, 0x3FF
    ctx->r15 = ctx->r24 & 0X3FF;
    // 0x8021FC90: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
    // 0x8021FC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021FC98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021FC9C: jr          $ra
    // 0x8021FCA0: nop

    TRACE_RETURN()
    return;
    // 0x8021FCA0: nop

;}
RECOMP_FUNC void func_8022421C_5DF6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022421C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80224220: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80224224: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80224228: lw          $v1, 0xC0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC0);
    // 0x8022422C: lh          $v0, 0xC8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC8);
    // 0x80224230: lh          $t0, 0xCA($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XCA);
    // 0x80224234: lhu         $t2, 0x6($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X6);
    // 0x80224238: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8022423C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80224240: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x80224244: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80224248: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022424C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80224250: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80224254: lh          $t1, 0xCC($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XCC);
    // 0x80224258: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x8022425C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80224260: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80224264: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80224268: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x8022426C: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x80224270: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80224274: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80224278: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x8022427C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224280: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80224284: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80224288: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8022428C: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x80224290: lhu         $t9, 0x9C($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X9C);
    // 0x80224294: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80224298: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8022429C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802242A0: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x802242A4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802242A8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802242AC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802242B0: jal         0x801CF848
    // 0x802242B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801CF848_58B758(rdram, ctx);
        goto after_0;
    // 0x802242B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x802242B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802242BC: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x802242C0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802242C4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802242C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802242CC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x802242D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802242D4: bc1fl       L_802242E8
    if (!c1cs) {
        // 0x802242D8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802242E8;
    }
    goto skip_0;
    // 0x802242D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x802242DC: b           L_802242E8
    // 0x802242E0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_802242E8;
    // 0x802242E0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x802242E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802242E8:
    // 0x802242E8: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x802242EC: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x802242F0: nop

    // 0x802242F4: bc1fl       L_80224310
    if (!c1cs) {
        // 0x802242F8: sw          $v1, 0xC0($s0)
        MEM_W(0XC0, ctx->r16) = ctx->r3;
            goto L_80224310;
    }
    goto skip_1;
    // 0x802242F8: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    skip_1:
    // 0x802242FC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80224300: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    // 0x80224304: b           L_80224310
    // 0x80224308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80224310;
    // 0x80224308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022430C: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
L_80224310:
    // 0x80224310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80224314: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80224318: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022431C: jr          $ra
    // 0x80224320: nop

    TRACE_RETURN()
    return;
    // 0x80224320: nop

;}
RECOMP_FUNC void func_802109FC_5CBECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802109FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A04: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210A08: jal         0x80013AC4
    // 0x80210A0C: addiu       $a0, $a0, -0x1B14
    ctx->r4 = ADD32(ctx->r4, -0X1B14);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210A0C: addiu       $a0, $a0, -0x1B14
    ctx->r4 = ADD32(ctx->r4, -0X1B14);
    after_0:
    // 0x80210A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210A18: jr          $ra
    // 0x80210A1C: nop

    TRACE_RETURN()
    return;
    // 0x80210A1C: nop

;}
RECOMP_FUNC void func_80210924_5CBDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021092C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210930: jal         0x80013AC4
    // 0x80210934: addiu       $a0, $a0, -0x1BA4
    ctx->r4 = ADD32(ctx->r4, -0X1BA4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210934: addiu       $a0, $a0, -0x1BA4
    ctx->r4 = ADD32(ctx->r4, -0X1BA4);
    after_0:
    // 0x80210938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021093C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210940: jr          $ra
    // 0x80210944: nop

    TRACE_RETURN()
    return;
    // 0x80210944: nop

;}
RECOMP_FUNC void func_80215014_5D04E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215014: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215018: jr          $ra
    // 0x8021501C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021501C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80224B88_5E0058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224B88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80224B8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80224B90: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80224B94: addiu       $a1, $a0, 0xAC
    ctx->r5 = ADD32(ctx->r4, 0XAC);
    // 0x80224B98: addiu       $a2, $a0, 0xAD
    ctx->r6 = ADD32(ctx->r4, 0XAD);
    // 0x80224B9C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80224BA0: beq         $t7, $zero, L_80224BF0
    if (ctx->r15 == 0) {
        // 0x80224BA4: addiu       $a3, $a0, 0xAE
        ctx->r7 = ADD32(ctx->r4, 0XAE);
            goto L_80224BF0;
    }
    // 0x80224BA4: addiu       $a3, $a0, 0xAE
    ctx->r7 = ADD32(ctx->r4, 0XAE);
    // 0x80224BA8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80224BAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80224BB0: jal         0x80224834
    // 0x80224BB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80224834_5DFD04(rdram, ctx);
        goto after_0;
    // 0x80224BB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80224BB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80224BBC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80224BC0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80224BC4: addiu       $a1, $a0, 0xB0
    ctx->r5 = ADD32(ctx->r4, 0XB0);
    // 0x80224BC8: addiu       $a2, $a0, 0xB1
    ctx->r6 = ADD32(ctx->r4, 0XB1);
    // 0x80224BCC: jal         0x80224834
    // 0x80224BD0: addiu       $a3, $a0, 0xB2
    ctx->r7 = ADD32(ctx->r4, 0XB2);
    func_80224834_5DFD04(rdram, ctx);
        goto after_1;
    // 0x80224BD0: addiu       $a3, $a0, 0xB2
    ctx->r7 = ADD32(ctx->r4, 0XB2);
    after_1:
    // 0x80224BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80224BD8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80224BDC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80224BE0: addiu       $a1, $a0, 0xB4
    ctx->r5 = ADD32(ctx->r4, 0XB4);
    // 0x80224BE4: addiu       $a2, $a0, 0xB5
    ctx->r6 = ADD32(ctx->r4, 0XB5);
    // 0x80224BE8: jal         0x80224834
    // 0x80224BEC: addiu       $a3, $a0, 0xB6
    ctx->r7 = ADD32(ctx->r4, 0XB6);
    func_80224834_5DFD04(rdram, ctx);
        goto after_2;
    // 0x80224BEC: addiu       $a3, $a0, 0xB6
    ctx->r7 = ADD32(ctx->r4, 0XB6);
    after_2:
L_80224BF0:
    // 0x80224BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80224BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80224BF8: jr          $ra
    // 0x80224BFC: nop

    TRACE_RETURN()
    return;
    // 0x80224BFC: nop

;}
RECOMP_FUNC void func_80226704_5E1BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022670C: jal         0x80225BB8
    // 0x80226710: nop

    func_80225BB8_5E1088(rdram, ctx);
        goto after_0;
    // 0x80226710: nop

    after_0:
    // 0x80226714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022671C: jr          $ra
    // 0x80226720: nop

    TRACE_RETURN()
    return;
    // 0x80226720: nop

;}
RECOMP_FUNC void func_8020E8F0_5C9DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E8F8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E8FC: jal         0x80013AC4
    // 0x8020E900: addiu       $a0, $a0, -0x36B4
    ctx->r4 = ADD32(ctx->r4, -0X36B4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E900: addiu       $a0, $a0, -0x36B4
    ctx->r4 = ADD32(ctx->r4, -0X36B4);
    after_0:
    // 0x8020E904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E90C: jr          $ra
    // 0x8020E910: nop

    TRACE_RETURN()
    return;
    // 0x8020E910: nop

;}
RECOMP_FUNC void func_8020F088_5CA558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F090: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F094: jal         0x80013AC4
    // 0x8020F098: addiu       $a0, $a0, -0x31E4
    ctx->r4 = ADD32(ctx->r4, -0X31E4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F098: addiu       $a0, $a0, -0x31E4
    ctx->r4 = ADD32(ctx->r4, -0X31E4);
    after_0:
    // 0x8020F09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F0A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F0A4: jr          $ra
    // 0x8020F0A8: nop

    TRACE_RETURN()
    return;
    // 0x8020F0A8: nop

;}
RECOMP_FUNC void func_8020ED70_5CA240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ED70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ED74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ED78: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ED7C: jal         0x80013AC4
    // 0x8020ED80: addiu       $a0, $a0, -0x3390
    ctx->r4 = ADD32(ctx->r4, -0X3390);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ED80: addiu       $a0, $a0, -0x3390
    ctx->r4 = ADD32(ctx->r4, -0X3390);
    after_0:
    // 0x8020ED84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ED88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ED8C: jr          $ra
    // 0x8020ED90: nop

    TRACE_RETURN()
    return;
    // 0x8020ED90: nop

;}
RECOMP_FUNC void func_8020FA3C_5CAF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FA3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FA40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FA44: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FA48: jal         0x80013AC4
    // 0x8020FA4C: addiu       $a0, $a0, -0x2A80
    ctx->r4 = ADD32(ctx->r4, -0X2A80);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FA4C: addiu       $a0, $a0, -0x2A80
    ctx->r4 = ADD32(ctx->r4, -0X2A80);
    after_0:
    // 0x8020FA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FA58: jr          $ra
    // 0x8020FA5C: nop

    TRACE_RETURN()
    return;
    // 0x8020FA5C: nop

;}
RECOMP_FUNC void func_8020FCE8_5CB1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FCE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FCEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FCF0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FCF4: jal         0x80013AC4
    // 0x8020FCF8: addiu       $a0, $a0, -0x27E0
    ctx->r4 = ADD32(ctx->r4, -0X27E0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FCF8: addiu       $a0, $a0, -0x27E0
    ctx->r4 = ADD32(ctx->r4, -0X27E0);
    after_0:
    // 0x8020FCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FD00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FD04: jr          $ra
    // 0x8020FD08: nop

    TRACE_RETURN()
    return;
    // 0x8020FD08: nop

;}
RECOMP_FUNC void func_80210000_5CB4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210008: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021000C: jal         0x80013AC4
    // 0x80210010: addiu       $a0, $a0, -0x2420
    ctx->r4 = ADD32(ctx->r4, -0X2420);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210010: addiu       $a0, $a0, -0x2420
    ctx->r4 = ADD32(ctx->r4, -0X2420);
    after_0:
    // 0x80210014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021001C: jr          $ra
    // 0x80210020: nop

    TRACE_RETURN()
    return;
    // 0x80210020: nop

;}
RECOMP_FUNC void func_8020EB9C_5CA06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EB9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EBA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EBA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EBA8: jal         0x80013AC4
    // 0x8020EBAC: addiu       $a0, $a0, -0x3540
    ctx->r4 = ADD32(ctx->r4, -0X3540);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EBAC: addiu       $a0, $a0, -0x3540
    ctx->r4 = ADD32(ctx->r4, -0X3540);
    after_0:
    // 0x8020EBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EBB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EBB8: jr          $ra
    // 0x8020EBBC: nop

    TRACE_RETURN()
    return;
    // 0x8020EBBC: nop

;}
RECOMP_FUNC void func_8021B5FC_5D6ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B5FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021B600: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
    // 0x8021B604: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    // 0x8021B608: jr          $ra
    // 0x8021B60C: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B60C: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80217360_5D2830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217360: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80217364: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80217368: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8021736C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80217370: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80217374: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217378: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8021737C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80217380: beq         $v1, $zero, L_80217474
    if (ctx->r3 == 0) {
        // 0x80217384: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80217474;
    }
    // 0x80217384: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80217388: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x8021738C: jal         0x80219CA0
    // 0x80217390: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80219CA0_5D5170(rdram, ctx);
        goto after_0;
    // 0x80217390: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80217394: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80217398: beq         $v0, $zero, L_8021746C
    if (ctx->r2 == 0) {
        // 0x8021739C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021746C;
    }
    // 0x8021739C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802173A0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802173A4: lhu         $v0, 0x66($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X66);
    // 0x802173A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802173AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802173B0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802173B4: lwc1        $f0, -0x5AD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AD8);
    // 0x802173B8: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x802173BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802173C0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802173C4: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x802173C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802173CC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x802173D0: lhu         $t9, 0x14($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X14);
    // 0x802173D4: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x802173D8: lhu         $t3, -0x682A($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X682A);
    // 0x802173DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802173E0: lhu         $t0, 0x16($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X16);
    // 0x802173E4: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x802173E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802173EC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802173F0: lhu         $t1, 0x18($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X18);
    // 0x802173F4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802173F8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802173FC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x80217400: or          $t8, $a3, $at
    ctx->r24 = ctx->r7 | ctx->r1;
    // 0x80217404: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80217408: lw          $a1, -0x7844($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7844);
    // 0x8021740C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80217410: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80217414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80217418: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021741C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80217420: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80217424: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80217428: jal         0x8003555C
    // 0x8021742C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_8003555C_3615C(rdram, ctx);
        goto after_1;
    // 0x8021742C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x80217430: beq         $v0, $zero, L_8021746C
    if (ctx->r2 == 0) {
        // 0x80217434: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8021746C;
    }
    // 0x80217434: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80217438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021743C: jal         0x80218C28
    // 0x80217440: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_80218C28_5D40F8(rdram, ctx);
        goto after_2;
    // 0x80217440: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_2:
    // 0x80217444: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80217448: lhu         $t5, 0x66($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X66);
    // 0x8021744C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80217450: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80217454: sh          $t5, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r13;
    // 0x80217458: sh          $t5, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r13;
    // 0x8021745C: lw          $t6, 0xC4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC4);
    // 0x80217460: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80217464: b           L_80217544
    // 0x80217468: sw          $t7, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r15;
        goto L_80217544;
    // 0x80217468: sw          $t7, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r15;
L_8021746C:
    // 0x8021746C: b           L_80217544
    // 0x80217470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217544;
    // 0x80217470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217474:
    // 0x80217474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217478: jal         0x80219CA0
    // 0x8021747C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_80219CA0_5D5170(rdram, ctx);
        goto after_3;
    // 0x8021747C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_3:
    // 0x80217480: beq         $v0, $zero, L_80217540
    if (ctx->r2 == 0) {
        // 0x80217484: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217540;
    }
    // 0x80217484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217488: lhu         $v0, 0x66($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X66);
    // 0x8021748C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80217490: lwc1        $f0, -0x5AD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AD4);
    // 0x80217494: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80217498: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x8021749C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x802174A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802174A4: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x802174A8: lhu         $t1, -0x682A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X682A);
    // 0x802174AC: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x802174B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802174B4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802174B8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x802174BC: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x802174C0: or          $t9, $a3, $at
    ctx->r25 = ctx->r7 | ctx->r1;
    // 0x802174C4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x802174C8: lw          $a1, -0x7844($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7844);
    // 0x802174CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802174D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802174D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802174D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802174DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802174E0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802174E4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802174E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802174EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802174F0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x802174F4: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x802174F8: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x802174FC: jal         0x8003555C
    // 0x80217500: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_8003555C_3615C(rdram, ctx);
        goto after_4;
    // 0x80217500: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_4:
    // 0x80217504: beq         $v0, $zero, L_80217540
    if (ctx->r2 == 0) {
        // 0x80217508: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80217540;
    }
    // 0x80217508: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8021750C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80217510: jal         0x80218C28
    // 0x80217514: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_80218C28_5D40F8(rdram, ctx);
        goto after_5;
    // 0x80217514: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_5:
    // 0x80217518: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x8021751C: lhu         $t3, 0x66($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X66);
    // 0x80217520: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80217524: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80217528: sh          $t3, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r11;
    // 0x8021752C: sh          $t3, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r11;
    // 0x80217530: lw          $t4, 0xC4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC4);
    // 0x80217534: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80217538: b           L_80217544
    // 0x8021753C: sw          $t5, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r13;
        goto L_80217544;
    // 0x8021753C: sw          $t5, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r13;
L_80217540:
    // 0x80217540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217544:
    // 0x80217544: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80217548: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8021754C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80217550: jr          $ra
    // 0x80217554: nop

    TRACE_RETURN()
    return;
    // 0x80217554: nop

;}
RECOMP_FUNC void func_802109B4_5CBE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802109B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802109B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802109BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802109C0: jal         0x80013AC4
    // 0x802109C4: addiu       $a0, $a0, -0x1B40
    ctx->r4 = ADD32(ctx->r4, -0X1B40);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802109C4: addiu       $a0, $a0, -0x1B40
    ctx->r4 = ADD32(ctx->r4, -0X1B40);
    after_0:
    // 0x802109C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802109CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802109D0: jr          $ra
    // 0x802109D4: nop

    TRACE_RETURN()
    return;
    // 0x802109D4: nop

;}
RECOMP_FUNC void func_802112EC_5CC7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802112F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802112F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802112F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802112FC: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80211300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211308: jal         0x8021A26C
    // 0x8021130C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x8021130C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80211310: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211314: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80211318: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x8021131C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80211320: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211324: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80211328: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x8021132C: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x80211330: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x80211334: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211338: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8021133C: addiu       $a0, $a0, 0x135C
    ctx->r4 = ADD32(ctx->r4, 0X135C);
    // 0x80211340: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80211344: jal         0x8003521C
    // 0x80211348: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80211348: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x8021134C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211354: jr          $ra
    // 0x80211358: nop

    TRACE_RETURN()
    return;
    // 0x80211358: nop

;}
RECOMP_FUNC void func_80222C34_5DE104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222C3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80222C40: lwc1        $f4, 0xC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x80222C44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80222C48: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80222C4C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80222C50: jal         0x802197D8
    // 0x80222C54: nop

    func_802197D8_5D4CA8(rdram, ctx);
        goto after_0;
    // 0x80222C54: nop

    after_0:
    // 0x80222C58: bne         $v0, $zero, L_80222C68
    if (ctx->r2 != 0) {
        // 0x80222C5C: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_80222C68;
    }
    // 0x80222C5C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80222C60: jal         0x8003521C
    // 0x80222C64: lw          $a0, 0xBC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80222C64: lw          $a0, 0xBC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XBC);
    after_1:
L_80222C68:
    // 0x80222C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222C70: jr          $ra
    // 0x80222C74: nop

    TRACE_RETURN()
    return;
    // 0x80222C74: nop

;}
RECOMP_FUNC void func_8020F5BC_5CAA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F5C4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F5C8: jal         0x80013AC4
    // 0x8020F5CC: addiu       $a0, $a0, -0x2E54
    ctx->r4 = ADD32(ctx->r4, -0X2E54);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F5CC: addiu       $a0, $a0, -0x2E54
    ctx->r4 = ADD32(ctx->r4, -0X2E54);
    after_0:
    // 0x8020F5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F5D8: jr          $ra
    // 0x8020F5DC: nop

    TRACE_RETURN()
    return;
    // 0x8020F5DC: nop

;}
RECOMP_FUNC void func_8020E5B4_5C9A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E5B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E5B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E5BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E5C0: jal         0x80013AC4
    // 0x8020E5C4: addiu       $a0, $a0, -0x3924
    ctx->r4 = ADD32(ctx->r4, -0X3924);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E5C4: addiu       $a0, $a0, -0x3924
    ctx->r4 = ADD32(ctx->r4, -0X3924);
    after_0:
    // 0x8020E5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E5D0: jr          $ra
    // 0x8020E5D4: nop

    TRACE_RETURN()
    return;
    // 0x8020E5D4: nop

;}
RECOMP_FUNC void func_80223CE0_5DF1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223CE8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80223CEC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80223CF0: lw          $a1, 0x7740($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7740);
    // 0x80223CF4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x80223CF8: jal         0x80223D40
    // 0x80223CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80223D40_5DF210(rdram, ctx);
        goto after_0;
    // 0x80223CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80223D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223D08: jr          $ra
    // 0x80223D0C: nop

    TRACE_RETURN()
    return;
    // 0x80223D0C: nop

;}
RECOMP_FUNC void func_80215038_5D0508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215038: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021503C: jr          $ra
    // 0x80215040: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215040: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210E10_5CC2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210E18: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210E1C: jal         0x80013AC4
    // 0x80210E20: addiu       $a0, $a0, -0x18A8
    ctx->r4 = ADD32(ctx->r4, -0X18A8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210E20: addiu       $a0, $a0, -0x18A8
    ctx->r4 = ADD32(ctx->r4, -0X18A8);
    after_0:
    // 0x80210E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210E28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210E2C: jr          $ra
    // 0x80210E30: nop

    TRACE_RETURN()
    return;
    // 0x80210E30: nop

;}
RECOMP_FUNC void func_8020ECE0_5CA1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ECE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ECE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ECE8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ECEC: jal         0x80013AC4
    // 0x8020ECF0: addiu       $a0, $a0, -0x340C
    ctx->r4 = ADD32(ctx->r4, -0X340C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ECF0: addiu       $a0, $a0, -0x340C
    ctx->r4 = ADD32(ctx->r4, -0X340C);
    after_0:
    // 0x8020ECF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ECF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ECFC: jr          $ra
    // 0x8020ED00: nop

    TRACE_RETURN()
    return;
    // 0x8020ED00: nop

;}
RECOMP_FUNC void func_80219E40_5D5310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219E40: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80219E44: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80219E48: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80219E4C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80219E50: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80219E54: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80219E58: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80219E5C: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80219E60: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x80219E64: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80219E68: jr          $ra
    // 0x80219E6C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80219E6C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80211F70_5CD440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211F70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211F80: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80211F84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211F88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80211F8C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80211F90: bne         $v0, $zero, L_8021200C
    if (ctx->r2 != 0) {
        // 0x80211F94: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_8021200C;
    }
    // 0x80211F94: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80211F98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80211F9C: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80211FA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80211FA4: addiu       $t8, $zero, 0x22A
    ctx->r24 = ADD32(0, 0X22A);
    // 0x80211FA8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80211FAC: addiu       $t9, $zero, 0xFC
    ctx->r25 = ADD32(0, 0XFC);
    // 0x80211FB0: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x80211FB4: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x80211FB8: bc1f        L_80211FCC
    if (!c1cs) {
        // 0x80211FBC: sb          $t9, 0xD0($a0)
        MEM_B(0XD0, ctx->r4) = ctx->r25;
            goto L_80211FCC;
    }
    // 0x80211FBC: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x80211FC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211FC4: lwc1        $f8, -0x60F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X60F0);
    // 0x80211FC8: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
L_80211FCC:
    // 0x80211FCC: jal         0x80216DF8
    // 0x80211FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_0;
    // 0x80211FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80211FD4: jal         0x8021A310
    // 0x80211FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_1;
    // 0x80211FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80211FDC: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80211FE0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80211FE4: jal         0x80219E08
    // 0x80211FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_2;
    // 0x80211FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80211FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80211FF4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80211FF8: jal         0x80224ABC
    // 0x80211FFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_3;
    // 0x80211FFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80212000: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212004: jal         0x8003521C
    // 0x80212008: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80212008: addiu       $a0, $a0, 0x2020
    ctx->r4 = ADD32(ctx->r4, 0X2020);
    after_4:
L_8021200C:
    // 0x8021200C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80212010: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80212014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80212018: jr          $ra
    // 0x8021201C: nop

    TRACE_RETURN()
    return;
    // 0x8021201C: nop

;}
RECOMP_FUNC void func_80210C3C_5CC10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210C44: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210C48: jal         0x80013AC4
    // 0x80210C4C: addiu       $a0, $a0, -0x19BC
    ctx->r4 = ADD32(ctx->r4, -0X19BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210C4C: addiu       $a0, $a0, -0x19BC
    ctx->r4 = ADD32(ctx->r4, -0X19BC);
    after_0:
    // 0x80210C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210C58: jr          $ra
    // 0x80210C5C: nop

    TRACE_RETURN()
    return;
    // 0x80210C5C: nop

;}
RECOMP_FUNC void func_8021C628_5D7AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C628: lhu         $t6, 0x94($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X94);
    // 0x8021C62C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C634: andi        $t7, $t6, 0x41F
    ctx->r15 = ctx->r14 & 0X41F;
    // 0x8021C638: beq         $t7, $zero, L_8021C64C
    if (ctx->r15 == 0) {
        // 0x8021C63C: nop
    
            goto L_8021C64C;
    }
    // 0x8021C63C: nop

    // 0x8021C640: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x8021C644: jr          $ra
    // 0x8021C648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8021C648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021C64C:
    // 0x8021C64C: jr          $ra
    // 0x8021C650: nop

    TRACE_RETURN()
    return;
    // 0x8021C650: nop

;}
RECOMP_FUNC void func_802111DC_5CC6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802111DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802111E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802111E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802111E8: jal         0x80013AC4
    // 0x802111EC: addiu       $a0, $a0, -0x1654
    ctx->r4 = ADD32(ctx->r4, -0X1654);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802111EC: addiu       $a0, $a0, -0x1654
    ctx->r4 = ADD32(ctx->r4, -0X1654);
    after_0:
    // 0x802111F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802111F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802111F8: jr          $ra
    // 0x802111FC: nop

    TRACE_RETURN()
    return;
    // 0x802111FC: nop

;}
RECOMP_FUNC void func_802220E0_5DD5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802220E0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802220E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802220E8: lbu         $v1, 0x7743($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7743);
    // 0x802220EC: lw          $v0, -0x3A04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A04);
    // 0x802220F0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802220F4: beq         $at, $zero, L_80222104
    if (ctx->r1 == 0) {
        // 0x802220F8: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_80222104;
    }
    // 0x802220F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802220FC: jr          $ra
    // 0x80222100: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80222100: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
L_80222104:
    // 0x80222104: bne         $v0, $v1, L_8022211C
    if (ctx->r2 != ctx->r3) {
        // 0x80222108: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_8022211C;
    }
    // 0x80222108: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8022210C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80222110: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222114: jr          $ra
    // 0x80222118: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80222118: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
L_8022211C:
    // 0x8022211C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80222120: sw          $t7, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r15;
    // 0x80222124: jr          $ra
    // 0x80222128: nop

    TRACE_RETURN()
    return;
    // 0x80222128: nop

;}
RECOMP_FUNC void func_8020E644_5C9B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E64C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E650: jal         0x80013AC4
    // 0x8020E654: addiu       $a0, $a0, -0x38C0
    ctx->r4 = ADD32(ctx->r4, -0X38C0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E654: addiu       $a0, $a0, -0x38C0
    ctx->r4 = ADD32(ctx->r4, -0X38C0);
    after_0:
    // 0x8020E658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E660: jr          $ra
    // 0x8020E664: nop

    TRACE_RETURN()
    return;
    // 0x8020E664: nop

;}
RECOMP_FUNC void func_8021B4FC_5D69CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B4FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B504: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021B508: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021B50C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B510: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B514: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B518: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B51C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021B520: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8021B524: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B528: jal         0x8021ADD0
    // 0x8021B52C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021B52C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8021B530: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021B534: addiu       $t6, $v0, -0x200
    ctx->r14 = ADD32(ctx->r2, -0X200);
    // 0x8021B538: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B53C: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x8021B540: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8021B544: sh          $t8, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r24;
    // 0x8021B548: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x8021B54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B554: jr          $ra
    // 0x8021B558: nop

    TRACE_RETURN()
    return;
    // 0x8021B558: nop

;}
RECOMP_FUNC void func_80222344_5DD814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222344: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80222348: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8022234C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80222350: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80222354: addiu       $v0, $v0, -0x667C
    ctx->r2 = ADD32(ctx->r2, -0X667C);
    // 0x80222358: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8022235C: nop

    // 0x80222360: bc1t        L_80222394
    if (c1cs) {
        // 0x80222364: nop
    
            goto L_80222394;
    }
    // 0x80222364: nop

    // 0x80222368: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8022236C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80222370: div.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80222374: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x80222378: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8022237C: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80222380: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80222384: mul.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x80222388: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8022238C: jr          $ra
    // 0x80222390: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80222390: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
L_80222394:
    // 0x80222394: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80222398: lwc1        $f0, -0x555C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X555C);
    // 0x8022239C: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x802223A0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x802223A4: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x802223A8: jr          $ra
    // 0x802223AC: nop

    TRACE_RETURN()
    return;
    // 0x802223AC: nop

;}
RECOMP_FUNC void func_80222A94_5DDF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80222A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222A9C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80222AA0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80222AA4: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80222AA8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80222AAC: jal         0x800419B0
    // 0x80222AB0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    __cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x80222AB0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x80222AB4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80222AB8: jal         0x800417F0
    // 0x80222ABC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x80222ABC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80222AC0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80222AC4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80222AC8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80222ACC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80222AD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80222AD4: nop

    // 0x80222AD8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80222ADC: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80222AE0: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80222AE4: jal         0x800417F0
    // 0x80222AE8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80222AE8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80222AEC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80222AF0: jal         0x800419B0
    // 0x80222AF4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x80222AF4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80222AF8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80222AFC: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80222B00: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80222B04: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80222B08: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80222B0C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80222B10: nop

    // 0x80222B14: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80222B18: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80222B1C: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80222B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80222B28: jr          $ra
    // 0x80222B2C: nop

    TRACE_RETURN()
    return;
    // 0x80222B2C: nop

;}
RECOMP_FUNC void func_8021057C_5CBA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021057C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210584: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210588: jal         0x80013AC4
    // 0x8021058C: addiu       $a0, $a0, -0x1EA0
    ctx->r4 = ADD32(ctx->r4, -0X1EA0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021058C: addiu       $a0, $a0, -0x1EA0
    ctx->r4 = ADD32(ctx->r4, -0X1EA0);
    after_0:
    // 0x80210590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210598: jr          $ra
    // 0x8021059C: nop

    TRACE_RETURN()
    return;
    // 0x8021059C: nop

;}
RECOMP_FUNC void func_8020E308_5C97D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E30C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E310: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E314: jal         0x80013AC4
    // 0x8020E318: addiu       $a0, $a0, -0x3A6C
    ctx->r4 = ADD32(ctx->r4, -0X3A6C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E318: addiu       $a0, $a0, -0x3A6C
    ctx->r4 = ADD32(ctx->r4, -0X3A6C);
    after_0:
    // 0x8020E31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E324: jr          $ra
    // 0x8020E328: nop

    TRACE_RETURN()
    return;
    // 0x8020E328: nop

;}
