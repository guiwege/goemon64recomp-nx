#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80222BBC_5DE08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222BC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80222BC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80222BCC: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x80222BD0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80222BD4: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x80222BD8: bne         $t6, $zero, L_80222C00
    if (ctx->r14 != 0) {
        // 0x80222BDC: andi        $t7, $v0, 0x40
        ctx->r15 = ctx->r2 & 0X40;
            goto L_80222C00;
    }
    // 0x80222BDC: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x80222BE0: beql        $t7, $zero, L_80222BFC
    if (ctx->r15 == 0) {
        // 0x80222BE4: lwc1        $f4, 0xC0($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0XC0);
            goto L_80222BFC;
    }
    goto skip_0;
    // 0x80222BE4: lwc1        $f4, 0xC0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC0);
    skip_0:
    // 0x80222BE8: jal         0x8003521C
    // 0x80222BEC: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80222BEC: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    after_0:
    // 0x80222BF0: b           L_80222C04
    // 0x80222BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80222C04;
    // 0x80222BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222BF8: lwc1        $f4, 0xC0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC0);
L_80222BFC:
    // 0x80222BFC: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
L_80222C00:
    // 0x80222C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80222C04:
    // 0x80222C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222C08: jr          $ra
    // 0x80222C0C: nop

    TRACE_RETURN()
    return;
    // 0x80222C0C: nop

;}
RECOMP_FUNC void func_80210D80_5CC250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210D88: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210D8C: jal         0x80013AC4
    // 0x80210D90: addiu       $a0, $a0, -0x18F8
    ctx->r4 = ADD32(ctx->r4, -0X18F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210D90: addiu       $a0, $a0, -0x18F8
    ctx->r4 = ADD32(ctx->r4, -0X18F8);
    after_0:
    // 0x80210D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210D9C: jr          $ra
    // 0x80210DA0: nop

    TRACE_RETURN()
    return;
    // 0x80210DA0: nop

;}
RECOMP_FUNC void func_8021B988_5D6E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B98C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8021B990: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021B994: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021B998: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B99C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8021B9A0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B9A4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021B9A8: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8021B9AC: sub.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021B9B0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B9B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021B9B8: sub.s       $f2, $f20, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x8021B9BC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021B9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B9C4: sub.s       $f16, $f22, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x8021B9C8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B9CC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021B9D0: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021B9D4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021B9D8: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021B9DC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021B9E0: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8021B9E4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8021B9E8: nop

    // 0x8021B9EC: bc1fl       L_8021BA08
    if (!c1cs) {
        // 0x8021B9F0: div.s       $f6, $f14, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
            goto L_8021BA08;
    }
    goto skip_0;
    // 0x8021B9F0: div.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    skip_0:
    // 0x8021B9F4: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x8021B9F8: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x8021B9FC: b           L_8021BAF4
    // 0x8021BA00: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
        goto L_8021BAF4;
    // 0x8021BA00: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x8021BA04: div.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
L_8021BA08:
    // 0x8021BA08: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021BA0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021BA10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021BA14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021BA18: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021BA1C: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021BA20: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021BA24: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021BA28: sub.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x8021BA2C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021BA30: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021BA34: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x8021BA38: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BA3C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021BA40: sub.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x8021BA44: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021BA48: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021BA4C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021BA50: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x8021BA54: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8021BA58: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021BA5C: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021BA60: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8021BA64: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021BA68: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021BA6C: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8021BA70: nop

    // 0x8021BA74: bc1tl       L_8021BAD8
    if (c1cs) {
        // 0x8021BA78: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021BAD8;
    }
    goto skip_1;
    // 0x8021BA78: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_1:
    // 0x8021BA7C: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021BA80: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021BA84: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8021BA88: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x8021BA8C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8021BA90: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x8021BA94: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021BA98: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8021BA9C: nop

    // 0x8021BAA0: bc1tl       L_8021BAD8
    if (c1cs) {
        // 0x8021BAA4: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021BAD8;
    }
    goto skip_2;
    // 0x8021BAA4: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_2:
    // 0x8021BAA8: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021BAAC: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BAB0: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8021BAB4: sub.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x8021BAB8: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8021BABC: sub.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x8021BAC0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021BAC4: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8021BAC8: nop

    // 0x8021BACC: bc1fl       L_8021BAF4
    if (!c1cs) {
        // 0x8021BAD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8021BAF4;
    }
    goto skip_3;
    // 0x8021BAD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x8021BAD4: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_8021BAD8:
    // 0x8021BAD8: swc1        $f20, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f20.u32l;
    // 0x8021BADC: swc1        $f22, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f22.u32l;
    // 0x8021BAE0: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x8021BAE4: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x8021BAE8: b           L_8021BAF4
    // 0x8021BAEC: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
        goto L_8021BAF4;
    // 0x8021BAEC: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x8021BAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021BAF4:
    // 0x8021BAF4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021BAF8: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8021BAFC: jr          $ra
    // 0x8021BB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8021BB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80210EE8_5CC3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210EF0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210EF4: jal         0x80013AC4
    // 0x80210EF8: addiu       $a0, $a0, -0x181C
    ctx->r4 = ADD32(ctx->r4, -0X181C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210EF8: addiu       $a0, $a0, -0x181C
    ctx->r4 = ADD32(ctx->r4, -0X181C);
    after_0:
    // 0x80210EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F04: jr          $ra
    // 0x80210F08: nop

    TRACE_RETURN()
    return;
    // 0x80210F08: nop

;}
RECOMP_FUNC void func_8021EC70_5DA140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EC70: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021EC74: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021EC78: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8021EC7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021EC80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021EC84: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021EC88: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021EC8C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021EC90: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8021EC94: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021EC98: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021EC9C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021ECA0: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021ECA4: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8021ECA8: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8021ECAC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021ECB0: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x8021ECB4: nop

    // 0x8021ECB8: bc1tl       L_8021ED50
    if (c1cs) {
        // 0x8021ECBC: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021ED50;
    }
    goto skip_0;
    // 0x8021ECBC: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_0:
    // 0x8021ECC0: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021ECC4: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021ECC8: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8021ECCC: sub.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x8021ECD0: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8021ECD4: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8021ECD8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021ECDC: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x8021ECE0: nop

    // 0x8021ECE4: bc1tl       L_8021ED50
    if (c1cs) {
        // 0x8021ECE8: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021ED50;
    }
    goto skip_1;
    // 0x8021ECE8: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_1:
    // 0x8021ECEC: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021ECF0: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021ECF4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021ECF8: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8021ECFC: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021ED00: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8021ED04: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8021ED08: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021ED0C: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x8021ED10: nop

    // 0x8021ED14: bc1tl       L_8021ED50
    if (c1cs) {
        // 0x8021ED18: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021ED50;
    }
    goto skip_2;
    // 0x8021ED18: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_2:
    // 0x8021ED1C: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8021ED20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021ED24: bc1f        L_8021ED70
    if (!c1cs) {
        // 0x8021ED28: nop
    
            goto L_8021ED70;
    }
    // 0x8021ED28: nop

    // 0x8021ED2C: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x8021ED30: nop

    // 0x8021ED34: bc1f        L_8021ED70
    if (!c1cs) {
        // 0x8021ED38: nop
    
            goto L_8021ED70;
    }
    // 0x8021ED38: nop

    // 0x8021ED3C: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x8021ED40: nop

    // 0x8021ED44: bc1f        L_8021ED70
    if (!c1cs) {
        // 0x8021ED48: nop
    
            goto L_8021ED70;
    }
    // 0x8021ED48: nop

    // 0x8021ED4C: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_8021ED50:
    // 0x8021ED50: swc1        $f14, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f14.u32l;
    // 0x8021ED54: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021ED58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021ED5C: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8021ED60: swc1        $f20, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f20.u32l;
    // 0x8021ED64: swc1        $f20, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f20.u32l;
    // 0x8021ED68: b           L_8021ED70
    // 0x8021ED6C: swc1        $f20, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f20.u32l;
        goto L_8021ED70;
    // 0x8021ED6C: swc1        $f20, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f20.u32l;
