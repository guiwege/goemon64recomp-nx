#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021C264_685C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C264: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C268: jr          $ra
    // 0x8021C26C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C26C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80223B64_68D544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223B6C: jal         0x80034EF8
    // 0x80223B70: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80223B70: nop

    after_0:
    // 0x80223B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223B7C: jr          $ra
    // 0x80223B80: nop

    TRACE_RETURN()
    return;
    // 0x80223B80: nop

;}
RECOMP_FUNC void func_8021F9A0_689380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F9A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F9A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F9AC: jal         0x80013AC4
    // 0x8021F9B0: addiu       $a0, $a0, -0x5B98
    ctx->r4 = ADD32(ctx->r4, -0X5B98);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F9B0: addiu       $a0, $a0, -0x5B98
    ctx->r4 = ADD32(ctx->r4, -0X5B98);
    after_0:
    // 0x8021F9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021F9BC: jr          $ra
    // 0x8021F9C0: nop

    TRACE_RETURN()
    return;
    // 0x8021F9C0: nop

    // 0x8021F9C4: jr          $ra
    // 0x8021F9C8: nop

    TRACE_RETURN()
    return;
    // 0x8021F9C8: nop

;}
RECOMP_FUNC void func_802182A0_681C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802182A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802182A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802182A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802182AC: jal         0x80013AC4
    // 0x802182B0: addiu       $a0, $a0, -0x5E54
    ctx->r4 = ADD32(ctx->r4, -0X5E54);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802182B0: addiu       $a0, $a0, -0x5E54
    ctx->r4 = ADD32(ctx->r4, -0X5E54);
    after_0:
    // 0x802182B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802182B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802182BC: jr          $ra
    // 0x802182C0: nop

    TRACE_RETURN()
    return;
    // 0x802182C0: nop

    // 0x802182C4: jr          $ra
    // 0x802182C8: nop

    TRACE_RETURN()
    return;
    // 0x802182C8: nop

;}
RECOMP_FUNC void func_80224418_68DDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224418: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022441C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80224420: sh          $a3, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r7;
    // 0x80224424: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80224428: jr          $ra
    // 0x8022442C: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    TRACE_RETURN()
    return;
    // 0x8022442C: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_8021E560_687F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E560: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E568: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8021E56C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E570: ldc1        $f16, -0x52A8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X52A8);
    // 0x8021E574: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021E578: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021E57C: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8021E580: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021E584: bc1fl       L_8021E600
    if (!c1cs) {
        // 0x8021E588: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021E600;
    }
    goto skip_0;
    // 0x8021E588: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8021E58C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E590: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021E594: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E598: nop

    // 0x8021E59C: bc1fl       L_8021E5B4
    if (!c1cs) {
        // 0x8021E5A0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021E5B4;
    }
    goto skip_1;
    // 0x8021E5A0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x8021E5A4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021E5A8: b           L_8021E5B4
    // 0x8021E5AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E5B4;
    // 0x8021E5AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E5B0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021E5B4:
    // 0x8021E5B4: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021E5B8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E5BC: nop

    // 0x8021E5C0: bc1fl       L_8021E5DC
    if (!c1cs) {
        // 0x8021E5C4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021E5DC;
    }
    goto skip_2;
    // 0x8021E5C4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x8021E5C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021E5CC: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8021E5D0: b           L_8021E5FC
    // 0x8021E5D4: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
        goto L_8021E5FC;
    // 0x8021E5D4: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x8021E5D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021E5DC:
    // 0x8021E5DC: nop

    // 0x8021E5E0: bc1fl       L_8021E5F8
    if (!c1cs) {
        // 0x8021E5E4: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021E5F8;
    }
    goto skip_3;
    // 0x8021E5E4: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x8021E5E8: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021E5EC: b           L_8021E5FC
    // 0x8021E5F0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
        goto L_8021E5FC;
    // 0x8021E5F0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x8021E5F4: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_8021E5F8:
    // 0x8021E5F8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_8021E5FC:
    // 0x8021E5FC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8021E600:
    // 0x8021E600: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021E604: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021E608: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021E60C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021E610: nop

    // 0x8021E614: bc1fl       L_8021E688
    if (!c1cs) {
        // 0x8021E618: lwc1        $f14, 0x2C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_8021E688;
    }
    goto skip_4;
    // 0x8021E618: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
    skip_4:
    // 0x8021E61C: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021E620: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021E624: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E628: nop

    // 0x8021E62C: bc1fl       L_8021E644
    if (!c1cs) {
        // 0x8021E630: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021E644;
    }
    goto skip_5;
    // 0x8021E630: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x8021E634: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021E638: b           L_8021E644
    // 0x8021E63C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E644;
    // 0x8021E63C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E640: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021E644:
    // 0x8021E644: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E648: nop

    // 0x8021E64C: bc1fl       L_8021E664
    if (!c1cs) {
        // 0x8021E650: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021E664;
    }
    goto skip_6;
    // 0x8021E650: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x8021E654: swc1        $f12, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f12.u32l;
    // 0x8021E658: b           L_8021E684
    // 0x8021E65C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
        goto L_8021E684;
    // 0x8021E65C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x8021E660: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021E664:
    // 0x8021E664: nop

    // 0x8021E668: bc1fl       L_8021E680
    if (!c1cs) {
        // 0x8021E66C: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021E680;
    }
    goto skip_7;
    // 0x8021E66C: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x8021E670: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021E674: b           L_8021E684
    // 0x8021E678: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
        goto L_8021E684;
    // 0x8021E678: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x8021E67C: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_8021E680:
    // 0x8021E680: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
L_8021E684:
    // 0x8021E684: lwc1        $f14, 0x2C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2C);
L_8021E688:
    // 0x8021E688: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8021E68C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x8021E690: nop

    // 0x8021E694: bc1fl       L_8021E708
    if (!c1cs) {
        // 0x8021E698: lwc1        $f14, 0x38($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X38);
            goto L_8021E708;
    }
    goto skip_8;
    // 0x8021E698: lwc1        $f14, 0x38($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X38);
    skip_8:
    // 0x8021E69C: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021E6A0: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021E6A4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E6A8: nop

    // 0x8021E6AC: bc1fl       L_8021E6C4
    if (!c1cs) {
        // 0x8021E6B0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021E6C4;
    }
    goto skip_9;
    // 0x8021E6B0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x8021E6B4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021E6B8: b           L_8021E6C4
    // 0x8021E6BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E6C4;
    // 0x8021E6BC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E6C0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021E6C4:
    // 0x8021E6C4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E6C8: nop

    // 0x8021E6CC: bc1fl       L_8021E6E4
    if (!c1cs) {
        // 0x8021E6D0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021E6E4;
    }
    goto skip_10;
    // 0x8021E6D0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x8021E6D4: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x8021E6D8: b           L_8021E704
    // 0x8021E6DC: swc1        $f18, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f18.u32l;
        goto L_8021E704;
    // 0x8021E6DC: swc1        $f18, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f18.u32l;
    // 0x8021E6E0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021E6E4:
    // 0x8021E6E4: nop

    // 0x8021E6E8: bc1fl       L_8021E700
    if (!c1cs) {
        // 0x8021E6EC: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021E700;
    }
    goto skip_11;
    // 0x8021E6EC: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x8021E6F0: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021E6F4: b           L_8021E704
    // 0x8021E6F8: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
        goto L_8021E704;
    // 0x8021E6F8: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x8021E6FC: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_8021E700:
    // 0x8021E700: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
L_8021E704:
    // 0x8021E704: lwc1        $f14, 0x38($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X38);
L_8021E708:
    // 0x8021E708: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8021E70C: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x8021E710: nop

    // 0x8021E714: bc1fl       L_8021E788
    if (!c1cs) {
        // 0x8021E718: lh          $v1, 0x3E($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X3E);
            goto L_8021E788;
    }
    goto skip_12;
    // 0x8021E718: lh          $v1, 0x3E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3E);
    skip_12:
    // 0x8021E71C: lwc1        $f12, 0x34($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021E720: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021E724: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E728: nop

    // 0x8021E72C: bc1fl       L_8021E744
    if (!c1cs) {
        // 0x8021E730: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021E744;
    }
    goto skip_13;
    // 0x8021E730: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x8021E734: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021E738: b           L_8021E744
    // 0x8021E73C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E744;
    // 0x8021E73C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E740: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021E744:
    // 0x8021E744: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E748: nop

    // 0x8021E74C: bc1fl       L_8021E764
    if (!c1cs) {
        // 0x8021E750: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021E764;
    }
    goto skip_14;
    // 0x8021E750: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x8021E754: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x8021E758: b           L_8021E784
    // 0x8021E75C: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
        goto L_8021E784;
    // 0x8021E75C: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
    // 0x8021E760: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021E764:
    // 0x8021E764: nop

    // 0x8021E768: bc1fl       L_8021E780
    if (!c1cs) {
        // 0x8021E76C: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021E780;
    }
    goto skip_15;
    // 0x8021E76C: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x8021E770: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021E774: b           L_8021E784
    // 0x8021E778: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
        goto L_8021E784;
    // 0x8021E778: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
    // 0x8021E77C: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_8021E780:
    // 0x8021E780: swc1        $f4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f4.u32l;
L_8021E784:
    // 0x8021E784: lh          $v1, 0x3E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3E);
L_8021E788:
    // 0x8021E788: beql        $v1, $zero, L_8021E7B0
    if (ctx->r3 == 0) {
        // 0x8021E78C: lhu         $t1, 0x3C($v0)
        ctx->r9 = MEM_HU(ctx->r2, 0X3C);
            goto L_8021E7B0;
    }
    goto skip_16;
    // 0x8021E78C: lhu         $t1, 0x3C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X3C);
    skip_16:
    // 0x8021E790: lhu         $t6, 0x3C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X3C);
    // 0x8021E794: lh          $t7, 0x40($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X40);
    // 0x8021E798: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x8021E79C: sh          $t0, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r8;
    // 0x8021E7A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E7A4: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8021E7A8: sh          $t9, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r25;
    // 0x8021E7AC: lhu         $t1, 0x3C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X3C);
L_8021E7B0:
    // 0x8021E7B0: lwc1        $f4, 0x70($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X70);
    // 0x8021E7B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E7B8: sh          $t1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r9;
    // 0x8021E7BC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021E7C0: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x8021E7C4: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021E7C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021E7CC: swc1        $f8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f8.u32l;
    // 0x8021E7D0: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021E7D4: swc1        $f10, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f10.u32l;
    // 0x8021E7D8: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021E7DC: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x8021E7E0: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x8021E7E4: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x8021E7E8: ldc1        $f8, -0x52A0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X52A0);
    // 0x8021E7EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021E7F0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8021E7F4: nop

    // 0x8021E7F8: bc1fl       L_8021E878
    if (!c1cs) {
        // 0x8021E7FC: lh          $v1, 0x2($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X2);
            goto L_8021E878;
    }
    goto skip_17;
    // 0x8021E7FC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    skip_17:
    // 0x8021E800: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021E804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021E808: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8021E80C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021E810: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021E814: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021E818: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x8021E81C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8021E820: jal         0x8001B5AC
    // 0x8021E824: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021E824: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8021E828: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021E82C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021E830: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E834: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021E838: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8021E83C: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8021E840: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E844: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8021E848: nop

    // 0x8021E84C: bc1fl       L_8021E878
    if (!c1cs) {
        // 0x8021E850: lh          $v1, 0x2($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X2);
            goto L_8021E878;
    }
    goto skip_18;
    // 0x8021E850: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    skip_18:
    // 0x8021E854: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x8021E858: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021E85C: bnel        $t2, $at, L_8021E870
    if (ctx->r10 != ctx->r1) {
        // 0x8021E860: swc1        $f2, 0x28($a3)
        MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
            goto L_8021E870;
    }
    goto skip_19;
    // 0x8021E860: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
    skip_19:
    // 0x8021E864: b           L_8021E874
    // 0x8021E868: swc1        $f18, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f18.u32l;
        goto L_8021E874;
    // 0x8021E868: swc1        $f18, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f18.u32l;
    // 0x8021E86C: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_8021E870:
    // 0x8021E870: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_8021E874:
    // 0x8021E874: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_8021E878:
    // 0x8021E878: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021E87C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021E880: beql        $v1, $zero, L_8021E894
    if (ctx->r3 == 0) {
        // 0x8021E884: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021E894;
    }
    goto skip_20;
    // 0x8021E884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_20:
    // 0x8021E888: jal         0x80213F98
    // 0x8021E88C: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    func_80213F98_67D978(rdram, ctx);
        goto after_1;
    // 0x8021E88C: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    after_1:
    // 0x8021E890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021E894:
    // 0x8021E894: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021E898: jr          $ra
    // 0x8021E89C: nop

    TRACE_RETURN()
    return;
    // 0x8021E89C: nop

;}
RECOMP_FUNC void func_802181E4_681BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802181E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802181E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802181EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802181F0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802181F4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802181F8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802181FC: addiu       $a1, $a1, -0x7F30
    ctx->r5 = ADD32(ctx->r5, -0X7F30);
    // 0x80218200: jal         0x80034E08
    // 0x80218204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80218204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80218208: bne         $v0, $zero, L_80218218
    if (ctx->r2 != 0) {
        // 0x8021820C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80218218;
    }
    // 0x8021820C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218210: b           L_80218288
    // 0x80218214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218288;
    // 0x80218214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218218:
    // 0x80218218: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021821C: lwc1        $f0, -0x55A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55A8);
    // 0x80218220: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80218224: addiu       $a1, $a1, 0xD5C
    ctx->r5 = ADD32(ctx->r5, 0XD5C);
    // 0x80218228: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021822C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80218230: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80218234: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80218238: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021823C: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80218240: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80218244: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80218248: addiu       $t7, $zero, 0x4DB
    ctx->r15 = ADD32(0, 0X4DB);
    // 0x8021824C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80218250: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80218254: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80218258: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021825C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80218260: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80218264: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80218268: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021826C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80218270: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80218274: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80218278: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021827C: jal         0x8000DBF0
    // 0x80218280: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80218280: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80218284: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80218288:
    // 0x80218288: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021828C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80218290: jr          $ra
    // 0x80218294: nop

    TRACE_RETURN()
    return;
    // 0x80218294: nop

