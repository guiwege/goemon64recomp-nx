#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E72F4_6126D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E72F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E72F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E72FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7300: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E7304: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E7308: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E730C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7310: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7314: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E7318: nop

    // 0x801E731C: bc1fl       L_801E7358
    if (!c1cs) {
        // 0x801E7320: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801E7358;
    }
    goto skip_0;
    // 0x801E7320: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_0:
    // 0x801E7324: ldc1        $f14, -0x1F20($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X1F20);
    // 0x801E7328: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E732C: add.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = ctx->f4.d + ctx->f14.d;
    // 0x801E7330: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E7334: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x801E7338: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E733C: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x801E7340: nop

    // 0x801E7344: bc1fl       L_801E7394
    if (!c1cs) {
        // 0x801E7348: lwc1        $f0, 0x74($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801E7394;
    }
    goto skip_1;
    // 0x801E7348: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    skip_1:
    // 0x801E734C: b           L_801E7390
    // 0x801E7350: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
        goto L_801E7390;
    // 0x801E7350: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
    // 0x801E7354: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801E7358:
    // 0x801E7358: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E735C: bc1fl       L_801E7394
    if (!c1cs) {
        // 0x801E7360: lwc1        $f0, 0x74($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801E7394;
    }
    goto skip_2;
    // 0x801E7360: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    skip_2:
    // 0x801E7364: ldc1        $f14, -0x1F18($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X1F18);
    // 0x801E7368: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801E736C: sub.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = ctx->f16.d - ctx->f14.d;
    // 0x801E7370: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E7374: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
    // 0x801E7378: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E737C: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x801E7380: nop

    // 0x801E7384: bc1fl       L_801E7394
    if (!c1cs) {
        // 0x801E7388: lwc1        $f0, 0x74($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801E7394;
    }
    goto skip_3;
    // 0x801E7388: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    skip_3:
    // 0x801E738C: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
L_801E7390:
    // 0x801E7390: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
L_801E7394:
    // 0x801E7394: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7398: ldc1        $f14, -0x1F10($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X1F10);
    // 0x801E739C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E73A0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x801E73A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E73A8: bc1fl       L_801E73E0
    if (!c1cs) {
        // 0x801E73AC: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801E73E0;
    }
    goto skip_4;
    // 0x801E73AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_4:
    // 0x801E73B0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801E73B4: add.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = ctx->f8.d + ctx->f14.d;
    // 0x801E73B8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E73BC: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x801E73C0: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801E73C4: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x801E73C8: nop

    // 0x801E73CC: bc1fl       L_801E7418
    if (!c1cs) {
        // 0x801E73D0: lwc1        $f0, 0x78($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
            goto L_801E7418;
    }
    goto skip_5;
    // 0x801E73D0: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
    skip_5:
    // 0x801E73D4: b           L_801E7414
    // 0x801E73D8: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
        goto L_801E7414;
    // 0x801E73D8: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801E73DC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801E73E0:
    // 0x801E73E0: nop

    // 0x801E73E4: bc1fl       L_801E7418
    if (!c1cs) {
        // 0x801E73E8: lwc1        $f0, 0x78($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
            goto L_801E7418;
    }
    goto skip_6;
    // 0x801E73E8: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
    skip_6:
    // 0x801E73EC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E73F0: sub.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = ctx->f4.d - ctx->f14.d;
    // 0x801E73F4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E73F8: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801E73FC: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801E7400: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x801E7404: nop

    // 0x801E7408: bc1fl       L_801E7418
    if (!c1cs) {
        // 0x801E740C: lwc1        $f0, 0x78($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
            goto L_801E7418;
    }
    goto skip_7;
    // 0x801E740C: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
    skip_7:
    // 0x801E7410: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
L_801E7414:
    // 0x801E7414: lwc1        $f0, 0x78($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X78);
L_801E7418:
    // 0x801E7418: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801E741C: nop

    // 0x801E7420: bc1fl       L_801E7458
    if (!c1cs) {
        // 0x801E7424: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_801E7458;
    }
    goto skip_8;
    // 0x801E7424: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_8:
    // 0x801E7428: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801E742C: add.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = ctx->f16.d + ctx->f14.d;
    // 0x801E7430: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E7434: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x801E7438: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E743C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x801E7440: nop

    // 0x801E7444: bc1f        L_801E748C
    if (!c1cs) {
        // 0x801E7448: nop
    
            goto L_801E748C;
    }
    // 0x801E7448: nop

    // 0x801E744C: b           L_801E748C
    // 0x801E7450: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
        goto L_801E748C;
    // 0x801E7450: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
    // 0x801E7454: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_801E7458:
    // 0x801E7458: nop

    // 0x801E745C: bc1f        L_801E748C
    if (!c1cs) {
        // 0x801E7460: nop
    
            goto L_801E748C;
    }
    // 0x801E7460: nop

    // 0x801E7464: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801E7468: sub.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = ctx->f8.d - ctx->f14.d;
    // 0x801E746C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E7470: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x801E7474: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7478: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x801E747C: nop

    // 0x801E7480: bc1f        L_801E748C
    if (!c1cs) {
        // 0x801E7484: nop
    
            goto L_801E748C;
    }
    // 0x801E7484: nop

    // 0x801E7488: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
L_801E748C:
    // 0x801E748C: jal         0x801D614C
    // 0x801E7490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801E7490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E7494: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801E7498: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E749C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E74A0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E74A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E74A8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801E74AC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E74B0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801E74B4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801E74B8: jal         0x801E7AA8
    // 0x801E74BC: nop

    func_801E7AA8_612E88(rdram, ctx);
        goto after_1;
    // 0x801E74BC: nop

    after_1:
    // 0x801E74C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E74C4: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E74C8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x801E74CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E74D0: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x801E74D4: nop

    // 0x801E74D8: bc1fl       L_801E751C
    if (!c1cs) {
        // 0x801E74DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E751C;
    }
    goto skip_9;
    // 0x801E74DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x801E74E0: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801E74E4: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x801E74E8: nop

    // 0x801E74EC: bc1fl       L_801E751C
    if (!c1cs) {
        // 0x801E74F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E751C;
    }
    goto skip_10;
    // 0x801E74F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x801E74F4: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E74F8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E74FC: addiu       $a0, $a0, 0x752C
    ctx->r4 = ADD32(ctx->r4, 0X752C);
    // 0x801E7500: c.eq.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl == ctx->f18.fl;
    // 0x801E7504: nop

    // 0x801E7508: bc1fl       L_801E751C
    if (!c1cs) {
        // 0x801E750C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E751C;
    }
    goto skip_11;
    // 0x801E750C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_11:
    // 0x801E7510: jal         0x8003521C
    // 0x801E7514: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E7514: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_2:
    // 0x801E7518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E751C:
    // 0x801E751C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E7524: jr          $ra
    // 0x801E7528: nop

    TRACE_RETURN()
    return;
    // 0x801E7528: nop

;}
RECOMP_FUNC void func_801D1938_5FCD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1938: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801D193C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D1940: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D1944: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801D1948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D194C: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801D1950: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1954: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D1958: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801D195C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D1960: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1964: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D1968: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D196C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D1970: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801D1974: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D1978: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D197C: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801D1980: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x801D1984: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1988: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801D198C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801D1990: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D1994: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801D1998: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D199C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D19A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D19A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801D19A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D19AC: jal         0x801DFB90
    // 0x801D19B0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801D19B0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801D19B4: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801D19B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D19BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D19C0: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x801D19C4: bne         $t9, $zero, L_801D1A18
    if (ctx->r25 != 0) {
        // 0x801D19C8: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_801D1A18;
    }
    // 0x801D19C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801D19CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D19D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D19D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D19D8: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801D19DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D19E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D19E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D19E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D19EC: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D19F0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801D19F4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801D19F8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D19FC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1A00: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D1A04: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D1A08: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801D1A0C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801D1A10: jal         0x801DFB90
    // 0x801D1A14: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801D1A14: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
L_801D1A18:
    // 0x801D1A18: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D1A1C: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801D1A20: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1A24: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D1A28: lw          $v0, 0x2C8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2C8);
    // 0x801D1A2C: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x801D1A30: addiu       $a0, $a0, 0x1A78
    ctx->r4 = ADD32(ctx->r4, 0X1A78);
    // 0x801D1A34: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x801D1A38: addiu       $v0, $t1, -0x2
    ctx->r2 = ADD32(ctx->r9, -0X2);
    // 0x801D1A3C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801D1A40: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x801D1A44: addiu       $t3, $t2, -0x5
    ctx->r11 = ADD32(ctx->r10, -0X5);
    // 0x801D1A48: sb          $t3, 0xC($t4)
    MEM_B(0XC, ctx->r12) = ctx->r11;
    // 0x801D1A4C: lw          $t5, 0x7C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7C);
    // 0x801D1A50: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801D1A54: bne         $t6, $zero, L_801D1A64
    if (ctx->r14 != 0) {
        // 0x801D1A58: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801D1A64;
    }
    // 0x801D1A58: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801D1A5C: jal         0x8003521C
    // 0x801D1A60: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801D1A60: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    after_2:
L_801D1A64:
    // 0x801D1A64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D1A68: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D1A6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D1A70: jr          $ra
    // 0x801D1A74: nop

    TRACE_RETURN()
    return;
    // 0x801D1A74: nop

;}
RECOMP_FUNC void func_80203F88_62F368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203F88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80203F8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80203F90: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80203F94: lw          $v0, 0xB8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB8);
    // 0x80203F98: lwc1        $f4, 0xBC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x80203F9C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80203FA0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80203FA4: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x80203FA8: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x80203FAC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203FB0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x80203FB4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80203FB8: lwc1        $f10, 0xC0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x80203FBC: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80203FC0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80203FC4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80203FC8: lwc1        $f4, 0xC4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x80203FCC: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80203FD0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203FD4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80203FD8: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x80203FDC: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x80203FE0: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x80203FE4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80203FE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80203FEC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80203FF0: jal         0x8000E808
    // 0x80203FF4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x80203FF4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_0:
    // 0x80203FF8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80203FFC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80204000: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80204004: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80204008: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020400C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x80204010: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80204014: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80204018: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020401C: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80204020: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80204024: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80204028: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020402C: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x80204030: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x80204034: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x80204038: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x8020403C: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x80204040: lhu         $t0, 0x16($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X16);
    // 0x80204044: sh          $t0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r8;
    // 0x80204048: lhu         $t1, 0x18($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X18);
    // 0x8020404C: sh          $t1, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r9;
    // 0x80204050: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80204054: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x80204058: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8020405C: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
    // 0x80204060: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80204064: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
    // 0x80204068: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020406C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80204070: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80204074: jr          $ra
    // 0x80204078: nop

    TRACE_RETURN()
    return;
    // 0x80204078: nop

;}
RECOMP_FUNC void func_801DEB18_609EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEB18: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DEB1C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DEB20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DEB24: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801DEB28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DEB2C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DEB30: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801DEB34: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801DEB38: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DEB3C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801DEB40: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801DEB44: jal         0x801CEE80
    // 0x801DEB48: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801DEB48: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801DEB4C: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x801DEB50: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DEB54: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DEB58: addiu       $t8, $t7, 0x20
    ctx->r24 = ADD32(ctx->r15, 0X20);
    // 0x801DEB5C: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
    // 0x801DEB60: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DEB64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DEB68: jal         0x8000EE50
    // 0x801DEB6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801DEB6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801DEB70: lw          $t0, 0x80($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X80);
    // 0x801DEB74: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801DEB78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEB7C: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x801DEB80: bne         $v0, $at, L_801DEB94
    if (ctx->r2 != ctx->r1) {
        // 0x801DEB84: sw          $v0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r2;
            goto L_801DEB94;
    }
    // 0x801DEB84: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801DEB88: jal         0x801E0E7C
    // 0x801DEB8C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    func_801E0E7C_60C25C(rdram, ctx);
        goto after_2;
    // 0x801DEB8C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    after_2:
    // 0x801DEB90: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
L_801DEB94:
    // 0x801DEB94: beq         $v0, $zero, L_801DEBA4
    if (ctx->r2 == 0) {
        // 0x801DEB98: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801DEBA4;
    }
    // 0x801DEB98: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DEB9C: bnel        $v0, $at, L_801DEC00
    if (ctx->r2 != ctx->r1) {
        // 0x801DEBA0: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_801DEC00;
    }
    goto skip_0;
    // 0x801DEBA0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_0:
L_801DEBA4:
    // 0x801DEBA4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DEBA8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801DEBAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEBB0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DEBB4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DEBB8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DEBBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DEBC0: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801DEBC4: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DEBC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DEBCC: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DEBD0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801DEBD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEBD8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DEBDC: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DEBE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEBE4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DEBE8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEBEC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DEBF0: jal         0x801DFB90
    // 0x801DEBF4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_3;
    // 0x801DEBF4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801DEBF8: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x801DEBFC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_801DEC00:
    // 0x801DEC00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEC04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DEC08: bnel        $v0, $at, L_801DEC5C
    if (ctx->r2 != ctx->r1) {
        // 0x801DEC0C: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_801DEC5C;
    }
    goto skip_1;
    // 0x801DEC0C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    skip_1:
    // 0x801DEC10: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DEC14: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DEC18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEC1C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DEC20: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DEC24: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801DEC28: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801DEC2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DEC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEC34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801DEC38: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801DEC3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801DEC40: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DEC44: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DEC48: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEC4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DEC50: jal         0x801DFB90
    // 0x801DEC54: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_4;
    // 0x801DEC54: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801DEC58: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
L_801DEC5C:
    // 0x801DEC5C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DEC60: lbu         $t3, 0xE($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XE);
    // 0x801DEC64: bnel        $t3, $at, L_801DECAC
    if (ctx->r11 != ctx->r1) {
        // 0x801DEC68: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_801DECAC;
    }
    goto skip_2;
    // 0x801DEC68: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_2:
    // 0x801DEC6C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DEC70: addiu       $at, $zero, -0x19
    ctx->r1 = ADD32(0, -0X19);
    // 0x801DEC74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEC78: bnel        $v0, $at, L_801DEC98
    if (ctx->r2 != ctx->r1) {
        // 0x801DEC7C: addiu       $at, $zero, -0x32
        ctx->r1 = ADD32(0, -0X32);
            goto L_801DEC98;
    }
    goto skip_3;
    // 0x801DEC7C: addiu       $at, $zero, -0x32
    ctx->r1 = ADD32(0, -0X32);
    skip_3:
    // 0x801DEC80: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801DEC84: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801DEC88: jal         0x801E1084
    // 0x801DEC8C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_801E1084_60C464(rdram, ctx);
        goto after_5;
    // 0x801DEC8C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_5:
    // 0x801DEC90: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DEC94: addiu       $at, $zero, -0x32
    ctx->r1 = ADD32(0, -0X32);
L_801DEC98:
    // 0x801DEC98: bne         $v0, $at, L_801DECA8
    if (ctx->r2 != ctx->r1) {
        // 0x801DEC9C: lw          $t5, 0x38($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X38);
            goto L_801DECA8;
    }
    // 0x801DEC9C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x801DECA0: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x801DECA4: sb          $t4, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r12;
L_801DECA8:
    // 0x801DECA8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801DECAC:
    // 0x801DECAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DECB0: bnel        $v0, $zero, L_801DECDC
    if (ctx->r2 != 0) {
        // 0x801DECB4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_801DECDC;
    }
    goto skip_4;
    // 0x801DECB4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    skip_4:
    // 0x801DECB8: jal         0x80037C9C
    // 0x801DECBC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_80037C9C_3889C(rdram, ctx);
        goto after_6;
    // 0x801DECBC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_6:
    // 0x801DECC0: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801DECC4: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801DECC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DECCC: jal         0x80037C20
    // 0x801DECD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_7;
    // 0x801DECD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x801DECD4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DECD8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
L_801DECDC:
    // 0x801DECDC: bgez        $t6, L_801DED58
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DECE0: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801DED58;
    }
    // 0x801DECE0: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801DECE4: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DECE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DECEC: ldc1        $f0, -0x2500($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2500);
    // 0x801DECF0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DECF4: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DECF8: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x801DECFC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DED00: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DED04: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DED08: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DED0C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801DED10: addiu       $a0, $a0, -0x1768
    ctx->r4 = ADD32(ctx->r4, -0X1768);
    // 0x801DED14: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x801DED18: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801DED1C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DED20: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DED24: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x801DED28: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x801DED2C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x801DED30: bc1fl       L_801DED50
    if (!c1cs) {
        // 0x801DED34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DED50;
    }
    goto skip_5;
    // 0x801DED34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x801DED38: sh          $zero, 0x2E($t8)
    MEM_H(0X2E, ctx->r24) = 0;
    // 0x801DED3C: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x801DED40: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x801DED44: jal         0x8003521C
    // 0x801DED48: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801DED48: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    after_8:
    // 0x801DED4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801DED50:
    // 0x801DED50: jal         0x801DED6C
    // 0x801DED54: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    func_801DED6C_60A14C(rdram, ctx);
        goto after_9;
    // 0x801DED54: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    after_9:
L_801DED58:
    // 0x801DED58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DED5C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801DED60: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801DED64: jr          $ra
    // 0x801DED68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DED68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801E6600_6119E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E6604: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6608: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E660C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E6610: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E6614: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6618: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E661C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E6620: bne         $t7, $zero, L_801E6694
    if (ctx->r15 != 0) {
        // 0x801E6624: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E6694;
    }
    // 0x801E6624: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E6628: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E662C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E6630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E6634: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E6638: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801E663C: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x801E6640: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x801E6644: addiu       $t0, $s0, 0x74
    ctx->r8 = ADD32(ctx->r16, 0X74);
    // 0x801E6648: addiu       $t1, $s0, 0x78
    ctx->r9 = ADD32(ctx->r16, 0X78);
    // 0x801E664C: lhu         $a0, 0x14($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X14);
    // 0x801E6650: lhu         $a1, 0x16($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X16);
    // 0x801E6654: lhu         $a2, 0x18($t9)
    ctx->r6 = MEM_HU(ctx->r25, 0X18);
    // 0x801E6658: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E665C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801E6660: jal         0x8000E808
    // 0x801E6664: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801E6664: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    after_0:
    // 0x801E6668: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E666C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x801E6670: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6674: addiu       $a0, $a0, 0x66C4
    ctx->r4 = ADD32(ctx->r4, 0X66C4);
    // 0x801E6678: lhu         $t3, 0x16($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X16);
    // 0x801E667C: jal         0x8003521C
    // 0x801E6680: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E6680: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    after_1:
    // 0x801E6684: jal         0x80038BC8
    // 0x801E6688: addiu       $a0, $zero, 0x237
    ctx->r4 = ADD32(0, 0X237);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E6688: addiu       $a0, $zero, 0x237
    ctx->r4 = ADD32(0, 0X237);
    after_2:
    // 0x801E668C: b           L_801E66B4
    // 0x801E6690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E66B4;
    // 0x801E6690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E6694:
    // 0x801E6694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6698: jal         0x801D3B18
    // 0x801E669C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_3;
    // 0x801E669C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x801E66A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E66A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E66A8: jal         0x801D3F00
    // 0x801E66AC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_4;
    // 0x801E66AC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x801E66B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E66B4:
    // 0x801E66B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E66B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E66BC: jr          $ra
    // 0x801E66C0: nop

    TRACE_RETURN()
    return;
    // 0x801E66C0: nop