L_8021ED70:
    // 0x8021ED70: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021ED74: jr          $ra
    // 0x8021ED78: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8021ED78: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8020EF20_5CA3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EF20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EF28: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EF2C: jal         0x80013AC4
    // 0x8020EF30: addiu       $a0, $a0, -0x324C
    ctx->r4 = ADD32(ctx->r4, -0X324C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EF30: addiu       $a0, $a0, -0x324C
    ctx->r4 = ADD32(ctx->r4, -0X324C);
    after_0:
    // 0x8020EF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EF38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EF3C: jr          $ra
    // 0x8020EF40: nop

    TRACE_RETURN()
    return;
    // 0x8020EF40: nop

;}
RECOMP_FUNC void func_802196FC_5D4BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802196FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80219700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80219704: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80219708: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021970C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80219710: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80219714: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80219718: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021971C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80219720: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80219724: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80219728: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021972C: jal         0x8021ADD0
    // 0x80219730: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x80219730: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80219734: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80219738: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8021973C: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80219740: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x80219744: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80219748: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8021974C: subu        $t2, $v0, $t0
    ctx->r10 = SUB32(ctx->r2, ctx->r8);
    // 0x80219750: addiu       $t3, $t2, 0x200
    ctx->r11 = ADD32(ctx->r10, 0X200);
    // 0x80219754: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80219758: addiu       $a3, $t4, -0x200
    ctx->r7 = ADD32(ctx->r12, -0X200);
    // 0x8021975C: bgez        $a3, L_80219770
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80219760: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_80219770;
    }
    // 0x80219760: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80219764: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x80219768: b           L_80219774
    // 0x8021976C: subu        $v0, $t5, $t4
    ctx->r2 = SUB32(ctx->r13, ctx->r12);
        goto L_80219774;
    // 0x8021976C: subu        $v0, $t5, $t4
    ctx->r2 = SUB32(ctx->r13, ctx->r12);
L_80219770:
    // 0x80219770: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80219774:
    // 0x80219774: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80219778: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021977C: beq         $at, $zero, L_80219794
    if (ctx->r1 == 0) {
        // 0x80219780: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80219794;
    }
    // 0x80219780: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80219784: andi        $t7, $t1, 0x3FF
    ctx->r15 = ctx->r9 & 0X3FF;
    // 0x80219788: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x8021978C: b           L_802197C8
    // 0x80219790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802197C8;
    // 0x80219790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80219794:
    // 0x80219794: slti        $at, $a2, 0x200
    ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
    // 0x80219798: bne         $at, $zero, L_802197B8
    if (ctx->r1 != 0) {
        // 0x8021979C: subu        $t4, $t0, $v1
        ctx->r12 = SUB32(ctx->r8, ctx->r3);
            goto L_802197B8;
    }
    // 0x8021979C: subu        $t4, $t0, $v1
    ctx->r12 = SUB32(ctx->r8, ctx->r3);
    // 0x802197A0: addu        $t9, $t0, $v1
    ctx->r25 = ADD32(ctx->r8, ctx->r3);
    // 0x802197A4: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x802197A8: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x802197AC: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x802197B0: b           L_802197C8
    // 0x802197B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802197C8;
    // 0x802197B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802197B8:
    // 0x802197B8: sh          $t4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r12;
    // 0x802197BC: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x802197C0: sh          $t5, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r13;
    // 0x802197C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802197C8:
    // 0x802197C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802197CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802197D0: jr          $ra
    // 0x802197D4: nop

    TRACE_RETURN()
    return;
    // 0x802197D4: nop

;}
RECOMP_FUNC void func_80210A8C_5CBF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210A94: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210A98: jal         0x80013AC4
    // 0x80210A9C: addiu       $a0, $a0, -0x1AC0
    ctx->r4 = ADD32(ctx->r4, -0X1AC0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210A9C: addiu       $a0, $a0, -0x1AC0
    ctx->r4 = ADD32(ctx->r4, -0X1AC0);
    after_0:
    // 0x80210AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210AA8: jr          $ra
    // 0x80210AAC: nop

    TRACE_RETURN()
    return;
    // 0x80210AAC: nop

;}
RECOMP_FUNC void func_8020F820_5CACF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F828: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F82C: jal         0x80013AC4
    // 0x8020F830: addiu       $a0, $a0, -0x2C2C
    ctx->r4 = ADD32(ctx->r4, -0X2C2C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F830: addiu       $a0, $a0, -0x2C2C
    ctx->r4 = ADD32(ctx->r4, -0X2C2C);
    after_0:
    // 0x8020F834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F83C: jr          $ra
    // 0x8020F840: nop

    TRACE_RETURN()
    return;
    // 0x8020F840: nop

;}
RECOMP_FUNC void func_8020F3E8_5CA8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F3F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F3F4: jal         0x80013AC4
    // 0x8020F3F8: addiu       $a0, $a0, -0x2EDC
    ctx->r4 = ADD32(ctx->r4, -0X2EDC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F3F8: addiu       $a0, $a0, -0x2EDC
    ctx->r4 = ADD32(ctx->r4, -0X2EDC);
    after_0:
    // 0x8020F3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F404: jr          $ra
    // 0x8020F408: nop

    TRACE_RETURN()
    return;
    // 0x8020F408: nop

;}
RECOMP_FUNC void func_8020DF18_5C93E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DF18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DF1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DF20: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DF24: jal         0x80013AC4
    // 0x8020DF28: addiu       $a0, $a0, -0x3D0C
    ctx->r4 = ADD32(ctx->r4, -0X3D0C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DF28: addiu       $a0, $a0, -0x3D0C
    ctx->r4 = ADD32(ctx->r4, -0X3D0C);
    after_0:
    // 0x8020DF2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DF30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DF34: jr          $ra
    // 0x8020DF38: nop

    TRACE_RETURN()
    return;
    // 0x8020DF38: nop

;}
RECOMP_FUNC void func_8022400C_5DF4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022400C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80224010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80224014: jal         0x8022403C
    // 0x80224018: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8022403C_5DF50C(rdram, ctx);
        goto after_0;
    // 0x80224018: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8022401C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80224020: jal         0x802241AC
    // 0x80224024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_802241AC_5DF67C(rdram, ctx);
        goto after_1;
    // 0x80224024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80224028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022402C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80224030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80224034: jr          $ra
    // 0x80224038: nop

    TRACE_RETURN()
    return;
    // 0x80224038: nop

