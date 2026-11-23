#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DC988_598898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC988: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DC98C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DC990: addiu       $a2, $a2, -0x2DC6
    ctx->r6 = ADD32(ctx->r6, -0X2DC6);
    // 0x801DC994: addiu       $v1, $v1, -0x2DC8
    ctx->r3 = ADD32(ctx->r3, -0X2DC8);
    // 0x801DC998: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DC99C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC9A0:
    // 0x801DC9A0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_801DC9A4:
    // 0x801DC9A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801DC9A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801DC9AC: bne         $v0, $a1, L_801DC9A4
    if (ctx->r2 != ctx->r5) {
        // 0x801DC9B0: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_801DC9A4;
    }
    // 0x801DC9B0: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
    // 0x801DC9B4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801DC9B8: bnel        $v1, $a2, L_801DC9A0
    if (ctx->r3 != ctx->r6) {
        // 0x801DC9BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC9A0;
    }
    goto skip_0;
    // 0x801DC9BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801DC9C0: jr          $ra
    // 0x801DC9C4: nop

    TRACE_RETURN()
    return;
    // 0x801DC9C4: nop

;}
RECOMP_FUNC void func_801CF564_58B474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF564: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801CF568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CF56C: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x801CF570: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801CF574: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801CF578: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x801CF57C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801CF580: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801CF584: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CF588: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x801CF58C: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801CF590: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x801CF594: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801CF598: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x801CF59C: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801CF5A0: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801CF5A4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x801CF5A8: jal         0x8001D394
    // 0x801CF5AC: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801CF5AC: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801CF5B0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CF5B4: addiu       $v1, $v1, -0x3410
    ctx->r3 = ADD32(ctx->r3, -0X3410);
    // 0x801CF5B8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CF5BC: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CF5C0: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CF5C4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801CF5C8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801CF5CC: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CF5D0: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x801CF5D4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801CF5D8: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x801CF5DC: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x801CF5E0: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x801CF5E4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801CF5E8: jal         0x8001D394
    // 0x801CF5EC: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801CF5EC: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801CF5F0: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801CF5F4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CF5F8: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x801CF5FC: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CF600: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801CF604: jal         0x8001D898
    // 0x801CF608: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_8001D898_1E498(rdram, ctx);
        goto after_2;
    // 0x801CF608: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x801CF60C: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801CF610: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801CF614: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CF618: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CF61C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF620: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801CF624: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CF628: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CF62C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801CF630: nop

    // 0x801CF634: bc1fl       L_801CF648
    if (!c1cs) {
        // 0x801CF638: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CF648;
    }
    goto skip_0;
    // 0x801CF638: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801CF63C: b           L_801CF648
    // 0x801CF640: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CF648;
    // 0x801CF640: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CF644: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CF648:
    // 0x801CF648: ldc1        $f6, -0x5628($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5628);
    // 0x801CF64C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801CF650: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801CF654: nop

    // 0x801CF658: bc1tl       L_801CF670
    if (c1cs) {
        // 0x801CF65C: sw          $zero, 0x28($sp)
        MEM_W(0X28, ctx->r29) = 0;
            goto L_801CF670;
    }
    goto skip_1;
    // 0x801CF65C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    skip_1:
    // 0x801CF660: jal         0x800040A8
    // 0x801CF664: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801CF664: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    after_3:
    // 0x801CF668: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801CF66C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_801CF670:
    // 0x801CF670: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x801CF674: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x801CF678: jal         0x8001D460
    // 0x801CF67C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_8001D460_1E060(rdram, ctx);
        goto after_4;
    // 0x801CF67C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x801CF680: beq         $v0, $zero, L_801CF6E4
    if (ctx->r2 == 0) {
        // 0x801CF684: lwc1        $f14, 0x54($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
            goto L_801CF6E4;
    }
    // 0x801CF684: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801CF688: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CF68C: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801CF690: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CF694: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF698: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CF69C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CF6A0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CF6A4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801CF6A8: nop

    // 0x801CF6AC: bc1fl       L_801CF6C0
    if (!c1cs) {
        // 0x801CF6B0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CF6C0;
    }
    goto skip_2;
    // 0x801CF6B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801CF6B4: b           L_801CF6C0
    // 0x801CF6B8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CF6C0;
    // 0x801CF6B8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CF6BC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CF6C0:
    // 0x801CF6C0: ldc1        $f6, -0x5620($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5620);
    // 0x801CF6C4: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801CF6C8: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801CF6CC: nop

    // 0x801CF6D0: bc1tl       L_801CF6E8
    if (c1cs) {
        // 0x801CF6D4: lw          $v0, 0x80($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X80);
            goto L_801CF6E8;
    }
    goto skip_3;
    // 0x801CF6D4: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    skip_3:
    // 0x801CF6D8: jal         0x800040A8
    // 0x801CF6DC: nop

    func_800040A8_4CA8(rdram, ctx);
        goto after_5;
    // 0x801CF6DC: nop

    after_5:
    // 0x801CF6E0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_801CF6E4:
    // 0x801CF6E4: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
L_801CF6E8:
    // 0x801CF6E8: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CF6EC: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801CF6F0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CF6F4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x801CF6F8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x801CF6FC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CF700: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801CF704: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801CF708: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x801CF70C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CF710: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CF714: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801CF718: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CF71C: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801CF720: jal         0x8001D898
    // 0x801CF724: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_6;
    // 0x801CF724: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x801CF728: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CF72C: jal         0x800040A8
    // 0x801CF730: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    func_800040A8_4CA8(rdram, ctx);
        goto after_7;
    // 0x801CF730: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    after_7:
    // 0x801CF734: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801CF738: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x801CF73C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x801CF740: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x801CF744: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801CF748: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x801CF74C: jal         0x80003F30
    // 0x801CF750: andi        $a0, $t0, 0x3FF
    ctx->r4 = ctx->r8 & 0X3FF;
    func_80003F30_4B30(rdram, ctx);
        goto after_8;
    // 0x801CF750: andi        $a0, $t0, 0x3FF
    ctx->r4 = ctx->r8 & 0X3FF;
    after_8:
    // 0x801CF754: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x801CF758: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x801CF75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CF760: lhu         $v0, 0x2E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2E);
    // 0x801CF764: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x801CF768: jr          $ra
    // 0x801CF76C: nop

    TRACE_RETURN()
    return;
    // 0x801CF76C: nop

;}
RECOMP_FUNC void func_801D9AB0_5959C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9AB0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801D9AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9AB8: addiu       $at, $zero, 0x1B2
    ctx->r1 = ADD32(0, 0X1B2);
    // 0x801D9ABC: lw          $v1, 0x80($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X80);
    // 0x801D9AC0: beq         $v1, $zero, L_801D9AD0
    if (ctx->r3 == 0) {
        // 0x801D9AC4: nop
    
            goto L_801D9AD0;
    }
    // 0x801D9AC4: nop

    // 0x801D9AC8: b           L_801D9AD0
    // 0x801D9ACC: lhu         $a1, 0x5C($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X5C);
        goto L_801D9AD0;
    // 0x801D9ACC: lhu         $a1, 0x5C($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X5C);
L_801D9AD0:
    // 0x801D9AD0: beq         $a1, $at, L_801D9AE8
    if (ctx->r5 == ctx->r1) {
        // 0x801D9AD4: nop
    
            goto L_801D9AE8;
    }
    // 0x801D9AD4: nop

    // 0x801D9AD8: lhu         $t6, 0x98($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X98);
    // 0x801D9ADC: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x801D9AE0: bnel        $t6, $at, L_801D9AF4
    if (ctx->r14 != ctx->r1) {
        // 0x801D9AE4: lwc1        $f4, 0x88($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
            goto L_801D9AF4;
    }
    goto skip_0;
    // 0x801D9AE4: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
    skip_0:
L_801D9AE8:
    // 0x801D9AE8: jr          $ra
    // 0x801D9AEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D9AEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9AF0: lwc1        $f4, 0x88($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X88);
L_801D9AF4:
    // 0x801D9AF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9AF8: ldc1        $f8, -0x5108($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5108);
    // 0x801D9AFC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D9B00: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801D9B04: nop

    // 0x801D9B08: bc1fl       L_801D9B2C
    if (!c1cs) {
        // 0x801D9B0C: lhu         $v1, 0xA($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0XA);
            goto L_801D9B2C;
    }
    goto skip_1;
    // 0x801D9B0C: lhu         $v1, 0xA($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA);
    skip_1:
    // 0x801D9B10: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x801D9B14: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x801D9B18: bnel        $t8, $zero, L_801D9B2C
    if (ctx->r24 != 0) {
        // 0x801D9B1C: lhu         $v1, 0xA($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0XA);
            goto L_801D9B2C;
    }
    goto skip_2;
    // 0x801D9B1C: lhu         $v1, 0xA($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA);
    skip_2:
    // 0x801D9B20: jr          $ra
    // 0x801D9B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D9B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9B28: lhu         $v1, 0xA($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XA);
L_801D9B2C:
    // 0x801D9B2C: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x801D9B30: bne         $t9, $zero, L_801D9B40
    if (ctx->r25 != 0) {
        // 0x801D9B34: andi        $t0, $v1, 0x2
        ctx->r8 = ctx->r3 & 0X2;
            goto L_801D9B40;
    }
    // 0x801D9B34: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x801D9B38: jr          $ra
    // 0x801D9B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D9B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9B40:
    // 0x801D9B40: bne         $t0, $zero, L_801D9B50
    if (ctx->r8 != 0) {
        // 0x801D9B44: andi        $t1, $v1, 0x8
        ctx->r9 = ctx->r3 & 0X8;
            goto L_801D9B50;
    }
    // 0x801D9B44: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    // 0x801D9B48: jr          $ra
    // 0x801D9B4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    TRACE_RETURN()
    return;
    // 0x801D9B4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801D9B50:
    // 0x801D9B50: bne         $t1, $zero, L_801D9B60
    if (ctx->r9 != 0) {
        // 0x801D9B54: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_801D9B60;
    }
    // 0x801D9B54: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    // 0x801D9B58: jr          $ra
    // 0x801D9B5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    TRACE_RETURN()
    return;
    // 0x801D9B5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_801D9B60:
    // 0x801D9B60: bne         $t2, $zero, L_801D9B70
    if (ctx->r10 != 0) {
        // 0x801D9B64: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9B70;
    }
    // 0x801D9B64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9B68: jr          $ra
    // 0x801D9B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801D9B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801D9B70:
    // 0x801D9B70: jr          $ra
    // 0x801D9B74: nop

    TRACE_RETURN()
    return;
    // 0x801D9B74: nop

;}
RECOMP_FUNC void func_801EB020_5A6F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB02C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB030: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB034: jal         0x801EB180
    // 0x801EB038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EB03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB044: jr          $ra
    // 0x801EB048: nop

    TRACE_RETURN()
    return;
    // 0x801EB048: nop

;}
RECOMP_FUNC void func_801FBB30_5B7A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBB30: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801FBB34: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801FBB38: lhu         $t6, 0x7AD6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7AD6);
    // 0x801FBB3C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801FBB40: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801FBB44: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801FBB48: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801FBB4C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801FBB50: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801FBB54: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801FBB58: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801FBB5C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801FBB60: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801FBB64: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801FBB68: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801FBB6C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801FBB70: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801FBB74: bne         $t6, $zero, L_801FBD14
    if (ctx->r14 != 0) {
        // 0x801FBB78: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_801FBD14;
    }
    // 0x801FBB78: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801FBB7C: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x801FBB80: sh          $zero, 0x60($a0)
    MEM_H(0X60, ctx->r4) = 0;
    // 0x801FBB84: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801FBB88: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801FBB8C: lui         $s3, 0x8006
    ctx->r19 = S32(0X8006 << 16);
    // 0x801FBB90: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801FBB94: addiu       $s3, $s3, -0x48D0
    ctx->r19 = ADD32(ctx->r19, -0X48D0);
    // 0x801FBB98: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FBB9C: jal         0x80007E5C
    // 0x801FBBA0: sw          $s3, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r19;
    func_80007E5C_8A5C(rdram, ctx);
        goto after_0;
    // 0x801FBBA0: sw          $s3, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r19;
    after_0:
    // 0x801FBBA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801FBBA8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801FBBAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FBBB0: lwc1        $f22, -0x37A8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X37A8);
    // 0x801FBBB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FBBB8: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x801FBBBC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801FBBC0: addiu       $s6, $s6, -0x5B38
    ctx->r22 = ADD32(ctx->r22, -0X5B38);
    // 0x801FBBC4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801FBBC8: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x801FBBCC: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x801FBBD0: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
L_801FBBD4:
    // 0x801FBBD4: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FBBD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801FBBDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FBBE0: mflo        $t8
    ctx->r24 = lo;
    // 0x801FBBE4: addu        $s1, $s6, $t8
    ctx->r17 = ADD32(ctx->r22, ctx->r24);
    // 0x801FBBE8: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x801FBBEC: beq         $s5, $t9, L_801FBD08
    if (ctx->r21 == ctx->r25) {
        // 0x801FBBF0: nop
    
            goto L_801FBD08;
    }
    // 0x801FBBF0: nop

    // 0x801FBBF4: jal         0x80035EEC
    // 0x801FBBF8: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801FBBF8: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    after_1:
    // 0x801FBBFC: bne         $v0, $zero, L_801FBC14
    if (ctx->r2 != 0) {
        // 0x801FBC00: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_801FBC14;
    }
    // 0x801FBC00: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x801FBC04: jal         0x80035044
    // 0x801FBC08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x801FBC08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x801FBC0C: b           L_801FBD18
    // 0x801FBC10: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801FBD18;
    // 0x801FBC10: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801FBC14:
    // 0x801FBC14: lw          $s0, 0x1C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X1C);
    // 0x801FBC18: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x801FBC1C: jal         0x800086C4
    // 0x801FBC20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800086C4_92C4(rdram, ctx);
        goto after_3;
    // 0x801FBC20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801FBC24: lbu         $t0, 0x8($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X8);
    // 0x801FBC28: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801FBC2C: sb          $fp, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r30;
    // 0x801FBC30: andi        $t2, $t0, 0xFFFB
    ctx->r10 = ctx->r8 & 0XFFFB;
    // 0x801FBC34: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x801FBC38: sb          $t2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r10;
    // 0x801FBC3C: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x801FBC40: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x801FBC44: swc1        $f20, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f20.u32l;
    // 0x801FBC48: swc1        $f20, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f20.u32l;
    // 0x801FBC4C: sb          $t5, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r13;
    // 0x801FBC50: lhu         $t6, 0xA($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0XA);
    // 0x801FBC54: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x801FBC58: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x801FBC5C: sh          $t6, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r14;
    // 0x801FBC60: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x801FBC64: srl         $t9, $v0, 15
    ctx->r25 = S32(U32(ctx->r2) >> 15);
    // 0x801FBC68: xori        $t0, $t9, 0x6
    ctx->r8 = ctx->r25 ^ 0X6;
    // 0x801FBC6C: sh          $t7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r15;
    // 0x801FBC70: lhu         $t8, 0x2($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X2);
    // 0x801FBC74: sll         $t1, $t0, 28
    ctx->r9 = S32(ctx->r8 << 28);
    // 0x801FBC78: srl         $t2, $t1, 13
    ctx->r10 = S32(U32(ctx->r9) >> 13);
    // 0x801FBC7C: xor         $t3, $t2, $v0
    ctx->r11 = ctx->r10 ^ ctx->r2;
    // 0x801FBC80: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x801FBC84: sw          $s3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r19;
    // 0x801FBC88: sh          $t8, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r24;
    // 0x801FBC8C: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x801FBC90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801FBC94: andi        $t4, $v1, 0x80
    ctx->r12 = ctx->r3 & 0X80;
    // 0x801FBC98: beql        $t4, $zero, L_801FBCBC
    if (ctx->r12 == 0) {
        // 0x801FBC9C: andi        $t8, $v1, 0x40
        ctx->r24 = ctx->r3 & 0X40;
            goto L_801FBCBC;
    }
    goto skip_0;
    // 0x801FBC9C: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
    skip_0:
    // 0x801FBCA0: lbu         $t6, 0x8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8);
    // 0x801FBCA4: swc1        $f22, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f22.u32l;
    // 0x801FBCA8: swc1        $f22, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f22.u32l;
    // 0x801FBCAC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x801FBCB0: sb          $t7, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r15;
    // 0x801FBCB4: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x801FBCB8: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
L_801FBCBC:
    // 0x801FBCBC: beq         $t8, $zero, L_801FBCDC
    if (ctx->r24 == 0) {
        // 0x801FBCC0: andi        $t7, $s2, 0xFFFF
        ctx->r15 = ctx->r18 & 0XFFFF;
            goto L_801FBCDC;
    }
    // 0x801FBCC0: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x801FBCC4: lbu         $t0, 0x8($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X8);
    // 0x801FBCC8: swc1        $f24, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f24.u32l;
    // 0x801FBCCC: swc1        $f24, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f24.u32l;
    // 0x801FBCD0: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x801FBCD4: sb          $t1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r9;
    // 0x801FBCD8: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
L_801FBCDC:
    // 0x801FBCDC: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x801FBCE0: beq         $t2, $zero, L_801FBD00
    if (ctx->r10 == 0) {
        // 0x801FBCE4: nop
    
            goto L_801FBD00;
    }
    // 0x801FBCE4: nop

    // 0x801FBCE8: lbu         $t3, 0x8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X8);
    // 0x801FBCEC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x801FBCF0: sb          $t6, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r14;
    // 0x801FBCF4: andi        $t4, $t3, 0xFF1F
    ctx->r12 = ctx->r11 & 0XFF1F;
    // 0x801FBCF8: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x801FBCFC: sb          $t5, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r13;
L_801FBD00:
    // 0x801FBD00: b           L_801FBBD4
    // 0x801FBD04: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
        goto L_801FBBD4;
    // 0x801FBD04: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_801FBD08:
    // 0x801FBD08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBD0C: jal         0x8003521C
    // 0x801FBD10: addiu       $a0, $a0, -0x42B0
    ctx->r4 = ADD32(ctx->r4, -0X42B0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FBD10: addiu       $a0, $a0, -0x42B0
    ctx->r4 = ADD32(ctx->r4, -0X42B0);
    after_4:
L_801FBD14:
    // 0x801FBD14: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801FBD18:
    // 0x801FBD18: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801FBD1C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801FBD20: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801FBD24: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801FBD28: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801FBD2C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801FBD30: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801FBD34: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801FBD38: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801FBD3C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801FBD40: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801FBD44: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801FBD48: jr          $ra
    // 0x801FBD4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801FBD4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801F54C0_5B13D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F54C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F54C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F54C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F54CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801F54D0: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    // 0x801F54D4: jal         0x801E4078
    // 0x801F54D8: addiu       $a3, $zero, 0x87
    ctx->r7 = ADD32(0, 0X87);
    func_801E4078_59FF88(rdram, ctx);
        goto after_0;
    // 0x801F54D8: addiu       $a3, $zero, 0x87
    ctx->r7 = ADD32(0, 0X87);
    after_0:
    // 0x801F54DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F54E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F54E4: jr          $ra
    // 0x801F54E8: nop

    TRACE_RETURN()
    return;
    // 0x801F54E8: nop

;}
RECOMP_FUNC void func_801E8858_5A4768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E885C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E8860: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E8864: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E8868: lw          $a2, 0x80($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X80);
    // 0x801E886C: addiu       $t7, $a0, 0x84
    ctx->r15 = ADD32(ctx->r4, 0X84);
    // 0x801E8870: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8874: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E8878: jal         0x801E8890
    // 0x801E887C: addiu       $a3, $a0, 0x86
    ctx->r7 = ADD32(ctx->r4, 0X86);
    func_801E8890_5A47A0(rdram, ctx);
        goto after_0;
    // 0x801E887C: addiu       $a3, $a0, 0x86
    ctx->r7 = ADD32(ctx->r4, 0X86);
    after_0:
    // 0x801E8880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E8888: jr          $ra
    // 0x801E888C: nop

    TRACE_RETURN()
    return;
    // 0x801E888C: nop

;}
RECOMP_FUNC void func_801EB180_5A7090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB180: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801EB184: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB188: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801EB18C: slti        $v0, $t6, 0x4
    ctx->r2 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x801EB190: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801EB194: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x801EB198: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x801EB19C: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x801EB1A0: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x801EB1A4: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x801EB1A8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x801EB1AC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801EB1B0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801EB1B4: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801EB1B8: xori        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 ^ 0X1;
    // 0x801EB1BC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB1C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EB1C4: beq         $s1, $zero, L_801EB1D0
    if (ctx->r17 == 0) {
        // 0x801EB1C8: lw          $s7, 0x5C($a0)
        ctx->r23 = MEM_W(ctx->r4, 0X5C);
            goto L_801EB1D0;
    }
    // 0x801EB1C8: lw          $s7, 0x5C($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X5C);
    // 0x801EB1CC: slti        $s1, $t6, 0x8
    ctx->r17 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
L_801EB1D0:
    // 0x801EB1D0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EB1D4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EB1D8: lw          $t7, 0x4CC0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4CC0);
    // 0x801EB1DC: lw          $t8, 0x4CC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4CC4);
    // 0x801EB1E0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801EB1E4: addiu       $t0, $t0, 0x4CC8
    ctx->r8 = ADD32(ctx->r8, 0X4CC8);
    // 0x801EB1E8: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x801EB1EC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x801EB1F0: lwr         $at, 0x2($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X2);
    // 0x801EB1F4: addiu       $t9, $sp, 0x60
    ctx->r25 = ADD32(ctx->r29, 0X60);
    // 0x801EB1F8: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x801EB1FC: swr         $at, 0x2($t9)
    do_swr(rdram, 0X2, ctx->r25, ctx->r1);
    // 0x801EB200: sb          $a1, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r5;
    // 0x801EB204: jal         0x801E8C44
    // 0x801EB208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801EB208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801EB20C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801EB210: beq         $at, $zero, L_801EB428
    if (ctx->r1 == 0) {
        // 0x801EB214: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EB428;
    }
    // 0x801EB214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB218: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x801EB21C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EB220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB224: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801EB228: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801EB22C: jal         0x80034E08
    // 0x801EB230: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801EB230: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    after_1:
    // 0x801EB234: beq         $v0, $zero, L_801EB428
    if (ctx->r2 == 0) {
        // 0x801EB238: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_801EB428;
    }
    // 0x801EB238: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x801EB23C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB240: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EB244: jal         0x80035EEC
    // 0x801EB248: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801EB248: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801EB24C: beq         $v0, $zero, L_801EB274
    if (ctx->r2 == 0) {
        // 0x801EB250: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_801EB274;
    }
    // 0x801EB250: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EB254: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EB258: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EB25C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801EB260: lui         $s4, 0x2000
    ctx->r20 = S32(0X2000 << 16);
    // 0x801EB264: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x801EB268: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x801EB26C: b           L_801EB27C
    // 0x801EB270: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
        goto L_801EB27C;
    // 0x801EB270: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_801EB274:
    // 0x801EB274: b           L_801EB428
    // 0x801EB278: sb          $t6, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r14;
        goto L_801EB428;
    // 0x801EB278: sb          $t6, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r14;