;}
RECOMP_FUNC void func_801EF7A8_61AB88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF7AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF7B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF7B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF7B8: jal         0x801D31F0
    // 0x801EF7BC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801EF7BC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801EF7C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EF7C4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF7C8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x801EF7CC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801EF7D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801EF7D4: addiu       $a0, $a0, -0x7E8
    ctx->r4 = ADD32(ctx->r4, -0X7E8);
    // 0x801EF7D8: bc1fl       L_801EF7EC
    if (!c1cs) {
        // 0x801EF7DC: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_801EF7EC;
    }
    goto skip_0;
    // 0x801EF7DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EF7E0: jal         0x8003521C
    // 0x801EF7E4: sw          $t6, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EF7E4: sw          $t6, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r14;
    after_1:
    // 0x801EF7E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_801EF7EC:
    // 0x801EF7EC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801EF7F0: jal         0x801D3118
    // 0x801EF7F4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_2;
    // 0x801EF7F4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_2:
    // 0x801EF7F8: beql        $v0, $zero, L_801EF80C
    if (ctx->r2 == 0) {
        // 0x801EF7FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF80C;
    }
    goto skip_1;
    // 0x801EF7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801EF800: jal         0x80038BC8
    // 0x801EF804: addiu       $a0, $zero, 0x153
    ctx->r4 = ADD32(0, 0X153);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801EF804: addiu       $a0, $zero, 0x153
    ctx->r4 = ADD32(0, 0X153);
    after_3:
    // 0x801EF808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EF80C:
    // 0x801EF80C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF810: jr          $ra
    // 0x801EF814: nop

    TRACE_RETURN()
    return;
    // 0x801EF814: nop

;}
RECOMP_FUNC void func_801F45A0_61F980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F45A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F45A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F45A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F45AC: jal         0x801F7074
    // 0x801F45B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F45B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F45B4: jal         0x801F76D0
    // 0x801F45B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F45B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F45BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F45C0: addiu       $a1, $a1, -0x4D38
    ctx->r5 = ADD32(ctx->r5, -0X4D38);
    // 0x801F45C4: jal         0x801D2EE4
    // 0x801F45C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801F45C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801F45CC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F45D0: jal         0x8003521C
    // 0x801F45D4: addiu       $a0, $a0, 0x4654
    ctx->r4 = ADD32(ctx->r4, 0X4654);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F45D4: addiu       $a0, $a0, 0x4654
    ctx->r4 = ADD32(ctx->r4, 0X4654);
    after_3:
    // 0x801F45D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F45DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F45E0: jr          $ra
    // 0x801F45E4: nop

    TRACE_RETURN()
    return;
    // 0x801F45E4: nop

;}
RECOMP_FUNC void func_801FABF8_625FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FABF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FABFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FAC00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FAC04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FAC08: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x801FAC0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801FAC10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801FAC14: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801FAC18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801FAC1C: jal         0x801D15BC
    // 0x801FAC20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801FAC20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x801FAC24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FAC28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FAC2C: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    // 0x801FAC30: jal         0x801D5064
    // 0x801FAC34: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_801D5064_600444(rdram, ctx);
        goto after_1;
    // 0x801FAC34: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_1:
    // 0x801FAC38: beq         $v0, $zero, L_801FACAC
    if (ctx->r2 == 0) {
        // 0x801FAC3C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801FACAC;
    }
    // 0x801FAC3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FAC40: jal         0x80037C9C
    // 0x801FAC44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801FAC44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x801FAC48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FAC4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FAC50: jal         0x80037C20
    // 0x801FAC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801FAC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801FAC58: jal         0x80038BC8
    // 0x801FAC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801FAC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x801FAC60: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801FAC64: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801FAC68: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801FAC6C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801FAC70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801FAC74: lbu         $t8, -0x521C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X521C);
    // 0x801FAC78: bne         $t8, $at, L_801FAC98
    if (ctx->r24 != ctx->r1) {
        // 0x801FAC7C: nop
    
            goto L_801FAC98;
    }
    // 0x801FAC7C: nop

    // 0x801FAC80: jal         0x801D3AA4
    // 0x801FAC84: nop

    func_801D3AA4_5FEE84(rdram, ctx);
        goto after_5;
    // 0x801FAC84: nop

    after_5:
    // 0x801FAC88: jal         0x800374EC
    // 0x801FAC8C: nop

    func_800374EC_380EC(rdram, ctx);
        goto after_6;
    // 0x801FAC8C: nop

    after_6:
    // 0x801FAC90: b           L_801FACA0
    // 0x801FAC94: nop

        goto L_801FACA0;
    // 0x801FAC94: nop

L_801FAC98:
    // 0x801FAC98: jal         0x80037090
    // 0x801FAC9C: nop

    func_80037090_37C90(rdram, ctx);
        goto after_7;
    // 0x801FAC9C: nop

    after_7:
L_801FACA0:
    // 0x801FACA0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FACA4: jal         0x8003521C
    // 0x801FACA8: addiu       $a0, $a0, -0x5344
    ctx->r4 = ADD32(ctx->r4, -0X5344);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801FACA8: addiu       $a0, $a0, -0x5344
    ctx->r4 = ADD32(ctx->r4, -0X5344);
    after_8:
L_801FACAC:
    // 0x801FACAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FACB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FACB4: jr          $ra
    // 0x801FACB8: nop

    TRACE_RETURN()
    return;
    // 0x801FACB8: nop

;}
RECOMP_FUNC void func_801F8BB0_623F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8BB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F8BB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F8BB8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F8BBC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F8BC0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F8BC4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x801F8BC8: jal         0x8000DD58
    // 0x801F8BCC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801F8BCC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_0:
    // 0x801F8BD0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801F8BD4: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x801F8BD8: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801F8BDC: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F8BE0: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x801F8BE4: addiu       $a1, $a1, -0x170
    ctx->r5 = ADD32(ctx->r5, -0X170);
    // 0x801F8BE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F8BEC: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F8BF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F8BF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801F8BF8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801F8BFC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F8C00: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801F8C04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8C08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8C0C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801F8C10: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801F8C14: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F8C18: addiu       $t7, $zero, 0x4B2
    ctx->r15 = ADD32(0, 0X4B2);
    // 0x801F8C1C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F8C20: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801F8C24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F8C28: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801F8C2C: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801F8C30: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F8C34: addiu       $a0, $a0, -0x7334
    ctx->r4 = ADD32(ctx->r4, -0X7334);
    // 0x801F8C38: jal         0x80035854
    // 0x801F8C3C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801F8C3C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801F8C40: beq         $v0, $zero, L_801F8CBC
    if (ctx->r2 == 0) {
        // 0x801F8C44: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F8CBC;
    }
    // 0x801F8C44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F8C48: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801F8C4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F8C50: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801F8C54: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F8C58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8C5C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F8C60: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x801F8C64: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801F8C68: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801F8C6C: swc1        $f18, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f18.u32l;
    // 0x801F8C70: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    // 0x801F8C74: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
    // 0x801F8C78: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801F8C7C: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    // 0x801F8C80: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801F8C84: lw          $t1, 0x94($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X94);
    // 0x801F8C88: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8C8C: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F8C90: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F8C94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F8C98: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801F8C9C: jal         0x8000DF10
    // 0x801F8CA0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801F8CA0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x801F8CA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8CA8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801F8CAC: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801F8CB0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8CB4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801F8CB8: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
L_801F8CBC:
    // 0x801F8CBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F8CC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F8CC4: jr          $ra
    // 0x801F8CC8: nop

    TRACE_RETURN()
    return;
    // 0x801F8CC8: nop

;}
RECOMP_FUNC void func_801EDD14_6190F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EDD18: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EDD1C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EDD20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EDD24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EDD28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EDD2C: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x801EDD30: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EDD34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801EDD38: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801EDD3C: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x801EDD40: bgtz        $t9, L_801EDE80
    if (SIGNED(ctx->r25) > 0) {
        // 0x801EDD44: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_801EDE80;
    }
    // 0x801EDD44: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801EDD48: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EDD4C: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801EDD50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDD54: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801EDD58: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801EDD5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EDD60: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x801EDD64: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x801EDD68: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
    // 0x801EDD6C: ldc1        $f10, -0x1DE0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1DE0);
    // 0x801EDD70: lwc1        $f2, 0x90($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801EDD74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EDD78: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801EDD7C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801EDD80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EDD84: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801EDD88: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EDD8C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801EDD90: swc1        $f18, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f18.u32l;
    // 0x801EDD94: bc1fl       L_801EDDB0
    if (!c1cs) {
        // 0x801EDD98: lhu         $t1, 0x14($v0)
        ctx->r9 = MEM_HU(ctx->r2, 0X14);
            goto L_801EDDB0;
    }
    goto skip_0;
    // 0x801EDD98: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    skip_0:
    // 0x801EDD9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDDA0: nop

    // 0x801EDDA4: swc1        $f8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f8.u32l;
    // 0x801EDDA8: lwc1        $f2, 0x90($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801EDDAC: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
L_801EDDB0:
    // 0x801EDDB0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EDDB4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801EDDB8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x801EDDBC: addiu       $a0, $a0, -0x2168
    ctx->r4 = ADD32(ctx->r4, -0X2168);
    // 0x801EDDC0: bgez        $t1, L_801EDDD4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801EDDC4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801EDDD4;
    }
    // 0x801EDDC4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801EDDC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EDDCC: nop

    // 0x801EDDD0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801EDDD4:
    // 0x801EDDD4: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x801EDDD8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EDDDC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EDDE0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801EDDE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801EDDE8: nop

    // 0x801EDDEC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801EDDF0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801EDDF4: nop

    // 0x801EDDF8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801EDDFC: beql        $t3, $zero, L_801EDE4C
    if (ctx->r11 == 0) {
        // 0x801EDE00: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_801EDE4C;
    }
    goto skip_1;
    // 0x801EDE00: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x801EDE04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EDE08: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EDE0C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EDE10: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801EDE14: nop

    // 0x801EDE18: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801EDE1C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801EDE20: nop

    // 0x801EDE24: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801EDE28: bne         $t3, $zero, L_801EDE40
    if (ctx->r11 != 0) {
        // 0x801EDE2C: nop
    
            goto L_801EDE40;
    }
    // 0x801EDE2C: nop

    // 0x801EDE30: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x801EDE34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EDE38: b           L_801EDE58
    // 0x801EDE3C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801EDE58;
    // 0x801EDE3C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801EDE40:
    // 0x801EDE40: b           L_801EDE58
    // 0x801EDE44: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801EDE58;
    // 0x801EDE44: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801EDE48: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_801EDE4C:
    // 0x801EDE4C: nop

    // 0x801EDE50: bltz        $t3, L_801EDE40
    if (SIGNED(ctx->r11) < 0) {
        // 0x801EDE54: nop
    
            goto L_801EDE40;
    }
    // 0x801EDE54: nop

L_801EDE58:
    // 0x801EDE58: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801EDE5C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801EDE60: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
    // 0x801EDE64: bne         $at, $zero, L_801EDE80
    if (ctx->r1 != 0) {
        // 0x801EDE68: sh          $t3, 0x14($v0)
        MEM_H(0X14, ctx->r2) = ctx->r11;
            goto L_801EDE80;
    }
    // 0x801EDE68: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x801EDE6C: sh          $t5, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r13;
    // 0x801EDE70: sw          $t6, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r14;
    // 0x801EDE74: jal         0x8003521C
    // 0x801EDE78: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801EDE78: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EDE7C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_801EDE80:
    // 0x801EDE80: jal         0x801EE658
    // 0x801EDE84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801EE658_619A38(rdram, ctx);
        goto after_1;
    // 0x801EDE84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x801EDE88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EDE8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EDE90: jr          $ra
    // 0x801EDE94: nop

    TRACE_RETURN()
    return;
    // 0x801EDE94: nop

;}
RECOMP_FUNC void func_801D0AA4_5FBE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D0AA8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D0AAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0AB0: lwc1        $f0, -0x2E10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E10);
    // 0x801D0AB4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D0AB8: addiu       $a1, $a1, 0x430
    ctx->r5 = ADD32(ctx->r5, 0X430);
    // 0x801D0ABC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D0AC0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D0AC4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801D0AC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D0ACC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D0AD0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D0AD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D0AD8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801D0ADC: addiu       $t7, $zero, 0x4B1
    ctx->r15 = ADD32(0, 0X4B1);
    // 0x801D0AE0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801D0AE4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801D0AE8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D0AEC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D0AF0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D0AF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D0AF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D0AFC: addiu       $a2, $a2, -0x5390
    ctx->r6 = ADD32(ctx->r6, -0X5390);
    // 0x801D0B00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801D0B04: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D0B08: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801D0B0C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D0B10: jal         0x8000DBF0
    // 0x801D0B14: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801D0B14: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D0B18: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0B1C: jal         0x8003521C
    // 0x801D0B20: addiu       $a0, $a0, 0xB34
    ctx->r4 = ADD32(ctx->r4, 0XB34);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D0B20: addiu       $a0, $a0, 0xB34
    ctx->r4 = ADD32(ctx->r4, 0XB34);
    after_1:
    // 0x801D0B24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D0B28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D0B2C: jr          $ra
    // 0x801D0B30: nop

    TRACE_RETURN()
    return;
    // 0x801D0B30: nop

;}
RECOMP_FUNC void func_80203A54_62EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80203A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80203A5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80203A60: jal         0x801D614C
    // 0x80203A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x80203A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80203A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80203A6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80203A70: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80203A74: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80203A78: nop

    // 0x80203A7C: bc1fl       L_80203AA8
    if (!c1cs) {
        // 0x80203A80: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_80203AA8;
    }
    goto skip_0;
    // 0x80203A80: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80203A84: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80203A88: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80203A8C: bgez        $t7, L_80203AA4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80203A90: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_80203AA4;
    }
    // 0x80203A90: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80203A94: jal         0x80035020
    // 0x80203A98: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x80203A98: nop

    after_1:
    // 0x80203A9C: b           L_80203AD8
    // 0x80203AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80203AD8;
    // 0x80203AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203AA4:
    // 0x80203AA4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_80203AA8:
    // 0x80203AA8: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80203AAC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80203AB0: nop

    // 0x80203AB4: bc1f        L_80203ACC
    if (!c1cs) {
        // 0x80203AB8: nop
    
            goto L_80203ACC;
    }
    // 0x80203AB8: nop

    // 0x80203ABC: jal         0x80035020
    // 0x80203AC0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x80203AC0: nop

    after_2:
    // 0x80203AC4: b           L_80203AD8
    // 0x80203AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80203AD8;
    // 0x80203AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203ACC:
    // 0x80203ACC: jal         0x80203AE4
    // 0x80203AD0: nop

    func_80203AE4_62EEC4(rdram, ctx);
        goto after_3;
    // 0x80203AD0: nop

    after_3:
    // 0x80203AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203AD8:
    // 0x80203AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80203ADC: jr          $ra
    // 0x80203AE0: nop

    TRACE_RETURN()
    return;
    // 0x80203AE0: nop

;}
RECOMP_FUNC void func_801FB934_626D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB93C: lui         $at, 0xC307
    ctx->r1 = S32(0XC307 << 16);
    // 0x801FB940: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FB944: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FB948: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FB94C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB950: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801FB954: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x801FB958: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801FB95C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801FB960: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x801FB964: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x801FB968: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB96C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801FB970: lwc1        $f8, -0x1624($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1624);
    // 0x801FB974: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FB978: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FB97C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801FB980: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    // 0x801FB984: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FB988: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801FB98C: jal         0x801D31CC
    // 0x801FB990: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801FB990: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    after_0:
    // 0x801FB994: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FB998: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801FB99C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB9A0: jal         0x801FFDFC
    // 0x801FB9A4: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_1;
    // 0x801FB9A4: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    after_1:
    // 0x801FB9A8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801FB9AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB9B0: addiu       $a0, $a0, -0x462C
    ctx->r4 = ADD32(ctx->r4, -0X462C);
    // 0x801FB9B4: lw          $t6, 0x64($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X64);
    // 0x801FB9B8: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x801FB9BC: jal         0x8003521C
    // 0x801FB9C0: sw          $t7, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FB9C0: sw          $t7, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->r15;
    after_2:
    // 0x801FB9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB9C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB9CC: jr          $ra
    // 0x801FB9D0: nop

    TRACE_RETURN()
    return;
    // 0x801FB9D0: nop

;}
RECOMP_FUNC void func_801E71E8_6125C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E71E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E71EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E71F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E71F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E71F8: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x801E71FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E7200: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E7204: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801E7208: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x801E720C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7210: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E7214: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E7218: lui         $a2, 0xC4E1
    ctx->r6 = S32(0XC4E1 << 16);
    // 0x801E721C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E7220: jal         0x801D46B8
    // 0x801E7224: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_0;
    // 0x801E7224: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x801E7228: jal         0x801D614C
    // 0x801E722C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801E722C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E7230: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E7234: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E7238: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E723C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7240: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801E7244: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E7248: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801E724C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801E7250: jal         0x801E7AA8
    // 0x801E7254: nop

    func_801E7AA8_612E88(rdram, ctx);
        goto after_2;
    // 0x801E7254: nop

    after_2:
    // 0x801E7258: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E725C: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    // 0x801E7260: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x801E7264: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E7268: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E726C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801E7270: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E7274: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E7278: lui         $a2, 0xC4E1
    ctx->r6 = S32(0XC4E1 << 16);
    // 0x801E727C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E7280: jal         0x8000EDF4
    // 0x801E7284: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_3;
    // 0x801E7284: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x801E7288: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801E728C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E7290: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E7294: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E7298: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801E729C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801E72A0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801E72A4: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    // 0x801E72A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E72AC: bc1f        L_801E72E0
    if (!c1cs) {
        // 0x801E72B0: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801E72E0;
    }
    // 0x801E72B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801E72B4: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801E72B8: sw          $t0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r8;
    // 0x801E72BC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801E72C0: lui         $a3, 0x44FA
    ctx->r7 = S32(0X44FA << 16);
    // 0x801E72C4: jal         0x8000F3D8
    // 0x801E72C8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801E72C8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801E72CC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801E72D0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E72D4: addiu       $a0, $a0, 0x72F4
    ctx->r4 = ADD32(ctx->r4, 0X72F4);
    // 0x801E72D8: jal         0x8003521C
    // 0x801E72DC: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E72DC: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    after_5:
L_801E72E0:
    // 0x801E72E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E72E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E72E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E72EC: jr          $ra
    // 0x801E72F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E72F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801F00B8_61B498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F00B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F00BC: jr          $ra
    // 0x801F00C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801F00C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EF4D4_61A8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF4D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EF4D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EF4DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801EF4E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801EF4E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EF4E8: jal         0x801F76D0
    // 0x801EF4EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801EF4EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801EF4F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF4F4: jal         0x801D326C
    // 0x801EF4F8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_1;
    // 0x801EF4F8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801EF4FC: jal         0x801D600C
    // 0x801EF500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_2;
    // 0x801EF500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801EF504: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EF508: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EF50C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EF510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF514: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801EF518: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EF51C: bnel        $t7, $at, L_801EF570
    if (ctx->r15 != ctx->r1) {
        // 0x801EF520: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EF570;
    }
    goto skip_0;
    // 0x801EF520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EF524: jal         0x801D31CC
    // 0x801EF528: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801EF528: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    after_3:
    // 0x801EF52C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EF530: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EF534: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EF538: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EF53C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF540: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x801EF544: sh          $zero, 0x16($s1)
    MEM_H(0X16, ctx->r17) = 0;
    // 0x801EF548: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801EF54C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF550: swc1        $f2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f2.u32l;
    // 0x801EF554: swc1        $f2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f2.u32l;
    // 0x801EF558: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x801EF55C: addiu       $a0, $a0, -0xA80
    ctx->r4 = ADD32(ctx->r4, -0XA80);
    // 0x801EF560: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801EF564: jal         0x8003521C
    // 0x801EF568: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801EF568: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x801EF56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF570:
    // 0x801EF570: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801EF574: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801EF578: jr          $ra
    // 0x801EF57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801EF57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801DB83C_606C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB83C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DB840: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DB844: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DB848: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB84C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801DB850: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DB854: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB858: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DB85C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DB860: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DB864: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DB868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DB86C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DB870: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x801DB874: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x801DB878: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DB87C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801DB880: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DB884: nop

    // 0x801DB888: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801DB88C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DB890: nop

    // 0x801DB894: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DB898: beql        $a1, $zero, L_801DB8E8
    if (ctx->r5 == 0) {
        // 0x801DB89C: mfc1        $a1, $f18
        ctx->r5 = (int32_t)ctx->f18.u32l;
            goto L_801DB8E8;
    }
    goto skip_0;
    // 0x801DB89C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x801DB8A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DB8A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DB8A8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801DB8AC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801DB8B0: nop

    // 0x801DB8B4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801DB8B8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801DB8BC: nop

    // 0x801DB8C0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801DB8C4: bne         $a1, $zero, L_801DB8DC
    if (ctx->r5 != 0) {
        // 0x801DB8C8: nop
    
            goto L_801DB8DC;
    }
    // 0x801DB8C8: nop

    // 0x801DB8CC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801DB8D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DB8D4: b           L_801DB8F4
    // 0x801DB8D8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801DB8F4;
    // 0x801DB8D8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801DB8DC:
    // 0x801DB8DC: b           L_801DB8F4
    // 0x801DB8E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801DB8F4;
    // 0x801DB8E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801DB8E4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
