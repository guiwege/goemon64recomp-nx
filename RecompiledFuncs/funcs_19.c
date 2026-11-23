#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8001B6D4_1C2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B6D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B6DC: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8001B6E0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001B6E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B6E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001B6EC: swc1        $f8, -0x7680($at)
    MEM_W(-0X7680, ctx->r1) = ctx->f8.u32l;
    // 0x8001B6F0: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001B6F4: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001B6F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B6FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8001B700: swc1        $f18, -0x767C($at)
    MEM_W(-0X767C, ctx->r1) = ctx->f18.u32l;
    // 0x8001B704: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8001B708: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001B70C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B710: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001B714: swc1        $f8, -0x7678($at)
    MEM_W(-0X7678, ctx->r1) = ctx->f8.u32l;
    // 0x8001B718: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x8001B71C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001B724: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    // 0x8001B728: jal         0x8001C7E4
    // 0x8001B72C: sh          $t6, -0x7674($at)
    MEM_H(-0X7674, ctx->r1) = ctx->r14;
    func_8001C7E4_1D3E4(rdram, ctx);
        goto after_0;
    // 0x8001B72C: sh          $t6, -0x7674($at)
    MEM_H(-0X7674, ctx->r1) = ctx->r14;
    after_0:
    // 0x8001B730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B738: jr          $ra
    // 0x8001B73C: nop

    TRACE_RETURN()
    return;
    // 0x8001B73C: nop

;}
RECOMP_FUNC void func_8001D460_1E060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D460: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D464: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D468: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001D46C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001D470: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001D474: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D478: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D47C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D480: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D484: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8001D488: nop

    // 0x8001D48C: bc1fl       L_8001D4A0
    if (!c1cs) {
        // 0x8001D490: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8001D4A0;
    }
    goto skip_0;
    // 0x8001D490: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x8001D494: b           L_8001D4A0
    // 0x8001D498: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_8001D4A0;
    // 0x8001D498: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x8001D49C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8001D4A0:
    // 0x8001D4A0: ldc1        $f10, -0x46E8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X46E8);
    // 0x8001D4A4: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8001D4A8: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8001D4AC: nop

    // 0x8001D4B0: bc1fl       L_8001D510
    if (!c1cs) {
        // 0x8001D4B4: lwc1        $f8, 0x0($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
            goto L_8001D510;
    }
    goto skip_1;
    // 0x8001D4B4: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x8001D4B8: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D4BC: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x8001D4C0: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D4C4: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8001D4C8: nop

    // 0x8001D4CC: bc1fl       L_8001D4F4
    if (!c1cs) {
        // 0x8001D4D0: lwc1        $f18, 0x8($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8001D4F4;
    }
    goto skip_2;
    // 0x8001D4D0: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x8001D4D4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D4D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D4DC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8001D4E0: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x8001D4E4: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D4E8: b           L_8001D5B0
    // 0x8001D4EC: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
        goto L_8001D5B0;
    // 0x8001D4EC: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x8001D4F0: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
L_8001D4F4:
    // 0x8001D4F4: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x8001D4F8: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D4FC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8001D500: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8001D504: b           L_8001D5B0
    // 0x8001D508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001D5B0;
    // 0x8001D508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D50C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
L_8001D510:
    // 0x8001D510: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D518: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8001D51C: nop

    // 0x8001D520: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8001D524: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001D528: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001D52C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x8001D530: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D534: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D538: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D53C: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8001D540: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D544: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8001D548: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001D54C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D550: neg.s       $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = -ctx->f6.fl;
    // 0x8001D554: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8001D558: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D55C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001D560: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001D564: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D568: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x8001D56C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D570: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D574: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D578: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8001D57C: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D580: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8001D584: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D588: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8001D58C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D590: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001D594: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001D598: swc1        $f18, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f18.u32l;
    // 0x8001D59C: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8001D5A0: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001D5A4: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8001D5A8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8001D5AC: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
L_8001D5B0:
    // 0x8001D5B0: jr          $ra
    // 0x8001D5B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8001D5B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80036928_37528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036928: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8003692C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80036930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036934: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80036938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003693C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80036940: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80036944: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80036948: lw          $v0, -0x4FEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4FEC);
    // 0x8003694C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80036950: beql        $v0, $zero, L_800369A8
    if (ctx->r2 == 0) {
        // 0x80036954: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800369A8;
    }
    goto skip_0;
    // 0x80036954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80036958: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x8003695C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80036960: subu        $t8, $a2, $t6
    ctx->r24 = SUB32(ctx->r6, ctx->r14);
    // 0x80036964: beq         $a2, $v1, L_80036998
    if (ctx->r6 == ctx->r3) {
        // 0x80036968: slt         $at, $v1, $t8
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
            goto L_80036998;
    }
    // 0x80036968: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8003696C: beq         $at, $zero, L_80036984
    if (ctx->r1 == 0) {
        // 0x80036970: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_80036984;
    }
    // 0x80036970: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80036974: addu        $t9, $v1, $t6
    ctx->r25 = ADD32(ctx->r3, ctx->r14);
    // 0x80036978: sb          $t9, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r25;
    // 0x8003697C: b           L_800369A4
    // 0x80036980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800369A4;
    // 0x80036980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80036984:
    // 0x80036984: sb          $t0, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r8;
    // 0x80036988: jal         0x80041770
    // 0x8003698C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x8003698C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80036990: b           L_800369A4
    // 0x80036994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800369A4;
    // 0x80036994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80036998:
    // 0x80036998: jal         0x80041770
    // 0x8003699C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_1;
    // 0x8003699C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800369A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800369A4:
    // 0x800369A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800369A8:
    // 0x800369A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800369AC: jr          $ra
    // 0x800369B0: nop

    TRACE_RETURN()
    return;
    // 0x800369B0: nop

;}
RECOMP_FUNC void func_8000DBF0_E7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DBF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000DBF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DBF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000DBFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000DC00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000DC04: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000DC08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000DC0C: jal         0x80035EEC
    // 0x8000DC10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x8000DC10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8000DC14: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000DC18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000DC1C: beql        $t6, $zero, L_8000DCF4
    if (ctx->r14 == 0) {
        // 0x8000DC20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000DCF4;
    }
    goto skip_0;
    // 0x8000DC20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8000DC24: beq         $v0, $zero, L_8000DCF0
    if (ctx->r2 == 0) {
        // 0x8000DC28: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_8000DCF0;
    }
    // 0x8000DC28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000DC2C: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x8000DC30: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8000DC34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000DC38: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8000DC3C: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
    // 0x8000DC40: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000DC44: lui         $t5, 0xC
    ctx->r13 = S32(0XC << 16);
    // 0x8000DC48: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8000DC4C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000DC50: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x8000DC54: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000DC58: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8000DC5C: lhu         $t9, 0x3A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3A);
    // 0x8000DC60: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    // 0x8000DC64: lhu         $t0, 0x3E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3E);
    // 0x8000DC68: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x8000DC6C: lhu         $t1, 0x42($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X42);
    // 0x8000DC70: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x8000DC74: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000DC78: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x8000DC7C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000DC80: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x8000DC84: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000DC88: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x8000DC8C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x8000DC90: sw          $zero, 0x74($v0)
    MEM_W(0X74, ctx->r2) = 0;
    // 0x8000DC94: sw          $zero, 0x78($v0)
    MEM_W(0X78, ctx->r2) = 0;
    // 0x8000DC98: sb          $zero, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = 0;
    // 0x8000DC9C: sh          $zero, 0x7E($v0)
    MEM_H(0X7E, ctx->r2) = 0;
    // 0x8000DCA0: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x8000DCA4: swc1        $f0, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f0.u32l;
    // 0x8000DCA8: swc1        $f0, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f0.u32l;
    // 0x8000DCAC: swc1        $f0, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f0.u32l;
    // 0x8000DCB0: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x8000DCB4: lhu         $t2, 0x52($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X52);
    // 0x8000DCB8: sh          $t2, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r10;
    // 0x8000DCBC: lhu         $t3, 0x56($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X56);
    // 0x8000DCC0: sh          $t3, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r11;
    // 0x8000DCC4: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x8000DCC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8000DCCC: lhu         $t5, 0x2D90($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X2D90);
    // 0x8000DCD0: sh          $zero, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = 0;
    // 0x8000DCD4: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8000DCD8: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x8000DCDC: sh          $t5, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r13;
    // 0x8000DCE0: jal         0x80014218
    // 0x8000DCE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80014218_14E18(rdram, ctx);
        goto after_1;
    // 0x8000DCE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8000DCE8: b           L_8000DCF4
    // 0x8000DCEC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_8000DCF4;
    // 0x8000DCEC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8000DCF0:
    // 0x8000DCF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000DCF4:
    // 0x8000DCF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DCF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000DCFC: jr          $ra
    // 0x8000DD00: nop

    TRACE_RETURN()
    return;
    // 0x8000DD00: nop

;}
RECOMP_FUNC void func_8003BED4_3CAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BED4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003BED8: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003BEDC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003BEE0: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8003BEE4: lw          $t9, 0x1728($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1728);
    // 0x8003BEE8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003BEEC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8003BEF0: sh          $t8, 0x2E($t9)
    MEM_H(0X2E, ctx->r25) = ctx->r24;
    // 0x8003BEF4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003BEF8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003BEFC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8003BF00: jr          $ra
    // 0x8003BF04: nop

    TRACE_RETURN()
    return;
    // 0x8003BF04: nop

;}
RECOMP_FUNC void func_80011B60_12760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011B60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80011B64: lw          $v0, -0x39DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39DC);
    // 0x80011B68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80011B6C: addiu       $a0, $a0, -0x39D8
    ctx->r4 = ADD32(ctx->r4, -0X39D8);
    // 0x80011B70: beq         $v0, $zero, L_80011BAC
    if (ctx->r2 == 0) {
        // 0x80011B74: nop
    
            goto L_80011BAC;
    }
    // 0x80011B74: nop

    // 0x80011B78: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80011B7C: beq         $t6, $zero, L_80011BAC
    if (ctx->r14 == 0) {
        // 0x80011B80: nop
    
            goto L_80011BAC;
    }
    // 0x80011B80: nop

    // 0x80011B84: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x80011B88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80011B8C: ori         $t8, $t7, 0x14
    ctx->r24 = ctx->r15 | 0X14;
    // 0x80011B90: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
    // 0x80011B94: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80011B98: sb          $t9, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r25;
    // 0x80011B9C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80011BA0: lbu         $t1, 0x4($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4);
    // 0x80011BA4: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x80011BA8: sb          $t2, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r10;
L_80011BAC:
    // 0x80011BAC: jr          $ra
    // 0x80011BB0: nop

    TRACE_RETURN()
    return;
    // 0x80011BB0: nop

;}
RECOMP_FUNC void func_8001D394_1DF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D394: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D398: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D39C: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D3A0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001D3A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001D3A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D3AC: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8001D3B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D3B4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D3B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001D3BC: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8001D3C0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x8001D3C4: nop

    // 0x8001D3C8: bc1tl       L_8001D43C
    if (c1cs) {
        // 0x8001D3CC: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_8001D43C;
    }
    goto skip_0;
    // 0x8001D3CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_0:
    // 0x8001D3D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001D3D4: nop

    // 0x8001D3D8: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x8001D3DC: nop

    // 0x8001D3E0: bc1tl       L_8001D43C
    if (c1cs) {
        // 0x8001D3E4: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_8001D43C;
    }
    goto skip_1;
    // 0x8001D3E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x8001D3E8: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8001D3EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001D3F0: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8001D3F4: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x8001D3F8: nop

    // 0x8001D3FC: bc1fl       L_8001D408
    if (!c1cs) {
        // 0x8001D400: sqrt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
            goto L_8001D408;
    }
    goto skip_2;
    // 0x8001D400: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    skip_2:
    // 0x8001D404: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
L_8001D408:
    // 0x8001D408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001D40C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001D410: nop

    // 0x8001D414: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001D418: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8001D41C: nop

    // 0x8001D420: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001D424: nop

    // 0x8001D428: mul.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001D42C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8001D430: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8001D434: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x8001D438: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_8001D43C:
    // 0x8001D43C: nop

    // 0x8001D440: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x8001D444: nop

    // 0x8001D448: bc1f        L_8001D458
    if (!c1cs) {
        // 0x8001D44C: nop
    
            goto L_8001D458;
    }
    // 0x8001D44C: nop

    // 0x8001D450: jr          $ra
    // 0x8001D454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8001D454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001D458:
    // 0x8001D458: jr          $ra
    // 0x8001D45C: nop

    TRACE_RETURN()
    return;
    // 0x8001D45C: nop

;}
RECOMP_FUNC void func_80014B74_15774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014B74: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80014B78: beq         $v1, $zero, L_80014B98
    if (ctx->r3 == 0) {
        // 0x80014B7C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80014B98;
    }
    // 0x80014B7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80014B80: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
L_80014B84:
    // 0x80014B84: beq         $a1, $t6, L_80014B98
    if (ctx->r5 == ctx->r14) {
        // 0x80014B88: nop
    
            goto L_80014B98;
    }
    // 0x80014B88: nop

    // 0x80014B8C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80014B90: bnel        $v0, $zero, L_80014B84
    if (ctx->r2 != 0) {
        // 0x80014B94: lw          $t6, 0x0($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X0);
            goto L_80014B84;
    }
    goto skip_0;
    // 0x80014B94: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_80014B98:
    // 0x80014B98: bnel        $v0, $zero, L_80014BAC
    if (ctx->r2 != 0) {
        // 0x80014B9C: lw          $a2, 0xC($v0)
        ctx->r6 = MEM_W(ctx->r2, 0XC);
            goto L_80014BAC;
    }
    goto skip_1;
    // 0x80014B9C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x80014BA0: jr          $ra
    // 0x80014BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80014BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80014BA8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
L_80014BAC:
    // 0x80014BAC: bne         $v0, $v1, L_80014BBC
    if (ctx->r2 != ctx->r3) {
        // 0x80014BB0: lw          $a3, 0x8($v0)
        ctx->r7 = MEM_W(ctx->r2, 0X8);
            goto L_80014BBC;
    }
    // 0x80014BB0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80014BB4: b           L_80014BC0
    // 0x80014BB8: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
        goto L_80014BC0;
    // 0x80014BB8: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
L_80014BBC:
    // 0x80014BBC: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
L_80014BC0:
    // 0x80014BC0: beql        $a3, $zero, L_80014BD0
    if (ctx->r7 == 0) {
        // 0x80014BC4: lw          $a0, 0x4($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X4);
            goto L_80014BD0;
    }
    goto skip_2;
    // 0x80014BC4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    skip_2:
    // 0x80014BC8: sw          $a2, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r6;
    // 0x80014BCC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
L_80014BD0:
    // 0x80014BD0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80014BD4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80014BD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80014BDC: beq         $a0, $zero, L_80014BF8
    if (ctx->r4 == 0) {
        // 0x80014BE0: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_80014BF8;
    }
    // 0x80014BE0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_80014BE4:
    // 0x80014BE4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80014BE8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80014BEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80014BF0: bne         $a0, $zero, L_80014BE4
    if (ctx->r4 != 0) {
        // 0x80014BF4: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_80014BE4;
    }
    // 0x80014BF4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_80014BF8:
    // 0x80014BF8: jr          $ra
    // 0x80014BFC: nop

    TRACE_RETURN()
    return;
    // 0x80014BFC: nop

;}
RECOMP_FUNC void func_80034710_35310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034710: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80034714: lw          $v0, -0x2CD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2CD8);
    // 0x80034718: beq         $v0, $zero, L_8003472C
    if (ctx->r2 == 0) {
        // 0x8003471C: nop
    
            goto L_8003472C;
    }
    // 0x8003471C: nop

    // 0x80034720: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80034724:
    // 0x80034724: bnel        $v0, $zero, L_80034724
    if (ctx->r2 != 0) {
        // 0x80034728: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_80034724;
    }
    goto skip_0;
    // 0x80034728: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_8003472C:
    // 0x8003472C: jr          $ra
    // 0x80034730: nop

    TRACE_RETURN()
    return;
    // 0x80034730: nop

;}
RECOMP_FUNC void func_80037000_37C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037000: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80037004: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80037008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003700C: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x80037010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037014: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80037018: lhu         $v1, -0x520E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520E);
    // 0x8003701C: addiu       $t6, $zero, 0x25F
    ctx->r14 = ADD32(0, 0X25F);
    // 0x80037020: slti        $at, $v1, 0x263
    ctx->r1 = SIGNED(ctx->r3) < 0X263 ? 1 : 0;
    // 0x80037024: bne         $at, $zero, L_8003703C
    if (ctx->r1 != 0) {
        // 0x80037028: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_8003703C;
    }
    // 0x80037028: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8003702C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037030: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80037034: b           L_80037048
    // 0x80037038: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
        goto L_80037048;
    // 0x80037038: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
L_8003703C:
    // 0x8003703C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80037044: sh          $t7, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r15;
L_80037048:
    // 0x80037048: jal         0x80003728
    // 0x8003704C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x8003704C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80037050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037058: jr          $ra
    // 0x8003705C: nop

    TRACE_RETURN()
    return;
    // 0x8003705C: nop

;}
RECOMP_FUNC void func_8001198C_1258C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001198C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011994: jal         0x80013B14
    // 0x80011998: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_0;
    // 0x80011998: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x8001199C: jal         0x800141C4
    // 0x800119A0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x800119A0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
    // 0x800119A4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x800119A8: jal         0x80001EB0
    // 0x800119AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80001EB0_2AB0(rdram, ctx);
        goto after_2;
    // 0x800119AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x800119B0: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x800119B4: addiu       $t9, $t9, 0x26B8
    ctx->r25 = ADD32(ctx->r25, 0X26B8);
    // 0x800119B8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800119BC: jalr        $t9
    // 0x800119C0: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800119C0: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_3:
    // 0x800119C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800119C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800119CC: jr          $ra
    // 0x800119D0: nop

    TRACE_RETURN()
    return;
    // 0x800119D0: nop

;}
RECOMP_FUNC void func_800086D8_92D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800086D8: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    // 0x800086DC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800086E0: lw          $t6, 0x2C38($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2C38);
    // 0x800086E4: jr          $ra
    // 0x800086E8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x800086E8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8001D14C_1DD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D14C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001D150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D154: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001D158: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001D15C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8001D160: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D164: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8001D168: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001D16C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8001D170: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8001D174: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001D178: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8001D17C: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8001D180: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x8001D184: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8001D188: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001D18C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8001D190: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8001D194: jal         0x8001D898
    // 0x8001D198: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x8001D198: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8001D19C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001D1A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001D1A4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D1A8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001D1AC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8001D1B0: nop

    // 0x8001D1B4: bc1fl       L_8001D1C8
    if (!c1cs) {
        // 0x8001D1B8: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_8001D1C8;
    }
    goto skip_0;
    // 0x8001D1B8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
    // 0x8001D1BC: b           L_8001D1C8
    // 0x8001D1C0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8001D1C8;
    // 0x8001D1C0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x8001D1C4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8001D1C8:
    // 0x8001D1C8: ldc1        $f2, -0x46F8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X46F8);
    // 0x8001D1CC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8001D1D0: c.lt.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d < ctx->f2.d;
    // 0x8001D1D4: nop

    // 0x8001D1D8: bc1f        L_8001D218
    if (!c1cs) {
        // 0x8001D1DC: nop
    
            goto L_8001D218;
    }
    // 0x8001D1DC: nop

    // 0x8001D1E0: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8001D1E4: nop

    // 0x8001D1E8: bc1fl       L_8001D1FC
    if (!c1cs) {
        // 0x8001D1EC: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8001D1FC;
    }
    goto skip_1;
    // 0x8001D1EC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_1:
    // 0x8001D1F0: b           L_8001D1FC
    // 0x8001D1F4: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8001D1FC;
    // 0x8001D1F4: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8001D1F8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8001D1FC:
    // 0x8001D1FC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8001D200: c.lt.d      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.d < ctx->f2.d;
    // 0x8001D204: nop

    // 0x8001D208: bc1f        L_8001D218
    if (!c1cs) {
        // 0x8001D20C: nop
    
            goto L_8001D218;
    }
    // 0x8001D20C: nop

    // 0x8001D210: b           L_8001D220
    // 0x8001D214: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_8001D220;
    // 0x8001D214: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8001D218:
    // 0x8001D218: jal         0x800040A8
    // 0x8001D21C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001D21C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    after_1:
L_8001D220:
    // 0x8001D220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001D228: jr          $ra
    // 0x8001D22C: nop

    TRACE_RETURN()
    return;
    // 0x8001D22C: nop

;}
RECOMP_FUNC void func_80033F24_34B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033F24: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x80033F28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80033F2C: andi        $t8, $t7, 0xBFFF
    ctx->r24 = ctx->r15 & 0XBFFF;
    // 0x80033F30: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x80033F34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80033F38: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80033F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80033F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80033F44: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80033F48: bne         $at, $zero, L_80033F68
    if (ctx->r1 != 0) {
        // 0x80033F4C: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_80033F68;
    }
    // 0x80033F4C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80033F50: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80033F54: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x80033F58: addu        $v0, $t8, $at
    ctx->r2 = ADD32(ctx->r24, ctx->r1);
    // 0x80033F5C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x80033F60: b           L_800340E8
    // 0x80033F64: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800340E8;
    // 0x80033F64: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80033F68:
    // 0x80033F68: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x80033F6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80033F70: beq         $t0, $zero, L_80033F90
    if (ctx->r8 == 0) {
        // 0x80033F74: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_80033F90;
    }
    // 0x80033F74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033F78: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80033F7C: andi        $t1, $a0, 0x7FFF
    ctx->r9 = ctx->r4 & 0X7FFF;
    // 0x80033F80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80033F84: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80033F88: b           L_80033FB0
    // 0x80033F8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80033FB0;
    // 0x80033F8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80033F90:
    // 0x80033F90: lwc1        $f0, -0x7084($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7084);
    // 0x80033F94: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80033F98: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x80033F9C: nop

    // 0x80033FA0: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80033FA4: nop

    // 0x80033FA8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80033FAC: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80033FB0:
    // 0x80033FB0: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x80033FB4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80033FB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80033FBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033FC0: bc1fl       L_80033FDC
    if (!c1cs) {
        // 0x80033FC4: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_80033FDC;
    }
    goto skip_0;
    // 0x80033FC4: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x80033FC8: jal         0x80034268
    // 0x80033FCC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80034268_34E68(rdram, ctx);
        goto after_0;
    // 0x80033FCC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x80033FD0: b           L_800340EC
    // 0x80033FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800340EC;
    // 0x80033FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80033FD8: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_80033FDC:
    // 0x80033FDC: lwc1        $f4, -0x7088($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7088);
    // 0x80033FE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80033FE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80033FE8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80033FEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033FF0: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x80033FF4: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x80033FF8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80033FFC: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80034000: nop

    // 0x80034004: bc1f        L_8003402C
    if (!c1cs) {
        // 0x80034008: nop
    
            goto L_8003402C;
    }
    // 0x80034008: nop

    // 0x8003400C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80034010: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80034014: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80034018: jal         0x80034268
    // 0x8003401C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80034268_34E68(rdram, ctx);
        goto after_1;
    // 0x8003401C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80034020: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80034024: b           L_8003403C
    // 0x80034028: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
        goto L_8003403C;
    // 0x80034028: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
L_8003402C:
    // 0x8003402C: jal         0x80034268
    // 0x80034030: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80034268_34E68(rdram, ctx);
        goto after_2;
    // 0x80034030: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80034034: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80034038: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
L_8003403C:
    // 0x8003403C: lhu         $v1, 0x36($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X36);
    // 0x80034040: lhu         $t3, 0x34($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X34);
    // 0x80034044: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80034048: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8003404C: subu        $t4, $t3, $v1
    ctx->r12 = SUB32(ctx->r11, ctx->r3);
    // 0x80034050: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80034054: nop

    // 0x80034058: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003405C: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80034060: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80034064: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80034068: nop

    // 0x8003406C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80034070: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80034074: nop

    // 0x80034078: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8003407C: beql        $t6, $zero, L_800340CC
    if (ctx->r14 == 0) {
        // 0x80034080: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_800340CC;
    }
    goto skip_1;
    // 0x80034080: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x80034084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80034088: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003408C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80034090: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80034094: nop

    // 0x80034098: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8003409C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800340A0: nop

    // 0x800340A4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x800340A8: bne         $t6, $zero, L_800340C0
    if (ctx->r14 != 0) {
        // 0x800340AC: nop
    
            goto L_800340C0;
    }
    // 0x800340AC: nop

    // 0x800340B0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800340B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800340B8: b           L_800340D8
    // 0x800340BC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_800340D8;
    // 0x800340BC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_800340C0:
    // 0x800340C0: b           L_800340D8
    // 0x800340C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_800340D8;
    // 0x800340C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800340C8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_800340CC:
    // 0x800340CC: nop

    // 0x800340D0: bltz        $t6, L_800340C0
    if (SIGNED(ctx->r14) < 0) {
        // 0x800340D4: nop
    
            goto L_800340C0;
    }
    // 0x800340D4: nop

L_800340D8:
    // 0x800340D8: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x800340DC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800340E0: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x800340E4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800340E8:
    // 0x800340E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800340EC:
    // 0x800340EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800340F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800340F4: jr          $ra
    // 0x800340F8: nop

    TRACE_RETURN()
    return;
    // 0x800340F8: nop

;}
RECOMP_FUNC void func_800124AC_130AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800124AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800124B0: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800124B4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x800124B8: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    // 0x800124BC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800124C0: nop

    // 0x800124C4: bc1fl       L_800124E8
    if (!c1cs) {
        // 0x800124C8: lwc1        $f10, 0x1C($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_800124E8;
    }
    goto skip_0;
    // 0x800124C8: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x800124CC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x800124D0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x800124D4: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800124D8: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800124DC: b           L_800124F0
    // 0x800124E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800124F0;
    // 0x800124E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x800124E4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
L_800124E8:
    // 0x800124E8: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800124EC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_800124F0:
    // 0x800124F0: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800124F4: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800124F8: jr          $ra
    // 0x800124FC: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800124FC: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000DF10_EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DF10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000DF14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000DF18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000DF1C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000DF20: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8000DF24: sw          $t6, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r14;
    // 0x8000DF28: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DF2C: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x8000DF30: sw          $t8, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r24;
    // 0x8000DF34: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x8000DF38: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8000DF3C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8000DF40: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8000DF44: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8000DF48: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x8000DF4C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8000DF50: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8000DF54: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000DF58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000DF5C: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8000DF60: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000DF64: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8000DF68: lui         $t0, 0xB800
    ctx->r8 = S32(0XB800 << 16);
    // 0x8000DF6C: sw          $t1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r9;
    // 0x8000DF70: sw          $t0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r8;
    // 0x8000DF74: sw          $zero, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = 0;
    // 0x8000DF78: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8000DF7C: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x8000DF80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000DF84: jal         0x80040620
    // 0x8000DF88: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000DF88: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x8000DF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DF90: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000DF94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000DF98: jr          $ra
    // 0x8000DF9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8000DF9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80011C04_12804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011C04: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80011C08: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80011C0C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80011C10: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x80011C14: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80011C18: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80011C1C: lw          $v0, 0x78E8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X78E8);
    // 0x80011C20: beq         $v0, $zero, L_80011C50
    if (ctx->r2 == 0) {
        // 0x80011C24: nop
    
            goto L_80011C50;
    }
    // 0x80011C24: nop

    // 0x80011C28: lhu         $t8, 0x22($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22);
    // 0x80011C2C: ori         $t9, $t8, 0x14
    ctx->r25 = ctx->r24 | 0X14;
    // 0x80011C30: sh          $t9, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r25;
    // 0x80011C34: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80011C38: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x80011C3C: lw          $t2, 0x78E8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X78E8);
    // 0x80011C40: lw          $v1, 0x18($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X18);
    // 0x80011C44: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x80011C48: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x80011C4C: sb          $t4, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r12;
L_80011C50:
    // 0x80011C50: jr          $ra
    // 0x80011C54: nop

    TRACE_RETURN()
    return;
    // 0x80011C54: nop

;}
RECOMP_FUNC void func_80014C20_15820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014C20: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80014C24: sw          $zero, -0x5240($at)
    MEM_W(-0X5240, ctx->r1) = 0;
    // 0x80014C28: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80014C2C: sw          $zero, -0x523C($at)
    MEM_W(-0X523C, ctx->r1) = 0;
    // 0x80014C30: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80014C34: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80014C38: sw          $t6, -0x5238($at)
    MEM_W(-0X5238, ctx->r1) = ctx->r14;
    // 0x80014C3C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80014C40: sw          $zero, -0x5234($at)
    MEM_W(-0X5234, ctx->r1) = 0;
    // 0x80014C44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80014C48: sw          $a0, -0x7EA0($at)
    MEM_W(-0X7EA0, ctx->r1) = ctx->r4;
    // 0x80014C4C: jr          $ra
    // 0x80014C50: nop

    TRACE_RETURN()
    return;
    // 0x80014C50: nop

;}
RECOMP_FUNC void func_8000394C_454C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000394C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003954: jal         0x80034734
    // 0x80003958: nop

    func_80034734_35334(rdram, ctx);
        goto after_0;
    // 0x80003958: nop

    after_0:
    // 0x8000395C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80003960: jal         0x80036908
    // 0x80003964: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036908_37508(rdram, ctx);
        goto after_1;
    // 0x80003964: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_1:
    // 0x80003968: bne         $v0, $zero, L_800039B0
    if (ctx->r2 != 0) {
        // 0x8000396C: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_800039B0;
    }
    // 0x8000396C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80003970: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80003974: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80003978: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000397C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80003980: sb          $t6, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r14;
    // 0x80003984: jal         0x80003880
    // 0x80003988: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    func_80003880_4480(rdram, ctx);
        goto after_2;
    // 0x80003988: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    after_2:
    // 0x8000398C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003990: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80003994: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x80003998: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000399C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x800039A0: lbu         $t8, -0x522A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X522A);
    // 0x800039A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800039A8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800039AC: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
L_800039B0:
    // 0x800039B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800039B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800039B8: jr          $ra
    // 0x800039BC: nop

    TRACE_RETURN()
    return;
    // 0x800039BC: nop

;}
RECOMP_FUNC void func_80006274_6E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006274: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80006278: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000627C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80006280: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80006284: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80006288: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    // 0x8000628C: sh          $a0, 0x2E3B($at)
    MEM_H(0X2E3B, ctx->r1) = ctx->r4;
    // 0x80006290: jr          $ra
    // 0x80006294: sw          $a1, 0x2E3D($at)
    MEM_W(0X2E3D, ctx->r1) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80006294: sw          $a1, 0x2E3D($at)
    MEM_W(0X2E3D, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_8000E9B0_F5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E9B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E9B4: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000E9B8: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000E9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E9C0: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8000E9C4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E9C8: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8000E9CC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E9D0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000E9D4: jal         0x800040A8
    // 0x8000E9D8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000E9D8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8000E9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E9E0: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x8000E9E4: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8000E9E8: andi        $v0, $t7, 0x3FF
    ctx->r2 = ctx->r15 & 0X3FF;
    // 0x8000E9EC: jr          $ra
    // 0x8000E9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000E9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A204_3AE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A204: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A208: lbu         $t6, 0x9DC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9DC);
    // 0x8003A20C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003A210: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A214: bne         $t6, $zero, L_8003A220
    if (ctx->r14 != 0) {
        // 0x8003A218: nop
    
            goto L_8003A220;
    }
    // 0x8003A218: nop

    // 0x8003A21C: sb          $t7, 0x9DB($at)
    MEM_B(0X9DB, ctx->r1) = ctx->r15;
L_8003A220:
    // 0x8003A220: jr          $ra
    // 0x8003A224: nop

    TRACE_RETURN()
    return;
    // 0x8003A224: nop

;}
RECOMP_FUNC void func_8003F608_40208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F60C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F610: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F614: jal         0x80038BC8
    // 0x8003F618: lhu         $a0, 0x7742($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7742);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x8003F618: lhu         $a0, 0x7742($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7742);
    after_0:
    // 0x8003F61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F624: jr          $ra
    // 0x8003F628: nop

    TRACE_RETURN()
    return;
    // 0x8003F628: nop

;}
RECOMP_FUNC void alSaveNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004E324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004E328: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E32C: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E330: addiu       $a2, $a2, 0x870
    ctx->r6 = ADD32(ctx->r6, 0X870);
    // 0x8004E334: addiu       $a1, $a1, 0x8A4
    ctx->r5 = ADD32(ctx->r5, 0X8A4);
    // 0x8004E338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004E33C: jal         0x800518C0
    // 0x8004E340: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E340: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x8004E344: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004E348: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004E34C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8004E350: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8004E354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004E358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004E35C: jr          $ra
    // 0x8004E360: nop

    TRACE_RETURN()
    return;
    // 0x8004E360: nop

;}
RECOMP_FUNC void func_8003F14C_3FD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F14C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8003F150: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x8003F154: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x8003F158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F15C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F164: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003F168: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8003F16C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003F170: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    // 0x8003F174: jal         0x8003521C
    // 0x8003F178: addiu       $a0, $a0, -0xE74
    ctx->r4 = ADD32(ctx->r4, -0XE74);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8003F178: addiu       $a0, $a0, -0xE74
    ctx->r4 = ADD32(ctx->r4, -0XE74);
    after_0:
    // 0x8003F17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F184: jr          $ra
    // 0x8003F188: nop

    TRACE_RETURN()
    return;
    // 0x8003F188: nop

;}
RECOMP_FUNC void func_80011A38_12638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011A40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80011A44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80011A48: jal         0x80035EEC
    // 0x80011A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x80011A4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80011A50: bne         $v0, $zero, L_80011A60
    if (ctx->r2 != 0) {
        // 0x80011A54: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80011A60;
    }
    // 0x80011A54: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80011A58: b           L_80011A8C
    // 0x80011A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80011A8C;
    // 0x80011A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011A60:
    // 0x80011A60: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80011A64: addiu       $t7, $t7, 0x3930
    ctx->r15 = ADD32(ctx->r15, 0X3930);
    // 0x80011A68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80011A6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80011A70: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80011A74: sb          $t6, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r14;
    // 0x80011A78: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
    // 0x80011A7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80011A80: sb          $zero, 0x65($v1)
    MEM_B(0X65, ctx->r3) = 0;
    // 0x80011A84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80011A88: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
L_80011A8C:
    // 0x80011A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80011A94: jr          $ra
    // 0x80011A98: nop

    TRACE_RETURN()
    return;
    // 0x80011A98: nop

;}
RECOMP_FUNC void func_80039D60_3A960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039D68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039D6C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039D70: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80039D74: sb          $zero, 0x9D6($at)
    MEM_B(0X9D6, ctx->r1) = 0;
    // 0x80039D78: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x80039D7C: addiu       $v0, $v0, 0xC28
    ctx->r2 = ADD32(ctx->r2, 0XC28);
    // 0x80039D80: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_80039D84:
    // 0x80039D84: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x80039D88: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80039D8C: bne         $at, $zero, L_80039D84
    if (ctx->r1 != 0) {
        // 0x80039D90: sw          $v1, -0xB0($v0)
        MEM_W(-0XB0, ctx->r2) = ctx->r3;
            goto L_80039D84;
    }
    // 0x80039D90: sw          $v1, -0xB0($v0)
    MEM_W(-0XB0, ctx->r2) = ctx->r3;
    // 0x80039D94: jal         0x80039DE4
    // 0x80039D98: nop

    func_80039DE4_3A9E4(rdram, ctx);
        goto after_0;
    // 0x80039D98: nop

    after_0:
    // 0x80039D9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039DA0: sh          $zero, 0x9EA($at)
    MEM_H(0X9EA, ctx->r1) = 0;
    // 0x80039DA4: sh          $zero, 0x9EC($at)
    MEM_H(0X9EC, ctx->r1) = 0;
    // 0x80039DA8: sh          $zero, 0x9EE($at)
    MEM_H(0X9EE, ctx->r1) = 0;
    // 0x80039DAC: sh          $zero, 0x9E8($at)
    MEM_H(0X9E8, ctx->r1) = 0;
    // 0x80039DB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039DB4: sb          $zero, 0x9E0($at)
    MEM_B(0X9E0, ctx->r1) = 0;
    // 0x80039DB8: sb          $zero, 0x9E1($at)
    MEM_B(0X9E1, ctx->r1) = 0;
    // 0x80039DBC: sb          $zero, 0x9E2($at)
    MEM_B(0X9E2, ctx->r1) = 0;
    // 0x80039DC0: sb          $zero, 0x9E3($at)
    MEM_B(0X9E3, ctx->r1) = 0;
    // 0x80039DC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80039DC8: sb          $zero, 0x2972($at)
    MEM_B(0X2972, ctx->r1) = 0;
    // 0x80039DCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80039DD0: sh          $zero, 0x2974($at)
    MEM_H(0X2974, ctx->r1) = 0;
    // 0x80039DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039DDC: jr          $ra
    // 0x80039DE0: nop

    TRACE_RETURN()
    return;
    // 0x80039DE0: nop

;}
RECOMP_FUNC void func_800340FC_34CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800340FC: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x80034100: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80034104: andi        $t8, $t7, 0xBFFF
    ctx->r24 = ctx->r15 & 0XBFFF;
    // 0x80034108: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8003410C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80034110: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80034114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003411C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80034120: bne         $at, $zero, L_80034140
    if (ctx->r1 != 0) {
        // 0x80034124: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_80034140;
    }
    // 0x80034124: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80034128: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8003412C: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x80034130: addu        $v0, $t8, $at
    ctx->r2 = ADD32(ctx->r24, ctx->r1);
    // 0x80034134: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80034138: b           L_80034254
    // 0x8003413C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80034254;
    // 0x8003413C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_80034140:
    // 0x80034140: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
    // 0x80034144: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80034148: beq         $t1, $zero, L_80034168
    if (ctx->r9 == 0) {
        // 0x8003414C: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_80034168;
    }
    // 0x8003414C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80034150: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80034154: andi        $t2, $a0, 0x7FFF
    ctx->r10 = ctx->r4 & 0X7FFF;
    // 0x80034158: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8003415C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80034160: b           L_80034188
    // 0x80034164: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80034188;
    // 0x80034164: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80034168:
    // 0x80034168: lwc1        $f0, -0x7084($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7084);
    // 0x8003416C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80034170: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x80034174: nop

    // 0x80034178: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8003417C: nop

    // 0x80034180: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80034184: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80034188:
    // 0x80034188: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8003418C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80034190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80034198: bc1fl       L_800341B8
    if (!c1cs) {
        // 0x8003419C: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_800341B8;
    }
    goto skip_0;
    // 0x8003419C: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x800341A0: jal         0x80034268
    // 0x800341A4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80034268_34E68(rdram, ctx);
        goto after_0;
    // 0x800341A4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x800341A8: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x800341AC: b           L_80034254
    // 0x800341B0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
        goto L_80034254;
    // 0x800341B0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800341B4: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_800341B8:
    // 0x800341B8: lwc1        $f4, -0x7088($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7088);
    // 0x800341BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800341C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800341C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800341C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800341CC: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    // 0x800341D0: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x800341D4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800341D8: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x800341DC: nop

    // 0x800341E0: bc1f        L_80034210
    if (!c1cs) {
        // 0x800341E4: nop
    
            goto L_80034210;
    }
    // 0x800341E4: nop

    // 0x800341E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800341EC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800341F0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800341F4: jal         0x80034268
    // 0x800341F8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80034268_34E68(rdram, ctx);
        goto after_1;
    // 0x800341F8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x800341FC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80034200: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80034204: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80034208: b           L_80034224
    // 0x8003420C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
        goto L_80034224;
    // 0x8003420C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