;}
RECOMP_FUNC void func_8021ACA4_5D6174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021ACA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021ACA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021ACAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021ACB0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8021ACB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021ACB8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x8021ACBC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8021ACC0: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x8021ACC4: jalr        $t9
    // 0x8021ACC8: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021ACC8: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_0:
    // 0x8021ACCC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8021ACD0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8021ACD4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8021ACD8: lbu         $t8, 0x9A($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X9A);
    // 0x8021ACDC: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x8021ACE0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8021ACE4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8021ACE8: nop

    // 0x8021ACEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021ACF0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021ACF4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8021ACF8: jalr        $t9
    // 0x8021ACFC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021ACFC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_1:
    // 0x8021AD00: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8021AD04: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8021AD08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021AD0C: lbu         $t3, 0x9A($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X9A);
    // 0x8021AD10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021AD14: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021AD18: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021AD1C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8021AD20: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021AD24: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021AD28: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021AD2C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021AD30: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x8021AD34: addiu       $v1, $v1, -0x61F8
    ctx->r3 = ADD32(ctx->r3, -0X61F8);
    // 0x8021AD38: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8021AD3C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021AD40: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021AD44: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021AD48: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8021AD4C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8021AD50: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8021AD54: jalr        $v1
    // 0x8021AD58: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x8021AD58: nop

    after_2:
    // 0x8021AD5C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8021AD60: bne         $v0, $zero, L_8021AD70
    if (ctx->r2 != 0) {
        // 0x8021AD64: lwc1        $f2, 0x24($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8021AD70;
    }
    // 0x8021AD64: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021AD68: b           L_8021ADB0
    // 0x8021AD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021ADB0;
    // 0x8021AD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021AD70:
    // 0x8021AD70: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8021AD74: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8021AD78: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021AD7C: add.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8021AD80: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021AD84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021AD88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021AD8C: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8021AD90: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8021AD94: jalr        $v1
    // 0x8021AD98: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x8021AD98: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    after_3:
    // 0x8021AD9C: beql        $v0, $zero, L_8021ADB0
    if (ctx->r2 == 0) {
        // 0x8021ADA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8021ADB0;
    }
    goto skip_0;
    // 0x8021ADA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8021ADA4: b           L_8021ADB0
    // 0x8021ADA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021ADB0;
    // 0x8021ADA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8021ADAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021ADB0:
    // 0x8021ADB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021ADB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021ADB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021ADBC: jr          $ra
    // 0x8021ADC0: nop

    TRACE_RETURN()
    return;
    // 0x8021ADC0: nop

;}
RECOMP_FUNC void func_8021DFFC_5D94CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DFFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E004: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021E008: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021E00C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021E010: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x8021E014: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021E018: addiu       $t9, $t9, -0x79C8
    ctx->r25 = ADD32(ctx->r25, -0X79C8);
    // 0x8021E01C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021E020: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021E024: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021E028: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021E02C: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021E030: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021E034: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021E038: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E03C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021E040: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021E044: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021E048: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021E04C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021E050: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021E054: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021E058: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021E05C: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021E060: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021E064: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021E068: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021E06C: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021E070: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021E074: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021E078: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021E07C: jal         0x80040620
    // 0x8021E080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021E080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021E084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E088: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021E08C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021E090: jr          $ra
    // 0x8021E094: nop

    TRACE_RETURN()
    return;
    // 0x8021E094: nop

;}
RECOMP_FUNC void func_80217144_5D2614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80217148: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8021714C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80217150: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80217154: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80217158: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x8021715C: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x80217160: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80217164: sh          $t6, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r14;
    // 0x80217168: sh          $t7, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r15;
    // 0x8021716C: sh          $zero, 0x52($a0)
    MEM_H(0X52, ctx->r4) = 0;
    // 0x80217170: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80217174: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80217178: sb          $v0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r2;
    // 0x8021717C: sh          $t9, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r25;
    // 0x80217180: sh          $t0, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r8;
    // 0x80217184: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x80217188: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8021718C: sb          $zero, 0x44($a0)
    MEM_B(0X44, ctx->r4) = 0;
    // 0x80217190: sb          $t1, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r9;
    // 0x80217194: sb          $v1, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r3;
    // 0x80217198: sb          $v1, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r3;
    // 0x8021719C: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    // 0x802171A0: jr          $ra
    // 0x802171A4: sb          $v0, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802171A4: sb          $v0, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80219448_5D4918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219448: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021944C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80219450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80219454: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x80219458: lb          $t7, 0xD6($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XD6);
    // 0x8021945C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80219460: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80219464: sh          $t9, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r25;
    // 0x80219468: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x8021946C: sh          $t0, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r8;
    // 0x80219470: jal         0x80003EA0
    // 0x80219474: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x80219474: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x80219478: lbu         $t1, 0xD4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD4);
    // 0x8021947C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80219480: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80219484: bgez        $t1, L_80219498
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80219488: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80219498;
    }
    // 0x80219488: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021948C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219490: nop

    // 0x80219494: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80219498:
    // 0x80219498: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021949C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802194A0: jal         0x80003E10
    // 0x802194A4: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x802194A4: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_1:
    // 0x802194A8: lbu         $t2, 0xD5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD5);
    // 0x802194AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802194B0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802194B4: bgez        $t2, L_802194C8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802194B8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802194C8;
    }
    // 0x802194B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802194BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802194C0: nop

    // 0x802194C4: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_802194C8:
    // 0x802194C8: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802194CC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x802194D0: jal         0x80003EA0
    // 0x802194D4: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x802194D4: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_2:
    // 0x802194D8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802194DC: jal         0x80003E10
    // 0x802194E0: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x802194E0: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_3:
    // 0x802194E4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802194E8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802194EC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802194F0: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802194F4: nop

    // 0x802194F8: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802194FC: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80219500: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80219504: jal         0x80003E10
    // 0x80219508: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003E10_4A10(rdram, ctx);
        goto after_4;
    // 0x80219508: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_4:
    // 0x8021950C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80219510: jal         0x80003EA0
    // 0x80219514: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_5;
    // 0x80219514: lhu         $a0, 0xD2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD2);
    after_5:
    // 0x80219518: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021951C: lwc1        $f6, 0xD8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x80219520: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80219524: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80219528: sub.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x8021952C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80219530: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x80219534: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80219538: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021953C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80219540: lwc1        $f4, 0xDC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x80219544: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80219548: swc1        $f14, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f14.u32l;
    // 0x8021954C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80219550: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80219554: sub.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x80219558: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
    // 0x8021955C: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80219560: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    // 0x80219564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80219568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021956C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80219570: jr          $ra
    // 0x80219574: nop

    TRACE_RETURN()
    return;
    // 0x80219574: nop

;}
RECOMP_FUNC void func_8021D724_5D8BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D724: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8021D728: lbu         $v1, 0x77($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X77);
    // 0x8021D72C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8021D730: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8021D734: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8021D738: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8021D73C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8021D740: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8021D744: beq         $v1, $zero, L_8021D760
    if (ctx->r3 == 0) {
        // 0x8021D748: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_8021D760;
    }
    // 0x8021D748: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021D74C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021D750: beq         $v1, $at, L_8021D87C
    if (ctx->r3 == ctx->r1) {
        // 0x8021D754: lb          $t4, 0x57($sp)
        ctx->r12 = MEM_B(ctx->r29, 0X57);
            goto L_8021D87C;
    }
    // 0x8021D754: lb          $t4, 0x57($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X57);
    // 0x8021D758: b           L_8021D998
    // 0x8021D75C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_8021D998;
    // 0x8021D75C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8021D760:
    // 0x8021D760: lb          $t8, 0x57($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X57);
    // 0x8021D764: lb          $t9, 0x5B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X5B);
    // 0x8021D768: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021D76C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8021D770: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8021D774: lb          $t0, 0x5F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X5F);
    // 0x8021D778: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021D77C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021D780: lwc1        $f0, -0x58C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X58C8);
    // 0x8021D784: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x8021D788: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x8021D78C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021D790: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021D794: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x8021D798: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8021D79C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D7A0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021D7A4: addiu       $a1, $a1, -0x1DA0
    ctx->r5 = ADD32(ctx->r5, -0X1DA0);
    // 0x8021D7A8: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    // 0x8021D7AC: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8021D7B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021D7B4: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021D7B8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8021D7BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021D7C0: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8021D7C4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021D7C8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021D7CC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021D7D0: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8021D7D4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8021D7D8: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x8021D7DC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021D7E0: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x8021D7E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021D7E8: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x8021D7EC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8021D7F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021D7F4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021D7F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021D7FC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021D800: jal         0x800358E8
    // 0x8021D804: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x8021D804: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_0:
    // 0x8021D808: beq         $v0, $zero, L_8021D994
    if (ctx->r2 == 0) {
        // 0x8021D80C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8021D994;
    }
    // 0x8021D80C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021D810: lw          $t4, 0x60($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X60);
    // 0x8021D814: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D818: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x8021D81C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021D820: jal         0x80035214
    // 0x8021D824: sw          $t4, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r12;
    func_80035214_35E14(rdram, ctx);
        goto after_1;
    // 0x8021D824: sw          $t4, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r12;
    after_1:
    // 0x8021D828: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D82C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x8021D830: jal         0x80035244
    // 0x8021D834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_2;
    // 0x8021D834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8021D838: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x8021D83C: sb          $t5, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r13;
    // 0x8021D840: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x8021D844: sb          $t6, 0xD5($s0)
    MEM_B(0XD5, ctx->r16) = ctx->r14;
    // 0x8021D848: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x8021D84C: sb          $t7, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r15;
    // 0x8021D850: lbu         $t8, 0x6F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6F);
    // 0x8021D854: sb          $t8, 0xD7($s0)
    MEM_B(0XD7, ctx->r16) = ctx->r24;
    // 0x8021D858: lb          $t9, 0x57($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X57);
    // 0x8021D85C: sb          $t9, 0xD9($s0)
    MEM_B(0XD9, ctx->r16) = ctx->r25;
    // 0x8021D860: lb          $t0, 0x5B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X5B);
    // 0x8021D864: sb          $t0, 0xDA($s0)
    MEM_B(0XDA, ctx->r16) = ctx->r8;
    // 0x8021D868: lb          $t1, 0x5F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X5F);
    // 0x8021D86C: sb          $t1, 0xDB($s0)
    MEM_B(0XDB, ctx->r16) = ctx->r9;
    // 0x8021D870: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8021D874: b           L_8021D994
    // 0x8021D878: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
        goto L_8021D994;
    // 0x8021D878: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