L_801DB8E8:
    // 0x801DB8E8: nop

    // 0x801DB8EC: bltz        $a1, L_801DB8DC
    if (SIGNED(ctx->r5) < 0) {
        // 0x801DB8F0: nop
    
            goto L_801DB8DC;
    }
    // 0x801DB8F0: nop

L_801DB8F4:
    // 0x801DB8F4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801DB8F8: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x801DB8FC: or          $t8, $a1, $zero
    ctx->r24 = ctx->r5 | 0;
    // 0x801DB900: andi        $a1, $t8, 0x3FF
    ctx->r5 = ctx->r24 & 0X3FF;
    // 0x801DB904: jal         0x8000E630
    // 0x801DB908: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801DB908: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x801DB90C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DB910: lwc1        $f0, -0x2558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2558);
    // 0x801DB914: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801DB918: addiu       $a1, $a1, -0x6460
    ctx->r5 = ADD32(ctx->r5, -0X6460);
    // 0x801DB91C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB920: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DB924: lui         $at, 0xC090
    ctx->r1 = S32(0XC090 << 16);
    // 0x801DB928: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB92C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801DB930: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DB934: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801DB938: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB93C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DB940: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801DB944: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801DB948: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x801DB94C: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801DB950: addiu       $t3, $zero, 0x4A8
    ctx->r11 = ADD32(0, 0X4A8);
    // 0x801DB954: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801DB958: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801DB95C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DB960: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DB964: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DB968: addiu       $a2, $a2, -0x55F8
    ctx->r6 = ADD32(ctx->r6, -0X55F8);
    // 0x801DB96C: addiu       $a0, $a0, -0x45F8
    ctx->r4 = ADD32(ctx->r4, -0X45F8);
    // 0x801DB970: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801DB974: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DB978: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB97C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB980: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB984: jal         0x80035854
    // 0x801DB988: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801DB988: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801DB98C: beq         $v0, $zero, L_801DB9F8
    if (ctx->r2 == 0) {
        // 0x801DB990: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DB9F8;
    }
    // 0x801DB990: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DB994: sw          $zero, 0x84($v1)
    MEM_W(0X84, ctx->r3) = 0;
    // 0x801DB998: sw          $zero, 0x88($v1)
    MEM_W(0X88, ctx->r3) = 0;
    // 0x801DB99C: sw          $zero, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = 0;
    // 0x801DB9A0: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x801DB9A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB9A8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801DB9AC: addiu       $t6, $zero, 0x33
    ctx->r14 = ADD32(0, 0X33);
    // 0x801DB9B0: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x801DB9B4: sw          $zero, 0x94($v1)
    MEM_W(0X94, ctx->r3) = 0;
    // 0x801DB9B8: sw          $zero, 0x98($v1)
    MEM_W(0X98, ctx->r3) = 0;
    // 0x801DB9BC: sb          $zero, 0x30($v1)
    MEM_B(0X30, ctx->r3) = 0;
    // 0x801DB9C0: sw          $t5, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r13;
    // 0x801DB9C4: sb          $t6, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r14;
    // 0x801DB9C8: sh          $t7, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r15;
    // 0x801DB9CC: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
    // 0x801DB9D0: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x801DB9D4: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    // 0x801DB9D8: sw          $t4, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r12;
    // 0x801DB9DC: swc1        $f0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->f0.u32l;
    // 0x801DB9E0: swc1        $f0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->f0.u32l;
    // 0x801DB9E4: swc1        $f0, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f0.u32l;
    // 0x801DB9E8: swc1        $f0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->f0.u32l;
    // 0x801DB9EC: swc1        $f0, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->f0.u32l;
    // 0x801DB9F0: jal         0x80038BC8
    // 0x801DB9F4: swc1        $f0, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->f0.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801DB9F4: swc1        $f0, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->f0.u32l;
    after_2:
L_801DB9F8:
    // 0x801DB9F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB9FC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801DBA00: jr          $ra
    // 0x801DBA04: nop

    TRACE_RETURN()
    return;
    // 0x801DBA04: nop

;}
RECOMP_FUNC void func_801F37F4_61EBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F37F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F37F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F37FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3800: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3804: jal         0x801F7004
    // 0x801F3808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F7004_6223E4(rdram, ctx);
        goto after_0;
    // 0x801F3808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F380C: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x801F3810: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801F3814: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3818: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x801F381C: slti        $at, $t7, 0xB5
    ctx->r1 = SIGNED(ctx->r15) < 0XB5 ? 1 : 0;
    // 0x801F3820: beq         $at, $zero, L_801F3834
    if (ctx->r1 == 0) {
        // 0x801F3824: sw          $t7, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r15;
            goto L_801F3834;
    }
    // 0x801F3824: sw          $t7, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r15;
    // 0x801F3828: jal         0x8003521C
    // 0x801F382C: addiu       $a0, $a0, 0x3878
    ctx->r4 = ADD32(ctx->r4, 0X3878);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F382C: addiu       $a0, $a0, 0x3878
    ctx->r4 = ADD32(ctx->r4, 0X3878);
    after_1:
    // 0x801F3830: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_801F3834:
    // 0x801F3834: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F3838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F383C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F3840: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801F3844: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x801F3848: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F384C: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x801F3850: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x801F3854: lhu         $a1, 0x92($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X92);
    // 0x801F3858: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801F385C: jal         0x8000E630
    // 0x801F3860: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801F3860: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x801F3864: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3868: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F386C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3870: jr          $ra
    // 0x801F3874: nop

    TRACE_RETURN()
    return;
    // 0x801F3874: nop

;}
RECOMP_FUNC void func_801DD218_6085F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD218: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD21C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD220: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801DD224: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DD228: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DD22C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD230: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801DD234: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DD238: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DD23C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DD240: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DD244: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x801DD248: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801DD24C: lwc1        $f10, 0xA0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801DD250: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD254: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801DD258: nop

    // 0x801DD25C: bc1fl       L_801DD284
    if (!c1cs) {
        // 0x801DD260: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_801DD284;
    }
    goto skip_0;
    // 0x801DD260: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_0:
    // 0x801DD264: sb          $zero, 0xD($t6)
    MEM_B(0XD, ctx->r14) = 0;
    // 0x801DD268: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801DD26C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD270: addiu       $a0, $a0, -0x30E8
    ctx->r4 = ADD32(ctx->r4, -0X30E8);
    // 0x801DD274: jal         0x8003521C
    // 0x801DD278: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801DD278: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DD27C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801DD280: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_801DD284:
    // 0x801DD284: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD288: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DD28C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DD290: lwc1        $f18, 0x9C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X9C);
    // 0x801DD294: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801DD298: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801DD29C: swc1        $f6, 0x9C($a1)
    MEM_W(0X9C, ctx->r5) = ctx->f6.u32l;
    // 0x801DD2A0: lwc1        $f8, 0x9C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X9C);
    // 0x801DD2A4: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801DD2A8: nop

    // 0x801DD2AC: bc1fl       L_801DD2BC
    if (!c1cs) {
        // 0x801DD2B0: lw          $t8, 0x94($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X94);
            goto L_801DD2BC;
    }
    goto skip_1;
    // 0x801DD2B0: lw          $t8, 0x94($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X94);
    skip_1:
    // 0x801DD2B4: swc1        $f0, 0x9C($a1)
    MEM_W(0X9C, ctx->r5) = ctx->f0.u32l;
    // 0x801DD2B8: lw          $t8, 0x94($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X94);
L_801DD2BC:
    // 0x801DD2BC: bnel        $t8, $zero, L_801DD300
    if (ctx->r24 != 0) {
        // 0x801DD2C0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801DD300;
    }
    goto skip_2;
    // 0x801DD2C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_2:
    // 0x801DD2C4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801DD2C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD2CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DD2D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DD2D4: lwc1        $f10, 0x98($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X98);
    // 0x801DD2D8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801DD2DC: swc1        $f18, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f18.u32l;
    // 0x801DD2E0: lwc1        $f4, 0x98($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X98);
    // 0x801DD2E4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801DD2E8: nop

    // 0x801DD2EC: bc1f        L_801DD32C
    if (!c1cs) {
        // 0x801DD2F0: nop
    
            goto L_801DD32C;
    }
    // 0x801DD2F0: nop

    // 0x801DD2F4: b           L_801DD32C
    // 0x801DD2F8: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
        goto L_801DD32C;
    // 0x801DD2F8: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
    // 0x801DD2FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801DD300:
    // 0x801DD300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DD304: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD308: lwc1        $f6, 0x98($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X98);
    // 0x801DD30C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DD310: swc1        $f10, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f10.u32l;
    // 0x801DD314: lwc1        $f16, 0x98($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X98);
    // 0x801DD318: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x801DD31C: nop

    // 0x801DD320: bc1f        L_801DD32C
    if (!c1cs) {
        // 0x801DD324: nop
    
            goto L_801DD32C;
    }
    // 0x801DD324: nop

    // 0x801DD328: swc1        $f0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->f0.u32l;
L_801DD32C:
    // 0x801DD32C: jal         0x801DD3DC
    // 0x801DD330: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x801DD330: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x801DD334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD33C: jr          $ra
    // 0x801DD340: nop

    TRACE_RETURN()
    return;
    // 0x801DD340: nop

    // 0x801DD344: jr          $ra
    // 0x801DD348: nop

    TRACE_RETURN()
    return;
    // 0x801DD348: nop

;}
RECOMP_FUNC void func_801FE4D0_6298B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE4D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FE4D4: lw          $v1, -0x1130($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X1130);
    // 0x801FE4D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FE4DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE4E0: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x801FE4E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FE4E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FE4EC: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x801FE4F0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801FE4F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FE4F8: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801FE4FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FE500: ldc1        $f8, -0x1550($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1550);
    // 0x801FE504: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FE508: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801FE50C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801FE510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FE514: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FE518: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FE51C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x801FE520: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801FE524: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801FE528: nop

    // 0x801FE52C: bc1fl       L_801FE53C
    if (!c1cs) {
        // 0x801FE530: lwc1        $f4, 0x4($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801FE53C;
    }
    goto skip_0;
    // 0x801FE530: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x801FE534: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x801FE538: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
L_801FE53C:
    // 0x801FE53C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801FE540: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FE544: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801FE548: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801FE54C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FE550: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x801FE554: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801FE558: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FE55C: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801FE560: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801FE564: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801FE568: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801FE56C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801FE570: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x801FE574: nop

    // 0x801FE578: subu        $t3, $t1, $t0
    ctx->r11 = SUB32(ctx->r9, ctx->r8);
    // 0x801FE57C: jal         0x8000E630
    // 0x801FE580: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801FE580: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    after_0:
    // 0x801FE584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FE588: jal         0x801D2F40
    // 0x801FE58C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801FE58C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x801FE590: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FE594: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801FE598: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801FE59C: nop

    // 0x801FE5A0: bc1fl       L_801FE640
    if (!c1cs) {
        // 0x801FE5A4: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_801FE640;
    }
    goto skip_1;
    // 0x801FE5A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801FE5A8: lw          $v0, 0x90($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X90);
    // 0x801FE5AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801FE5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FE5B4: beq         $v0, $zero, L_801FE5E4
    if (ctx->r2 == 0) {
        // 0x801FE5B8: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801FE5E4;
    }
    // 0x801FE5B8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE5BC: beq         $v0, $at, L_801FE5F4
    if (ctx->r2 == ctx->r1) {
        // 0x801FE5C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FE5F4;
    }
    // 0x801FE5C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FE5C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FE5C8: beq         $v0, $at, L_801FE608
    if (ctx->r2 == ctx->r1) {
        // 0x801FE5CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FE608;
    }
    // 0x801FE5CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FE5D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FE5D4: beq         $v0, $at, L_801FE61C
    if (ctx->r2 == ctx->r1) {
        // 0x801FE5D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FE61C;
    }
    // 0x801FE5D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FE5DC: b           L_801FE630
    // 0x801FE5E0: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
        goto L_801FE630;
    // 0x801FE5E0: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
L_801FE5E4:
    // 0x801FE5E4: jal         0x801D2EE4
    // 0x801FE5E8: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801FE5E8: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    after_2:
    // 0x801FE5EC: b           L_801FE62C
    // 0x801FE5F0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801FE62C;
    // 0x801FE5F0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801FE5F4:
    // 0x801FE5F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE5F8: jal         0x801D2EE4
    // 0x801FE5FC: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801FE5FC: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    after_3:
    // 0x801FE600: b           L_801FE62C
    // 0x801FE604: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801FE62C;
    // 0x801FE604: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801FE608:
    // 0x801FE608: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE60C: jal         0x801D2EE4
    // 0x801FE610: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801FE610: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    after_4:
    // 0x801FE614: b           L_801FE62C
    // 0x801FE618: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801FE62C;
    // 0x801FE618: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801FE61C:
    // 0x801FE61C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE620: jal         0x801D2EE4
    // 0x801FE624: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_5;
    // 0x801FE624: addiu       $a1, $a1, -0x4C08
    ctx->r5 = ADD32(ctx->r5, -0X4C08);
    after_5:
    // 0x801FE628: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801FE62C:
    // 0x801FE62C: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
L_801FE630:
    // 0x801FE630: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801FE634: andi        $t6, $t5, 0x3
    ctx->r14 = ctx->r13 & 0X3;
    // 0x801FE638: sw          $t6, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r14;
    // 0x801FE63C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_801FE640:
    // 0x801FE640: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE644: lbu         $t8, 0xF($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XF);
    // 0x801FE648: bnel        $t8, $zero, L_801FE65C
    if (ctx->r24 != 0) {
        // 0x801FE64C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FE65C;
    }
    goto skip_2;
    // 0x801FE64C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801FE650: jal         0x8003521C
    // 0x801FE654: addiu       $a0, $a0, -0x1994
    ctx->r4 = ADD32(ctx->r4, -0X1994);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FE654: addiu       $a0, $a0, -0x1994
    ctx->r4 = ADD32(ctx->r4, -0X1994);
    after_6:
    // 0x801FE658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FE65C:
    // 0x801FE65C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FE660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FE664: jr          $ra
    // 0x801FE668: nop

    TRACE_RETURN()
    return;
    // 0x801FE668: nop

;}
RECOMP_FUNC void func_801D694C_601D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D694C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6954: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6958: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801D695C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6960: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6964: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D6968: bne         $v0, $zero, L_801D6978
    if (ctx->r2 != 0) {
        // 0x801D696C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801D6978;
    }
    // 0x801D696C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D6970: b           L_801D6A20
    // 0x801D6974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D6A20;
    // 0x801D6974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6978:
    // 0x801D6978: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D697C: addiu       $a0, $a2, 0x70
    ctx->r4 = ADD32(ctx->r6, 0X70);
    // 0x801D6980: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801D6984: nop

    // 0x801D6988: bc1fl       L_801D69AC
    if (!c1cs) {
        // 0x801D698C: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_801D69AC;
    }
    goto skip_0;
    // 0x801D698C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x801D6990: lwc1        $f4, 0x70($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801D6994: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D6998: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801D699C: swc1        $f6, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f6.u32l;
    // 0x801D69A0: b           L_801D6A08
    // 0x801D69A4: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
        goto L_801D6A08;
    // 0x801D69A4: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    // 0x801D69A8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_801D69AC:
    // 0x801D69AC: nop

    // 0x801D69B0: bc1fl       L_801D69D0
    if (!c1cs) {
        // 0x801D69B4: lwc1        $f16, 0x70($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X70);
            goto L_801D69D0;
    }
    goto skip_1;
    // 0x801D69B4: lwc1        $f16, 0x70($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X70);
    skip_1:
    // 0x801D69B8: lwc1        $f8, 0x70($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801D69BC: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801D69C0: swc1        $f10, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f10.u32l;
    // 0x801D69C4: b           L_801D6A08
    // 0x801D69C8: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
        goto L_801D6A08;
    // 0x801D69C8: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x801D69CC: lwc1        $f16, 0x70($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X70);
L_801D69D0:
    // 0x801D69D0: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x801D69D4: addiu       $t7, $t7, -0x2240
    ctx->r15 = ADD32(ctx->r15, -0X2240);
    // 0x801D69D8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x801D69DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D69E0: bc1fl       L_801D6A0C
    if (!c1cs) {
        // 0x801D69E4: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_801D6A0C;
    }
    goto skip_2;
    // 0x801D69E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801D69E8: beq         $t7, $zero, L_801D69FC
    if (ctx->r15 == 0) {
        // 0x801D69EC: lwc1        $f4, 0x2C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_801D69FC;
    }
    // 0x801D69EC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D69F0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D69F4: b           L_801D6A04
    // 0x801D69F8: swc1        $f18, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f18.u32l;
        goto L_801D6A04;
    // 0x801D69F8: swc1        $f18, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f18.u32l;
L_801D69FC:
    // 0x801D69FC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801D6A00: swc1        $f6, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f6.u32l;
L_801D6A04:
    // 0x801D6A04: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
L_801D6A08:
    // 0x801D6A08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
L_801D6A0C:
    // 0x801D6A0C: jal         0x801D725C
    // 0x801D6A10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D725C_60263C(rdram, ctx);
        goto after_0;
    // 0x801D6A10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D6A14: jal         0x801D609C
    // 0x801D6A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D609C_60147C(rdram, ctx);
        goto after_1;
    // 0x801D6A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D6A1C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
L_801D6A20:
    // 0x801D6A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6A24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6A28: jr          $ra
    // 0x801D6A2C: nop

    TRACE_RETURN()
    return;
    // 0x801D6A2C: nop

;}
RECOMP_FUNC void func_801E7838_612C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7838: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E783C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E7840: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7844: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E7848: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x801E784C: lw          $t7, 0xA0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA0);
    // 0x801E7850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7854: addiu       $a2, $s0, 0x70
    ctx->r6 = ADD32(ctx->r16, 0X70);
    // 0x801E7858: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801E785C: slti        $at, $v0, -0xFF
    ctx->r1 = SIGNED(ctx->r2) < -0XFF ? 1 : 0;
    // 0x801E7860: beq         $at, $zero, L_801E7870
    if (ctx->r1 == 0) {
        // 0x801E7864: sw          $v0, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->r2;
            goto L_801E7870;
    }
    // 0x801E7864: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x801E7868: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x801E786C: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
L_801E7870:
    // 0x801E7870: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x801E7874: bne         $at, $zero, L_801E7884
    if (ctx->r1 != 0) {
        // 0x801E7878: addiu       $a3, $s0, 0x78
        ctx->r7 = ADD32(ctx->r16, 0X78);
            goto L_801E7884;
    }
    // 0x801E7878: addiu       $a3, $s0, 0x78
    ctx->r7 = ADD32(ctx->r16, 0X78);
    // 0x801E787C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x801E7880: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