;}
RECOMP_FUNC void func_80217560_680F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217568: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021756C: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80217570: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80217574: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80217578: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021757C: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80217580: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80217584: jal         0x8001B5AC
    // 0x80217588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80217588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021758C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80217594: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80217598: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8021759C: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802175A0: lwc1        $f2, 0x28($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802175A4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802175A8: nop

    // 0x802175AC: bc1fl       L_80217618
    if (!c1cs) {
        // 0x802175B0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80217618;
    }
    goto skip_0;
    // 0x802175B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x802175B4: lbu         $v0, 0x5C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5C);
    // 0x802175B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802175BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802175C0: bnel        $v0, $at, L_802175DC
    if (ctx->r2 != ctx->r1) {
        // 0x802175C4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802175DC;
    }
    goto skip_1;
    // 0x802175C4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_1:
    // 0x802175C8: jal         0x80217658
    // 0x802175CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80217658_681038(rdram, ctx);
        goto after_1;
    // 0x802175CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802175D0: b           L_8021764C
    // 0x802175D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021764C;
    // 0x802175D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802175D8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_802175DC:
    // 0x802175DC: bne         $v0, $at, L_802175F4
    if (ctx->r2 != ctx->r1) {
        // 0x802175E0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802175F4;
    }
    // 0x802175E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802175E4: jal         0x80217658
    // 0x802175E8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80217658_681038(rdram, ctx);
        goto after_2;
    // 0x802175E8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x802175EC: b           L_8021764C
    // 0x802175F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021764C;
    // 0x802175F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802175F4:
    // 0x802175F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802175F8: bne         $v0, $at, L_8021760C
    if (ctx->r2 != ctx->r1) {
        // 0x802175FC: nop
    
            goto L_8021760C;
    }
    // 0x802175FC: nop

    // 0x80217600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80217604: b           L_80217648
    // 0x80217608: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
        goto L_80217648;
    // 0x80217608: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
L_8021760C:
    // 0x8021760C: b           L_80217648
    // 0x80217610: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
        goto L_80217648;
    // 0x80217610: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
    // 0x80217614: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80217618:
    // 0x80217618: nop

    // 0x8021761C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80217620: nop

    // 0x80217624: bc1fl       L_8021764C
    if (!c1cs) {
        // 0x80217628: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021764C;
    }
    goto skip_2;
    // 0x80217628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8021762C: lbu         $t6, 0x5C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X5C);
    // 0x80217630: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217634: bnel        $t6, $at, L_80217648
    if (ctx->r14 != ctx->r1) {
        // 0x80217638: swc1        $f0, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
            goto L_80217648;
    }
    goto skip_3;
    // 0x80217638: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    skip_3:
    // 0x8021763C: b           L_80217648
    // 0x80217640: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
        goto L_80217648;
    // 0x80217640: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
    // 0x80217644: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
L_80217648:
    // 0x80217648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021764C:
    // 0x8021764C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80217650: jr          $ra
    // 0x80217654: nop

    TRACE_RETURN()
    return;
    // 0x80217654: nop

;}
RECOMP_FUNC void func_80217F08_6818E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80217F14: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217F18: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80217F1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80217F20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80217F24: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80217F28: jal         0x8001B5AC
    // 0x80217F2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80217F2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80217F30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217F34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80217F38: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80217F3C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80217F40: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80217F44: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217F48: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80217F4C: nop

    // 0x80217F50: bc1fl       L_80217F7C
    if (!c1cs) {
        // 0x80217F54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80217F7C;
    }
    goto skip_0;
    // 0x80217F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80217F58: lbu         $t8, 0x5D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5D);
    // 0x80217F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217F60: bnel        $t8, $at, L_80217F78
    if (ctx->r24 != ctx->r1) {
        // 0x80217F64: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80217F78;
    }
    goto skip_1;
    // 0x80217F64: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x80217F68: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80217F6C: b           L_80217F78
    // 0x80217F70: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
        goto L_80217F78;
    // 0x80217F70: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x80217F74: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80217F78:
    // 0x80217F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217F7C:
    // 0x80217F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80217F80: jr          $ra
    // 0x80217F84: nop

    TRACE_RETURN()
    return;
    // 0x80217F84: nop

;}
RECOMP_FUNC void func_80224088_68DA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224088: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022408C: nop

    // 0x80224090: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x80224094: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x80224098: jr          $ra
    // 0x8022409C: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8022409C: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80228908_6922E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228908: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8022890C: jr          $ra
    // 0x80228910: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80228910: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021DF94_687974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DF94: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021DF98: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021DF9C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8021DFA0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8021DFA4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DFA8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8021DFAC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8021DFB0: addiu       $a1, $a1, -0x2504
    ctx->r5 = ADD32(ctx->r5, -0X2504);
    // 0x8021DFB4: jal         0x80034E08
    // 0x8021DFB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021DFB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021DFBC: bne         $v0, $zero, L_8021DFCC
    if (ctx->r2 != 0) {
        // 0x8021DFC0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8021DFCC;
    }
    // 0x8021DFC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021DFC4: b           L_8021E124
    // 0x8021DFC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E124;
    // 0x8021DFC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DFCC:
    // 0x8021DFCC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8021DFD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021DFD4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021DFD8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8021DFDC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021DFE0: addiu       $a1, $a1, 0x32C4
    ctx->r5 = ADD32(ctx->r5, 0X32C4);
    // 0x8021DFE4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021DFE8: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021DFEC: addiu       $t6, $zero, 0x4BC
    ctx->r14 = ADD32(0, 0X4BC);
    // 0x8021DFF0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021DFF4: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8021DFF8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021DFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021E000: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8021E004: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021E008: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E00C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E010: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021E014: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021E018: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E01C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E020: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E024: jal         0x8000DBF0
    // 0x8021E028: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021E028: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021E02C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x8021E030: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8021E034: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8021E038: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021E03C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8021E040: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021E044: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021E048: addiu       $a1, $a1, 0x3654
    ctx->r5 = ADD32(ctx->r5, 0X3654);
    // 0x8021E04C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021E050: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021E054: addiu       $t7, $zero, 0x4BC
    ctx->r15 = ADD32(0, 0X4BC);
    // 0x8021E058: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8021E05C: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8021E060: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021E064: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8021E068: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021E06C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E070: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E074: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021E078: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8021E07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021E080: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8021E084: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E088: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E08C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E090: jal         0x8000DBF0
    // 0x8021E094: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x8021E094: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8021E098: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E09C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8021E0A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021E0A4: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x8021E0A8: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8021E0AC: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021E0B0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021E0B4: addiu       $a1, $a1, 0x36B0
    ctx->r5 = ADD32(ctx->r5, 0X36B0);
    // 0x8021E0B8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021E0BC: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021E0C0: addiu       $t8, $zero, 0x4BC
    ctx->r24 = ADD32(0, 0X4BC);
    // 0x8021E0C4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021E0C8: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8021E0CC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021E0D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021E0D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E0D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E0DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021E0E0: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8021E0E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021E0E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E0EC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E0F0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E0F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8021E0F8: jal         0x8000DBF0
    // 0x8021E0FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x8021E0FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8021E100: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E104: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x8021E108: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021E10C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8021E110: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x8021E114: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021E118: swc1        $f6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f6.u32l;
    // 0x8021E11C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8021E120: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
L_8021E124:
    // 0x8021E124: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021E128: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021E12C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021E130: jr          $ra
    // 0x8021E134: nop

    TRACE_RETURN()
    return;
    // 0x8021E134: nop

;}
RECOMP_FUNC void func_8021E2C0_687CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E2C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021E2C4: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021E2C8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021E2CC: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x8021E2D0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021E2D4: nop

    // 0x8021E2D8: bc1fl       L_8021E2FC
    if (!c1cs) {
        // 0x8021E2DC: lwc1        $f10, 0x10($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021E2FC;
    }
    goto skip_0;
    // 0x8021E2DC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x8021E2E0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021E2E4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E2E8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E2EC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021E2F0: b           L_8021E304
    // 0x8021E2F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E304;
    // 0x8021E2F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E2F8: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
L_8021E2FC:
    // 0x8021E2FC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E300: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021E304:
    // 0x8021E304: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021E308: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021E30C: jr          $ra
    // 0x8021E310: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021E310: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80215918_67F2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021591C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215920: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80215924: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80215928: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021592C: ldc1        $f16, -0x5640($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5640);
    // 0x80215930: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80215934: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80215938: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8021593C: nop

    // 0x80215940: bc1fl       L_802159BC
    if (!c1cs) {
        // 0x80215944: addiu       $v1, $a0, 0x5C
        ctx->r3 = ADD32(ctx->r4, 0X5C);
            goto L_802159BC;
    }
    goto skip_0;
    // 0x80215944: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80215948: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8021594C: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80215950: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80215954: nop

    // 0x80215958: bc1fl       L_80215970
    if (!c1cs) {
        // 0x8021595C: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80215970;
    }
    goto skip_1;
    // 0x8021595C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x80215960: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80215964: b           L_80215970
    // 0x80215968: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80215970;
    // 0x80215968: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021596C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80215970:
    // 0x80215970: lwc1        $f14, 0x18($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80215974: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80215978: nop

    // 0x8021597C: bc1fl       L_80215998
    if (!c1cs) {
        // 0x80215980: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80215998;
    }
    goto skip_2;
    // 0x80215980: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x80215984: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80215988: swc1        $f12, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f12.u32l;
    // 0x8021598C: b           L_802159B8
    // 0x80215990: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
        goto L_802159B8;
    // 0x80215990: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x80215994: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80215998:
    // 0x80215998: nop

    // 0x8021599C: bc1fl       L_802159B4
    if (!c1cs) {
        // 0x802159A0: add.s       $f18, $f0, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_802159B4;
    }
    goto skip_3;
    // 0x802159A0: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
    skip_3:
    // 0x802159A4: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802159A8: b           L_802159B8
    // 0x802159AC: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
        goto L_802159B8;
    // 0x802159AC: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x802159B0: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
L_802159B4:
    // 0x802159B4: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_802159B8:
    // 0x802159B8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
L_802159BC:
    // 0x802159BC: lwc1        $f14, 0x24($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802159C0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802159C4: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802159C8: nop

    // 0x802159CC: bc1fl       L_80215A44
    if (!c1cs) {
        // 0x802159D0: lwc1        $f18, 0x4($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
            goto L_80215A44;
    }
    goto skip_4;
    // 0x802159D0: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    skip_4:
    // 0x802159D4: lwc1        $f12, 0x20($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802159D8: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802159DC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802159E0: nop

    // 0x802159E4: bc1fl       L_802159FC
    if (!c1cs) {
        // 0x802159E8: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_802159FC;
    }
    goto skip_5;
    // 0x802159E8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_5:
    // 0x802159EC: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x802159F0: b           L_802159FC
    // 0x802159F4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802159FC;
    // 0x802159F4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802159F8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_802159FC:
    // 0x802159FC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80215A00: nop

    // 0x80215A04: bc1fl       L_80215A20
    if (!c1cs) {
        // 0x80215A08: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_80215A20;
    }
    goto skip_6;
    // 0x80215A08: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_6:
    // 0x80215A0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215A10: swc1        $f12, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f12.u32l;
    // 0x80215A14: b           L_80215A40
    // 0x80215A18: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
        goto L_80215A40;
    // 0x80215A18: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
    // 0x80215A1C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_80215A20:
    // 0x80215A20: nop

    // 0x80215A24: bc1fl       L_80215A3C
    if (!c1cs) {
        // 0x80215A28: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_80215A3C;
    }
    goto skip_7;
    // 0x80215A28: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_7:
    // 0x80215A2C: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80215A30: b           L_80215A40
    // 0x80215A34: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
        goto L_80215A40;
    // 0x80215A34: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x80215A38: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_80215A3C:
    // 0x80215A3C: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
L_80215A40:
    // 0x80215A40: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
L_80215A44:
    // 0x80215A44: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x80215A48: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80215A4C: addiu       $a2, $a2, -0x4CDC
    ctx->r6 = ADD32(ctx->r6, -0X4CDC);
    // 0x80215A50: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x80215A54: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x80215A58: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80215A5C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80215A60: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80215A64: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x80215A68: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x80215A6C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80215A70: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x80215A74: addiu       $t7, $t7, -0x60E0
    ctx->r15 = ADD32(ctx->r15, -0X60E0);
    // 0x80215A78: swc1        $f6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f6.u32l;
    // 0x80215A7C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x80215A80: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80215A84: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x80215A88: lw          $t1, 0x38($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X38);
    // 0x80215A8C: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80215A90: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x80215A94: swc1        $f10, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f10.u32l;
    // 0x80215A98: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x80215A9C: lw          $t4, 0x38($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X38);
    // 0x80215AA0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80215AA4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80215AA8: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x80215AAC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80215AB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80215AB4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80215AB8: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80215ABC: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x80215AC0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80215AC4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80215AC8: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80215ACC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215AD0: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80215AD4: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80215AD8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80215ADC: lwc1        $f18, 0x28($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80215AE0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80215AE4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80215AE8: nop

    // 0x80215AEC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80215AF0: beql        $t2, $zero, L_80215B40
    if (ctx->r10 == 0) {
        // 0x80215AF4: mfc1        $t2, $f4
        ctx->r10 = (int32_t)ctx->f4.u32l;
            goto L_80215B40;
    }
    goto skip_8;
    // 0x80215AF4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    skip_8:
    // 0x80215AF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80215AFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80215B00: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80215B04: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80215B08: nop

    // 0x80215B0C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80215B10: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80215B14: nop

    // 0x80215B18: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80215B1C: bne         $t2, $zero, L_80215B34
    if (ctx->r10 != 0) {
        // 0x80215B20: nop
    
            goto L_80215B34;
    }
    // 0x80215B20: nop

    // 0x80215B24: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80215B28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215B2C: b           L_80215B4C
    // 0x80215B30: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80215B4C;
    // 0x80215B30: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80215B34:
    // 0x80215B34: b           L_80215B4C
    // 0x80215B38: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80215B4C;
    // 0x80215B38: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80215B3C: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