L_801EB27C:
    // 0x801EB27C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_801EB280:
    // 0x801EB280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EB284: jal         0x80035EEC
    // 0x801EB288: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801EB288: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801EB28C: beq         $v0, $zero, L_801EB350
    if (ctx->r2 == 0) {
        // 0x801EB290: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_801EB350;
    }
    // 0x801EB290: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801EB294: sll         $s1, $s2, 3
    ctx->r17 = S32(ctx->r18 << 3);
    // 0x801EB298: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x801EB29C: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x801EB2A0: addu        $s0, $s5, $t7
    ctx->r16 = ADD32(ctx->r21, ctx->r15);
    // 0x801EB2A4: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x801EB2A8: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x801EB2AC: addiu       $s0, $s0, 0x9C
    ctx->r16 = ADD32(ctx->r16, 0X9C);
    // 0x801EB2B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB2B4: jal         0x801EB454
    // 0x801EB2B8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_801EB454_5A7364(rdram, ctx);
        goto after_4;
    // 0x801EB2B8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x801EB2BC: beq         $s6, $zero, L_801EB2D8
    if (ctx->r22 == 0) {
        // 0x801EB2C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EB2D8;
    }
    // 0x801EB2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB2C8: jal         0x801EE374
    // 0x801EB2CC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_801EE374_5AA284(rdram, ctx);
        goto after_5;
    // 0x801EB2CC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_5:
    // 0x801EB2D0: b           L_801EB2E4
    // 0x801EB2D4: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
        goto L_801EB2E4;
    // 0x801EB2D4: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
L_801EB2D8:
    // 0x801EB2D8: jal         0x801EE374
    // 0x801EB2DC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_801EE374_5AA284(rdram, ctx);
        goto after_6;
    // 0x801EB2DC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_6:
    // 0x801EB2E0: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
L_801EB2E4:
    // 0x801EB2E4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801EB2E8: addiu       $t9, $t9, 0x4C90
    ctx->r25 = ADD32(ctx->r25, 0X4C90);
    // 0x801EB2EC: subu        $t2, $t8, $s1
    ctx->r10 = SUB32(ctx->r24, ctx->r17);
    // 0x801EB2F0: beq         $s6, $zero, L_801EB308
    if (ctx->r22 == 0) {
        // 0x801EB2F4: sb          $t2, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r10;
            goto L_801EB308;
    }
    // 0x801EB2F4: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x801EB2F8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801EB2FC: addiu       $t1, $t1, 0x4C78
    ctx->r9 = ADD32(ctx->r9, 0X4C78);
    // 0x801EB300: b           L_801EB30C
    // 0x801EB304: or          $s1, $t1, $s4
    ctx->r17 = ctx->r9 | ctx->r20;
        goto L_801EB30C;
    // 0x801EB304: or          $s1, $t1, $s4
    ctx->r17 = ctx->r9 | ctx->r20;
L_801EB308:
    // 0x801EB308: or          $s1, $t9, $s4
    ctx->r17 = ctx->r25 | ctx->r20;
L_801EB30C:
    // 0x801EB30C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB310: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EB314: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x801EB318: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EB31C: addiu       $a1, $s3, 0x80
    ctx->r5 = ADD32(ctx->r19, 0X80);
    // 0x801EB320: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EB324: lbu         $t3, 0x2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2);
    // 0x801EB328: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801EB32C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB330: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801EB334: lbu         $t4, 0x3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3);
    // 0x801EB338: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801EB33C: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x801EB340: jal         0x801DC554
    // 0x801EB344: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_801DC554_598464(rdram, ctx);
        goto after_7;
    // 0x801EB344: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_7:
    // 0x801EB348: b           L_801EB35C
    // 0x801EB34C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_801EB35C;
    // 0x801EB34C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_801EB350:
    // 0x801EB350: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EB354: b           L_801EB368
    // 0x801EB358: sb          $t6, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r14;
        goto L_801EB368;
    // 0x801EB358: sb          $t6, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r14;
L_801EB35C:
    // 0x801EB35C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801EB360: bnel        $s2, $at, L_801EB280
    if (ctx->r18 != ctx->r1) {
        // 0x801EB364: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_801EB280;
    }
    goto skip_0;
    // 0x801EB364: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
L_801EB368:
    // 0x801EB368: slti        $at, $s2, 0x6
    ctx->r1 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x801EB36C: beq         $at, $zero, L_801EB380
    if (ctx->r1 == 0) {
        // 0x801EB370: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_801EB380;
    }
    // 0x801EB370: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801EB374: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EB378: b           L_801EB428
    // 0x801EB37C: sb          $t7, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r15;
        goto L_801EB428;
    // 0x801EB37C: sb          $t7, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r15;
L_801EB380:
    // 0x801EB380: sw          $s7, 0x5C($s5)
    MEM_W(0X5C, ctx->r21) = ctx->r23;
    // 0x801EB384: lbu         $t8, 0x8F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X8F);
    // 0x801EB388: sb          $zero, 0x60($s5)
    MEM_B(0X60, ctx->r21) = 0;
    // 0x801EB38C: beq         $s6, $zero, L_801EB3A4
    if (ctx->r22 == 0) {
        // 0x801EB390: sb          $t8, 0x64($s5)
        MEM_B(0X64, ctx->r21) = ctx->r24;
            goto L_801EB3A4;
    }
    // 0x801EB390: sb          $t8, 0x64($s5)
    MEM_B(0X64, ctx->r21) = ctx->r24;
    // 0x801EB394: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801EB398: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EB39C: b           L_801EB3B0
    // 0x801EB3A0: nop

        goto L_801EB3B0;
    // 0x801EB3A0: nop

L_801EB3A4:
    // 0x801EB3A4: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x801EB3A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EB3AC: nop

L_801EB3B0:
    // 0x801EB3B0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801EB3B4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x801EB3B8: lw          $t2, -0x394C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X394C);
    // 0x801EB3BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EB3C0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801EB3C4: addu        $a3, $sp, $t2
    ctx->r7 = ADD32(ctx->r29, ctx->r10);
    // 0x801EB3C8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x801EB3CC: lbu         $a3, 0x60($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X60);
    // 0x801EB3D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EB3D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EB3D8: jal         0x801EE228
    // 0x801EB3DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801EE228_5AA138(rdram, ctx);
        goto after_8;
    // 0x801EB3DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_8:
    // 0x801EB3E0: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x801EB3E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EB3E8: beql        $v0, $zero, L_801EB3FC
    if (ctx->r2 == 0) {
        // 0x801EB3EC: lw          $t0, 0x5C($s7)
        ctx->r8 = MEM_W(ctx->r23, 0X5C);
            goto L_801EB3FC;
    }
    goto skip_1;
    // 0x801EB3EC: lw          $t0, 0x5C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X5C);
    skip_1:
    // 0x801EB3F0: bnel        $v0, $at, L_801EB404
    if (ctx->r2 != ctx->r1) {
        // 0x801EB3F4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801EB404;
    }
    goto skip_2;
    // 0x801EB3F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_2:
    // 0x801EB3F8: lw          $t0, 0x5C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X5C);
L_801EB3FC:
    // 0x801EB3FC: sw          $s5, 0x98($t0)
    MEM_W(0X98, ctx->r8) = ctx->r21;
    // 0x801EB400: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_801EB404:
    // 0x801EB404: bnel        $v0, $at, L_801EB418
    if (ctx->r2 != ctx->r1) {
        // 0x801EB408: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801EB418;
    }
    goto skip_3;
    // 0x801EB408: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
    // 0x801EB40C: lw          $t3, 0x5C($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X5C);
    // 0x801EB410: sw          $s5, 0x9C($t3)
    MEM_W(0X9C, ctx->r11) = ctx->r21;
    // 0x801EB414: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_801EB418:
    // 0x801EB418: bnel        $v0, $at, L_801EB42C
    if (ctx->r2 != ctx->r1) {
        // 0x801EB41C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801EB42C;
    }
    goto skip_4;
    // 0x801EB41C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_4:
    // 0x801EB420: lw          $t4, 0x5C($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X5C);
    // 0x801EB424: sw          $s5, 0xA0($t4)
    MEM_W(0XA0, ctx->r12) = ctx->r21;
L_801EB428:
    // 0x801EB428: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801EB42C:
    // 0x801EB42C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801EB430: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801EB434: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x801EB438: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x801EB43C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x801EB440: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x801EB444: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x801EB448: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x801EB44C: jr          $ra
    // 0x801EB450: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801EB450: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801F8290_5B41A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8290: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8294: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801F8298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F829C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F82A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F82A4: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x801F82A8: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x801F82AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F82B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F82B4: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x801F82B8: lbu         $t7, 0x301D($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X301D);
    // 0x801F82BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F82C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F82C4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801F82C8: sb          $t8, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r24;
    // 0x801F82CC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801F82D0: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x801F82D4: lbu         $t1, 0x301D($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X301D);
    // 0x801F82D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F82DC: bnel        $t1, $zero, L_801F82F0
    if (ctx->r9 != 0) {
        // 0x801F82E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F82F0;
    }
    goto skip_0;
    // 0x801F82E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F82E4: jal         0x8003521C
    // 0x801F82E8: addiu       $a0, $a0, -0x7D04
    ctx->r4 = ADD32(ctx->r4, -0X7D04);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F82E8: addiu       $a0, $a0, -0x7D04
    ctx->r4 = ADD32(ctx->r4, -0X7D04);
    after_0:
    // 0x801F82EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F82F0:
    // 0x801F82F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F82F4: jr          $ra
    // 0x801F82F8: nop

    TRACE_RETURN()
    return;
    // 0x801F82F8: nop

;}
RECOMP_FUNC void func_801DF234_59B144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF234: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DF238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF23C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF244: jal         0x801E7DE8
    // 0x801DF248: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DF248: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF24C: beq         $v0, $zero, L_801DF264
    if (ctx->r2 == 0) {
        // 0x801DF250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DF264;
    }
    // 0x801DF250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF254: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF258: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF25C: b           L_801DF270
    // 0x801DF260: nop

        goto L_801DF270;
    // 0x801DF260: nop

L_801DF264:
    // 0x801DF264: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DF268: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF26C: nop

L_801DF270:
    // 0x801DF270: jal         0x801E1C90
    // 0x801DF274: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_1;
    // 0x801DF274: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DF278: lhu         $t6, 0x9A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X9A);
    // 0x801DF27C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801DF280: beql        $t6, $zero, L_801DF2A8
    if (ctx->r14 == 0) {
        // 0x801DF284: lbu         $t7, 0x90($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X90);
            goto L_801DF2A8;
    }
    goto skip_0;
    // 0x801DF284: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
    skip_0:
    // 0x801DF288: jal         0x801E3358
    // 0x801DF28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3358_59F268(rdram, ctx);
        goto after_2;
    // 0x801DF28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF294: jal         0x801DACDC
    // 0x801DF298: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DF298: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_3:
    // 0x801DF29C: b           L_801DF3C8
    // 0x801DF2A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF3C8;
    // 0x801DF2A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF2A4: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
L_801DF2A8:
    // 0x801DF2A8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801DF2AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF2B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DF2B4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DF2B8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DF2BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DF2C0: lhu         $t9, 0x7DB4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB4);
    // 0x801DF2C4: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x801DF2C8: bne         $t0, $zero, L_801DF2E4
    if (ctx->r8 != 0) {
        // 0x801DF2CC: nop
    
            goto L_801DF2E4;
    }
    // 0x801DF2CC: nop

    // 0x801DF2D0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF2D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DF2D8: lbu         $t1, 0x68($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X68);
    // 0x801DF2DC: bnel        $t1, $at, L_801DF2F8
    if (ctx->r9 != ctx->r1) {
        // 0x801DF2E0: lhu         $t2, 0x98($s0)
        ctx->r10 = MEM_HU(ctx->r16, 0X98);
            goto L_801DF2F8;
    }
    goto skip_1;
    // 0x801DF2E0: lhu         $t2, 0x98($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X98);
    skip_1:
L_801DF2E4:
    // 0x801DF2E4: jal         0x801E4624
    // 0x801DF2E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E4624_5A0534(rdram, ctx);
        goto after_4;
    // 0x801DF2E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x801DF2EC: b           L_801DF3C8
    // 0x801DF2F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF3C8;
    // 0x801DF2F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF2F4: lhu         $t2, 0x98($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X98);
L_801DF2F8:
    // 0x801DF2F8: beql        $t2, $zero, L_801DF360
    if (ctx->r10 == 0) {
        // 0x801DF2FC: lhu         $t5, 0x30($v0)
        ctx->r13 = MEM_HU(ctx->r2, 0X30);
            goto L_801DF360;
    }
    goto skip_2;
    // 0x801DF2FC: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    skip_2:
    // 0x801DF300: jal         0x801E8390
    // 0x801DF304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8390_5A42A0(rdram, ctx);
        goto after_5;
    // 0x801DF304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DF308: bnel        $v0, $zero, L_801DF3C8
    if (ctx->r2 != 0) {
        // 0x801DF30C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF3C8;
    }
    goto skip_3;
    // 0x801DF30C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801DF310: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF314: lhu         $t4, 0x30($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X30);
    // 0x801DF318: slti        $at, $t4, 0xF
    ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
    // 0x801DF31C: beq         $at, $zero, L_801DF340
    if (ctx->r1 == 0) {
        // 0x801DF320: nop
    
            goto L_801DF340;
    }
    // 0x801DF320: nop

    // 0x801DF324: jal         0x801E2264
    // 0x801DF328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_6;
    // 0x801DF328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DF32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF330: jal         0x801DACDC
    // 0x801DF334: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_7;
    // 0x801DF334: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_7:
    // 0x801DF338: b           L_801DF3C8
    // 0x801DF33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF3C8;
    // 0x801DF33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF340:
    // 0x801DF340: jal         0x801E2344
    // 0x801DF344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2344_59E254(rdram, ctx);
        goto after_8;
    // 0x801DF344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801DF348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF34C: jal         0x801DACDC
    // 0x801DF350: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801DF350: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_9:
    // 0x801DF354: b           L_801DF3C8
    // 0x801DF358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF3C8;
    // 0x801DF358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF35C: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
L_801DF360:
    // 0x801DF360: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DF368: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801DF36C: sh          $t6, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r14;
    // 0x801DF370: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF374: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801DF378: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801DF37C: lhu         $t8, 0x30($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X30);
    // 0x801DF380: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801DF384: bgez        $t8, L_801DF398
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801DF388: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801DF398;
    }
    // 0x801DF388: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DF38C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DF390: nop

    // 0x801DF394: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801DF398:
    // 0x801DF398: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x801DF39C: nop

    // 0x801DF3A0: bc1fl       L_801DF3C8
    if (!c1cs) {
        // 0x801DF3A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF3C8;
    }
    goto skip_4;
    // 0x801DF3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x801DF3A8: jal         0x801E3324
    // 0x801DF3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_10;
    // 0x801DF3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801DF3B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF3B4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DF3B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DF3BC: jal         0x801DAC7C
    // 0x801DF3C0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_11;
    // 0x801DF3C0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_11:
    // 0x801DF3C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF3C8:
    // 0x801DF3C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF3CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DF3D0: jr          $ra
    // 0x801DF3D4: nop

    TRACE_RETURN()
    return;
    // 0x801DF3D4: nop

;}
RECOMP_FUNC void func_801E3098_59EFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E309C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E30A0: jal         0x801E30E4
    // 0x801E30A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E30E4_59EFF4(rdram, ctx);
        goto after_0;
    // 0x801E30A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E30A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E30AC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E30B0: lbu         $t7, 0x59($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X59);
    // 0x801E30B4: beq         $t7, $zero, L_801E30CC
    if (ctx->r15 == 0) {
        // 0x801E30B8: nop
    
            goto L_801E30CC;
    }
    // 0x801E30B8: nop

    // 0x801E30BC: jal         0x801DD6E0
    // 0x801E30C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_1;
    // 0x801E30C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x801E30C4: b           L_801E30D8
    // 0x801E30C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E30D8;
    // 0x801E30C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E30CC:
    // 0x801E30CC: jal         0x801DD6E0
    // 0x801E30D0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_2;
    // 0x801E30D0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_2:
    // 0x801E30D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E30D8:
    // 0x801E30D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E30DC: jr          $ra
    // 0x801E30E0: nop

    TRACE_RETURN()
    return;
    // 0x801E30E0: nop

;}
RECOMP_FUNC void func_801CB460_587370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CB464: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CB468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB46C: addiu       $t6, $t6, -0x3A10
    ctx->r14 = ADD32(ctx->r14, -0X3A10);
    // 0x801CB470: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CB474: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x801CB478: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801CB47C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801CB480: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801CB484: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801CB488: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CB48C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801CB490: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x801CB494: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801CB498: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801CB49C: lbu         $t1, -0x5222($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X5222);
    // 0x801CB4A0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801CB4A4: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x801CB4A8: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x801CB4AC: jalr        $t9
    // 0x801CB4B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CB4B0: nop

    after_0:
    // 0x801CB4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB4B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CB4BC: jr          $ra
    // 0x801CB4C0: nop

    TRACE_RETURN()
    return;
    // 0x801CB4C0: nop

;}
RECOMP_FUNC void func_801EE980_5AA890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE980: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EE984: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801EE988: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x801EE98C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EE990: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801EE994: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801EE998: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x801EE99C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801EE9A0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801EE9A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EE9A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801EE9AC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801EE9B0: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801EE9B4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801EE9B8: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801EE9BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EE9C0: jal         0x80034E08
    // 0x801EE9C4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801EE9C4: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_0:
    // 0x801EE9C8: beq         $v0, $zero, L_801EEAF8
    if (ctx->r2 == 0) {
        // 0x801EE9CC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EEAF8;
    }
    // 0x801EE9CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EE9D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EE9D4: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801EE9D8: jal         0x801EE4AC
    // 0x801EE9DC: lbu         $a2, 0x67($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X67);
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_1;
    // 0x801EE9DC: lbu         $a2, 0x67($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X67);
    after_1:
    // 0x801EE9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE9E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EE9E8: jal         0x80035EEC
    // 0x801EE9EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801EE9EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x801EE9F0: bne         $v0, $zero, L_801EEA04
    if (ctx->r2 != 0) {
        // 0x801EE9F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EEA04;
    }
    // 0x801EE9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EE9F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EE9FC: b           L_801EEAF8
    // 0x801EEA00: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
        goto L_801EEAF8;
    // 0x801EEA00: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
L_801EEA04:
    // 0x801EEA04: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801EEA08: jal         0x801EEB0C
    // 0x801EEA0C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_801EEB0C_5AAA1C(rdram, ctx);
        goto after_3;
    // 0x801EEA0C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x801EEA10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EEA14: lhu         $t9, 0x72($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X72);
    // 0x801EEA18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EEA1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EEA20: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801EEA24: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801EEA28: beq         $t9, $zero, L_801EEA54
    if (ctx->r25 == 0) {
        // 0x801EEA2C: swc1        $f4, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
            goto L_801EEA54;
    }
    // 0x801EEA2C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x801EEA30: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801EEA34: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x801EEA38: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801EEA3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801EEA40: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x801EEA44: lhu         $a1, 0x6E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6E);
    // 0x801EEA48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EEA4C: jal         0x80033898
    // 0x801EEA50: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801EEA50: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_4:
L_801EEA54:
    // 0x801EEA54: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801EEA58: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801EEA5C: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801EEA60: addiu       $t2, $sp, 0x44
    ctx->r10 = ADD32(ctx->r29, 0X44);
    // 0x801EEA64: addiu       $t3, $sp, 0x40
    ctx->r11 = ADD32(ctx->r29, 0X40);
    // 0x801EEA68: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801EEA6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801EEA70: jal         0x80033898
    // 0x801EEA74: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801EEA74: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x801EEA78: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EEA7C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x801EEA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEA84: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801EEA88: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801EEA8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EEA90: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801EEA94: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x801EEA98: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801EEA9C: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    // 0x801EEAA0: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x801EEAA4: lhu         $t4, 0x72($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X72);
    // 0x801EEAA8: sh          $t4, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r12;
    // 0x801EEAAC: lhu         $t5, 0x6E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X6E);
    // 0x801EEAB0: sh          $zero, 0x90($s0)
    MEM_H(0X90, ctx->r16) = 0;
    // 0x801EEAB4: sh          $t5, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = ctx->r13;
    // 0x801EEAB8: lhu         $t6, 0x14($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X14);
    // 0x801EEABC: sh          $t6, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r14;
    // 0x801EEAC0: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    // 0x801EEAC4: sh          $t7, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r15;
    // 0x801EEAC8: lhu         $t8, 0x18($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X18);
    // 0x801EEACC: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x801EEAD0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EEAD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EEAD8: jal         0x801EE228
    // 0x801EEADC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801EE228_5AA138(rdram, ctx);
        goto after_6;
    // 0x801EEADC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_6:
    // 0x801EEAE0: jal         0x801DCCF0
    // 0x801EEAE4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_801DCCF0_598C00(rdram, ctx);
        goto after_7;
    // 0x801EEAE4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_7:
    // 0x801EEAE8: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x801EEAEC: sh          $t0, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r8;
    // 0x801EEAF0: lhu         $t1, 0x76($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X76);
    // 0x801EEAF4: sb          $t1, 0x61($s0)
    MEM_B(0X61, ctx->r16) = ctx->r9;
L_801EEAF8:
    // 0x801EEAF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801EEAFC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801EEB00: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801EEB04: jr          $ra
    // 0x801EEB08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801EEB08: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801E0F88_59CE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0F90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0F94: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E0F98: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E0F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E0FA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E0FA4: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801E0FA8: jal         0x801E7B24
    // 0x801E0FAC: lbu         $a2, 0x43A1($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A1);
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E0FAC: lbu         $a2, 0x43A1($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A1);
    after_0:
    // 0x801E0FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0FB8: jr          $ra
    // 0x801E0FBC: nop

    TRACE_RETURN()
    return;
    // 0x801E0FBC: nop

;}
RECOMP_FUNC void func_801E1488_59D398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1488: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E148C: jr          $ra
    // 0x801E1490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EA4D0_5A63E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA4D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801EA4D4: jr          $ra
    // 0x801EA4D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801EA4D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F18CC_5AD7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F18CC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F18D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F18D4: lwc1        $f0, -0x4134($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4134);
    // 0x801F18D8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F18DC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F18E0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F18E4: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801F18E8: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801F18EC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F18F0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F18F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F18F8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F18FC: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801F1900: addiu       $a1, $a1, 0x6B8
    ctx->r5 = ADD32(ctx->r5, 0X6B8);
    // 0x801F1904: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801F1908: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F190C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801F1910: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F1914: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801F1918: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F191C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1920: addiu       $a2, $t6, 0xA4
    ctx->r6 = ADD32(ctx->r14, 0XA4);
    // 0x801F1924: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801F1928: lhu         $t0, 0x14($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14);
    // 0x801F192C: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x801F1930: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1934: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801F1938: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x801F193C: addiu       $t3, $zero, 0x120
    ctx->r11 = ADD32(0, 0X120);
    // 0x801F1940: addiu       $t4, $zero, 0x152
    ctx->r12 = ADD32(0, 0X152);
    // 0x801F1944: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801F1948: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x801F194C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F1950: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x801F1954: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x801F1958: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F195C: or          $a2, $t8, $at
    ctx->r6 = ctx->r24 | ctx->r1;
    // 0x801F1960: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801F1964: jal         0x80034680
    // 0x801F1968: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801F1968: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_0:
    // 0x801F196C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x801F1970: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F1974: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1978: lbu         $t7, 0x90($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X90);
    // 0x801F197C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801F1980: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x801F1984: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801F1988: lw          $t8, -0x2DE0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2DE0);
    // 0x801F198C: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    // 0x801F1990: sw          $t8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r24;
    // 0x801F1994: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F1998: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F199C: jr          $ra
    // 0x801F19A0: nop

    TRACE_RETURN()
    return;
    // 0x801F19A0: nop