L_801E7884:
    // 0x801E7884: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E7888: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E788C: jal         0x8000E630
    // 0x801E7890: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801E7890: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x801E7894: jal         0x801D614C
    // 0x801E7898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801E7898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E789C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801E78A0: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801E78A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E78A8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E78AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E78B0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E78B4: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801E78B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E78BC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801E78C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E78C4: add.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x801E78C8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801E78CC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801E78D0: jal         0x801E7AA8
    // 0x801E78D4: nop

    func_801E7AA8_612E88(rdram, ctx);
        goto after_2;
    // 0x801E78D4: nop

    after_2:
    // 0x801E78D8: lw          $t1, 0xA0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA0);
    // 0x801E78DC: bgezl       $t1, L_801E7924
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801E78E0: lw          $t3, 0x9C($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X9C);
            goto L_801E7924;
    }
    goto skip_0;
    // 0x801E78E0: lw          $t3, 0x9C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x801E78E4: lw          $t2, 0x9C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X9C);
    // 0x801E78E8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x801E78EC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E78F0: bne         $t2, $at, L_801E7954
    if (ctx->r10 != ctx->r1) {
        // 0x801E78F4: addiu       $a0, $a0, 0x752C
        ctx->r4 = ADD32(ctx->r4, 0X752C);
            goto L_801E7954;
    }
    // 0x801E78F4: addiu       $a0, $a0, 0x752C
    ctx->r4 = ADD32(ctx->r4, 0X752C);
    // 0x801E78F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E78FC: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801E7900: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E7904: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801E7908: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E790C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801E7910: jal         0x8003521C
    // 0x801E7914: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E7914: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x801E7918: b           L_801E7958
    // 0x801E791C: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
        goto L_801E7958;
    // 0x801E791C: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x801E7920: lw          $t3, 0x9C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X9C);
L_801E7924:
    // 0x801E7924: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x801E7928: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E792C: bne         $t3, $at, L_801E7954
    if (ctx->r11 != ctx->r1) {
        // 0x801E7930: addiu       $a0, $a0, 0x752C
        ctx->r4 = ADD32(ctx->r4, 0X752C);
            goto L_801E7954;
    }
    // 0x801E7930: addiu       $a0, $a0, 0x752C
    ctx->r4 = ADD32(ctx->r4, 0X752C);
    // 0x801E7934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7938: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801E793C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E7940: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801E7944: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E7948: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801E794C: jal         0x8003521C
    // 0x801E7950: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E7950: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_4:
L_801E7954:
    // 0x801E7954: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
L_801E7958:
    // 0x801E7958: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E795C: addiu       $v0, $t4, 0x1
    ctx->r2 = ADD32(ctx->r12, 0X1);
    // 0x801E7960: bne         $v0, $at, L_801E7974
    if (ctx->r2 != ctx->r1) {
        // 0x801E7964: sw          $v0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r2;
            goto L_801E7974;
    }
    // 0x801E7964: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801E7968: jal         0x801EA730
    // 0x801E796C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA730_615B10(rdram, ctx);
        goto after_5;
    // 0x801E796C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E7970: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801E7974:
    // 0x801E7974: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x801E7978: bnel        $v0, $at, L_801E7990
    if (ctx->r2 != ctx->r1) {
        // 0x801E797C: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_801E7990;
    }
    goto skip_1;
    // 0x801E797C: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    skip_1:
    // 0x801E7980: jal         0x801EA730
    // 0x801E7984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA730_615B10(rdram, ctx);
        goto after_6;
    // 0x801E7984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E7988: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E798C: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_801E7990:
    // 0x801E7990: bnel        $v0, $at, L_801E79A8
    if (ctx->r2 != ctx->r1) {
        // 0x801E7994: addiu       $at, $zero, 0x32
        ctx->r1 = ADD32(0, 0X32);
            goto L_801E79A8;
    }
    goto skip_2;
    // 0x801E7994: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    skip_2:
    // 0x801E7998: jal         0x801EA730
    // 0x801E799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA730_615B10(rdram, ctx);
        goto after_7;
    // 0x801E799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E79A0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E79A4: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
L_801E79A8:
    // 0x801E79A8: bnel        $v0, $at, L_801E79C0
    if (ctx->r2 != ctx->r1) {
        // 0x801E79AC: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_801E79C0;
    }
    goto skip_3;
    // 0x801E79AC: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    skip_3:
    // 0x801E79B0: jal         0x801EA730
    // 0x801E79B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA730_615B10(rdram, ctx);
        goto after_8;
    // 0x801E79B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E79B8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E79BC: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
L_801E79C0:
    // 0x801E79C0: bnel        $v0, $at, L_801E79D4
    if (ctx->r2 != ctx->r1) {
        // 0x801E79C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E79D4;
    }
    goto skip_4;
    // 0x801E79C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x801E79C8: jal         0x801EA730
    // 0x801E79CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EA730_615B10(rdram, ctx);
        goto after_9;
    // 0x801E79CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E79D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E79D4:
    // 0x801E79D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E79D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E79DC: jr          $ra
    // 0x801E79E0: nop

    TRACE_RETURN()
    return;
    // 0x801E79E0: nop

;}
RECOMP_FUNC void func_801F77EC_622BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F77EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F77F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F77F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801F77F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801F77FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7800: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F7804: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801F7808: addiu       $s2, $s2, -0x10D0
    ctx->r18 = ADD32(ctx->r18, -0X10D0);
    // 0x801F780C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801F7810: addiu       $s1, $zero, 0xFA
    ctx->r17 = ADD32(0, 0XFA);
    // 0x801F7814: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_801F7818:
    // 0x801F7818: jal         0x8000DD58
    // 0x801F781C: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801F781C: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_0:
    // 0x801F7820: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x801F7824: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x801F7828: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801F782C: mflo        $v1
    ctx->r3 = lo;
    // 0x801F7830: lhu         $t8, 0x4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X4);
    // 0x801F7834: bne         $s1, $zero, L_801F7840
    if (ctx->r17 != 0) {
        // 0x801F7838: nop
    
            goto L_801F7840;
    }
    // 0x801F7838: nop

    // 0x801F783C: break       7
    do_break(2149546044);
L_801F7840:
    // 0x801F7840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801F7844: bne         $s1, $at, L_801F7858
    if (ctx->r17 != ctx->r1) {
        // 0x801F7848: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801F7858;
    }
    // 0x801F7848: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F784C: bne         $v0, $at, L_801F7858
    if (ctx->r2 != ctx->r1) {
        // 0x801F7850: nop
    
            goto L_801F7858;
    }
    // 0x801F7850: nop

    // 0x801F7854: break       6
    do_break(2149546068);
L_801F7858:
    // 0x801F7858: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x801F785C: bne         $v1, $t8, L_801F7870
    if (ctx->r3 != ctx->r24) {
        // 0x801F7860: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_801F7870;
    }
    // 0x801F7860: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x801F7864: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x801F7868: bne         $at, $zero, L_801F7818
    if (ctx->r1 != 0) {
        // 0x801F786C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_801F7818;
    }
    // 0x801F786C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_801F7870:
    // 0x801F7870: beq         $v1, $zero, L_801F7898
    if (ctx->r3 == 0) {
        // 0x801F7874: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801F7898;
    }
    // 0x801F7874: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F7878: beq         $v1, $at, L_801F78C4
    if (ctx->r3 == ctx->r1) {
        // 0x801F787C: addiu       $a0, $zero, 0x27A
        ctx->r4 = ADD32(0, 0X27A);
            goto L_801F78C4;
    }
    // 0x801F787C: addiu       $a0, $zero, 0x27A
    ctx->r4 = ADD32(0, 0X27A);
    // 0x801F7880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F7884: beq         $v1, $at, L_801F78EC
    if (ctx->r3 == ctx->r1) {
        // 0x801F7888: addiu       $a0, $zero, 0x27B
        ctx->r4 = ADD32(0, 0X27B);
            goto L_801F78EC;
    }
    // 0x801F7888: addiu       $a0, $zero, 0x27B
    ctx->r4 = ADD32(0, 0X27B);
    // 0x801F788C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F7890: beq         $v1, $at, L_801F7914
    if (ctx->r3 == ctx->r1) {
        // 0x801F7894: addiu       $a0, $zero, 0x27C
        ctx->r4 = ADD32(0, 0X27C);
            goto L_801F7914;
    }
    // 0x801F7894: addiu       $a0, $zero, 0x27C
    ctx->r4 = ADD32(0, 0X27C);
L_801F7898:
    // 0x801F7898: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F789C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F78A0: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F78A4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F78A8: addiu       $a0, $zero, 0x279
    ctx->r4 = ADD32(0, 0X279);
    // 0x801F78AC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801F78B0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801F78B4: jal         0x8000F3D8
    // 0x801F78B8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_1;
    // 0x801F78B8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_1:
    // 0x801F78BC: b           L_801F7938
    // 0x801F78C0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
        goto L_801F7938;
    // 0x801F78C0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_801F78C4:
    // 0x801F78C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F78C8: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F78CC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F78D0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F78D4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801F78D8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801F78DC: jal         0x8000F3D8
    // 0x801F78E0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_2;
    // 0x801F78E0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_2:
    // 0x801F78E4: b           L_801F7938
    // 0x801F78E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
        goto L_801F7938;
    // 0x801F78E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_801F78EC:
    // 0x801F78EC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F78F0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F78F4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F78F8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F78FC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801F7900: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801F7904: jal         0x8000F3D8
    // 0x801F7908: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_3;
    // 0x801F7908: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801F790C: b           L_801F7938
    // 0x801F7910: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
        goto L_801F7938;
    // 0x801F7910: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_801F7914:
    // 0x801F7914: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7918: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F791C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F7920: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F7924: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801F7928: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801F792C: jal         0x8000F3D8
    // 0x801F7930: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F7930: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801F7934: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
L_801F7938:
    // 0x801F7938: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x801F793C: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x801F7940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F7944: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801F7948: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801F794C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F7950: jr          $ra
    // 0x801F7954: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801F7954: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CC010_5F73F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC014: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CC018: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801CC01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC024: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CC028: lbu         $t7, 0x2C4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C4);
    // 0x801CC02C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CC030: bne         $t7, $zero, L_801CC040
    if (ctx->r15 != 0) {
        // 0x801CC034: nop
    
            goto L_801CC040;
    }
    // 0x801CC034: nop

    // 0x801CC038: jal         0x8003521C
    // 0x801CC03C: addiu       $a0, $a0, -0x41C4
    ctx->r4 = ADD32(ctx->r4, -0X41C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CC03C: addiu       $a0, $a0, -0x41C4
    ctx->r4 = ADD32(ctx->r4, -0X41C4);
    after_0:
L_801CC040:
    // 0x801CC040: jal         0x8000DD58
    // 0x801CC044: addiu       $a0, $zero, 0x11B7
    ctx->r4 = ADD32(0, 0X11B7);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801CC044: addiu       $a0, $zero, 0x11B7
    ctx->r4 = ADD32(0, 0X11B7);
    after_1:
    // 0x801CC048: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC04C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CC050: lw          $t8, 0x2C8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C8);
    // 0x801CC054: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CC058: sw          $t9, 0x2C8($v0)
    MEM_W(0X2C8, ctx->r2) = ctx->r25;
    // 0x801CC05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC064: jr          $ra
    // 0x801CC068: nop

    TRACE_RETURN()
    return;
    // 0x801CC068: nop

;}
RECOMP_FUNC void func_801DC584_607964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC584: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DC588: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801DC58C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801DC590: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DC594: bne         $a2, $at, L_801DC5F8
    if (ctx->r6 != ctx->r1) {
        // 0x801DC598: sw          $a0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r4;
            goto L_801DC5F8;
    }
    // 0x801DC598: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801DC59C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DC5A0: addiu       $t7, $t7, -0x61EC
    ctx->r15 = ADD32(ctx->r15, -0X61EC);
    // 0x801DC5A4: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x801DC5A8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801DC5AC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801DC5B0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801DC5B4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DC5B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC5BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DC5C0: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DC5C4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DC5C8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DC5CC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DC5D0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DC5D4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DC5D8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DC5DC: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801DC5E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DC5E4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801DC5E8: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801DC5EC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DC5F0: b           L_801DC650
    // 0x801DC5F4: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
        goto L_801DC650;
    // 0x801DC5F4: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
L_801DC5F8:
    // 0x801DC5F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801DC5FC: addiu       $t9, $t9, -0x626C
    ctx->r25 = ADD32(ctx->r25, -0X626C);
    // 0x801DC600: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x801DC604: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801DC608: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801DC60C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801DC610: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DC614: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC618: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DC61C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DC620: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DC624: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DC628: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DC62C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DC630: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DC634: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DC638: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801DC63C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DC640: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801DC644: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801DC648: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DC64C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
L_801DC650:
    // 0x801DC650: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801DC654: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x801DC658: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x801DC65C: addiu       $a1, $a1, -0x100
    ctx->r5 = ADD32(ctx->r5, -0X100);
    // 0x801DC660: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x801DC664: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801DC668: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DC66C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DC670: lhu         $a0, 0x6A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6A);
    // 0x801DC674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DC678: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801DC67C: jal         0x8000E808
    // 0x801DC680: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801DC680: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801DC684: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801DC688: addiu       $a1, $a1, 0xB4
    ctx->r5 = ADD32(ctx->r5, 0XB4);
    // 0x801DC68C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DC690: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DC694: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DC698: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DC69C: ldc1        $f10, -0x2550($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2550);
    // 0x801DC6A0: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x801DC6A4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DC6A8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801DC6AC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801DC6B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC6B4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DC6B8: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x801DC6BC: addiu       $t4, $zero, 0x4A8
    ctx->r12 = ADD32(0, 0X4A8);
    // 0x801DC6C0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x801DC6C4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801DC6C8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DC6CC: addiu       $a2, $a2, -0x5AA0
    ctx->r6 = ADD32(ctx->r6, -0X5AA0);
    // 0x801DC6D0: addiu       $a0, $a0, -0x38C4
    ctx->r4 = ADD32(ctx->r4, -0X38C4);
    // 0x801DC6D4: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801DC6D8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x801DC6DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DC6E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DC6E4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DC6E8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801DC6EC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801DC6F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DC6F4: jal         0x80035854
    // 0x801DC6F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801DC6F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801DC6FC: bne         $v0, $zero, L_801DC70C
    if (ctx->r2 != 0) {
        // 0x801DC700: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DC70C;
    }
    // 0x801DC700: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DC704: b           L_801DC72C
    // 0x801DC708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC72C;
    // 0x801DC708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC70C:
    // 0x801DC70C: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x801DC710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DC714: sw          $t5, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r13;
    // 0x801DC718: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x801DC71C: sw          $zero, 0x98($v1)
    MEM_W(0X98, ctx->r3) = 0;
    // 0x801DC720: sw          $t6, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->r14;
    // 0x801DC724: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x801DC728: sw          $t7, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r15;
L_801DC72C:
    // 0x801DC72C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DC730: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801DC734: jr          $ra
    // 0x801DC738: nop

    TRACE_RETURN()
    return;
    // 0x801DC738: nop

;}
RECOMP_FUNC void func_801E5450_610830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5450: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E5454: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E5458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E545C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5460: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x801E5464: slti        $at, $v1, 0x5DD
    ctx->r1 = SIGNED(ctx->r3) < 0X5DD ? 1 : 0;
    // 0x801E5468: bnel        $at, $zero, L_801E54A0
    if (ctx->r1 != 0) {
        // 0x801E546C: slti        $at, $v1, 0x3E9
        ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
            goto L_801E54A0;
    }
    goto skip_0;
    // 0x801E546C: slti        $at, $v1, 0x3E9
    ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
    skip_0:
    // 0x801E5470: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x801E5474: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E5478: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x801E547C: beql        $t6, $zero, L_801E5508
    if (ctx->r14 == 0) {
        // 0x801E5480: lw          $t1, 0xD4($a0)
        ctx->r9 = MEM_W(ctx->r4, 0XD4);
            goto L_801E5508;
    }
    goto skip_1;
    // 0x801E5480: lw          $t1, 0xD4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD4);
    skip_1:
    // 0x801E5484: jal         0x801E58C8
    // 0x801E5488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_0;
    // 0x801E5488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E548C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E5490: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E5494: b           L_801E5504
    // 0x801E5498: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
        goto L_801E5504;
    // 0x801E5498: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x801E549C: slti        $at, $v1, 0x3E9
    ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
L_801E54A0:
    // 0x801E54A0: bnel        $at, $zero, L_801E54DC
    if (ctx->r1 != 0) {
        // 0x801E54A4: lw          $t9, 0xCC($a0)
        ctx->r25 = MEM_W(ctx->r4, 0XCC);
            goto L_801E54DC;
    }
    goto skip_2;
    // 0x801E54A4: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    skip_2:
    // 0x801E54A8: lw          $t7, 0xCC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XCC);
    // 0x801E54AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E54B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E54B4: beq         $t7, $at, L_801E5504
    if (ctx->r15 == ctx->r1) {
        // 0x801E54B8: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_801E5504;
    }
    // 0x801E54B8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x801E54BC: jal         0x801E58C8
    // 0x801E54C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_1;
    // 0x801E54C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E54C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E54C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E54CC: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E54D0: b           L_801E5504
    // 0x801E54D4: sw          $t8, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r24;
        goto L_801E5504;
    // 0x801E54D4: sw          $t8, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r24;
    // 0x801E54D8: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
L_801E54DC:
    // 0x801E54DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E54E0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E54E4: beq         $t9, $at, L_801E5504
    if (ctx->r25 == ctx->r1) {
        // 0x801E54E8: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_801E5504;
    }
    // 0x801E54E8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x801E54EC: jal         0x801E58C8
    // 0x801E54F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E58C8_610CA8(rdram, ctx);
        goto after_2;
    // 0x801E54F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x801E54F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E54F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801E54FC: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801E5500: sw          $t0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r8;
L_801E5504:
    // 0x801E5504: lw          $t1, 0xD4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD4);
L_801E5508:
    // 0x801E5508: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801E550C: bgtz        $t2, L_801E5564
    if (SIGNED(ctx->r10) > 0) {
        // 0x801E5510: sw          $t2, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r10;
            goto L_801E5564;
    }
    // 0x801E5510: sw          $t2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r10;
    // 0x801E5514: lw          $v0, 0xCC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XCC);
    // 0x801E5518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E551C: beq         $v0, $zero, L_801E553C
    if (ctx->r2 == 0) {
        // 0x801E5520: nop
    
            goto L_801E553C;
    }
    // 0x801E5520: nop

    // 0x801E5524: beq         $v0, $at, L_801E554C
    if (ctx->r2 == ctx->r1) {
        // 0x801E5528: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E554C;
    }
    // 0x801E5528: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E552C: beq         $v0, $at, L_801E555C
    if (ctx->r2 == ctx->r1) {
        // 0x801E5530: nop
    
            goto L_801E555C;
    }
    // 0x801E5530: nop

    // 0x801E5534: b           L_801E555C
    // 0x801E5538: nop

        goto L_801E555C;
    // 0x801E5538: nop

L_801E553C:
    // 0x801E553C: jal         0x801E5574
    // 0x801E5540: nop

    func_801E5574_610954(rdram, ctx);
        goto after_3;
    // 0x801E5540: nop

    after_3:
    // 0x801E5544: b           L_801E5568
    // 0x801E5548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5568;
    // 0x801E5548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E554C:
    // 0x801E554C: jal         0x801E5690
    // 0x801E5550: nop

    func_801E5690_610A70(rdram, ctx);
        goto after_4;
    // 0x801E5550: nop

    after_4:
    // 0x801E5554: b           L_801E5568
    // 0x801E5558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5568;
    // 0x801E5558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E555C:
    // 0x801E555C: jal         0x801E57AC
    // 0x801E5560: nop

    func_801E57AC_610B8C(rdram, ctx);
        goto after_5;
    // 0x801E5560: nop

    after_5:
L_801E5564:
    // 0x801E5564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5568:
    // 0x801E5568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E556C: jr          $ra
    // 0x801E5570: nop

    TRACE_RETURN()
    return;
    // 0x801E5570: nop