L_80215B40:
    // 0x80215B40: nop

    // 0x80215B44: bltz        $t2, L_80215B34
    if (SIGNED(ctx->r10) < 0) {
        // 0x80215B48: nop
    
            goto L_80215B34;
    }
    // 0x80215B48: nop

L_80215B4C:
    // 0x80215B4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80215B50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80215B54: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x80215B58: sll         $t4, $t2, 24
    ctx->r12 = S32(ctx->r10 << 24);
    // 0x80215B5C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80215B60: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215B64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215B68: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80215B6C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80215B70: nop

    // 0x80215B74: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80215B78: beql        $t6, $zero, L_80215BC8
    if (ctx->r14 == 0) {
        // 0x80215B7C: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_80215BC8;
    }
    goto skip_9;
    // 0x80215B7C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_9:
    // 0x80215B80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80215B84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80215B88: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215B8C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80215B90: nop

    // 0x80215B94: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80215B98: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80215B9C: nop

    // 0x80215BA0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80215BA4: bne         $t6, $zero, L_80215BBC
    if (ctx->r14 != 0) {
        // 0x80215BA8: nop
    
            goto L_80215BBC;
    }
    // 0x80215BA8: nop

    // 0x80215BAC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80215BB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215BB4: b           L_80215BD4
    // 0x80215BB8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80215BD4;
    // 0x80215BB8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80215BBC:
    // 0x80215BBC: b           L_80215BD4
    // 0x80215BC0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80215BD4;
    // 0x80215BC0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80215BC4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_80215BC8:
    // 0x80215BC8: nop

    // 0x80215BCC: bltz        $t6, L_80215BBC
    if (SIGNED(ctx->r14) < 0) {
        // 0x80215BD0: nop
    
            goto L_80215BBC;
    }
    // 0x80215BD0: nop

L_80215BD4:
    // 0x80215BD4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80215BD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80215BDC: lwc1        $f10, 0x30($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X30);
    // 0x80215BE0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80215BE4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80215BE8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80215BEC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80215BF0: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x80215BF4: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80215BF8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215BFC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80215C00: nop

    // 0x80215C04: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80215C08: beql        $t2, $zero, L_80215C58
    if (ctx->r10 == 0) {
        // 0x80215C0C: mfc1        $t2, $f18
        ctx->r10 = (int32_t)ctx->f18.u32l;
            goto L_80215C58;
    }
    goto skip_10;
    // 0x80215C0C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    skip_10:
    // 0x80215C10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80215C14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80215C18: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80215C1C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80215C20: nop

    // 0x80215C24: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80215C28: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80215C2C: nop

    // 0x80215C30: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80215C34: bne         $t2, $zero, L_80215C4C
    if (ctx->r10 != 0) {
        // 0x80215C38: nop
    
            goto L_80215C4C;
    }
    // 0x80215C38: nop

    // 0x80215C3C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80215C40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215C44: b           L_80215C64
    // 0x80215C48: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80215C64;
    // 0x80215C48: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80215C4C:
    // 0x80215C4C: b           L_80215C64
    // 0x80215C50: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80215C64;
    // 0x80215C50: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80215C54: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
L_80215C58:
    // 0x80215C58: nop

    // 0x80215C5C: bltz        $t2, L_80215C4C
    if (SIGNED(ctx->r10) < 0) {
        // 0x80215C60: nop
    
            goto L_80215C4C;
    }
    // 0x80215C60: nop

L_80215C64:
    // 0x80215C64: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80215C68: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80215C6C: lwc1        $f4, 0x34($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X34);
    // 0x80215C70: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80215C74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80215C78: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80215C7C: sll         $t5, $t3, 8
    ctx->r13 = S32(ctx->r11 << 8);
    // 0x80215C80: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x80215C84: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80215C88: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80215C8C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80215C90: nop

    // 0x80215C94: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80215C98: beql        $t4, $zero, L_80215CE8
    if (ctx->r12 == 0) {
        // 0x80215C9C: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_80215CE8;
    }
    goto skip_11;
    // 0x80215C9C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_11:
    // 0x80215CA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80215CA4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80215CA8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215CAC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80215CB0: nop

    // 0x80215CB4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80215CB8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80215CBC: nop

    // 0x80215CC0: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80215CC4: bne         $t4, $zero, L_80215CDC
    if (ctx->r12 != 0) {
        // 0x80215CC8: nop
    
            goto L_80215CDC;
    }
    // 0x80215CC8: nop

    // 0x80215CCC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80215CD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80215CD4: b           L_80215CF4
    // 0x80215CD8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_80215CF4;
    // 0x80215CD8: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_80215CDC:
    // 0x80215CDC: b           L_80215CF4
    // 0x80215CE0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_80215CF4;
    // 0x80215CE0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80215CE4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_80215CE8:
    // 0x80215CE8: nop

    // 0x80215CEC: bltz        $t4, L_80215CDC
    if (SIGNED(ctx->r12) < 0) {
        // 0x80215CF0: nop
    
            goto L_80215CDC;
    }
    // 0x80215CF0: nop

L_80215CF4:
    // 0x80215CF4: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x80215CF8: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x80215CFC: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x80215D00: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80215D04: lui         $t3, 0xB800
    ctx->r11 = S32(0XB800 << 16);
    // 0x80215D08: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x80215D0C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80215D10: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80215D14: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80215D18: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80215D1C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x80215D20: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x80215D24: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80215D28: lw          $v0, 0x30($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X30);
    // 0x80215D2C: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80215D30: subu        $t7, $a3, $v0
    ctx->r15 = SUB32(ctx->r7, ctx->r2);
    // 0x80215D34: and         $t4, $t5, $t7
    ctx->r12 = ctx->r13 & ctx->r15;
    // 0x80215D38: and         $a1, $t4, $a3
    ctx->r5 = ctx->r12 & ctx->r7;
    // 0x80215D3C: jal         0x80040620
    // 0x80215D40: and         $a0, $v0, $a3
    ctx->r4 = ctx->r2 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80215D40: and         $a0, $v0, $a3
    ctx->r4 = ctx->r2 & ctx->r7;
    after_0:
    // 0x80215D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80215D4C: jr          $ra
    // 0x80215D50: nop

    TRACE_RETURN()
    return;
    // 0x80215D50: nop

;}
RECOMP_FUNC void func_80217754_681134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217754: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80217758: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021775C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80217760: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80217764: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217768: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021776C: addiu       $a1, $a1, 0x7560
    ctx->r5 = ADD32(ctx->r5, 0X7560);
    // 0x80217770: jal         0x80034E08
    // 0x80217774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80217774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80217778: bne         $v0, $zero, L_80217788
    if (ctx->r2 != 0) {
        // 0x8021777C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217788;
    }
    // 0x8021777C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217780: b           L_802177EC
    // 0x80217784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802177EC;
    // 0x80217784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217788:
    // 0x80217788: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021778C: lwc1        $f0, -0x55E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55E4);
    // 0x80217790: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80217794: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80217798: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021779C: addiu       $a1, $a1, 0x51C
    ctx->r5 = ADD32(ctx->r5, 0X51C);
    // 0x802177A0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802177A4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802177A8: addiu       $t6, $zero, 0x4DC
    ctx->r14 = ADD32(0, 0X4DC);
    // 0x802177AC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802177B0: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802177B4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802177B8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802177BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802177C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802177C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802177C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802177CC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802177D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802177D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802177D8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802177DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802177E0: jal         0x8000DBF0
    // 0x802177E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802177E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802177E8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802177EC:
    // 0x802177EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802177F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802177F4: jr          $ra
    // 0x802177F8: nop

    TRACE_RETURN()
    return;
    // 0x802177F8: nop

;}
RECOMP_FUNC void func_80212BAC_67C58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212BAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212BB0: jr          $ra
    // 0x80212BB4: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80212BB4: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021CE00_6867E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021CE00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021CE04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021CE08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021CE0C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8021CE10: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021CE14: ldc1        $f4, -0x5300($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5300);
    // 0x8021CE18: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021CE1C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021CE20: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021CE24: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021CE28: addiu       $t1, $a0, 0x5C
    ctx->r9 = ADD32(ctx->r4, 0X5C);
    // 0x8021CE2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021CE30: bc1f        L_8021CEA8
    if (!c1cs) {
        // 0x8021CE34: addiu       $v1, $v1, -0x4CDC
        ctx->r3 = ADD32(ctx->r3, -0X4CDC);
            goto L_8021CEA8;
    }
    // 0x8021CE34: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021CE38: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8021CE3C: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8021CE40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021CE44: nop

    // 0x8021CE48: bc1fl       L_8021CE60
    if (!c1cs) {
        // 0x8021CE4C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021CE60;
    }
    goto skip_0;
    // 0x8021CE4C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x8021CE50: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021CE54: b           L_8021CE60
    // 0x8021CE58: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021CE60;
    // 0x8021CE58: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021CE5C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021CE60:
    // 0x8021CE60: lwc1        $f14, 0x14($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X14);
    // 0x8021CE64: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021CE68: nop

    // 0x8021CE6C: bc1fl       L_8021CE88
    if (!c1cs) {
        // 0x8021CE70: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021CE88;
    }
    goto skip_1;
    // 0x8021CE70: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x8021CE74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021CE78: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x8021CE7C: b           L_8021CEA8
    // 0x8021CE80: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
        goto L_8021CEA8;
    // 0x8021CE80: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
    // 0x8021CE84: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021CE88:
    // 0x8021CE88: nop

    // 0x8021CE8C: bc1fl       L_8021CEA4
    if (!c1cs) {
        // 0x8021CE90: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021CEA4;
    }
    goto skip_2;
    // 0x8021CE90: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_2:
    // 0x8021CE94: sub.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021CE98: b           L_8021CEA8
    // 0x8021CE9C: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_8021CEA8;
    // 0x8021CE9C: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x8021CEA0: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_8021CEA4:
    // 0x8021CEA4: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
L_8021CEA8:
    // 0x8021CEA8: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8021CEAC: ldc1        $f16, -0x52F8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X52F8);
    // 0x8021CEB0: addiu       $t1, $a0, 0x5C
    ctx->r9 = ADD32(ctx->r4, 0X5C);
    // 0x8021CEB4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8021CEB8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x8021CEBC: lwc1        $f14, 0x10($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X10);
    // 0x8021CEC0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021CEC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021CEC8: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021CECC: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021CED0: nop

    // 0x8021CED4: bc1fl       L_8021CF74
    if (!c1cs) {
        // 0x8021CED8: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8021CF74;
    }
    goto skip_3;
    // 0x8021CED8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x8021CEDC: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8021CEE0: lwc1        $f2, 0x8($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021CEE4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021CEE8: nop

    // 0x8021CEEC: bc1fl       L_8021CF04
    if (!c1cs) {
        // 0x8021CEF0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021CF04;
    }
    goto skip_4;
    // 0x8021CEF0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_4:
    // 0x8021CEF4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021CEF8: b           L_8021CF04
    // 0x8021CEFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021CF04;
    // 0x8021CEFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021CF00: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021CF04:
    // 0x8021CF04: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021CF08: nop

    // 0x8021CF0C: bc1fl       L_8021CF28
    if (!c1cs) {
        // 0x8021CF10: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021CF28;
    }
    goto skip_5;
    // 0x8021CF10: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_5:
    // 0x8021CF14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021CF18: swc1        $f12, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f12.u32l;
    // 0x8021CF1C: b           L_8021CF48
    // 0x8021CF20: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_8021CF48;
    // 0x8021CF20: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    // 0x8021CF24: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021CF28:
    // 0x8021CF28: nop

    // 0x8021CF2C: bc1fl       L_8021CF44
    if (!c1cs) {
        // 0x8021CF30: add.s       $f18, $f2, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021CF44;
    }
    goto skip_6;
    // 0x8021CF30: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x8021CF34: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021CF38: b           L_8021CF48
    // 0x8021CF3C: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
        goto L_8021CF48;
    // 0x8021CF3C: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x8021CF40: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
L_8021CF44:
    // 0x8021CF44: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
L_8021CF48:
    // 0x8021CF48: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021CF4C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8021CF50: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x8021CF54: nop

    // 0x8021CF58: bc1fl       L_8021CF74
    if (!c1cs) {
        // 0x8021CF5C: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8021CF74;
    }
    goto skip_7;
    // 0x8021CF5C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_7:
    // 0x8021CF60: jal         0x80034ED4
    // 0x8021CF64: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x8021CF64: nop

    after_0:
    // 0x8021CF68: b           L_8021D12C
    // 0x8021CF6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021D12C;
    // 0x8021CF6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021CF70: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_8021CF74:
    // 0x8021CF74: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021CF78: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021CF7C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021CF80: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x8021CF84: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021CF88: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021CF8C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8021CF90: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021CF94: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021CF98: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021CF9C: nop

    // 0x8021CFA0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021CFA4: beql        $t9, $zero, L_8021CFF4
    if (ctx->r25 == 0) {
        // 0x8021CFA8: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8021CFF4;
    }
    goto skip_8;
    // 0x8021CFA8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_8:
    // 0x8021CFAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021CFB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021CFB4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021CFB8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021CFBC: nop

    // 0x8021CFC0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021CFC4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021CFC8: nop

    // 0x8021CFCC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021CFD0: bne         $t9, $zero, L_8021CFE8
    if (ctx->r25 != 0) {
        // 0x8021CFD4: nop
    
            goto L_8021CFE8;
    }
    // 0x8021CFD4: nop

    // 0x8021CFD8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8021CFDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021CFE0: b           L_8021D000
    // 0x8021CFE4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021D000;
    // 0x8021CFE4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021CFE8:
    // 0x8021CFE8: b           L_8021D000
    // 0x8021CFEC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021D000;
    // 0x8021CFEC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021CFF0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8021CFF4:
    // 0x8021CFF4: nop

    // 0x8021CFF8: bltz        $t9, L_8021CFE8
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021CFFC: nop
    
            goto L_8021CFE8;
    }
    // 0x8021CFFC: nop