L_80034210:
    // 0x80034210: jal         0x80034268
    // 0x80034214: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80034268_34E68(rdram, ctx);
        goto after_2;
    // 0x80034214: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80034218: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003421C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x80034220: lh          $v1, 0x36($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X36);
L_80034224:
    // 0x80034224: lh          $t7, 0x34($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X34);
    // 0x80034228: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x8003422C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80034230: nop

    // 0x80034234: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80034238: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8003423C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80034240: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80034244: nop

    // 0x80034248: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x8003424C: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80034250: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_80034254:
    // 0x80034254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034258: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003425C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80034260: jr          $ra
    // 0x80034264: nop

    TRACE_RETURN()
    return;
    // 0x80034264: nop

;}
RECOMP_FUNC void func_80038C30_39830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038C30: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038C34: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80038C38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80038C3C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80038C40: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80038C44: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80038C48: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80038C4C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80038C50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80038C54: beq         $a0, $zero, L_80038D0C
    if (ctx->r4 == 0) {
        // 0x80038C58: lui         $t1, 0x801C
        ctx->r9 = S32(0X801C << 16);
            goto L_80038D0C;
    }
    // 0x80038C58: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x80038C5C: addiu       $t1, $t1, 0x9C9
    ctx->r9 = ADD32(ctx->r9, 0X9C9);
    // 0x80038C60: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80038C64: beq         $a1, $zero, L_80038C78
    if (ctx->r5 == 0) {
        // 0x80038C68: sb          $t9, 0x0($t1)
        MEM_B(0X0, ctx->r9) = ctx->r25;
            goto L_80038C78;
    }
    // 0x80038C68: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x80038C6C: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x80038C70: bne         $at, $zero, L_80038C80
    if (ctx->r1 != 0) {
        // 0x80038C74: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80038C80;
    }
    // 0x80038C74: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80038C78:
    // 0x80038C78: b           L_80038C88
    // 0x80038C7C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_80038C88;
    // 0x80038C7C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80038C80:
    // 0x80038C80: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x80038C84: addu        $v1, $a0, $t3
    ctx->r3 = ADD32(ctx->r4, ctx->r11);
L_80038C88:
    // 0x80038C88: beq         $a2, $zero, L_80038C98
    if (ctx->r6 == 0) {
        // 0x80038C8C: lui         $t2, 0x801C
        ctx->r10 = S32(0X801C << 16);
            goto L_80038C98;
    }
    // 0x80038C8C: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x80038C90: sll         $t4, $a2, 24
    ctx->r12 = S32(ctx->r6 << 24);
    // 0x80038C94: or          $v1, $v1, $t4
    ctx->r3 = ctx->r3 | ctx->r12;
L_80038C98:
    // 0x80038C98: addiu       $t2, $t2, 0x9FD
    ctx->r10 = ADD32(ctx->r10, 0X9FD);
    // 0x80038C9C: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x80038CA0: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80038CA4: beq         $at, $zero, L_80038D08
    if (ctx->r1 == 0) {
        // 0x80038CA8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80038D08;
    }
    // 0x80038CA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80038CAC: beql        $v0, $zero, L_80038CF4
    if (ctx->r2 == 0) {
        // 0x80038CB0: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_80038CF4;
    }
    goto skip_0;
    // 0x80038CB0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    skip_0:
    // 0x80038CB4: blez        $a1, L_80038CF0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80038CB8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80038CF0;
    }
    // 0x80038CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80038CBC: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x80038CC0: addiu       $t0, $t0, 0xA00
    ctx->r8 = ADD32(ctx->r8, 0XA00);
    // 0x80038CC4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
L_80038CC8:
    // 0x80038CC8: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80038CCC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80038CD0: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80038CD4: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80038CD8: bne         $a3, $t6, L_80038CE8
    if (ctx->r7 != ctx->r14) {
        // 0x80038CDC: nop
    
            goto L_80038CE8;
    }
    // 0x80038CDC: nop

    // 0x80038CE0: jr          $ra
    // 0x80038CE4: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    TRACE_RETURN()
    return;
    // 0x80038CE4: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_80038CE8:
    // 0x80038CE8: bne         $at, $zero, L_80038CC8
    if (ctx->r1 != 0) {
        // 0x80038CEC: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80038CC8;
    }
    // 0x80038CEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_80038CF0:
    // 0x80038CF0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
L_80038CF4:
    // 0x80038CF4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80038CF8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80038CFC: sw          $v1, 0xA00($at)
    MEM_W(0XA00, ctx->r1) = ctx->r3;
    // 0x80038D00: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80038D04: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
L_80038D08:
    // 0x80038D08: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_80038D0C:
    // 0x80038D0C: jr          $ra
    // 0x80038D10: nop

    TRACE_RETURN()
    return;
    // 0x80038D10: nop

;}
RECOMP_FUNC void func_8001DF94_1EB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001DF94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001DF98: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8001DF9C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8001DFA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001DFA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001DFA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001DFAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001DFB0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001DFB4: jal         0x800040A8
    // 0x8001DFB8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8001DFB8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_0:
    // 0x8001DFBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001DFC0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8001DFC4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001DFC8: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8001DFCC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001DFD0: bc1fl       L_8001DFE4
    if (!c1cs) {
        // 0x8001DFD4: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_8001DFE4;
    }
    goto skip_0;
    // 0x8001DFD4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_0:
    // 0x8001DFD8: b           L_8001DFE4
    // 0x8001DFDC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_8001DFE4;
    // 0x8001DFDC: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x8001DFE0: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8001DFE4:
    // 0x8001DFE4: ldc1        $f8, -0x46B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X46B0);
    // 0x8001DFE8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8001DFEC: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001DFF0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8001DFF4: nop

    // 0x8001DFF8: bc1fl       L_8001E040
    if (!c1cs) {
        // 0x8001DFFC: lwc1        $f2, 0x44($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
            goto L_8001E040;
    }
    goto skip_1;
    // 0x8001DFFC: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x8001E000: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001E004: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E008: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E00C: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001E010: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8001E014: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001E018: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8001E01C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E020: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001E024: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8001E028: mul.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8001E02C: jal         0x800040A8
    // 0x8001E030: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001E030: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x8001E034: b           L_8001E0A8
    // 0x8001E038: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8001E0A8;
    // 0x8001E038: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8001E03C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
L_8001E040:
    // 0x8001E040: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8001E044: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001E048: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001E04C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E050: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E054: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8001E058: nop

    // 0x8001E05C: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8001E060: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8001E064: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8001E068: div.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8001E06C: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001E070: nop

    // 0x8001E074: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001E078: nop

    // 0x8001E07C: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8001E080: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001E084: jal         0x800040A8
    // 0x8001E088: div.s       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8001E088: div.s       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    after_2:
    // 0x8001E08C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8001E090: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001E094: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001E098: div.s       $f14, $f4, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8001E09C: jal         0x800040A8
    // 0x8001E0A0: div.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x8001E0A0: div.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    after_3:
    // 0x8001E0A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8001E0A8:
    // 0x8001E0A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001E0AC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8001E0B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001E0B4: jr          $ra
    // 0x8001E0B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8001E0B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alSynGetFXRef(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048530: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80048534: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80048538: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8004853C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80048540: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80048544: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80048548: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8004854C: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80048550: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80048554: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80048558: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8004855C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80048560: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80048564: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048568: bne         $t1, $at, L_800485A0
    if (ctx->r9 != ctx->r1) {
        // 0x8004856C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800485A0;
    }
    // 0x8004856C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80048570: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80048574: lw          $t2, 0x34($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X34);
    // 0x80048578: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x8004857C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80048580: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80048584: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048588: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x8004858C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80048590: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80048594: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80048598: jr          $ra
    // 0x8004859C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004859C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_800485A0:
    // 0x800485A0: jr          $ra
    // 0x800485A4: nop

    TRACE_RETURN()
    return;
    // 0x800485A4: nop

;}
RECOMP_FUNC void guFrustumF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80042BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042BA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80042BAC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80042BB0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80042BB4: jal         0x80043BA0
    // 0x80042BB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80042BB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80042BBC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80042BC0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80042BC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80042BC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80042BCC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80042BD0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80042BD4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80042BD8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80042BDC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80042BE0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80042BE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80042BE8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80042BEC: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80042BF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80042BF4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80042BF8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80042BFC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80042C00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80042C04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80042C08: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80042C0C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80042C10: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80042C14: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x80042C18: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x80042C1C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80042C20: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80042C24: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80042C28: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80042C2C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80042C30: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x80042C34: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80042C38: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x80042C3C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80042C40: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80042C44: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80042C48: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80042C4C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80042C50: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x80042C54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80042C58: nop

    // 0x80042C5C: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x80042C60: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x80042C64: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80042C68: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80042C6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80042C70: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80042C74: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80042C78: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80042C7C: beq         $v1, $a0, L_80042CC0
    if (ctx->r3 == ctx->r4) {
        // 0x80042C80: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80042CC0;
    }
    // 0x80042C80: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_80042C84:
    // 0x80042C84: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80042C88: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80042C8C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80042C90: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80042C94: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80042C98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80042C9C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80042CA0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80042CA4: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x80042CA8: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80042CAC: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80042CB0: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80042CB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80042CB8: bne         $v1, $a0, L_80042C84
    if (ctx->r3 != ctx->r4) {
        // 0x80042CBC: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_80042C84;
    }
    // 0x80042CBC: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
L_80042CC0:
    // 0x80042CC0: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80042CC4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80042CC8: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x80042CCC: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80042CD0: nop

    // 0x80042CD4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80042CD8: swc1        $f10, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80042CDC: swc1        $f6, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80042CE0: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80042CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042CEC: jr          $ra
    // 0x80042CF0: nop

    TRACE_RETURN()
    return;
    // 0x80042CF0: nop

;}
RECOMP_FUNC void func_80012380_12F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012380: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80012384: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80012388: ldc1        $f0, -0x4E78($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4E78);
    // 0x8001238C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012390: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80012394: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80012398: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001239C: bc1fl       L_800123AC
    if (!c1cs) {
        // 0x800123A0: lwc1        $f8, 0x40($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
            goto L_800123AC;
    }
    goto skip_0;
    // 0x800123A0: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    skip_0:
    // 0x800123A4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x800123A8: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
L_800123AC:
    // 0x800123AC: ori         $t6, $v1, 0x1
    ctx->r14 = ctx->r3 | 0X1;
    // 0x800123B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800123B4: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x800123B8: nop

    // 0x800123BC: bc1fl       L_800123CC
    if (!c1cs) {
        // 0x800123C0: lwc1        $f16, 0x50($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X50);
            goto L_800123CC;
    }
    goto skip_1;
    // 0x800123C0: lwc1        $f16, 0x50($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X50);
    skip_1:
    // 0x800123C4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x800123C8: lwc1        $f16, 0x50($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X50);
L_800123CC:
    // 0x800123CC: ori         $t7, $v1, 0x2
    ctx->r15 = ctx->r3 | 0X2;
    // 0x800123D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800123D4: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x800123D8: nop

    // 0x800123DC: bc1fl       L_800123EC
    if (!c1cs) {
        // 0x800123E0: lwc1        $f4, 0x48($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X48);
            goto L_800123EC;
    }
    goto skip_2;
    // 0x800123E0: lwc1        $f4, 0x48($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X48);
    skip_2:
    // 0x800123E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800123E8: lwc1        $f4, 0x48($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X48);
L_800123EC:
    // 0x800123EC: ori         $t8, $v1, 0x4
    ctx->r24 = ctx->r3 | 0X4;
    // 0x800123F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800123F4: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x800123F8: nop

    // 0x800123FC: bc1fl       L_8001240C
    if (!c1cs) {
        // 0x80012400: lwc1        $f8, 0x58($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X58);
            goto L_8001240C;
    }
    goto skip_3;
    // 0x80012400: lwc1        $f8, 0x58($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X58);
    skip_3:
    // 0x80012404: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80012408: lwc1        $f8, 0x58($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X58);
L_8001240C:
    // 0x8001240C: ori         $t9, $v1, 0x8
    ctx->r25 = ctx->r3 | 0X8;
    // 0x80012410: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80012414: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x80012418: nop

    // 0x8001241C: bc1fl       L_8001242C
    if (!c1cs) {
        // 0x80012420: lwc1        $f16, 0x68($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X68);
            goto L_8001242C;
    }
    goto skip_4;
    // 0x80012420: lwc1        $f16, 0x68($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X68);
    skip_4:
    // 0x80012424: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80012428: lwc1        $f16, 0x68($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X68);
L_8001242C:
    // 0x8001242C: ori         $t0, $v1, 0x10
    ctx->r8 = ctx->r3 | 0X10;
    // 0x80012430: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80012434: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x80012438: nop

    // 0x8001243C: bc1fl       L_8001244C
    if (!c1cs) {
        // 0x80012440: lwc1        $f4, 0x60($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X60);
            goto L_8001244C;
    }
    goto skip_5;
    // 0x80012440: lwc1        $f4, 0x60($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X60);
    skip_5:
    // 0x80012444: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80012448: lwc1        $f4, 0x60($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X60);
L_8001244C:
    // 0x8001244C: ori         $t1, $v1, 0x20
    ctx->r9 = ctx->r3 | 0X20;
    // 0x80012450: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012454: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80012458: nop

    // 0x8001245C: bc1f        L_80012468
    if (!c1cs) {
        // 0x80012460: nop
    
            goto L_80012468;
    }
    // 0x80012460: nop

    // 0x80012464: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_80012468:
    // 0x80012468: jr          $ra
    // 0x8001246C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8001246C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80001DC0_29C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001DC0: beq         $a0, $zero, L_80001DE8
    if (ctx->r4 == 0) {
        // 0x80001DC4: sll         $t7, $a0, 3
        ctx->r15 = S32(ctx->r4 << 3);
            goto L_80001DE8;
    }
    // 0x80001DC4: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80001DC8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80001DCC: addiu       $t9, $t9, 0x4ACC
    ctx->r25 = ADD32(ctx->r25, 0X4ACC);
    // 0x80001DD0: addiu       $t8, $t7, -0x8
    ctx->r24 = ADD32(ctx->r15, -0X8);
    // 0x80001DD4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80001DD8: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x80001DDC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80001DE0: jr          $ra
    // 0x80001DE4: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    TRACE_RETURN()
    return;
    // 0x80001DE4: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
L_80001DE8:
    // 0x80001DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80001DEC: jr          $ra
    // 0x80001DF0: nop

    TRACE_RETURN()
    return;
    // 0x80001DF0: nop

;}
RECOMP_FUNC void func_8002D924_2E524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002D924: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8002D928: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D92C: lwc1        $f4, -0x3BE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3BE8);
    // 0x8002D930: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x8002D934: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x8002D938: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002D93C: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x8002D940: lwc1        $f6, -0x3BE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3BE4);
    // 0x8002D944: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002D948: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002D94C: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x8002D950: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8002D954: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8002D958: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8002D95C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8002D960: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x8002D964: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8002D968: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x8002D96C: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x8002D970: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8002D974: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x8002D978: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x8002D97C: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x8002D980: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x8002D984: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x8002D988: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x8002D98C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x8002D990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D994: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8002D998: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8002D99C: lwc1        $f30, 0xE8($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8002D9A0: lw          $s0, 0xF4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF4);
    // 0x8002D9A4: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8002D9A8: lw          $s2, 0xEC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XEC);
    // 0x8002D9AC: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x8002D9B0: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x8002D9B4: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x8002D9B8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8002D9BC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002D9C0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x8002D9C4: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x8002D9C8: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
L_8002D9CC:
    // 0x8002D9CC: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D9D0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002D9D4: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002D9D8: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x8002D9DC: mflo        $t6
    ctx->r14 = lo;
    // 0x8002D9E0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x8002D9E4: bc1f        L_8002DA20
    if (!c1cs) {
        // 0x8002D9E8: lhu         $a2, 0x0($v1)
        ctx->r6 = MEM_HU(ctx->r3, 0X0);
            goto L_8002DA20;
    }
    // 0x8002D9E8: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x8002D9EC: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002D9F0: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002D9F4: mflo        $t7
    ctx->r15 = lo;
    // 0x8002D9F8: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x8002D9FC: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x8002DA00: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002DA04: nop

    // 0x8002DA08: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002DA0C: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DA10: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002DA14: nop

    // 0x8002DA18: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DA1C: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_0;
    // 0x8002DA1C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_0:
L_8002DA20:
    // 0x8002DA20: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002DA24: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x8002DA28: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8002DA2C: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8002DA30: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8002DA34: addu        $a3, $t0, $a1
    ctx->r7 = ADD32(ctx->r8, ctx->r5);
    // 0x8002DA38: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002DA3C: bc1fl       L_8002DA70
    if (!c1cs) {
        // 0x8002DA40: lh          $t7, 0xC($a3)
        ctx->r15 = MEM_H(ctx->r7, 0XC);
            goto L_8002DA70;
    }
    goto skip_1;
    // 0x8002DA40: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    skip_1:
    // 0x8002DA44: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8002DA48: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002DA4C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002DA50: nop

    // 0x8002DA54: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002DA58: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8002DA5C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8002DA60: nop

    // 0x8002DA64: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DA68: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_2;
    // 0x8002DA68: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_2:
    // 0x8002DA6C: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
L_8002DA70:
    // 0x8002DA70: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8002DA74: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002DA78: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002DA7C: nop

    // 0x8002DA80: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DA84: mul.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DA88: sub.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8002DA8C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002DA90: nop

    // 0x8002DA94: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DA98: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_3;
    // 0x8002DA98: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_3:
    // 0x8002DA9C: lh          $t8, 0x6($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X6);
    // 0x8002DAA0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002DAA4: nop

    // 0x8002DAA8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002DAAC: mul.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002DAB0: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8002DAB4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8002DAB8: nop

    // 0x8002DABC: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DAC0: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_4;
    // 0x8002DAC0: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_4:
    // 0x8002DAC4: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x8002DAC8: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002DACC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002DAD0: nop

    // 0x8002DAD4: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002DAD8: mul.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8002DADC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8002DAE0: nop

    // 0x8002DAE4: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DAE8: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_5;
    // 0x8002DAE8: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_5:
    // 0x8002DAEC: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x8002DAF0: lwc1        $f22, 0xE4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002DAF4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002DAF8: nop

    // 0x8002DAFC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002DB00: mul.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8002DB04: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8002DB08: nop

    // 0x8002DB0C: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DB10: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_6;
    // 0x8002DB10: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_6:
    // 0x8002DB14: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    // 0x8002DB18: nop

    // 0x8002DB1C: bc1fl       L_8002DB50
    if (!c1cs) {
        // 0x8002DB20: c.lt.s      $f22, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
            goto L_8002DB50;
    }
    goto skip_7;
    // 0x8002DB20: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
    skip_7:
    // 0x8002DB24: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x8002DB28: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002DB2C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002DB30: nop

    // 0x8002DB34: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002DB38: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8002DB3C: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8002DB40: nop

    // 0x8002DB44: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DB48: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_8;
    // 0x8002DB48: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_8:
    // 0x8002DB4C: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
L_8002DB50:
    // 0x8002DB50: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002DB54: bc1fl       L_8002DB84
    if (!c1cs) {
        // 0x8002DB58: lh          $t9, 0x10($a3)
        ctx->r25 = MEM_H(ctx->r7, 0X10);
            goto L_8002DB84;
    }
    goto skip_9;
    // 0x8002DB58: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    skip_9:
    // 0x8002DB5C: lh          $t8, 0x10($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X10);
    // 0x8002DB60: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002DB64: nop

    // 0x8002DB68: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002DB6C: mul.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002DB70: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8002DB74: nop

    // 0x8002DB78: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DB7C: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_10;
    // 0x8002DB7C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_10:
    // 0x8002DB80: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