;}
RECOMP_FUNC void func_801FE47C_62985C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE47C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FE480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FE484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FE488: jal         0x801FFE6C
    // 0x801FE48C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE48C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE490: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE494: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE498: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE49C: addiu       $a1, $a1, -0x4BF8
    ctx->r5 = ADD32(ctx->r5, -0X4BF8);
    // 0x801FE4A0: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE4A4: jal         0x801D2EE4
    // 0x801FE4A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE4A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801FE4AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE4B0: jal         0x8003521C
    // 0x801FE4B4: addiu       $a0, $a0, -0x1B30
    ctx->r4 = ADD32(ctx->r4, -0X1B30);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FE4B4: addiu       $a0, $a0, -0x1B30
    ctx->r4 = ADD32(ctx->r4, -0X1B30);
    after_2:
    // 0x801FE4B8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801FE4BC: sw          $zero, 0x90($t7)
    MEM_W(0X90, ctx->r15) = 0;
    // 0x801FE4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FE4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FE4C8: jr          $ra
    // 0x801FE4CC: nop

    TRACE_RETURN()
    return;
    // 0x801FE4CC: nop

;}
RECOMP_FUNC void func_801F0330_61B710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0334: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F0338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F033C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F0340: jal         0x801D3018
    // 0x801F0344: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F0344: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F0348: jal         0x801F76D0
    // 0x801F034C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F034C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F0350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F0358: jal         0x801D3F00
    // 0x801F035C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801F035C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x801F0360: jal         0x801F732C
    // 0x801F0364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F732C_62270C(rdram, ctx);
        goto after_3;
    // 0x801F0364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801F0368: beq         $v0, $zero, L_801F0388
    if (ctx->r2 == 0) {
        // 0x801F036C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F0388;
    }
    // 0x801F036C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0370: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0374: jal         0x801D31CC
    // 0x801F0378: addiu       $a1, $a1, -0x4D58
    ctx->r5 = ADD32(ctx->r5, -0X4D58);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801F0378: addiu       $a1, $a1, -0x4D58
    ctx->r5 = ADD32(ctx->r5, -0X4D58);
    after_4:
    // 0x801F037C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0380: jal         0x8003521C
    // 0x801F0384: addiu       $a0, $a0, 0x398
    ctx->r4 = ADD32(ctx->r4, 0X398);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F0384: addiu       $a0, $a0, 0x398
    ctx->r4 = ADD32(ctx->r4, 0X398);
    after_5:
L_801F0388:
    // 0x801F0388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F038C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0390: jr          $ra
    // 0x801F0394: nop

    TRACE_RETURN()
    return;
    // 0x801F0394: nop

;}
RECOMP_FUNC void func_801EE354_619734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE354: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EE358: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EE35C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EE360: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801EE364: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801EE368: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801EE36C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EE370: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EE374: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x801EE378: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EE37C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EE380: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EE384: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EE388: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EE38C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE390: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801EE394: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x801EE398: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EE39C: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801EE3A0: nop

    // 0x801EE3A4: bc1fl       L_801EE3B8
    if (!c1cs) {
        // 0x801EE3A8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801EE3B8;
    }
    goto skip_0;
    // 0x801EE3A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801EE3AC: b           L_801EE3B8
    // 0x801EE3B0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801EE3B8;
    // 0x801EE3B0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801EE3B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801EE3B8:
    // 0x801EE3B8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801EE3BC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE3C0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801EE3C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801EE3C8: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801EE3CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EE3D0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE3D4: nop

    // 0x801EE3D8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE3DC: beql        $a3, $zero, L_801EE42C
    if (ctx->r7 == 0) {
        // 0x801EE3E0: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_801EE42C;
    }
    goto skip_1;
    // 0x801EE3E0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801EE3E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EE3E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801EE3EC: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x801EE3F0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801EE3F4: nop

    // 0x801EE3F8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801EE3FC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801EE400: nop

    // 0x801EE404: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801EE408: bne         $a3, $zero, L_801EE420
    if (ctx->r7 != 0) {
        // 0x801EE40C: nop
    
            goto L_801EE420;
    }
    // 0x801EE40C: nop

    // 0x801EE410: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801EE414: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EE418: b           L_801EE438
    // 0x801EE41C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801EE438;
    // 0x801EE41C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801EE420:
    // 0x801EE420: b           L_801EE438
    // 0x801EE424: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801EE438;
    // 0x801EE424: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801EE428: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_801EE42C:
    // 0x801EE42C: nop

    // 0x801EE430: bltz        $a3, L_801EE420
    if (SIGNED(ctx->r7) < 0) {
        // 0x801EE434: nop
    
            goto L_801EE420;
    }
    // 0x801EE434: nop

L_801EE438:
    // 0x801EE438: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801EE43C: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x801EE440: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801EE444: jal         0x801D15BC
    // 0x801EE448: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801EE448: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801EE44C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801EE450: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE454: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EE458: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x801EE45C: nop

    // 0x801EE460: bc1fl       L_801EE474
    if (!c1cs) {
        // 0x801EE464: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_801EE474;
    }
    goto skip_2;
    // 0x801EE464: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801EE468: jal         0x80038BC8
    // 0x801EE46C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EE46C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x801EE470: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_801EE474:
    // 0x801EE474: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EE478: ldc1        $f8, -0x1D58($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1D58);
    // 0x801EE47C: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x801EE480: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EE484: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EE488: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801EE48C: nop

    // 0x801EE490: bc1fl       L_801EE4A4
    if (!c1cs) {
        // 0x801EE494: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801EE4A4;
    }
    goto skip_3;
    // 0x801EE494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801EE498: jal         0x8003521C
    // 0x801EE49C: addiu       $a0, $a0, -0x1B4C
    ctx->r4 = ADD32(ctx->r4, -0X1B4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EE49C: addiu       $a0, $a0, -0x1B4C
    ctx->r4 = ADD32(ctx->r4, -0X1B4C);
    after_2:
    // 0x801EE4A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EE4A4:
    // 0x801EE4A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EE4A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EE4AC: jr          $ra
    // 0x801EE4B0: nop

    TRACE_RETURN()
    return;
    // 0x801EE4B0: nop

;}
RECOMP_FUNC void func_801F9968_624D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9968: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F996C: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x801F9970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9974: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F997C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9984: lwc1        $f4, 0xA0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801F9988: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F998C: ldc1        $f8, -0x1768($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1768);
    // 0x801F9990: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F9994: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801F9998: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F999C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F99A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F99A4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801F99A8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F99AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F99B0: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801F99B4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x801F99B8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801F99BC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F99C0: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F99C4: nop

    // 0x801F99C8: bc1fl       L_801F99E4
    if (!c1cs) {
        // 0x801F99CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F99E4;
    }
    goto skip_0;
    // 0x801F99CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F99D0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801F99D4: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    // 0x801F99D8: jal         0x8003521C
    // 0x801F99DC: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F99DC: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    after_0:
    // 0x801F99E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F99E4:
    // 0x801F99E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F99E8: jr          $ra
    // 0x801F99EC: nop

    TRACE_RETURN()
    return;
    // 0x801F99EC: nop

;}
RECOMP_FUNC void func_801DCC70_608050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCC70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DCC74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DCC78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DCC7C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801DCC80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DCC84: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801DCC88: addiu       $v0, $t6, -0x8
    ctx->r2 = ADD32(ctx->r14, -0X8);
    // 0x801DCC8C: bgtz        $v0, L_801DCC9C
    if (SIGNED(ctx->r2) > 0) {
        // 0x801DCC90: sw          $v0, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r2;
            goto L_801DCC9C;
    }
    // 0x801DCC90: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x801DCC94: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x801DCC98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCC9C:
    // 0x801DCC9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DCCA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DCCA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DCCA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801DCCAC: jal         0x8000DF10
    // 0x801DCCB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801DCCB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DCCB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DCCB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801DCCBC: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801DCCC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DCCC4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DCCC8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801DCCCC: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x801DCCD0: lw          $t1, 0x7C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X7C);
    // 0x801DCCD4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801DCCD8: bgtz        $t2, L_801DCCE8
    if (SIGNED(ctx->r10) > 0) {
        // 0x801DCCDC: sw          $t2, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r10;
            goto L_801DCCE8;
    }
    // 0x801DCCDC: sw          $t2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r10;
    // 0x801DCCE0: jal         0x80034ED4
    // 0x801DCCE4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801DCCE4: nop

    after_1:
L_801DCCE8:
    // 0x801DCCE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DCCEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DCCF0: jr          $ra
    // 0x801DCCF4: nop

    TRACE_RETURN()
    return;
    // 0x801DCCF4: nop

;}
RECOMP_FUNC void func_801DAA68_605E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAA68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DAA6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DAA70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DAA74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAA78: jal         0x801D9030
    // 0x801DAA7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801DAA7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DAA80: jal         0x801DAEC8
    // 0x801DAA84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAEC8_6062A8(rdram, ctx);
        goto after_1;
    // 0x801DAA84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DAA88: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x801DAA8C: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x801DAA90: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801DAA94: addiu       $v0, $t6, 0x10
    ctx->r2 = ADD32(ctx->r14, 0X10);
    // 0x801DAA98: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x801DAA9C: bne         $at, $zero, L_801DAABC
    if (ctx->r1 != 0) {
        // 0x801DAAA0: sw          $v0, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r2;
            goto L_801DAABC;
    }
    // 0x801DAAA0: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x801DAAA4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAAA8: sw          $t8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r24;
    // 0x801DAAAC: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801DAAB0: jal         0x8003521C
    // 0x801DAAB4: addiu       $a0, $a0, -0x5504
    ctx->r4 = ADD32(ctx->r4, -0X5504);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DAAB4: addiu       $a0, $a0, -0x5504
    ctx->r4 = ADD32(ctx->r4, -0X5504);
    after_2:
    // 0x801DAAB8: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
L_801DAABC:
    // 0x801DAABC: lw          $t0, 0x9C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X9C);
    // 0x801DAAC0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801DAAC4: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x801DAAC8: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
    // 0x801DAACC: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x801DAAD0: beq         $a1, $zero, L_801DAAE0
    if (ctx->r5 == 0) {
        // 0x801DAAD4: nop
    
            goto L_801DAAE0;
    }
    // 0x801DAAD4: nop

    // 0x801DAAD8: jal         0x801DAF10
    // 0x801DAADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAF10_6062F0(rdram, ctx);
        goto after_3;
    // 0x801DAADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_801DAAE0:
    // 0x801DAAE0: jal         0x801D36BC
    // 0x801DAAE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_4;
    // 0x801DAAE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DAAE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAAEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DAAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DAAF4: jr          $ra
    // 0x801DAAF8: nop

    TRACE_RETURN()
    return;
    // 0x801DAAF8: nop

;}
RECOMP_FUNC void func_801F02A0_61B680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F02A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F02A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F02A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F02AC: jal         0x801F76D0
    // 0x801F02B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F02B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F02B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F02B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F02BC: jal         0x801D3F00
    // 0x801F02C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801F02C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801F02C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F02C8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801F02CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F02D0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801F02D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801F02D8: jal         0x801D3CE4
    // 0x801F02DC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801D3CE4_5FF0C4(rdram, ctx);
        goto after_2;
    // 0x801F02DC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x801F02E0: beq         $v0, $zero, L_801F0320
    if (ctx->r2 == 0) {
        // 0x801F02E4: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_801F0320;
    }
    // 0x801F02E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F02E8: jal         0x801D2F40
    // 0x801F02EC: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801F02EC: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_3:
    // 0x801F02F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F02F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F02F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F02FC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F0300: nop

    // 0x801F0304: bc1fl       L_801F0324
    if (!c1cs) {
        // 0x801F0308: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0324;
    }
    goto skip_0;
    // 0x801F0308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F030C: jal         0x801D31CC
    // 0x801F0310: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801F0310: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    after_4:
    // 0x801F0314: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0318: jal         0x8003521C
    // 0x801F031C: addiu       $a0, $a0, 0x330
    ctx->r4 = ADD32(ctx->r4, 0X330);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F031C: addiu       $a0, $a0, 0x330
    ctx->r4 = ADD32(ctx->r4, 0X330);
    after_5:
L_801F0320:
    // 0x801F0320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0324:
    // 0x801F0324: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0328: jr          $ra
    // 0x801F032C: nop

    TRACE_RETURN()
    return;
    // 0x801F032C: nop

;}
RECOMP_FUNC void func_801FF798_62AB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF798: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FF79C: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FF7A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FF7A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FF7A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FF7AC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FF7B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801FF7B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FF7B8: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    // 0x801FF7BC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801FF7C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801FF7C4: jal         0x801D2F40
    // 0x801FF7C8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FF7C8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x801FF7CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FF7D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF7D4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FF7D8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801FF7DC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801FF7E0: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x801FF7E4: addiu       $a0, $a0, -0x74C
    ctx->r4 = ADD32(ctx->r4, -0X74C);
    // 0x801FF7E8: bc1fl       L_801FF8A8
    if (!c1cs) {
        // 0x801FF7EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FF8A8;
    }
    goto skip_0;
    // 0x801FF7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FF7F0: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801FF7F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FF7F8: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x801FF7FC: nop

    // 0x801FF800: bc1fl       L_801FF81C
    if (!c1cs) {
        // 0x801FF804: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_801FF81C;
    }
    goto skip_1;
    // 0x801FF804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_1:
    // 0x801FF808: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FF80C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FF810: b           L_801FF824
    // 0x801FF814: swc1        $f6, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f6.u32l;
        goto L_801FF824;
    // 0x801FF814: swc1        $f6, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f6.u32l;
    // 0x801FF818: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_801FF81C:
    // 0x801FF81C: nop

    // 0x801FF820: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
L_801FF824:
    // 0x801FF824: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801FF828: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FF82C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801FF830: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FF834: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801FF838: nop

    // 0x801FF83C: bc1fl       L_801FF858
    if (!c1cs) {
        // 0x801FF840: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_801FF858;
    }
    goto skip_2;
    // 0x801FF840: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_2:
    // 0x801FF844: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x801FF848: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FF84C: b           L_801FF860
    // 0x801FF850: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
        goto L_801FF860;
    // 0x801FF850: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
    // 0x801FF854: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_801FF858:
    // 0x801FF858: nop

    // 0x801FF85C: swc1        $f4, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f4.u32l;
L_801FF860:
    // 0x801FF860: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801FF864: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FF868: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801FF86C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FF870: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801FF874: nop

    // 0x801FF878: bc1fl       L_801FF894
    if (!c1cs) {
        // 0x801FF87C: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_801FF894;
    }
    goto skip_3;
    // 0x801FF87C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_3:
    // 0x801FF880: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801FF884: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FF888: b           L_801FF89C
    // 0x801FF88C: swc1        $f10, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f10.u32l;
        goto L_801FF89C;
    // 0x801FF88C: swc1        $f10, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f10.u32l;
    // 0x801FF890: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_801FF894:
    // 0x801FF894: nop

    // 0x801FF898: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
L_801FF89C:
    // 0x801FF89C: jal         0x8003521C
    // 0x801FF8A0: sw          $t8, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FF8A0: sw          $t8, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r24;
    after_1:
    // 0x801FF8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FF8A8:
    // 0x801FF8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FF8AC: jr          $ra
    // 0x801FF8B0: nop

    TRACE_RETURN()
    return;
    // 0x801FF8B0: nop

;}
RECOMP_FUNC void func_801D9D98_605178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9D98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D9D9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D9DA0: jr          $ra
    // 0x801D9DA4: sb          $t6, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801D9DA4: sb          $t6, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_80200200_62B5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200200: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80200204: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80200208: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020020C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80200210: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x80200214: addiu       $a1, $a1, 0x6730
    ctx->r5 = ADD32(ctx->r5, 0X6730);
    // 0x80200218: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020021C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80200220: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200224: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80200228: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x8020022C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200230: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80200234: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80200238: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8020023C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80200240: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80200244: addiu       $t7, $zero, 0x4B5
    ctx->r15 = ADD32(0, 0X4B5);
    // 0x80200248: addiu       $t6, $v0, 0x178
    ctx->r14 = ADD32(ctx->r2, 0X178);
    // 0x8020024C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80200250: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x80200254: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80200258: addiu       $a2, $a2, -0x5198
    ctx->r6 = ADD32(ctx->r6, -0X5198);
    // 0x8020025C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80200260: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80200264: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80200268: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020026C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80200270: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80200274: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80200278: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8020027C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80200280: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80200284: jal         0x8000DBF0
    // 0x80200288: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x80200288: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8020028C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80200290: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80200294: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x80200298: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x8020029C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802002A0: sw          $v0, 0x1E0($t8)
    MEM_W(0X1E0, ctx->r24) = ctx->r2;
    // 0x802002A4: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x802002A8: addiu       $t2, $zero, 0x190
    ctx->r10 = ADD32(0, 0X190);
    // 0x802002AC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802002B0: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x802002B4: sh          $t9, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r25;
    // 0x802002B8: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x802002BC: sh          $t1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r9;
    // 0x802002C0: sh          $t2, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r10;
    // 0x802002C4: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x802002C8: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x802002CC: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x802002D0: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x802002D4: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x802002D8: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802002DC: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x802002E0: sw          $t4, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r12;
    // 0x802002E4: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x802002E8: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x802002EC: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x802002F0: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    // 0x802002F4: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x802002F8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x802002FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80200300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80200304: addiu       $v1, $zero, 0x3E8
    ctx->r3 = ADD32(0, 0X3E8);
    // 0x80200308: sw          $v1, 0x60($t5)
    MEM_W(0X60, ctx->r13) = ctx->r3;
    // 0x8020030C: sw          $v1, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r3;
    // 0x80200310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200314: jal         0x80202028
    // 0x80200318: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_80202028_62D408(rdram, ctx);
        goto after_1;
    // 0x80200318: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x8020031C: jal         0x80202158
    // 0x80200320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80202158_62D538(rdram, ctx);
        goto after_2;
    // 0x80200320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80200324: jal         0x8020247C
    // 0x80200328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020247C_62D85C(rdram, ctx);
        goto after_3;
    // 0x80200328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020032C: jal         0x801D2D68
    // 0x80200330: nop

    func_801D2D68_5FE148(rdram, ctx);
        goto after_4;
    // 0x80200330: nop

    after_4:
    // 0x80200334: jal         0x802027BC
    // 0x80200338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802027BC_62DB9C(rdram, ctx);
        goto after_5;
    // 0x80200338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8020033C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80200340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200344: jal         0x80202A9C
    // 0x80200348: sw          $v0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r2;
    func_80202A9C_62DE7C(rdram, ctx);
        goto after_6;
    // 0x80200348: sw          $v0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r2;
    after_6:
    // 0x8020034C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80200350: jal         0x802099A8
    // 0x80200354: sw          $v0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r2;
    func_802099A8_634D88(rdram, ctx);
        goto after_7;
    // 0x80200354: sw          $v0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r2;
    after_7:
    // 0x80200358: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020035C: jal         0x8003521C
    // 0x80200360: addiu       $a0, $a0, 0x3E0
    ctx->r4 = ADD32(ctx->r4, 0X3E0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x80200360: addiu       $a0, $a0, 0x3E0
    ctx->r4 = ADD32(ctx->r4, 0X3E0);
    after_8:
    // 0x80200364: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80200368: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8020036C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80200370: jr          $ra
    // 0x80200374: nop

    TRACE_RETURN()
    return;
    // 0x80200374: nop

;}
RECOMP_FUNC void func_8020324C_62E62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020324C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80203250: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203254: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80203258: jal         0x80203F88
    // 0x8020325C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x8020325C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80203260: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80203264: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80203268: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8020326C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80203270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80203274: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80203278: bne         $t7, $zero, L_802032D8
    if (ctx->r15 != 0) {
        // 0x8020327C: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_802032D8;
    }
    // 0x8020327C: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80203280: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80203284: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80203288: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8020328C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80203290: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80203294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80203298: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020329C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802032A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802032A4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x802032A8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802032AC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802032B0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802032B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802032B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802032BC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802032C0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802032C4: jal         0x801DFB90
    // 0x802032C8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x802032C8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x802032CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802032D0: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x802032D4: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