;}
RECOMP_FUNC void func_801F0F00_5ACE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0F08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F0F0C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F0F10: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F0F14: jal         0x801F0F84
    // 0x801F0F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801F0F84_5ACE94(rdram, ctx);
        goto after_0;
    // 0x801F0F18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F0F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0F24: jr          $ra
    // 0x801F0F28: nop

    TRACE_RETURN()
    return;
    // 0x801F0F28: nop

;}
RECOMP_FUNC void func_801DF0B0_59AFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF0B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DF0BC: jal         0x801E7DE8
    // 0x801DF0C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DF0C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF0C4: beq         $v0, $zero, L_801DF0D8
    if (ctx->r2 == 0) {
        // 0x801DF0C8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801DF0D8;
    }
    // 0x801DF0C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF0CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF0D0: b           L_801DF0DC
    // 0x801DF0D4: lwc1        $f2, -0x4E60($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4E60);
        goto L_801DF0DC;
    // 0x801DF0D4: lwc1        $f2, -0x4E60($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4E60);
L_801DF0D8:
    // 0x801DF0D8: lwc1        $f2, -0x4E5C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4E5C);
L_801DF0DC:
    // 0x801DF0DC: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x801DF0E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801DF0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DF0E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF0EC: lwc1        $f8, -0x4E58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4E58);
    // 0x801DF0F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DF0F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DF0F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DF0FC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DF100: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DF104: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801DF108: jal         0x801E8194
    // 0x801DF10C: nop

    func_801E8194_5A40A4(rdram, ctx);
        goto after_1;
    // 0x801DF10C: nop

    after_1:
    // 0x801DF110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF118: jr          $ra
    // 0x801DF11C: nop

    TRACE_RETURN()
    return;
    // 0x801DF11C: nop

;}
RECOMP_FUNC void func_801CBACC_5879DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBAD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CBAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBAD8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBADC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CBAE0: jal         0x80035234
    // 0x801CBAE4: addiu       $a0, $a0, -0x4508
    ctx->r4 = ADD32(ctx->r4, -0X4508);
    func_80035234_35E34(rdram, ctx);
        goto after_0;
    // 0x801CBAE4: addiu       $a0, $a0, -0x4508
    ctx->r4 = ADD32(ctx->r4, -0X4508);
    after_0:
    // 0x801CBAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBAF0: jr          $ra
    // 0x801CBAF4: nop

    TRACE_RETURN()
    return;
    // 0x801CBAF4: nop

;}
RECOMP_FUNC void func_801EA0D8_5A5FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA0D8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801EA0DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EA0E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801EA0E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801EA0E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801EA0EC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801EA0F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EA0F4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801EA0F8: lbu         $v1, 0xCC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XCC);
    // 0x801EA0FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EA100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA104: xori        $t6, $v1, 0x77
    ctx->r14 = ctx->r3 ^ 0X77;
    // 0x801EA108: sltiu       $v1, $t6, 0x1
    ctx->r3 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x801EA10C: bne         $v1, $zero, L_801EA120
    if (ctx->r3 != 0) {
        // 0x801EA110: lw          $s1, 0x18($v0)
        ctx->r17 = MEM_W(ctx->r2, 0X18);
            goto L_801EA120;
    }
    // 0x801EA110: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801EA114: lbu         $v1, 0xCC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XCC);
    // 0x801EA118: xori        $t7, $v1, 0x78
    ctx->r15 = ctx->r3 ^ 0X78;
    // 0x801EA11C: sltiu       $v1, $t7, 0x1
    ctx->r3 = ctx->r15 < 0X1 ? 1 : 0;
L_801EA120:
    // 0x801EA120: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801EA124: lbu         $v1, 0x60($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X60);
    // 0x801EA128: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x801EA12C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x801EA130: beq         $v1, $zero, L_801EA164
    if (ctx->r3 == 0) {
        // 0x801EA134: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801EA164;
    }
    // 0x801EA134: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801EA138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EA13C: beq         $v1, $at, L_801EA2A0
    if (ctx->r3 == ctx->r1) {
        // 0x801EA140: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EA2A0;
    }
    // 0x801EA140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EA148: beq         $v1, $at, L_801EA304
    if (ctx->r3 == ctx->r1) {
        // 0x801EA14C: addiu       $a3, $sp, 0x98
        ctx->r7 = ADD32(ctx->r29, 0X98);
            goto L_801EA304;
    }
    // 0x801EA14C: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x801EA150: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EA154: beq         $v1, $at, L_801EA404
    if (ctx->r3 == ctx->r1) {
        // 0x801EA158: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_801EA404;
    }
    // 0x801EA158: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EA15C: b           L_801EA40C
    // 0x801EA160: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
        goto L_801EA40C;
    // 0x801EA160: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801EA164:
    // 0x801EA164: jal         0x801EA434
    // 0x801EA168: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_801EA434_5A6344(rdram, ctx);
        goto after_0;
    // 0x801EA168: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x801EA16C: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801EA170: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801EA174: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801EA178: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801EA17C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801EA180: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA184: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801EA188: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EA18C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801EA190: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801EA194: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA198: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801EA19C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801EA1A0: nop

    // 0x801EA1A4: bc1fl       L_801EA1B8
    if (!c1cs) {
        // 0x801EA1A8: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_801EA1B8;
    }
    goto skip_0;
    // 0x801EA1A8: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_0:
    // 0x801EA1AC: b           L_801EA1B8
    // 0x801EA1B0: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_801EA1B8;
    // 0x801EA1B0: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x801EA1B4: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_801EA1B8:
    // 0x801EA1B8: ldc1        $f6, -0x47A8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X47A8);
    // 0x801EA1BC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801EA1C0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801EA1C4: nop

    // 0x801EA1C8: bc1fl       L_801EA1E4
    if (!c1cs) {
        // 0x801EA1CC: lwc1        $f10, 0x8($s2)
        ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
            goto L_801EA1E4;
    }
    goto skip_1;
    // 0x801EA1CC: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    skip_1:
    // 0x801EA1D0: sb          $t8, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r24;
    // 0x801EA1D4: lwc1        $f2, 0x74($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801EA1D8: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801EA1DC: lwc1        $f14, 0x70($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801EA1E0: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
L_801EA1E4:
    // 0x801EA1E4: lwc1        $f18, 0xC($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EA1E8: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EA1EC: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x801EA1F0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801EA1F4: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x801EA1F8: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x801EA1FC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801EA200: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801EA204: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x801EA208: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801EA20C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x801EA210: jal         0x8002A458
    // 0x801EA214: nop

    func_8002A458_2B058(rdram, ctx);
        goto after_1;
    // 0x801EA214: nop

    after_1:
    // 0x801EA218: lh          $t9, 0x84($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X84);
    // 0x801EA21C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801EA220: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x801EA224: bnel        $t9, $at, L_801EA294
    if (ctx->r25 != ctx->r1) {
        // 0x801EA228: lhu         $t5, 0x62($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X62);
            goto L_801EA294;
    }
    goto skip_2;
    // 0x801EA228: lhu         $t5, 0x62($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X62);
    skip_2:
    // 0x801EA22C: beql        $t0, $zero, L_801EA258
    if (ctx->r8 == 0) {
        // 0x801EA230: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801EA258;
    }
    goto skip_3;
    // 0x801EA230: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_3:
    // 0x801EA234: lhu         $t1, 0x5C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X5C);
    // 0x801EA238: addiu       $at, $zero, 0x196
    ctx->r1 = ADD32(0, 0X196);
    // 0x801EA23C: bnel        $t1, $at, L_801EA258
    if (ctx->r9 != ctx->r1) {
        // 0x801EA240: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801EA258;
    }
    goto skip_4;
    // 0x801EA240: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_4:
    // 0x801EA244: lhu         $t2, 0x62($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X62);
    // 0x801EA248: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801EA24C: b           L_801EA408
    // 0x801EA250: sh          $t3, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r11;
        goto L_801EA408;
    // 0x801EA250: sh          $t3, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r11;
    // 0x801EA254: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_801EA258:
    // 0x801EA258: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EA25C: lwc1        $f8, 0x6C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801EA260: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801EA264: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801EA268: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801EA26C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801EA270: sb          $t4, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r12;
    // 0x801EA274: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801EA278: nop

    // 0x801EA27C: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801EA280: swc1        $f18, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f18.u32l;
    // 0x801EA284: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801EA288: b           L_801EA408
    // 0x801EA28C: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
        goto L_801EA408;
    // 0x801EA28C: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801EA290: lhu         $t5, 0x62($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X62);
L_801EA294:
    // 0x801EA294: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801EA298: b           L_801EA408
    // 0x801EA29C: sh          $t6, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r14;
        goto L_801EA408;
    // 0x801EA29C: sh          $t6, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r14;
L_801EA2A0:
    // 0x801EA2A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801EA2A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801EA2A8: jal         0x801EA434
    // 0x801EA2AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_801EA434_5A6344(rdram, ctx);
        goto after_2;
    // 0x801EA2AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x801EA2B0: lhu         $v0, 0x62($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X62);
    // 0x801EA2B4: beq         $v0, $zero, L_801EA2C8
    if (ctx->r2 == 0) {
        // 0x801EA2B8: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_801EA2C8;
    }
    // 0x801EA2B8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801EA2BC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801EA2C0: bne         $t8, $zero, L_801EA408
    if (ctx->r24 != 0) {
        // 0x801EA2C4: sh          $t7, 0x62($s0)
        MEM_H(0X62, ctx->r16) = ctx->r15;
            goto L_801EA408;
    }
    // 0x801EA2C4: sh          $t7, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r15;
L_801EA2C8:
    // 0x801EA2C8: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801EA2CC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EA2D0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801EA2D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EA2D8: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x801EA2DC: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801EA2E0: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801EA2E4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801EA2E8: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x801EA2EC: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EA2F0: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801EA2F4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA2F8: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    // 0x801EA2FC: b           L_801EA408
    // 0x801EA300: sb          $t9, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r25;
        goto L_801EA408;
    // 0x801EA300: sb          $t9, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r25;
L_801EA304:
    // 0x801EA304: beq         $v0, $zero, L_801EA318
    if (ctx->r2 == 0) {
        // 0x801EA308: addiu       $t0, $sp, 0x9C
        ctx->r8 = ADD32(ctx->r29, 0X9C);
            goto L_801EA318;
    }
    // 0x801EA308: addiu       $t0, $sp, 0x9C
    ctx->r8 = ADD32(ctx->r29, 0X9C);
    // 0x801EA30C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801EA310: b           L_801EA324
    // 0x801EA314: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
        goto L_801EA324;
    // 0x801EA314: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
L_801EA318:
    // 0x801EA318: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801EA31C: nop

    // 0x801EA320: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
L_801EA324:
    // 0x801EA324: beq         $v0, $zero, L_801EA33C
    if (ctx->r2 == 0) {
        // 0x801EA328: addiu       $t1, $sp, 0xA0
        ctx->r9 = ADD32(ctx->r29, 0XA0);
            goto L_801EA33C;
    }
    // 0x801EA328: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x801EA32C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EA334: b           L_801EA34C
    // 0x801EA338: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
        goto L_801EA34C;
    // 0x801EA338: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
L_801EA33C:
    // 0x801EA33C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EA340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EA344: nop

    // 0x801EA348: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
L_801EA34C:
    // 0x801EA34C: beq         $v0, $zero, L_801EA364
    if (ctx->r2 == 0) {
        // 0x801EA350: lui         $at, 0x4160
        ctx->r1 = S32(0X4160 << 16);
            goto L_801EA364;
    }
    // 0x801EA350: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801EA354: lui         $at, 0x4138
    ctx->r1 = S32(0X4138 << 16);
    // 0x801EA358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EA35C: b           L_801EA370
    // 0x801EA360: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
        goto L_801EA370;
    // 0x801EA360: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
L_801EA364:
    // 0x801EA364: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EA368: nop

    // 0x801EA36C: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
L_801EA370:
    // 0x801EA370: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801EA374: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801EA378: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801EA37C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801EA380: jal         0x80033898
    // 0x801EA384: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801EA384: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801EA388: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801EA38C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA390: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801EA394: swc1        $f18, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f18.u32l;
    // 0x801EA398: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801EA39C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801EA3A0: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801EA3A4: swc1        $f6, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f6.u32l;
    // 0x801EA3A8: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EA3AC: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801EA3B0: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801EA3B4: lwc1        $f18, 0xC($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EA3B8: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801EA3BC: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EA3C0: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EA3C4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801EA3C8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801EA3CC: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801EA3D0: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801EA3D4: ldc1        $f10, -0x47A0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X47A0);
    // 0x801EA3D8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801EA3DC: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801EA3E0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA3E4: sqrt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = sqrtf(ctx->f16.fl);
    // 0x801EA3E8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801EA3EC: c.le.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d <= ctx->f10.d;
    // 0x801EA3F0: nop

    // 0x801EA3F4: bc1fl       L_801EA40C
    if (!c1cs) {
        // 0x801EA3F8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EA40C;
    }
    goto skip_5;
    // 0x801EA3F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_5:
    // 0x801EA3FC: b           L_801EA408
    // 0x801EA400: sb          $t2, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r10;
        goto L_801EA408;
    // 0x801EA400: sb          $t2, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r10;
L_801EA404:
    // 0x801EA404: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
L_801EA408:
    // 0x801EA408: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801EA40C:
    // 0x801EA40C: jal         0x801EE25C
    // 0x801EA410: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_4;
    // 0x801EA410: lw          $a1, 0xBC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XBC);
    after_4:
    // 0x801EA414: lw          $t4, 0xBC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XBC);
    // 0x801EA418: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x801EA41C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EA420: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801EA424: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801EA428: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801EA42C: jr          $ra
    // 0x801EA430: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    TRACE_RETURN()
    return;
    // 0x801EA430: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_801E0FC0_59CED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0FC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0FCC: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E0FD0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E0FD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E0FD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E0FDC: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801E0FE0: jal         0x801E7B24
    // 0x801E0FE4: lbu         $a2, 0x43A2($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A2);
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E0FE4: lbu         $a2, 0x43A2($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A2);
    after_0:
    // 0x801E0FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0FF0: jr          $ra
    // 0x801E0FF4: nop

    TRACE_RETURN()
    return;
    // 0x801E0FF4: nop

;}
RECOMP_FUNC void func_801DDAC8_5999D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDAD0: jal         0x801E15D0
    // 0x801DDAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E15D0_59D4E0(rdram, ctx);
        goto after_0;
    // 0x801DDAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDAE0: jr          $ra
    // 0x801DDAE4: nop

    TRACE_RETURN()
    return;
    // 0x801DDAE4: nop

;}
RECOMP_FUNC void func_801D2D10_58EC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2D10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D2D14: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801D2D18: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801D2D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2D20: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D2D24: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D2D28: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x801D2D2C: jal         0x80003F30
    // 0x801D2D30: lhu         $a0, 0x94($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X94);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x801D2D30: lhu         $a0, 0x94($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X94);
    after_0:
    // 0x801D2D34: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D2D38: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801D2D3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D2D40: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
    // 0x801D2D44: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D2D48: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801D2D4C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x801D2D50: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x801D2D54: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x801D2D58: jal         0x8001D718
    // 0x801D2D5C: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_1;
    // 0x801D2D5C: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_1:
    // 0x801D2D60: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D2D64: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D2D68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D2D6C: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x801D2D70: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D2D74: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801D2D78: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D2D7C: addiu       $v1, $v1, -0x39E4
    ctx->r3 = ADD32(ctx->r3, -0X39E4);
    // 0x801D2D80: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x801D2D84: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801D2D88: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D2D8C: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D2D90: addiu       $a0, $a0, -0x39EC
    ctx->r4 = ADD32(ctx->r4, -0X39EC);
    // 0x801D2D94: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x801D2D98: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x801D2D9C: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x801D2DA0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801D2DA4: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x801D2DA8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D2DAC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801D2DB0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801D2DB4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801D2DB8: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801D2DBC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D2DC0: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x801D2DC4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x801D2DC8: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x801D2DCC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801D2DD0: swc1        $f0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
    // 0x801D2DD4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D2DD8: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801D2DDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801D2DE0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801D2DE4: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x801D2DE8: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D2DEC: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    // 0x801D2DF0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x801D2DF4: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x801D2DF8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801D2DFC: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x801D2E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2E04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D2E08: jr          $ra
    // 0x801D2E0C: nop

    TRACE_RETURN()
    return;
    // 0x801D2E0C: nop

;}
RECOMP_FUNC void func_801F5A7C_5B198C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5A84: jal         0x801E3AC0
    // 0x801F5A88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5A88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5A94: jr          $ra
    // 0x801F5A98: nop

    TRACE_RETURN()
    return;
    // 0x801F5A98: nop

;}
RECOMP_FUNC void func_801F5600_5B1510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F560C: jal         0x801F5624
    // 0x801F5610: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_801F5624_5B1534(rdram, ctx);
        goto after_0;
    // 0x801F5610: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x801F5614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F561C: jr          $ra
    // 0x801F5620: nop

    TRACE_RETURN()
    return;
    // 0x801F5620: nop

;}
RECOMP_FUNC void func_801F7690_5B35A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F769C: jal         0x801FB2A4
    // 0x801F76A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_0;
    // 0x801F76A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F76A4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F76A8: jal         0x8003524C
    // 0x801F76AC: addiu       $a0, $a0, 0x77F4
    ctx->r4 = ADD32(ctx->r4, 0X77F4);
    func_8003524C_35E4C(rdram, ctx);
        goto after_1;
    // 0x801F76AC: addiu       $a0, $a0, 0x77F4
    ctx->r4 = ADD32(ctx->r4, 0X77F4);
    after_1:
    // 0x801F76B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F76B4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F76B8: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F76BC: lbu         $t6, 0x301E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X301E);
    // 0x801F76C0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F76C4: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F76C8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F76CC: sb          $t7, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r15;
    // 0x801F76D0: lbu         $t8, 0x301E($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X301E);
    // 0x801F76D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F76D8: bnel        $t8, $zero, L_801F7700
    if (ctx->r24 != 0) {
        // 0x801F76DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F7700;
    }
    goto skip_0;
    // 0x801F76DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F76E0: jal         0x801E7E90
    // 0x801F76E4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801E7E90_5A3DA0(rdram, ctx);
        goto after_2;
    // 0x801F76E4: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_2:
    // 0x801F76E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F76EC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F76F0: sw          $v0, -0x3A90($at)
    MEM_W(-0X3A90, ctx->r1) = ctx->r2;
    // 0x801F76F4: jal         0x8003521C
    // 0x801F76F8: addiu       $a0, $a0, 0x770C
    ctx->r4 = ADD32(ctx->r4, 0X770C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F76F8: addiu       $a0, $a0, 0x770C
    ctx->r4 = ADD32(ctx->r4, 0X770C);
    after_3:
    // 0x801F76FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7700:
    // 0x801F7700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7704: jr          $ra
    // 0x801F7708: nop

    TRACE_RETURN()
    return;
    // 0x801F7708: nop

;}
RECOMP_FUNC void func_801DDA88_599998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDA8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDA90: jal         0x801E7CC4
    // 0x801DDA94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7CC4_5A3BD4(rdram, ctx);
        goto after_0;
    // 0x801DDA94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDAA0: jr          $ra
    // 0x801DDAA4: nop

    TRACE_RETURN()
    return;
    // 0x801DDAA4: nop

;}
RECOMP_FUNC void func_801DDC38_599B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDC38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DDC3C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801DDC40: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801DDC44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DDC48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DDC4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DDC50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DDC54: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801DDC58: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801DDC5C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801DDC60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDC64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DDC68: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801DDC6C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801DDC70: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DDC74: lhu         $t0, 0x7DB4($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB4);
    // 0x801DDC78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801DDC7C: andi        $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 & 0X2000;
    // 0x801DDC80: bne         $t1, $zero, L_801DDC98
    if (ctx->r9 != 0) {
        // 0x801DDC84: nop
    
            goto L_801DDC98;
    }
    // 0x801DDC84: nop

    // 0x801DDC88: lhu         $t2, 0x98($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X98);
    // 0x801DDC8C: ori         $a2, $zero, 0x8080
    ctx->r6 = 0 | 0X8080;
    // 0x801DDC90: bnel        $t2, $zero, L_801DDCD8
    if (ctx->r10 != 0) {
        // 0x801DDC94: lw          $t3, 0x5C($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X5C);
            goto L_801DDCD8;
    }
    goto skip_0;
    // 0x801DDC94: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    skip_0:
L_801DDC98:
    // 0x801DDC98: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801DDC9C: jal         0x801E8724
    // 0x801DDCA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8724_5A4634(rdram, ctx);
        goto after_0;
    // 0x801DDCA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801DDCA4: jal         0x801E3324
    // 0x801DDCA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801DDCA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DDCAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDCB4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DDCB8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DDCBC: jal         0x801DAC7C
    // 0x801DDCC0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801DDCC0: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801DDCC4: jal         0x801CC454
    // 0x801DDCC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_3;
    // 0x801DDCC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DDCCC: b           L_801DDD4C
    // 0x801DDCD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DDD4C;
    // 0x801DDCD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDCD4: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
L_801DDCD8:
    // 0x801DDCD8: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801DDCDC: jal         0x801E3C34
    // 0x801DDCE0: lhu         $a0, 0x8($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X8);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_4;
    // 0x801DDCE0: lhu         $a0, 0x8($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X8);
    after_4:
    // 0x801DDCE4: bne         $v0, $zero, L_801DDD14
    if (ctx->r2 != 0) {
        // 0x801DDCE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DDD14;
    }
    // 0x801DDCE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDCEC: lbu         $t4, 0x90($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X90);
    // 0x801DDCF0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801DDCF4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801DDCF8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801DDCFC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801DDD00: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801DDD04: lhu         $t6, 0x7DB4($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7DB4);
    // 0x801DDD08: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x801DDD0C: beql        $t7, $zero, L_801DDD4C
    if (ctx->r15 == 0) {
        // 0x801DDD10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DDD4C;
    }
    goto skip_1;
    // 0x801DDD10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_801DDD14:
    // 0x801DDD14: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801DDD18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDD1C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x801DDD20: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x801DDD24: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801DDD28: jal         0x801DACDC
    // 0x801DDD2C: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801DDD2C: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x801DDD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DDD34: jal         0x801DD6E0
    // 0x801DDD38: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_6;
    // 0x801DDD38: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_6:
    // 0x801DDD3C: lbu         $t9, 0x30($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X30);
    // 0x801DDD40: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801DDD44: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x801DDD48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DDD4C:
    // 0x801DDD4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DDD50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DDD54: jr          $ra
    // 0x801DDD58: nop

    TRACE_RETURN()
    return;
    // 0x801DDD58: nop