L_8021D87C:
    // 0x8021D87C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8021D880: lb          $t5, 0x5B($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X5B);
    // 0x8021D884: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021D888: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021D88C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8021D890: lb          $t6, 0x5F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X5F);
    // 0x8021D894: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021D898: lwc1        $f0, -0x58C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X58C4);
    // 0x8021D89C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021D8A0: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x8021D8A4: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x8021D8A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021D8AC: or          $t3, $a3, $at
    ctx->r11 = ctx->r7 | ctx->r1;
    // 0x8021D8B0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8021D8B4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8021D8B8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021D8BC: addiu       $a1, $a1, 0x3C44
    ctx->r5 = ADD32(ctx->r5, 0X3C44);
    // 0x8021D8C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8021D8C4: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021D8C8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8021D8CC: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    // 0x8021D8D0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021D8D4: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8021D8D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021D8DC: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021D8E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8021D8E4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021D8E8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8021D8EC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8021D8F0: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x8021D8F4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8021D8F8: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x8021D8FC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8021D900: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x8021D904: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8021D908: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021D90C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021D910: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021D914: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021D918: jal         0x800358E8
    // 0x8021D91C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_800358E8_364E8(rdram, ctx);
        goto after_3;
    // 0x8021D91C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_3:
    // 0x8021D920: beq         $v0, $zero, L_8021D994
    if (ctx->r2 == 0) {
        // 0x8021D924: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8021D994;
    }
    // 0x8021D924: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021D928: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8021D92C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D930: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x8021D934: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x8021D938: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021D93C: jal         0x80035214
    // 0x8021D940: sw          $t1, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r9;
    func_80035214_35E14(rdram, ctx);
        goto after_4;
    // 0x8021D940: sw          $t1, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r9;
    after_4:
    // 0x8021D944: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D948: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x8021D94C: jal         0x80035244
    // 0x8021D950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_5;
    // 0x8021D950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8021D954: lbu         $t2, 0x63($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X63);
    // 0x8021D958: sb          $t2, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r10;
    // 0x8021D95C: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x8021D960: sb          $t3, 0xD5($s0)
    MEM_B(0XD5, ctx->r16) = ctx->r11;
    // 0x8021D964: lbu         $t4, 0x6B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X6B);
    // 0x8021D968: sb          $t4, 0xD6($s0)
    MEM_B(0XD6, ctx->r16) = ctx->r12;
    // 0x8021D96C: lbu         $t5, 0x6F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X6F);
    // 0x8021D970: sb          $t5, 0xD7($s0)
    MEM_B(0XD7, ctx->r16) = ctx->r13;
    // 0x8021D974: lb          $t6, 0x57($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X57);
    // 0x8021D978: sb          $t6, 0xD9($s0)
    MEM_B(0XD9, ctx->r16) = ctx->r14;
    // 0x8021D97C: lb          $t7, 0x5B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X5B);
    // 0x8021D980: sb          $t7, 0xDA($s0)
    MEM_B(0XDA, ctx->r16) = ctx->r15;
    // 0x8021D984: lb          $t8, 0x5F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X5F);
    // 0x8021D988: sb          $t8, 0xDB($s0)
    MEM_B(0XDB, ctx->r16) = ctx->r24;
    // 0x8021D98C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8021D990: sh          $t9, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r25;
L_8021D994:
    // 0x8021D994: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8021D998:
    // 0x8021D998: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8021D99C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8021D9A0: jr          $ra
    // 0x8021D9A4: nop

    TRACE_RETURN()
    return;
    // 0x8021D9A4: nop

;}
RECOMP_FUNC void func_80214654_5CFB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021465C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80214660: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80214664: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x80214668: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x8021466C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80214670: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80214674: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x80214678: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021467C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80214680: ori         $t7, $t7, 0x4EA
    ctx->r15 = ctx->r15 | 0X4EA;
    // 0x80214684: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80214688: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x8021468C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214690: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x80214694: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x80214698: sb          $t0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r8;
    // 0x8021469C: jalr        $t9
    // 0x802146A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802146A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x802146A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802146A8: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x802146AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802146B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802146B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802146B8: jalr        $t9
    // 0x802146BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802146BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802146C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802146C4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x802146C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802146CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802146D0: jalr        $t9
    // 0x802146D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802146D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802146D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802146DC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x802146E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802146E4: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x802146E8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x802146EC: jalr        $t9
    // 0x802146F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802146F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x802146F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x802146F8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x802146FC: jalr        $t9
    // 0x80214700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80214700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80214704: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x80214708: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8021470C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x80214710: bne         $v0, $zero, L_80214730
    if (ctx->r2 != 0) {
        // 0x80214714: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_80214730;
    }
    // 0x80214714: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214718: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021471C: lwc1        $f0, -0x6080($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6080);
    // 0x80214720: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x80214724: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x80214728: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x8021472C: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_80214730:
    // 0x80214730: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80214734: bne         $v0, $at, L_8021474C
    if (ctx->r2 != ctx->r1) {
        // 0x80214738: lui         $at, 0x8024
        ctx->r1 = S32(0X8024 << 16);
            goto L_8021474C;
    }
    // 0x80214738: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021473C: lwc1        $f0, -0x607C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X607C);
    // 0x80214740: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x80214744: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x80214748: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_8021474C:
    // 0x8021474C: jalr        $t9
    // 0x80214750: addiu       $a0, $a0, 0x4768
    ctx->r4 = ADD32(ctx->r4, 0X4768);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80214750: addiu       $a0, $a0, 0x4768
    ctx->r4 = ADD32(ctx->r4, 0X4768);
    after_5:
    // 0x80214754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214758: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021475C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80214760: jr          $ra
    // 0x80214764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80214764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8020F37C_5CA84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F37C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F384: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F388: jal         0x80013AC4
    // 0x8020F38C: addiu       $a0, $a0, -0x2F58
    ctx->r4 = ADD32(ctx->r4, -0X2F58);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F38C: addiu       $a0, $a0, -0x2F58
    ctx->r4 = ADD32(ctx->r4, -0X2F58);
    after_0:
    // 0x8020F390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F398: jr          $ra
    // 0x8020F39C: nop

    TRACE_RETURN()
    return;
    // 0x8020F39C: nop