L_802032D8:
    // 0x802032D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802032DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802032E0: jr          $ra
    // 0x802032E4: nop

    TRACE_RETURN()
    return;
    // 0x802032E4: nop

;}
RECOMP_FUNC void func_801DBBE8_606FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBBE8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x801DBBEC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DBBF0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DBBF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DBBF8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801DBBFC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DBC00: addiu       $t6, $v0, 0x178
    ctx->r14 = ADD32(ctx->r2, 0X178);
    // 0x801DBC04: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x801DBC08: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x801DBC0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DBC10: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DBC14: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x801DBC18: lwc1        $f18, 0x9C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DBC1C: lwc1        $f16, 0xA8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801DBC20: lwc1        $f14, 0xA0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801DBC24: lwc1        $f12, 0xAC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801DBC28: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801DBC2C: lwc1        $f18, 0xA4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801DBC30: lwc1        $f10, 0xB0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x801DBC34: add.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x801DBC38: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x801DBC3C: swc1        $f16, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f16.u32l;
    // 0x801DBC40: add.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DBC44: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x801DBC48: swc1        $f12, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f12.u32l;
    // 0x801DBC4C: bne         $at, $zero, L_801DBC90
    if (ctx->r1 != 0) {
        // 0x801DBC50: swc1        $f10, 0xA4($a0)
        MEM_W(0XA4, ctx->r4) = ctx->f10.u32l;
            goto L_801DBC90;
    }
    // 0x801DBC50: swc1        $f10, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f10.u32l;
    // 0x801DBC54: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x801DBC58: lwc1        $f12, 0x9C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DBC5C: lwc1        $f14, 0xA0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801DBC60: lw          $a2, 0xA4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XA4);
    // 0x801DBC64: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801DBC68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DBC6C: jal         0x801D46B8
    // 0x801DBC70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_0;
    // 0x801DBC70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    after_0:
    // 0x801DBC74: lw          $t0, 0x8C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8C);
    // 0x801DBC78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBC7C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801DBC80: jal         0x801DBF20
    // 0x801DBC84: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    func_801DBF20_607300(rdram, ctx);
        goto after_1;
    // 0x801DBC84: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    after_1:
    // 0x801DBC88: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
    // 0x801DBC8C: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
L_801DBC90:
    // 0x801DBC90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DBC94: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DBC98: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DBC9C: jal         0x801D620C
    // 0x801DBCA0: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    func_801D620C_6015EC(rdram, ctx);
        goto after_2;
    // 0x801DBCA0: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    after_2:
    // 0x801DBCA4: lw          $t2, 0x80($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X80);
    // 0x801DBCA8: lw          $t4, 0x88($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X88);
    // 0x801DBCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBCB0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801DBCB4: addiu       $a2, $t4, 0x1
    ctx->r6 = ADD32(ctx->r12, 0X1);
    // 0x801DBCB8: sw          $t3, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r11;
    // 0x801DBCBC: sw          $a2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r6;
    // 0x801DBCC0: lw          $a1, 0x84($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X84);
    // 0x801DBCC4: jal         0x801DBFB4
    // 0x801DBCC8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_801DBFB4_607394(rdram, ctx);
        goto after_3;
    // 0x801DBCC8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_3:
    // 0x801DBCCC: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x801DBCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBCD4: sltiu       $at, $t6, 0x4
    ctx->r1 = ctx->r14 < 0X4 ? 1 : 0;
    // 0x801DBCD8: bne         $at, $zero, L_801DBCFC
    if (ctx->r1 != 0) {
        // 0x801DBCDC: nop
    
            goto L_801DBCFC;
    }
    // 0x801DBCDC: nop

    // 0x801DBCE0: jal         0x801DC068
    // 0x801DBCE4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801DC068_607448(rdram, ctx);
        goto after_4;
    // 0x801DBCE4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_4:
    // 0x801DBCE8: beq         $v0, $zero, L_801DBCFC
    if (ctx->r2 == 0) {
        // 0x801DBCEC: nop
    
            goto L_801DBCFC;
    }
    // 0x801DBCEC: nop

    // 0x801DBCF0: lw          $t7, 0x8C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8C);
    // 0x801DBCF4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801DBCF8: sw          $t8, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r24;
L_801DBCFC:
    // 0x801DBCFC: jal         0x801D365C
    // 0x801DBD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_5;
    // 0x801DBD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DBD04: beq         $v0, $zero, L_801DBDB8
    if (ctx->r2 == 0) {
        // 0x801DBD08: addiu       $a0, $sp, 0x4C
        ctx->r4 = ADD32(ctx->r29, 0X4C);
            goto L_801DBDB8;
    }
    // 0x801DBD08: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DBD0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DBD10: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DBD14: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DBD18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DBD1C: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DBD20: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DBD24: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801DBD28: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801DBD2C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801DBD30: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801DBD34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DBD38: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x801DBD3C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801DBD40: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801DBD44: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801DBD48: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801DBD4C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801DBD50: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801DBD54: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801DBD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBD5C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DBD60: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DBD64: jal         0x801E1E24
    // 0x801DBD68: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_6;
    // 0x801DBD68: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x801DBD6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DBD70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DBD74: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DBD78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DBD7C: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DBD80: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801DBD84: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801DBD88: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801DBD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBD90: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DBD94: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DBD98: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DBD9C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801DBDA0: jal         0x801E1B30
    // 0x801DBDA4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_7;
    // 0x801DBDA4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x801DBDA8: jal         0x80038BC8
    // 0x801DBDAC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    func_80038BC8_397C8(rdram, ctx);
        goto after_8;
    // 0x801DBDAC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_8:
    // 0x801DBDB0: b           L_801DBF10
    // 0x801DBDB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DBF10;
    // 0x801DBDB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DBDB8:
    // 0x801DBDB8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x801DBDBC: sh          $zero, 0x84($sp)
    MEM_H(0X84, ctx->r29) = 0;
    // 0x801DBDC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801DBDC4: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    // 0x801DBDC8: jal         0x801D4188
    // 0x801DBDCC: lw          $a1, 0x20($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X20);
    func_801D4188_5FF568(rdram, ctx);
        goto after_9;
    // 0x801DBDCC: lw          $a1, 0x20($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X20);
    after_9:
    // 0x801DBDD0: lh          $t3, 0x84($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X84);
    // 0x801DBDD4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DBDD8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DBDDC: beq         $t3, $at, L_801DBE18
    if (ctx->r11 == ctx->r1) {
        // 0x801DBDE0: lw          $t4, 0xB4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB4);
            goto L_801DBE18;
    }
    // 0x801DBDE0: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x801DBDE4: lw          $a1, 0x24($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X24);
    // 0x801DBDE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801DBDEC: jal         0x801D4188
    // 0x801DBDF0: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    func_801D4188_5FF568(rdram, ctx);
        goto after_10;
    // 0x801DBDF0: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_10:
    // 0x801DBDF4: lh          $t5, 0x84($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X84);
    // 0x801DBDF8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DBDFC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DBE00: beq         $t5, $at, L_801DBE18
    if (ctx->r13 == ctx->r1) {
        // 0x801DBE04: lw          $t6, 0xB4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB4);
            goto L_801DBE18;
    }
    // 0x801DBE04: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x801DBE08: lw          $a1, 0x28($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X28);
    // 0x801DBE0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801DBE10: jal         0x801D4188
    // 0x801DBE14: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    func_801D4188_5FF568(rdram, ctx);
        goto after_11;
    // 0x801DBE14: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_11:
L_801DBE18:
    // 0x801DBE18: lh          $t7, 0x84($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X84);
    // 0x801DBE1C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DBE20: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x801DBE24: bne         $t7, $at, L_801DBEC4
    if (ctx->r15 != ctx->r1) {
        // 0x801DBE28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DBEC4;
    }
    // 0x801DBE28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBE2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DBE30: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DBE34: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DBE38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DBE3C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DBE40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DBE44: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DBE48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DBE4C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801DBE50: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801DBE54: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x801DBE58: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DBE5C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DBE60: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801DBE64: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801DBE68: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801DBE6C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801DBE70: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801DBE74: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801DBE78: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801DBE7C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801DBE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBE84: jal         0x801E1E24
    // 0x801DBE88: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_12;
    // 0x801DBE88: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x801DBE8C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DBE90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DBE94: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DBE98: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DBE9C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801DBEA0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801DBEA4: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801DBEA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBEAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801DBEB0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801DBEB4: jal         0x801E25C4
    // 0x801DBEB8: nop

    func_801E25C4_60D9A4(rdram, ctx);
        goto after_13;
    // 0x801DBEB8: nop

    after_13:
    // 0x801DBEBC: b           L_801DBF10
    // 0x801DBEC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DBF10;
    // 0x801DBEC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DBEC4:
    // 0x801DBEC4: jal         0x8000ED00
    // 0x801DBEC8: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    func_8000ED00_F900(rdram, ctx);
        goto after_14;
    // 0x801DBEC8: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    after_14:
    // 0x801DBECC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DBED0: lwc1        $f10, -0x2554($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2554);
    // 0x801DBED4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801DBED8: nop

    // 0x801DBEDC: bc1fl       L_801DBEF8
    if (!c1cs) {
        // 0x801DBEE0: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_801DBEF8;
    }
    goto skip_0;
    // 0x801DBEE0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801DBEE4: jal         0x80034ED4
    // 0x801DBEE8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_15;
    // 0x801DBEE8: nop

    after_15:
    // 0x801DBEEC: b           L_801DBF10
    // 0x801DBEF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DBF10;
    // 0x801DBEF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DBEF4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801DBEF8:
    // 0x801DBEF8: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x801DBEFC: bgtz        $v0, L_801DBF0C
    if (SIGNED(ctx->r2) > 0) {
        // 0x801DBF00: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_801DBF0C;
    }
    // 0x801DBF00: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801DBF04: jal         0x80034ED4
    // 0x801DBF08: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_16;
    // 0x801DBF08: nop

    after_16:
L_801DBF0C:
    // 0x801DBF0C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DBF10:
    // 0x801DBF10: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801DBF14: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801DBF18: jr          $ra
    // 0x801DBF1C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x801DBF1C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_801E1F1C_60D2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1F1C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1F20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1F24: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1F28: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1F2C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1F30: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1F34: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1F38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1F3C: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E1F40: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1F44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1F48: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1F4C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1F50: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1F54: addiu       $t9, $zero, 0x4AB
    ctx->r25 = ADD32(0, 0X4AB);
    // 0x801E1F58: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1F5C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1F60: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1F64: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1F68: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1F6C: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E1F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1F74: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1F78: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1F7C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1F80: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1F84: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1F88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1F8C: jal         0x800358E8
    // 0x801E1F90: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1F90: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1F94: beq         $v0, $zero, L_801E2000
    if (ctx->r2 == 0) {
        // 0x801E1F98: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2000;
    }
    // 0x801E1F98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E1F9C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1FA0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1FA4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E1FA8: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1FAC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E1FB0: addiu       $t3, $t3, -0x4FB0
    ctx->r11 = ADD32(ctx->r11, -0X4FB0);
    // 0x801E1FB4: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x801E1FB8: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E1FBC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E1FC0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801E1FC4: addiu       $t6, $t6, -0x54E0
    ctx->r14 = ADD32(ctx->r14, -0X54E0);
    // 0x801E1FC8: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1FCC: lhu         $t0, 0x72($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X72);
    // 0x801E1FD0: sw          $t0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r8;
    // 0x801E1FD4: lhu         $t1, 0x76($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X76);
    // 0x801E1FD8: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x801E1FDC: lhu         $t2, 0x7A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7A);
    // 0x801E1FE0: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x801E1FE4: sw          $t4, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r12;
    // 0x801E1FE8: sw          $t5, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r13;
    // 0x801E1FEC: sw          $t6, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r14;
    // 0x801E1FF0: sw          $t2, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r10;
    // 0x801E1FF4: jal         0x801E18E4
    // 0x801E1FF8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1FF8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1FFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E2000:
    // 0x801E2000: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2004: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2008: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E200C: jr          $ra
    // 0x801E2010: nop

    TRACE_RETURN()
    return;
    // 0x801E2010: nop

;}
RECOMP_FUNC void func_801D3A18_5FEDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3A18: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D3A1C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D3A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3A24: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x801D3A28: bgtz        $t6, L_801D3A3C
    if (SIGNED(ctx->r14) > 0) {
        // 0x801D3A2C: nop
    
            goto L_801D3A3C;
    }
    // 0x801D3A2C: nop

    // 0x801D3A30: sw          $zero, 0x60($v1)
    MEM_W(0X60, ctx->r3) = 0;
    // 0x801D3A34: jr          $ra
    // 0x801D3A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D3A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D3A3C:
    // 0x801D3A3C: jr          $ra
    // 0x801D3A40: nop

    TRACE_RETURN()
    return;
    // 0x801D3A40: nop

;}
RECOMP_FUNC void func_801FFE4C_62B22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE4C: jr          $ra
    // 0x801FFE50: nop

    TRACE_RETURN()
    return;
    // 0x801FFE50: nop

;}
RECOMP_FUNC void func_801F2A04_61DDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F2A10: jal         0x801D619C
    // 0x801F2A14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D619C_60157C(rdram, ctx);
        goto after_0;
    // 0x801F2A14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F2A18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2A1C: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801F2A20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F2A24: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F2A28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2A2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F2A30: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2A34: jal         0x801F718C
    // 0x801F2A38: nop

    func_801F718C_62256C(rdram, ctx);
        goto after_1;
    // 0x801F2A38: nop

    after_1:
    // 0x801F2A3C: beq         $v0, $zero, L_801F2A88
    if (ctx->r2 == 0) {
        // 0x801F2A40: addiu       $a0, $zero, 0x281
        ctx->r4 = ADD32(0, 0X281);
            goto L_801F2A88;
    }
    // 0x801F2A40: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    // 0x801F2A44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F2A48: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F2A4C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F2A50: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F2A54: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2A58: jal         0x8000F3D8
    // 0x801F2A5C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_2;
    // 0x801F2A5C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_2:
    // 0x801F2A60: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F2A64: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F2A68: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F2A6C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F2A70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2A74: jal         0x801F74E4
    // 0x801F2A78: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_3;
    // 0x801F2A78: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_3:
    // 0x801F2A7C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2A80: jal         0x8003521C
    // 0x801F2A84: addiu       $a0, $a0, 0x2A98
    ctx->r4 = ADD32(ctx->r4, 0X2A98);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F2A84: addiu       $a0, $a0, 0x2A98
    ctx->r4 = ADD32(ctx->r4, 0X2A98);
    after_4:
L_801F2A88:
    // 0x801F2A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F2A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2A90: jr          $ra
    // 0x801F2A94: nop

    TRACE_RETURN()
    return;
    // 0x801F2A94: nop

;}
RECOMP_FUNC void func_801F4B4C_61FF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4B50: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F4B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4B58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F4B5C: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801F4B60: jal         0x801D2F40
    // 0x801F4B64: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F4B64: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801F4B68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4B6C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F4B70: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F4B74: nop

    // 0x801F4B78: bc1fl       L_801F4C00
    if (!c1cs) {
        // 0x801F4B7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4C00;
    }
    goto skip_0;
    // 0x801F4B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4B80: lw          $t6, 0x7C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X7C);
    // 0x801F4B84: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F4B88: bgez        $t7, L_801F4BFC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801F4B8C: sw          $t7, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r15;
            goto L_801F4BFC;
    }
    // 0x801F4B8C: sw          $t7, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r15;
    // 0x801F4B90: jal         0x801D3A18
    // 0x801F4B94: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801F4B94: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801F4B98: beq         $v0, $zero, L_801F4BC4
    if (ctx->r2 == 0) {
        // 0x801F4B9C: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_801F4BC4;
    }
    // 0x801F4B9C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F4BA0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F4BA4: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801F4BA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F4BAC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4BB0: addiu       $a0, $a0, -0x6DC
    ctx->r4 = ADD32(ctx->r4, -0X6DC);
    // 0x801F4BB4: jal         0x8003521C
    // 0x801F4BB8: sb          $t9, 0x2C4($t0)
    MEM_B(0X2C4, ctx->r8) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F4BB8: sb          $t9, 0x2C4($t0)
    MEM_B(0X2C4, ctx->r8) = ctx->r25;
    after_2:
    // 0x801F4BBC: b           L_801F4C00
    // 0x801F4BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F4C00;
    // 0x801F4BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4BC4:
    // 0x801F4BC4: lw          $t1, 0xE8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XE8);
    // 0x801F4BC8: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x801F4BCC: bne         $at, $zero, L_801F4BF4
    if (ctx->r1 != 0) {
        // 0x801F4BD0: nop
    
            goto L_801F4BF4;
    }
    // 0x801F4BD0: nop

    // 0x801F4BD4: sw          $zero, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = 0;
    // 0x801F4BD8: jal         0x801F703C
    // 0x801F4BDC: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    func_801F703C_62241C(rdram, ctx);
        goto after_3;
    // 0x801F4BDC: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    after_3:
    // 0x801F4BE0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4BE4: jal         0x8003521C
    // 0x801F4BE8: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F4BE8: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    after_4:
    // 0x801F4BEC: b           L_801F4C00
    // 0x801F4BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F4C00;
    // 0x801F4BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4BF4:
    // 0x801F4BF4: jal         0x801F0540
    // 0x801F4BF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_5;
    // 0x801F4BF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
L_801F4BFC:
    // 0x801F4BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4C00:
    // 0x801F4C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4C04: jr          $ra
    // 0x801F4C08: nop

    TRACE_RETURN()
    return;
    // 0x801F4C08: nop

;}
RECOMP_FUNC void func_801E9274_614654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9274: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E9278: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E927C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E9280: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E9284: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E9288: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E928C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E9290: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E9294: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E9298: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801E929C: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801E92A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E92A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E92A8: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x801E92AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E92B0: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801E92B4: jal         0x801D2F40
    // 0x801E92B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E92B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x801E92BC: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801E92C0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E92C4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801E92C8: bne         $v1, $at, L_801E9304
    if (ctx->r3 != ctx->r1) {
        // 0x801E92CC: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_801E9304;
    }
    // 0x801E92CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E92D0: jal         0x80038BC8
    // 0x801E92D4: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E92D4: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    after_1:
    // 0x801E92D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E92DC: jal         0x80037C9C
    // 0x801E92E0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801E92E0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_2:
    // 0x801E92E4: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801E92E8: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801E92EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E92F0: jal         0x80037C20
    // 0x801E92F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801E92F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801E92F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E92FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E9300: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E9304:
    // 0x801E9304: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x801E9308: beq         $t7, $zero, L_801E95BC
    if (ctx->r15 == 0) {
        // 0x801E930C: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801E95BC;
    }
    // 0x801E930C: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801E9310: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801E9314: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801E9318: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801E931C: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801E9320: lw          $t2, 0x1E4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1E4);
    // 0x801E9324: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801E9328: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E932C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E9330: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801E9334: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801E9338: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801E933C: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x801E9340: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801E9344: lwc1        $f16, -0x4F7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F7C);
    // 0x801E9348: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E934C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E9350: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E9354: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x801E9358: nop

    // 0x801E935C: bc1fl       L_801E94D4
    if (!c1cs) {
        // 0x801E9360: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E94D4;
    }
    goto skip_0;
    // 0x801E9360: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x801E9364: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E9368: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E936C: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801E9370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9374: lwc1        $f2, 0x8($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801E9378: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801E937C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9380: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x801E9384: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x801E9388: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E938C: bc1fl       L_801E939C
    if (!c1cs) {
        // 0x801E9390: c.le.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
            goto L_801E939C;
    }
    goto skip_1;
    // 0x801E9390: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    skip_1:
    // 0x801E9394: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E9398: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
L_801E939C:
    // 0x801E939C: nop

    // 0x801E93A0: bc1fl       L_801E93B0
    if (!c1cs) {
        // 0x801E93A4: lwc1        $f16, 0x10($t0)
        ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
            goto L_801E93B0;
    }
    goto skip_2;
    // 0x801E93A4: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    skip_2:
    // 0x801E93A8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E93AC: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