L_8021D000:
    // 0x8021D000: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021D004: sltiu       $at, $t9, 0xFF
    ctx->r1 = ctx->r25 < 0XFF ? 1 : 0;
    // 0x8021D008: bnel        $at, $zero, L_8021D034
    if (ctx->r1 != 0) {
        // 0x8021D00C: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_8021D034;
    }
    goto skip_9;
    // 0x8021D00C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_9:
    // 0x8021D010: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D014: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x8021D018: addiu       $t5, $t5, -0x26E0
    ctx->r13 = ADD32(ctx->r13, -0X26E0);
    // 0x8021D01C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8021D020: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021D024: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8021D028: b           L_8021D04C
    // 0x8021D02C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8021D04C;
    // 0x8021D02C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8021D030: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8021D034:
    // 0x8021D034: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021D038: addiu       $t8, $t8, -0x6050
    ctx->r24 = ADD32(ctx->r24, -0X6050);
    // 0x8021D03C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D040: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D044: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D048: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8021D04C:
    // 0x8021D04C: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8021D050: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x8021D054: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021D058: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8021D05C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D060: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021D064: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8021D068: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021D06C: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021D070: lui         $t2, 0x8FFF
    ctx->r10 = S32(0X8FFF << 16);
    // 0x8021D074: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8021D078: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021D07C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021D080: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021D084: nop

    // 0x8021D088: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021D08C: beql        $t5, $zero, L_8021D0DC
    if (ctx->r13 == 0) {
        // 0x8021D090: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8021D0DC;
    }
    goto skip_10;
    // 0x8021D090: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x8021D094: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021D098: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021D09C: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021D0A0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021D0A4: nop

    // 0x8021D0A8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021D0AC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021D0B0: nop

    // 0x8021D0B4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021D0B8: bne         $t5, $zero, L_8021D0D0
    if (ctx->r13 != 0) {
        // 0x8021D0BC: nop
    
            goto L_8021D0D0;
    }
    // 0x8021D0BC: nop

    // 0x8021D0C0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8021D0C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021D0C8: b           L_8021D0E8
    // 0x8021D0CC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021D0E8;
    // 0x8021D0CC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8021D0D0:
    // 0x8021D0D0: b           L_8021D0E8
    // 0x8021D0D4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021D0E8;
    // 0x8021D0D4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021D0D8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8021D0DC:
    // 0x8021D0DC: nop

    // 0x8021D0E0: bltz        $t5, L_8021D0D0
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021D0E4: nop
    
            goto L_8021D0D0;
    }
    // 0x8021D0E4: nop

L_8021D0E8:
    // 0x8021D0E8: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8021D0EC: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x8021D0F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D0F4: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x8021D0F8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021D0FC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D100: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D104: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D108: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D10C: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x8021D110: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8021D114: subu        $t3, $t2, $t0
    ctx->r11 = SUB32(ctx->r10, ctx->r8);
    // 0x8021D118: and         $t4, $t9, $t3
    ctx->r12 = ctx->r25 & ctx->r11;
    // 0x8021D11C: and         $a1, $t4, $t2
    ctx->r5 = ctx->r12 & ctx->r10;
    // 0x8021D120: jal         0x80040620
    // 0x8021D124: and         $a0, $t0, $t2
    ctx->r4 = ctx->r8 & ctx->r10;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8021D124: and         $a0, $t0, $t2
    ctx->r4 = ctx->r8 & ctx->r10;
    after_1:
    // 0x8021D128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021D12C:
    // 0x8021D12C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021D130: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021D134: jr          $ra
    // 0x8021D138: nop

    TRACE_RETURN()
    return;
    // 0x8021D138: nop

;}
RECOMP_FUNC void func_80228DB0_692790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228DB4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80228DB8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228DBC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80228DC0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228DC4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80228DC8: addiu       $a1, $a1, -0x758C
    ctx->r5 = ADD32(ctx->r5, -0X758C);
    // 0x80228DCC: jal         0x80034E08
    // 0x80228DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80228DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80228DD4: bne         $v0, $zero, L_80228DE4
    if (ctx->r2 != 0) {
        // 0x80228DD8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80228DE4;
    }
    // 0x80228DD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80228DDC: b           L_80228E78
    // 0x80228DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80228E78;
    // 0x80228DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80228DE4:
    // 0x80228DE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228DE8: lwc1        $f0, -0x4D90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D90);
    // 0x80228DEC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80228DF0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80228DF4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80228DF8: addiu       $a1, $a1, 0x4380
    ctx->r5 = ADD32(ctx->r5, 0X4380);
    // 0x80228DFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80228E00: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80228E04: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x80228E08: addiu       $t7, $zero, 0x4E3
    ctx->r15 = ADD32(0, 0X4E3);
    // 0x80228E0C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80228E10: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80228E14: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80228E18: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80228E1C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80228E20: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80228E24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80228E28: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80228E2C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80228E30: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80228E34: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80228E38: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80228E3C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80228E40: jal         0x8000DBF0
    // 0x80228E44: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80228E44: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80228E48: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80228E4C: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x80228E50: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80228E54: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x80228E58: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80228E5C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80228E60: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x80228E64: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80228E68: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x80228E6C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80228E70: sh          $t8, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r24;
    // 0x80228E74: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
L_80228E78:
    // 0x80228E78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228E7C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80228E80: jr          $ra
    // 0x80228E84: nop

    TRACE_RETURN()
    return;
    // 0x80228E84: nop

;}
RECOMP_FUNC void func_802171F8_680BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802171F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802171FC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80217200: swc1        $f12, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f12.u32l;
    // 0x80217204: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80217208: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021720C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80217210: nop

    // 0x80217214: bc1fl       L_80217234
    if (!c1cs) {
        // 0x80217218: lwc1        $f6, 0x4C($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
            goto L_80217234;
    }
    goto skip_0;
    // 0x80217218: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    skip_0:
    // 0x8021721C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217220: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80217224: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80217228: b           L_80217238
    // 0x8021722C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80217238;
    // 0x8021722C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80217230: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
L_80217234:
    // 0x80217234: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_80217238:
    // 0x80217238: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021723C: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80217240: jr          $ra
    // 0x80217244: swc1        $f10, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80217244: swc1        $f10, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8022406C_68DA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022406C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80224070: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80224074: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80224078: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8022407C: lwc1        $f8, 0x6C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80224080: jr          $ra
    // 0x80224084: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80224084: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80229278_692C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229278: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8022927C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80229280: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80229284: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80229288: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8022928C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80229290: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80229294: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80229298: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8022929C: bc1f        L_802292BC
    if (!c1cs) {
        // 0x802292A0: swc1        $f4, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
            goto L_802292BC;
    }
    // 0x802292A0: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x802292A4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802292A8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802292AC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802292B0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802292B4: b           L_802292C8
    // 0x802292B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802292C8;
    // 0x802292B8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802292BC:
    // 0x802292BC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802292C0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802292C4: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_802292C8:
    // 0x802292C8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802292CC: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802292D0: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802292D4: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802292D8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802292DC: nop

    // 0x802292E0: bc1f        L_802292F4
    if (!c1cs) {
        // 0x802292E4: swc1        $f4, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
            goto L_802292F4;
    }
    // 0x802292E4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x802292E8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802292EC: b           L_802292F8
    // 0x802292F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802292F8;
    // 0x802292F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802292F4:
    // 0x802292F4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802292F8:
    // 0x802292F8: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802292FC: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80229300: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80229304: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80229308: nop

    // 0x8022930C: bc1f        L_80229320
    if (!c1cs) {
        // 0x80229310: swc1        $f6, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
            goto L_80229320;
    }
    // 0x80229310: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80229314: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80229318: b           L_80229324
    // 0x8022931C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80229324;
    // 0x8022931C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80229320:
    // 0x80229320: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80229324:
    // 0x80229324: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80229328: jr          $ra
    // 0x8022932C: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8022932C: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80228CC4_6926A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CC4: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80228CC8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80228CCC: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80228CD0: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80228CD4: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80228CD8: jr          $ra
    // 0x80228CDC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80228CDC: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80228C9C_69267C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C9C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228CA0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80228CA4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80228CA8: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80228CAC: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x80228CB0: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80228CB4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x80228CB8: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x80228CBC: jr          $ra
    // 0x80228CC0: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80228CC0: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80229CB8_693698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80229CBC: jr          $ra
    // 0x80229CC0: sb          $t6, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80229CC0: sb          $t6, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80228454_691E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022845C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80228460: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80228464: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228468: ldc1        $f16, -0x4DB0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4DB0);
    // 0x8022846C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80228470: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228474: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80228478: nop

    // 0x8022847C: bc1fl       L_802284F8
    if (!c1cs) {
        // 0x80228480: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802284F8;
    }
    goto skip_0;
    // 0x80228480: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x80228484: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80228488: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8022848C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80228490: nop

    // 0x80228494: bc1fl       L_802284AC
    if (!c1cs) {
        // 0x80228498: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802284AC;
    }
    goto skip_1;
    // 0x80228498: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x8022849C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802284A0: b           L_802284AC
    // 0x802284A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802284AC;
    // 0x802284A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802284A8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802284AC:
    // 0x802284AC: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802284B0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802284B4: nop

    // 0x802284B8: bc1fl       L_802284D4
    if (!c1cs) {
        // 0x802284BC: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802284D4;
    }
    goto skip_2;
    // 0x802284BC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x802284C0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802284C4: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x802284C8: b           L_802284F4
    // 0x802284CC: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
        goto L_802284F4;
    // 0x802284CC: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x802284D0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802284D4:
    // 0x802284D4: nop

    // 0x802284D8: bc1fl       L_802284F0
    if (!c1cs) {
        // 0x802284DC: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802284F0;
    }
    goto skip_3;
    // 0x802284DC: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x802284E0: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802284E4: b           L_802284F4
    // 0x802284E8: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
        goto L_802284F4;
    // 0x802284E8: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802284EC: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_802284F0:
    // 0x802284F0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_802284F4:
    // 0x802284F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_802284F8:
    // 0x802284F8: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802284FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228500: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80228504: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80228508: nop

    // 0x8022850C: bc1fl       L_80228580
    if (!c1cs) {
        // 0x80228510: lwc1        $f14, 0x28($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
            goto L_80228580;
    }
    goto skip_4;
    // 0x80228510: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
    skip_4:
    // 0x80228514: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80228518: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8022851C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80228520: nop

    // 0x80228524: bc1fl       L_8022853C
    if (!c1cs) {
        // 0x80228528: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8022853C;
    }
    goto skip_5;
    // 0x80228528: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x8022852C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80228530: b           L_8022853C
    // 0x80228534: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022853C;
    // 0x80228534: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228538: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8022853C:
    // 0x8022853C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228540: nop

    // 0x80228544: bc1fl       L_8022855C
    if (!c1cs) {
        // 0x80228548: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8022855C;
    }
    goto skip_6;
    // 0x80228548: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x8022854C: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x80228550: b           L_8022857C
    // 0x80228554: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
        goto L_8022857C;
    // 0x80228554: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80228558: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8022855C:
    // 0x8022855C: nop

    // 0x80228560: bc1fl       L_80228578
    if (!c1cs) {
        // 0x80228564: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80228578;
    }
    goto skip_7;
    // 0x80228564: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80228568: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8022856C: b           L_8022857C
    // 0x80228570: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_8022857C;
    // 0x80228570: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80228574: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80228578:
    // 0x80228578: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
L_8022857C:
    // 0x8022857C: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
L_80228580:
    // 0x80228580: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80228584: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80228588: nop

    // 0x8022858C: bc1fl       L_80228600
    if (!c1cs) {
        // 0x80228590: lhu         $t6, 0x2C($v0)
        ctx->r14 = MEM_HU(ctx->r2, 0X2C);
            goto L_80228600;
    }
    goto skip_8;
    // 0x80228590: lhu         $t6, 0x2C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2C);
    skip_8:
    // 0x80228594: lwc1        $f12, 0x24($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80228598: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022859C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802285A0: nop

    // 0x802285A4: bc1fl       L_802285BC
    if (!c1cs) {
        // 0x802285A8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802285BC;
    }
    goto skip_9;
    // 0x802285A8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x802285AC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802285B0: b           L_802285BC
    // 0x802285B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802285BC;
    // 0x802285B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802285B8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802285BC:
    // 0x802285BC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802285C0: nop

    // 0x802285C4: bc1fl       L_802285DC
    if (!c1cs) {
        // 0x802285C8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802285DC;
    }
    goto skip_10;
    // 0x802285C8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x802285CC: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x802285D0: b           L_802285FC
    // 0x802285D4: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_802285FC;
    // 0x802285D4: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x802285D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802285DC:
    // 0x802285DC: nop

    // 0x802285E0: bc1fl       L_802285F8
    if (!c1cs) {
        // 0x802285E4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802285F8;
    }
    goto skip_11;
    // 0x802285E4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x802285E8: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802285EC: b           L_802285FC
    // 0x802285F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_802285FC;
    // 0x802285F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x802285F4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_802285F8:
    // 0x802285F8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