;}
RECOMP_FUNC void func_8021096C_5CBE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021096C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210974: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210978: jal         0x80013AC4
    // 0x8021097C: addiu       $a0, $a0, -0x1B6C
    ctx->r4 = ADD32(ctx->r4, -0X1B6C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021097C: addiu       $a0, $a0, -0x1B6C
    ctx->r4 = ADD32(ctx->r4, -0X1B6C);
    after_0:
    // 0x80210980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210988: jr          $ra
    // 0x8021098C: nop

    TRACE_RETURN()
    return;
    // 0x8021098C: nop

;}
RECOMP_FUNC void func_8020F9D0_5CAEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F9D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F9D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F9D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F9DC: jal         0x80013AC4
    // 0x8020F9E0: addiu       $a0, $a0, -0x2AAC
    ctx->r4 = ADD32(ctx->r4, -0X2AAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F9E0: addiu       $a0, $a0, -0x2AAC
    ctx->r4 = ADD32(ctx->r4, -0X2AAC);
    after_0:
    // 0x8020F9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F9E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F9EC: jr          $ra
    // 0x8020F9F0: nop

    TRACE_RETURN()
    return;
    // 0x8020F9F0: nop

;}
RECOMP_FUNC void func_8020EFB0_5CA480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EFB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EFB8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EFBC: jal         0x80013AC4
    // 0x8020EFC0: addiu       $a0, $a0, -0x322C
    ctx->r4 = ADD32(ctx->r4, -0X322C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EFC0: addiu       $a0, $a0, -0x322C
    ctx->r4 = ADD32(ctx->r4, -0X322C);
    after_0:
    // 0x8020EFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EFC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EFCC: jr          $ra
    // 0x8020EFD0: nop

    TRACE_RETURN()
    return;
    // 0x8020EFD0: nop

;}
RECOMP_FUNC void func_802196E4_5D4BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802196E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802196E8: nop

    // 0x802196EC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x802196F0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x802196F4: jr          $ra
    // 0x802196F8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x802196F8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80210120_5CB5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210128: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021012C: jal         0x80013AC4
    // 0x80210130: addiu       $a0, $a0, -0x232C
    ctx->r4 = ADD32(ctx->r4, -0X232C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210130: addiu       $a0, $a0, -0x232C
    ctx->r4 = ADD32(ctx->r4, -0X232C);
    after_0:
    // 0x80210134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021013C: jr          $ra
    // 0x80210140: nop

    TRACE_RETURN()
    return;
    // 0x80210140: nop

;}
RECOMP_FUNC void func_80218DF8_5D42C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218DF8: addiu       $t6, $zero, 0x821
    ctx->r14 = ADD32(0, 0X821);
    // 0x80218DFC: jr          $ra
    // 0x80218E00: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80218E00: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8020F13C_5CA60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F13C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F144: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F148: jal         0x80013AC4
    // 0x8020F14C: addiu       $a0, $a0, -0x3134
    ctx->r4 = ADD32(ctx->r4, -0X3134);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F14C: addiu       $a0, $a0, -0x3134
    ctx->r4 = ADD32(ctx->r4, -0X3134);
    after_0:
    // 0x8020F150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F158: jr          $ra
    // 0x8020F15C: nop

    TRACE_RETURN()
    return;
    // 0x8020F15C: nop

;}
RECOMP_FUNC void func_8020E56C_5C9A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E574: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E578: jal         0x80013AC4
    // 0x8020E57C: addiu       $a0, $a0, -0x396C
    ctx->r4 = ADD32(ctx->r4, -0X396C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E57C: addiu       $a0, $a0, -0x396C
    ctx->r4 = ADD32(ctx->r4, -0X396C);
    after_0:
    // 0x8020E580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E588: jr          $ra
    // 0x8020E58C: nop

    TRACE_RETURN()
    return;
    // 0x8020E58C: nop

;}
RECOMP_FUNC void func_80211224_5CC6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021122C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211230: jal         0x80013AC4
    // 0x80211234: addiu       $a0, $a0, -0x1644
    ctx->r4 = ADD32(ctx->r4, -0X1644);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211234: addiu       $a0, $a0, -0x1644
    ctx->r4 = ADD32(ctx->r4, -0X1644);
    after_0:
    // 0x80211238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021123C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211240: jr          $ra
    // 0x80211244: nop

    TRACE_RETURN()
    return;
    // 0x80211244: nop

;}
RECOMP_FUNC void func_80224558_5DFA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224558: jr          $ra
    // 0x8022455C: lhu         $v0, 0xE4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE4);
    TRACE_RETURN()
    return;
    // 0x8022455C: lhu         $v0, 0xE4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XE4);
;}
RECOMP_FUNC void func_8020FA18_5CAEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FA20: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FA24: jal         0x80013AC4
    // 0x8020FA28: addiu       $a0, $a0, -0x2A88
    ctx->r4 = ADD32(ctx->r4, -0X2A88);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FA28: addiu       $a0, $a0, -0x2A88
    ctx->r4 = ADD32(ctx->r4, -0X2A88);
    after_0:
    // 0x8020FA2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FA34: jr          $ra
    // 0x8020FA38: nop

    TRACE_RETURN()
    return;
    // 0x8020FA38: nop

;}
RECOMP_FUNC void func_802130C8_5CE598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802130C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802130CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802130D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802130D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802130D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802130DC: lui         $t7, 0x280
    ctx->r15 = S32(0X280 << 16);
    // 0x802130E0: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x802130E4: ori         $t7, $t7, 0x720
    ctx->r15 = ctx->r15 | 0X720;
    // 0x802130E8: addiu       $t9, $zero, 0x1E1
    ctx->r25 = ADD32(0, 0X1E1);
    // 0x802130EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x802130F0: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802130F4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x802130F8: sh          $t9, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r25;
    // 0x802130FC: sb          $t8, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r24;
    // 0x80213100: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x80213104: swc1        $f18, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f18.u32l;
    // 0x80213108: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021310C: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80213110: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80213114: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x80213118: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021311C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x80213120: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80213124: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80213128: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021312C: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80213130: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213134: jalr        $t9
    // 0x80213138: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80213138: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    after_0:
    // 0x8021313C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80213140: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80213144: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x80213148: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x8021314C: jalr        $t9
    // 0x80213150: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80213150: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    after_1:
    // 0x80213154: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80213158: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021315C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80213160: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80213164: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80213168: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x8021316C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x80213170: jalr        $t9
    // 0x80213174: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80213174: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    after_2:
    // 0x80213178: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8021317C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80213180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213184: lbu         $a1, 0x8E($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8E);
    // 0x80213188: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021318C: jal         0x80216DF8
    // 0x80213190: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_3;
    // 0x80213190: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x80213194: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x80213198: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021319C: addiu       $a0, $a0, 0x31C0
    ctx->r4 = ADD32(ctx->r4, 0X31C0);
    // 0x802131A0: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x802131A4: jal         0x8003521C
    // 0x802131A8: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x802131A8: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    after_4:
    // 0x802131AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802131B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802131B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802131B8: jr          $ra
    // 0x802131BC: nop

    TRACE_RETURN()
    return;
    // 0x802131BC: nop