L_801E93B0:
    // 0x801E93B0: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801E93B4: nop

    // 0x801E93B8: bc1fl       L_801E93C8
    if (!c1cs) {
        // 0x801E93BC: lwc1        $f10, 0x90($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801E93C8;
    }
    goto skip_3;
    // 0x801E93BC: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
    skip_3:
    // 0x801E93C0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E93C4: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
L_801E93C8:
    // 0x801E93C8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801E93CC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x801E93D0: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801E93D4: jal         0x801D4BF4
    // 0x801E93D8: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_4;
    // 0x801E93D8: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    after_4:
    // 0x801E93DC: lw          $t5, 0x94($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X94);
    // 0x801E93E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E93E4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E93E8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801E93EC: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    // 0x801E93F0: bgez        $t5, L_801E9408
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801E93F4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801E9408;
    }
    // 0x801E93F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E93F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E93FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9400: nop

    // 0x801E9404: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801E9408:
    // 0x801E9408: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801E940C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E9410: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E9414: addiu       $a3, $t0, 0x10
    ctx->r7 = ADD32(ctx->r8, 0X10);
    // 0x801E9418: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801E941C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E9420: nop

    // 0x801E9424: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801E9428: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E942C: nop

    // 0x801E9430: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801E9434: beql        $t7, $zero, L_801E9484
    if (ctx->r15 == 0) {
        // 0x801E9438: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_801E9484;
    }
    goto skip_4;
    // 0x801E9438: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801E943C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E9440: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E9444: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801E9448: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E944C: nop

    // 0x801E9450: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801E9454: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E9458: nop

    // 0x801E945C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801E9460: bne         $t7, $zero, L_801E9478
    if (ctx->r15 != 0) {
        // 0x801E9464: nop
    
            goto L_801E9478;
    }
    // 0x801E9464: nop

    // 0x801E9468: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801E946C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E9470: b           L_801E9490
    // 0x801E9474: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801E9490;
    // 0x801E9474: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801E9478:
    // 0x801E9478: b           L_801E9490
    // 0x801E947C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801E9490;
    // 0x801E947C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801E9480: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_801E9484:
    // 0x801E9484: nop

    // 0x801E9488: bltz        $t7, L_801E9478
    if (SIGNED(ctx->r15) < 0) {
        // 0x801E948C: nop
    
            goto L_801E9478;
    }
    // 0x801E948C: nop

L_801E9490:
    // 0x801E9490: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801E9494: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801E9498: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801E949C: jal         0x8000E630
    // 0x801E94A0: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_5;
    // 0x801E94A0: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_5:
    // 0x801E94A4: jal         0x801EEEC0
    // 0x801E94A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_6;
    // 0x801E94A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E94AC: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E94B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801E94B4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E94B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E94BC: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801E94C0: add.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f8.d + ctx->f6.d;
    // 0x801E94C4: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x801E94C8: b           L_801E9570
    // 0x801E94CC: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
        goto L_801E9570;
    // 0x801E94CC: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x801E94D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E94D4:
    // 0x801E94D4: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801E94D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E94DC: lwc1        $f2, 0x8($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801E94E0: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801E94E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E94E8: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x801E94EC: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x801E94F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E94F4: bc1fl       L_801E9504
    if (!c1cs) {
        // 0x801E94F8: c.le.s      $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
            goto L_801E9504;
    }
    goto skip_5;
    // 0x801E94F8: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    skip_5:
    // 0x801E94FC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E9500: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
L_801E9504:
    // 0x801E9504: nop

    // 0x801E9508: bc1fl       L_801E9518
    if (!c1cs) {
        // 0x801E950C: lwc1        $f6, 0x10($t0)
        ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
            goto L_801E9518;
    }
    goto skip_6;
    // 0x801E950C: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    skip_6:
    // 0x801E9510: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E9514: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
L_801E9518:
    // 0x801E9518: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x801E951C: nop

    // 0x801E9520: bc1fl       L_801E9530
    if (!c1cs) {
        // 0x801E9524: lwc1        $f16, 0x90($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801E9530;
    }
    goto skip_7;
    // 0x801E9524: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
    skip_7:
    // 0x801E9528: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801E952C: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
L_801E9530:
    // 0x801E9530: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801E9534: addiu       $a2, $t0, 0x8
    ctx->r6 = ADD32(ctx->r8, 0X8);
    // 0x801E9538: add.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801E953C: addiu       $a3, $t0, 0x10
    ctx->r7 = ADD32(ctx->r8, 0X10);
    // 0x801E9540: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801E9544: jal         0x8000E630
    // 0x801E9548: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_7;
    // 0x801E9548: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_7:
    // 0x801E954C: jal         0x801EEEC0
    // 0x801E9550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_8;
    // 0x801E9550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E9554: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9558: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E955C: ldc1        $f8, -0x1EE8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EE8);
    // 0x801E9560: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E9564: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x801E9568: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801E956C: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
L_801E9570:
    // 0x801E9570: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9574: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E9578: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E957C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E9580: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801E9584: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801E9588: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x801E958C: nop

    // 0x801E9590: bc1fl       L_801E95AC
    if (!c1cs) {
        // 0x801E9594: trunc.w.s   $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801E95AC;
    }
    goto skip_8;
    // 0x801E9594: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_8:
    // 0x801E9598: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E959C: nop

    // 0x801E95A0: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801E95A4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E95A8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
L_801E95AC:
    // 0x801E95AC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x801E95B0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801E95B4: b           L_801E9610
    // 0x801E95B8: sw          $t1, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->r9;
        goto L_801E9610;
    // 0x801E95B8: sw          $t1, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->r9;
L_801E95BC:
    // 0x801E95BC: jal         0x8000DD58
    // 0x801E95C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801E95C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x801E95C4: addiu       $t9, $v0, -0x2
    ctx->r25 = ADD32(ctx->r2, -0X2);
    // 0x801E95C8: bgtz        $t9, L_801E95E0
    if (SIGNED(ctx->r25) > 0) {
        // 0x801E95CC: addiu       $t3, $zero, 0x12C
        ctx->r11 = ADD32(0, 0X12C);
            goto L_801E95E0;
    }
    // 0x801E95CC: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x801E95D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801E95D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E95D8: b           L_801E95F0
    // 0x801E95DC: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
        goto L_801E95F0;
    // 0x801E95DC: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
L_801E95E0:
    // 0x801E95E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E95E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E95E8: nop

    // 0x801E95EC: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_801E95F0:
    // 0x801E95F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E95F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E95F8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E95FC: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x801E9600: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801E9604: addiu       $a0, $a0, -0x69DC
    ctx->r4 = ADD32(ctx->r4, -0X69DC);
    // 0x801E9608: jal         0x8003521C
    // 0x801E960C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801E960C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_10:
L_801E9610:
    // 0x801E9610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E9614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E9618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E961C: jr          $ra
    // 0x801E9620: nop

    TRACE_RETURN()
    return;
    // 0x801E9620: nop

;}
RECOMP_FUNC void func_801E1238_60C618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1238: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E123C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1240: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1244: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E1248: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E124C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E1250: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E1254: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1258: addiu       $a2, $a2, -0x430
    ctx->r6 = ADD32(ctx->r6, -0X430);
    // 0x801E125C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E1260: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1264: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1268: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E126C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1270: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1274: addiu       $t9, $zero, 0x4B2
    ctx->r25 = ADD32(0, 0X4B2);
    // 0x801E1278: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E127C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1280: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1284: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1288: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E128C: addiu       $a1, $a1, 0x13F0
    ctx->r5 = ADD32(ctx->r5, 0X13F0);
    // 0x801E1290: addiu       $a3, $a3, -0x5430
    ctx->r7 = ADD32(ctx->r7, -0X5430);
    // 0x801E1294: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1298: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E129C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E12A0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E12A4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x801E12A8: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E12AC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E12B0: jal         0x800358E8
    // 0x801E12B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E12B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E12B8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E12BC: beq         $v0, $zero, L_801E1300
    if (ctx->r2 == 0) {
        // 0x801E12C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E1300;
    }
    // 0x801E12C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E12C4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E12C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E12CC: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E12D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E12D4: div.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x801E12D8: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E12DC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E12E0: addiu       $t0, $zero, 0x2D
    ctx->r8 = ADD32(0, 0X2D);
    // 0x801E12E4: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E12E8: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E12EC: sw          $t0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r8;
    // 0x801E12F0: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x801E12F4: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    // 0x801E12F8: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E12FC: swc1        $f4, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f4.u32l;
L_801E1300:
    // 0x801E1300: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1304: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E1308: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E130C: jr          $ra
    // 0x801E1310: nop

    TRACE_RETURN()
    return;
    // 0x801E1310: nop

;}
RECOMP_FUNC void func_801D742C_60280C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D742C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D7430: jr          $ra
    // 0x801D7434: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D7434: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F5F0C_6212EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5F0C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F5F10: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F5F14: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F5F18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F5F1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F5F20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F5F24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F5F28: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F5F2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5F30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F5F34: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801F5F38: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x801F5F3C: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x801F5F40: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x801F5F44: jal         0x801D3018
    // 0x801F5F48: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F5F48: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F5F4C: jal         0x801F76D0
    // 0x801F5F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F5F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F5F54: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F5F58: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F5F5C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801F5F60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F5F64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F5F68: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F5F6C: sub.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d - ctx->f0.d;
    // 0x801F5F70: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801F5F74: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F5F78: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F5F7C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F5F80: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x801F5F84: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801F5F88: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801F5F8C: lw          $t9, 0x1E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1E4);
    // 0x801F5F90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801F5F94: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801F5F98: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801F5F9C: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x801F5FA0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801F5FA4: lhu         $v1, 0x307C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307C);
    // 0x801F5FA8: andi        $t1, $v1, 0x10
    ctx->r9 = ctx->r3 & 0X10;
    // 0x801F5FAC: beql        $t1, $zero, L_801F5FF0
    if (ctx->r9 == 0) {
        // 0x801F5FB0: andi        $t6, $v1, 0xC030
        ctx->r14 = ctx->r3 & 0XC030;
            goto L_801F5FF0;
    }
    goto skip_0;
    // 0x801F5FB0: andi        $t6, $v1, 0xC030
    ctx->r14 = ctx->r3 & 0XC030;
    skip_0:
    // 0x801F5FB4: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801F5FB8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F5FBC: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801F5FC0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801F5FC4: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801F5FC8: lw          $t4, 0x1E4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1E4);
    // 0x801F5FCC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F5FD0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F5FD4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801F5FD8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801F5FDC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801F5FE0: addu        $v0, $t2, $t5
    ctx->r2 = ADD32(ctx->r10, ctx->r13);
    // 0x801F5FE4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801F5FE8: lhu         $v1, 0x307C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307C);
    // 0x801F5FEC: andi        $t6, $v1, 0xC030
    ctx->r14 = ctx->r3 & 0XC030;
L_801F5FF0:
    // 0x801F5FF0: beql        $t6, $zero, L_801F60DC
    if (ctx->r14 == 0) {
        // 0x801F5FF4: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_801F60DC;
    }
    goto skip_1;
    // 0x801F5FF4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_1:
    // 0x801F5FF8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F5FFC: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801F6000: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x801F6004: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x801F6008: nop

    // 0x801F600C: bc1fl       L_801F6078
    if (!c1cs) {
        // 0x801F6010: lwc1        $f4, 0x3088($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
            goto L_801F6078;
    }
    goto skip_2;
    // 0x801F6010: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
    skip_2:
    // 0x801F6014: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
    // 0x801F6018: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801F601C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F6020: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801F6024: nop

    // 0x801F6028: bc1fl       L_801F6058
    if (!c1cs) {
        // 0x801F602C: lwc1        $f6, 0xA0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801F6058;
    }
    goto skip_3;
    // 0x801F602C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    skip_3:
    // 0x801F6030: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F6034: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801F6038: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F603C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F6040: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F6044: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801F6048: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F604C: b           L_801F60D8
    // 0x801F6050: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
        goto L_801F60D8;
    // 0x801F6050: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801F6054: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
L_801F6058:
    // 0x801F6058: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801F605C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F6060: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F6064: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801F6068: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F606C: b           L_801F60D8
    // 0x801F6070: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
        goto L_801F60D8;
    // 0x801F6070: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x801F6074: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
L_801F6078:
    // 0x801F6078: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F607C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F6080: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F6084: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801F6088: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801F608C: nop

    // 0x801F6090: bc1fl       L_801F60C0
    if (!c1cs) {
        // 0x801F6094: lwc1        $f8, 0xA0($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801F60C0;
    }
    goto skip_4;
    // 0x801F6094: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    skip_4:
    // 0x801F6098: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F609C: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801F60A0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F60A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F60A8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801F60AC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801F60B0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F60B4: b           L_801F60D8
    // 0x801F60B8: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
        goto L_801F60D8;
    // 0x801F60B8: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
    // 0x801F60BC: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
L_801F60C0:
    // 0x801F60C0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F60C4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F60C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F60CC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801F60D0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F60D4: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
L_801F60D8:
    // 0x801F60D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_801F60DC:
    // 0x801F60DC: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F60E0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F60E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F60E8: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801F60EC: nop

    // 0x801F60F0: bc1fl       L_801F6104
    if (!c1cs) {
        // 0x801F60F4: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_801F6104;
    }
    goto skip_5;
    // 0x801F60F4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_5:
    // 0x801F60F8: swc1        $f12, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f12.u32l;
    // 0x801F60FC: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F6100: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_801F6104:
    // 0x801F6104: nop

    // 0x801F6108: bc1fl       L_801F6120
    if (!c1cs) {
        // 0x801F610C: trunc.w.s   $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801F6120;
    }
    goto skip_6;
    // 0x801F610C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_6:
    // 0x801F6110: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    // 0x801F6114: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F6118: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801F611C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
L_801F6120:
    // 0x801F6120: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x801F6124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F6128: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801F612C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801F6130: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801F6134: jal         0x801D4AEC
    // 0x801F6138: sw          $t9, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->r25;
    func_801D4AEC_5FFECC(rdram, ctx);
        goto after_2;
    // 0x801F6138: sw          $t9, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->r25;
    after_2:
    // 0x801F613C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801F6140: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F6144: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801F6148: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801F614C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801F6150: nop

    // 0x801F6154: bc1f        L_801F6168
    if (!c1cs) {
        // 0x801F6158: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801F6168;
    }
    // 0x801F6158: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F615C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F6160: nop

    // 0x801F6164: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_801F6168:
    // 0x801F6168: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x801F616C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F6170: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801F6174: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801F6178: nop

    // 0x801F617C: bc1f        L_801F6190
    if (!c1cs) {
        // 0x801F6180: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801F6190;
    }
    // 0x801F6180: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F6184: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6188: nop

    // 0x801F618C: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
L_801F6190:
    // 0x801F6190: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801F6194: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F6198: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F619C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801F61A0: nop

    // 0x801F61A4: bc1f        L_801F61BC
    if (!c1cs) {
        // 0x801F61A8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801F61BC;
    }
    // 0x801F61A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F61AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F61B0: nop

    // 0x801F61B4: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
    // 0x801F61B8: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
L_801F61BC:
    // 0x801F61BC: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801F61C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F61C4: nop

    // 0x801F61C8: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x801F61CC: nop

    // 0x801F61D0: bc1f        L_801F61E4
    if (!c1cs) {
        // 0x801F61D4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801F61E4;
    }
    // 0x801F61D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F61D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F61DC: nop

    // 0x801F61E0: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
L_801F61E4:
    // 0x801F61E4: jal         0x801D4BF4
    // 0x801F61E8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_3;
    // 0x801F61E8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x801F61EC: lw          $t0, 0x94($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X94);
    // 0x801F61F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F61F4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801F61F8: bgez        $t0, L_801F620C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801F61FC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801F620C;
    }
    // 0x801F61FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F6200: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F6204: nop

    // 0x801F6208: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801F620C:
    // 0x801F620C: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801F6210: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F6214: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F6218: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801F621C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F6220: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801F6224: nop

    // 0x801F6228: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F622C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801F6230: nop

    // 0x801F6234: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801F6238: beql        $t3, $zero, L_801F6288
    if (ctx->r11 == 0) {
        // 0x801F623C: mfc1        $t3, $f18
        ctx->r11 = (int32_t)ctx->f18.u32l;
            goto L_801F6288;
    }
    goto skip_7;
    // 0x801F623C: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    skip_7:
    // 0x801F6240: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F6244: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F6248: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801F624C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801F6250: nop

    // 0x801F6254: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801F6258: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801F625C: nop

    // 0x801F6260: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801F6264: bne         $t3, $zero, L_801F627C
    if (ctx->r11 != 0) {
        // 0x801F6268: nop
    
            goto L_801F627C;
    }
    // 0x801F6268: nop

    // 0x801F626C: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x801F6270: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F6274: b           L_801F6294
    // 0x801F6278: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801F6294;
    // 0x801F6278: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801F627C:
    // 0x801F627C: b           L_801F6294
    // 0x801F6280: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801F6294;
    // 0x801F6280: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801F6284: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
L_801F6288:
    // 0x801F6288: nop

    // 0x801F628C: bltz        $t3, L_801F627C
    if (SIGNED(ctx->r11) < 0) {
        // 0x801F6290: nop
    
            goto L_801F627C;
    }
    // 0x801F6290: nop

L_801F6294:
    // 0x801F6294: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F6298: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801F629C: sw          $t3, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r11;
    // 0x801F62A0: bgez        $t3, L_801F62B8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801F62A4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801F62B8;
    }
    // 0x801F62A4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F62A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F62AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F62B0: nop

    // 0x801F62B4: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801F62B8:
    // 0x801F62B8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F62BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801F62C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F62C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F62C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F62CC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801F62D0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801F62D4: nop

    // 0x801F62D8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F62DC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801F62E0: nop

    // 0x801F62E4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801F62E8: beql        $t5, $zero, L_801F6338
    if (ctx->r13 == 0) {
        // 0x801F62EC: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_801F6338;
    }
    goto skip_8;
    // 0x801F62EC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_8:
    // 0x801F62F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F62F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801F62F8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801F62FC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801F6300: nop

    // 0x801F6304: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801F6308: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801F630C: nop

    // 0x801F6310: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801F6314: bne         $t5, $zero, L_801F632C
    if (ctx->r13 != 0) {
        // 0x801F6318: nop
    
            goto L_801F632C;
    }
    // 0x801F6318: nop

    // 0x801F631C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801F6320: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F6324: b           L_801F6344
    // 0x801F6328: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801F6344;
    // 0x801F6328: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801F632C:
    // 0x801F632C: b           L_801F6344
    // 0x801F6330: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801F6344;
    // 0x801F6330: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801F6334: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_801F6338:
    // 0x801F6338: nop

    // 0x801F633C: bltz        $t5, L_801F632C
    if (SIGNED(ctx->r13) < 0) {
        // 0x801F6340: nop
    
            goto L_801F632C;
    }
    // 0x801F6340: nop

L_801F6344:
    // 0x801F6344: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801F6348: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801F634C: sw          $t5, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r13;
    // 0x801F6350: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x801F6354: bgtz        $t8, L_801F6380
    if (SIGNED(ctx->r24) > 0) {
        // 0x801F6358: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801F6380;
    }
    // 0x801F6358: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801F635C: jal         0x80037C9C
    // 0x801F6360: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x801F6360: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_4:
    // 0x801F6364: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801F6368: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801F636C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F6370: jal         0x80037C20
    // 0x801F6374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x801F6374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801F6378: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801F637C: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