L_802285FC:
    // 0x802285FC: lhu         $t6, 0x2C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2C);
L_80228600:
    // 0x80228600: lw          $t7, 0x34($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X34);
    // 0x80228604: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228608: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x8022860C: lw          $t8, 0x34($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X34);
    // 0x80228610: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80228614: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80228618: lw          $t9, 0x34($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X34);
    // 0x8022861C: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80228620: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x80228624: lw          $t0, 0x34($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X34);
    // 0x80228628: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022862C: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x80228630: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x80228634: ldc1        $f10, -0x4DA8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4DA8);
    // 0x80228638: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8022863C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80228640: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x80228644: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80228648: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    // 0x8022864C: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    // 0x80228650: jal         0x8001B5AC
    // 0x80228654: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80228654: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80228658: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022865C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228660: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80228664: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x80228668: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022866C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80228670: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80228674: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80228678: nop

    // 0x8022867C: bc1fl       L_8022868C
    if (!c1cs) {
        // 0x80228680: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022868C;
    }
    goto skip_12;
    // 0x80228680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x80228684: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x80228688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022868C:
    // 0x8022868C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80228690: jr          $ra
    // 0x80228694: nop

    TRACE_RETURN()
    return;
    // 0x80228694: nop

;}
RECOMP_FUNC void func_8021C99C_68637C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C99C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021C9A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C9A4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8021C9A8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8021C9AC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8021C9B0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8021C9B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8021C9B8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8021C9BC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8021C9C0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021C9C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021C9C8: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x8021C9CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C9D0: lwc1        $f4, -0x530C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X530C);
    // 0x8021C9D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021C9D8: addiu       $s3, $a0, 0x5C
    ctx->r19 = ADD32(ctx->r4, 0X5C);
    // 0x8021C9DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021C9E0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021C9E4: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8021C9E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021C9EC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8021C9F0: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
L_8021C9F4:
    // 0x8021C9F4: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x8021C9F8: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8021C9FC: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8021CA00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021CA04: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x8021CA08: jal         0x8001B5AC
    // 0x8021CA0C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021CA0C: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    after_0:
    // 0x8021CA10: lw          $s0, 0x20($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X20);
    // 0x8021CA14: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x8021CA18: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8021CA1C: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8021CA20: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x8021CA24: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8021CA28: nop

    // 0x8021CA2C: bc1f        L_8021CA4C
    if (!c1cs) {
        // 0x8021CA30: nop
    
            goto L_8021CA4C;
    }
    // 0x8021CA30: nop

    // 0x8021CA34: lbu         $t7, 0x5($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X5);
    // 0x8021CA38: bnel        $s4, $t7, L_8021CA4C
    if (ctx->r20 != ctx->r15) {
        // 0x8021CA3C: swc1        $f2, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
            goto L_8021CA4C;
    }
    goto skip_0;
    // 0x8021CA3C: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    skip_0:
    // 0x8021CA40: b           L_8021CA4C
    // 0x8021CA44: swc1        $f22, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f22.u32l;
        goto L_8021CA4C;
    // 0x8021CA44: swc1        $f22, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f22.u32l;
    // 0x8021CA48: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
L_8021CA4C:
    // 0x8021CA4C: bne         $at, $zero, L_8021C9F4
    if (ctx->r1 != 0) {
        // 0x8021CA50: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021C9F4;
    }
    // 0x8021CA50: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021CA54: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8021CA58: addiu       $v0, $v0, -0x4CDC
    ctx->r2 = ADD32(ctx->r2, -0X4CDC);
    // 0x8021CA5C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8021CA60: lw          $t6, 0x20($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X20);
    // 0x8021CA64: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8021CA68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021CA6C: or          $t9, $t8, $v1
    ctx->r25 = ctx->r24 | ctx->r3;
    // 0x8021CA70: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8021CA74: sw          $t9, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r25;
    // 0x8021CA78: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8021CA7C: addu        $s1, $s3, $t7
    ctx->r17 = ADD32(ctx->r19, ctx->r15);
    // 0x8021CA80: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x8021CA84: or          $t9, $t8, $v1
    ctx->r25 = ctx->r24 | ctx->r3;
    // 0x8021CA88: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x8021CA8C: sw          $t9, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r25;
    // 0x8021CA90: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8021CA94: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x8021CA98: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8021CA9C: or          $t8, $t7, $v1
    ctx->r24 = ctx->r15 | ctx->r3;
    // 0x8021CAA0: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x8021CAA4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8021CAA8: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x8021CAAC: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x8021CAB0: or          $t7, $t6, $v1
    ctx->r15 = ctx->r14 | ctx->r3;
    // 0x8021CAB4: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x8021CAB8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8021CABC: lw          $t7, 0x2C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X2C);
    // 0x8021CAC0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8021CAC4: or          $t6, $t9, $v1
    ctx->r14 = ctx->r25 | ctx->r3;
    // 0x8021CAC8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x8021CACC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CAD0: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x8021CAD4: addiu       $t6, $t6, -0x5D90
    ctx->r14 = ADD32(ctx->r14, -0X5D90);
    // 0x8021CAD8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021CADC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021CAE0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8021CAE4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021CAE8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021CAEC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CAF0: lui         $t6, 0x802
    ctx->r14 = S32(0X802 << 16);
    // 0x8021CAF4: addiu       $t6, $t6, 0x58D0
    ctx->r14 = ADD32(ctx->r14, 0X58D0);
    // 0x8021CAF8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021CAFC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021CB00: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021CB04: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x8021CB08: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB0C: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8021CB10: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021CB14: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021CB18: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021CB1C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021CB20: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB24: lui         $t9, 0x701
    ctx->r25 = S32(0X701 << 16);
    // 0x8021CB28: ori         $t9, $t9, 0x8050
    ctx->r25 = ctx->r25 | 0X8050;
    // 0x8021CB2C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021CB30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021CB34: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x8021CB38: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021CB3C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8021CB40: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB44: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8021CB48: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8021CB4C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021CB50: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021CB54: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021CB58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021CB5C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB60: lui         $t6, 0x77F
    ctx->r14 = S32(0X77F << 16);
    // 0x8021CB64: ori         $t6, $t6, 0xF100
    ctx->r14 = ctx->r14 | 0XF100;
    // 0x8021CB68: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021CB6C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021CB70: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021CB74: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021CB78: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB7C: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8021CB80: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x8021CB84: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021CB88: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021CB8C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021CB90: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x8021CB94: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CB98: ori         $t6, $t6, 0x8050
    ctx->r14 = ctx->r14 | 0X8050;
    // 0x8021CB9C: ori         $t9, $t9, 0x1000
    ctx->r25 = ctx->r25 | 0X1000;
    // 0x8021CBA0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021CBA4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021CBA8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021CBAC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021CBB0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CBB4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021CBB8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021CBBC: lw          $t8, 0x34($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X34);
    // 0x8021CBC0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8021CBC4: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8021CBC8: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x8021CBCC: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x8021CBD0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021CBD4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021CBD8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8021CBDC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021CBE0: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8021CBE4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8021CBE8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021CBEC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021CBF0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021CBF4: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x8021CBF8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8021CBFC: lw          $v1, 0x30($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X30);
    // 0x8021CC00: subu        $t8, $a2, $v1
    ctx->r24 = SUB32(ctx->r6, ctx->r3);
    // 0x8021CC04: and         $t6, $t8, $t9
    ctx->r14 = ctx->r24 & ctx->r25;
    // 0x8021CC08: and         $a1, $t6, $a2
    ctx->r5 = ctx->r14 & ctx->r6;
    // 0x8021CC0C: jal         0x80040620
    // 0x8021CC10: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8021CC10: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_1:
    // 0x8021CC14: lw          $t7, 0x34($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X34);
    // 0x8021CC18: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8021CC1C: sw          $t8, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r24;
    // 0x8021CC20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021CC24: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8021CC28: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8021CC2C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8021CC30: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8021CC34: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8021CC38: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8021CC3C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021CC40: jr          $ra
    // 0x8021CC44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8021CC44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228860_692240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228860: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228864: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80228868: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022886C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80228870: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228874: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80228878: addiu       $a1, $a1, -0x77AC
    ctx->r5 = ADD32(ctx->r5, -0X77AC);
    // 0x8022887C: jal         0x80034E08
    // 0x80228880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80228880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80228884: bne         $v0, $zero, L_80228894
    if (ctx->r2 != 0) {
        // 0x80228888: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80228894;
    }
    // 0x80228888: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022888C: b           L_802288F8
    // 0x80228890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802288F8;
    // 0x80228890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80228894:
    // 0x80228894: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228898: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022889C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802288A0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802288A4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802288A8: addiu       $a1, $a1, 0x6240
    ctx->r5 = ADD32(ctx->r5, 0X6240);
    // 0x802288AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802288B0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802288B4: addiu       $t6, $zero, 0x4E4
    ctx->r14 = ADD32(0, 0X4E4);
    // 0x802288B8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802288BC: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802288C0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802288C4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802288C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802288CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802288D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802288D4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802288D8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802288DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802288E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802288E4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802288E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802288EC: jal         0x8000DBF0
    // 0x802288F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802288F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802288F4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802288F8:
    // 0x802288F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802288FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80228900: jr          $ra
    // 0x80228904: nop

    TRACE_RETURN()
    return;
    // 0x80228904: nop

;}
RECOMP_FUNC void func_802281B8_691B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802281BC: nop

    // 0x802281C0: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x802281C4: jr          $ra
    // 0x802281C8: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x802281C8: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8021C844_686224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C844: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021C848: jr          $ra
    // 0x8021C84C: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    TRACE_RETURN()
    return;
    // 0x8021C84C: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
;}
RECOMP_FUNC void func_80224388_68DD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224388: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022438C: jr          $ra
    // 0x80224390: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80224390: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80212440_67BE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212440: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212448: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021244C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80212450: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212454: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212458: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021245C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80212460: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x80212464: bc1fl       L_80212488
    if (!c1cs) {
        // 0x80212468: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_80212488;
    }
    goto skip_0;
    // 0x80212468: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x8021246C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212470: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80212474: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212478: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021247C: b           L_80212490
    // 0x80212480: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212490;
    // 0x80212480: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212484: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_80212488:
    // 0x80212488: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021248C: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_80212490:
    // 0x80212490: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80212494: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80212498: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8021249C: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802124A0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802124A4: nop

    // 0x802124A8: bc1f        L_802124BC
    if (!c1cs) {
        // 0x802124AC: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_802124BC;
    }
    // 0x802124AC: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x802124B0: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802124B4: b           L_802124C4
    // 0x802124B8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_802124C4;
    // 0x802124B8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_802124BC:
    // 0x802124BC: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802124C0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_802124C4:
    // 0x802124C4: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802124C8: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802124CC: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802124D0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802124D4: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x802124D8: jal         0x800040A8
    // 0x802124DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802124DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802124E0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802124E4: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x802124E8: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x802124EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802124F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802124F4: jr          $ra
    // 0x802124F8: nop

    TRACE_RETURN()
    return;
    // 0x802124F8: nop

;}
RECOMP_FUNC void func_80225B3C_68F51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B3C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80225B40: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80225B44: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x80225B48: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x80225B4C: jr          $ra
    // 0x80225B50: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80225B50: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80224BA4_68E584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224BA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80224BA8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80224BAC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80224BB0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80224BB4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80224BB8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80224BBC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80224BC0: addiu       $a1, $a1, 0x49A0
    ctx->r5 = ADD32(ctx->r5, 0X49A0);
    // 0x80224BC4: jal         0x80034E08
    // 0x80224BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80224BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80224BCC: bne         $v0, $zero, L_80224BDC
    if (ctx->r2 != 0) {
        // 0x80224BD0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80224BDC;
    }
    // 0x80224BD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80224BD4: b           L_80224D54
    // 0x80224BD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80224D54;
    // 0x80224BD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80224BDC:
    // 0x80224BDC: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80224BE0: addiu       $t6, $t6, -0x5B90
    ctx->r14 = ADD32(ctx->r14, -0X5B90);
    // 0x80224BE4: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x80224BE8: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80224BEC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80224BF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80224BF4: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80224BF8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80224BFC: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80224C00: addiu       $a1, $a1, 0x2C80
    ctx->r5 = ADD32(ctx->r5, 0X2C80);
    // 0x80224C04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80224C08: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80224C0C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80224C10: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80224C14: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80224C18: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80224C1C: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80224C20: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x80224C24: addiu       $t2, $zero, 0x4E2
    ctx->r10 = ADD32(0, 0X4E2);
    // 0x80224C28: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x80224C2C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80224C30: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80224C34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80224C38: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80224C3C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80224C40: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80224C44: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80224C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80224C4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80224C50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80224C54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80224C58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80224C5C: jal         0x8000DBF0
    // 0x80224C60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80224C60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80224C64: lbu         $t3, 0x5($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X5);
    // 0x80224C68: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80224C6C: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80224C70: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80224C74: sb          $t4, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r12;
    // 0x80224C78: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80224C7C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80224C80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80224C84: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80224C88: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80224C8C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80224C90: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x80224C94: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x80224C98: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80224C9C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80224CA0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80224CA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80224CA8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80224CAC: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x80224CB0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80224CB4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80224CB8: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80224CBC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80224CC0: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x80224CC4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80224CC8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80224CCC: nop

    // 0x80224CD0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80224CD4: beql        $t2, $zero, L_80224D24
    if (ctx->r10 == 0) {
        // 0x80224CD8: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_80224D24;
    }
    goto skip_0;
    // 0x80224CD8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x80224CDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80224CE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80224CE4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80224CE8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80224CEC: nop

    // 0x80224CF0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80224CF4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80224CF8: nop

    // 0x80224CFC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80224D00: bne         $t2, $zero, L_80224D18
    if (ctx->r10 != 0) {
        // 0x80224D04: nop
    
            goto L_80224D18;
    }
    // 0x80224D04: nop

    // 0x80224D08: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80224D0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80224D10: b           L_80224D30
    // 0x80224D14: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80224D30;
    // 0x80224D14: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80224D18:
    // 0x80224D18: b           L_80224D30
    // 0x80224D1C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80224D30;
    // 0x80224D1C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80224D20: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_80224D24:
    // 0x80224D24: nop

    // 0x80224D28: bltz        $t2, L_80224D18
    if (SIGNED(ctx->r10) < 0) {
        // 0x80224D2C: nop
    
            goto L_80224D18;
    }
    // 0x80224D2C: nop