L_8002DB84:
    // 0x8002DB84: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x8002DB88: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002DB8C: nop

    // 0x8002DB90: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002DB94: mul.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DB98: sub.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8002DB9C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8002DBA0: nop

    // 0x8002DBA4: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DBA8: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_11;
    // 0x8002DBA8: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_11:
    // 0x8002DBAC: lh          $t7, 0xA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA);
    // 0x8002DBB0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002DBB4: nop

    // 0x8002DBB8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002DBBC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002DBC0: mul.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DBC4: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8002DBC8: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x8002DBCC: nop

    // 0x8002DBD0: bc1fl       L_8002DDE4
    if (!c1cs) {
        // 0x8002DBD4: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002DDE4;
    }
    goto skip_12;
    // 0x8002DBD4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_12:
    // 0x8002DBD8: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
L_8002DBDC:
    // 0x8002DBDC: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002DBE0: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8002DBE4: lwc1        $f16, 0xDC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002DBE8: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002DBEC: beq         $t5, $a2, L_8002E2AC
    if (ctx->r13 == ctx->r6) {
        // 0x8002DBF0: lwc1        $f22, 0xE4($sp)
        ctx->f22.u32l = MEM_W(ctx->r29, 0XE4);
            goto L_8002E2AC;
    }
    // 0x8002DBF0: lwc1        $f22, 0xE4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002DBF4: multu       $a2, $t3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DBF8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8002DBFC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002DC00: mflo        $t8
    ctx->r24 = lo;
    // 0x8002DC04: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8002DC08: bc1f        L_8002DC40
    if (!c1cs) {
        // 0x8002DC0C: lhu         $a2, 0x0($t9)
        ctx->r6 = MEM_HU(ctx->r25, 0X0);
            goto L_8002DC40;
    }
    // 0x8002DC0C: lhu         $a2, 0x0($t9)
    ctx->r6 = MEM_HU(ctx->r25, 0X0);
    // 0x8002DC10: multu       $v0, $s1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DC14: mflo        $t6
    ctx->r14 = lo;
    // 0x8002DC18: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x8002DC1C: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x8002DC20: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002DC24: nop

    // 0x8002DC28: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002DC2C: mul.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002DC30: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8002DC34: nop

    // 0x8002DC38: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DC3C: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_13;
    // 0x8002DC3C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_13:
L_8002DC40:
    // 0x8002DC40: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8002DC44: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8002DC48: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x8002DC4C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8002DC50: addu        $a3, $t0, $t9
    ctx->r7 = ADD32(ctx->r8, ctx->r25);
    // 0x8002DC54: bc1f        L_8002DC80
    if (!c1cs) {
        // 0x8002DC58: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8002DC80;
    }
    // 0x8002DC58: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8002DC5C: lh          $t6, 0xC($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC);
    // 0x8002DC60: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002DC64: nop

    // 0x8002DC68: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002DC6C: mul.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DC70: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002DC74: nop

    // 0x8002DC78: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DC7C: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_14;
    // 0x8002DC7C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_14:
L_8002DC80:
    // 0x8002DC80: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    // 0x8002DC84: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002DC88: nop

    // 0x8002DC8C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DC90: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DC94: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8002DC98: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002DC9C: nop

    // 0x8002DCA0: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DCA4: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_15;
    // 0x8002DCA4: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_15:
    // 0x8002DCA8: lh          $t8, 0x6($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X6);
    // 0x8002DCAC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002DCB0: nop

    // 0x8002DCB4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DCB8: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DCBC: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8002DCC0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8002DCC4: nop

    // 0x8002DCC8: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DCCC: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_16;
    // 0x8002DCCC: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_16:
    // 0x8002DCD0: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x8002DCD4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002DCD8: nop

    // 0x8002DCDC: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DCE0: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DCE4: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8002DCE8: nop

    // 0x8002DCEC: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DCF0: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_17;
    // 0x8002DCF0: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_17:
    // 0x8002DCF4: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x8002DCF8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002DCFC: nop

    // 0x8002DD00: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002DD04: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8002DD08: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x8002DD0C: nop

    // 0x8002DD10: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DD14: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_18;
    // 0x8002DD14: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_18:
    // 0x8002DD18: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    // 0x8002DD1C: nop

    // 0x8002DD20: bc1fl       L_8002DD50
    if (!c1cs) {
        // 0x8002DD24: c.lt.s      $f22, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
            goto L_8002DD50;
    }
    goto skip_19;
    // 0x8002DD24: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
    skip_19:
    // 0x8002DD28: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x8002DD2C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002DD30: nop

    // 0x8002DD34: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002DD38: mul.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x8002DD3C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8002DD40: nop

    // 0x8002DD44: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DD48: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_20;
    // 0x8002DD48: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_20:
    // 0x8002DD4C: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
L_8002DD50:
    // 0x8002DD50: nop

    // 0x8002DD54: bc1fl       L_8002DD84
    if (!c1cs) {
        // 0x8002DD58: lh          $t9, 0x10($a3)
        ctx->r25 = MEM_H(ctx->r7, 0X10);
            goto L_8002DD84;
    }
    goto skip_21;
    // 0x8002DD58: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    skip_21:
    // 0x8002DD5C: lh          $t8, 0x10($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X10);
    // 0x8002DD60: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002DD64: nop

    // 0x8002DD68: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002DD6C: mul.s       $f6, $f8, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8002DD70: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002DD74: nop

    // 0x8002DD78: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DD7C: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_22;
    // 0x8002DD7C: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_22:
    // 0x8002DD80: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
L_8002DD84:
    // 0x8002DD84: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002DD88: nop

    // 0x8002DD8C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DD90: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DD94: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8002DD98: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002DD9C: nop

    // 0x8002DDA0: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DDA4: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_23;
    // 0x8002DDA4: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_23:
    // 0x8002DDA8: lh          $t6, 0xA($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XA);
    // 0x8002DDAC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8002DDB0: nop

    // 0x8002DDB4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DDB8: mul.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DDBC: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8002DDC0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8002DDC4: nop

    // 0x8002DDC8: bc1tl       L_8002DBDC
    if (c1cs) {
        // 0x8002DDCC: lwc1        $f0, 0x9C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_8002DBDC;
    }
    goto skip_24;
    // 0x8002DDCC: lwc1        $f0, 0x9C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X9C);
    skip_24:
    // 0x8002DDD0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002DDD4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002DDD8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8002DDDC: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x8002DDE0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002DDE4:
    // 0x8002DDE4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8002DDE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DDEC: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x8002DDF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002DDF4: addiu       $v0, $s4, 0x3
    ctx->r2 = ADD32(ctx->r20, 0X3);
    // 0x8002DDF8: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8002DDFC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8002DE00: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x8002DE04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002DE08: andi        $a1, $s3, 0xFFFF
    ctx->r5 = ctx->r19 & 0XFFFF;
    // 0x8002DE0C: sh          $t8, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r24;
    // 0x8002DE10: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
L_8002DE14:
    // 0x8002DE14: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DE18: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8002DE1C: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002DE20: mflo        $t6
    ctx->r14 = lo;
    // 0x8002DE24: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x8002DE28: lhu         $s4, 0x0($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X0);
    // 0x8002DE2C: multu       $s4, $s3
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DE30: mflo        $t7
    ctx->r15 = lo;
    // 0x8002DE34: addu        $s6, $s2, $t7
    ctx->r22 = ADD32(ctx->r18, ctx->r15);
    // 0x8002DE38: lwc1        $f10, 0xC($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0XC);
    // 0x8002DE3C: lwc1        $f26, 0x4($s6)
    ctx->f26.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8002DE40: lwc1        $f14, 0x0($s6)
    ctx->f14.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8002DE44: mul.s       $f18, $f10, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8002DE48: lwc1        $f16, 0x8($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8002DE4C: lbu         $s5, 0x10($s6)
    ctx->r21 = MEM_BU(ctx->r22, 0X10);
    // 0x8002DE50: mul.s       $f22, $f8, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8002DE54: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002DE58: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x8002DE5C: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8002DE60: add.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8002DE64: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8002DE68: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002DE6C: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8002DE70: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002DE74: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x8002DE78: beq         $s5, $zero, L_8002DE94
    if (ctx->r21 == 0) {
        // 0x8002DE7C: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002DE94;
    }
    // 0x8002DE7C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8002DE80: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8002DE84: c.lt.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d < ctx->f4.d;
    // 0x8002DE88: nop

    // 0x8002DE8C: bc1fl       L_8002DFFC
    if (!c1cs) {
        // 0x8002DE90: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002DFFC;
    }
    goto skip_25;
    // 0x8002DE90: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_25:
L_8002DE94:
    // 0x8002DE94: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8002DE98: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002DE9C: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8002DEA0: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002DEA4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002DEA8: c.eq.d      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.d == ctx->f8.d;
    // 0x8002DEAC: nop

    // 0x8002DEB0: bc1fl       L_8002DEC8
    if (!c1cs) {
        // 0x8002DEB4: neg.s       $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
            goto L_8002DEC8;
    }
    goto skip_26;
    // 0x8002DEB4: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    skip_26:
    // 0x8002DEB8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002DEBC: b           L_8002DED0
    // 0x8002DEC0: nop

        goto L_8002DED0;
    // 0x8002DEC0: nop

    // 0x8002DEC4: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
L_8002DEC8:
    // 0x8002DEC8: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8002DECC: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_8002DED0:
    // 0x8002DED0: bne         $v0, $zero, L_8002DFB8
    if (ctx->r2 != 0) {
        // 0x8002DED4: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002DFB8;
    }
    // 0x8002DED4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002DED8: ldc1        $f4, -0x3BE0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3BE0);
    // 0x8002DEDC: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002DEE0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002DEE4: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x8002DEE8: nop

    // 0x8002DEEC: bc1f        L_8002DF38
    if (!c1cs) {
        // 0x8002DEF0: nop
    
            goto L_8002DF38;
    }
    // 0x8002DEF0: nop

    // 0x8002DEF4: ldc1        $f8, -0x3BD8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3BD8);
    // 0x8002DEF8: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002DEFC: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002DF00: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8002DF04: nop

    // 0x8002DF08: bc1f        L_8002DF38
    if (!c1cs) {
        // 0x8002DF0C: nop
    
            goto L_8002DF38;
    }
    // 0x8002DF0C: nop

    // 0x8002DF10: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002DF14: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002DF18: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8002DF1C: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8002DF20: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002DF24: add.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x8002DF28: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002DF2C: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8002DF30: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002DF34: add.s       $f24, $f4, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f18.fl;
L_8002DF38:
    // 0x8002DF38: beql        $a3, $zero, L_8002DFBC
    if (ctx->r7 == 0) {
        // 0x8002DF3C: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_27;
    // 0x8002DF3C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_27:
    // 0x8002DF40: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002DF44: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8002DF48: c.eq.d      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.d == ctx->f8.d;
    // 0x8002DF4C: nop

    // 0x8002DF50: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DF54: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_28;
    // 0x8002DF54: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_28:
    // 0x8002DF58: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8002DF5C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002DF60: c.le.d      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.d <= ctx->f20.d;
    // 0x8002DF64: nop

    // 0x8002DF68: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DF6C: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_29;
    // 0x8002DF6C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_29:
    // 0x8002DF70: c.eq.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl == ctx->f14.fl;
    // 0x8002DF74: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002DF78: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DF7C: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_30;
    // 0x8002DF7C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_30:
    // 0x8002DF80: c.eq.s      $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f8.fl == ctx->f26.fl;
    // 0x8002DF84: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002DF88: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DF8C: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_31;
    // 0x8002DF8C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_31:
    // 0x8002DF90: c.eq.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl == ctx->f16.fl;
    // 0x8002DF94: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002DF98: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DF9C: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_32;
    // 0x8002DF9C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_32:
    // 0x8002DFA0: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x8002DFA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DFA8: bc1fl       L_8002DFBC
    if (!c1cs) {
        // 0x8002DFAC: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_8002DFBC;
    }
    goto skip_33;
    // 0x8002DFAC: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_33:
    // 0x8002DFB0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002DFB4: nop

L_8002DFB8:
    // 0x8002DFB8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_8002DFBC:
    // 0x8002DFBC: c.lt.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d < ctx->f4.d;
    // 0x8002DFC0: nop

    // 0x8002DFC4: bc1fl       L_8002DFFC
    if (!c1cs) {
        // 0x8002DFC8: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002DFFC;
    }
    goto skip_34;
    // 0x8002DFC8: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_34:
    // 0x8002DFCC: c.le.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl <= ctx->f28.fl;
    // 0x8002DFD0: nop

    // 0x8002DFD4: bc1fl       L_8002DFFC
    if (!c1cs) {
        // 0x8002DFD8: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002DFFC;
    }
    goto skip_35;
    // 0x8002DFD8: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_35:
    // 0x8002DFDC: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x8002DFE0: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x8002DFE4: swc1        $f26, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f26.u32l;
    // 0x8002DFE8: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x8002DFEC: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x8002DFF0: swc1        $f24, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f24.u32l;
    // 0x8002DFF4: andi        $t2, $s5, 0xFF
    ctx->r10 = ctx->r21 & 0XFF;
    // 0x8002DFF8: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
L_8002DFFC:
    // 0x8002DFFC: c.lt.d      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.d < ctx->f8.d;
    // 0x8002E000: nop

    // 0x8002E004: bc1fl       L_8002E1CC
    if (!c1cs) {
        // 0x8002E008: lh          $s4, 0x2($v1)
        ctx->r20 = MEM_H(ctx->r3, 0X2);
            goto L_8002E1CC;
    }
    goto skip_36;
    // 0x8002E008: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
    skip_36:
    // 0x8002E00C: lh          $s4, 0x4($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X4);
    // 0x8002E010: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E014: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002E018: bne         $s4, $zero, L_8002E1C0
    if (ctx->r20 != 0) {
        // 0x8002E01C: lwc1        $f8, 0x90($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002E1C0;
    }
    // 0x8002E01C: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002E020: ldc1        $f10, -0x3BD0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3BD0);
    // 0x8002E024: cvt.d.s     $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f6.d = CVT_D_S(ctx->f28.fl);
    // 0x8002E028: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E02C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8002E030: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x8002E034: andi        $v0, $t1, 0xFFFF
    ctx->r2 = ctx->r9 & 0XFFFF;
    // 0x8002E038: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002E03C: bc1f        L_8002E1A4
    if (!c1cs) {
        // 0x8002E040: nop
    
            goto L_8002E1A4;
    }
    // 0x8002E040: nop

    // 0x8002E044: mul.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002E048: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002E04C: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8002E050: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8002E054: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x8002E058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002E05C: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002E060: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002E064: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8002E068: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x8002E06C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x8002E070: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x8002E074: bc1f        L_8002E088
    if (!c1cs) {
        // 0x8002E078: swc1        $f10, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
            goto L_8002E088;
    }
    // 0x8002E078: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x8002E07C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8002E080: b           L_8002E090
    // 0x8002E084: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8002E090;
    // 0x8002E084: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8002E088:
    // 0x8002E088: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8002E08C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8002E090:
    // 0x8002E090: ldc1        $f4, -0x3BC8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3BC8);
    // 0x8002E094: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8002E098: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002E09C: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x8002E0A0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002E0A4: bc1f        L_8002E0E8
    if (!c1cs) {
        // 0x8002E0A8: nop
    
            goto L_8002E0E8;
    }
    // 0x8002E0A8: nop

    // 0x8002E0AC: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8002E0B0: c.eq.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d == ctx->f6.d;
    // 0x8002E0B4: nop

    // 0x8002E0B8: bc1t        L_8002E0E8
    if (c1cs) {
        // 0x8002E0BC: nop
    
            goto L_8002E0E8;
    }
    // 0x8002E0BC: nop

    // 0x8002E0C0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8002E0C4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E0C8: c.le.d      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.d <= ctx->f10.d;
    // 0x8002E0CC: nop

    // 0x8002E0D0: bc1f        L_8002E0E4
    if (!c1cs) {
        // 0x8002E0D4: nop
    
            goto L_8002E0E4;
    }
    // 0x8002E0D4: nop

    // 0x8002E0D8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E0DC: b           L_8002E0E8
    // 0x8002E0E0: lwc1        $f14, -0x3BC0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3BC0);
        goto L_8002E0E8;
    // 0x8002E0E0: lwc1        $f14, -0x3BC0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3BC0);
L_8002E0E4:
    // 0x8002E0E4: lwc1        $f14, -0x3BBC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3BBC);
L_8002E0E8:
    // 0x8002E0E8: mul.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8002E0EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002E0F0: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8002E0F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E0F8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8002E0FC: nop

    // 0x8002E100: bc1fl       L_8002E118
    if (!c1cs) {
        // 0x8002E104: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8002E118;
    }
    goto skip_37;
    // 0x8002E104: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_37:
    // 0x8002E108: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8002E10C: b           L_8002E11C
    // 0x8002E110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8002E11C;
    // 0x8002E110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8002E114: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8002E118:
    // 0x8002E118: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8002E11C:
    // 0x8002E11C: ldc1        $f10, -0x3BB8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3BB8);
    // 0x8002E120: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8002E124: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8002E128: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8002E12C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002E130: bc1fl       L_8002E178
    if (!c1cs) {
        // 0x8002E134: lwc1        $f8, 0x94($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8002E178;
    }
    goto skip_38;
    // 0x8002E134: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    skip_38:
    // 0x8002E138: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8002E13C: c.eq.d      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.d == ctx->f8.d;
    // 0x8002E140: nop

    // 0x8002E144: bc1tl       L_8002E178
    if (c1cs) {
        // 0x8002E148: lwc1        $f8, 0x94($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
            goto L_8002E178;
    }
    goto skip_39;
    // 0x8002E148: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    skip_39:
    // 0x8002E14C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002E150: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E154: c.le.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d <= ctx->f6.d;
    // 0x8002E158: nop

    // 0x8002E15C: bc1f        L_8002E170
    if (!c1cs) {
        // 0x8002E160: nop
    
            goto L_8002E170;
    }
    // 0x8002E160: nop

    // 0x8002E164: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002E168: b           L_8002E174
    // 0x8002E16C: lwc1        $f12, -0x3BB0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BB0);
        goto L_8002E174;
    // 0x8002E16C: lwc1        $f12, -0x3BB0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BB0);
L_8002E170:
    // 0x8002E170: lwc1        $f12, -0x3BAC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3BAC);
L_8002E174:
    // 0x8002E174: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
L_8002E178:
    // 0x8002E178: add.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x8002E17C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002E180: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8002E184: add.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8002E188: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x8002E18C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8002E190: bne         $t8, $zero, L_8002DE14
    if (ctx->r24 != 0) {
        // 0x8002E194: swc1        $f6, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
            goto L_8002DE14;
    }
    // 0x8002E194: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x8002E198: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002E19C: b           L_8002E2AC
    // 0x8002E1A0: sh          $t9, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r25;
        goto L_8002E2AC;
    // 0x8002E1A0: sh          $t9, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r25;
L_8002E1A4:
    // 0x8002E1A4: beq         $t5, $a2, L_8002E2AC
    if (ctx->r13 == ctx->r6) {
        // 0x8002E1A8: lwc1        $f10, 0xD0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_8002E2AC;
    }
    // 0x8002E1A8: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E1AC: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E1B0: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002E1B4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x8002E1B8: b           L_8002D9CC
    // 0x8002E1BC: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
        goto L_8002D9CC;
    // 0x8002E1BC: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
L_8002E1C0:
    // 0x8002E1C0: b           L_8002DE14
    // 0x8002E1C4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002DE14;
    // 0x8002E1C4: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x8002E1C8: lh          $s4, 0x2($v1)
    ctx->r20 = MEM_H(ctx->r3, 0X2);
L_8002E1CC:
    // 0x8002E1CC: bne         $s4, $zero, L_8002E2A4
    if (ctx->r20 != 0) {
        // 0x8002E1D0: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002E2A4;
    }
    // 0x8002E1D0: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002E1D4: bne         $a3, $at, L_8002E288
    if (ctx->r7 != ctx->r1) {
        // 0x8002E1D8: nop
    
            goto L_8002E288;
    }
    // 0x8002E1D8: nop

    // 0x8002E1DC: bne         $t4, $zero, L_8002E204
    if (ctx->r12 != 0) {
        // 0x8002E1E0: lwc1        $f8, 0x90($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
            goto L_8002E204;
    }
    // 0x8002E1E0: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8002E1E4: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002E1E8: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002E1EC: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8002E1F0: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8002E1F4: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x8002E1F8: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x8002E1FC: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x8002E200: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
L_8002E204:
    // 0x8002E204: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002E208: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E20C: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002E210: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E214: sub.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8002E218: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x8002E21C: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8002E220: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8002E224: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8002E228: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8002E22C: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8002E230: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002E234: nop

    // 0x8002E238: bc1f        L_8002E288
    if (!c1cs) {
        // 0x8002E23C: nop
    
            goto L_8002E288;
    }
    // 0x8002E23C: nop

    // 0x8002E240: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x8002E244: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002E248: swc1        $f12, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f12.u32l;
    // 0x8002E24C: sh          $t6, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r14;
    // 0x8002E250: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x8002E254: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x8002E258: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x8002E25C: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002E260: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x8002E264: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8002E268: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8002E26C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002E270: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x8002E274: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8002E278: sb          $t4, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r12;
    // 0x8002E27C: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8002E280: lhu         $t7, 0x56($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X56);
    // 0x8002E284: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
L_8002E288:
    // 0x8002E288: beq         $t5, $a2, L_8002E2AC
    if (ctx->r13 == ctx->r6) {
        // 0x8002E28C: lwc1        $f8, 0xD0($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_8002E2AC;
    }
    // 0x8002E28C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8002E290: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002E294: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002E298: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x8002E29C: b           L_8002D9CC
    // 0x8002E2A0: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
        goto L_8002D9CC;
    // 0x8002E2A0: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
L_8002E2A4:
    // 0x8002E2A4: b           L_8002DE14
    // 0x8002E2A8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
        goto L_8002DE14;
    // 0x8002E2A8: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_8002E2AC:
    // 0x8002E2AC: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x8002E2B0: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x8002E2B4: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x8002E2B8: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x8002E2BC: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x8002E2C0: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x8002E2C4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8002E2C8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8002E2CC: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8002E2D0: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8002E2D4: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x8002E2D8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8002E2DC: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x8002E2E0: jr          $ra
    // 0x8002E2E4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x8002E2E4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80016C44_17844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016C44: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80016C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016C50: lbu         $t6, 0x64($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X64);
    // 0x80016C54: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80016C58: beql        $t7, $zero, L_80016C6C
    if (ctx->r15 == 0) {
        // 0x80016C5C: lb          $t8, 0x65($a0)
        ctx->r24 = MEM_B(ctx->r4, 0X65);
            goto L_80016C6C;
    }
    goto skip_0;
    // 0x80016C5C: lb          $t8, 0x65($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X65);
    skip_0:
    // 0x80016C60: b           L_800176DC
    // 0x80016C64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x80016C64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80016C68: lb          $t8, 0x65($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X65);
L_80016C6C:
    // 0x80016C6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016C70: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80016C74: bgez        $t8, L_80016C84
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80016C78: nop
    
            goto L_80016C84;
    }
    // 0x80016C78: nop

    // 0x80016C7C: b           L_800176DC
    // 0x80016C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x80016C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016C84:
    // 0x80016C84: sw          $a0, -0x7B60($at)
    MEM_W(-0X7B60, ctx->r1) = ctx->r4;
    // 0x80016C88: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80016C8C: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80016C90: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80016C94: beq         $v1, $v0, L_80016CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80016C98: andi        $t9, $v0, 0x3FF
        ctx->r25 = ctx->r2 & 0X3FF;
            goto L_80016CA0;
    }
    // 0x80016C98: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x80016C9C: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