;}
RECOMP_FUNC void func_801CD310_589220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD310: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x801CD314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD31C: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x801CD320: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CD324: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x801CD328: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801CD32C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801CD330: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x801CD334: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x801CD338: lbu         $t8, 0x61($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X61);
    // 0x801CD33C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801CD340: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801CD344: beql        $t8, $zero, L_801CD360
    if (ctx->r24 == 0) {
        // 0x801CD348: lw          $t9, 0x5C($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X5C);
            goto L_801CD360;
    }
    goto skip_0;
    // 0x801CD348: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    skip_0:
    // 0x801CD34C: jal         0x801CEAD4
    // 0x801CD350: addiu       $a1, $a3, 0x68
    ctx->r5 = ADD32(ctx->r7, 0X68);
    func_801CEAD4_58A9E4(rdram, ctx);
        goto after_0;
    // 0x801CD350: addiu       $a1, $a3, 0x68
    ctx->r5 = ADD32(ctx->r7, 0X68);
    after_0:
    // 0x801CD354: b           L_801CE3E4
    // 0x801CD358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CE3E4;
    // 0x801CD358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD35C: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
L_801CD360:
    // 0x801CD360: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CD364: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CD368: lbu         $t0, 0x18($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X18);
    // 0x801CD36C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CD370: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x801CD374: beql        $t1, $zero, L_801CD390
    if (ctx->r9 == 0) {
        // 0x801CD378: mfc1        $a1, $f12
        ctx->r5 = (int32_t)ctx->f12.u32l;
            goto L_801CD390;
    }
    goto skip_1;
    // 0x801CD378: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    skip_1:
    // 0x801CD37C: lw          $t2, -0x35D4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X35D4);
    // 0x801CD380: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD384: lwc1        $f12, 0xC($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0XC);
    // 0x801CD388: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x801CD38C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
L_801CD390:
    // 0x801CD390: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CD394: jal         0x801CE3F0
    // 0x801CD398: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    func_801CE3F0_58A300(rdram, ctx);
        goto after_1;
    // 0x801CD398: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801CD39C: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD3A0: sh          $v0, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r2;
    // 0x801CD3A4: lhu         $t3, 0x98($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X98);
    // 0x801CD3A8: addiu       $t4, $t3, -0x8E
    ctx->r12 = ADD32(ctx->r11, -0X8E);
    // 0x801CD3AC: sltiu       $at, $t4, 0x12
    ctx->r1 = ctx->r12 < 0X12 ? 1 : 0;
    // 0x801CD3B0: beq         $at, $zero, L_801CD484
    if (ctx->r1 == 0) {
        // 0x801CD3B4: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_801CD484;
    }
    // 0x801CD3B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801CD3B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD3BC: addu        $at, $at, $t4
    gpr jr_addend_801CD3C4 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801CD3C0: lw          $t4, -0x57A4($at)
    ctx->r12 = ADD32(ctx->r1, -0X57A4);
    // 0x801CD3C4: jr          $t4
    // 0x801CD3C8: nop

    switch (jr_addend_801CD3C4 >> 2) {
        case 0: goto L_801CD450; break;
        case 1: goto L_801CD484; break;
        case 2: goto L_801CD484; break;
        case 3: goto L_801CD484; break;
        case 4: goto L_801CD484; break;
        case 5: goto L_801CD484; break;
        case 6: goto L_801CD420; break;
        case 7: goto L_801CD3CC; break;
        case 8: goto L_801CD484; break;
        case 9: goto L_801CD484; break;
        case 10: goto L_801CD484; break;
        case 11: goto L_801CD3F0; break;
        case 12: goto L_801CD3CC; break;
        case 13: goto L_801CD484; break;
        case 14: goto L_801CD484; break;
        case 15: goto L_801CD484; break;
        case 16: goto L_801CD484; break;
        case 17: goto L_801CD484; break;
        default: switch_error(__func__, 0x801CD3C4, 0x8020A85C);
    }
    // 0x801CD3C8: nop

L_801CD3CC:
    // 0x801CD3CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD3D0: lwc1        $f6, -0x575C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X575C);
    // 0x801CD3D4: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x801CD3D8: sh          $t5, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r13;
    // 0x801CD3DC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CD3E0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801CD3E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CD3E8: b           L_801CD4A4
    // 0x801CD3EC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
        goto L_801CD4A4;
    // 0x801CD3EC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
L_801CD3F0:
    // 0x801CD3F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD3F4: lwc1        $f4, -0x5758($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5758);
    // 0x801CD3F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD3FC: ldc1        $f8, -0x5750($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5750);
    // 0x801CD400: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD404: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x801CD408: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CD40C: sh          $t6, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r14;
    // 0x801CD410: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801CD414: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801CD418: b           L_801CD4A4
    // 0x801CD41C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
        goto L_801CD4A4;
    // 0x801CD41C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_801CD420:
    // 0x801CD420: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD424: lwc1        $f6, -0x5748($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5748);
    // 0x801CD428: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD42C: ldc1        $f10, -0x5740($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5740);
    // 0x801CD430: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CD434: addiu       $t7, $zero, 0x90
    ctx->r15 = ADD32(0, 0X90);
    // 0x801CD438: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CD43C: sh          $t7, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r15;
    // 0x801CD440: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801CD444: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CD448: b           L_801CD4A4
    // 0x801CD44C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
        goto L_801CD4A4;
    // 0x801CD44C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_801CD450:
    // 0x801CD450: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD454: lwc1        $f8, -0x5738($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5738);
    // 0x801CD458: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801CD45C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CD460: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CD464: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CD468: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x801CD46C: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801CD470: sh          $t8, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r24;
    // 0x801CD474: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801CD478: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CD47C: b           L_801CD4A4
    // 0x801CD480: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
        goto L_801CD4A4;
    // 0x801CD480: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
L_801CD484:
    // 0x801CD484: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD488: lwc1        $f10, -0x5734($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5734);
    // 0x801CD48C: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x801CD490: sh          $t9, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r25;
    // 0x801CD494: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD498: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801CD49C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CD4A0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_801CD4A4:
    // 0x801CD4A4: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    // 0x801CD4A8: sh          $a1, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r5;
    // 0x801CD4AC: jal         0x80003EA0
    // 0x801CD4B0: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x801CD4B0: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CD4B4: jal         0x80003EA0
    // 0x801CD4B8: lhu         $a0, 0x6C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6C);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x801CD4B8: lhu         $a0, 0x6C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6C);
    after_3:
    // 0x801CD4BC: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD4C0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x801CD4C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD4C8: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD4CC: lbu         $v0, 0x59($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X59);
    // 0x801CD4D0: beq         $v0, $zero, L_801CD524
    if (ctx->r2 == 0) {
        // 0x801CD4D4: andi        $t0, $v0, 0x80
        ctx->r8 = ctx->r2 & 0X80;
            goto L_801CD524;
    }
    // 0x801CD4D4: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x801CD4D8: beq         $t0, $zero, L_801CD508
    if (ctx->r8 == 0) {
        // 0x801CD4DC: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_801CD508;
    }
    // 0x801CD4DC: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801CD4E0: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x801CD4E4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD4E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CD4EC: lwc1        $f8, 0x20($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X20);
    // 0x801CD4F0: lwc1        $f6, 0x54($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X54);
    // 0x801CD4F4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801CD4F8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801CD4FC: nop

    // 0x801CD500: bc1fl       L_801CD528
    if (!c1cs) {
        // 0x801CD504: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CD528;
    }
    goto skip_2;
    // 0x801CD504: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_2:
L_801CD508:
    // 0x801CD508: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD50C: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD510: swc1        $f16, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f16.u32l;
    // 0x801CD514: swc1        $f16, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f16.u32l;
    // 0x801CD518: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CD51C: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CD520: lbu         $v0, 0x59($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X59);
L_801CD524:
    // 0x801CD524: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_801CD528:
    // 0x801CD528: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x801CD52C: bne         $v0, $zero, L_801CD554
    if (ctx->r2 != 0) {
        // 0x801CD530: sh          $zero, 0xE0($sp)
        MEM_H(0XE0, ctx->r29) = 0;
            goto L_801CD554;
    }
    // 0x801CD530: sh          $zero, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = 0;
    // 0x801CD534: lhu         $t2, 0x98($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X98);
    // 0x801CD538: beql        $t2, $zero, L_801CD558
    if (ctx->r10 == 0) {
        // 0x801CD53C: lhu         $t3, 0x0($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X0);
            goto L_801CD558;
    }
    goto skip_3;
    // 0x801CD53C: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    skip_3:
    // 0x801CD540: lwc1        $f8, 0xA4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XA4);
    // 0x801CD544: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x801CD548: nop

    // 0x801CD54C: bc1tl       L_801CD568
    if (c1cs) {
        // 0x801CD550: lwc1        $f10, 0x88($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X88);
            goto L_801CD568;
    }
    goto skip_4;
    // 0x801CD550: lwc1        $f10, 0x88($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X88);
    skip_4:
L_801CD554:
    // 0x801CD554: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
L_801CD558:
    // 0x801CD558: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x801CD55C: beql        $t4, $zero, L_801CDE40
    if (ctx->r12 == 0) {
        // 0x801CD560: lbu         $t6, 0x18($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X18);
            goto L_801CDE40;
    }
    goto skip_5;
    // 0x801CD560: lbu         $t6, 0x18($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X18);
    skip_5:
    // 0x801CD564: lwc1        $f10, 0x88($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X88);
L_801CD568:
    // 0x801CD568: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD56C: ldc1        $f6, -0x5730($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5730);
    // 0x801CD570: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD574: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801CD578: nop

    // 0x801CD57C: bc1fl       L_801CD5A4
    if (!c1cs) {
        // 0x801CD580: lwc1        $f8, 0x68($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
            goto L_801CD5A4;
    }
    goto skip_6;
    // 0x801CD580: lwc1        $f8, 0x68($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
    skip_6:
    // 0x801CD584: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CD588: swc1        $f16, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f16.u32l;
    // 0x801CD58C: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CD590: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD594: addiu       $t5, $a3, 0x84
    ctx->r13 = ADD32(ctx->r7, 0X84);
    // 0x801CD598: b           L_801CD684
    // 0x801CD59C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
        goto L_801CD684;
    // 0x801CD59C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801CD5A0: lwc1        $f8, 0x68($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
L_801CD5A4:
    // 0x801CD5A4: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x801CD5A8: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x801CD5AC: lwc1        $f10, 0x6C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CD5B0: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x801CD5B4: lwc1        $f4, 0x70($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CD5B8: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CD5BC: jal         0x8001D394
    // 0x801CD5C0: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801CD5C0: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801CD5C4: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD5C8: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x801CD5CC: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CD5D0: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CD5D4: jal         0x8001D898
    // 0x801CD5D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001D898_1E498(rdram, ctx);
        goto after_5;
    // 0x801CD5D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x801CD5DC: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801CD5E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD5E4: ldc1        $f6, -0x5728($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5728);
    // 0x801CD5E8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CD5EC: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD5F0: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x801CD5F4: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CD5F8: bc1fl       L_801CD624
    if (!c1cs) {
        // 0x801CD5FC: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_801CD624;
    }
    goto skip_7;
    // 0x801CD5FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_7:
    // 0x801CD600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD604: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD608: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD60C: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD610: swc1        $f0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f0.u32l;
    // 0x801CD614: swc1        $f0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f0.u32l;
    // 0x801CD618: b           L_801CD684
    // 0x801CD61C: swc1        $f0, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f0.u32l;
        goto L_801CD684;
    // 0x801CD61C: swc1        $f0, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f0.u32l;
    // 0x801CD620: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_801CD624:
    // 0x801CD624: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CD628: jal         0x8001D394
    // 0x801CD62C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_6;
    // 0x801CD62C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x801CD630: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD634: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CD638: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD63C: jal         0x8001D718
    // 0x801CD640: addiu       $a1, $a3, 0x68
    ctx->r5 = ADD32(ctx->r7, 0X68);
    func_8001D718_1E318(rdram, ctx);
        goto after_7;
    // 0x801CD640: addiu       $a1, $a3, 0x68
    ctx->r5 = ADD32(ctx->r7, 0X68);
    after_7:
    // 0x801CD644: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD648: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD64C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CD650: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD654: lwc1        $f8, 0x68($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CD658: lwc1        $f4, 0x6C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CD65C: lwc1        $f6, 0xB0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CD660: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801CD664: swc1        $f10, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f10.u32l;
    // 0x801CD668: lwc1        $f8, 0xB0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CD66C: lwc1        $f10, 0x70($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CD670: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801CD674: swc1        $f6, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f6.u32l;
    // 0x801CD678: lwc1        $f4, 0xB0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CD67C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801CD680: swc1        $f8, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f8.u32l;
L_801CD684:
    // 0x801CD684: lbu         $t6, 0xAA($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XAA);
    // 0x801CD688: bnel        $t6, $zero, L_801CD6E4
    if (ctx->r14 != 0) {
        // 0x801CD68C: lbu         $t7, 0x18($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X18);
            goto L_801CD6E4;
    }
    goto skip_8;
    // 0x801CD68C: lbu         $t7, 0x18($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X18);
    skip_8:
    // 0x801CD690: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
    // 0x801CD694: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x801CD698: beq         $v0, $at, L_801CD6E0
    if (ctx->r2 == ctx->r1) {
        // 0x801CD69C: addiu       $at, $zero, 0x95
        ctx->r1 = ADD32(0, 0X95);
            goto L_801CD6E0;
    }
    // 0x801CD69C: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x801CD6A0: beq         $v0, $at, L_801CD6E0
    if (ctx->r2 == ctx->r1) {
        // 0x801CD6A4: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_801CD6E0;
    }
    // 0x801CD6A4: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x801CD6A8: beq         $v0, $at, L_801CD6E0
    if (ctx->r2 == ctx->r1) {
        // 0x801CD6AC: lwc1        $f6, 0x64($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
            goto L_801CD6E0;
    }
    // 0x801CD6AC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CD6B0: lwc1        $f0, 0x88($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X88);
    // 0x801CD6B4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CD6B8: nop

    // 0x801CD6BC: bc1fl       L_801CD6D0
    if (!c1cs) {
        // 0x801CD6C0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CD6D0;
    }
    goto skip_9;
    // 0x801CD6C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_9:
    // 0x801CD6C4: b           L_801CD6D0
    // 0x801CD6C8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CD6D0;
    // 0x801CD6C8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CD6CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CD6D0:
    // 0x801CD6D0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801CD6D4: nop

    // 0x801CD6D8: bc1fl       L_801CD6F4
    if (!c1cs) {
        // 0x801CD6DC: lbu         $t9, 0x18($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X18);
            goto L_801CD6F4;
    }
    goto skip_10;
    // 0x801CD6DC: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
    skip_10:
L_801CD6E0:
    // 0x801CD6E0: lbu         $t7, 0x18($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X18);
L_801CD6E4:
    // 0x801CD6E4: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x801CD6E8: b           L_801CD6FC
    // 0x801CD6EC: sb          $t8, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r24;
        goto L_801CD6FC;
    // 0x801CD6EC: sb          $t8, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r24;
    // 0x801CD6F0: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
L_801CD6F4:
    // 0x801CD6F4: andi        $t0, $t9, 0xFFFD
    ctx->r8 = ctx->r25 & 0XFFFD;
    // 0x801CD6F8: sb          $t0, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r8;
L_801CD6FC:
    // 0x801CD6FC: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD700: lbu         $v0, 0x18($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X18);
    // 0x801CD704: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x801CD708: bnel        $t1, $zero, L_801CD7CC
    if (ctx->r9 != 0) {
        // 0x801CD70C: lwc1        $f12, 0x74($a3)
        ctx->f12.u32l = MEM_W(ctx->r7, 0X74);
            goto L_801CD7CC;
    }
    goto skip_11;
    // 0x801CD70C: lwc1        $f12, 0x74($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X74);
    skip_11:
    // 0x801CD710: bnel        $v0, $zero, L_801CD7C0
    if (ctx->r2 != 0) {
        // 0x801CD714: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CD7C0;
    }
    goto skip_12;
    // 0x801CD714: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_12:
    // 0x801CD718: lwc1        $f4, 0xB0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CD71C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD720: ldc1        $f10, -0x5720($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5720);
    // 0x801CD724: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD728: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x801CD72C: nop

    // 0x801CD730: bc1fl       L_801CD7C0
    if (!c1cs) {
        // 0x801CD734: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CD7C0;
    }
    goto skip_13;
    // 0x801CD734: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_13:
    // 0x801CD738: lhu         $t2, 0xA($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XA);
    // 0x801CD73C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x801CD740: addiu       $a0, $a3, 0x68
    ctx->r4 = ADD32(ctx->r7, 0X68);
    // 0x801CD744: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x801CD748: beq         $t3, $at, L_801CD7BC
    if (ctx->r11 == ctx->r1) {
        // 0x801CD74C: addiu       $a1, $sp, 0xA4
        ctx->r5 = ADD32(ctx->r29, 0XA4);
            goto L_801CD7BC;
    }
    // 0x801CD74C: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CD750: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD754: jal         0x8001D898
    // 0x801CD758: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_8001D898_1E498(rdram, ctx);
        goto after_8;
    // 0x801CD758: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_8:
    // 0x801CD75C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CD760: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CD764: jal         0x8001D394
    // 0x801CD768: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_9;
    // 0x801CD768: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x801CD76C: beq         $v0, $zero, L_801CD7BC
    if (ctx->r2 == 0) {
        // 0x801CD770: lw          $a3, 0xE8($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XE8);
            goto L_801CD7BC;
    }
    // 0x801CD770: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD774: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CD778: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x801CD77C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD780: jal         0x8001D718
    // 0x801CD784: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_8001D718_1E318(rdram, ctx);
        goto after_10;
    // 0x801CD784: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_10:
    // 0x801CD788: jal         0x80003E10
    // 0x801CD78C: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    func_80003E10_4A10(rdram, ctx);
        goto after_11;
    // 0x801CD78C: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    after_11:
    // 0x801CD790: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801CD794: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x801CD798: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD79C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x801CD7A0: nop

    // 0x801CD7A4: bc1fl       L_801CD7C0
    if (!c1cs) {
        // 0x801CD7A8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CD7C0;
    }
    goto skip_14;
    // 0x801CD7A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_14:
    // 0x801CD7AC: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD7B0: lbu         $t4, 0x18($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X18);
    // 0x801CD7B4: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x801CD7B8: sb          $t5, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r13;
L_801CD7BC:
    // 0x801CD7BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_801CD7C0:
    // 0x801CD7C0: b           L_801CD808
    // 0x801CD7C4: lwc1        $f8, 0x78($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X78);
        goto L_801CD808;
    // 0x801CD7C4: lwc1        $f8, 0x78($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CD7C8: lwc1        $f12, 0x74($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X74);
L_801CD7CC:
    // 0x801CD7CC: lwc1        $f14, 0x78($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CD7D0: lwc1        $f2, 0x7C($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X7C);
    // 0x801CD7D4: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CD7D8: lhu         $t6, 0xE6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XE6);
    // 0x801CD7DC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CD7E0: sh          $t6, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r14;
    // 0x801CD7E4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD7E8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801CD7EC: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CD7F0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CD7F4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x801CD7F8: swc1        $f16, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f16.u32l;
    // 0x801CD7FC: swc1        $f16, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f16.u32l;
    // 0x801CD800: swc1        $f16, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f16.u32l;
    // 0x801CD804: lwc1        $f8, 0x78($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X78);
L_801CD808:
    // 0x801CD808: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x801CD80C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD810: lwc1        $f10, -0x5718($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5718);
    // 0x801CD814: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801CD818: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CD81C: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x801CD820: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CD824: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD828: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801CD82C: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x801CD830: jal         0x8001D898
    // 0x801CD834: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_12;
    // 0x801CD834: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801CD838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CD83C: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CD840: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801CD844: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD848: ldc1        $f6, -0x5710($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5710);
    // 0x801CD84C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801CD850: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD854: lwc1        $f14, 0xA4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CD858: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801CD85C: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CD860: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x801CD864: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD868: div.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x801CD86C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CD870: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x801CD874: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CD878: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x801CD87C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801CD880: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x801CD884: jal         0x8001D718
    // 0x801CD888: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_13;
    // 0x801CD888: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x801CD88C: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801CD890: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CD894: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CD898: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801CD89C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x801CD8A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD8A4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CD8A8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CD8AC: bc1fl       L_801CD8C0
    if (!c1cs) {
        // 0x801CD8B0: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_801CD8C0;
    }
    goto skip_15;
    // 0x801CD8B0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_15:
    // 0x801CD8B4: b           L_801CD8C0
    // 0x801CD8B8: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_801CD8C0;
    // 0x801CD8B8: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x801CD8BC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_801CD8C0:
    // 0x801CD8C0: ldc1        $f4, -0x5708($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5708);
    // 0x801CD8C4: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801CD8C8: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x801CD8CC: nop

    // 0x801CD8D0: bc1f        L_801CD8E4
    if (!c1cs) {
        // 0x801CD8D4: nop
    
            goto L_801CD8E4;
    }
    // 0x801CD8D4: nop

    // 0x801CD8D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD8DC: b           L_801CD90C
    // 0x801CD8E0: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
        goto L_801CD90C;
    // 0x801CD8E0: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
L_801CD8E4:
    // 0x801CD8E4: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801CD8E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD8EC: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x801CD8F0: div.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801CD8F4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801CD8F8: nop

    // 0x801CD8FC: bc1fl       L_801CD90C
    if (!c1cs) {
        // 0x801CD900: lhu         $v0, 0x98($a3)
        ctx->r2 = MEM_HU(ctx->r7, 0X98);
            goto L_801CD90C;
    }
    goto skip_16;
    // 0x801CD900: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
    skip_16:
    // 0x801CD904: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x801CD908: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
L_801CD90C:
    // 0x801CD90C: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x801CD910: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801CD914: beq         $v0, $at, L_801CD920
    if (ctx->r2 == ctx->r1) {
        // 0x801CD918: addiu       $at, $zero, 0x95
        ctx->r1 = ADD32(0, 0X95);
            goto L_801CD920;
    }
    // 0x801CD918: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x801CD91C: bne         $v0, $at, L_801CD930
    if (ctx->r2 != ctx->r1) {
        // 0x801CD920: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801CD930;
    }
L_801CD920:
    // 0x801CD920: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CD924: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CD928: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD92C: nop