L_80224D30:
    // 0x80224D30: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80224D34: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x80224D38: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80224D3C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80224D40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80224D44: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x80224D48: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80224D4C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80224D50: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_80224D54:
    // 0x80224D54: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80224D58: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80224D5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80224D60: jr          $ra
    // 0x80224D64: nop

    TRACE_RETURN()
    return;
    // 0x80224D64: nop

;}
RECOMP_FUNC void func_8021801C_6819FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021801C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80218020: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80218024: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80218028: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021802C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218030: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80218034: addiu       $a1, $a1, 0x7F08
    ctx->r5 = ADD32(ctx->r5, 0X7F08);
    // 0x80218038: jal         0x80034E08
    // 0x8021803C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021803C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80218040: bne         $v0, $zero, L_80218050
    if (ctx->r2 != 0) {
        // 0x80218044: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80218050;
    }
    // 0x80218044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218048: b           L_802180C0
    // 0x8021804C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802180C0;
    // 0x8021804C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218050:
    // 0x80218050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80218054: lwc1        $f0, -0x55B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55B0);
    // 0x80218058: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021805C: addiu       $a1, $a1, 0x780
    ctx->r5 = ADD32(ctx->r5, 0X780);
    // 0x80218060: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80218064: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80218068: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021806C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80218070: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80218074: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80218078: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021807C: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80218080: addiu       $t7, $zero, 0x4DB
    ctx->r15 = ADD32(0, 0X4DB);
    // 0x80218084: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80218088: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8021808C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80218090: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80218094: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80218098: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021809C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802180A0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802180A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802180A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802180AC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802180B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802180B4: jal         0x8000DBF0
    // 0x802180B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802180B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802180BC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802180C0:
    // 0x802180C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802180C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802180C8: jr          $ra
    // 0x802180CC: nop

    TRACE_RETURN()
    return;
    // 0x802180CC: nop

;}
RECOMP_FUNC void func_802169BC_68039C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802169BC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802169C0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802169C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802169C8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x802169CC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802169D0: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x802169D4: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x802169D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802169DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802169E0: bgez        $t6, L_802169F8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802169E4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802169F8;
    }
    // 0x802169E4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802169E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802169EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802169F0: nop

    // 0x802169F4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_802169F8:
    // 0x802169F8: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802169FC: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x80216A00: bgez        $a2, L_80216A18
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80216A04: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80216A18;
    }
    // 0x80216A04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80216A08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216A0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80216A10: nop

    // 0x80216A14: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80216A18:
    // 0x80216A18: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x80216A1C: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
    // 0x80216A20: bgez        $a3, L_80216A38
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80216A24: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80216A38;
    }
    // 0x80216A24: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80216A28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216A2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80216A30: nop

    // 0x80216A34: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80216A38:
    // 0x80216A38: swc1        $f4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f4.u32l;
    // 0x80216A3C: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x80216A40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216A44: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80216A48: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80216A4C: bgez        $t9, L_80216A60
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80216A50: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80216A60;
    }
    // 0x80216A50: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80216A54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80216A58: nop

    // 0x80216A5C: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_80216A60:
    // 0x80216A60: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80216A64: swc1        $f16, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f16.u32l;
    // 0x80216A68: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80216A6C: nop

    // 0x80216A70: bc1fl       L_80216A94
    if (!c1cs) {
        // 0x80216A74: lwc1        $f8, 0x28($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
            goto L_80216A94;
    }
    goto skip_0;
    // 0x80216A74: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    skip_0:
    // 0x80216A78: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80216A7C: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80216A80: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80216A84: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80216A88: b           L_80216A9C
    // 0x80216A8C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216A9C;
    // 0x80216A8C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216A90: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
L_80216A94:
    // 0x80216A94: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80216A98: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
L_80216A9C:
    // 0x80216A9C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80216AA0: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80216AA4: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80216AA8: div.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80216AAC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80216AB0: nop

    // 0x80216AB4: bc1f        L_80216AC8
    if (!c1cs) {
        // 0x80216AB8: swc1        $f16, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
            goto L_80216AC8;
    }
    // 0x80216AB8: swc1        $f16, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
    // 0x80216ABC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80216AC0: b           L_80216ACC
    // 0x80216AC4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216ACC;
    // 0x80216AC4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80216AC8:
    // 0x80216AC8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80216ACC:
    // 0x80216ACC: div.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80216AD0: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80216AD4: lwc1        $f12, 0x3C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80216AD8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80216ADC: nop

    // 0x80216AE0: bc1f        L_80216AF4
    if (!c1cs) {
        // 0x80216AE4: swc1        $f18, 0x38($v0)
        MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
            goto L_80216AF4;
    }
    // 0x80216AE4: swc1        $f18, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f18.u32l;
    // 0x80216AE8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80216AEC: b           L_80216AF8
    // 0x80216AF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216AF8;
    // 0x80216AF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80216AF4:
    // 0x80216AF4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80216AF8:
    // 0x80216AF8: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80216AFC: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80216B00: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80216B04: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80216B08: nop

    // 0x80216B0C: bc1f        L_80216B20
    if (!c1cs) {
        // 0x80216B10: swc1        $f6, 0x44($v0)
        MEM_W(0X44, ctx->r2) = ctx->f6.u32l;
            goto L_80216B20;
    }
    // 0x80216B10: swc1        $f6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f6.u32l;
    // 0x80216B14: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80216B18: b           L_80216B24
    // 0x80216B1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80216B24;
    // 0x80216B1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80216B20:
    // 0x80216B20: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80216B24:
    // 0x80216B24: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80216B28: jr          $ra
    // 0x80216B2C: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80216B2C: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80224F6C_68E94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224F6C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80224F70: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80224F74: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80224F78: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80224F7C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80224F80: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80224F84: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80224F88: addiu       $a1, $a1, 0x4D68
    ctx->r5 = ADD32(ctx->r5, 0X4D68);
    // 0x80224F8C: jal         0x80034E08
    // 0x80224F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80224F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80224F94: bne         $v0, $zero, L_80224FA4
    if (ctx->r2 != 0) {
        // 0x80224F98: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80224FA4;
    }
    // 0x80224F98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80224F9C: b           L_8022511C
    // 0x80224FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022511C;
    // 0x80224FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80224FA4:
    // 0x80224FA4: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80224FA8: addiu       $t6, $t6, -0x5B90
    ctx->r14 = ADD32(ctx->r14, -0X5B90);
    // 0x80224FAC: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x80224FB0: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80224FB4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80224FB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80224FBC: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80224FC0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80224FC4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80224FC8: addiu       $a1, $a1, 0x30D0
    ctx->r5 = ADD32(ctx->r5, 0X30D0);
    // 0x80224FCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80224FD0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80224FD4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80224FD8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80224FDC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80224FE0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80224FE4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80224FE8: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x80224FEC: addiu       $t2, $zero, 0x4E2
    ctx->r10 = ADD32(0, 0X4E2);
    // 0x80224FF0: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x80224FF4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80224FF8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80224FFC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80225000: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80225004: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80225008: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8022500C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80225010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80225014: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80225018: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8022501C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80225020: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80225024: jal         0x8000DBF0
    // 0x80225028: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80225028: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8022502C: lbu         $t3, 0x5($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X5);
    // 0x80225030: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80225034: addiu       $t0, $t0, -0x4CDC
    ctx->r8 = ADD32(ctx->r8, -0X4CDC);
    // 0x80225038: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8022503C: sb          $t4, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r12;
    // 0x80225040: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80225044: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80225048: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022504C: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80225050: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80225054: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80225058: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8022505C: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x80225060: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80225064: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80225068: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8022506C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80225070: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80225074: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x80225078: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8022507C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80225080: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80225084: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80225088: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8022508C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80225090: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80225094: nop

    // 0x80225098: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8022509C: beql        $t2, $zero, L_802250EC
    if (ctx->r10 == 0) {
        // 0x802250A0: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_802250EC;
    }
    goto skip_0;
    // 0x802250A0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x802250A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802250A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802250AC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802250B0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802250B4: nop

    // 0x802250B8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802250BC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802250C0: nop

    // 0x802250C4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x802250C8: bne         $t2, $zero, L_802250E0
    if (ctx->r10 != 0) {
        // 0x802250CC: nop
    
            goto L_802250E0;
    }
    // 0x802250CC: nop

    // 0x802250D0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802250D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802250D8: b           L_802250F8
    // 0x802250DC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_802250F8;
    // 0x802250DC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_802250E0:
    // 0x802250E0: b           L_802250F8
    // 0x802250E4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_802250F8;
    // 0x802250E4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x802250E8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_802250EC:
    // 0x802250EC: nop

    // 0x802250F0: bltz        $t2, L_802250E0
    if (SIGNED(ctx->r10) < 0) {
        // 0x802250F4: nop
    
            goto L_802250E0;
    }
    // 0x802250F4: nop

L_802250F8:
    // 0x802250F8: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x802250FC: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x80225100: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80225104: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80225108: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8022510C: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x80225110: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80225114: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80225118: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8022511C:
    // 0x8022511C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80225120: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80225124: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80225128: jr          $ra
    // 0x8022512C: nop

    TRACE_RETURN()
    return;
    // 0x8022512C: nop

;}
RECOMP_FUNC void func_8022564C_68F02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022564C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225654: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80225658: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022565C: ldc1        $f16, -0x4F00($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4F00);
    // 0x80225660: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80225664: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80225668: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8022566C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80225670: bc1fl       L_802256EC
    if (!c1cs) {
        // 0x80225674: lwc1        $f0, 0x24($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
            goto L_802256EC;
    }
    goto skip_0;
    // 0x80225674: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x80225678: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022567C: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80225680: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80225684: nop

    // 0x80225688: bc1fl       L_802256A0
    if (!c1cs) {
        // 0x8022568C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802256A0;
    }
    goto skip_1;
    // 0x8022568C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x80225690: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80225694: b           L_802256A0
    // 0x80225698: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802256A0;
    // 0x80225698: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8022569C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802256A0:
    // 0x802256A0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802256A4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802256A8: nop

    // 0x802256AC: bc1fl       L_802256C8
    if (!c1cs) {
        // 0x802256B0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802256C8;
    }
    goto skip_2;
    // 0x802256B0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x802256B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802256B8: swc1        $f12, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f12.u32l;
    // 0x802256BC: b           L_802256E8
    // 0x802256C0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
        goto L_802256E8;
    // 0x802256C0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x802256C4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802256C8:
    // 0x802256C8: nop

    // 0x802256CC: bc1fl       L_802256E4
    if (!c1cs) {
        // 0x802256D0: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802256E4;
    }
    goto skip_3;
    // 0x802256D0: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x802256D4: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802256D8: b           L_802256E8
    // 0x802256DC: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
        goto L_802256E8;
    // 0x802256DC: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
    // 0x802256E0: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_802256E4:
    // 0x802256E4: swc1        $f10, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f10.u32l;
L_802256E8:
    // 0x802256E8: lwc1        $f0, 0x24($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X24);
L_802256EC:
    // 0x802256EC: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x802256F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802256F4: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x802256F8: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x802256FC: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80225700: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80225704: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80225708: nop

    // 0x8022570C: bc1fl       L_80225780
    if (!c1cs) {
        // 0x80225710: lwc1        $f14, 0x28($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
            goto L_80225780;
    }
    goto skip_4;
    // 0x80225710: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
    skip_4:
    // 0x80225714: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80225718: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8022571C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80225720: nop

    // 0x80225724: bc1fl       L_8022573C
    if (!c1cs) {
        // 0x80225728: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8022573C;
    }
    goto skip_5;
    // 0x80225728: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x8022572C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80225730: b           L_8022573C
    // 0x80225734: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022573C;
    // 0x80225734: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80225738: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8022573C:
    // 0x8022573C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80225740: nop

    // 0x80225744: bc1fl       L_8022575C
    if (!c1cs) {
        // 0x80225748: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8022575C;
    }
    goto skip_6;
    // 0x80225748: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x8022574C: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x80225750: b           L_8022577C
    // 0x80225754: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
        goto L_8022577C;
    // 0x80225754: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80225758: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8022575C:
    // 0x8022575C: nop

    // 0x80225760: bc1fl       L_80225778
    if (!c1cs) {
        // 0x80225764: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80225778;
    }
    goto skip_7;
    // 0x80225764: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80225768: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8022576C: b           L_8022577C
    // 0x80225770: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
        goto L_8022577C;
    // 0x80225770: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80225774: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80225778:
    // 0x80225778: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
L_8022577C:
    // 0x8022577C: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