L_80016CA0:
    // 0x80016CA0: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80016CA4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80016CA8: beq         $v1, $v0, L_80016CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80016CAC: andi        $t3, $v0, 0x3FF
        ctx->r11 = ctx->r2 & 0X3FF;
            goto L_80016CB4;
    }
    // 0x80016CAC: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x80016CB0: sh          $t3, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r11;
L_80016CB4:
    // 0x80016CB4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80016CB8: beq         $v1, $v0, L_80016CC4
    if (ctx->r3 == ctx->r2) {
        // 0x80016CBC: andi        $t4, $v0, 0x3FF
        ctx->r12 = ctx->r2 & 0X3FF;
            goto L_80016CC4;
    }
    // 0x80016CBC: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x80016CC0: sh          $t4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r12;
L_80016CC4:
    // 0x80016CC4: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x80016CC8: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    // 0x80016CCC: beq         $a3, $zero, L_80016CDC
    if (ctx->r7 == 0) {
        // 0x80016CD0: and         $v1, $a3, $at
        ctx->r3 = ctx->r7 & ctx->r1;
            goto L_80016CDC;
    }
    // 0x80016CD0: and         $v1, $a3, $at
    ctx->r3 = ctx->r7 & ctx->r1;
    // 0x80016CD4: bne         $v1, $zero, L_80016D04
    if (ctx->r3 != 0) {
        // 0x80016CD8: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_80016D04;
    }
    // 0x80016CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
L_80016CDC:
    // 0x80016CDC: lw          $t5, 0x74($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X74);
    // 0x80016CE0: bne         $t5, $zero, L_80016CF4
    if (ctx->r13 != 0) {
        // 0x80016CE4: nop
    
            goto L_80016CF4;
    }
    // 0x80016CE4: nop

    // 0x80016CE8: lw          $t6, 0x78($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X78);
    // 0x80016CEC: beq         $t6, $zero, L_80016CFC
    if (ctx->r14 == 0) {
        // 0x80016CF0: nop
    
            goto L_80016CFC;
    }
    // 0x80016CF0: nop

L_80016CF4:
    // 0x80016CF4: jal         0x800364FC
    // 0x80016CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800364FC_370FC(rdram, ctx);
        goto after_0;
    // 0x80016CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80016CFC:
    // 0x80016CFC: b           L_800176DC
    // 0x80016D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x80016D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016D04:
    // 0x80016D04: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80016D08: addiu       $a1, $a1, -0x7AD3
    ctx->r5 = ADD32(ctx->r5, -0X7AD3);
    // 0x80016D0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016D10: lui         $a2, 0x7000
    ctx->r6 = S32(0X7000 << 16);
    // 0x80016D14: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x80016D18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016D1C: andi        $t8, $a3, 0x1
    ctx->r24 = ctx->r7 & 0X1;
    // 0x80016D20: addiu       $a0, $a0, -0x7AD4
    ctx->r4 = ADD32(ctx->r4, -0X7AD4);
    // 0x80016D24: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x80016D28: sw          $zero, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = 0;
    // 0x80016D2C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80016D30: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x80016D34: beq         $t9, $zero, L_80016D40
    if (ctx->r25 == 0) {
        // 0x80016D38: sb          $t8, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r24;
            goto L_80016D40;
    }
    // 0x80016D38: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x80016D3C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80016D40:
    // 0x80016D40: beq         $v0, $zero, L_80016D94
    if (ctx->r2 == 0) {
        // 0x80016D44: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_80016D94;
    }
    // 0x80016D44: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80016D48: beq         $v0, $at, L_80016D94
    if (ctx->r2 == ctx->r1) {
        // 0x80016D4C: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_80016D94;
    }
    // 0x80016D4C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80016D50: beq         $v0, $at, L_8001720C
    if (ctx->r2 == ctx->r1) {
        // 0x80016D54: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_8001720C;
    }
    // 0x80016D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016D58: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x80016D5C: beq         $v0, $at, L_8001735C
    if (ctx->r2 == ctx->r1) {
        // 0x80016D60: lui         $t0, 0x8017
        ctx->r8 = S32(0X8017 << 16);
            goto L_8001735C;
    }
    // 0x80016D60: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016D64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80016D68: beq         $v0, $at, L_800173E8
    if (ctx->r2 == ctx->r1) {
        // 0x80016D6C: lui         $at, 0x5000
        ctx->r1 = S32(0X5000 << 16);
            goto L_800173E8;
    }
    // 0x80016D6C: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x80016D70: beq         $v0, $at, L_800172D0
    if (ctx->r2 == ctx->r1) {
        // 0x80016D74: lui         $t0, 0x8017
        ctx->r8 = S32(0X8017 << 16);
            goto L_800172D0;
    }
    // 0x80016D74: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016D78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80016D7C: beq         $v0, $at, L_80017440
    if (ctx->r2 == ctx->r1) {
        // 0x80016D80: nop
    
            goto L_80017440;
    }
    // 0x80016D80: nop

    // 0x80016D84: beql        $v0, $a2, L_800176DC
    if (ctx->r2 == ctx->r6) {
        // 0x80016D88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800176DC;
    }
    goto skip_1;
    // 0x80016D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x80016D8C: b           L_800176DC
    // 0x80016D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800176DC;
    // 0x80016D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80016D94:
    // 0x80016D94: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016D98: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80016D9C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x80016DA0: beq         $v1, $zero, L_80016E1C
    if (ctx->r3 == 0) {
        // 0x80016DA4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80016E1C;
    }
    // 0x80016DA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80016DA8: sll         $t3, $v1, 0
    ctx->r11 = S32(ctx->r3 << 0);
    // 0x80016DAC: bgez        $t3, L_80016DC4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80016DB0: lui         $t2, 0x8000
        ctx->r10 = S32(0X8000 << 16);
            goto L_80016DC4;
    }
    // 0x80016DB0: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80016DB4: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80016DB8: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80016DBC: b           L_80016E2C
    // 0x80016DC0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80016E2C;
    // 0x80016DC0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80016DC4:
    // 0x80016DC4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80016DC8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80016DCC: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80016DD0: bne         $at, $zero, L_80016E00
    if (ctx->r1 != 0) {
        // 0x80016DD4: lui         $t1, 0x80FF
        ctx->r9 = S32(0X80FF << 16);
            goto L_80016E00;
    }
    // 0x80016DD4: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80016DD8: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x80016DDC: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80016DE0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80016DE4: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x80016DE8: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80016DEC: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x80016DF0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80016DF4: and         $t9, $v0, $t1
    ctx->r25 = ctx->r2 & ctx->r9;
    // 0x80016DF8: b           L_80016E10
    // 0x80016DFC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
        goto L_80016E10;
    // 0x80016DFC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_80016E00:
    // 0x80016E00: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x80016E04: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80016E08: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x80016E0C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
L_80016E10:
    // 0x80016E10: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80016E14: b           L_80016E2C
    // 0x80016E18: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80016E2C;
    // 0x80016E18: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80016E1C:
    // 0x80016E1C: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80016E20: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80016E24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80016E28: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
L_80016E2C:
    // 0x80016E2C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x80016E30: bne         $t5, $zero, L_80016E40
    if (ctx->r13 != 0) {
        // 0x80016E34: sw          $t5, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r13;
            goto L_80016E40;
    }
    // 0x80016E34: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80016E38: b           L_800176DC
    // 0x80016E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x80016E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016E40:
    // 0x80016E40: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x80016E44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80016E48: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80016E4C: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80016E50: andi        $t3, $t7, 0xFF
    ctx->r11 = ctx->r15 & 0XFF;
    // 0x80016E54: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80016E58: mflo        $t8
    ctx->r24 = lo;
    // 0x80016E5C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80016E60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E64: sw          $t9, -0x7AE4($at)
    MEM_W(-0X7AE4, ctx->r1) = ctx->r25;
    // 0x80016E68: bgez        $t3, L_80016E80
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80016E6C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80016E80;
    }
    // 0x80016E6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80016E70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80016E74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80016E78: nop

    // 0x80016E7C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80016E80:
    // 0x80016E80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E84: swc1        $f6, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f6.u32l;
    // 0x80016E88: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80016E8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016E94: swc1        $f10, -0x7AF0($at)
    MEM_W(-0X7AF0, ctx->r1) = ctx->f10.u32l;
    // 0x80016E98: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80016E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016EA0: addiu       $a0, $a0, -0x7B50
    ctx->r4 = ADD32(ctx->r4, -0X7B50);
    // 0x80016EA4: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80016EA8: beq         $t4, $zero, L_80016F0C
    if (ctx->r12 == 0) {
        // 0x80016EAC: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_80016F0C;
    }
    // 0x80016EAC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80016EB0: and         $t5, $t4, $t2
    ctx->r13 = ctx->r12 & ctx->r10;
    // 0x80016EB4: beq         $t5, $zero, L_80016EC4
    if (ctx->r13 == 0) {
        // 0x80016EB8: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80016EC4;
    }
    // 0x80016EB8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80016EBC: b           L_80016F00
    // 0x80016EC0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
        goto L_80016F00;
    // 0x80016EC0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_80016EC4:
    // 0x80016EC4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80016EC8: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80016ECC: bne         $at, $zero, L_80016EF0
    if (ctx->r1 != 0) {
        // 0x80016ED0: srl         $t6, $v0, 24
        ctx->r14 = S32(U32(ctx->r2) >> 24);
            goto L_80016EF0;
    }
    // 0x80016ED0: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x80016ED4: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x80016ED8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80016EDC: addu        $t7, $s0, $t9
    ctx->r15 = ADD32(ctx->r16, ctx->r25);
    // 0x80016EE0: lw          $t3, -0x8($t7)
    ctx->r11 = MEM_W(ctx->r15, -0X8);
    // 0x80016EE4: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x80016EE8: b           L_80016EFC
    // 0x80016EEC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
        goto L_80016EFC;
    // 0x80016EEC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
L_80016EF0:
    // 0x80016EF0: lw          $t5, 0x38($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X38);
    // 0x80016EF4: and         $t6, $v0, $t1
    ctx->r14 = ctx->r2 & ctx->r9;
    // 0x80016EF8: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_80016EFC:
    // 0x80016EFC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80016F00:
    // 0x80016F00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016F04: b           L_80016F10
    // 0x80016F08: sw          $a1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r5;
        goto L_80016F10;
    // 0x80016F08: sw          $a1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r5;
L_80016F0C:
    // 0x80016F0C: sw          $zero, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = 0;
L_80016F10:
    // 0x80016F10: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x80016F14: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80016F18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80016F1C: srl         $t8, $v0, 28
    ctx->r24 = S32(U32(ctx->r2) >> 28);
    // 0x80016F20: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x80016F24: beql        $t9, $zero, L_80017024
    if (ctx->r25 == 0) {
        // 0x80016F28: lw          $v0, 0x68($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X68);
            goto L_80017024;
    }
    goto skip_2;
    // 0x80016F28: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    skip_2:
    // 0x80016F2C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80016F30: jal         0x8001E380
    // 0x80016F34: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_8001E380_1EF80(rdram, ctx);
        goto after_1;
    // 0x80016F34: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80016F38: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80016F3C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016F40: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80016F44: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80016F48: addiu       $s0, $s0, -0x7B50
    ctx->r16 = ADD32(ctx->r16, -0X7B50);
    // 0x80016F4C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80016F50: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80016F54: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80016F58: beq         $v0, $zero, L_80017020
    if (ctx->r2 == 0) {
        // 0x80016F5C: addiu       $a2, $v0, -0x1
        ctx->r6 = ADD32(ctx->r2, -0X1);
            goto L_80017020;
    }
    // 0x80016F5C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
L_80016F60:
    // 0x80016F60: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80016F64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80016F68: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80016F6C: beq         $t7, $zero, L_80016FDC
    if (ctx->r15 == 0) {
        // 0x80016F70: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80016FDC;
    }
    // 0x80016F70: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80016F74: sll         $t3, $t7, 0
    ctx->r11 = S32(ctx->r15 << 0);
    // 0x80016F78: bgez        $t3, L_80016F88
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80016F7C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80016F88;
    }
    // 0x80016F7C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80016F80: b           L_80016FDC
    // 0x80016F84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_80016FDC;
    // 0x80016F84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80016F88:
    // 0x80016F88: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80016F8C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80016F90: bne         $at, $zero, L_80016FC0
    if (ctx->r1 != 0) {
        // 0x80016F94: lui         $t5, 0x8017
        ctx->r13 = S32(0X8017 << 16);
            goto L_80016FC0;
    }
    // 0x80016F94: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80016F98: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80016F9C: lw          $t4, -0x7B60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B60);
    // 0x80016FA0: srl         $t5, $v0, 24
    ctx->r13 = S32(U32(ctx->r2) >> 24);
    // 0x80016FA4: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80016FA8: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80016FAC: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x80016FB0: lw          $t7, -0x8($t9)
    ctx->r15 = MEM_W(ctx->r25, -0X8);
    // 0x80016FB4: and         $t3, $v0, $t1
    ctx->r11 = ctx->r2 & ctx->r9;
    // 0x80016FB8: b           L_80016FD0
    // 0x80016FBC: addu        $v1, $t7, $t3
    ctx->r3 = ADD32(ctx->r15, ctx->r11);
        goto L_80016FD0;
    // 0x80016FBC: addu        $v1, $t7, $t3
    ctx->r3 = ADD32(ctx->r15, ctx->r11);
L_80016FC0:
    // 0x80016FC0: lw          $t5, -0x7B60($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7B60);
    // 0x80016FC4: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x80016FC8: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    // 0x80016FCC: addu        $v1, $t6, $t4
    ctx->r3 = ADD32(ctx->r14, ctx->r12);
L_80016FD0:
    // 0x80016FD0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80016FD4: b           L_80016FDC
    // 0x80016FD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_80016FDC;
    // 0x80016FD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80016FDC:
    // 0x80016FDC: bne         $a0, $zero, L_80016FEC
    if (ctx->r4 != 0) {
        // 0x80016FE0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80016FEC;
    }
    // 0x80016FE0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80016FE4: b           L_800176DC
    // 0x80016FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x80016FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80016FEC:
    // 0x80016FEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80016FF0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80016FF4: jal         0x800176F0
    // 0x80016FF8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_800176F0_182F0(rdram, ctx);
        goto after_2;
    // 0x80016FF8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_2:
    // 0x80016FFC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80017000: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80017004: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017008: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8001700C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80017010: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80017014: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80017018: bne         $a2, $zero, L_80016F60
    if (ctx->r6 != 0) {
        // 0x8001701C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80016F60;
    }
    // 0x8001701C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_80017020:
    // 0x80017020: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_80017024:
    // 0x80017024: srl         $t8, $v0, 24
    ctx->r24 = S32(U32(ctx->r2) >> 24);
    // 0x80017028: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8001702C: beql        $t9, $zero, L_800170F8
    if (ctx->r25 == 0) {
        // 0x80017030: lw          $s0, 0x68($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X68);
            goto L_800170F8;
    }
    goto skip_3;
    // 0x80017030: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    skip_3:
    // 0x80017034: beq         $t9, $zero, L_800170F4
    if (ctx->r25 == 0) {
        // 0x80017038: addiu       $a2, $t9, -0x1
        ctx->r6 = ADD32(ctx->r25, -0X1);
            goto L_800170F4;
    }
    // 0x80017038: addiu       $a2, $t9, -0x1
    ctx->r6 = ADD32(ctx->r25, -0X1);
L_8001703C:
    // 0x8001703C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80017040: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80017044: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80017048: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8001704C: beq         $t7, $zero, L_800170B4
    if (ctx->r15 == 0) {
        // 0x80017050: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800170B4;
    }
    // 0x80017050: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80017054: and         $t3, $t7, $t2
    ctx->r11 = ctx->r15 & ctx->r10;
    // 0x80017058: beq         $t3, $zero, L_80017068
    if (ctx->r11 == 0) {
        // 0x8001705C: lui         $s0, 0x8017
        ctx->r16 = S32(0X8017 << 16);
            goto L_80017068;
    }
    // 0x8001705C: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017060: b           L_800170B4
    // 0x80017064: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_800170B4;
    // 0x80017064: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80017068:
    // 0x80017068: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001706C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017070: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017074: bne         $at, $zero, L_8001709C
    if (ctx->r1 != 0) {
        // 0x80017078: lw          $s0, -0x7B60($s0)
        ctx->r16 = MEM_W(ctx->r16, -0X7B60);
            goto L_8001709C;
    }
    // 0x80017078: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x8001707C: srl         $t5, $v0, 24
    ctx->r13 = S32(U32(ctx->r2) >> 24);
    // 0x80017080: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80017084: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x80017088: addu        $t8, $s0, $t4
    ctx->r24 = ADD32(ctx->r16, ctx->r12);
    // 0x8001708C: lw          $t9, -0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X8);
    // 0x80017090: and         $t7, $v0, $t1
    ctx->r15 = ctx->r2 & ctx->r9;
    // 0x80017094: b           L_800170A8
    // 0x80017098: addu        $v1, $t9, $t7
    ctx->r3 = ADD32(ctx->r25, ctx->r15);
        goto L_800170A8;
    // 0x80017098: addu        $v1, $t9, $t7
    ctx->r3 = ADD32(ctx->r25, ctx->r15);