L_801CD930:
    // 0x801CD930: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801CD934: lwc1        $f10, 0x74($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801CD938: lwc1        $f2, 0x68($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CD93C: lwc1        $f14, 0x6C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CD940: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801CD944: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CD948: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD94C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801CD950: lwc1        $f4, 0x78($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CD954: swc1        $f8, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f8.u32l;
    // 0x801CD958: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801CD95C: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CD960: nop

    // 0x801CD964: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801CD968: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CD96C: lwc1        $f8, 0x7C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X7C);
    // 0x801CD970: swc1        $f10, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f10.u32l;
    // 0x801CD974: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801CD978: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801CD97C: nop

    // 0x801CD980: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801CD984: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CD988: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD98C: nop

    // 0x801CD990: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CD994: swc1        $f4, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f4.u32l;
    // 0x801CD998: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CD99C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801CD9A0: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CD9A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CD9A8: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801CD9AC: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CD9B0: lbu         $v0, 0x18($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X18);
    // 0x801CD9B4: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x801CD9B8: beq         $t7, $zero, L_801CD9C8
    if (ctx->r15 == 0) {
        // 0x801CD9BC: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_801CD9C8;
    }
    // 0x801CD9BC: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x801CD9C0: beql        $t8, $zero, L_801CDC74
    if (ctx->r24 == 0) {
        // 0x801CD9C4: lwc1        $f10, 0x74($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X74);
            goto L_801CDC74;
    }
    goto skip_17;
    // 0x801CD9C4: lwc1        $f10, 0x74($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X74);
    skip_17:
L_801CD9C8:
    // 0x801CD9C8: ldc1        $f8, -0x5700($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5700);
    // 0x801CD9CC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801CD9D0: addiu       $a0, $a3, 0x74
    ctx->r4 = ADD32(ctx->r7, 0X74);
    // 0x801CD9D4: c.le.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d <= ctx->f8.d;
    // 0x801CD9D8: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CD9DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CD9E0: bc1f        L_801CDA20
    if (!c1cs) {
        // 0x801CD9E4: nop
    
            goto L_801CDA20;
    }
    // 0x801CD9E4: nop

    // 0x801CD9E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CD9EC: nop

    // 0x801CD9F0: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CD9F4: swc1        $f16, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f16.u32l;
    // 0x801CD9F8: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CD9FC: lbu         $v0, 0x18($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDA00: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x801CDA04: beq         $t9, $zero, L_801CDA10
    if (ctx->r25 == 0) {
        // 0x801CDA08: ori         $t0, $v0, 0x8
        ctx->r8 = ctx->r2 | 0X8;
            goto L_801CDA10;
    }
    // 0x801CDA08: ori         $t0, $v0, 0x8
    ctx->r8 = ctx->r2 | 0X8;
    // 0x801CDA0C: sb          $t0, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r8;
L_801CDA10:
    // 0x801CDA10: lwc1        $f2, 0x68($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CDA14: lwc1        $f14, 0x6C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CDA18: b           L_801CDC70
    // 0x801CDA1C: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
        goto L_801CDC70;
    // 0x801CDA1C: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
L_801CDA20:
    // 0x801CDA20: jal         0x8001D898
    // 0x801CDA24: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_8001D898_1E498(rdram, ctx);
        goto after_14;
    // 0x801CDA24: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_14:
    // 0x801CDA28: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801CDA2C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CDA30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDA34: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CDA38: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CDA3C: ldc1        $f4, -0x56F8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X56F8);
    // 0x801CDA40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDA44: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x801CDA48: div.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f4.d);
    // 0x801CDA4C: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801CDA50: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x801CDA54: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CDA58: lbu         $t1, 0x18($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDA5C: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x801CDA60: beql        $t2, $zero, L_801CDA78
    if (ctx->r10 == 0) {
        // 0x801CDA64: lhu         $t3, 0x0($v1)
        ctx->r11 = MEM_HU(ctx->r3, 0X0);
            goto L_801CDA78;
    }
    goto skip_18;
    // 0x801CDA64: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    skip_18:
    // 0x801CDA68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CDA6C: b           L_801CDB5C
    // 0x801CDA70: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
        goto L_801CDB5C;
    // 0x801CDA70: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x801CDA74: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
L_801CDA78:
    // 0x801CDA78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CDA7C: addiu       $a0, $a3, 0x68
    ctx->r4 = ADD32(ctx->r7, 0X68);
    // 0x801CDA80: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x801CDA84: beq         $t4, $zero, L_801CDA94
    if (ctx->r12 == 0) {
        // 0x801CDA88: addiu       $a1, $sp, 0xC0
        ctx->r5 = ADD32(ctx->r29, 0XC0);
            goto L_801CDA94;
    }
    // 0x801CDA88: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x801CDA8C: b           L_801CDA98
    // 0x801CDA90: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
        goto L_801CDA98;
    // 0x801CDA90: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
L_801CDA94:
    // 0x801CDA94: lwc1        $f2, 0x7DBC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DBC);
L_801CDA98:
    // 0x801CDA98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDA9C: ldc1        $f4, -0x56F0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X56F0);
    // 0x801CDAA0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801CDAA4: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CDAA8: div.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f4.d);
    // 0x801CDAAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CDAB0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CDAB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CDAB8: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CDABC: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CDAC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDAC4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CDAC8: sub.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f8.d - ctx->f10.d;
    // 0x801CDACC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CDAD0: ldc1        $f10, -0x56E8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X56E8);
    // 0x801CDAD4: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDAD8: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CDADC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CDAE0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801CDAE4: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x801CDAE8: nop

    // 0x801CDAEC: bc1fl       L_801CDB5C
    if (!c1cs) {
        // 0x801CDAF0: mtc1        $zero, $f9
        ctx->f_odd[(9 - 1) * 2] = 0;
            goto L_801CDB5C;
    }
    goto skip_19;
    // 0x801CDAF0: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    skip_19:
    // 0x801CDAF4: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CDAF8: jal         0x8001D898
    // 0x801CDAFC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_15;
    // 0x801CDAFC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x801CDB00: lwc1        $f12, 0xC0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801CDB04: jal         0x800040A8
    // 0x801CDB08: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    func_800040A8_4CA8(rdram, ctx);
        goto after_16;
    // 0x801CDB08: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    after_16:
    // 0x801CDB0C: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CDB10: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CDB14: jal         0x800040A8
    // 0x801CDB18: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_800040A8_4CA8(rdram, ctx);
        goto after_17;
    // 0x801CDB18: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_17:
    // 0x801CDB1C: lhu         $t5, 0x32($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X32);
    // 0x801CDB20: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CDB24: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CDB28: subu        $t6, $t5, $v0
    ctx->r14 = SUB32(ctx->r13, ctx->r2);
    // 0x801CDB2C: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x801CDB30: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x801CDB34: slti        $at, $t8, 0x81
    ctx->r1 = SIGNED(ctx->r24) < 0X81 ? 1 : 0;
    // 0x801CDB38: bnel        $at, $zero, L_801CDB5C
    if (ctx->r1 != 0) {
        // 0x801CDB3C: mtc1        $zero, $f9
        ctx->f_odd[(9 - 1) * 2] = 0;
            goto L_801CDB5C;
    }
    goto skip_20;
    // 0x801CDB3C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    skip_20:
    // 0x801CDB40: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CDB44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDB48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CDB4C: swc1        $f12, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f12.u32l;
    // 0x801CDB50: swc1        $f12, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f12.u32l;
    // 0x801CDB54: swc1        $f12, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f12.u32l;
    // 0x801CDB58: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
L_801CDB5C:
    // 0x801CDB5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CDB60: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDB64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDB68: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801CDB6C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CDB70: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CDB74: bc1f        L_801CDB84
    if (!c1cs) {
        // 0x801CDB78: nop
    
            goto L_801CDB84;
    }
    // 0x801CDB78: nop

    // 0x801CDB7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CDB80: nop

L_801CDB84:
    // 0x801CDB84: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801CDB88: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801CDB8C: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CDB90: lhu         $v0, 0x98($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X98);
    // 0x801CDB94: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x801CDB98: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801CDB9C: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801CDBA0: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801CDBA4: beq         $v0, $at, L_801CDBB4
    if (ctx->r2 == ctx->r1) {
        // 0x801CDBA8: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_801CDBB4;
    }
    // 0x801CDBA8: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x801CDBAC: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x801CDBB0: bne         $v0, $at, L_801CDC0C
    if (ctx->r2 != ctx->r1) {
        // 0x801CDBB4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CDC0C;
    }
L_801CDBB4:
    // 0x801CDBB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDBB8: ldc1        $f2, -0x56E0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X56E0);
    // 0x801CDBBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CDBC0: lwc1        $f4, 0x7DBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801CDBC4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801CDBC8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CDBCC: c.lt.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d < ctx->f2.d;
    // 0x801CDBD0: nop

    // 0x801CDBD4: bc1tl       L_801CDC28
    if (c1cs) {
        // 0x801CDBD8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CDC28;
    }
    goto skip_21;
    // 0x801CDBD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_21:
    // 0x801CDBDC: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x801CDBE0: lw          $v0, 0x5C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X5C);
    // 0x801CDBE4: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x801CDBE8: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x801CDBEC: beql        $t1, $zero, L_801CDC10
    if (ctx->r9 == 0) {
        // 0x801CDBF0: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_801CDC10;
    }
    goto skip_22;
    // 0x801CDBF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_22:
    // 0x801CDBF4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801CDBF8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDBFC: c.lt.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d < ctx->f2.d;
    // 0x801CDC00: nop

    // 0x801CDC04: bc1tl       L_801CDC28
    if (c1cs) {
        // 0x801CDC08: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801CDC28;
    }
    goto skip_23;
    // 0x801CDC08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_23:
L_801CDC0C:
    // 0x801CDC0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_801CDC10:
    // 0x801CDC10: nop

    // 0x801CDC14: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801CDC18: nop

    // 0x801CDC1C: bc1fl       L_801CDC30
    if (!c1cs) {
        // 0x801CDC20: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_801CDC30;
    }
    goto skip_24;
    // 0x801CDC20: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_24:
    // 0x801CDC24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_801CDC28:
    // 0x801CDC28: nop

    // 0x801CDC2C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_801CDC30:
    // 0x801CDC30: nop

    // 0x801CDC34: bc1fl       L_801CDC44
    if (!c1cs) {
        // 0x801CDC38: lwc1        $f8, 0x68($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
            goto L_801CDC44;
    }
    goto skip_25;
    // 0x801CDC38: lwc1        $f8, 0x68($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
    skip_25:
    // 0x801CDC3C: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x801CDC40: lwc1        $f8, 0x68($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X68);
L_801CDC44:
    // 0x801CDC44: lwc1        $f10, 0x6C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CDC48: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801CDC4C: lwc1        $f8, 0x70($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CDC50: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CDC54: swc1        $f6, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f6.u32l;
    // 0x801CDC58: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801CDC5C: lwc1        $f2, 0x68($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CDC60: swc1        $f4, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f4.u32l;
    // 0x801CDC64: lwc1        $f14, 0x6C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CDC68: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
    // 0x801CDC6C: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
L_801CDC70:
    // 0x801CDC70: lwc1        $f10, 0x74($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X74);
L_801CDC74:
    // 0x801CDC74: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801CDC78: lwc1        $f8, 0x7C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X7C);
    // 0x801CDC7C: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x801CDC80: lwc1        $f10, 0x78($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CDC84: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x801CDC88: swc1        $f4, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f4.u32l;
    // 0x801CDC8C: lwc1        $f2, 0x68($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CDC90: add.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x801CDC94: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
    // 0x801CDC98: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CDC9C: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CDCA0: swc1        $f4, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f4.u32l;
    // 0x801CDCA4: lwc1        $f14, 0x6C($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CDCA8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CDCAC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801CDCB0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CDCB4: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801CDCB8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CDCBC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801CDCC0: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801CDCC4: bc1fl       L_801CDCFC
    if (!c1cs) {
        // 0x801CDCC8: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDCFC;
    }
    goto skip_26;
    // 0x801CDCC8: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_26:
    // 0x801CDCCC: div.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801CDCD0: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x801CDCD4: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CDCD8: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801CDCDC: swc1        $f4, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f4.u32l;
    // 0x801CDCE0: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CDCE4: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x801CDCE8: swc1        $f8, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f8.u32l;
    // 0x801CDCEC: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CDCF0: mul.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x801CDCF4: swc1        $f4, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f4.u32l;
    // 0x801CDCF8: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
L_801CDCFC:
    // 0x801CDCFC: lbu         $t2, 0x18($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDD00: bnel        $t2, $zero, L_801CDDB0
    if (ctx->r10 != 0) {
        // 0x801CDD04: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDDB0;
    }
    goto skip_27;
    // 0x801CDD04: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_27:
    // 0x801CDD08: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x801CDD0C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x801CDD10: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CDD14: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x801CDD18: bne         $t3, $at, L_801CDD40
    if (ctx->r11 != ctx->r1) {
        // 0x801CDD1C: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_801CDD40;
    }
    // 0x801CDD1C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x801CDD20: jal         0x801E7DE8
    // 0x801CDD24: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_18;
    // 0x801CDD24: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_18:
    // 0x801CDD28: beq         $v0, $zero, L_801CDDAC
    if (ctx->r2 == 0) {
        // 0x801CDD2C: lw          $a3, 0xE8($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XE8);
            goto L_801CDDAC;
    }
    // 0x801CDD2C: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CDD30: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CDD34: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x801CDD38: andi        $t4, $v0, 0x1F
    ctx->r12 = ctx->r2 & 0X1F;
    // 0x801CDD3C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_801CDD40:
    // 0x801CDD40: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x801CDD44: beq         $v0, $at, L_801CDDAC
    if (ctx->r2 == ctx->r1) {
        // 0x801CDD48: lwc1        $f10, 0x4C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_801CDDAC;
    }
    // 0x801CDD48: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801CDD4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CDD50: nop

    // 0x801CDD54: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x801CDD58: nop

    // 0x801CDD5C: bc1fl       L_801CDDB0
    if (!c1cs) {
        // 0x801CDD60: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDDB0;
    }
    goto skip_28;
    // 0x801CDD60: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_28:
    // 0x801CDD64: lwc1        $f6, 0x6C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CDD68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CDD6C: nop

    // 0x801CDD70: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x801CDD74: nop

    // 0x801CDD78: bc1fl       L_801CDDB0
    if (!c1cs) {
        // 0x801CDD7C: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDDB0;
    }
    goto skip_29;
    // 0x801CDD7C: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_29:
    // 0x801CDD80: lwc1        $f10, 0x78($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CDD84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDD88: ldc1        $f6, -0x56D8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X56D8);
    // 0x801CDD8C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801CDD90: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x801CDD94: nop

    // 0x801CDD98: bc1fl       L_801CDDB0
    if (!c1cs) {
        // 0x801CDD9C: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDDB0;
    }
    goto skip_30;
    // 0x801CDD9C: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_30:
    // 0x801CDDA0: lbu         $t5, 0x18($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDDA4: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x801CDDA8: sb          $t6, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r14;
L_801CDDAC:
    // 0x801CDDAC: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
L_801CDDB0:
    // 0x801CDDB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CDDB4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CDDB8: lbu         $v0, 0x18($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDDBC: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x801CDDC0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x801CDDC4: beq         $t7, $zero, L_801CDE08
    if (ctx->r15 == 0) {
        // 0x801CDDC8: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_801CDE08;
    }
    // 0x801CDDC8: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x801CDDCC: beq         $t8, $zero, L_801CDE08
    if (ctx->r24 == 0) {
        // 0x801CDDD0: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_801CDE08;
    }
    // 0x801CDDD0: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x801CDDD4: bne         $t9, $zero, L_801CDE08
    if (ctx->r25 != 0) {
        // 0x801CDDD8: lwc1        $f4, 0xDC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_801CDE08;
    }
    // 0x801CDDD8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CDDDC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801CDDE0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CDDE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CDDE8: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801CDDEC: ori         $t0, $v0, 0x4
    ctx->r8 = ctx->r2 | 0X4;
    // 0x801CDDF0: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x801CDDF4: nop

    // 0x801CDDF8: bc1fl       L_801CDE0C
    if (!c1cs) {
        // 0x801CDDFC: andi        $t1, $v0, 0xFFFB
        ctx->r9 = ctx->r2 & 0XFFFB;
            goto L_801CDE0C;
    }
    goto skip_31;
    // 0x801CDDFC: andi        $t1, $v0, 0xFFFB
    ctx->r9 = ctx->r2 & 0XFFFB;
    skip_31:
    // 0x801CDE00: b           L_801CDE10
    // 0x801CDE04: sb          $t0, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r8;
        goto L_801CDE10;
    // 0x801CDE04: sb          $t0, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r8;
L_801CDE08:
    // 0x801CDE08: andi        $t1, $v0, 0xFFFB
    ctx->r9 = ctx->r2 & 0XFFFB;
L_801CDE0C:
    // 0x801CDE0C: sb          $t1, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r9;
L_801CDE10:
    // 0x801CDE10: lw          $t2, 0x5C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X5C);
    // 0x801CDE14: lbu         $t3, 0x18($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X18);
    // 0x801CDE18: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x801CDE1C: beq         $t4, $zero, L_801CDE34
    if (ctx->r12 == 0) {
        // 0x801CDE20: nop
    
            goto L_801CDE34;
    }
    // 0x801CDE20: nop

    // 0x801CDE24: swc1        $f16, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f16.u32l;
    // 0x801CDE28: swc1        $f16, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f16.u32l;
    // 0x801CDE2C: swc1        $f16, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f16.u32l;
    // 0x801CDE30: sh          $t5, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r13;
L_801CDE34:
    // 0x801CDE34: b           L_801CE124
    // 0x801CDE38: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
        goto L_801CE124;
    // 0x801CDE38: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CDE3C: lbu         $t6, 0x18($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X18);
L_801CDE40:
    // 0x801CDE40: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x801CDE44: sb          $t7, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r15;
    // 0x801CDE48: lwc1        $f6, 0x78($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X78);
    // 0x801CDE4C: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x801CDE50: nop

    // 0x801CDE54: bc1fl       L_801CDEC0
    if (!c1cs) {
        // 0x801CDE58: lw          $v1, 0x5C($a3)
        ctx->r3 = MEM_W(ctx->r7, 0X5C);
            goto L_801CDEC0;
    }
    goto skip_32;
    // 0x801CDE58: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    skip_32:
    // 0x801CDE5C: lwc1        $f4, 0x84($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X84);
    // 0x801CDE60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDE64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CDE68: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x801CDE6C: lwc1        $f10, 0x88($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X88);
    // 0x801CDE70: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CDE74: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x801CDE78: lwc1        $f8, 0x8C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8C);
    // 0x801CDE7C: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x801CDE80: swc1        $f14, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f14.u32l;
    // 0x801CDE84: swc1        $f14, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f14.u32l;
    // 0x801CDE88: swc1        $f6, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f6.u32l;
    // 0x801CDE8C: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CDE90: jal         0x801CE3F0
    // 0x801CDE94: lw          $a1, 0xF0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF0);
    func_801CE3F0_58A300(rdram, ctx);
        goto after_19;
    // 0x801CDE94: lw          $a1, 0xF0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF0);
    after_19:
    // 0x801CDE98: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CDE9C: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801CDEA0: sh          $v0, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r2;
    // 0x801CDEA4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CDEA8: swc1        $f4, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f4.u32l;
    // 0x801CDEAC: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801CDEB0: swc1        $f10, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f10.u32l;
    // 0x801CDEB4: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801CDEB8: swc1        $f8, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f8.u32l;
    // 0x801CDEBC: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
L_801CDEC0:
    // 0x801CDEC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDEC4: lwc1        $f0, 0xB0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CDEC8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CDECC: nop

    // 0x801CDED0: bc1fl       L_801CDEE4
    if (!c1cs) {
        // 0x801CDED4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801CDEE4;
    }
    goto skip_33;
    // 0x801CDED4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_33:
    // 0x801CDED8: b           L_801CDEE4
    // 0x801CDEDC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801CDEE4;
    // 0x801CDEDC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801CDEE0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801CDEE4:
    // 0x801CDEE4: ldc1        $f4, -0x56D0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X56D0);
    // 0x801CDEE8: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801CDEEC: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x801CDEF0: nop

    // 0x801CDEF4: bc1tl       L_801CE0B4
    if (c1cs) {
        // 0x801CDEF8: lwc1        $f10, 0x68($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
            goto L_801CE0B4;
    }
    goto skip_34;
    // 0x801CDEF8: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
    skip_34:
    // 0x801CDEFC: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
    // 0x801CDF00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDF04: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x801CDF08: bnel        $t9, $zero, L_801CE0B4
    if (ctx->r25 != 0) {
        // 0x801CDF0C: lwc1        $f10, 0x68($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
            goto L_801CE0B4;
    }
    goto skip_35;
    // 0x801CDF0C: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
    skip_35:
    // 0x801CDF10: lwc1        $f10, -0x56C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X56C8);
    // 0x801CDF14: addiu       $a0, $a3, 0x74
    ctx->r4 = ADD32(ctx->r7, 0X74);
    // 0x801CDF18: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CDF1C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801CDF20: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CDF24: bc1fl       L_801CDF3C
    if (!c1cs) {
        // 0x801CDF28: sw          $a2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r6;
            goto L_801CDF3C;
    }
    goto skip_36;
    // 0x801CDF28: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    skip_36:
    // 0x801CDF2C: swc1        $f14, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f14.u32l;
    // 0x801CDF30: b           L_801CE0B0
    // 0x801CDF34: swc1        $f14, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f14.u32l;
        goto L_801CE0B0;
    // 0x801CDF34: swc1        $f14, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f14.u32l;
    // 0x801CDF38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
L_801CDF3C:
    // 0x801CDF3C: jal         0x8001D898
    // 0x801CDF40: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_8001D898_1E498(rdram, ctx);
        goto after_20;
    // 0x801CDF40: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_20:
    // 0x801CDF44: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CDF48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CDF4C: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x801CDF50: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CDF54: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CDF58: addiu       $a0, $a3, 0x68
    ctx->r4 = ADD32(ctx->r7, 0X68);
    // 0x801CDF5C: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x801CDF60: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x801CDF64: beq         $t2, $zero, L_801CDF74
    if (ctx->r10 == 0) {
        // 0x801CDF68: nop
    
            goto L_801CDF74;
    }
    // 0x801CDF68: nop

    // 0x801CDF6C: b           L_801CDF78
    // 0x801CDF70: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
        goto L_801CDF78;
    // 0x801CDF70: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
L_801CDF74:
    // 0x801CDF74: lwc1        $f2, 0x7DBC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DBC);