;}
RECOMP_FUNC void func_8020E038_5C9508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E040: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E044: jal         0x80013AC4
    // 0x8020E048: addiu       $a0, $a0, -0x3BFC
    ctx->r4 = ADD32(ctx->r4, -0X3BFC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E048: addiu       $a0, $a0, -0x3BFC
    ctx->r4 = ADD32(ctx->r4, -0X3BFC);
    after_0:
    // 0x8020E04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E054: jr          $ra
    // 0x8020E058: nop

    TRACE_RETURN()
    return;
    // 0x8020E058: nop

;}
RECOMP_FUNC void func_8021804C_5D351C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021804C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80218050: beq         $a1, $zero, L_80218070
    if (ctx->r5 == 0) {
        // 0x80218054: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80218070;
    }
    // 0x80218054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218058: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021805C: addiu       $a1, $a1, 0x39E0
    ctx->r5 = ADD32(ctx->r5, 0X39E0);
    // 0x80218060: jal         0x802171A8
    // 0x80218064: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x80218064: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
    // 0x80218068: b           L_80218084
    // 0x8021806C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218084;
    // 0x8021806C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218070:
    // 0x80218070: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218074: addiu       $a1, $a1, 0x1EF8
    ctx->r5 = ADD32(ctx->r5, 0X1EF8);
    // 0x80218078: jal         0x802171A8
    // 0x8021807C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_1;
    // 0x8021807C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80218080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218084:
    // 0x80218084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80218088: jr          $ra
    // 0x8021808C: nop

    TRACE_RETURN()
    return;
    // 0x8021808C: nop

;}
RECOMP_FUNC void func_802209F0_5DBEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802209F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802209F4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802209F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802209FC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80220A00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80220A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220A08: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x80220A0C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80220A10: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80220A14: jalr        $t9
    // 0x80220A18: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80220A18: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80220A1C: bne         $v0, $zero, L_80220A2C
    if (ctx->r2 != 0) {
        // 0x80220A20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80220A2C;
    }
    // 0x80220A20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80220A24: b           L_80220A54
    // 0x80220A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80220A54;
    // 0x80220A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80220A2C:
    // 0x80220A2C: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x80220A30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80220A34: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80220A38: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80220A3C: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x80220A40: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80220A44: jalr        $t9
    // 0x80220A48: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80220A48: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    after_1:
    // 0x80220A4C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80220A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80220A54:
    // 0x80220A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80220A58: jr          $ra
    // 0x80220A5C: nop

    TRACE_RETURN()
    return;
    // 0x80220A5C: nop

;}
RECOMP_FUNC void func_80210B88_5CC058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210B90: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210B94: jal         0x80013AC4
    // 0x80210B98: addiu       $a0, $a0, -0x1A44
    ctx->r4 = ADD32(ctx->r4, -0X1A44);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210B98: addiu       $a0, $a0, -0x1A44
    ctx->r4 = ADD32(ctx->r4, -0X1A44);
    after_0:
    // 0x80210B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210BA4: jr          $ra
    // 0x80210BA8: nop

    TRACE_RETURN()
    return;
    // 0x80210BA8: nop

;}
RECOMP_FUNC void func_802244A0_5DF970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802244A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802244A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802244A8: lw          $v1, 0xC4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC4);
    // 0x802244AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802244B0: lhu         $a0, 0x9C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9C);
    // 0x802244B4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802244B8: jal         0x80224440
    // 0x802244BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80224440_5DF910(rdram, ctx);
        goto after_0;
    // 0x802244BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802244C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802244C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802244C8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x802244CC: lhu         $t6, 0xEA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XEA);
    // 0x802244D0: lhu         $t5, 0x9C($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X9C);
    // 0x802244D4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802244D8: lhu         $t9, 0xE6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XE6);
    // 0x802244DC: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802244E0: xor         $t7, $t6, $v0
    ctx->r15 = ctx->r14 ^ ctx->r2;
    // 0x802244E4: and         $t2, $t7, $v0
    ctx->r10 = ctx->r15 & ctx->r2;
    // 0x802244E8: sh          $t2, 0xE4($a1)
    MEM_H(0XE4, ctx->r5) = ctx->r10;
    // 0x802244EC: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x802244F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802244F4: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x802244F8: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x802244FC: sh          $t1, 0xE6($a1)
    MEM_H(0XE6, ctx->r5) = ctx->r9;
    // 0x80224500: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80224504: mflo        $t6
    ctx->r14 = lo;
    // 0x80224508: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x8022450C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80224510: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80224514: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80224518: andi        $t3, $t2, 0xE000
    ctx->r11 = ctx->r10 & 0XE000;
    // 0x8022451C: sh          $t3, 0x30F4($t8)
    MEM_H(0X30F4, ctx->r24) = ctx->r11;
    // 0x80224520: lhu         $t5, 0x9C($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X9C);
    // 0x80224524: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x80224528: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022452C: sh          $t0, 0xEA($a1)
    MEM_H(0XEA, ctx->r5) = ctx->r8;
    // 0x80224530: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80224534: andi        $t1, $t0, 0xE000
    ctx->r9 = ctx->r8 & 0XE000;
    // 0x80224538: mflo        $t4
    ctx->r12 = lo;
    // 0x8022453C: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x80224540: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80224544: sh          $t1, 0x30F2($t7)
    MEM_H(0X30F2, ctx->r15) = ctx->r9;
    // 0x80224548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022454C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80224550: jr          $ra
    // 0x80224554: nop

    TRACE_RETURN()
    return;
    // 0x80224554: nop

;}
RECOMP_FUNC void func_8020F0AC_5CA57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F0AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F0B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F0B8: jal         0x80013AC4
    // 0x8020F0BC: addiu       $a0, $a0, -0x31B4
    ctx->r4 = ADD32(ctx->r4, -0X31B4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F0BC: addiu       $a0, $a0, -0x31B4
    ctx->r4 = ADD32(ctx->r4, -0X31B4);
    after_0:
    // 0x8020F0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F0C8: jr          $ra
    // 0x8020F0CC: nop

    TRACE_RETURN()
    return;
    // 0x8020F0CC: nop

;}
RECOMP_FUNC void func_80210678_5CBB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021067C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210680: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210684: jal         0x80013AC4
    // 0x80210688: addiu       $a0, $a0, -0x1DCC
    ctx->r4 = ADD32(ctx->r4, -0X1DCC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210688: addiu       $a0, $a0, -0x1DCC
    ctx->r4 = ADD32(ctx->r4, -0X1DCC);
    after_0:
    // 0x8021068C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210694: jr          $ra
    // 0x80210698: nop

    TRACE_RETURN()
    return;
    // 0x80210698: nop

;}
RECOMP_FUNC void func_8020F4C0_5CA990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F4C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F4C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F4C8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F4CC: jal         0x80013AC4
    // 0x8020F4D0: addiu       $a0, $a0, -0x2E8C
    ctx->r4 = ADD32(ctx->r4, -0X2E8C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F4D0: addiu       $a0, $a0, -0x2E8C
    ctx->r4 = ADD32(ctx->r4, -0X2E8C);
    after_0:
    // 0x8020F4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F4DC: jr          $ra
    // 0x8020F4E0: nop

    TRACE_RETURN()
    return;
    // 0x8020F4E0: nop

;}
RECOMP_FUNC void func_80223648_5DEB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022364C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80223650: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80223654: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80223658: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022365C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80223660: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80223664: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80223668: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8022366C: sub.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80223670: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80223674: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80223678: sub.s       $f2, $f20, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x8022367C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80223680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223684: sub.s       $f16, $f22, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x80223688: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8022368C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80223690: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80223694: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80223698: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8022369C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x802236A0: nop

    // 0x802236A4: bc1fl       L_802236C0
    if (!c1cs) {
        // 0x802236A8: div.s       $f10, $f14, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
            goto L_802236C0;
    }
    goto skip_0;
    // 0x802236A8: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    skip_0:
    // 0x802236AC: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x802236B0: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x802236B4: b           L_80223790
    // 0x802236B8: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
        goto L_80223790;
    // 0x802236B8: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x802236BC: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