L_8001709C:
    // 0x8001709C: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x800170A0: and         $t5, $v0, $t1
    ctx->r13 = ctx->r2 & ctx->r9;
    // 0x800170A4: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
L_800170A8:
    // 0x800170A8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800170AC: b           L_800170B4
    // 0x800170B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_800170B4;
    // 0x800170B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_800170B4:
    // 0x800170B4: bne         $a0, $zero, L_800170C4
    if (ctx->r4 != 0) {
        // 0x800170B8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800170C4;
    }
    // 0x800170B8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800170BC: b           L_800176DC
    // 0x800170C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x800170C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800170C4:
    // 0x800170C4: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x800170C8: jal         0x800182DC
    // 0x800170CC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_800182DC_18EDC(rdram, ctx);
        goto after_3;
    // 0x800170CC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_3:
    // 0x800170D0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x800170D4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800170D8: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800170DC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800170E0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800170E4: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x800170E8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x800170EC: bne         $a2, $zero, L_8001703C
    if (ctx->r6 != 0) {
        // 0x800170F0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8001703C;
    }
    // 0x800170F0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_800170F4:
    // 0x800170F4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
L_800170F8:
    // 0x800170F8: srl         $t6, $s0, 8
    ctx->r14 = S32(U32(ctx->r16) >> 8);
    // 0x800170FC: andi        $s0, $t6, 0x7FFF
    ctx->r16 = ctx->r14 & 0X7FFF;
    // 0x80017100: beql        $s0, $zero, L_800176DC
    if (ctx->r16 == 0) {
        // 0x80017104: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800176DC;
    }
    goto skip_4;
    // 0x80017104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
    // 0x80017108: jal         0x80016AA4
    // 0x8001710C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_80016AA4_176A4(rdram, ctx);
        goto after_4;
    // 0x8001710C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_4:
    // 0x80017110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80017114: jal         0x80019D40
    // 0x80017118: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_5;
    // 0x80017118: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_5:
    // 0x8001711C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80017120: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017124: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80017128: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x8001712C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80017130: beq         $s0, $zero, L_800171E8
    if (ctx->r16 == 0) {
        // 0x80017134: addiu       $a2, $s0, -0x1
        ctx->r6 = ADD32(ctx->r16, -0X1);
            goto L_800171E8;
    }
    // 0x80017134: addiu       $a2, $s0, -0x1
    ctx->r6 = ADD32(ctx->r16, -0X1);
L_80017138:
    // 0x80017138: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x8001713C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80017140: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80017144: beq         $t8, $zero, L_800171AC
    if (ctx->r24 == 0) {
        // 0x80017148: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800171AC;
    }
    // 0x80017148: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8001714C: sll         $t9, $t8, 0
    ctx->r25 = S32(ctx->r24 << 0);
    // 0x80017150: bgez        $t9, L_80017160
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80017154: lui         $s0, 0x8017
        ctx->r16 = S32(0X8017 << 16);
            goto L_80017160;
    }
    // 0x80017154: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017158: b           L_800171AC
    // 0x8001715C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_800171AC;
    // 0x8001715C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80017160:
    // 0x80017160: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017164: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017168: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x8001716C: bne         $at, $zero, L_80017194
    if (ctx->r1 != 0) {
        // 0x80017170: lw          $s0, -0x7B60($s0)
        ctx->r16 = MEM_W(ctx->r16, -0X7B60);
            goto L_80017194;
    }
    // 0x80017170: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x80017174: srl         $t7, $v0, 24
    ctx->r15 = S32(U32(ctx->r2) >> 24);
    // 0x80017178: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x8001717C: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x80017180: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x80017184: lw          $t4, -0x8($t6)
    ctx->r12 = MEM_W(ctx->r14, -0X8);
    // 0x80017188: and         $t8, $v0, $t1
    ctx->r24 = ctx->r2 & ctx->r9;
    // 0x8001718C: b           L_800171A0
    // 0x80017190: addu        $v1, $t4, $t8
    ctx->r3 = ADD32(ctx->r12, ctx->r24);
        goto L_800171A0;
    // 0x80017190: addu        $v1, $t4, $t8
    ctx->r3 = ADD32(ctx->r12, ctx->r24);
L_80017194:
    // 0x80017194: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x80017198: and         $t7, $v0, $t1
    ctx->r15 = ctx->r2 & ctx->r9;
    // 0x8001719C: addu        $v1, $t9, $t7
    ctx->r3 = ADD32(ctx->r25, ctx->r15);
L_800171A0:
    // 0x800171A0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800171A4: b           L_800171AC
    // 0x800171A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_800171AC;
    // 0x800171A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_800171AC:
    // 0x800171AC: beq         $a0, $zero, L_800171DC
    if (ctx->r4 == 0) {
        // 0x800171B0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800171DC;
    }
    // 0x800171B0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800171B4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800171B8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800171BC: jal         0x80018718
    // 0x800171C0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_80018718_19318(rdram, ctx);
        goto after_6;
    // 0x800171C0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_6:
    // 0x800171C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800171C8: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800171CC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800171D0: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x800171D4: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800171D8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
L_800171DC:
    // 0x800171DC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800171E0: bne         $a2, $zero, L_80017138
    if (ctx->r6 != 0) {
        // 0x800171E4: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80017138;
    }
    // 0x800171E4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_800171E8:
    // 0x800171E8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800171EC: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x800171F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800171F4: lui         $t5, 0xBD00
    ctx->r13 = S32(0XBD00 << 16);
    // 0x800171F8: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800171FC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80017200: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80017204: b           L_800176D8
    // 0x80017208: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_800176D8;
    // 0x80017208: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8001720C:
    // 0x8001720C: addiu       $a0, $a0, -0x7B50
    ctx->r4 = ADD32(ctx->r4, -0X7B50);
    // 0x80017210: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80017214: jal         0x8001E380
    // 0x80017218: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8001E380_1EF80(rdram, ctx);
        goto after_7;
    // 0x80017218: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x8001721C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80017220: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80017224: jal         0x80017D8C
    // 0x80017228: addiu       $a1, $a1, -0x7B50
    ctx->r5 = ADD32(ctx->r5, -0X7B50);
    func_80017D8C_1898C(rdram, ctx);
        goto after_8;
    // 0x80017228: addiu       $a1, $a1, -0x7B50
    ctx->r5 = ADD32(ctx->r5, -0X7B50);
    after_8:
    // 0x8001722C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80017230: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80017234: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80017238: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x8001723C: beq         $v1, $zero, L_800172BC
    if (ctx->r3 == 0) {
        // 0x80017240: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800172BC;
    }
    // 0x80017240: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80017244: sll         $t6, $v1, 0
    ctx->r14 = S32(ctx->r3 << 0);
    // 0x80017248: bgez        $t6, L_80017258
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001724C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80017258;
    }
    // 0x8001724C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017250: b           L_800172C0
    // 0x80017254: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_800172C0;
    // 0x80017254: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80017258:
    // 0x80017258: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001725C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017260: bne         $at, $zero, L_80017298
    if (ctx->r1 != 0) {
        // 0x80017264: lui         $t8, 0x8017
        ctx->r24 = S32(0X8017 << 16);
            goto L_80017298;
    }
    // 0x80017264: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80017268: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001726C: lw          $t4, -0x7B60($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B60);
    // 0x80017270: srl         $t8, $v0, 24
    ctx->r24 = S32(U32(ctx->r2) >> 24);
    // 0x80017274: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80017278: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x8001727C: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017280: addu        $t3, $t4, $t7
    ctx->r11 = ADD32(ctx->r12, ctx->r15);
    // 0x80017284: lw          $t5, -0x8($t3)
    ctx->r13 = MEM_W(ctx->r11, -0X8);
    // 0x80017288: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8001728C: and         $t6, $v0, $t1
    ctx->r14 = ctx->r2 & ctx->r9;
    // 0x80017290: b           L_800172B0
    // 0x80017294: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
        goto L_800172B0;
    // 0x80017294: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
L_80017298:
    // 0x80017298: lw          $t8, -0x7B60($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7B60);
    // 0x8001729C: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800172A0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800172A4: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x800172A8: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x800172AC: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
L_800172B0:
    // 0x800172B0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800172B4: b           L_800172C0
    // 0x800172B8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_800172C0;
    // 0x800172B8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800172BC:
    // 0x800172BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800172C0:
    // 0x800172C0: jal         0x8001B6D4
    // 0x800172C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8001B6D4_1C2D4(rdram, ctx);
        goto after_9;
    // 0x800172C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_9:
    // 0x800172C8: b           L_800176DC
    // 0x800172CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800176DC;
    // 0x800172CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800172D0:
    // 0x800172D0: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x800172D4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800172D8: beq         $v1, $zero, L_80017348
    if (ctx->r3 == 0) {
        // 0x800172DC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80017348;
    }
    // 0x800172DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800172E0: sll         $t7, $v1, 0
    ctx->r15 = S32(ctx->r3 << 0);
    // 0x800172E4: bgez        $t7, L_800172F4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800172E8: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_800172F4;
    }
    // 0x800172E8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800172EC: b           L_8001734C
    // 0x800172F0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_8001734C;
    // 0x800172F0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800172F4:
    // 0x800172F4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x800172F8: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x800172FC: bne         $at, $zero, L_8001732C
    if (ctx->r1 != 0) {
        // 0x80017300: lui         $t1, 0x80FF
        ctx->r9 = S32(0X80FF << 16);
            goto L_8001732C;
    }
    // 0x80017300: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017304: srl         $t3, $v0, 24
    ctx->r11 = S32(U32(ctx->r2) >> 24);
    // 0x80017308: andi        $t5, $t3, 0xF
    ctx->r13 = ctx->r11 & 0XF;
    // 0x8001730C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80017310: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x80017314: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017318: lw          $t9, -0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X8);
    // 0x8001731C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80017320: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x80017324: b           L_8001733C
    // 0x80017328: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
        goto L_8001733C;
    // 0x80017328: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
L_8001732C:
    // 0x8001732C: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x80017330: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80017334: and         $t3, $v0, $t1
    ctx->r11 = ctx->r2 & ctx->r9;
    // 0x80017338: addu        $a0, $t7, $t3
    ctx->r4 = ADD32(ctx->r15, ctx->r11);
L_8001733C:
    // 0x8001733C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80017340: b           L_8001734C
    // 0x80017344: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_8001734C;
    // 0x80017344: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80017348:
    // 0x80017348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8001734C:
    // 0x8001734C: jal         0x800184B4
    // 0x80017350: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800184B4_190B4(rdram, ctx);
        goto after_10;
    // 0x80017350: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_10:
    // 0x80017354: b           L_800176DC
    // 0x80017358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800176DC;
    // 0x80017358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001735C:
    // 0x8001735C: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80017360: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x80017364: beq         $v1, $zero, L_800173D4
    if (ctx->r3 == 0) {
        // 0x80017368: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800173D4;
    }
    // 0x80017368: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001736C: sll         $t5, $v1, 0
    ctx->r13 = S32(ctx->r3 << 0);
    // 0x80017370: bgez        $t5, L_80017380
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80017374: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80017380;
    }
    // 0x80017374: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017378: b           L_800173D8
    // 0x8001737C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_800173D8;
    // 0x8001737C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_80017380:
    // 0x80017380: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017384: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017388: bne         $at, $zero, L_800173B8
    if (ctx->r1 != 0) {
        // 0x8001738C: lui         $t1, 0x80FF
        ctx->r9 = S32(0X80FF << 16);
            goto L_800173B8;
    }
    // 0x8001738C: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017390: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x80017394: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x80017398: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001739C: addu        $t4, $s0, $t9
    ctx->r12 = ADD32(ctx->r16, ctx->r25);
    // 0x800173A0: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800173A4: lw          $t7, -0x8($t4)
    ctx->r15 = MEM_W(ctx->r12, -0X8);
    // 0x800173A8: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800173AC: and         $t3, $v0, $t1
    ctx->r11 = ctx->r2 & ctx->r9;
    // 0x800173B0: b           L_800173C8
    // 0x800173B4: addu        $a0, $t7, $t3
    ctx->r4 = ADD32(ctx->r15, ctx->r11);
        goto L_800173C8;
    // 0x800173B4: addu        $a0, $t7, $t3
    ctx->r4 = ADD32(ctx->r15, ctx->r11);
L_800173B8:
    // 0x800173B8: lw          $t5, 0x38($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X38);
    // 0x800173BC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800173C0: and         $t6, $v0, $t1
    ctx->r14 = ctx->r2 & ctx->r9;
    // 0x800173C4: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
L_800173C8:
    // 0x800173C8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800173CC: b           L_800173D8
    // 0x800173D0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_800173D8;
    // 0x800173D0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800173D4:
    // 0x800173D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800173D8:
    // 0x800173D8: jal         0x800185C8
    // 0x800173DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800185C8_191C8(rdram, ctx);
        goto after_11;
    // 0x800173DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_11:
    // 0x800173E0: b           L_800176DC
    // 0x800173E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800176DC;
    // 0x800173E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800173E8:
    // 0x800173E8: jal         0x80016AA4
    // 0x800173EC: nop

    func_80016AA4_176A4(rdram, ctx);
        goto after_12;
    // 0x800173EC: nop

    after_12:
    // 0x800173F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800173F4: jal         0x80019D40
    // 0x800173F8: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_13;
    // 0x800173F8: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_13:
    // 0x800173FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80017400: lw          $t8, -0x7B60($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7B60);
    // 0x80017404: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80017408: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8001740C: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    // 0x80017410: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x80017414: jal         0x800196F0
    // 0x80017418: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_14;
    // 0x80017418: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_14:
    // 0x8001741C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80017420: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80017424: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80017428: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x8001742C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80017430: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80017434: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80017438: b           L_800176D8
    // 0x8001743C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_800176D8;
    // 0x8001743C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80017440:
    // 0x80017440: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80017444: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x80017448: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x8001744C: beq         $v1, $zero, L_800174C4
    if (ctx->r3 == 0) {
        // 0x80017450: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800174C4;
    }
    // 0x80017450: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80017454: sll         $t3, $v1, 0
    ctx->r11 = S32(ctx->r3 << 0);
    // 0x80017458: bgez        $t3, L_80017470
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8001745C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80017470;
    }
    // 0x8001745C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017460: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017464: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80017468: b           L_800174D0
    // 0x8001746C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_800174D0;
    // 0x8001746C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80017470:
    // 0x80017470: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017474: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017478: bne         $at, $zero, L_800174A8
    if (ctx->r1 != 0) {
        // 0x8001747C: lui         $t1, 0x80FF
        ctx->r9 = S32(0X80FF << 16);
            goto L_800174A8;
    }
    // 0x8001747C: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017480: srl         $t5, $v0, 24
    ctx->r13 = S32(U32(ctx->r2) >> 24);
    // 0x80017484: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80017488: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8001748C: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x80017490: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x80017494: lw          $t4, -0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, -0X8);
    // 0x80017498: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8001749C: and         $t7, $v0, $t1
    ctx->r15 = ctx->r2 & ctx->r9;
    // 0x800174A0: b           L_800174B8
    // 0x800174A4: addu        $v1, $t4, $t7
    ctx->r3 = ADD32(ctx->r12, ctx->r15);
        goto L_800174B8;
    // 0x800174A4: addu        $v1, $t4, $t7
    ctx->r3 = ADD32(ctx->r12, ctx->r15);
L_800174A8:
    // 0x800174A8: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x800174AC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800174B0: and         $t5, $v0, $t1
    ctx->r13 = ctx->r2 & ctx->r9;
    // 0x800174B4: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
L_800174B8:
    // 0x800174B8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800174BC: b           L_800174D0
    // 0x800174C0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
        goto L_800174D0;
    // 0x800174C0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_800174C4:
    // 0x800174C4: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800174C8: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800174CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800174D0:
    // 0x800174D0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800174D4: bnel        $v1, $zero, L_800174E8
    if (ctx->r3 != 0) {
        // 0x800174D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800174E8;
    }
    goto skip_5;
    // 0x800174D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    skip_5:
    // 0x800174DC: b           L_800176DC
    // 0x800174E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800176DC;
    // 0x800174E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800174E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
L_800174E8:
    // 0x800174E8: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x800174EC: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x800174F0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800174F4: mflo        $t6
    ctx->r14 = lo;
    // 0x800174F8: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x800174FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017500: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80017504: sw          $t8, -0x7AE4($at)
    MEM_W(-0X7AE4, ctx->r1) = ctx->r24;
    // 0x80017508: bgez        $t9, L_80017520
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001750C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80017520;
    }
    // 0x8001750C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80017510: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80017514: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80017518: nop

    // 0x8001751C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80017520:
    // 0x80017520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017524: swc1        $f18, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f18.u32l;
    // 0x80017528: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8001752C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017530: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80017534: swc1        $f8, -0x7AF0($at)
    MEM_W(-0X7AF0, ctx->r1) = ctx->f8.u32l;
    // 0x80017538: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x8001753C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017540: swc1        $f6, -0x7AEC($at)
    MEM_W(-0X7AEC, ctx->r1) = ctx->f6.u32l;
    // 0x80017544: lw          $t4, -0x4($a3)
    ctx->r12 = MEM_W(ctx->r7, -0X4);
    // 0x80017548: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001754C: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80017550: beq         $t4, $zero, L_800175B4
    if (ctx->r12 == 0) {
        // 0x80017554: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_800175B4;
    }
    // 0x80017554: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80017558: sll         $t7, $t4, 0
    ctx->r15 = S32(ctx->r12 << 0);
    // 0x8001755C: bgez        $t7, L_8001756C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80017560: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_8001756C;
    }
    // 0x80017560: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017564: b           L_800175A8
    // 0x80017568: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
        goto L_800175A8;
    // 0x80017568: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_8001756C:
    // 0x8001756C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017570: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017574: bne         $at, $zero, L_80017598
    if (ctx->r1 != 0) {
        // 0x80017578: srl         $t3, $v0, 24
        ctx->r11 = S32(U32(ctx->r2) >> 24);
            goto L_80017598;
    }
    // 0x80017578: srl         $t3, $v0, 24
    ctx->r11 = S32(U32(ctx->r2) >> 24);
    // 0x8001757C: andi        $t5, $t3, 0xF
    ctx->r13 = ctx->r11 & 0XF;
    // 0x80017580: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80017584: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x80017588: lw          $t9, -0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, -0X8);
    // 0x8001758C: and         $t4, $v0, $t1
    ctx->r12 = ctx->r2 & ctx->r9;
    // 0x80017590: b           L_800175A4
    // 0x80017594: addu        $v1, $t9, $t4
    ctx->r3 = ADD32(ctx->r25, ctx->r12);
        goto L_800175A4;
    // 0x80017594: addu        $v1, $t9, $t4
    ctx->r3 = ADD32(ctx->r25, ctx->r12);
L_80017598:
    // 0x80017598: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x8001759C: and         $t3, $v0, $t1
    ctx->r11 = ctx->r2 & ctx->r9;
    // 0x800175A0: addu        $v1, $t7, $t3
    ctx->r3 = ADD32(ctx->r15, ctx->r11);