L_801CDF78:
    // 0x801CDF78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDF7C: ldc1        $f6, -0x56C0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X56C0);
    // 0x801CDF80: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801CDF84: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CDF88: div.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x801CDF8C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CDF90: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CDF94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CDF98: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CDF9C: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CDFA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDFA4: sub.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d - ctx->f4.d;
    // 0x801CDFA8: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CDFAC: ldc1        $f4, -0x56B8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X56B8);
    // 0x801CDFB0: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x801CDFB4: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CDFB8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CDFBC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CDFC0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801CDFC4: nop

    // 0x801CDFC8: bc1fl       L_801CE040
    if (!c1cs) {
        // 0x801CDFCC: mtc1        $zero, $f7
        ctx->f_odd[(7 - 1) * 2] = 0;
            goto L_801CE040;
    }
    goto skip_37;
    // 0x801CDFCC: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    skip_37:
    // 0x801CDFD0: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CDFD4: jal         0x8001D898
    // 0x801CDFD8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_21;
    // 0x801CDFD8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_21:
    // 0x801CDFDC: lwc1        $f12, 0xC0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801CDFE0: jal         0x800040A8
    // 0x801CDFE4: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    func_800040A8_4CA8(rdram, ctx);
        goto after_22;
    // 0x801CDFE4: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    after_22:
    // 0x801CDFE8: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CDFEC: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CDFF0: jal         0x800040A8
    // 0x801CDFF4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_800040A8_4CA8(rdram, ctx);
        goto after_23;
    // 0x801CDFF4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_23:
    // 0x801CDFF8: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    // 0x801CDFFC: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CE000: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CE004: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x801CE008: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x801CE00C: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801CE010: slti        $at, $t6, 0x81
    ctx->r1 = SIGNED(ctx->r14) < 0X81 ? 1 : 0;
    // 0x801CE014: bnel        $at, $zero, L_801CE040
    if (ctx->r1 != 0) {
        // 0x801CE018: mtc1        $zero, $f7
        ctx->f_odd[(7 - 1) * 2] = 0;
            goto L_801CE040;
    }
    goto skip_38;
    // 0x801CE018: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    skip_38:
    // 0x801CE01C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CE020: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CE024: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CE028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CE02C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CE030: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
    // 0x801CE034: swc1        $f10, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f10.u32l;
    // 0x801CE038: swc1        $f4, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f4.u32l;
    // 0x801CE03C: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
L_801CE040:
    // 0x801CE040: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CE044: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x801CE048: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CE04C: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x801CE050: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CE054: bc1f        L_801CE064
    if (!c1cs) {
        // 0x801CE058: nop
    
            goto L_801CE064;
    }
    // 0x801CE058: nop

    // 0x801CE05C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CE060: nop

L_801CE064:
    // 0x801CE064: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801CE068: lwc1        $f0, 0xB0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x801CE06C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CE070: sub.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801CE074: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801CE078: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x801CE07C: nop

    // 0x801CE080: bc1fl       L_801CE094
    if (!c1cs) {
        // 0x801CE084: lwc1        $f10, 0x68($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
            goto L_801CE094;
    }
    goto skip_39;
    // 0x801CE084: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
    skip_39:
    // 0x801CE088: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CE08C: nop

    // 0x801CE090: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
L_801CE094:
    // 0x801CE094: lwc1        $f8, 0x70($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CE098: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CE09C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CE0A0: nop

    // 0x801CE0A4: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801CE0A8: swc1        $f4, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f4.u32l;
    // 0x801CE0AC: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
L_801CE0B0:
    // 0x801CE0B0: lwc1        $f10, 0x68($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X68);
L_801CE0B4:
    // 0x801CE0B4: lwc1        $f4, 0x74($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801CE0B8: lwc1        $f6, 0x70($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CE0BC: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801CE0C0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801CE0C4: lwc1        $f10, 0x7C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X7C);
    // 0x801CE0C8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CE0CC: swc1        $f8, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f8.u32l;
    // 0x801CE0D0: lwc1        $f2, 0x68($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CE0D4: swc1        $f4, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f4.u32l;
    // 0x801CE0D8: lwc1        $f12, 0x70($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CE0DC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CE0E0: nop

    // 0x801CE0E4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CE0E8: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801CE0EC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CE0F0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801CE0F4: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801CE0F8: bc1f        L_801CE120
    if (!c1cs) {
        // 0x801CE0FC: nop
    
            goto L_801CE120;
    }
    // 0x801CE0FC: nop

    // 0x801CE100: div.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801CE104: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x801CE108: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CE10C: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801CE110: swc1        $f8, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f8.u32l;
    // 0x801CE114: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CE118: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x801CE11C: swc1        $f10, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f10.u32l;
L_801CE120:
    // 0x801CE120: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
L_801CE124:
    // 0x801CE124: swc1        $f14, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f14.u32l;
    // 0x801CE128: addiu       $a0, $a3, 0xA8
    ctx->r4 = ADD32(ctx->r7, 0XA8);
    // 0x801CE12C: lbu         $t7, 0x19($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X19);
    // 0x801CE130: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x801CE134: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CE138: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x801CE13C: beql        $t8, $zero, L_801CE270
    if (ctx->r24 == 0) {
        // 0x801CE140: sb          $zero, 0x19($v1)
        MEM_B(0X19, ctx->r3) = 0;
            goto L_801CE270;
    }
    goto skip_40;
    // 0x801CE140: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
    skip_40:
    // 0x801CE144: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801CE148: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801CE14C: jal         0x8001D898
    // 0x801CE150: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    func_8001D898_1E498(rdram, ctx);
        goto after_24;
    // 0x801CE150: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    after_24:
    // 0x801CE154: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801CE158: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801CE15C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CE160: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801CE164: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x801CE168: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE16C: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801CE170: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CE174: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x801CE178: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CE17C: sqrt.s      $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = sqrtf(ctx->f14.fl);
    // 0x801CE180: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x801CE184: nop

    // 0x801CE188: bc1fl       L_801CE1A0
    if (!c1cs) {
        // 0x801CE18C: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_801CE1A0;
    }
    goto skip_41;
    // 0x801CE18C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_41:
    // 0x801CE190: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x801CE194: b           L_801CE1A4
    // 0x801CE198: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
        goto L_801CE1A4;
    // 0x801CE198: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
    // 0x801CE19C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_801CE1A0:
    // 0x801CE1A0: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_801CE1A4:
    // 0x801CE1A4: ldc1        $f4, -0x56B0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X56B0);
    // 0x801CE1A8: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE1AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE1B0: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x801CE1B4: nop

    // 0x801CE1B8: bc1f        L_801CE1F4
    if (!c1cs) {
        // 0x801CE1BC: nop
    
            goto L_801CE1F4;
    }
    // 0x801CE1BC: nop

    // 0x801CE1C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CE1C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE1C8: lwc1        $f8, -0x56A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X56A8);
    // 0x801CE1CC: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x801CE1D0: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x801CE1D4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801CE1D8: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CE1DC: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x801CE1E0: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x801CE1E4: jal         0x8001D718
    // 0x801CE1E8: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_25;
    // 0x801CE1E8: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    after_25:
    // 0x801CE1EC: b           L_801CE238
    // 0x801CE1F0: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
        goto L_801CE238;
    // 0x801CE1F0: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
L_801CE1F4:
    // 0x801CE1F4: ldc1        $f6, -0x56A0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X56A0);
    // 0x801CE1F8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801CE1FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE200: div.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x801CE204: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x801CE208: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x801CE20C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CE210: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x801CE214: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x801CE218: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x801CE21C: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x801CE220: nop

    // 0x801CE224: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x801CE228: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x801CE22C: jal         0x8001D718
    // 0x801CE230: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_26;
    // 0x801CE230: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    after_26:
    // 0x801CE234: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
L_801CE238:
    // 0x801CE238: lwc1        $f6, 0x68($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X68);
    // 0x801CE23C: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801CE240: lwc1        $f8, 0x6C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X6C);
    // 0x801CE244: lw          $v1, 0x5C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X5C);
    // 0x801CE248: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CE24C: swc1        $f4, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->f4.u32l;
    // 0x801CE250: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801CE254: lwc1        $f4, 0x70($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X70);
    // 0x801CE258: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801CE25C: swc1        $f10, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->f10.u32l;
    // 0x801CE260: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801CE264: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CE268: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
    // 0x801CE26C: sb          $zero, 0x19($v1)
    MEM_B(0X19, ctx->r3) = 0;
L_801CE270:
    // 0x801CE270: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x801CE274: lbu         $t0, 0x18($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X18);
    // 0x801CE278: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x801CE27C: beql        $t1, $zero, L_801CE3E0
    if (ctx->r9 == 0) {
        // 0x801CE280: lhu         $v0, 0xE6($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0XE6);
            goto L_801CE3E0;
    }
    goto skip_42;
    // 0x801CE280: lhu         $v0, 0xE6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XE6);
    skip_42:
    // 0x801CE284: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801CE288: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE28C: ldc1        $f8, -0x5698($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5698);
    // 0x801CE290: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801CE294: lhu         $t2, 0x94($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X94);
    // 0x801CE298: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801CE29C: addiu       $a0, $a3, 0x68
    ctx->r4 = ADD32(ctx->r7, 0X68);
    // 0x801CE2A0: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x801CE2A4: addiu       $a2, $a3, 0x84
    ctx->r6 = ADD32(ctx->r7, 0X84);
    // 0x801CE2A8: bc1f        L_801CE36C
    if (!c1cs) {
        // 0x801CE2AC: sh          $t2, 0xE6($sp)
        MEM_H(0XE6, ctx->r29) = ctx->r10;
            goto L_801CE36C;
    }
    // 0x801CE2AC: sh          $t2, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r10;
    // 0x801CE2B0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x801CE2B4: jal         0x8001D898
    // 0x801CE2B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001D898_1E498(rdram, ctx);
        goto after_27;
    // 0x801CE2B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_27:
    // 0x801CE2BC: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801CE2C0: lwc1        $f12, 0xC0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801CE2C4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CE2C8: nop

    // 0x801CE2CC: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CE2D0: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801CE2D4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CE2D8: jal         0x800040A8
    // 0x801CE2DC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    func_800040A8_4CA8(rdram, ctx);
        goto after_28;
    // 0x801CE2DC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    after_28:
    // 0x801CE2E0: lhu         $t3, 0xE0($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XE0);
    // 0x801CE2E4: sh          $v0, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r2;
    // 0x801CE2E8: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x801CE2EC: sh          $t4, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r12;
    // 0x801CE2F0: jal         0x80003E10
    // 0x801CE2F4: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_29;
    // 0x801CE2F4: andi        $a0, $t4, 0xFFFF
    ctx->r4 = ctx->r12 & 0XFFFF;
    after_29:
    // 0x801CE2F8: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CE2FC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801CE300: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE304: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CE308: lhu         $a3, 0xE4($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XE4);
    // 0x801CE30C: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x801CE310: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CE314: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801CE318: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801CE31C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801CE320: nop

    // 0x801CE324: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x801CE328: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
    // 0x801CE32C: jal         0x80003E10
    // 0x801CE330: sh          $t8, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r24;
    func_80003E10_4A10(rdram, ctx);
        goto after_30;
    // 0x801CE330: sh          $t8, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r24;
    after_30:
    // 0x801CE334: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801CE338: lhu         $a0, 0xE4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XE4);
    // 0x801CE33C: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CE340: jal         0x80003EA0
    // 0x801CE344: swc1        $f12, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f12.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_31;
    // 0x801CE344: swc1        $f12, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f12.u32l;
    after_31:
    // 0x801CE348: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801CE34C: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x801CE350: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE354: mul.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CE358: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CE35C: jal         0x8001D718
    // 0x801CE360: swc1        $f14, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f14.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_32;
    // 0x801CE360: swc1        $f14, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f14.u32l;
    after_32:
    // 0x801CE364: b           L_801CE370
    // 0x801CE368: lhu         $a3, 0xE4($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XE4);
        goto L_801CE370;
    // 0x801CE368: lhu         $a3, 0xE4($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XE4);
L_801CE36C:
    // 0x801CE36C: lhu         $a3, 0xE6($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XE6);
L_801CE370:
    // 0x801CE370: lhu         $v0, 0xE6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XE6);
    // 0x801CE374: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CE378: subu        $t9, $v0, $a3
    ctx->r25 = SUB32(ctx->r2, ctx->r7);
    // 0x801CE37C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x801CE380: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x801CE384: andi        $t2, $t1, 0x1FF
    ctx->r10 = ctx->r9 & 0X1FF;
    // 0x801CE388: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x801CE38C: beq         $at, $zero, L_801CE3B8
    if (ctx->r1 == 0) {
        // 0x801CE390: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_801CE3B8;
    }
    // 0x801CE390: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x801CE394: addiu       $t3, $t0, 0x100
    ctx->r11 = ADD32(ctx->r8, 0X100);
    // 0x801CE398: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x801CE39C: beq         $t4, $zero, L_801CE3B0
    if (ctx->r12 == 0) {
        // 0x801CE3A0: addiu       $t5, $a0, 0x200
        ctx->r13 = ADD32(ctx->r4, 0X200);
            goto L_801CE3B0;
    }
    // 0x801CE3A0: addiu       $t5, $a0, 0x200
    ctx->r13 = ADD32(ctx->r4, 0X200);
    // 0x801CE3A4: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801CE3A8: b           L_801CE3DC
    // 0x801CE3AC: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
        goto L_801CE3DC;
    // 0x801CE3AC: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
L_801CE3B0:
    // 0x801CE3B0: b           L_801CE3DC
    // 0x801CE3B4: sh          $a3, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r7;
        goto L_801CE3DC;
    // 0x801CE3B4: sh          $a3, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r7;
L_801CE3B8:
    // 0x801CE3B8: andi        $t7, $v1, 0x100
    ctx->r15 = ctx->r3 & 0X100;
    // 0x801CE3BC: beq         $t7, $zero, L_801CE3D4
    if (ctx->r15 == 0) {
        // 0x801CE3C0: addiu       $t0, $v0, -0x8
        ctx->r8 = ADD32(ctx->r2, -0X8);
            goto L_801CE3D4;
    }
    // 0x801CE3C0: addiu       $t0, $v0, -0x8
    ctx->r8 = ADD32(ctx->r2, -0X8);
    // 0x801CE3C4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CE3C8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801CE3CC: b           L_801CE3DC
    // 0x801CE3D0: sh          $t9, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r25;
        goto L_801CE3DC;
    // 0x801CE3D0: sh          $t9, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r25;
L_801CE3D4:
    // 0x801CE3D4: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x801CE3D8: sh          $t1, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r9;
L_801CE3DC:
    // 0x801CE3DC: lhu         $v0, 0xE6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XE6);
L_801CE3E0:
    // 0x801CE3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CE3E4:
    // 0x801CE3E4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x801CE3E8: jr          $ra
    // 0x801CE3EC: nop

    TRACE_RETURN()
    return;
    // 0x801CE3EC: nop

;}
RECOMP_FUNC void func_801F9BA8_5B5AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9BA8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801F9BAC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801F9BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9BB4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9BBC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F9BC0: sb          $zero, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = 0;
    // 0x801F9BC4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9BC8: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9BCC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9BD0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9BD4: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9BD8: lhu         $v0, 0x2FE0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2FE0);
    // 0x801F9BDC: lui         $t7, 0xD
    ctx->r15 = S32(0XD << 16);
    // 0x801F9BE0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801F9BE4: slti        $at, $v0, 0x21D
    ctx->r1 = SIGNED(ctx->r2) < 0X21D ? 1 : 0;
    // 0x801F9BE8: beq         $at, $zero, L_801F9BFC
    if (ctx->r1 == 0) {
        // 0x801F9BEC: addu        $t7, $t7, $v1
        ctx->r15 = ADD32(ctx->r15, ctx->r3);
            goto L_801F9BFC;
    }
    // 0x801F9BEC: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x801F9BF0: lbu         $t7, -0x773($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X773);
    // 0x801F9BF4: beql        $t7, $zero, L_801F9C20
    if (ctx->r15 == 0) {
        // 0x801F9BF8: lhu         $t0, 0x2DF2($a1)
        ctx->r8 = MEM_HU(ctx->r5, 0X2DF2);
            goto L_801F9C20;
    }
    goto skip_0;
    // 0x801F9BF8: lhu         $t0, 0x2DF2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2DF2);
    skip_0:
L_801F9BFC:
    // 0x801F9BFC: lbu         $t8, 0x2E02($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9C00: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9C04: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9C08: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801F9C0C: jal         0x80038BC8
    // 0x801F9C10: sb          $t9, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r25;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F9C10: sb          $t9, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r25;
    after_0:
    // 0x801F9C14: b           L_801F9E0C
    // 0x801F9C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F9E0C;
    // 0x801F9C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9C1C: lhu         $t0, 0x2DF2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2DF2);
L_801F9C20:
    // 0x801F9C20: slti        $at, $t0, 0x12C
    ctx->r1 = SIGNED(ctx->r8) < 0X12C ? 1 : 0;
    // 0x801F9C24: beq         $at, $zero, L_801F9C34
    if (ctx->r1 == 0) {
        // 0x801F9C28: slti        $at, $v0, 0x12C
        ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
            goto L_801F9C34;
    }
    // 0x801F9C28: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x801F9C2C: bne         $at, $zero, L_801F9C5C
    if (ctx->r1 != 0) {
        // 0x801F9C30: nop
    
            goto L_801F9C5C;
    }
    // 0x801F9C30: nop

L_801F9C34:
    // 0x801F9C34: jal         0x801FA03C
    // 0x801F9C38: nop

    func_801FA03C_5B5F4C(rdram, ctx);
        goto after_1;
    // 0x801F9C38: nop

    after_1:
    // 0x801F9C3C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9C40: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9C44: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9C48: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9C4C: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9C50: lw          $t1, 0x2E04($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X2E04);
    // 0x801F9C54: bnel        $t1, $v0, L_801F9C94
    if (ctx->r9 != ctx->r2) {
        // 0x801F9C58: lbu         $t5, 0x2E02($a1)
        ctx->r13 = MEM_BU(ctx->r5, 0X2E02);
            goto L_801F9C94;
    }
    goto skip_1;
    // 0x801F9C58: lbu         $t5, 0x2E02($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2E02);
    skip_1:
L_801F9C5C:
    // 0x801F9C5C: jal         0x801FA03C
    // 0x801F9C60: nop

    func_801FA03C_5B5F4C(rdram, ctx);
        goto after_2;
    // 0x801F9C60: nop

    after_2:
    // 0x801F9C64: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x801F9C68: lw          $t2, 0x7AC4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7AC4);
    // 0x801F9C6C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9C70: and         $t3, $v0, $t2
    ctx->r11 = ctx->r2 & ctx->r10;
    // 0x801F9C74: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801F9C78: beq         $t4, $zero, L_801F9CAC
    if (ctx->r12 == 0) {
        // 0x801F9C7C: nop
    
            goto L_801F9CAC;
    }
    // 0x801F9C7C: nop

    // 0x801F9C80: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9C84: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9C88: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9C8C: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9C90: lbu         $t5, 0x2E02($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2E02);
L_801F9C94:
    // 0x801F9C94: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9C98: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9C9C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801F9CA0: sb          $t6, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r14;
    // 0x801F9CA4: jal         0x80038BC8
    // 0x801F9CA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F9CA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
L_801F9CAC:
    // 0x801F9CAC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9CB0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9CB4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9CB8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9CBC: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9CC0: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x801F9CC4: addiu       $at, $zero, 0x154
    ctx->r1 = ADD32(0, 0X154);
    // 0x801F9CC8: ori         $a0, $zero, 0x827D
    ctx->r4 = 0 | 0X827D;
    // 0x801F9CCC: beq         $v0, $at, L_801F9CE4
    if (ctx->r2 == ctx->r1) {
        // 0x801F9CD0: addiu       $at, $zero, 0x172
        ctx->r1 = ADD32(0, 0X172);
            goto L_801F9CE4;
    }
    // 0x801F9CD0: addiu       $at, $zero, 0x172
    ctx->r1 = ADD32(0, 0X172);
    // 0x801F9CD4: beq         $v0, $at, L_801F9CE4
    if (ctx->r2 == ctx->r1) {
        // 0x801F9CD8: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_801F9CE4;
    }
    // 0x801F9CD8: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x801F9CDC: bnel        $v0, $at, L_801F9D18
    if (ctx->r2 != ctx->r1) {
        // 0x801F9CE0: addiu       $at, $zero, 0x12C
        ctx->r1 = ADD32(0, 0X12C);
            goto L_801F9D18;
    }
    goto skip_2;
    // 0x801F9CE0: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    skip_2:
L_801F9CE4:
    // 0x801F9CE4: lbu         $t7, 0x2E02($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9CE8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9CEC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9CF0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F9CF4: jal         0x80038BC8
    // 0x801F9CF8: sb          $t8, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r24;
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F9CF8: sb          $t8, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r24;
    after_4:
    // 0x801F9CFC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9D00: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9D04: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9D08: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9D0C: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9D10: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
    // 0x801F9D14: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
L_801F9D18:
    // 0x801F9D18: bne         $v0, $at, L_801F9D50
    if (ctx->r2 != ctx->r1) {
        // 0x801F9D1C: ori         $a0, $zero, 0x827E
        ctx->r4 = 0 | 0X827E;
            goto L_801F9D50;
    }
    // 0x801F9D1C: ori         $a0, $zero, 0x827E
    ctx->r4 = 0 | 0X827E;
    // 0x801F9D20: lbu         $t9, 0x2E02($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9D24: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9D28: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9D2C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801F9D30: jal         0x80038BC8
    // 0x801F9D34: sb          $t0, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r8;
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801F9D34: sb          $t0, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r8;
    after_5:
    // 0x801F9D38: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9D3C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9D40: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9D44: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9D48: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9D4C: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
L_801F9D50:
    // 0x801F9D50: addiu       $at, $zero, 0x172
    ctx->r1 = ADD32(0, 0X172);
    // 0x801F9D54: bne         $v0, $at, L_801F9D8C
    if (ctx->r2 != ctx->r1) {
        // 0x801F9D58: ori         $a0, $zero, 0x8160
        ctx->r4 = 0 | 0X8160;
            goto L_801F9D8C;
    }
    // 0x801F9D58: ori         $a0, $zero, 0x8160
    ctx->r4 = 0 | 0X8160;
    // 0x801F9D5C: lbu         $t1, 0x2E02($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9D60: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9D64: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9D68: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801F9D6C: jal         0x80038BC8
    // 0x801F9D70: sb          $t2, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r10;
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801F9D70: sb          $t2, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r10;
    after_6:
    // 0x801F9D74: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9D78: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9D7C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9D80: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9D84: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9D88: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
L_801F9D8C:
    // 0x801F9D8C: addiu       $at, $zero, 0x152
    ctx->r1 = ADD32(0, 0X152);
    // 0x801F9D90: bne         $v0, $at, L_801F9DC8
    if (ctx->r2 != ctx->r1) {
        // 0x801F9D94: ori         $a0, $zero, 0x8161
        ctx->r4 = 0 | 0X8161;
            goto L_801F9DC8;
    }
    // 0x801F9D94: ori         $a0, $zero, 0x8161
    ctx->r4 = 0 | 0X8161;
    // 0x801F9D98: lbu         $t3, 0x2E02($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9D9C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9DA0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9DA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801F9DA8: jal         0x80038BC8
    // 0x801F9DAC: sb          $t4, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r12;
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801F9DAC: sb          $t4, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r12;
    after_7:
    // 0x801F9DB0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9DB4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9DB8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9DBC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9DC0: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801F9DC4: lhu         $v0, 0x2DF2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2DF2);