L_80225780:
    // 0x80225780: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80225784: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80225788: nop

    // 0x8022578C: bc1fl       L_80225800
    if (!c1cs) {
        // 0x80225790: lwc1        $f14, 0x34($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X34);
            goto L_80225800;
    }
    goto skip_8;
    // 0x80225790: lwc1        $f14, 0x34($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X34);
    skip_8:
    // 0x80225794: lwc1        $f12, 0x24($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80225798: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022579C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802257A0: nop

    // 0x802257A4: bc1fl       L_802257BC
    if (!c1cs) {
        // 0x802257A8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_802257BC;
    }
    goto skip_9;
    // 0x802257A8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x802257AC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802257B0: b           L_802257BC
    // 0x802257B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802257BC;
    // 0x802257B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802257B8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_802257BC:
    // 0x802257BC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802257C0: nop

    // 0x802257C4: bc1fl       L_802257DC
    if (!c1cs) {
        // 0x802257C8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802257DC;
    }
    goto skip_10;
    // 0x802257C8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x802257CC: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x802257D0: b           L_802257FC
    // 0x802257D4: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_802257FC;
    // 0x802257D4: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x802257D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802257DC:
    // 0x802257DC: nop

    // 0x802257E0: bc1fl       L_802257F8
    if (!c1cs) {
        // 0x802257E4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802257F8;
    }
    goto skip_11;
    // 0x802257E4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x802257E8: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802257EC: b           L_802257FC
    // 0x802257F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_802257FC;
    // 0x802257F0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x802257F4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_802257F8:
    // 0x802257F8: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
L_802257FC:
    // 0x802257FC: lwc1        $f14, 0x34($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X34);
L_80225800:
    // 0x80225800: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80225804: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80225808: nop

    // 0x8022580C: bc1fl       L_80225880
    if (!c1cs) {
        // 0x80225810: lwc1        $f6, 0x14($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80225880;
    }
    goto skip_12;
    // 0x80225810: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    skip_12:
    // 0x80225814: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80225818: lwc1        $f2, 0x2C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8022581C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80225820: nop

    // 0x80225824: bc1fl       L_8022583C
    if (!c1cs) {
        // 0x80225828: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8022583C;
    }
    goto skip_13;
    // 0x80225828: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x8022582C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80225830: b           L_8022583C
    // 0x80225834: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022583C;
    // 0x80225834: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80225838: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8022583C:
    // 0x8022583C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80225840: nop

    // 0x80225844: bc1fl       L_8022585C
    if (!c1cs) {
        // 0x80225848: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8022585C;
    }
    goto skip_14;
    // 0x80225848: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x8022584C: swc1        $f12, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f12.u32l;
    // 0x80225850: b           L_8022587C
    // 0x80225854: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
        goto L_8022587C;
    // 0x80225854: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x80225858: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8022585C:
    // 0x8022585C: nop

    // 0x80225860: bc1fl       L_80225878
    if (!c1cs) {
        // 0x80225864: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80225878;
    }
    goto skip_15;
    // 0x80225864: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x80225868: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8022586C: b           L_8022587C
    // 0x80225870: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
        goto L_8022587C;
    // 0x80225870: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    // 0x80225874: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80225878:
    // 0x80225878: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
L_8022587C:
    // 0x8022587C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
L_80225880:
    // 0x80225880: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80225884: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80225888: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8022588C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80225890: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x80225894: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80225898: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x8022589C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802258A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802258A4: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x802258A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802258AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802258B0: jal         0x8001B5AC
    // 0x802258B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x802258B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x802258B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802258BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802258C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802258C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802258C8: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802258CC: lwc1        $f2, 0x28($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802258D0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802258D4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802258D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802258DC: nop

    // 0x802258E0: bc1fl       L_80225948
    if (!c1cs) {
        // 0x802258E4: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_80225948;
    }
    goto skip_16;
    // 0x802258E4: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_16:
    // 0x802258E8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802258EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802258F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802258F4: bnel        $v1, $at, L_80225910
    if (ctx->r3 != ctx->r1) {
        // 0x802258F8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80225910;
    }
    goto skip_17;
    // 0x802258F8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_17:
    // 0x802258FC: jal         0x802259DC
    // 0x80225900: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802259DC_68F3BC(rdram, ctx);
        goto after_1;
    // 0x80225900: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80225904: b           L_80225974
    // 0x80225908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80225974;
    // 0x80225908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022590C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_80225910:
    // 0x80225910: bne         $v1, $at, L_80225928
    if (ctx->r3 != ctx->r1) {
        // 0x80225914: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80225928;
    }
    // 0x80225914: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80225918: jal         0x802259DC
    // 0x8022591C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_802259DC_68F3BC(rdram, ctx);
        goto after_2;
    // 0x8022591C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80225920: b           L_80225974
    // 0x80225924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80225974;
    // 0x80225924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80225928:
    // 0x80225928: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022592C: bne         $v1, $at, L_8022593C
    if (ctx->r3 != ctx->r1) {
        // 0x80225930: nop
    
            goto L_8022593C;
    }
    // 0x80225930: nop

    // 0x80225934: b           L_80225970
    // 0x80225938: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
        goto L_80225970;
    // 0x80225938: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
L_8022593C:
    // 0x8022593C: b           L_80225970
    // 0x80225940: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
        goto L_80225970;
    // 0x80225940: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
    // 0x80225944: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_80225948:
    // 0x80225948: nop

    // 0x8022594C: bc1fl       L_80225974
    if (!c1cs) {
        // 0x80225950: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80225974;
    }
    goto skip_18;
    // 0x80225950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
    // 0x80225954: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80225958: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022595C: bnel        $t6, $at, L_80225970
    if (ctx->r14 != ctx->r1) {
        // 0x80225960: swc1        $f18, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
            goto L_80225970;
    }
    goto skip_19;
    // 0x80225960: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    skip_19:
    // 0x80225964: b           L_80225970
    // 0x80225968: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
        goto L_80225970;
    // 0x80225968: swc1        $f12, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f12.u32l;
    // 0x8022596C: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
L_80225970:
    // 0x80225970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80225974:
    // 0x80225974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225978: jr          $ra
    // 0x8022597C: nop

    TRACE_RETURN()
    return;
    // 0x8022597C: nop

;}
RECOMP_FUNC void func_8021C7A4_686184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C7A4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021C7A8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021C7AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021C7B0: bgez        $t6, L_8021C7C8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021C7B4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021C7C8;
    }
    // 0x8021C7B4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021C7B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021C7BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C7C0: nop

    // 0x8021C7C4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021C7C8:
    // 0x8021C7C8: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021C7CC: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x8021C7D0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C7D4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021C7D8: nop

    // 0x8021C7DC: bc1fl       L_8021C800
    if (!c1cs) {
        // 0x8021C7E0: lwc1        $f18, 0xC($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021C800;
    }
    goto skip_0;
    // 0x8021C7E0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8021C7E4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C7E8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021C7EC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021C7F0: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021C7F4: b           L_8021C808
    // 0x8021C7F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C808;
    // 0x8021C7F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C7FC: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
L_8021C800:
    // 0x8021C800: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021C804: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021C808:
    // 0x8021C808: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021C80C: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021C810: jr          $ra
    // 0x8021C814: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C814: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020D818_6771F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D820: jal         0x8003FF50
    // 0x8020D824: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D824: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8020D828: jal         0x80038BC8
    // 0x8020D82C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x8020D82C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8020D830: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D834: jal         0x80013AC4
    // 0x8020D838: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_2;
    // 0x8020D838: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    after_2:
    // 0x8020D83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D844: jr          $ra
    // 0x8020D848: nop

    TRACE_RETURN()
    return;
    // 0x8020D848: nop

;}
RECOMP_FUNC void func_802289CC_6923AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289CC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802289D0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802289D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802289D8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802289DC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802289E0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802289E4: addiu       $a1, $a1, -0x7640
    ctx->r5 = ADD32(ctx->r5, -0X7640);
    // 0x802289E8: jal         0x80034E08
    // 0x802289EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802289EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802289F0: bne         $v0, $zero, L_80228A00
    if (ctx->r2 != 0) {
        // 0x802289F4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80228A00;
    }
    // 0x802289F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802289F8: b           L_80228A64
    // 0x802289FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80228A64;
    // 0x802289FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80228A00:
    // 0x80228A00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80228A04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228A08: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80228A0C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80228A10: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80228A14: addiu       $a1, $a1, 0x32D0
    ctx->r5 = ADD32(ctx->r5, 0X32D0);
    // 0x80228A18: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80228A1C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80228A20: addiu       $t6, $zero, 0x4E4
    ctx->r14 = ADD32(0, 0X4E4);
    // 0x80228A24: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80228A28: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80228A2C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80228A30: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80228A34: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80228A38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80228A3C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80228A40: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80228A44: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80228A48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80228A4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80228A50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80228A54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80228A58: jal         0x8000DBF0
    // 0x80228A5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80228A5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80228A60: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80228A64:
    // 0x80228A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228A68: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80228A6C: jr          $ra
    // 0x80228A70: nop

    TRACE_RETURN()
    return;
    // 0x80228A70: nop

;}
RECOMP_FUNC void func_80224430_68DE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80224434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80224438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022443C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80224440: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80224444: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80224448: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022444C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80224450: addiu       $a1, $a1, 0x42DC
    ctx->r5 = ADD32(ctx->r5, 0X42DC);
    // 0x80224454: jal         0x80034E08
    // 0x80224458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80224458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8022445C: bne         $v0, $zero, L_8022446C
    if (ctx->r2 != 0) {
        // 0x80224460: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8022446C;
    }
    // 0x80224460: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80224464: b           L_802245CC
    // 0x80224468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802245CC;
    // 0x80224468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022446C:
    // 0x8022446C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80224470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80224474: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80224478: swc1        $f4, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f4.u32l;
    // 0x8022447C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80224480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80224484: swc1        $f6, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f6.u32l;
    // 0x80224488: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8022448C: jal         0x80035EEC
    // 0x80224490: sb          $t6, 0x5D($s1)
    MEM_B(0X5D, ctx->r17) = ctx->r14;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80224490: sb          $t6, 0x5D($s1)
    MEM_B(0X5D, ctx->r17) = ctx->r14;
    after_1:
    // 0x80224494: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80224498: bne         $v0, $zero, L_802244A8
    if (ctx->r2 != 0) {
        // 0x8022449C: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_802244A8;
    }
    // 0x8022449C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802244A0: b           L_802245CC
    // 0x802244A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802245CC;
    // 0x802244A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802244A8:
    // 0x802244A8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802244AC: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x802244B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802244B4: addiu       $t1, $zero, 0x280
    ctx->r9 = ADD32(0, 0X280);
    // 0x802244B8: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
    // 0x802244BC: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x802244C0: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802244C4: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x802244C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802244CC: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
    // 0x802244D0: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x802244D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802244D8: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x802244DC: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
    // 0x802244E0: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x802244E4: addiu       $t0, $zero, 0x2009
    ctx->r8 = ADD32(0, 0X2009);
    // 0x802244E8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802244EC: sh          $t1, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r9;
    // 0x802244F0: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x802244F4: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
    // 0x802244F8: lw          $t5, 0x20($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X20);
    // 0x802244FC: lwc1        $f16, -0x4F34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F34);
    // 0x80224500: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x80224504: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80224508: swc1        $f16, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f16.u32l;
    // 0x8022450C: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80224510: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80224514: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x80224518: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x8022451C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80224520: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x80224524: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x80224528: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8022452C: beql        $t9, $zero, L_80224548
    if (ctx->r25 == 0) {
        // 0x80224530: lw          $t1, 0x20($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X20);
            goto L_80224548;
    }
    goto skip_0;
    // 0x80224530: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x80224534: beq         $t9, $at, L_80224584
    if (ctx->r25 == ctx->r1) {
        // 0x80224538: ori         $t6, $zero, 0xA009
        ctx->r14 = 0 | 0XA009;
            goto L_80224584;
    }
    // 0x80224538: ori         $t6, $zero, 0xA009
    ctx->r14 = 0 | 0XA009;
    // 0x8022453C: b           L_802245CC
    // 0x80224540: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_802245CC;
    // 0x80224540: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80224544: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
L_80224548:
    // 0x80224548: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x8022454C: jal         0x80014840
    // 0x80224550: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x80224550: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    after_2:
    // 0x80224554: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80224558: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x8022455C: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x80224560: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x80224564: jal         0x80014840
    // 0x80224568: sw          $v0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x80224568: sw          $v0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r2;
    after_3:
    // 0x8022456C: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x80224570: addiu       $t4, $zero, 0x4BA
    ctx->r12 = ADD32(0, 0X4BA);
    // 0x80224574: sw          $v0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r2;
    // 0x80224578: lw          $t5, 0x20($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X20);
    // 0x8022457C: b           L_802245C8
    // 0x80224580: sh          $t4, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r12;
        goto L_802245C8;
    // 0x80224580: sh          $t4, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r12;
L_80224584:
    // 0x80224584: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x80224588: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x8022458C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224590: addiu       $a1, $zero, 0x4B9
    ctx->r5 = ADD32(0, 0X4B9);
    // 0x80224594: jal         0x80014840
    // 0x80224598: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    func_80014840_15440(rdram, ctx);
        goto after_4;
    // 0x80224598: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    after_4:
    // 0x8022459C: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x802245A0: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x802245A4: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x802245A8: addiu       $a1, $zero, 0x4B9
    ctx->r5 = ADD32(0, 0X4B9);
    // 0x802245AC: jal         0x80014840
    // 0x802245B0: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_5;
    // 0x802245B0: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    after_5:
    // 0x802245B4: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x802245B8: addiu       $t0, $zero, 0x4B9
    ctx->r8 = ADD32(0, 0X4B9);
    // 0x802245BC: sw          $v0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r2;
    // 0x802245C0: lw          $t1, 0x20($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X20);
    // 0x802245C4: sh          $t0, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r8;
L_802245C8:
    // 0x802245C8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_802245CC:
    // 0x802245CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802245D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802245D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802245D8: jr          $ra
    // 0x802245DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802245DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021EE90_688870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EE90: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8021EE94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021EE98: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x8021EE9C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021EEA0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021EEA4: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8021EEA8: jr          $ra
    // 0x8021EEAC: nop

    TRACE_RETURN()
    return;
    // 0x8021EEAC: nop