L_800175A4:
    // 0x800175A4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_800175A8:
    // 0x800175A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800175AC: b           L_800175B8
    // 0x800175B0: sw          $a1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r5;
        goto L_800175B8;
    // 0x800175B0: sw          $a1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r5;
L_800175B4:
    // 0x800175B4: sw          $zero, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = 0;
L_800175B8:
    // 0x800175B8: jal         0x80016AA4
    // 0x800175BC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_80016AA4_176A4(rdram, ctx);
        goto after_15;
    // 0x800175BC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_15:
    // 0x800175C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800175C4: jal         0x80019D40
    // 0x800175C8: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_80019D40_1A940(rdram, ctx);
        goto after_16;
    // 0x800175C8: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_16:
    // 0x800175CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800175D0: lw          $t5, -0x7AE4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7AE4);
    // 0x800175D4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800175D8: lui         $t1, 0x80FF
    ctx->r9 = S32(0X80FF << 16);
    // 0x800175DC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x800175E0: addiu       $t0, $t0, -0x7B10
    ctx->r8 = ADD32(ctx->r8, -0X7B10);
    // 0x800175E4: beq         $t5, $zero, L_80017684
    if (ctx->r13 == 0) {
        // 0x800175E8: lw          $a3, 0x6C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X6C);
            goto L_80017684;
    }
    // 0x800175E8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x800175EC: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800175F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800175F4: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x800175F8: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x800175FC: beq         $t6, $zero, L_80017674
    if (ctx->r14 == 0) {
        // 0x80017600: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80017674;
    }
    // 0x80017600: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80017604: sll         $t8, $t6, 0
    ctx->r24 = S32(ctx->r14 << 0);
    // 0x80017608: bgez        $t8, L_80017620
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8001760C: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_80017620;
    }
    // 0x8001760C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80017610: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017614: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x80017618: b           L_80017678
    // 0x8001761C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_80017678;
    // 0x8001761C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80017620:
    // 0x80017620: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80017624: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x80017628: bne         $at, $zero, L_80017658
    if (ctx->r1 != 0) {
        // 0x8001762C: lui         $s0, 0x8017
        ctx->r16 = S32(0X8017 << 16);
            goto L_80017658;
    }
    // 0x8001762C: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017630: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017634: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x80017638: srl         $t9, $v0, 24
    ctx->r25 = S32(U32(ctx->r2) >> 24);
    // 0x8001763C: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x80017640: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x80017644: addu        $t3, $s0, $t7
    ctx->r11 = ADD32(ctx->r16, ctx->r15);
    // 0x80017648: lw          $t5, -0x8($t3)
    ctx->r13 = MEM_W(ctx->r11, -0X8);
    // 0x8001764C: and         $t6, $v0, $t1
    ctx->r14 = ctx->r2 & ctx->r9;
    // 0x80017650: b           L_80017668
    // 0x80017654: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
        goto L_80017668;
    // 0x80017654: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_80017658:
    // 0x80017658: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x8001765C: and         $t9, $v0, $t1
    ctx->r25 = ctx->r2 & ctx->r9;
    // 0x80017660: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x80017664: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80017668:
    // 0x80017668: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8001766C: b           L_80017678
    // 0x80017670: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_80017678;
    // 0x80017670: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80017674:
    // 0x80017674: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
L_80017678:
    // 0x80017678: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x8001767C: jal         0x80018B28
    // 0x80017680: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    func_80018B28_19728(rdram, ctx);
        goto after_17;
    // 0x80017680: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    after_17:
L_80017684:
    // 0x80017684: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80017688: lw          $s0, -0x7B60($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7B60);
    // 0x8001768C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80017690: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80017694: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80017698: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x8001769C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800176A0: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x800176A4: nop

    // 0x800176A8: bc1tl       L_800176C4
    if (c1cs) {
        // 0x800176AC: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_800176C4;
    }
    goto skip_6;
    // 0x800176AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_6:
    // 0x800176B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800176B4: nop

    // 0x800176B8: sub.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x800176BC: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
    // 0x800176C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800176C4:
    // 0x800176C4: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x800176C8: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800176CC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800176D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800176D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_800176D8:
    // 0x800176D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800176DC:
    // 0x800176DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800176E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800176E4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800176E8: jr          $ra
    // 0x800176EC: nop

    TRACE_RETURN()
    return;
    // 0x800176EC: nop

;}
RECOMP_FUNC void func_800119D4_125D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800119D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800119D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800119DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800119E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800119E4: jal         0x80035DFC
    // 0x800119E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035DFC_369FC(rdram, ctx);
        goto after_0;
    // 0x800119E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800119EC: bne         $v0, $zero, L_800119FC
    if (ctx->r2 != 0) {
        // 0x800119F0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800119FC;
    }
    // 0x800119F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800119F4: b           L_80011A28
    // 0x800119F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80011A28;
    // 0x800119F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800119FC:
    // 0x800119FC: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80011A00: addiu       $t7, $t7, 0x3930
    ctx->r15 = ADD32(ctx->r15, 0X3930);
    // 0x80011A04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80011A08: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80011A0C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80011A10: sb          $t6, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r14;
    // 0x80011A14: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
    // 0x80011A18: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80011A1C: sb          $zero, 0x65($v1)
    MEM_B(0X65, ctx->r3) = 0;
    // 0x80011A20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80011A24: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
L_80011A28:
    // 0x80011A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80011A30: jr          $ra
    // 0x80011A34: nop

    TRACE_RETURN()
    return;
    // 0x80011A34: nop

;}
RECOMP_FUNC void func_8000B6E0_C2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B6E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B6E8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B6EC: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B6F0: addiu       $a1, $a1, -0x39F8
    ctx->r5 = ADD32(ctx->r5, -0X39F8);
    // 0x8000B6F4: addiu       $a0, $a0, -0x36F0
    ctx->r4 = ADD32(ctx->r4, -0X36F0);
    // 0x8000B6F8: jal         0x80004208
    // 0x8000B6FC: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    func_80004208_4E08(rdram, ctx);
        goto after_0;
    // 0x8000B6FC: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    after_0:
    // 0x8000B700: jal         0x8000B5D0
    // 0x8000B704: nop

    func_8000B5D0_C1D0(rdram, ctx);
        goto after_1;
    // 0x8000B704: nop

    after_1:
    // 0x8000B708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B710: jr          $ra
    // 0x8000B714: nop

    TRACE_RETURN()
    return;
    // 0x8000B714: nop

;}
RECOMP_FUNC void func_80010230_10E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010230: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80010234: lw          $t9, 0x7C80($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7C80);
    // 0x80010238: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001023C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80010240: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80010244: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80010248: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001024C: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80010250: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80010254: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80010258: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001025C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80010260: beq         $t9, $zero, L_80010290
    if (ctx->r25 == 0) {
        // 0x80010264: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80010290;
    }
    // 0x80010264: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80010268: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8001026C: addiu       $t0, $t0, 0x7C78
    ctx->r8 = ADD32(ctx->r8, 0X7C78);
    // 0x80010270: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80010274:
    // 0x80010274: sltiu       $at, $v1, 0x28
    ctx->r1 = ctx->r3 < 0X28 ? 1 : 0;
    // 0x80010278: beq         $at, $zero, L_80010290
    if (ctx->r1 == 0) {
        // 0x8001027C: sll         $t1, $v1, 4
        ctx->r9 = S32(ctx->r3 << 4);
            goto L_80010290;
    }
    // 0x8001027C: sll         $t1, $v1, 4
    ctx->r9 = S32(ctx->r3 << 4);
    // 0x80010280: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80010284: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80010288: bnel        $t3, $zero, L_80010274
    if (ctx->r11 != 0) {
        // 0x8001028C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80010274;
    }
    goto skip_0;
    // 0x8001028C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_80010290:
    // 0x80010290: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80010294: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80010298: bne         $v1, $at, L_800102A8
    if (ctx->r3 != ctx->r1) {
        // 0x8001029C: addiu       $t0, $t0, 0x7C78
        ctx->r8 = ADD32(ctx->r8, 0X7C78);
            goto L_800102A8;
    }
    // 0x8001029C: addiu       $t0, $t0, 0x7C78
    ctx->r8 = ADD32(ctx->r8, 0X7C78);
    // 0x800102A0: jr          $ra
    // 0x800102A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x800102A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800102A8:
    // 0x800102A8: sll         $t4, $v1, 4
    ctx->r12 = S32(ctx->r3 << 4);
    // 0x800102AC: addu        $a0, $t0, $t4
    ctx->r4 = ADD32(ctx->r8, ctx->r12);
    // 0x800102B0: lhu         $t5, 0x2($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2);
    // 0x800102B4: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800102B8: lhu         $t7, 0x16($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X16);
    // 0x800102BC: sh          $a1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r5;
    // 0x800102C0: sb          $a2, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r6;
    // 0x800102C4: sb          $a3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r7;
    // 0x800102C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800102CC: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x800102D0: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x800102D4: sh          $t7, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r15;
    // 0x800102D8: jr          $ra
    // 0x800102DC: nop

    TRACE_RETURN()
    return;
    // 0x800102DC: nop

;}
RECOMP_FUNC void __osPfsDeclearPage(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044984: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80044988: lbu         $t6, 0x63($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X63);
    // 0x8004498C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044990: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80044994: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80044998: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8004499C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800449A0: blez        $t6, L_800449B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800449A4: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_800449B4;
    }
    // 0x800449A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800449A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800449AC: b           L_800449C0
    // 0x800449B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_800449C0;
    // 0x800449B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_800449B4:
    // 0x800449B4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800449B8: lw          $t9, 0x60($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X60);
    // 0x800449BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800449C0:
    // 0x800449C0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800449C4: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x800449C8: beq         $at, $zero, L_80044A04
    if (ctx->r1 == 0) {
        // 0x800449CC: sw          $t0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r8;
            goto L_80044A04;
    }
    // 0x800449CC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_800449D0:
    // 0x800449D0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800449D4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800449D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800449DC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800449E0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800449E4: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800449E8: beq         $t5, $at, L_80044A04
    if (ctx->r13 == ctx->r1) {
        // 0x800449EC: nop
    
            goto L_80044A04;
    }
    // 0x800449EC: nop

    // 0x800449F0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800449F4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800449F8: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x800449FC: bne         $at, $zero, L_800449D0
    if (ctx->r1 != 0) {
        // 0x80044A00: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_800449D0;
    }
    // 0x80044A00: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
L_80044A04:
    // 0x80044A04: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80044A08: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80044A0C: bne         $t8, $at, L_80044A28
    if (ctx->r24 != ctx->r1) {
        // 0x80044A10: nop
    
            goto L_80044A28;
    }
    // 0x80044A10: nop

    // 0x80044A14: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80044A18: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80044A1C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80044A20: b           L_80044BD8
    // 0x80044A24: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_80044BD8;
    // 0x80044A24: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80044A28:
    // 0x80044A28: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80044A2C:
    // 0x80044A2C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80044A30: addu        $t1, $sp, $t2
    ctx->r9 = ADD32(ctx->r29, ctx->r10);
    // 0x80044A34: sb          $zero, 0x24($t1)
    MEM_B(0X24, ctx->r9) = 0;
    // 0x80044A38: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80044A3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80044A40: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x80044A44: bne         $at, $zero, L_80044A2C
    if (ctx->r1 != 0) {
        // 0x80044A48: sw          $t4, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r12;
            goto L_80044A2C;
    }
    // 0x80044A48: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80044A4C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80044A50: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80044A54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80044A58: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80044A5C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80044A60: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80044A64: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80044A68: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80044A6C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80044A70: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80044A74: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x80044A78: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x80044A7C: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80044A80: beq         $at, $zero, L_80044B54
    if (ctx->r1 == 0) {
        // 0x80044A84: slti        $at, $t9, 0x80
        ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
            goto L_80044B54;
    }
    // 0x80044A84: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x80044A88: beq         $at, $zero, L_80044B54
    if (ctx->r1 == 0) {
        // 0x80044A8C: nop
    
            goto L_80044B54;
    }
    // 0x80044A8C: nop

L_80044A90:
    // 0x80044A90: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80044A94: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80044A98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80044A9C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80044AA0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80044AA4: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80044AA8: bne         $t7, $at, L_80044B20
    if (ctx->r15 != ctx->r1) {
        // 0x80044AAC: nop
    
            goto L_80044B20;
    }
    // 0x80044AAC: nop

    // 0x80044AB0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80044AB4: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    // 0x80044AB8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80044ABC: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x80044AC0: addu        $t1, $t3, $t0
    ctx->r9 = ADD32(ctx->r11, ctx->r8);
    // 0x80044AC4: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
    // 0x80044AC8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80044ACC: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80044AD0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80044AD4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80044AD8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80044ADC: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
    // 0x80044AE0: lbu         $a3, 0x63($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X63);
    // 0x80044AE4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80044AE8: jal         0x80044BE8
    // 0x80044AEC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    __osClearPage(rdram, ctx);
        goto after_0;
    // 0x80044AEC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_0:
    // 0x80044AF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80044AF4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80044AF8: beq         $t2, $zero, L_80044B08
    if (ctx->r10 == 0) {
        // 0x80044AFC: nop
    
            goto L_80044B08;
    }
    // 0x80044AFC: nop

    // 0x80044B00: b           L_80044BD8
    // 0x80044B04: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80044BD8;
    // 0x80044B04: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80044B08:
    // 0x80044B08: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80044B0C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80044B10: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80044B14: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80044B18: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80044B1C: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
L_80044B20:
    // 0x80044B20: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80044B24: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80044B28: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80044B2C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80044B30: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80044B34: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80044B38: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80044B3C: beq         $at, $zero, L_80044B54
    if (ctx->r1 == 0) {
        // 0x80044B40: nop
    
            goto L_80044B54;
    }
    // 0x80044B40: nop

    // 0x80044B44: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80044B48: slti        $at, $t2, 0x80
    ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
    // 0x80044B4C: bne         $at, $zero, L_80044A90
    if (ctx->r1 != 0) {
        // 0x80044B50: nop
    
            goto L_80044A90;
    }
    // 0x80044B50: nop

L_80044B54:
    // 0x80044B54: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80044B58: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80044B5C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80044B60: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x80044B64: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80044B68: bne         $t1, $at, L_80044B9C
    if (ctx->r9 != ctx->r1) {
        // 0x80044B6C: nop
    
            goto L_80044B9C;
    }
    // 0x80044B6C: nop

    // 0x80044B70: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80044B74: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80044B78: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x80044B7C: slt         $at, $t4, $t0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80044B80: beq         $at, $zero, L_80044B9C
    if (ctx->r1 == 0) {
        // 0x80044B84: nop
    
            goto L_80044B9C;
    }
    // 0x80044B84: nop

    // 0x80044B88: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80044B8C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80044B90: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80044B94: b           L_80044BD8
    // 0x80044B98: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_80044BD8;
    // 0x80044B98: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80044B9C:
    // 0x80044B9C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80044BA0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80044BA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80044BA8: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x80044BAC: addu        $t1, $t2, $t8
    ctx->r9 = ADD32(ctx->r10, ctx->r24);
    // 0x80044BB0: sh          $t7, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r15;
    // 0x80044BB4: lbu         $a3, 0x63($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X63);
    // 0x80044BB8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80044BBC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80044BC0: jal         0x80044BE8
    // 0x80044BC4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    __osClearPage(rdram, ctx);
        goto after_1;
    // 0x80044BC4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80044BC8: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80044BCC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80044BD0: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x80044BD4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80044BD8:
    // 0x80044BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044BDC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80044BE0: jr          $ra
    // 0x80044BE4: nop

    TRACE_RETURN()
    return;
    // 0x80044BE4: nop

;}
RECOMP_FUNC void alEnvmixerParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FC14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004FC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004FC1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004FC20: beq         $a1, $v0, L_8004FCC0
    if (ctx->r5 == ctx->r2) {
        // 0x8004FC24: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8004FCC0;
    }
    // 0x8004FC24: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004FC28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004FC2C: beq         $a1, $at, L_8004FC4C
    if (ctx->r5 == ctx->r1) {
        // 0x8004FC30: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8004FC4C;
    }
    // 0x8004FC30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004FC34: beq         $a1, $at, L_8004FC6C
    if (ctx->r5 == ctx->r1) {
        // 0x8004FC38: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8004FC6C;
    }
    // 0x8004FC38: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8004FC3C: beql        $a1, $at, L_8004FC9C
    if (ctx->r5 == ctx->r1) {
        // 0x8004FC40: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_8004FC9C;
    }
    goto skip_0;
    // 0x8004FC40: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x8004FC44: b           L_8004FCCC
    // 0x8004FC48: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_8004FCCC;
    // 0x8004FC48: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8004FC4C:
    // 0x8004FC4C: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x8004FC50: beql        $v0, $zero, L_8004FC64
    if (ctx->r2 == 0) {
        // 0x8004FC54: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_8004FC64;
    }
    goto skip_1;
    // 0x8004FC54: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x8004FC58: b           L_8004FC64
    // 0x8004FC5C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_8004FC64;
    // 0x8004FC5C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8004FC60: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_8004FC64:
    // 0x8004FC64: b           L_8004FCE0
    // 0x8004FC68: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_8004FCE0;
    // 0x8004FC68: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_8004FC6C:
    // 0x8004FC6C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8004FC70: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x8004FC74: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x8004FC78: beq         $a0, $zero, L_8004FCE0
    if (ctx->r4 == 0) {
        // 0x8004FC7C: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_8004FCE0;
    }
    // 0x8004FC7C: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x8004FC80: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004FC84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8004FC88: jalr        $t9
    // 0x8004FC8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004FC8C: nop

    after_0:
    // 0x8004FC90: b           L_8004FCE4
    // 0x8004FC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004FCE4;
    // 0x8004FC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004FC98: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8004FC9C:
    // 0x8004FC9C: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x8004FCA0: beql        $a0, $zero, L_8004FCE4
    if (ctx->r4 == 0) {
        // 0x8004FCA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004FCE4;
    }
    goto skip_2;
    // 0x8004FCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8004FCA8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004FCAC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8004FCB0: jalr        $t9
    // 0x8004FCB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8004FCB4: nop

    after_1:
    // 0x8004FCB8: b           L_8004FCE4
    // 0x8004FCBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004FCE4;
    // 0x8004FCBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004FCC0:
    // 0x8004FCC0: b           L_8004FCE0
    // 0x8004FCC4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_8004FCE0;
    // 0x8004FCC4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x8004FCC8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8004FCCC:
    // 0x8004FCCC: beql        $a0, $zero, L_8004FCE4
    if (ctx->r4 == 0) {
        // 0x8004FCD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004FCE4;
    }
    goto skip_3;
    // 0x8004FCD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8004FCD4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004FCD8: jalr        $t9
    // 0x8004FCDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8004FCDC: nop

    after_2:
L_8004FCE0:
    // 0x8004FCE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004FCE4:
    // 0x8004FCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004FCE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004FCEC: jr          $ra
    // 0x8004FCF0: nop

    TRACE_RETURN()
    return;
    // 0x8004FCF0: nop

;}
RECOMP_FUNC void func_8000AA00_B600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AA00: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8000AA04: lw          $v1, -0x2CD8($t6)
    ctx->r3 = MEM_W(ctx->r14, -0X2CD8);
    // 0x8000AA08: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8000AA0C: addiu       $a2, $a2, -0x254C
    ctx->r6 = ADD32(ctx->r6, -0X254C);
    // 0x8000AA10: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8000AA14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000AA18: beq         $v1, $zero, L_8000AAE0
    if (ctx->r3 == 0) {
        // 0x8000AA1C: sw          $v1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r3;
            goto L_8000AAE0;
    }
    // 0x8000AA1C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x8000AA20: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x8000AA24: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x8000AA28: addiu       $t0, $zero, 0x374
    ctx->r8 = ADD32(0, 0X374);