L_801F9DC8:
    // 0x801F9DC8: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x801F9DCC: beq         $v0, $at, L_801F9DF0
    if (ctx->r2 == ctx->r1) {
        // 0x801F9DD0: ori         $a0, $zero, 0x82AD
        ctx->r4 = 0 | 0X82AD;
            goto L_801F9DF0;
    }
    // 0x801F9DD0: ori         $a0, $zero, 0x82AD
    ctx->r4 = 0 | 0X82AD;
    // 0x801F9DD4: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    // 0x801F9DD8: beq         $v0, $at, L_801F9DF0
    if (ctx->r2 == ctx->r1) {
        // 0x801F9DDC: addiu       $at, $zero, 0xBA
        ctx->r1 = ADD32(0, 0XBA);
            goto L_801F9DF0;
    }
    // 0x801F9DDC: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x801F9DE0: beq         $v0, $at, L_801F9DF0
    if (ctx->r2 == ctx->r1) {
        // 0x801F9DE4: addiu       $at, $zero, 0xBD
        ctx->r1 = ADD32(0, 0XBD);
            goto L_801F9DF0;
    }
    // 0x801F9DE4: addiu       $at, $zero, 0xBD
    ctx->r1 = ADD32(0, 0XBD);
    // 0x801F9DE8: bnel        $v0, $at, L_801F9E0C
    if (ctx->r2 != ctx->r1) {
        // 0x801F9DEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F9E0C;
    }
    goto skip_3;
    // 0x801F9DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
L_801F9DF0:
    // 0x801F9DF0: lbu         $t5, 0x2E02($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2E02);
    // 0x801F9DF4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9DF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x801F9DFC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801F9E00: jal         0x80038BC8
    // 0x801F9E04: sb          $t6, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r14;
    func_80038BC8_397C8(rdram, ctx);
        goto after_8;
    // 0x801F9E04: sb          $t6, -0x51FE($at)
    MEM_B(-0X51FE, ctx->r1) = ctx->r14;
    after_8:
    // 0x801F9E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9E0C:
    // 0x801F9E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9E10: jr          $ra
    // 0x801F9E14: nop

    TRACE_RETURN()
    return;
    // 0x801F9E14: nop

;}
RECOMP_FUNC void func_801F7138_5B3048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7138: jr          $ra
    // 0x801F713C: nop

    TRACE_RETURN()
    return;
    // 0x801F713C: nop

;}
RECOMP_FUNC void func_801DB890_5977A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB890: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DB894: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB898: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x801DB89C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x801DB8A0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801DB8A4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801DB8A8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801DB8AC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801DB8B0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801DB8B4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801DB8B8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801DB8BC: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801DB8C0: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801DB8C4: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DB8C8: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DB8CC: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DB8D0: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801DB8D4: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801DB8D8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DB8DC: sub.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801DB8E0: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x801DB8E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DB8E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DB8EC: mul.s       $f10, $f24, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x801DB8F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DB8F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DB8F8: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB8FC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801DB900: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801DB904: nop

    // 0x801DB908: bc1f        L_801DB918
    if (!c1cs) {
        // 0x801DB90C: nop
    
            goto L_801DB918;
    }
    // 0x801DB90C: nop

    // 0x801DB910: b           L_801DB9D8
    // 0x801DB914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DB9D8;
    // 0x801DB914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DB918:
    // 0x801DB918: ldc1        $f18, -0x50B8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X50B8);
    // 0x801DB91C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801DB920: addiu       $s3, $zero, 0x7FFF
    ctx->r19 = ADD32(0, 0X7FFF);
    // 0x801DB924: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801DB928: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x801DB92C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801DB930: nop

    // 0x801DB934: bc1fl       L_801DB958
    if (!c1cs) {
        // 0x801DB938: div.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
            goto L_801DB958;
    }
    goto skip_0;
    // 0x801DB938: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    skip_0:
    // 0x801DB93C: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
L_801DB940:
    // 0x801DB940: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801DB944: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801DB948: nop

    // 0x801DB94C: bc1tl       L_801DB940
    if (c1cs) {
        // 0x801DB950: sub.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_801DB940;
    }
    goto skip_1;
    // 0x801DB950: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x801DB954: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
L_801DB958:
    // 0x801DB958: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x801DB95C: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x801DB960: nop

    // 0x801DB964: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x801DB968: nop

    // 0x801DB96C: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x801DB970: blez        $s2, L_801DB9D4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x801DB974: nop
    
            goto L_801DB9D4;
    }
    // 0x801DB974: nop

    // 0x801DB978: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
L_801DB97C:
    // 0x801DB97C: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801DB980: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DB984: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DB988: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801DB98C: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801DB990: nop

    // 0x801DB994: mul.s       $f18, $f22, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x801DB998: nop

    // 0x801DB99C: mul.s       $f6, $f24, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x801DB9A0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB9A4: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB9A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DB9AC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801DB9B0: jal         0x80029E08
    // 0x801DB9B4: nop

    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801DB9B4: nop

    after_0:
    // 0x801DB9B8: bne         $s3, $v0, L_801DB9C8
    if (ctx->r19 != ctx->r2) {
        // 0x801DB9BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_801DB9C8;
    }
    // 0x801DB9BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801DB9C0: b           L_801DB9D8
    // 0x801DB9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DB9D8;
    // 0x801DB9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DB9C8:
    // 0x801DB9C8: addiu       $t6, $s2, 0x1
    ctx->r14 = ADD32(ctx->r18, 0X1);
    // 0x801DB9CC: bnel        $t6, $s0, L_801DB97C
    if (ctx->r14 != ctx->r16) {
        // 0x801DB9D0: mtc1        $s0, $f6
        ctx->f6.u32l = ctx->r16;
            goto L_801DB97C;
    }
    goto skip_2;
    // 0x801DB9D0: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    skip_2:
L_801DB9D4:
    // 0x801DB9D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DB9D8:
    // 0x801DB9D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB9DC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801DB9E0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801DB9E4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801DB9E8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB9EC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801DB9F0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x801DB9F4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x801DB9F8: jr          $ra
    // 0x801DB9FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DB9FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D67C4_5926D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D67C4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x801D67C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D67CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D67D0: lw          $a2, 0x2C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X2C);
    // 0x801D67D4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D67D8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D67DC: and         $t1, $a2, $at
    ctx->r9 = ctx->r6 & ctx->r1;
    // 0x801D67E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D67E4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x801D67E8: addiu       $t0, $t1, 0x60
    ctx->r8 = ADD32(ctx->r9, 0X60);
    // 0x801D67EC: addiu       $t7, $sp, 0x54
    ctx->r15 = ADD32(ctx->r29, 0X54);
L_801D67F0:
    // 0x801D67F0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801D67F4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801D67F8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D67FC: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801D6800: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x801D6804: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801D6808: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x801D680C: bne         $t1, $t0, L_801D67F0
    if (ctx->r9 != ctx->r8) {
        // 0x801D6810: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801D67F0;
    }
    // 0x801D6810: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x801D6814: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801D6818: lbu         $t3, -0x3830($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3830);
    // 0x801D681C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801D6820: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x801D6824: beq         $t3, $zero, L_801D6A84
    if (ctx->r11 == 0) {
        // 0x801D6828: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6A84;
    }
    // 0x801D6828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D682C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801D6830: jal         0x801D7818
    // 0x801D6834: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    func_801D7818_593728(rdram, ctx);
        goto after_0;
    // 0x801D6834: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D6838: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D683C: sh          $v0, -0x2E28($at)
    MEM_H(-0X2E28, ctx->r1) = ctx->r2;
    // 0x801D6840: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D6844: addiu       $v1, $v1, -0x2E24
    ctx->r3 = ADD32(ctx->r3, -0X2E24);
    // 0x801D6848: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801D684C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D6850: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D6854: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D6858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D685C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D6860: nop

    // 0x801D6864: bc1fl       L_801D6878
    if (!c1cs) {
        // 0x801D6868: lwc1        $f6, 0x74($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
            goto L_801D6878;
    }
    goto skip_0;
    // 0x801D6868: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    skip_0:
    // 0x801D686C: sb          $t4, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r12;
    // 0x801D6870: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D6874: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
L_801D6878:
    // 0x801D6878: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801D687C: nop

    // 0x801D6880: bc1fl       L_801D6890
    if (!c1cs) {
        // 0x801D6884: lhu         $t5, 0xA8($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0XA8);
            goto L_801D6890;
    }
    goto skip_1;
    // 0x801D6884: lhu         $t5, 0xA8($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XA8);
    skip_1:
    // 0x801D6888: sb          $zero, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = 0;
    // 0x801D688C: lhu         $t5, 0xA8($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XA8);
L_801D6890:
    // 0x801D6890: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x801D6894: bnel        $t6, $zero, L_801D68EC
    if (ctx->r14 != 0) {
        // 0x801D6898: lwc1        $f8, 0xC0($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
            goto L_801D68EC;
    }
    goto skip_2;
    // 0x801D6898: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
    skip_2:
    // 0x801D689C: lbu         $t9, 0xBD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D68A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801D68A4: andi        $t8, $t9, 0x80
    ctx->r24 = ctx->r25 & 0X80;
    // 0x801D68A8: bnel        $t8, $zero, L_801D68EC
    if (ctx->r24 != 0) {
        // 0x801D68AC: lwc1        $f8, 0xC0($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
            goto L_801D68EC;
    }
    goto skip_3;
    // 0x801D68AC: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
    skip_3:
    // 0x801D68B0: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D68B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D68B8: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x801D68BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D68C0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D68C4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D68C8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801D68CC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801D68D0: nop

    // 0x801D68D4: bc1tl       L_801D68EC
    if (c1cs) {
        // 0x801D68D8: lwc1        $f8, 0xC0($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
            goto L_801D68EC;
    }
    goto skip_4;
    // 0x801D68D8: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
    skip_4:
    // 0x801D68DC: lbu         $t0, 0xAB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XAB);
    // 0x801D68E0: beql        $t0, $zero, L_801D6960
    if (ctx->r8 == 0) {
        // 0x801D68E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6960;
    }
    goto skip_5;
    // 0x801D68E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x801D68E8: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
L_801D68EC:
    // 0x801D68EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D68F0: ldc1        $f4, -0x5338($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5338);
    // 0x801D68F4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x801D68F8: lwc1        $f10, 0xC4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x801D68FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6900: lwc1        $f6, -0x2E1C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E1C);
    // 0x801D6904: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801D6908: lwc1        $f16, 0xC8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x801D690C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D6910: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801D6914: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x801D6918: lwc1        $f18, 0xD8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x801D691C: bc1f        L_801D6950
    if (!c1cs) {
        // 0x801D6920: swc1        $f18, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
            goto L_801D6950;
    }
    // 0x801D6920: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801D6924: lbu         $t1, 0xBD($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D6928: andi        $t7, $t1, 0x80
    ctx->r15 = ctx->r9 & 0X80;
    // 0x801D692C: bne         $t7, $zero, L_801D6950
    if (ctx->r15 != 0) {
        // 0x801D6930: nop
    
            goto L_801D6950;
    }
    // 0x801D6930: nop

    // 0x801D6934: lhu         $v0, 0xD4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD4);
    // 0x801D6938: lhu         $t2, 0xD6($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XD6);
    // 0x801D693C: addiu       $t3, $v0, 0x6
    ctx->r11 = ADD32(ctx->r2, 0X6);
    // 0x801D6940: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D6944: bne         $at, $zero, L_801D6950
    if (ctx->r1 != 0) {
        // 0x801D6948: nop
    
            goto L_801D6950;
    }
    // 0x801D6948: nop

    // 0x801D694C: sh          $t3, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r11;
L_801D6950:
    // 0x801D6950: jal         0x801D3494
    // 0x801D6954: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    func_801D3494_58F3A4(rdram, ctx);
        goto after_1;
    // 0x801D6954: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    after_1:
    // 0x801D6958: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x801D695C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D6960:
    // 0x801D6960: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x801D6964: jal         0x801D7194
    // 0x801D6968: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_801D7194_5930A4(rdram, ctx);
        goto after_2;
    // 0x801D6968: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x801D696C: addiu       $t4, $zero, 0x3F00
    ctx->r12 = ADD32(0, 0X3F00);
    // 0x801D6970: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D6974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6978: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x801D697C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801D6980: jal         0x801D56D0
    // 0x801D6984: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_3;
    // 0x801D6984: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x801D6988: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x801D698C: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x801D6990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6994: bgez        $t5, L_801D69C4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801D6998: nop
    
            goto L_801D69C4;
    }
    // 0x801D6998: nop

    // 0x801D699C: jal         0x801D8290
    // 0x801D69A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8290_5941A0(rdram, ctx);
        goto after_4;
    // 0x801D69A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D69A4: beq         $v0, $zero, L_801D69B4
    if (ctx->r2 == 0) {
        // 0x801D69A8: addiu       $t6, $zero, 0x80
        ctx->r14 = ADD32(0, 0X80);
            goto L_801D69B4;
    }
    // 0x801D69A8: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801D69AC: b           L_801D6A84
    // 0x801D69B0: sb          $t6, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r14;
        goto L_801D6A84;
    // 0x801D69B0: sb          $t6, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r14;
L_801D69B4:
    // 0x801D69B4: lbu         $t9, 0xBD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D69B8: andi        $t8, $t9, 0x7F
    ctx->r24 = ctx->r25 & 0X7F;
    // 0x801D69BC: b           L_801D6A84
    // 0x801D69C0: sb          $t8, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r24;
        goto L_801D6A84;
    // 0x801D69C0: sb          $t8, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r24;
L_801D69C4:
    // 0x801D69C4: jal         0x801D8290
    // 0x801D69C8: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    func_801D8290_5941A0(rdram, ctx);
        goto after_5;
    // 0x801D69C8: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    after_5:
    // 0x801D69CC: beql        $v0, $zero, L_801D6A7C
    if (ctx->r2 == 0) {
        // 0x801D69D0: lbu         $t0, 0xBD($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0XBD);
            goto L_801D6A7C;
    }
    goto skip_6;
    // 0x801D69D0: lbu         $t0, 0xBD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XBD);
    skip_6:
    // 0x801D69D4: lbu         $t0, 0xBD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D69D8: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x801D69DC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D69E0: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x801D69E4: beq         $t1, $zero, L_801D6A14
    if (ctx->r9 == 0) {
        // 0x801D69E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6A14;
    }
    // 0x801D69E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D69EC: lhu         $v0, 0xD4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD4);
    // 0x801D69F0: lb          $t7, 0x2F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2F);
    // 0x801D69F4: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x801D69F8: bne         $at, $zero, L_801D6A0C
    if (ctx->r1 != 0) {
        // 0x801D69FC: nop
    
            goto L_801D6A0C;
    }
    // 0x801D69FC: nop

    // 0x801D6A00: bne         $t7, $zero, L_801D6A0C
    if (ctx->r15 != 0) {
        // 0x801D6A04: addiu       $t2, $v0, -0x6
        ctx->r10 = ADD32(ctx->r2, -0X6);
            goto L_801D6A0C;
    }
    // 0x801D6A04: addiu       $t2, $v0, -0x6
    ctx->r10 = ADD32(ctx->r2, -0X6);
    // 0x801D6A08: sh          $t2, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r10;
L_801D6A0C:
    // 0x801D6A0C: b           L_801D6A84
    // 0x801D6A10: sb          $t3, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r11;
        goto L_801D6A84;
    // 0x801D6A10: sb          $t3, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r11;
L_801D6A14:
    // 0x801D6A14: swc1        $f10, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f10.u32l;
    // 0x801D6A18: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D6A1C: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x801D6A20: addiu       $t9, $t5, 0x60
    ctx->r25 = ADD32(ctx->r13, 0X60);
    // 0x801D6A24: swc1        $f16, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f16.u32l;
    // 0x801D6A28: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D6A2C: swc1        $f18, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f18.u32l;
    // 0x801D6A30: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D6A34: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    // 0x801D6A38: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
L_801D6A3C:
    // 0x801D6A3C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801D6A40: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801D6A44: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D6A48: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x801D6A4C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x801D6A50: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x801D6A54: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x801D6A58: bne         $t5, $t9, L_801D6A3C
    if (ctx->r13 != ctx->r25) {
        // 0x801D6A5C: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_801D6A3C;
    }
    // 0x801D6A5C: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x801D6A60: jal         0x801D8290
    // 0x801D6A64: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    func_801D8290_5941A0(rdram, ctx);
        goto after_6;
    // 0x801D6A64: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    after_6:
    // 0x801D6A68: beq         $v0, $zero, L_801D6A84
    if (ctx->r2 == 0) {
        // 0x801D6A6C: addiu       $t8, $zero, 0x80
        ctx->r24 = ADD32(0, 0X80);
            goto L_801D6A84;
    }
    // 0x801D6A6C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801D6A70: b           L_801D6A84
    // 0x801D6A74: sb          $t8, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r24;
        goto L_801D6A84;
    // 0x801D6A74: sb          $t8, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r24;
    // 0x801D6A78: lbu         $t0, 0xBD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XBD);
L_801D6A7C:
    // 0x801D6A7C: andi        $t1, $t0, 0x7F
    ctx->r9 = ctx->r8 & 0X7F;
    // 0x801D6A80: sb          $t1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r9;
L_801D6A84:
    // 0x801D6A84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D6A88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D6A8C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x801D6A90: jr          $ra
    // 0x801D6A94: nop

    TRACE_RETURN()
    return;
    // 0x801D6A94: nop

;}
RECOMP_FUNC void func_801E11E0_59D0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11E4: jr          $ra
    // 0x801E11E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DC27C_59818C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC27C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801DC280: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x801DC284: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x801DC288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DC28C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DC290: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DC294: bgtz        $t6, L_801DC2AC
    if (SIGNED(ctx->r14) > 0) {
        // 0x801DC298: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801DC2AC;
    }
    // 0x801DC298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DC29C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DC2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC2A4: b           L_801DC484
    // 0x801DC2A8: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
        goto L_801DC484;
    // 0x801DC2A8: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
L_801DC2AC:
    // 0x801DC2AC: lbu         $t8, 0x60($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X60);
    // 0x801DC2B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DC2B4: bnel        $t8, $at, L_801DC2F8
    if (ctx->r24 != ctx->r1) {
        // 0x801DC2B8: lw          $t1, 0x2C($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X2C);
            goto L_801DC2F8;
    }
    goto skip_0;
    // 0x801DC2B8: lw          $t1, 0x2C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2C);
    skip_0:
    // 0x801DC2BC: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x801DC2C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DC2C4: beql        $t9, $at, L_801DC2E0
    if (ctx->r25 == ctx->r1) {
        // 0x801DC2C8: lw          $t0, 0x5C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC2E0;
    }
    goto skip_1;
    // 0x801DC2C8: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    skip_1:
    // 0x801DC2CC: jal         0x801E7E40
    // 0x801DC2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7E40_5A3D50(rdram, ctx);
        goto after_0;
    // 0x801DC2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801DC2D4: beq         $v0, $zero, L_801DC2EC
    if (ctx->r2 == 0) {
        // 0x801DC2D8: nop
    
            goto L_801DC2EC;
    }
    // 0x801DC2D8: nop

    // 0x801DC2DC: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
L_801DC2E0:
    // 0x801DC2E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC2E4: b           L_801DC484
    // 0x801DC2E8: sh          $zero, 0x36($t0)
    MEM_H(0X36, ctx->r8) = 0;
        goto L_801DC484;
    // 0x801DC2E8: sh          $zero, 0x36($t0)
    MEM_H(0X36, ctx->r8) = 0;
L_801DC2EC:
    // 0x801DC2EC: b           L_801DC330
    // 0x801DC2F0: nop

        goto L_801DC330;
    // 0x801DC2F0: nop

    // 0x801DC2F4: lw          $t1, 0x2C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X2C);
L_801DC2F8:
    // 0x801DC2F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DC2FC: bnel        $t1, $at, L_801DC324
    if (ctx->r9 != ctx->r1) {
        // 0x801DC300: lw          $t5, 0x5C($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC324;
    }
    goto skip_2;
    // 0x801DC300: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    skip_2:
    // 0x801DC304: lbu         $t2, 0x90($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X90);
    // 0x801DC308: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801DC30C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801DC310: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801DC314: lw          $t4, -0x3924($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3924);
    // 0x801DC318: bne         $t4, $zero, L_801DC330
    if (ctx->r12 != 0) {
        // 0x801DC31C: nop
    
            goto L_801DC330;
    }
    // 0x801DC31C: nop

    // 0x801DC320: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
L_801DC324:
    // 0x801DC324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC328: b           L_801DC484
    // 0x801DC32C: sh          $zero, 0x36($t5)
    MEM_H(0X36, ctx->r13) = 0;
        goto L_801DC484;
    // 0x801DC32C: sh          $zero, 0x36($t5)
    MEM_H(0X36, ctx->r13) = 0;
L_801DC330:
    // 0x801DC330: jal         0x801E7DE8
    // 0x801DC334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801DC334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DC338: bne         $v0, $zero, L_801DC350
    if (ctx->r2 != 0) {
        // 0x801DC33C: nop
    
            goto L_801DC350;
    }
    // 0x801DC33C: nop

    // 0x801DC340: jal         0x801E7F30
    // 0x801DC344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7F30_5A3E40(rdram, ctx);
        goto after_2;
    // 0x801DC344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DC348: beql        $v0, $zero, L_801DC35C
    if (ctx->r2 == 0) {
        // 0x801DC34C: lbu         $t6, 0x90($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X90);
            goto L_801DC35C;
    }
    goto skip_3;
    // 0x801DC34C: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    skip_3:
L_801DC350:
    // 0x801DC350: b           L_801DC484
    // 0x801DC354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC484;
    // 0x801DC354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC358: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
L_801DC35C:
    // 0x801DC35C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DC360: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DC364: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DC368: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DC36C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DC370: lhu         $t8, 0x7DB2($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB2);
    // 0x801DC374: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801DC378: beql        $t9, $zero, L_801DC460
    if (ctx->r25 == 0) {
        // 0x801DC37C: lw          $v1, 0x5C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC460;
    }
    goto skip_4;
    // 0x801DC37C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    skip_4:
    // 0x801DC380: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x801DC384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DC388: lhu         $t0, 0x36($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X36);
    // 0x801DC38C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801DC390: jal         0x801DC498
    // 0x801DC394: sh          $t1, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r9;
    func_801DC498_5983A8(rdram, ctx);
        goto after_3;
    // 0x801DC394: sh          $t1, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r9;
    after_3:
    // 0x801DC398: lbu         $t2, 0x60($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X60);
    // 0x801DC39C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801DC3A0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801DC3A4: bnel        $v1, $t2, L_801DC3C0
    if (ctx->r3 != ctx->r10) {
        // 0x801DC3A8: lw          $t4, 0x5C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC3C0;
    }
    goto skip_5;
    // 0x801DC3A8: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    skip_5:
    // 0x801DC3AC: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x801DC3B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DC3B4: beql        $t3, $at, L_801DC3EC
    if (ctx->r11 == ctx->r1) {
        // 0x801DC3B8: lw          $t6, 0x5C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC3EC;
    }
    goto skip_6;
    // 0x801DC3B8: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    skip_6:
    // 0x801DC3BC: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
L_801DC3C0:
    // 0x801DC3C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x801DC3C4: lhu         $t5, 0x36($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X36);
    // 0x801DC3C8: bnel        $t5, $at, L_801DC3EC
    if (ctx->r13 != ctx->r1) {
        // 0x801DC3CC: lw          $t6, 0x5C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X5C);
            goto L_801DC3EC;
    }
    goto skip_7;
    // 0x801DC3CC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    skip_7:
    // 0x801DC3D0: jal         0x80038BC8
    // 0x801DC3D4: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801DC3D4: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    after_4:
    // 0x801DC3D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DC3DC: jal         0x801E8964
    // 0x801DC3E0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_801E8964_5A4874(rdram, ctx);
        goto after_5;
    // 0x801DC3E0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_5:
    // 0x801DC3E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801DC3E8: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