;}
RECOMP_FUNC void func_8021D1B0_686B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D1B0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021D1B4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021D1B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021D1BC: bgez        $t6, L_8021D1D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021D1C0: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021D1D4;
    }
    // 0x8021D1C0: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021D1C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D1C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021D1CC: nop

    // 0x8021D1D0: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021D1D4:
    // 0x8021D1D4: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021D1D8: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x8021D1DC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021D1E0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021D1E4: nop

    // 0x8021D1E8: bc1fl       L_8021D20C
    if (!c1cs) {
        // 0x8021D1EC: lwc1        $f18, 0xC($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021D20C;
    }
    goto skip_0;
    // 0x8021D1EC: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8021D1F0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021D1F4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021D1F8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021D1FC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021D200: b           L_8021D214
    // 0x8021D204: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021D214;
    // 0x8021D204: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021D208: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
L_8021D20C:
    // 0x8021D20C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021D210: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021D214:
    // 0x8021D214: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021D218: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021D21C: jr          $ra
    // 0x8021D220: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021D220: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021C73C_68611C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C73C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C740: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021C744: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x8021C748: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021C74C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C750: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021C754: nop

    // 0x8021C758: bc1fl       L_8021C778
    if (!c1cs) {
        // 0x8021C75C: lwc1        $f6, 0x18($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
            goto L_8021C778;
    }
    goto skip_0;
    // 0x8021C75C: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x8021C760: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021C764: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021C768: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8021C76C: b           L_8021C77C
    // 0x8021C770: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021C77C;
    // 0x8021C770: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021C774: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
L_8021C778:
    // 0x8021C778: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_8021C77C:
    // 0x8021C77C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021C780: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8021C784: jr          $ra
    // 0x8021C788: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C788: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8021D5DC_686FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D5DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021D5E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021D5E4: lwc1        $f0, -0x52E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52E8);
    // 0x8021D5E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021D5EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021D5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021D5F4: lw          $v0, 0x88($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X88);
    // 0x8021D5F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021D5FC: sb          $t6, 0x61($a0)
    MEM_B(0X61, ctx->r4) = ctx->r14;
    // 0x8021D600: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x8021D604: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021D608: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021D60C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021D610: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x8021D614: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x8021D618: jal         0x8001B5AC
    // 0x8021D61C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021D61C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021D620: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8021D624: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021D628: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021D62C: addiu       $t5, $a1, 0x5C
    ctx->r13 = ADD32(ctx->r5, 0X5C);
    // 0x8021D630: lw          $v0, 0x2C($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2C);
    // 0x8021D634: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021D638: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021D63C: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021D640: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021D644: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8021D648: nop

    // 0x8021D64C: bc1fl       L_8021D678
    if (!c1cs) {
        // 0x8021D650: lwc1        $f12, 0x14($t5)
        ctx->f12.u32l = MEM_W(ctx->r13, 0X14);
            goto L_8021D678;
    }
    goto skip_0;
    // 0x8021D650: lwc1        $f12, 0x14($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X14);
    skip_0:
    // 0x8021D654: lbu         $t7, 0x5($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X5);
    // 0x8021D658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021D65C: bnel        $t7, $at, L_8021D674
    if (ctx->r15 != ctx->r1) {
        // 0x8021D660: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_8021D674;
    }
    goto skip_1;
    // 0x8021D660: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_1:
    // 0x8021D664: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021D668: b           L_8021D674
    // 0x8021D66C: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
        goto L_8021D674;
    // 0x8021D66C: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
    // 0x8021D670: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
L_8021D674:
    // 0x8021D674: lwc1        $f12, 0x14($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X14);
L_8021D678:
    // 0x8021D678: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021D67C: ldc1        $f18, -0x52E0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X52E0);
    // 0x8021D680: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8021D684: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x8021D688: nop

    // 0x8021D68C: bc1fl       L_8021D704
    if (!c1cs) {
        // 0x8021D690: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_8021D704;
    }
    goto skip_2;
    // 0x8021D690: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x8021D694: lwc1        $f2, 0x10($t5)
    ctx->f2.u32l = MEM_W(ctx->r13, 0X10);
    // 0x8021D698: lwc1        $f0, 0xC($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0XC);
    // 0x8021D69C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8021D6A0: nop

    // 0x8021D6A4: bc1fl       L_8021D6BC
    if (!c1cs) {
        // 0x8021D6A8: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8021D6BC;
    }
    goto skip_3;
    // 0x8021D6A8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_3:
    // 0x8021D6AC: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8021D6B0: b           L_8021D6BC
    // 0x8021D6B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_8021D6BC;
    // 0x8021D6B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8021D6B8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_8021D6BC:
    // 0x8021D6BC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021D6C0: nop

    // 0x8021D6C4: bc1fl       L_8021D6E0
    if (!c1cs) {
        // 0x8021D6C8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8021D6E0;
    }
    goto skip_4;
    // 0x8021D6C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_4:
    // 0x8021D6CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021D6D0: swc1        $f2, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f2.u32l;
    // 0x8021D6D4: b           L_8021D700
    // 0x8021D6D8: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
        goto L_8021D700;
    // 0x8021D6D8: swc1        $f6, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f6.u32l;
    // 0x8021D6DC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8021D6E0:
    // 0x8021D6E0: nop

    // 0x8021D6E4: bc1fl       L_8021D6FC
    if (!c1cs) {
        // 0x8021D6E8: add.s       $f10, $f0, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_8021D6FC;
    }
    goto skip_5;
    // 0x8021D6E8: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    skip_5:
    // 0x8021D6EC: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8021D6F0: b           L_8021D700
    // 0x8021D6F4: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
        goto L_8021D700;
    // 0x8021D6F4: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x8021D6F8: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
L_8021D6FC:
    // 0x8021D6FC: swc1        $f10, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f10.u32l;
L_8021D700:
    // 0x8021D700: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_8021D704:
    // 0x8021D704: lw          $t6, 0x2C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X2C);
    // 0x8021D708: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021D70C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021D710: sw          $t9, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r25;
    // 0x8021D714: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D718: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021D71C: addiu       $t9, $t9, -0x5D90
    ctx->r25 = ADD32(ctx->r25, -0X5D90);
    // 0x8021D720: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D724: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D728: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021D72C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D730: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D734: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D738: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021D73C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021D740: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D744: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D748: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D74C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D750: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D754: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x8021D758: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8021D75C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D760: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D764: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D768: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D76C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D770: lui         $t9, 0x801
    ctx->r25 = S32(0X801 << 16);
    // 0x8021D774: addiu       $t9, $t9, 0x78D0
    ctx->r25 = ADD32(ctx->r25, 0X78D0);
    // 0x8021D778: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D77C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D780: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8021D784: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D788: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D78C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D790: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x8021D794: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x8021D798: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D79C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D7A0: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8021D7A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D7A8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D7AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7B0: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8021D7B4: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x8021D7B8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D7BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D7C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D7C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D7C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7CC: lui         $t9, 0x77F
    ctx->r25 = S32(0X77F << 16);
    // 0x8021D7D0: ori         $t9, $t9, 0xF080
    ctx->r25 = ctx->r25 | 0XF080;
    // 0x8021D7D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D7D8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D7DC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8021D7E0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021D7E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D7E8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021D7EC: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x8021D7F0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D7F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D7F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D7FC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D800: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D804: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x8021D808: ori         $t6, $t6, 0x4060
    ctx->r14 = ctx->r14 | 0X4060;
    // 0x8021D80C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D810: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D814: ori         $t9, $t9, 0x2000
    ctx->r25 = ctx->r25 | 0X2000;
    // 0x8021D818: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D81C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8021D820: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D824: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8021D828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021D82C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021D830: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021D834: lw          $t8, 0x30($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X30);
    // 0x8021D838: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8021D83C: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8021D840: lui         $t8, 0xF
    ctx->r24 = S32(0XF << 16);
    // 0x8021D844: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x8021D848: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021D84C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D850: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D854: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D858: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x8021D85C: lui         $t6, 0xBB00
    ctx->r14 = S32(0XBB00 << 16);
    // 0x8021D860: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D864: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D868: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x8021D86C: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x8021D870: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D874: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D878: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8021D87C: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x8021D880: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021D884: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x8021D888: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D88C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8021D890: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021D894: lwc1        $f16, 0xC($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0XC);
    // 0x8021D898: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021D89C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8021D8A0: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021D8A4: nop

    // 0x8021D8A8: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021D8AC: beql        $a0, $zero, L_8021D8FC
    if (ctx->r4 == 0) {
        // 0x8021D8B0: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_8021D8FC;
    }
    goto skip_6;
    // 0x8021D8B0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_6:
    // 0x8021D8B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021D8B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8021D8BC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8021D8C0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8021D8C4: nop

    // 0x8021D8C8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021D8CC: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8021D8D0: nop

    // 0x8021D8D4: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8021D8D8: bne         $a0, $zero, L_8021D8F0
    if (ctx->r4 != 0) {
        // 0x8021D8DC: nop
    
            goto L_8021D8F0;
    }
    // 0x8021D8DC: nop

    // 0x8021D8E0: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x8021D8E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021D8E8: b           L_8021D908
    // 0x8021D8EC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8021D908;
    // 0x8021D8EC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8021D8F0:
    // 0x8021D8F0: b           L_8021D908
    // 0x8021D8F4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8021D908;
    // 0x8021D8F4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8021D8F8: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_8021D8FC:
    // 0x8021D8FC: nop

    // 0x8021D900: bltz        $a0, L_8021D8F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x8021D904: nop
    
            goto L_8021D8F0;
    }
    // 0x8021D904: nop

L_8021D908:
    // 0x8021D908: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8021D90C: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8021D910: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8021D914: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8021D918: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021D91C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8021D920: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x8021D924: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8021D928: or          $t9, $t8, $a0
    ctx->r25 = ctx->r24 | ctx->r4;
    // 0x8021D92C: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8021D930: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D934: lui         $t7, 0xFC12
    ctx->r15 = S32(0XFC12 << 16);
    // 0x8021D938: ori         $t7, $t7, 0x7E05
    ctx->r15 = ctx->r15 | 0X7E05;
    // 0x8021D93C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D940: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D944: addiu       $t8, $zero, -0xC08
    ctx->r24 = ADD32(0, -0XC08);
    // 0x8021D948: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021D94C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D950: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D954: lui         $t7, 0xC19
    ctx->r15 = S32(0XC19 << 16);
    // 0x8021D958: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x8021D95C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021D960: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021D964: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x8021D968: ori         $t7, $t7, 0x3078
    ctx->r15 = ctx->r15 | 0X3078;
    // 0x8021D96C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8021D970: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021D974: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D978: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x8021D97C: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8021D980: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8021D984: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021D988: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D98C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8021D990: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021D994: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x8021D998: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021D99C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021D9A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021D9A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021D9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021D9AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021D9B0: jr          $ra
    // 0x8021D9B4: nop

    TRACE_RETURN()
    return;
    // 0x8021D9B4: nop

;}
RECOMP_FUNC void func_8021C818_6861F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C818: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021C81C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021C820: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021C824: bgez        $t6, L_8021C83C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021C828: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021C83C;
    }
    // 0x8021C828: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021C82C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021C830: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021C834: nop

    // 0x8021C838: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021C83C:
    // 0x8021C83C: jr          $ra
    // 0x8021C840: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8021C840: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80226D2C_69070C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D2C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80226D30: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80226D34: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226D38: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80226D3C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80226D40: nop

    // 0x80226D44: bc1fl       L_80226D68
    if (!c1cs) {
        // 0x80226D48: lwc1        $f10, 0x8($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80226D68;
    }
    goto skip_0;
    // 0x80226D48: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80226D4C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80226D50: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80226D54: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226D58: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80226D5C: b           L_80226D70
    // 0x80226D60: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80226D70;
    // 0x80226D60: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80226D64: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
L_80226D68:
    // 0x80226D68: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80226D6C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80226D70:
    // 0x80226D70: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80226D74: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80226D78: jr          $ra
    // 0x80226D7C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80226D7C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021B1BC_684B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B1BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B1C0: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x8021B1C4: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x8021B1C8: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x8021B1CC: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021B1D0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021B1D4: lw          $t7, 0xB0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB0);
    // 0x8021B1D8: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8021B1DC: lw          $t8, 0xB4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB4);
    // 0x8021B1E0: swc1        $f12, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f12.u32l;
    // 0x8021B1E4: lw          $v1, 0xB4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB4);
    // 0x8021B1E8: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8021B1EC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x8021B1F0: lw          $t9, 0xB4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB4);
    // 0x8021B1F4: jr          $ra
    // 0x8021B1F8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B1F8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80213E30_67D810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213E38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213E3C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80213E40: beq         $a0, $zero, L_80213EA0
    if (ctx->r4 == 0) {
        // 0x80213E44: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80213EA0;
    }
    // 0x80213E44: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80213E48: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80213E4C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80213E50: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x80213E54: sb          $zero, 0x80($v0)
    MEM_B(0X80, ctx->r2) = 0;
    // 0x80213E58: sb          $zero, 0x81($v0)
    MEM_B(0X81, ctx->r2) = 0;
    // 0x80213E5C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80213E60: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80213E64: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80213E68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80213E6C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80213E70: lhu         $a1, 0x4($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X4);
    // 0x80213E74: jal         0x80014840
    // 0x80213E78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80213E78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80213E7C: lbu         $t0, 0x23($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X23);
    // 0x80213E80: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x80213E84: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80213E88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80213E8C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80213E90: lw          $t2, -0x5FB8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5FB8);
    // 0x80213E94: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80213E98: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x80213E9C: sw          $v0, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r2;
L_80213EA0:
    // 0x80213EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213EA8: jr          $ra
    // 0x80213EAC: nop

    TRACE_RETURN()
    return;
    // 0x80213EAC: nop

;}
RECOMP_FUNC void func_80228C48_692628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C48: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228C4C: jr          $ra
    // 0x80228C50: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80228C50: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