L_801F6380:
    // 0x801F6380: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801F6384: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801F6388: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801F638C: jal         0x8000E630
    // 0x801F6390: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_6;
    // 0x801F6390: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    after_6:
    // 0x801F6394: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F6398: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F639C: jal         0x8000E9F4
    // 0x801F63A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_7;
    // 0x801F63A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x801F63A4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801F63A8: jal         0x801F732C
    // 0x801F63AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_8;
    // 0x801F63AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801F63B0: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x801F63B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F63B8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x801F63BC: bgtz        $t1, L_801F643C
    if (SIGNED(ctx->r9) > 0) {
        // 0x801F63C0: sw          $t1, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r9;
            goto L_801F643C;
    }
    // 0x801F63C0: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801F63C4: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F63C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F63CC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F63D0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x801F63D4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F63D8: nop

    // 0x801F63DC: bc1fl       L_801F63F8
    if (!c1cs) {
        // 0x801F63E0: sw          $zero, 0x34($t4)
        MEM_W(0X34, ctx->r12) = 0;
            goto L_801F63F8;
    }
    goto skip_9;
    // 0x801F63E0: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
    skip_9:
    // 0x801F63E4: jal         0x8003521C
    // 0x801F63E8: addiu       $a0, $a0, 0x6450
    ctx->r4 = ADD32(ctx->r4, 0X6450);
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801F63E8: addiu       $a0, $a0, 0x6450
    ctx->r4 = ADD32(ctx->r4, 0X6450);
    after_9:
    // 0x801F63EC: b           L_801F6440
    // 0x801F63F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F6440;
    // 0x801F63F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F63F4: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
L_801F63F8:
    // 0x801F63F8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x801F63FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F6400: sw          $zero, 0x70($t2)
    MEM_W(0X70, ctx->r10) = 0;
    // 0x801F6404: lhu         $t5, 0x16($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X16);
    // 0x801F6408: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801F640C: bgez        $t5, L_801F6420
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801F6410: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801F6420;
    }
    // 0x801F6410: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F6414: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F6418: nop

    // 0x801F641C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801F6420:
    // 0x801F6420: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801F6424: lhu         $t6, 0x16($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X16);
    // 0x801F6428: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F642C: addiu       $a0, $a0, 0x65B8
    ctx->r4 = ADD32(ctx->r4, 0X65B8);
    // 0x801F6430: addiu       $t8, $t6, 0x20
    ctx->r24 = ADD32(ctx->r14, 0X20);
    // 0x801F6434: jal         0x8003521C
    // 0x801F6438: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801F6438: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    after_10:
L_801F643C:
    // 0x801F643C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6440:
    // 0x801F6440: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F6444: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F6448: jr          $ra
    // 0x801F644C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801F644C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801E0A7C_60BE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0A7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E0A80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E0A84: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801E0A88: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801E0A8C: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x801E0A90: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x801E0A94: bne         $at, $zero, L_801E0AA4
    if (ctx->r1 != 0) {
        // 0x801E0A98: sh          $t7, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r15;
            goto L_801E0AA4;
    }
    // 0x801E0A98: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801E0A9C: addiu       $t8, $v0, -0x400
    ctx->r24 = ADD32(ctx->r2, -0X400);
    // 0x801E0AA0: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
L_801E0AA4:
    // 0x801E0AA4: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x801E0AA8: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x801E0AAC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E0AB0: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0AB4: addiu       $a2, $a2, -0x5E7C
    ctx->r6 = ADD32(ctx->r6, -0X5E7C);
    // 0x801E0AB8: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E0ABC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801E0AC0: mflo        $t0
    ctx->r8 = lo;
    // 0x801E0AC4: addu        $v1, $a2, $t0
    ctx->r3 = ADD32(ctx->r6, ctx->r8);
    // 0x801E0AC8: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E0ACC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E0AD0: nop

    // 0x801E0AD4: bc1fl       L_801E0BBC
    if (!c1cs) {
        // 0x801E0AD8: swc1        $f2, 0x1C($a1)
        MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
            goto L_801E0BBC;
    }
    goto skip_0;
    // 0x801E0AD8: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
    skip_0:
    // 0x801E0ADC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E0AE0: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801E0AE4: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801E0AE8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801E0AEC: swc1        $f6, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f6.u32l;
    // 0x801E0AF0: lw          $t1, 0x90($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X90);
    // 0x801E0AF4: multu       $t1, $a3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0AF8: mflo        $t2
    ctx->r10 = lo;
    // 0x801E0AFC: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x801E0B00: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x801E0B04: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E0B08: swc1        $f16, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f16.u32l;
    // 0x801E0B0C: lw          $t4, 0x90($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X90);
    // 0x801E0B10: multu       $t4, $a3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0B14: mflo        $t5
    ctx->r13 = lo;
    // 0x801E0B18: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x801E0B1C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801E0B20: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E0B24: beq         $v0, $zero, L_801E0C60
    if (ctx->r2 == 0) {
        // 0x801E0B28: swc1        $f6, 0x24($a1)
        MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
            goto L_801E0C60;
    }
    // 0x801E0B28: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x801E0B2C: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x801E0B30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0B34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E0B38: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0B3C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E0B40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E0B44: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E0B48: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E0B4C: mflo        $t8
    ctx->r24 = lo;
    // 0x801E0B50: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x801E0B54: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801E0B58: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E0B5C: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801E0B60: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E0B64: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x801E0B68: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x801E0B6C: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E0B70: multu       $t0, $a3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0B74: mflo        $t1
    ctx->r9 = lo;
    // 0x801E0B78: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x801E0B7C: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x801E0B80: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E0B84: div.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801E0B88: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E0B8C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x801E0B90: lw          $t3, 0x90($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X90);
    // 0x801E0B94: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0B98: mflo        $t4
    ctx->r12 = lo;
    // 0x801E0B9C: addu        $t5, $a2, $t4
    ctx->r13 = ADD32(ctx->r6, ctx->r12);
    // 0x801E0BA0: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x801E0BA4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E0BA8: div.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801E0BAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E0BB0: b           L_801E0C60
    // 0x801E0BB4: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
        goto L_801E0C60;
    // 0x801E0BB4: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x801E0BB8: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
L_801E0BBC:
    // 0x801E0BBC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801E0BC0: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0BC4: mflo        $t7
    ctx->r15 = lo;
    // 0x801E0BC8: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x801E0BCC: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x801E0BD0: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x801E0BD4: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x801E0BD8: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0BDC: mflo        $t0
    ctx->r8 = lo;
    // 0x801E0BE0: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x801E0BE4: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x801E0BE8: beq         $v0, $zero, L_801E0C60
    if (ctx->r2 == 0) {
        // 0x801E0BEC: swc1        $f10, 0x24($a1)
        MEM_W(0X24, ctx->r5) = ctx->f10.u32l;
            goto L_801E0C60;
    }
    // 0x801E0BEC: swc1        $f10, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f10.u32l;
    // 0x801E0BF0: lw          $t2, 0x90($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X90);
    // 0x801E0BF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0BF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E0BFC: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0C00: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E0C04: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E0C08: mflo        $t3
    ctx->r11 = lo;
    // 0x801E0C0C: addu        $t4, $a2, $t3
    ctx->r12 = ADD32(ctx->r6, ctx->r11);
    // 0x801E0C10: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801E0C14: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801E0C18: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801E0C1C: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x801E0C20: lw          $t5, 0x90($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X90);
    // 0x801E0C24: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0C28: mflo        $t6
    ctx->r14 = lo;
    // 0x801E0C2C: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x801E0C30: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801E0C34: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E0C38: div.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801E0C3C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x801E0C40: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x801E0C44: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0C48: mflo        $t9
    ctx->r25 = lo;
    // 0x801E0C4C: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x801E0C50: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x801E0C54: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801E0C58: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801E0C5C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
L_801E0C60:
    // 0x801E0C60: lw          $t1, 0x90($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X90);
    // 0x801E0C64: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E0C68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E0C6C: multu       $t1, $a3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801E0C70: mflo        $t2
    ctx->r10 = lo;
    // 0x801E0C74: addu        $v1, $a2, $t2
    ctx->r3 = ADD32(ctx->r6, ctx->r10);
    // 0x801E0C78: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E0C7C: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x801E0C80: nop

    // 0x801E0C84: bc1fl       L_801E0CC8
    if (!c1cs) {
        // 0x801E0C88: lhu         $t3, 0x16($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X16);
            goto L_801E0CC8;
    }
    goto skip_1;
    // 0x801E0C88: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
    skip_1:
    // 0x801E0C8C: lwc1        $f10, 0x94($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E0C90: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E0C94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E0C98: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E0C9C: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    // 0x801E0CA0: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E0CA4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801E0CA8: nop

    // 0x801E0CAC: bc1fl       L_801E0CC8
    if (!c1cs) {
        // 0x801E0CB0: lhu         $t3, 0x16($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X16);
            goto L_801E0CC8;
    }
    goto skip_2;
    // 0x801E0CB0: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
    skip_2:
    // 0x801E0CB4: jal         0x80034ED4
    // 0x801E0CB8: swc1        $f0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f0.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E0CB8: swc1        $f0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x801E0CBC: b           L_801E0D74
    // 0x801E0CC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E0D74;
    // 0x801E0CC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E0CC4: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
L_801E0CC8:
    // 0x801E0CC8: lhu         $t4, 0x18($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X18);
    // 0x801E0CCC: lhu         $t5, 0x1A($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X1A);
    // 0x801E0CD0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801E0CD4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E0CD8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E0CDC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E0CE0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E0CE4: lwc1        $f8, 0x94($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801E0CE8: lhu         $a1, 0x10($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X10);
    // 0x801E0CEC: lhu         $a2, 0x12($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X12);
    // 0x801E0CF0: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801E0CF4: lhu         $a3, 0x14($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X14);
    // 0x801E0CF8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E0CFC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E0D00: nop

    // 0x801E0D04: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801E0D08: beql        $t7, $zero, L_801E0D58
    if (ctx->r15 == 0) {
        // 0x801E0D0C: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_801E0D58;
    }
    goto skip_3;
    // 0x801E0D0C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x801E0D10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E0D14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E0D18: sub.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x801E0D1C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E0D20: nop

    // 0x801E0D24: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801E0D28: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E0D2C: nop

    // 0x801E0D30: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801E0D34: bne         $t7, $zero, L_801E0D4C
    if (ctx->r15 != 0) {
        // 0x801E0D38: nop
    
            goto L_801E0D4C;
    }
    // 0x801E0D38: nop

    // 0x801E0D3C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801E0D40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E0D44: b           L_801E0D64
    // 0x801E0D48: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801E0D64;
    // 0x801E0D48: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801E0D4C:
    // 0x801E0D4C: b           L_801E0D64
    // 0x801E0D50: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801E0D64;
    // 0x801E0D50: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801E0D54: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_801E0D58:
    // 0x801E0D58: nop

    // 0x801E0D5C: bltz        $t7, L_801E0D4C
    if (SIGNED(ctx->r15) < 0) {
        // 0x801E0D60: nop
    
            goto L_801E0D4C;
    }
    // 0x801E0D60: nop

L_801E0D64:
    // 0x801E0D64: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801E0D68: jal         0x801E0D80
    // 0x801E0D6C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_801E0D80_60C160(rdram, ctx);
        goto after_1;
    // 0x801E0D6C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_1:
    // 0x801E0D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E0D74:
    // 0x801E0D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E0D78: jr          $ra
    // 0x801E0D7C: nop

    TRACE_RETURN()
    return;
    // 0x801E0D7C: nop

;}
RECOMP_FUNC void func_801DC8B4_607C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC8B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DC8B8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DC8BC: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801DC8C0: bne         $a0, $at, L_801DC8D4
    if (ctx->r4 != ctx->r1) {
        // 0x801DC8C4: lw          $v0, -0x1130($v0)
        ctx->r2 = MEM_W(ctx->r2, -0X1130);
            goto L_801DC8D4;
    }
    // 0x801DC8C4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DC8C8: lw          $v1, 0x28($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X28);
    // 0x801DC8CC: b           L_801DC8DC
    // 0x801DC8D0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
        goto L_801DC8DC;
    // 0x801DC8D0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_801DC8D4:
    // 0x801DC8D4: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x801DC8D8: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
L_801DC8DC:
    // 0x801DC8DC: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x801DC8E0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DC8E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DC8E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DC8EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DC8F0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DC8F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801DC8F8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801DC8FC: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DC900: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DC904: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801DC908: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DC90C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801DC910: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801DC914: nop

    // 0x801DC918: subu        $t1, $a2, $a1
    ctx->r9 = SUB32(ctx->r6, ctx->r5);
    // 0x801DC91C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x801DC920: sll         $t0, $t1, 16
    ctx->r8 = S32(ctx->r9 << 16);
    // 0x801DC924: sra         $t9, $t2, 16
    ctx->r25 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801DC928: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x801DC92C: slti        $at, $t9, -0x1FF
    ctx->r1 = SIGNED(ctx->r25) < -0X1FF ? 1 : 0;
    // 0x801DC930: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x801DC934: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801DC938: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801DC93C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801DC940: beql        $at, $zero, L_801DC958
    if (ctx->r1 == 0) {
        // 0x801DC944: mtc1        $t0, $f10
        ctx->f10.u32l = ctx->r8;
            goto L_801DC958;
    }
    goto skip_0;
    // 0x801DC944: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    skip_0:
    // 0x801DC948: addiu       $t0, $t9, 0x400
    ctx->r8 = ADD32(ctx->r25, 0X400);
    // 0x801DC94C: sll         $t3, $t0, 16
    ctx->r11 = S32(ctx->r8 << 16);
    // 0x801DC950: sra         $t0, $t3, 16
    ctx->r8 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801DC954: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
L_801DC958:
    // 0x801DC958: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DC95C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DC960: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DC964: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801DC968: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801DC96C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801DC970: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x801DC974: nop

    // 0x801DC978: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x801DC97C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801DC980: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x801DC984: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801DC988: nop

    // 0x801DC98C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DC990: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801DC994: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801DC998: bc1f        L_801DC9A4
    if (!c1cs) {
        // 0x801DC99C: nop
    
            goto L_801DC9A4;
    }
    // 0x801DC99C: nop

    // 0x801DC9A0: add.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f14.fl;
L_801DC9A4:
    // 0x801DC9A4: lwc1        $f18, -0x2548($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2548);
    // 0x801DC9A8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DC9AC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801DC9B0: nop

    // 0x801DC9B4: bc1fl       L_801DC9C4
    if (!c1cs) {
        // 0x801DC9B8: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_801DC9C4;
    }
    goto skip_1;
    // 0x801DC9B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x801DC9BC: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801DC9C0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_801DC9C4:
    // 0x801DC9C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801DC9C8: nop

    // 0x801DC9CC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801DC9D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801DC9D4: nop

    // 0x801DC9D8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801DC9DC: beql        $t3, $zero, L_801DCA2C
    if (ctx->r11 == 0) {
        // 0x801DC9E0: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_801DCA2C;
    }
    goto skip_2;
    // 0x801DC9E0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x801DC9E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DC9E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801DC9EC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DC9F0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801DC9F4: nop

    // 0x801DC9F8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801DC9FC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801DCA00: nop

    // 0x801DCA04: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801DCA08: bne         $t3, $zero, L_801DCA20
    if (ctx->r11 != 0) {
        // 0x801DCA0C: nop
    
            goto L_801DCA20;
    }
    // 0x801DCA0C: nop

    // 0x801DCA10: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x801DCA14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DCA18: b           L_801DCA38
    // 0x801DCA1C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801DCA38;
    // 0x801DCA1C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801DCA20:
    // 0x801DCA20: b           L_801DCA38
    // 0x801DCA24: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801DCA38;
    // 0x801DCA24: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801DCA28: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_801DCA2C:
    // 0x801DCA2C: nop

    // 0x801DCA30: bltz        $t3, L_801DCA20
    if (SIGNED(ctx->r11) < 0) {
        // 0x801DCA34: nop
    
            goto L_801DCA20;
    }
    // 0x801DCA34: nop

L_801DCA38:
    // 0x801DCA38: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801DCA3C: sh          $t3, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r11;
    // 0x801DCA40: bgez        $a3, L_801DCA50
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801DCA44: sra         $a0, $a3, 1
        ctx->r4 = S32(SIGNED(ctx->r7) >> 1);
            goto L_801DCA50;
    }
    // 0x801DCA44: sra         $a0, $a3, 1
    ctx->r4 = S32(SIGNED(ctx->r7) >> 1);
    // 0x801DCA48: addiu       $at, $a3, 0x1
    ctx->r1 = ADD32(ctx->r7, 0X1);
    // 0x801DCA4C: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_801DCA50:
    // 0x801DCA50: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801DCA54: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x801DCA58: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DCA5C: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x801DCA60: slti        $at, $t5, -0x1FF
    ctx->r1 = SIGNED(ctx->r13) < -0X1FF ? 1 : 0;
    // 0x801DCA64: beq         $at, $zero, L_801DCA78
    if (ctx->r1 == 0) {
        // 0x801DCA68: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_801DCA78;
    }
    // 0x801DCA68: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x801DCA6C: addiu       $v0, $t5, 0x400
    ctx->r2 = ADD32(ctx->r13, 0X400);
    // 0x801DCA70: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801DCA74: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_801DCA78:
    // 0x801DCA78: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DCA7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DCA80: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DCA84: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DCA88: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801DCA8C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801DCA90: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801DCA94: nop

    // 0x801DCA98: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x801DCA9C: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801DCAA0: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x801DCAA4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x801DCAA8: nop

    // 0x801DCAAC: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DCAB0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801DCAB4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801DCAB8: bc1fl       L_801DCAC8
    if (!c1cs) {
        // 0x801DCABC: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_801DCAC8;
    }
    goto skip_3;
    // 0x801DCABC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_3:
    // 0x801DCAC0: add.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x801DCAC4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_801DCAC8:
    // 0x801DCAC8: nop

    // 0x801DCACC: bc1fl       L_801DCADC
    if (!c1cs) {
        // 0x801DCAD0: cfc1        $t5, $FpcCsr
        ctx->r13 = get_cop1_cs();
            goto L_801DCADC;
    }
    goto skip_4;
    // 0x801DCAD0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    skip_4:
    // 0x801DCAD4: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801DCAD8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_801DCADC:
    // 0x801DCADC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801DCAE0: nop

    // 0x801DCAE4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801DCAE8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801DCAEC: nop

    // 0x801DCAF0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801DCAF4: beql        $t6, $zero, L_801DCB44
    if (ctx->r14 == 0) {
        // 0x801DCAF8: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_801DCB44;
    }
    goto skip_5;
    // 0x801DCAF8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_5:
    // 0x801DCAFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DCB00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DCB04: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801DCB08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801DCB0C: nop

    // 0x801DCB10: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801DCB14: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801DCB18: nop

    // 0x801DCB1C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801DCB20: bne         $t6, $zero, L_801DCB38
    if (ctx->r14 != 0) {
        // 0x801DCB24: nop
    
            goto L_801DCB38;
    }
    // 0x801DCB24: nop

    // 0x801DCB28: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801DCB2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DCB30: b           L_801DCB50
    // 0x801DCB34: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801DCB50;
    // 0x801DCB34: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801DCB38:
    // 0x801DCB38: b           L_801DCB50
    // 0x801DCB3C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801DCB50;
    // 0x801DCB3C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801DCB40: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_801DCB44:
    // 0x801DCB44: nop

    // 0x801DCB48: bltz        $t6, L_801DCB38
    if (SIGNED(ctx->r14) < 0) {
        // 0x801DCB4C: nop
    
            goto L_801DCB38;
    }
    // 0x801DCB4C: nop

L_801DCB50:
    // 0x801DCB50: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801DCB54: jr          $ra
    // 0x801DCB58: sh          $t6, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801DCB58: sh          $t6, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r14;
;}
RECOMP_FUNC void func_801D3854_5FEC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3854: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x801D3858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D385C: beq         $v1, $zero, L_801D386C
    if (ctx->r3 == 0) {
        // 0x801D3860: nop
    
            goto L_801D386C;
    }
    // 0x801D3860: nop

    // 0x801D3864: jr          $ra
    // 0x801D3868: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
    TRACE_RETURN()
    return;
    // 0x801D3868: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
L_801D386C:
    // 0x801D386C: jr          $ra
    // 0x801D3870: nop

    TRACE_RETURN()
    return;
    // 0x801D3870: nop

;}