L_801DC3EC:
    // 0x801DC3EC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x801DC3F0: lhu         $v0, 0x36($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X36);
    // 0x801DC3F4: bnel        $v0, $at, L_801DC430
    if (ctx->r2 != ctx->r1) {
        // 0x801DC3F8: slti        $at, $v0, 0x3C
        ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
            goto L_801DC430;
    }
    goto skip_8;
    // 0x801DC3F8: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    skip_8:
    // 0x801DC3FC: lbu         $t7, 0x60($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X60);
    // 0x801DC400: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801DC404: bnel        $v1, $t7, L_801DC430
    if (ctx->r3 != ctx->r15) {
        // 0x801DC408: slti        $at, $v0, 0x3C
        ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
            goto L_801DC430;
    }
    goto skip_9;
    // 0x801DC408: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    skip_9:
    // 0x801DC40C: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801DC410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DC414: bnel        $v1, $t8, L_801DC430
    if (ctx->r3 != ctx->r24) {
        // 0x801DC418: slti        $at, $v0, 0x3C
        ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
            goto L_801DC430;
    }
    goto skip_10;
    // 0x801DC418: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    skip_10:
    // 0x801DC41C: jal         0x801E8964
    // 0x801DC420: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801E8964_5A4874(rdram, ctx);
        goto after_6;
    // 0x801DC420: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_6:
    // 0x801DC424: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801DC428: lhu         $v0, 0x36($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X36);
    // 0x801DC42C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_801DC430:
    // 0x801DC430: bnel        $at, $zero, L_801DC444
    if (ctx->r1 != 0) {
        // 0x801DC434: slti        $at, $v0, 0xF
        ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
            goto L_801DC444;
    }
    goto skip_11;
    // 0x801DC434: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    skip_11:
    // 0x801DC438: b           L_801DC484
    // 0x801DC43C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DC484;
    // 0x801DC43C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801DC440: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
L_801DC444:
    // 0x801DC444: beq         $at, $zero, L_801DC454
    if (ctx->r1 == 0) {
        // 0x801DC448: nop
    
            goto L_801DC454;
    }
    // 0x801DC448: nop

    // 0x801DC44C: b           L_801DC484
    // 0x801DC450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC484;
    // 0x801DC450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC454:
    // 0x801DC454: b           L_801DC484
    // 0x801DC458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DC484;
    // 0x801DC458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DC45C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
L_801DC460:
    // 0x801DC460: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC464: lhu         $t0, 0x36($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X36);
    // 0x801DC468: slti        $at, $t0, 0x3C
    ctx->r1 = SIGNED(ctx->r8) < 0X3C ? 1 : 0;
    // 0x801DC46C: bnel        $at, $zero, L_801DC484
    if (ctx->r1 != 0) {
        // 0x801DC470: sh          $zero, 0x36($v1)
        MEM_H(0X36, ctx->r3) = 0;
            goto L_801DC484;
    }
    goto skip_12;
    // 0x801DC470: sh          $zero, 0x36($v1)
    MEM_H(0X36, ctx->r3) = 0;
    skip_12:
    // 0x801DC474: sh          $zero, 0x36($v1)
    MEM_H(0X36, ctx->r3) = 0;
    // 0x801DC478: b           L_801DC484
    // 0x801DC47C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801DC484;
    // 0x801DC47C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x801DC480: sh          $zero, 0x36($v1)
    MEM_H(0X36, ctx->r3) = 0;
L_801DC484:
    // 0x801DC484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC488: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DC48C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DC490: jr          $ra
    // 0x801DC494: nop

    TRACE_RETURN()
    return;
    // 0x801DC494: nop

;}
RECOMP_FUNC void func_801CBCE4_587BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBCE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBCE8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CBCEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBCF0: addiu       $t6, $t6, -0x3848
    ctx->r14 = ADD32(ctx->r14, -0X3848);
    // 0x801CBCF4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CBCF8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801CBCFC: jal         0x80013AC4
    // 0x801CBD00: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x801CBD00: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    after_0:
    // 0x801CBD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBD08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBD0C: jr          $ra
    // 0x801CBD10: nop

    TRACE_RETURN()
    return;
    // 0x801CBD10: nop

;}
RECOMP_FUNC void func_801F8488_5B4398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8488: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F848C: jr          $ra
    // 0x801F8490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801F8490: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F50A4_5B0FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F50A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F50A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F50AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F50B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F50B4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801F50B8: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F50BC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801F50C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F50C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F50C8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F50CC: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x801F50D0: nop

    // 0x801F50D4: bc1f        L_801F5140
    if (!c1cs) {
        // 0x801F50D8: nop
    
            goto L_801F5140;
    }
    // 0x801F50D8: nop

    // 0x801F50DC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F50E0: lbu         $v1, 0x2C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2C);
    // 0x801F50E4: bne         $v1, $zero, L_801F5140
    if (ctx->r3 != 0) {
        // 0x801F50E8: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_801F5140;
    }
    // 0x801F50E8: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801F50EC: sb          $t8, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r24;
    // 0x801F50F0: jal         0x801E8964
    // 0x801F50F4: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801E8964_5A4874(rdram, ctx);
        goto after_0;
    // 0x801F50F4: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_0:
    // 0x801F50F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F50FC: jal         0x801DD830
    // 0x801F5100: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801DD830_599740(rdram, ctx);
        goto after_1;
    // 0x801F5100: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x801F5104: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x801F5108: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x801F510C: bnel        $v0, $at, L_801F5128
    if (ctx->r2 != ctx->r1) {
        // 0x801F5110: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_801F5128;
    }
    goto skip_0;
    // 0x801F5110: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    skip_0:
    // 0x801F5114: jal         0x80038BC8
    // 0x801F5118: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F5118: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_2:
    // 0x801F511C: b           L_801F5140
    // 0x801F5120: nop

        goto L_801F5140;
    // 0x801F5120: nop

    // 0x801F5124: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
L_801F5128:
    // 0x801F5128: beq         $v0, $at, L_801F5138
    if (ctx->r2 == ctx->r1) {
        // 0x801F512C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_801F5138;
    }
    // 0x801F512C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x801F5130: bne         $v0, $at, L_801F5140
    if (ctx->r2 != ctx->r1) {
        // 0x801F5134: nop
    
            goto L_801F5140;
    }
    // 0x801F5134: nop

L_801F5138:
    // 0x801F5138: jal         0x80038BC8
    // 0x801F513C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F513C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
L_801F5140:
    // 0x801F5140: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F5144: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F5148: jalr        $t9
    // 0x801F514C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801F514C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x801F5150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F5154: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5158: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801F515C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F5160: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801F5164: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x801F5168: nop

    // 0x801F516C: bc1fl       L_801F518C
    if (!c1cs) {
        // 0x801F5170: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F518C;
    }
    goto skip_1;
    // 0x801F5170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F5174: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F517C: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x801F5180: jal         0x801DACDC
    // 0x801F5184: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801F5184: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    after_5:
    // 0x801F5188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F518C:
    // 0x801F518C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F5190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F5194: jr          $ra
    // 0x801F5198: nop

    TRACE_RETURN()
    return;
    // 0x801F5198: nop

;}
RECOMP_FUNC void func_801F66C0_5B25D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F66C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F66C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F66C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F66CC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F66D0: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x801F66D4: jal         0x801F6770
    // 0x801F66D8: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    func_801F6770_5B2680(rdram, ctx);
        goto after_0;
    // 0x801F66D8: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    after_0:
    // 0x801F66DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F66E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F66E4: jr          $ra
    // 0x801F66E8: nop

    TRACE_RETURN()
    return;
    // 0x801F66E8: nop

;}
RECOMP_FUNC void func_801D2BD8_58EAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2BE0: jal         0x801D2C88
    // 0x801D2BE4: nop

    func_801D2C88_58EB98(rdram, ctx);
        goto after_0;
    // 0x801D2BE4: nop

    after_0:
    // 0x801D2BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2BF0: jr          $ra
    // 0x801D2BF4: nop

    TRACE_RETURN()
    return;
    // 0x801D2BF4: nop

;}
RECOMP_FUNC void func_801EF520_5AB430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF520: lwc1        $f2, 0x6C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801EF524: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801EF528: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801EF52C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801EF530: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801EF534: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801EF538: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801EF53C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EF540: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801EF544: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801EF548: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801EF54C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801EF550: nop

    // 0x801EF554: bc1f        L_801EF560
    if (!c1cs) {
        // 0x801EF558: nop
    
            goto L_801EF560;
    }
    // 0x801EF558: nop

    // 0x801EF55C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801EF560:
    // 0x801EF560: jr          $ra
    // 0x801EF564: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801EF564: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801E2F44_59EE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2F4C: jal         0x801E2F14
    // 0x801E2F50: nop

    func_801E2F14_59EE24(rdram, ctx);
        goto after_0;
    // 0x801E2F50: nop

    after_0:
    // 0x801E2F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2F5C: jr          $ra
    // 0x801E2F60: nop

    TRACE_RETURN()
    return;
    // 0x801E2F60: nop

;}
RECOMP_FUNC void func_801DD254_599164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD25C: lbu         $t6, 0xEC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEC);
    // 0x801DD260: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DD264: bne         $t6, $zero, L_801DD2A8
    if (ctx->r14 != 0) {
        // 0x801DD268: nop
    
            goto L_801DD2A8;
    }
    // 0x801DD268: nop

    // 0x801DD26C: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD270: slti        $at, $v0, 0x70
    ctx->r1 = SIGNED(ctx->r2) < 0X70 ? 1 : 0;
    // 0x801DD274: bne         $at, $zero, L_801DD280
    if (ctx->r1 != 0) {
        // 0x801DD278: slti        $at, $v0, 0x7C
        ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
            goto L_801DD280;
    }
    // 0x801DD278: slti        $at, $v0, 0x7C
    ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
    // 0x801DD27C: bne         $at, $zero, L_801DD2A8
    if (ctx->r1 != 0) {
        // 0x801DD280: slti        $at, $v0, 0xA2
        ctx->r1 = SIGNED(ctx->r2) < 0XA2 ? 1 : 0;
            goto L_801DD2A8;
    }
L_801DD280:
    // 0x801DD280: slti        $at, $v0, 0xA2
    ctx->r1 = SIGNED(ctx->r2) < 0XA2 ? 1 : 0;
    // 0x801DD284: bne         $at, $zero, L_801DD298
    if (ctx->r1 != 0) {
        // 0x801DD288: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_801DD298;
    }
    // 0x801DD288: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x801DD28C: slti        $at, $v0, 0xA4
    ctx->r1 = SIGNED(ctx->r2) < 0XA4 ? 1 : 0;
    // 0x801DD290: bne         $at, $zero, L_801DD2A8
    if (ctx->r1 != 0) {
        // 0x801DD294: nop
    
            goto L_801DD2A8;
    }
    // 0x801DD294: nop

L_801DD298:
    // 0x801DD298: jal         0x801E8C44
    // 0x801DD29C: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801DD29C: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_0:
    // 0x801DD2A0: beql        $v0, $zero, L_801DD2B4
    if (ctx->r2 == 0) {
        // 0x801DD2A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD2B4;
    }
    goto skip_0;
    // 0x801DD2A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_801DD2A8:
    // 0x801DD2A8: b           L_801DD2B4
    // 0x801DD2AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DD2B4;
    // 0x801DD2AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DD2B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD2B4:
    // 0x801DD2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD2BC: jr          $ra
    // 0x801DD2C0: nop

    TRACE_RETURN()
    return;
    // 0x801DD2C0: nop

;}
RECOMP_FUNC void func_801E11BC_59D0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11C0: jr          $ra
    // 0x801E11C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E0ED8_59CDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0EE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0EE8: jal         0x801E7B24
    // 0x801E0EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E0EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801E0EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0EF8: jr          $ra
    // 0x801E0EFC: nop

    TRACE_RETURN()
    return;
    // 0x801E0EFC: nop

;}
RECOMP_FUNC void func_801DEC24_59AB34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEC2C: jal         0x801E50C0
    // 0x801DEC30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E50C0_5A0FD0(rdram, ctx);
        goto after_0;
    // 0x801DEC30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEC38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEC3C: jr          $ra
    // 0x801DEC40: nop

    TRACE_RETURN()
    return;
    // 0x801DEC40: nop

;}
RECOMP_FUNC void func_801EB6BC_5A75CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB6BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801EB6C0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801EB6C4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801EB6C8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801EB6CC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801EB6D0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801EB6D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801EB6D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801EB6DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801EB6E0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801EB6E4: lbu         $v1, 0x64($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X64);
    // 0x801EB6E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801EB6EC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801EB6F0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x801EB6F4: xori        $a2, $v0, 0x1
    ctx->r6 = ctx->r2 ^ 0X1;
    // 0x801EB6F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EB6FC: beq         $a2, $zero, L_801EB708
    if (ctx->r6 == 0) {
        // 0x801EB700: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_801EB708;
    }
    // 0x801EB700: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801EB704: slti        $a2, $v1, 0x8
    ctx->r6 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
L_801EB708:
    // 0x801EB708: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x801EB70C: lbu         $a2, 0x60($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X60);
    // 0x801EB710: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EB714: beql        $a2, $zero, L_801EB730
    if (ctx->r6 == 0) {
        // 0x801EB718: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_801EB730;
    }
    goto skip_0;
    // 0x801EB718: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x801EB71C: beql        $a2, $at, L_801EB744
    if (ctx->r6 == ctx->r1) {
        // 0x801EB720: lw          $s1, 0x0($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X0);
            goto L_801EB744;
    }
    goto skip_1;
    // 0x801EB720: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x801EB724: b           L_801EB818
    // 0x801EB728: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801EB818;
    // 0x801EB728: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801EB72C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_801EB730:
    // 0x801EB730: jal         0x801EE25C
    // 0x801EB734: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_0;
    // 0x801EB734: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x801EB738: b           L_801EB818
    // 0x801EB73C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801EB818;
    // 0x801EB73C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801EB740: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_801EB744:
    // 0x801EB744: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801EB748: addu        $s0, $a3, $t6
    ctx->r16 = ADD32(ctx->r7, ctx->r14);
    // 0x801EB74C: beq         $s1, $zero, L_801EB804
    if (ctx->r17 == 0) {
        // 0x801EB750: addiu       $s0, $s0, 0x9C
        ctx->r16 = ADD32(ctx->r16, 0X9C);
            goto L_801EB804;
    }
    // 0x801EB750: addiu       $s0, $s0, 0x9C
    ctx->r16 = ADD32(ctx->r16, 0X9C);
    // 0x801EB754: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EB758: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x801EB75C: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x801EB760: addiu       $s4, $s4, 0x4C78
    ctx->r20 = ADD32(ctx->r20, 0X4C78);
    // 0x801EB764: addiu       $s5, $s5, 0x4C90
    ctx->r21 = ADD32(ctx->r21, 0X4C90);
    // 0x801EB768: lwc1        $f20, -0x45A4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X45A4);
    // 0x801EB76C: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    // 0x801EB770: lui         $s2, 0x2000
    ctx->r18 = S32(0X2000 << 16);
    // 0x801EB774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801EB778:
    // 0x801EB778: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801EB77C: jal         0x801EE330
    // 0x801EB780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801EB780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EB784: beq         $v0, $zero, L_801EB790
    if (ctx->r2 == 0) {
        // 0x801EB788: or          $a2, $s5, $s2
        ctx->r6 = ctx->r21 | ctx->r18;
            goto L_801EB790;
    }
    // 0x801EB788: or          $a2, $s5, $s2
    ctx->r6 = ctx->r21 | ctx->r18;
    // 0x801EB78C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_801EB790:
    // 0x801EB790: beq         $s6, $zero, L_801EB7A0
    if (ctx->r22 == 0) {
        // 0x801EB794: nop
    
            goto L_801EB7A0;
    }
    // 0x801EB794: nop

    // 0x801EB798: b           L_801EB7A0
    // 0x801EB79C: or          $a2, $s4, $s2
    ctx->r6 = ctx->r20 | ctx->r18;
        goto L_801EB7A0;
    // 0x801EB79C: or          $a2, $s4, $s2
    ctx->r6 = ctx->r20 | ctx->r18;
L_801EB7A0:
    // 0x801EB7A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB7A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EB7A8: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x801EB7AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EB7B0: addiu       $a1, $s1, 0x80
    ctx->r5 = ADD32(ctx->r17, 0X80);
    // 0x801EB7B4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801EB7B8: lbu         $t8, 0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2);
    // 0x801EB7BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB7C0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801EB7C4: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x801EB7C8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801EB7CC: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x801EB7D0: jal         0x801DC554
    // 0x801EB7D4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EB7D4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_2:
    // 0x801EB7D8: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EB7DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801EB7E0: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x801EB7E4: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801EB7E8: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EB7EC: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801EB7F0: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801EB7F4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x801EB7F8: bnel        $s1, $zero, L_801EB778
    if (ctx->r17 != 0) {
        // 0x801EB7FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EB778;
    }
    goto skip_2;
    // 0x801EB7FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x801EB800: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
L_801EB804:
    // 0x801EB804: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801EB808: bne         $s3, $at, L_801EB814
    if (ctx->r19 != ctx->r1) {
        // 0x801EB80C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801EB814;
    }
    // 0x801EB80C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EB810: sb          $t1, 0x65($a3)
    MEM_B(0X65, ctx->r7) = ctx->r9;
L_801EB814:
    // 0x801EB814: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801EB818:
    // 0x801EB818: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801EB81C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801EB820: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801EB824: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801EB828: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801EB82C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801EB830: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801EB834: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801EB838: jr          $ra
    // 0x801EB83C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801EB83C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801ED580_5A9490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED580: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801ED584: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x801ED588: andi        $s5, $a1, 0xFF
    ctx->r21 = ctx->r5 & 0XFF;
    // 0x801ED58C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801ED590: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x801ED594: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x801ED598: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x801ED59C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801ED5A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801ED5A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801ED5A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801ED5AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801ED5B0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801ED5B4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801ED5B8: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x801ED5BC: lw          $s6, 0x5C($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X5C);
    // 0x801ED5C0: jal         0x801E8C44
    // 0x801ED5C4: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801ED5C4: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    after_0:
    // 0x801ED5C8: bne         $v0, $zero, L_801ED6F4
    if (ctx->r2 != 0) {
        // 0x801ED5CC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801ED6F4;
    }
    // 0x801ED5CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801ED5D0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801ED5D4: addiu       $t7, $t7, 0x4868
    ctx->r15 = ADD32(ctx->r15, 0X4868);
    // 0x801ED5D8: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x801ED5DC: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
    // 0x801ED5E0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x801ED5E4: addiu       $s3, $zero, 0x28
    ctx->r19 = ADD32(0, 0X28);
    // 0x801ED5E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801ED5EC:
    // 0x801ED5EC: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x801ED5F0: jal         0x80034E08
    // 0x801ED5F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801ED5F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801ED5F8: beq         $v0, $zero, L_801ED6F4
    if (ctx->r2 == 0) {
        // 0x801ED5FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801ED6F4;
    }
    // 0x801ED5FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801ED600: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801ED604: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801ED608: jal         0x801EE4AC
    // 0x801ED60C: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801ED60C: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    after_2:
    // 0x801ED610: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x801ED614: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801ED618: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801ED61C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED620: jal         0x80035EEC
    // 0x801ED624: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801ED624: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801ED628: bne         $v0, $zero, L_801ED63C
    if (ctx->r2 != 0) {
        // 0x801ED62C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801ED63C;
    }
    // 0x801ED62C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED630: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801ED634: b           L_801ED6F4
    // 0x801ED638: sb          $t9, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r25;
        goto L_801ED6F4;
    // 0x801ED638: sb          $t9, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r25;
L_801ED63C:
    // 0x801ED63C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x801ED640: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801ED644: jal         0x801ED724
    // 0x801ED648: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_801ED724_5A9634(rdram, ctx);
        goto after_4;
    // 0x801ED648: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x801ED64C: bne         $s1, $zero, L_801ED674
    if (ctx->r17 != 0) {
        // 0x801ED650: sb          $s1, 0x61($s0)
        MEM_B(0X61, ctx->r16) = ctx->r17;
            goto L_801ED674;
    }
    // 0x801ED650: sb          $s1, 0x61($s0)
    MEM_B(0X61, ctx->r16) = ctx->r17;
    // 0x801ED654: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801ED658: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x801ED65C: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x801ED660: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x801ED664: sh          $t1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r9;
    // 0x801ED668: sh          $t2, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r10;
    // 0x801ED66C: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801ED670: sh          $s3, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r19;
L_801ED674:
    // 0x801ED674: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801ED678: bnel        $s1, $s4, L_801ED5EC
    if (ctx->r17 != ctx->r20) {
        // 0x801ED67C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801ED5EC;
    }
    goto skip_0;
    // 0x801ED67C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x801ED680: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801ED684: addiu       $a1, $a1, -0x24A8
    ctx->r5 = ADD32(ctx->r5, -0X24A8);
    // 0x801ED688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED68C: jal         0x80034E08
    // 0x801ED690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_5;
    // 0x801ED690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x801ED694: beq         $v0, $zero, L_801ED6F4
    if (ctx->r2 == 0) {
        // 0x801ED698: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801ED6F4;
    }
    // 0x801ED698: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801ED69C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801ED6A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801ED6A4: jal         0x801EE4AC
    // 0x801ED6A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_6;
    // 0x801ED6A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x801ED6AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED6B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801ED6B4: jal         0x80035EEC
    // 0x801ED6B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_7;
    // 0x801ED6B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x801ED6BC: bne         $v0, $zero, L_801ED6D0
    if (ctx->r2 != 0) {
        // 0x801ED6C0: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_801ED6D0;
    }
    // 0x801ED6C0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801ED6C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801ED6C8: b           L_801ED6F4
    // 0x801ED6CC: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
        goto L_801ED6F4;
    // 0x801ED6CC: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
L_801ED6D0:
    // 0x801ED6D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801ED6D4: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x801ED6D8: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x801ED6DC: sb          $t4, 0x61($s0)
    MEM_B(0X61, ctx->r16) = ctx->r12;
    // 0x801ED6E0: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    // 0x801ED6E4: sh          $t6, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r14;
    // 0x801ED6E8: sh          $t7, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r15;
    // 0x801ED6EC: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801ED6F0: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
L_801ED6F4:
    // 0x801ED6F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801ED6F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801ED6FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801ED700: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801ED704: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801ED708: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801ED70C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x801ED710: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x801ED714: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x801ED718: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x801ED71C: jr          $ra
    // 0x801ED720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801ED720: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801EB67C_5A758C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB67C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB684: jal         0x801EB6BC
    // 0x801EB688: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB688: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB694: jr          $ra
    // 0x801EB698: nop

    TRACE_RETURN()
    return;
    // 0x801EB698: nop

;}