L_802236C0:
    // 0x802236C0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802236C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802236C8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802236CC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x802236D0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802236D4: sub.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x802236D8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802236DC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802236E0: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x802236E4: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802236E8: sub.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x802236EC: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x802236F0: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802236F4: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802236F8: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x802236FC: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80223700: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80223704: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80223708: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8022370C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80223710: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x80223714: nop

    // 0x80223718: bc1tl       L_80223774
    if (c1cs) {
        // 0x8022371C: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_80223774;
    }
    goto skip_1;
    // 0x8022371C: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_1:
    // 0x80223720: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80223724: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80223728: sub.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x8022372C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80223730: sub.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x80223734: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80223738: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x8022373C: nop

    // 0x80223740: bc1tl       L_80223774
    if (c1cs) {
        // 0x80223744: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_80223774;
    }
    goto skip_2;
    // 0x80223744: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_2:
    // 0x80223748: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8022374C: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80223750: sub.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x80223754: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80223758: sub.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x8022375C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80223760: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80223764: nop

    // 0x80223768: bc1fl       L_80223790
    if (!c1cs) {
        // 0x8022376C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80223790;
    }
    goto skip_3;
    // 0x8022376C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x80223770: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_80223774:
    // 0x80223774: swc1        $f20, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f20.u32l;
    // 0x80223778: swc1        $f22, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f22.u32l;
    // 0x8022377C: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    // 0x80223780: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x80223784: b           L_80223790
    // 0x80223788: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
        goto L_80223790;
    // 0x80223788: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x8022378C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223790:
    // 0x80223790: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80223794: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80223798: jr          $ra
    // 0x8022379C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022379C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8020F2EC_5CA7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F2EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F2F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F2F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F2F8: jal         0x80013AC4
    // 0x8020F2FC: addiu       $a0, $a0, -0x2FC4
    ctx->r4 = ADD32(ctx->r4, -0X2FC4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F2FC: addiu       $a0, $a0, -0x2FC4
    ctx->r4 = ADD32(ctx->r4, -0X2FC4);
    after_0:
    // 0x8020F300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F308: jr          $ra
    // 0x8020F30C: nop

    TRACE_RETURN()
    return;
    // 0x8020F30C: nop

;}
RECOMP_FUNC void func_80220210_5DB6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220210: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80220214: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80220218: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8022021C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80220220: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80220224: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80220228: lw          $v1, -0x4FE8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4FE8);
    // 0x8022022C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80220230: beq         $v1, $zero, L_80220264
    if (ctx->r3 == 0) {
        // 0x80220234: nop
    
            goto L_80220264;
    }
    // 0x80220234: nop

    // 0x80220238: lbu         $t8, 0x10($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X10);
    // 0x8022023C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80220240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80220244: addu        $a0, $t8, $t6
    ctx->r4 = ADD32(ctx->r24, ctx->r14);
    // 0x80220248: slti        $at, $a0, 0xFF
    ctx->r1 = SIGNED(ctx->r4) < 0XFF ? 1 : 0;
    // 0x8022024C: beql        $at, $zero, L_80220264
    if (ctx->r1 == 0) {
        // 0x80220250: sb          $t9, 0x10($v1)
        MEM_B(0X10, ctx->r3) = ctx->r25;
            goto L_80220264;
    }
    goto skip_0;
    // 0x80220250: sb          $t9, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r25;
    skip_0:
    // 0x80220254: sb          $a0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r4;
    // 0x80220258: jr          $ra
    // 0x8022025C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022025C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80220260: sb          $t9, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r25;
L_80220264:
    // 0x80220264: jr          $ra
    // 0x80220268: nop

    TRACE_RETURN()
    return;
    // 0x80220268: nop

;}
RECOMP_FUNC void func_80216CE0_5D21B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80216CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80216CE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80216CEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80216CF0: lhu         $t6, 0x5E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X5E);
    // 0x80216CF4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80216CF8: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x80216CFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80216D00: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80216D04: lw          $t9, -0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X4);
    // 0x80216D08: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x80216D0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216D10: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80216D14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80216D18: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80216D1C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80216D20: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80216D24: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80216D28: sw          $t4, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r12;
    // 0x80216D2C: lhu         $t5, 0x5E($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X5E);
    // 0x80216D30: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80216D34: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80216D38: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80216D3C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80216D40: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80216D44: sh          $t0, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r8;
    // 0x80216D48: jal         0x800141C4
    // 0x80216D4C: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80216D4C: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    after_0:
    // 0x80216D50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216D54: bnel        $v0, $at, L_80216D74
    if (ctx->r2 != ctx->r1) {
        // 0x80216D58: lhu         $t1, 0x5E($s1)
        ctx->r9 = MEM_HU(ctx->r17, 0X5E);
            goto L_80216D74;
    }
    goto skip_0;
    // 0x80216D58: lhu         $t1, 0x5E($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X5E);
    skip_0:
    // 0x80216D5C: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x80216D60: jal         0x80216640
    // 0x80216D64: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_1;
    // 0x80216D64: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x80216D68: jal         0x80013B14
    // 0x80216D6C: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80216D6C: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_2:
    // 0x80216D70: lhu         $t1, 0x5E($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X5E);
L_80216D74:
    // 0x80216D74: lui         $t3, 0x8023
    ctx->r11 = S32(0X8023 << 16);
    // 0x80216D78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80216D7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80216D80: lw          $t3, 0x6984($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6984);
    // 0x80216D84: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80216D88: lhu         $t5, 0x2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2);
    // 0x80216D8C: sh          $t5, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r13;
    // 0x80216D90: jal         0x800141C4
    // 0x80216D94: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x80216D94: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    after_3:
    // 0x80216D98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216D9C: bnel        $v0, $at, L_80216DBC
    if (ctx->r2 != ctx->r1) {
        // 0x80216DA0: lhu         $v0, 0x34($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X34);
            goto L_80216DBC;
    }
    goto skip_1;
    // 0x80216DA0: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    skip_1:
    // 0x80216DA4: lhu         $a0, 0x5C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X5C);
    // 0x80216DA8: jal         0x80216640
    // 0x80216DAC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_4;
    // 0x80216DAC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_4:
    // 0x80216DB0: jal         0x80013B14
    // 0x80216DB4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_5;
    // 0x80216DB4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_5:
    // 0x80216DB8: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
L_80216DBC:
    // 0x80216DBC: lhu         $t7, 0x3C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X3C);
    // 0x80216DC0: addiu       $t6, $zero, 0x152
    ctx->r14 = ADD32(0, 0X152);
    // 0x80216DC4: sh          $t6, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r14;
    // 0x80216DC8: beq         $v0, $t7, L_80216DD8
    if (ctx->r2 == ctx->r15) {
        // 0x80216DCC: andi        $t8, $t6, 0xFFFF
        ctx->r24 = ctx->r14 & 0XFFFF;
            goto L_80216DD8;
    }
    // 0x80216DCC: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80216DD0: bne         $v0, $t8, L_80216DDC
    if (ctx->r2 != ctx->r24) {
        // 0x80216DD4: nop
    
            goto L_80216DDC;
    }
    // 0x80216DD4: nop

L_80216DD8:
    // 0x80216DD8: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
L_80216DDC:
    // 0x80216DDC: jal         0x80014218
    // 0x80216DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x80216DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80216DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80216DE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80216DEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80216DF0: jr          $ra
    // 0x80216DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80216DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80215A74_5D0F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80215A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215A7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80215A80: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x80215A84: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80215A88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80215A8C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80215A90: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x80215A94: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80215A98: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x80215A9C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80215AA0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80215AA4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80215AA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80215AAC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80215AB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215AB4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80215AB8: nop

    // 0x80215ABC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80215AC0: beql        $t0, $zero, L_80215B10
    if (ctx->r8 == 0) {
        // 0x80215AC4: mfc1        $t0, $f6
        ctx->r8 = (int32_t)ctx->f6.u32l;
            goto L_80215B10;
    }
    goto skip_0;
    // 0x80215AC4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x80215AC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80215ACC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80215AD0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215AD4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80215AD8: nop

    // 0x80215ADC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80215AE0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80215AE4: nop

    // 0x80215AE8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80215AEC: bne         $t0, $zero, L_80215B04
    if (ctx->r8 != 0) {
        // 0x80215AF0: nop
    
            goto L_80215B04;
    }
    // 0x80215AF0: nop

    // 0x80215AF4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80215AF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215AFC: b           L_80215B1C
    // 0x80215B00: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80215B1C;
    // 0x80215B00: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80215B04:
    // 0x80215B04: b           L_80215B1C
    // 0x80215B08: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80215B1C;
    // 0x80215B08: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80215B0C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