L_8000AA2C:
    // 0x8000AA2C: beq         $v0, $zero, L_8000AA4C
    if (ctx->r2 == 0) {
        // 0x8000AA30: addiu       $t1, $a3, 0x7FFF
        ctx->r9 = ADD32(ctx->r7, 0X7FFF);
            goto L_8000AA4C;
    }
    // 0x8000AA30: addiu       $t1, $a3, 0x7FFF
    ctx->r9 = ADD32(ctx->r7, 0X7FFF);
    // 0x8000AA34: lhu         $t7, 0x20($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X20);
    // 0x8000AA38: lhu         $t8, 0x20($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X20);
    // 0x8000AA3C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8000AA40: bnel        $at, $zero, L_8000AAD4
    if (ctx->r1 != 0) {
        // 0x8000AA44: lw          $t4, 0x0($a2)
        ctx->r12 = MEM_W(ctx->r6, 0X0);
            goto L_8000AAD4;
    }
    goto skip_0;
    // 0x8000AA44: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x8000AA48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000AA4C:
    // 0x8000AA4C: lhu         $t9, 0x22($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X22);
    // 0x8000AA50: lhu         $t1, 0x2E25($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X2E25);
    // 0x8000AA54: and         $t2, $t9, $t1
    ctx->r10 = ctx->r25 & ctx->r9;
    // 0x8000AA58: andi        $t3, $t2, 0xD0
    ctx->r11 = ctx->r10 & 0XD0;
    // 0x8000AA5C: beql        $t3, $zero, L_8000AA70
    if (ctx->r11 == 0) {
        // 0x8000AA60: lw          $a0, 0x18($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X18);
            goto L_8000AA70;
    }
    goto skip_1;
    // 0x8000AA60: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    skip_1:
    // 0x8000AA64: b           L_8000AAD0
    // 0x8000AA68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8000AAD0;
    // 0x8000AA68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000AA6C: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
L_8000AA70:
    // 0x8000AA70: beql        $a0, $zero, L_8000AAD4
    if (ctx->r4 == 0) {
        // 0x8000AA74: lw          $t4, 0x0($a2)
        ctx->r12 = MEM_W(ctx->r6, 0X0);
            goto L_8000AAD4;
    }
    goto skip_2;
    // 0x8000AA74: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    skip_2:
    // 0x8000AA78: beql        $a0, $zero, L_8000AAD4
    if (ctx->r4 == 0) {
        // 0x8000AA7C: lw          $t4, 0x0($a2)
        ctx->r12 = MEM_W(ctx->r6, 0X0);
            goto L_8000AAD4;
    }
    goto skip_3;
    // 0x8000AA7C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    skip_3:
    // 0x8000AA80: lbu         $t4, 0x4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4);
L_8000AA84:
    // 0x8000AA84: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x8000AA88: bnel        $t5, $zero, L_8000AAC0
    if (ctx->r13 != 0) {
        // 0x8000AA8C: lw          $a0, 0x0($a0)
        ctx->r4 = MEM_W(ctx->r4, 0X0);
            goto L_8000AAC0;
    }
    goto skip_4;
    // 0x8000AA8C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    skip_4:
    // 0x8000AA90: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x8000AA94: multu       $t6, $t0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000AA98: mflo        $t7
    ctx->r15 = lo;
    // 0x8000AA9C: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
    // 0x8000AAA0: lbu         $t8, 0x370($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X370);
    // 0x8000AAA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000AAA8: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x8000AAAC: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
    // 0x8000AAB0: lbu         $t2, 0x370($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X370);
    // 0x8000AAB4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000AAB8: sb          $t3, 0x370($v1)
    MEM_B(0X370, ctx->r3) = ctx->r11;
    // 0x8000AABC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_8000AAC0:
    // 0x8000AAC0: beql        $a0, $zero, L_8000AAD4
    if (ctx->r4 == 0) {
        // 0x8000AAC4: lw          $t4, 0x0($a2)
        ctx->r12 = MEM_W(ctx->r6, 0X0);
            goto L_8000AAD4;
    }
    goto skip_5;
    // 0x8000AAC4: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    skip_5:
    // 0x8000AAC8: bnel        $a0, $zero, L_8000AA84
    if (ctx->r4 != 0) {
        // 0x8000AACC: lbu         $t4, 0x4($a0)
        ctx->r12 = MEM_BU(ctx->r4, 0X4);
            goto L_8000AA84;
    }
    goto skip_6;
    // 0x8000AACC: lbu         $t4, 0x4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4);
    skip_6:
L_8000AAD0:
    // 0x8000AAD0: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
L_8000AAD4:
    // 0x8000AAD4: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8000AAD8: bne         $v1, $zero, L_8000AA2C
    if (ctx->r3 != 0) {
        // 0x8000AADC: sw          $v1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r3;
            goto L_8000AA2C;
    }
    // 0x8000AADC: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
L_8000AAE0:
    // 0x8000AAE0: jr          $ra
    // 0x8000AAE4: nop

    TRACE_RETURN()
    return;
    // 0x8000AAE4: nop

;}
RECOMP_FUNC void func_80005220_5E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005220: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80005224: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80005228: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x8000522C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80005230: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80005234: beq         $at, $zero, L_8000538C
    if (ctx->r1 == 0) {
        // 0x80005238: nop
    
            goto L_8000538C;
    }
    // 0x80005238: nop

    // 0x8000523C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
L_80005240:
    // 0x80005240: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80005244: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x80005248: beq         $at, $zero, L_800052B0
    if (ctx->r1 == 0) {
        // 0x8000524C: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_800052B0;
    }
    // 0x8000524C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80005250: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80005254: sra         $t0, $a1, 2
    ctx->r8 = S32(SIGNED(ctx->r5) >> 2);
    // 0x80005258: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x8000525C: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x80005260: andi        $t3, $t0, 0xFFFF
    ctx->r11 = ctx->r8 & 0XFFFF;
    // 0x80005264: addiu       $t1, $t3, -0x1
    ctx->r9 = ADD32(ctx->r11, -0X1);
    // 0x80005268: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000526C: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x80005270: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x80005274: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80005278: subu        $a2, $a3, $t2
    ctx->r6 = SUB32(ctx->r7, ctx->r10);
    // 0x8000527C: beq         $t3, $zero, L_80005380
    if (ctx->r11 == 0) {
        // 0x80005280: or          $t1, $t4, $zero
        ctx->r9 = ctx->r12 | 0;
            goto L_80005380;
    }
    // 0x80005280: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
L_80005284:
    // 0x80005284: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80005288: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8000528C: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80005290: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x80005294: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80005298: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8000529C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800052A0: bne         $v1, $zero, L_80005284
    if (ctx->r3 != 0) {
        // 0x800052A4: sb          $t5, -0x1($a3)
        MEM_B(-0X1, ctx->r7) = ctx->r13;
            goto L_80005284;
    }
    // 0x800052A4: sb          $t5, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r13;
    // 0x800052A8: b           L_80005384
    // 0x800052AC: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
        goto L_80005384;
    // 0x800052AC: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
L_800052B0:
    // 0x800052B0: slti        $at, $a1, 0xA0
    ctx->r1 = SIGNED(ctx->r5) < 0XA0 ? 1 : 0;
    // 0x800052B4: beq         $at, $zero, L_800052F8
    if (ctx->r1 == 0) {
        // 0x800052B8: andi        $t7, $a1, 0x1F
        ctx->r15 = ctx->r5 & 0X1F;
            goto L_800052F8;
    }
    // 0x800052B8: andi        $t7, $a1, 0x1F
    ctx->r15 = ctx->r5 & 0X1F;
    // 0x800052BC: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x800052C0: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x800052C4: beq         $t7, $zero, L_80005380
    if (ctx->r15 == 0) {
        // 0x800052C8: or          $t1, $t8, $zero
        ctx->r9 = ctx->r24 | 0;
            goto L_80005380;
    }
    // 0x800052C8: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
L_800052CC:
    // 0x800052CC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x800052D0: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x800052D4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800052D8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x800052DC: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x800052E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800052E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800052E8: bne         $v1, $zero, L_800052CC
    if (ctx->r3 != 0) {
        // 0x800052EC: sb          $t9, -0x1($a3)
        MEM_B(-0X1, ctx->r7) = ctx->r25;
            goto L_800052CC;
    }
    // 0x800052EC: sb          $t9, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r25;
    // 0x800052F0: b           L_80005384
    // 0x800052F4: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
        goto L_80005384;
    // 0x800052F4: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
L_800052F8:
    // 0x800052F8: slti        $at, $a1, 0xE0
    ctx->r1 = SIGNED(ctx->r5) < 0XE0 ? 1 : 0;
    // 0x800052FC: beq         $at, $zero, L_8000531C
    if (ctx->r1 == 0) {
        // 0x80005300: andi        $t1, $a1, 0x1F
        ctx->r9 = ctx->r5 & 0X1F;
            goto L_8000531C;
    }
    // 0x80005300: andi        $t1, $a1, 0x1F
    ctx->r9 = ctx->r5 & 0X1F;
    // 0x80005304: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80005308: andi        $t3, $t1, 0xFFFF
    ctx->r11 = ctx->r9 & 0XFFFF;
    // 0x8000530C: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x80005310: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x80005314: b           L_80005350
    // 0x80005318: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_80005350;
    // 0x80005318: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8000531C:
    // 0x8000531C: slti        $at, $a1, 0xFF
    ctx->r1 = SIGNED(ctx->r5) < 0XFF ? 1 : 0;
    // 0x80005320: beq         $at, $zero, L_8000533C
    if (ctx->r1 == 0) {
        // 0x80005324: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8000533C;
    }
    // 0x80005324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80005328: andi        $t1, $a1, 0x1F
    ctx->r9 = ctx->r5 & 0X1F;
    // 0x8000532C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80005330: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x80005334: b           L_80005350
    // 0x80005338: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
        goto L_80005350;
    // 0x80005338: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
L_8000533C:
    // 0x8000533C: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x80005340: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80005344: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80005348: andi        $t5, $t1, 0xFFFF
    ctx->r13 = ctx->r9 & 0XFFFF;
    // 0x8000534C: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
L_80005350:
    // 0x80005350: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80005354: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80005358: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x8000535C: beq         $v1, $zero, L_80005380
    if (ctx->r3 == 0) {
        // 0x80005360: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_80005380;
    }
    // 0x80005360: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_80005364:
    // 0x80005364: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80005368: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8000536C: andi        $t7, $t1, 0xFFFF
    ctx->r15 = ctx->r9 & 0XFFFF;
    // 0x80005370: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80005374: sb          $a2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r6;
    // 0x80005378: bne         $v1, $zero, L_80005364
    if (ctx->r3 != 0) {
        // 0x8000537C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_80005364;
    }
    // 0x8000537C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_80005380:
    // 0x80005380: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
L_80005384:
    // 0x80005384: bnel        $at, $zero, L_80005240
    if (ctx->r1 != 0) {
        // 0x80005388: lbu         $v1, 0x0($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X0);
            goto L_80005240;
    }
    goto skip_0;
    // 0x80005388: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    skip_0:
L_8000538C:
    // 0x8000538C: jr          $ra
    // 0x80005390: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    TRACE_RETURN()
    return;
    // 0x80005390: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void func_800163F8_16FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800163F8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800163FC: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x80016400: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80016404: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001640C: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x80016410: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016414: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80016418: mflo        $t7
    ctx->r15 = lo;
    // 0x8001641C: addu        $v1, $t7, $a0
    ctx->r3 = ADD32(ctx->r15, ctx->r4);
    // 0x80016420: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80016424: beq         $t8, $zero, L_80016454
    if (ctx->r24 == 0) {
        // 0x80016428: nop
    
            goto L_80016454;
    }
    // 0x80016428: nop

    // 0x8001642C: lw          $t0, -0x7B70($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7B70);
    // 0x80016430: bgez        $v1, L_80016440
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80016434: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_80016440;
    }
    // 0x80016434: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80016438: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8001643C: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80016440:
    // 0x80016440: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80016444: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x80016448: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x8001644C: jr          $ra
    // 0x80016450: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    TRACE_RETURN()
    return;
    // 0x80016450: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80016454:
    // 0x80016454: lw          $t4, -0x7B70($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B70);
    // 0x80016458: bgez        $v1, L_80016468
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001645C: sra         $t3, $v1, 1
        ctx->r11 = S32(SIGNED(ctx->r3) >> 1);
            goto L_80016468;
    }
    // 0x8001645C: sra         $t3, $v1, 1
    ctx->r11 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80016460: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80016464: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_80016468:
    // 0x80016468: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001646C: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
    // 0x80016470: andi        $t6, $v0, 0xF0
    ctx->r14 = ctx->r2 & 0XF0;
    // 0x80016474: sra         $v0, $t6, 4
    ctx->r2 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80016478: jr          $ra
    // 0x8001647C: nop

    TRACE_RETURN()
    return;
    // 0x8001647C: nop

;}
RECOMP_FUNC void alAuxBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050790: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80050794: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80050798: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005079C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800507A0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800507A4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800507A8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800507AC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800507B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800507B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800507B8: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x800507BC: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x800507C0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x800507C4: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x800507C8: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x800507CC: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x800507D0: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x800507D4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x800507D8: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x800507DC: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x800507E0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x800507E4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x800507E8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x800507EC: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x800507F0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800507F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800507F8: blez        $t8, L_8005083C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800507FC: addiu       $s2, $t0, 0x10
        ctx->r18 = ADD32(ctx->r8, 0X10);
            goto L_8005083C;
    }
    // 0x800507FC: addiu       $s2, $t0, 0x10
    ctx->r18 = ADD32(ctx->r8, 0X10);
    // 0x80050800: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_80050804:
    // 0x80050804: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80050808: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8005080C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80050810: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80050814: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80050818: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8005081C: jalr        $t9
    // 0x80050820: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80050820: nop

    after_0:
    // 0x80050824: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x80050828: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005082C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80050830: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80050834: bne         $at, $zero, L_80050804
    if (ctx->r1 != 0) {
        // 0x80050838: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80050804;
    }
    // 0x80050838: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8005083C:
    // 0x8005083C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80050840: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80050844: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80050848: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005084C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80050850: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80050854: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80050858: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005085C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80050860: jr          $ra
    // 0x80050864: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80050864: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80035194_35D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003519C: jal         0x800350C4
    // 0x800351A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800350C4_35CC4(rdram, ctx);
        goto after_0;
    // 0x800351A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800351A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800351A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800351AC: jr          $ra
    // 0x800351B0: nop

    TRACE_RETURN()
    return;
    // 0x800351B0: nop

;}
RECOMP_FUNC void func_800042AC_4EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800042AC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800042B0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x800042B4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800042B8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800042BC: sll         $t3, $t7, 4
    ctx->r11 = S32(ctx->r15 << 4);
    // 0x800042C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800042C4: ori         $at, $at, 0xB168
    ctx->r1 = ctx->r1 | 0XB168;
    // 0x800042C8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x800042CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800042D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800042D4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800042D8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x800042DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800042E0: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x800042E4: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
    // 0x800042E8: sh          $a3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r7;
    // 0x800042EC: jr          $ra
    // 0x800042F0: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800042F0: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_8003F2D4_3FED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F2D4: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F2D8: lw          $a0, 0x78F8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X78F8);
    // 0x8003F2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F2E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003F2E4: addiu       $v0, $v0, 0x78E8
    ctx->r2 = ADD32(ctx->r2, 0X78E8);
    // 0x8003F2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F2EC: jal         0x800141C4
    // 0x8003F2F0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8003F2F0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x8003F2F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F2F8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F2FC: sw          $v0, 0x77FC($at)
    MEM_W(0X77FC, ctx->r1) = ctx->r2;
    // 0x8003F300: jal         0x80001E50
    // 0x8003F304: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    func_80001E50_2A50(rdram, ctx);
        goto after_1;
    // 0x8003F304: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    after_1:
    // 0x8003F308: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F30C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F310: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F314: sw          $v0, 0x78EC($at)
    MEM_W(0X78EC, ctx->r1) = ctx->r2;
    // 0x8003F318: lw          $a1, 0x78E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X78E8);
    // 0x8003F31C: jal         0x8003DDC4
    // 0x8003F320: lw          $a0, 0x78F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78F4);
    func_8003DDC4_3E9C4(rdram, ctx);
        goto after_2;
    // 0x8003F320: lw          $a0, 0x78F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78F4);
    after_2:
    // 0x8003F324: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F328: lw          $a0, 0x78F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78F4);
    // 0x8003F32C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F330: subu        $t7, $v0, $a0
    ctx->r15 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F334: jal         0x8003DE48
    // 0x8003F338: sw          $t7, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r15;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_3;
    // 0x8003F338: sw          $t7, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r15;
    after_3:
    // 0x8003F33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F340: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003F344: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
    // 0x8003F348: jr          $ra
    // 0x8003F34C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003F34C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003C3C0_3CFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C3C0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C3C4: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003C3C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C3CC: lhu         $t6, 0x90($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X90);
    // 0x8003C3D0: lbu         $t7, 0x92($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X92);
    // 0x8003C3D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003C3D8: sh          $t8, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r24;
    // 0x8003C3DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C3E0: lhu         $v1, 0x90($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X90);
    // 0x8003C3E4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003C3E8: bne         $at, $zero, L_8003C474
    if (ctx->r1 != 0) {
        // 0x8003C3EC: andi        $t9, $v1, 0xFF
        ctx->r25 = ctx->r3 & 0XFF;
            goto L_8003C474;
    }
    // 0x8003C3EC: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8003C3F0: sh          $t9, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r25;
    // 0x8003C3F4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C3F8: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x8003C3FC: addiu       $a1, $a1, -0x16E0
    ctx->r5 = ADD32(ctx->r5, -0X16E0);
    // 0x8003C400: lbu         $t0, 0x6($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6);
    // 0x8003C404: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8003C408: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
    // 0x8003C40C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C410: lbu         $t2, 0x8D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X8D);
    // 0x8003C414: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x8003C418: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8003C41C: sh          $t4, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r12;
    // 0x8003C420: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C424: lbu         $t5, 0x8D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X8D);
    // 0x8003C428: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003C42C: sb          $t6, 0x8D($v0)
    MEM_B(0X8D, ctx->r2) = ctx->r14;
    // 0x8003C430: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C434: lbu         $t7, 0x8D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8D);
    // 0x8003C438: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x8003C43C: sb          $t8, 0x8D($v0)
    MEM_B(0X8D, ctx->r2) = ctx->r24;
    // 0x8003C440: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C444: lbu         $t0, 0x8D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8D);
    // 0x8003C448: lhu         $t9, 0x38($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X38);
    // 0x8003C44C: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x8003C450: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8003C454: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8003C458: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x8003C45C: sh          $t4, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r12;
    // 0x8003C460: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C464: lhu         $t5, 0x38($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X38);
    // 0x8003C468: lhu         $t6, 0x8E($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8E);
    // 0x8003C46C: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x8003C470: sh          $t7, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r15;
L_8003C474:
    // 0x8003C474: jr          $ra
    // 0x8003C478: nop

    TRACE_RETURN()
    return;
    // 0x8003C478: nop

;}
RECOMP_FUNC void func_80012304_12F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001230C: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x80012310: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80012314: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80012318: beq         $t6, $zero, L_8001233C
    if (ctx->r14 == 0) {
        // 0x8001231C: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_8001233C;
    }
    // 0x8001231C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80012320: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80012324: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80012328: lw          $a1, 0x6C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X6C);
    // 0x8001232C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80012330: jal         0x80014B74
    // 0x80012334: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_0;
    // 0x80012334: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80012338: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_8001233C:
    // 0x8001233C: lw          $a1, 0xCC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XCC);
    // 0x80012340: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80012344: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80012348: beq         $a1, $zero, L_80012364
    if (ctx->r5 == 0) {
        // 0x8001234C: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80012364;
    }
    // 0x8001234C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80012350: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80012354: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80012358: jal         0x80014B74
    // 0x8001235C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_1;
    // 0x8001235C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x80012360: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_80012364:
    // 0x80012364: jal         0x80034EF8
    // 0x80012368: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x80012368: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x8001236C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80012378: jr          $ra
    // 0x8001237C: nop

    TRACE_RETURN()
    return;
    // 0x8001237C: nop

;}