L_80215B10:
    // 0x80215B10: nop

    // 0x80215B14: bltz        $t0, L_80215B04
    if (SIGNED(ctx->r8) < 0) {
        // 0x80215B18: nop
    
            goto L_80215B04;
    }
    // 0x80215B18: nop

L_80215B1C:
    // 0x80215B1C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80215B20: sh          $t0, 0x788F($at)
    MEM_H(0X788F, ctx->r1) = ctx->r8;
    // 0x80215B24: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80215B28: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80215B2C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80215B30: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80215B34: nop

    // 0x80215B38: sh          $t2, 0x7891($at)
    MEM_H(0X7891, ctx->r1) = ctx->r10;
    // 0x80215B3C: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x80215B40: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80215B44: jal         0x801FA3FC
    // 0x80215B48: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    func_801FA3FC_5B630C(rdram, ctx);
        goto after_0;
    // 0x80215B48: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    after_0:
    // 0x80215B4C: lh          $t3, 0x1C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1C);
    // 0x80215B50: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80215B54: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80215B58: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80215B5C: sh          $t3, 0x2E41($at)
    MEM_H(0X2E41, ctx->r1) = ctx->r11;
    // 0x80215B60: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80215B64: sw          $t4, 0x2E45($at)
    MEM_W(0X2E45, ctx->r1) = ctx->r12;
    // 0x80215B68: lh          $t5, 0x18($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X18);
    // 0x80215B6C: sw          $t5, 0x2E49($at)
    MEM_W(0X2E49, ctx->r1) = ctx->r13;
    // 0x80215B70: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x80215B74: jal         0x80034ED4
    // 0x80215B78: sw          $t7, 0x2E4D($at)
    MEM_W(0X2E4D, ctx->r1) = ctx->r15;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80215B78: sw          $t7, 0x2E4D($at)
    MEM_W(0X2E4D, ctx->r1) = ctx->r15;
    after_1:
    // 0x80215B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215B80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80215B84: jr          $ra
    // 0x80215B88: nop

    TRACE_RETURN()
    return;
    // 0x80215B88: nop

;}
RECOMP_FUNC void func_80221A90_5DCF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221A98: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x80221A9C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80221AA0: lui         $t6, 0x1280
    ctx->r14 = S32(0X1280 << 16);
    // 0x80221AA4: ori         $t6, $t6, 0x761
    ctx->r14 = ctx->r14 | 0X761;
    // 0x80221AA8: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80221AAC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80221AB0: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x80221AB4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x80221AB8: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80221ABC: sb          $t9, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r25;
    // 0x80221AC0: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x80221AC4: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x80221AC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80221ACC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80221AD0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80221AD4: nop

    // 0x80221AD8: bc1f        L_80221B08
    if (!c1cs) {
        // 0x80221ADC: nop
    
            goto L_80221B08;
    }
    // 0x80221ADC: nop

    // 0x80221AE0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80221AE4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80221AE8: nop

    // 0x80221AEC: bc1f        L_80221B08
    if (!c1cs) {
        // 0x80221AF0: nop
    
            goto L_80221B08;
    }
    // 0x80221AF0: nop

    // 0x80221AF4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80221AF8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80221AFC: nop

    // 0x80221B00: bc1tl       L_80221B18
    if (c1cs) {
        // 0x80221B04: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80221B18;
    }
    goto skip_0;
    // 0x80221B04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    skip_0:
L_80221B08:
    // 0x80221B08: jal         0x8021C654
    // 0x80221B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8021C654_5D7B24(rdram, ctx);
        goto after_0;
    // 0x80221B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80221B10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80221B14: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_80221B18:
    // 0x80221B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80221B1C: jal         0x80219E70
    // 0x80221B20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80219E70_5D5340(rdram, ctx);
        goto after_1;
    // 0x80221B20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80221B24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80221B28: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x80221B2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80221B30: jal         0x80218DA8
    // 0x80221B34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80218DA8_5D4278(rdram, ctx);
        goto after_2;
    // 0x80221B34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80221B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221B40: jr          $ra
    // 0x80221B44: nop

    TRACE_RETURN()
    return;
    // 0x80221B44: nop

;}
RECOMP_FUNC void func_80221EF0_5DD3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221EF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221EFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221F00: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80221F04: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80221F08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80221F0C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80221F10: swc1        $f4, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f4.u32l;
    // 0x80221F14: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x80221F18: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221F1C: jal         0x8003521C
    // 0x80221F20: addiu       $a0, $a0, 0x2C34
    ctx->r4 = ADD32(ctx->r4, 0X2C34);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80221F20: addiu       $a0, $a0, 0x2C34
    ctx->r4 = ADD32(ctx->r4, 0X2C34);
    after_0:
    // 0x80221F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221F28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221F2C: jr          $ra
    // 0x80221F30: nop

    TRACE_RETURN()
    return;
    // 0x80221F30: nop

;}
RECOMP_FUNC void func_8021242C_5CD8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021242C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212438: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021243C: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80212440: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80212444: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x80212448: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021244C: jal         0x8003521C
    // 0x80212450: addiu       $a0, $a0, 0x2464
    ctx->r4 = ADD32(ctx->r4, 0X2464);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80212450: addiu       $a0, $a0, 0x2464
    ctx->r4 = ADD32(ctx->r4, 0X2464);
    after_0:
    // 0x80212454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021245C: jr          $ra
    // 0x80212460: nop

    TRACE_RETURN()
    return;
    // 0x80212460: nop

;}
RECOMP_FUNC void func_8020FFB8_5CB488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FFB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FFBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FFC0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FFC4: jal         0x80013AC4
    // 0x8020FFC8: addiu       $a0, $a0, -0x2484
    ctx->r4 = ADD32(ctx->r4, -0X2484);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FFC8: addiu       $a0, $a0, -0x2484
    ctx->r4 = ADD32(ctx->r4, -0X2484);
    after_0:
    // 0x8020FFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FFD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FFD4: jr          $ra
    // 0x8020FFD8: nop

    TRACE_RETURN()
    return;
    // 0x8020FFD8: nop

;}
RECOMP_FUNC void func_80210D38_5CC208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210D40: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210D44: jal         0x80013AC4
    // 0x80210D48: addiu       $a0, $a0, -0x1928
    ctx->r4 = ADD32(ctx->r4, -0X1928);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210D48: addiu       $a0, $a0, -0x1928
    ctx->r4 = ADD32(ctx->r4, -0X1928);
    after_0:
    // 0x80210D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210D54: jr          $ra
    // 0x80210D58: nop

    TRACE_RETURN()
    return;
    // 0x80210D58: nop

;}
RECOMP_FUNC void func_802197D8_5D4CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802197D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802197DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802197E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802197E4: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x802197E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802197EC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802197F0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x802197F4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x802197F8: jal         0x802196FC
    // 0x802197FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_802196FC_5D4BCC(rdram, ctx);
        goto after_0;
    // 0x802197FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80219800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80219804: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80219808: jr          $ra
    // 0x8021980C: nop

    TRACE_RETURN()
    return;
    // 0x8021980C: nop

;}
